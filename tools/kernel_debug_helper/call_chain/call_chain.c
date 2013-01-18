#include <linux/kernel.h>
#include <asm/string.h>
#include <linux/kallsyms.h>
#include <call_chain.h>

#include "get_call_chain.h"

int get_call_chain(int max_depth, unsigned long call_chain[])
{
	memset(call_chain, 0, sizeof(call_chain[0]) * max_depth);
	/* FIXME: - 1 is a temporary fix. It makes sure the terminating NULL is there. */
	return __get_call_chain(max_depth - 1, call_chain);
}

void show_call_chain(unsigned long call_chain[])
{
	int i = 0;

	while (call_chain[i] != 0)
	{
		print_symbol("%s\n", call_chain[i]);
		i++;
	}
	printk("\n");
}
