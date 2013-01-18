#include <linux/linkage.h>
#include <asm/assembler.h>
		.text

@ fp is 0 or stack frame
#define depth	r2
#define index	r3
#define frame	r4
#define sv_fp	r5
#define sv_lr	r6
#define mask	r7
#define offset	r8

@ int __get_call_chain(int max_depth, unsigned long call_chain[])
@ Get the call chain to current function.
@ @max_depth: max depth to backtrace.
@ @call_chain[]: an array to store the backtraced addr. It should be big
@		 enough to hold max_depth number of pointers.
@ Ret val: Actually backtraced depth.

ENTRY(__get_call_chain)

#if !defined(CONFIG_FRAME_POINTER)
		mov	pc, lr
#else
		stmfd	sp!, {r4 - r8, lr}	@ Save an extra register so we have a location...
		movs	frame, fp		@ if frame pointer is zero
		beq	no_frame		@ we have no stack frames
		mov	mask, #0		@ mask for 32-bit
		mov	depth, #0
		mov	index, #0
/*
 * Stack frame layout:
 *             optionally saved caller registers (r4 - r10)
 *             saved fp
 *             saved sp
 *             saved lr
 *    frame => saved pc
 *             optionally saved arguments (r0 - r3)
 * saved sp => <next word>
 *
 * Functions start with the following code sequence:
 *                  mov   ip, sp
 *                  stmfd sp!, {r0 - r3} (optional)
 * corrected pc =>  stmfd sp!, {..., fp, ip, lr, pc}
 */
for_each_frame:	cmp 	depth, r0
		beq	no_frame

		ldr	sv_fp, [frame, #-12]	@ get saved fp

		teq	sv_fp, #0		@ zero saved fp means
		beq	no_frame		@ no further frames

		ldr	sv_lr, [frame, #-4]	@ get saved lr
		str	sv_lr, [r1, depth, lsl #2] @ save pc to the array
		add	depth, depth, #1
		cmp	sv_fp, frame		@ next frame must be
		mov	frame, sv_fp		@ above the current frame
		bhi	for_each_frame


no_frame:	mov	r0, depth
		ldmfd	sp!, {r4 - r8, pc}

#endif
