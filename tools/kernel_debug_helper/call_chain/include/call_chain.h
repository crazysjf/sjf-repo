#ifndef _CALL_CHAIN_H
#define _CALL_CHAIN_H

/**
 * int get_call_chain(int max_depth, unsigned long call_chain[])
 * Get the call chain to current function.
 * @max_depth: max depth to backtrace.
 * @call_chain[]: an array to store the backtraced addr. It is cleared
 * 		  before call chain is filled in, and should be big enough
 * 		  to hold max_depth number of pointers.
 * Ret val: Actually backtraced depth.
 */
int get_call_chain(int max_depth, unsigned long call_chain[]);

/**
 * Print the call chain stored in @call_chain.
 * @call_chain must be NULL-terminated.
 */
void show_call_chain(unsigned long call_chain[]);

#endif
