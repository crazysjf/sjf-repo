/*
 * You can choose different print functions, by commenting/uncommenting.
 */

//#define print(format, arg...) printk(KERN_INFO "dumper: "format, ##arg)

int printascii(const char*);
static char print_buf[4096];				// Make sure no overflow!
#define print(format, arg...) do {			\
		sprintf(print_buf, format, ##arg);	\
		printascii(print_buf);			\
	} while (0)

