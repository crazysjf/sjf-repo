#include <asm/pgtable.h>

/*
 * Not finished.
 */
void show_kernel_pte(unsigned long vaddr)
{
	pgd_t *pgd;
	int pgd_type;
	unsigned long pgd_val;

	pgd = pgd_offset_k(vaddr);
	pgd_val = pgd_val(*pgd);
	pgd_type =  pgd_val & 0x3;

	printk("Page table entries for kernel address: 0x%08lx:\n", vaddr);
	printk("First level entry: 0x%08lx\n", pgd_val);
	switch(pgd_type) {
	case 0x0:
		printk("\tBad entry.\n");
		break;
	case 0x1:
	{
		unsigned long second_level_des_addr;

		printk("\tCoarse page table.");
		printk("Base address: 0x%08lx. ", pgd_val & ~((1 << 10) - 1));
		printk("Domain: 0x%02lx. ", (pgd_val >> 5) & 0xff);
		printk("\n");

		second_level_des_addr = (pgd_val & ~((1 << 10) - 1)) | ((vaddr & 0xff000) >> 12 << 2);
		printk("\tSecond level descriptor addr: 0x%08lx ", second_level_des_addr);
		printk("Value: 0x%08lx\n", *(unsigned long*) phys_to_virt(second_level_des_addr));
	}
		break;
	case 0x2:
		printk("\tSection.\n");
		break;
	case 0x3:
		printk("\tFine page table.\n");
		break;
	default:
		break;
	}
}

