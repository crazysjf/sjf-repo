#ifndef _GET_CALL_CHAIN_H
#define _GET_CALL_CHAIN_H

/**
 * int __get_call_chain(int max_depth, unsinged long call_chain[])
 * Get the call chain to current function.
 * @max_depth: max depth to backtrace.
 * @call_chain[]: an array to store the backtraced addr. It should be big enough
 * 		  to hold max_depth number of pointers.
 * Ret val: Actually backtraced depth.
 */
int __get_call_chain(int max_depth, unsigned long call_chain[]);


#endif
