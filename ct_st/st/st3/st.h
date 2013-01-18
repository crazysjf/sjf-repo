#define NSYMS 10240	/* maximum number of symbols */

enum sym_type {
	SYM_TYPE_ID,
	SYM_TYPE_TYPE_NAME
};

struct symtab {
	char *name;
	double value;
	int type;
};

struct sym_list {
	struct symtab *sym;
	struct sym_list *next;
};

struct symtab *sym_find(struct symtab *tbl, char *s);
struct symtab *sym_del(struct symtab *tbl, char *s);
struct symtab *sym_insert(struct symtab *tbl, struct symtab *entry);

extern struct symtab sym_tab[NSYMS];
extern int g_getting_attrib;
