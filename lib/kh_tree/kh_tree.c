/* KH tree
 *
 * 1) All tree nodes are stored in a fixed-sized array.
 * 2) A parent node can have any number of child.
 * 3) Multiple tree can be stored in the same array.
 * 4) Every leaf can have multiple properties.
 * 5) Path (from root to leaf) is the basic insert and delete unit.
 *
 * Use Case:
 *
 *   Detailed record of memory allocation, including size, addr, allocation path.
 *
 *     Memory can be allocated from different path. Path can be stored in
 *     tree. Every node keep a function calling adress. Address and size
 *     can be stored as leaf's property.
 */

#include <list.h>

#define NODE_ARRAY_SIZE 4096
#define PROP_ARRAY_SIZE 8192

struct node_t {
	struct list_head child; /* All its children are in a linked ring. */
	struct list_head parent; /* Parent will link this node by this. */
	struct list_head properties; /* Only leaf uses this. All properties are linked. */

	/* Number of pathes this node is on. Node can be thought as free
	 * only when count == 0. */
	//int count;
	void *node_val; /* This can be custumized to any data type. */
};

struct property_t {
	struct list_head next; /* All properties belong to the same leaf are linked up by this. */
	unsigned long prop_val;
};

struct kh_tree_t {
	struct node_t node_array[NODE_ARRAY_SIZE];
	struct property_t prop_array[PROP_ARRAY_SIZE];
	struct node_t root; /* Multiple trees will have this as their shared root. */
	int lost_path, lost_prop;
};

void kh_tree_init(struct kh_tree_t *kh_tree)
{
	int i;
	memset(kh_tree, 0, sizeof(struct kh_tree_t));
	INIT_LIST_HEAD(&kh_tree_t -> root);

	for (i = 0; i < NODE_ARRAY_SIZE; i++)
		INIT_LIST_HEAD(&kh_tree_t -> node_array[i]);

	for (i = 0; i< PROP_ARRAY_SIZE; i++)
		INIT_LIST_HEAD(&kh_tree_t -> prop_array[i]);
}

static int is_OK_NODE(int idx, void *priv1, void *priv2)
{
	unsigned long node_val = ((struct kh_tree_t*)priv1) -> node_array[idx].node_val;
	if ( node_val == 0)
		return 1;
	return 0;
}

int kh_tree_insert(struct kh_tree_t *kh_tree, void *path[], int depth, struct property_t *property)
{
	struct node_t *cur, *p;
	int find, i;

	cur = kh_tree -> root;
	for (i = 0; i < depth && path[i] != NULL; i++) {
		find = 0;
		/* First, look whether the node is root's child. */
		list_for_each_entry(p, cur, child) {
			if (p -> node_val == path[i]) {/* This should be a comman compare function. */
				find = 1;
				cur = p;
				break
			}
		}

		if (find == 1) {
			continue;
		}
		/* If is not root's child, allocate a new one and make it
		   root's child.*/
		else {
			int idx;
			idx = kh_hash( (unsigned long)(path[i]),
				       NODE_ARRAY_SIZE,
				       kh_tree,
				       NULL,
				       is_OK_NODE);
			if (idx == -1) {
				kh_tree -> lost_path ++;
				return -1;
			}
			kh_tree -> node_array[idx].node_val = path[i];
			list_add(kh_tree -> node_array[idx].parent, cur -> child);
		}
	}

	/* We've come to leaf. */
	
}

main ()
{
	
}
