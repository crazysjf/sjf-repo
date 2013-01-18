/*
 * Dump CP15 registers.
 *
 *  Some values are hard-coded. And this should work at least for ARMv(1-5).
 *
 *  Copyright (C) 2010 Crazysjf
 */


#include <linux/kernel.h>
#include <asm/system.h>

#include "internal.h"

/*
 * Parse the value of register c1 into a string.
 *   @v: c1 value
 *   @buf: A big enough string to contain the result
 */
void parse_c1(const u32 v, char* buf)
{
	int len = 0;

	const int M_SHIFT = 0;
	const int A_SHIFT = 1;
	const int C_SHIFT = 2;
	const int W_SHIFT = 3;
	const int P_SHIFT = 4;
	const int D_SHIFT = 5;
	const int L_SHIFT = 6;
	const int B_SHIFT = 7;
	const int S_SHIFT = 8;
	const int R_SHIFT = 9;
	const int F_SHIFT = 10;
	const int Z_SHIFT = 11;
	const int I_SHIFT = 12;
	const int V_SHIFT = 13;
	const int RR_SHIFT = 14;
	const int L4_SHIFT = 15;

	len += sprintf(buf + len, "M: MMU is %s\n",
		      v & (1<<M_SHIFT) ? "enabled" : "disabled");

	len += sprintf(buf + len, "A: Alignment fault check is %s\n",
		      v & (1<<A_SHIFT) ? "enabled" : "disabled");

	len += sprintf(buf + len, "C: Cache is %s\n",
		      v & (1<<C_SHIFT) ? "enabled" : "disabled");

	len += sprintf(buf + len, "W: Write buffer is %s\n",
		      v & (1<<W_SHIFT) ? "enabled" : "disabled");
	// -------------------------------------------------------
	len += sprintf(buf + len, "P: Exception handlers entered in %s-bit modes\n",
		      v & (1<<P_SHIFT) ? "32" : "26");

	len += sprintf(buf + len, "D: 26-bit address exception checking is %s\n",
		      v & (1<<D_SHIFT) ? "enabled" : "disabled");

	len += sprintf(buf + len, "L: %s Abort Model is selected\n",
		      v & (1<<L_SHIFT) ? "Late" : "Early");

	len += sprintf(buf + len, "B: Endian: %s\n",
		      v & (1<<B_SHIFT) ? "Big" : "Little");
	// -------------------------------------------------------
	len += sprintf(buf + len, "S: System protection bit: %s\n",
		      v & (1<<S_SHIFT) ? "1" : "0");

	len += sprintf(buf + len, "R: Rom protection bit: %s\n",
		      v & (1<<R_SHIFT) ? "1" : "0");

	len += sprintf(buf + len, "F: F bit: %s\n",
		      v & (1<<F_SHIFT) ? "1" : "0");

	len += sprintf(buf + len, "Z: Branch prediction is %s\n",
		      v & (1<<Z_SHIFT) ? "enabled" : "disabled");
	// -------------------------------------------------------
	len += sprintf(buf + len, "I: I-Cache is: %s\n",
		      v & (1<<I_SHIFT) ? "enabled" : "disabled");

	len += sprintf(buf + len, "V: Exception vector: %s\n",
		      v & (1<<V_SHIFT) ? "High(at x0ffff0000)" : "Normal(at 0x00000000)");

	len += sprintf(buf + len, "RR: Cache replacement strategy: %s\n",
		      v & (1<<RR_SHIFT) ? "Predictable" : "Normal");

	len += sprintf(buf + len, "L4: Backwards-compatibility is %s\n",
		      v & (1<<L4_SHIFT) ? "1" : "0");
}

/*
 * Dump CP15 registers
 */
void dump_cp15(void)
{
	u32 tmp;
	unsigned long flags;
	char buf[4096];

	local_irq_save(flags);

	local_irq_disable();
	print("Start dumping CP15 Registers:\n");

	print("C0:\n");
	asm volatile ("mrc p15, 0, %0, c0, c0, 0" : "=r"(tmp));
	print("  Main ID: 0x%08x\n", tmp);
	asm volatile ("mrc p15, 0, %0, c0, c0, 1" : "=r"(tmp));
	print("  Cache Type: 0x%08x\n", tmp);

	asm volatile ("mrc p15, 0, %0, c1, c0, 0" : "=r"(tmp));
	print("C1: 0x%08x\n", tmp);
	parse_c1(tmp, buf);
	print("%s", buf);

	asm volatile ("mrc p15, 0, %0, c2, c0, 0" : "=r"(tmp));
	print("C2: Translation table base: 0x%08x\n", tmp & ~((1<<14) - 1));

	asm volatile ("mrc p15, 0, %0, c3, c0, 0" : "=r"(tmp));
	print("C3: Domain access control: 0x%08x\n", tmp);

	asm volatile ("mrc p15, 0, %0, c5, c0, 0" : "=r"(tmp));
	print("C5: Fault status: 0x%08x\n", tmp);

	local_irq_restore(flags);
}
