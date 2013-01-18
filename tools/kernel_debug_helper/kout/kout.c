#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/proc_fs.h>
#include <linux/interrupt.h>
#include <linux/ioport.h>

static int pnum;
static int pnum_set(const char *val, struct kernel_param *kp)
{
	int ans = param_set_int(val, kp);
	printk("pnum_set: %d\n", pnum);
	return ans;
}

static int pnum_get(char *buffer, struct kernel_param *kp)
{
	printk("pnum_get\n");
	return param_get_int(buffer, kp);
}

module_param_call(pnum, pnum_set,
		  pnum_get, &pnum, 0644);


static int kout_proc_read(char *page, char **start,
			     off_t off, int count,
			     int *eof, void *data)
{
	int len;
	len = sprintf(page, "kout_proc_read\n");
	return len;
}

static int kout_proc_write(struct file *file, const char *buffer,
			       unsigned long count, void *data)
{
	printk("kout write\n");
	return count;
}

static irqreturn_t kout_irqhandler(int irq, void *private)
{
	printk("in irq %d\n", irq);
	return IRQ_HANDLED;
}

static struct proc_dir_entry *proc_kout = NULL;
static int irq_nr;
static int __init kout_init(void)
{
	int retval;

	printk("kout_init()\n\n");
        if ((proc_kout = create_proc_entry("kout", 0600, NULL)) == NULL) {
                printk("cannot create proc entry\n");
                return 1;
        }

        proc_kout->read_proc  = &kout_proc_read;
        proc_kout->write_proc  = &kout_proc_write;

	/*
	 * Request IRQ
	 */
	irq_nr = 128 + 27;
	retval = request_irq(irq_nr, kout_irqhandler,
			     0x20, "kout", 1);
	if (retval) {
		printk("Unable to claim requested irq: %d. Err: %d\n", irq_nr, retval);
		return retval;
	}


	return 0;
}

static void __exit kout_exit(void)
{
	printk("kout_exit()\n");
        remove_proc_entry("kout", NULL);
	free_irq(irq_nr, NULL);
}

module_init(kout_init);
module_exit(kout_exit);

MODULE_LICENSE("Proprietary");
MODULE_AUTHOR("Sony Corporation");
MODULE_DESCRIPTION("Kernel Test");


