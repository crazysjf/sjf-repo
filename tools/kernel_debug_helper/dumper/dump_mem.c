/*
 *  Dump memory.
 *
 *  Some values are hard-coded. And this should work at least for ARMv(1-5).
 *
 *  Copyright (C) 2010 Crazysjf
 */
#include <linux/kernel.h>
#include <asm/system.h>

#include "internal.h"

/*
 * Dump memory
 *   @addr: Starting address
 *   @size: How much to dump
 */
void dump_mem(unsigned long addr, unsigned long size)
{
	int i;
	unsigned long flags;
	static const int line_size = 16;

	local_irq_save(flags);

	print("Start dumping memory. Addr: 0x%08lx, size: 0x%08lx:\n", addr, size);

	i = 0;
	while (i < size) {
		int mod = i % line_size;

		if (mod == 0)
			print("%08lx: ", addr + i);

		print("%02x ", *(char *)(addr + i));

		if (mod == line_size / 2 - 1)
			print(" ");
		if (mod == line_size - 1)
			print("\n");
		i ++;
	}

	print("\n");

	local_irq_restore(flags);
}
