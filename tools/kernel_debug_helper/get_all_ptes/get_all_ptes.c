/**
 * Find all ptes pointing to @page.
 *
 *   @page: Page whose ptes are going to be found.
 *   @count: Howmany entries have been found in return array. Used as return value.
 *   @ret:   Found ptes.
 *
 * Find all ptes pointing to @page using reverse mapping.
 * Note: Max ptes can be found is 128.
 * Todo: Only file-mapped pages can be found. I have not done anonymous pages yet.
 */
pte_t **kh_get_all_ptes(struct page *page, int *count)
{
#define KH_MAX_ENTRIES 128
#define CLUSTER_SIZE	min(32*PAGE_SIZE, PMD_SIZE)
#define CLUSTER_MASK	(~(CLUSTER_SIZE - 1))

	static pte_t* ptes[KH_MAX_ENTRIES];
	int i = 0;

	if (PageAnon(page)) {
		*count = 0;
	} else {
		struct address_space *mapping = page->mapping;
		pgoff_t pgoff = page->index << (PAGE_CACHE_SHIFT - PAGE_SHIFT);
		struct vm_area_struct *vma;
		struct prio_tree_iter iter;
		unsigned long cursor;
		unsigned long max_nl_cursor = 0;
		unsigned long max_nl_size = 0;
		unsigned int mapcount;

		if (mapping == NULL)
			goto out;

		spin_lock(&mapping->i_mmap_lock);

		vma_prio_tree_foreach(vma, &iter, &mapping->i_mmap, pgoff, pgoff) {
			struct mm_struct *mm = vma->vm_mm;
			unsigned long address;
			pte_t *pte;
			spinlock_t *ptl;

			address = vma_address(page, vma);
			if (address == -EFAULT)
				continue;

			pte = page_check_address(page, mm, address, &ptl);
			if (!pte)
				continue;

			ptes[i++] = pte;
		}

		if (list_empty(&mapping->i_mmap_nonlinear))
			goto out;

		list_for_each_entry(vma, &mapping->i_mmap_nonlinear,
				    shared.vm_set.list) {
			cursor = (unsigned long) vma->vm_private_data;
			if (cursor > max_nl_cursor)
				max_nl_cursor = cursor;
			cursor = vma->vm_end - vma->vm_start;
			if (cursor > max_nl_size)
				max_nl_size = cursor;
		}

		if (max_nl_size == 0) {	/* any nonlinears locked or reserved */
			goto out;
		}

		mapcount = page_mapcount(page);
		if (!mapcount)
			goto out;
		cond_resched_lock(&mapping->i_mmap_lock);

		max_nl_size = (max_nl_size + CLUSTER_SIZE - 1) & CLUSTER_MASK;
		if (max_nl_cursor == 0)
			max_nl_cursor = CLUSTER_SIZE;
		do {
			list_for_each_entry(vma, &mapping->i_mmap_nonlinear, shared.vm_set.list) {
				cursor = (unsigned long) vma->vm_private_data;
				while ( cursor < max_nl_cursor && cursor < vma->vm_end - vma->vm_start) {
					struct mm_struct *mm = vma->vm_mm;
					pgd_t *pgd;
					pud_t *pud;
					pmd_t *pmd;
					pte_t *pte;
					spinlock_t *ptl;
					unsigned long address;
					unsigned long end;

					address = (vma->vm_start + cursor) & CLUSTER_MASK;
					end = address + CLUSTER_SIZE;
					if (address < vma->vm_start)
						address = vma->vm_start;
					if (end > vma->vm_end)
						end = vma->vm_end;

					pgd = pgd_offset(mm, address);
					if (!pgd_present(*pgd))
						continue;

					pud = pud_offset(pgd, address);
					if (!pud_present(*pud))
						continue;

					pmd = pmd_offset(pud, address);
					if (!pmd_present(*pmd))
						continue;

					pte = pte_offset_map_lock(mm, pmd, address, &ptl);

					cursor += CLUSTER_SIZE;
					vma->vm_private_data = (void *) cursor;

					if (pte != NULL)
						ptes[i++] = pte;
				}
				vma->vm_private_data = (void *) max_nl_cursor;
			}
			cond_resched_lock(&mapping->i_mmap_lock);
			max_nl_cursor += CLUSTER_SIZE;
		} while (max_nl_cursor <= max_nl_size);

		spin_unlock(&mapping->i_mmap_lock);
	}

out:
	*count = i;
	return ptes;
}
