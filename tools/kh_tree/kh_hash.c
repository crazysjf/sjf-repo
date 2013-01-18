/**
 * kh_hash - Use a simple hash algrithm to find a position in a array for a key.
 * @key: Key to hash.
 * @size: Size of the array in which the position will be find.
  * @is_OK: A function to judge whether index in the array is OK.
 *              Pass the index using the first parameter.
 *              Return non-0 for OK, and 0 for bad.
 * @Ret: If succeded, return the index, which should be >= 0.
 *       If failed, return -1.
 */
static int kh_hash(unsigned long key, unsigned long size, void* priv1, void* priv2, int (*is_OK)(int index, void* private))
{
	int idx, i;

	idx = (key / size) % size;

	for (i = 0; i < size; i++) {
		if (is_OK(idx, priv1, priv2))
			return idx;
		idx = (idx + 1) % size;
	}

	return -1;
}


/**
 * Sample is_OK() function.
 *
 * is_OK_in_call_chain_array - Judge whether a position at index in call_chain_array is available.
 *
 * @idx: the index.
 * @private: call chain depth in tmp_call_chain.
 */
/* 
 * static int is_OK_in_call_chain_array(int idx, void *private)
 * {
 * 	int i;
 * 	int call_chain_depth = (int) private;
 * 	if (call_chain_heap.call_chain_array[idx].call_chain[0] == NULL)
 * 		return 1;
 * 
 * 	for (i = 0; i < call_chain_depth; i++) {
 * 		if (call_chain_heap.call_chain_array[idx].call_chain[i] != tmp_call_chain[i])
 * 			return 0;
 * 	}
 * 	return 1;
 * }
 */
