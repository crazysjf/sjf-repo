/*
 *  klog debugging facility (see lib/klog.c)
 *
 * Copyright (C) IBM Corporation, 2005
 *
 * 2005		Tom Zanussi <zanussi@us.ibm.com>
 * 2003		Hubertus Franke
 *
 */
#ifndef _LINUX_KLOG_H
#define _LINUX_KLOG_H

/*
 * klog operations
 */
struct klog_operations
{
	/*
	 * klog - called when klog called, same params
	 */
	void (*klog) (const void *data, int len);
};

/*
 * klog functions
 */
extern int register_klog_handler(struct klog_operations *klog_ops);
extern void unregister_klog_handler(void);
extern void klog(const void *data, int len);
extern void klog_printk(const char *fmt, ...);

unsigned long long sched_clock(void );
#define klog_time_printk(fmt, args...) \
	klog_printk("%lld: "fmt, sched_clock(), args)

#define klog_show_location() \
	klog_time_printk("%d -> %s() @ %s\n",  __LINE__, __func__, __FILE__)

#define klog_location_printk(fmt, args...)		\
	klog_time_printk("%d -> %s() "fmt, __LINE__, __func__, args)

#endif /* _LINUX_KLOG_H */

