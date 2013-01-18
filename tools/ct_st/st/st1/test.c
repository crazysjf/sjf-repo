struct restart_block {
	long (*fn)(struct restart_block *);
	union {
		struct {
			unsigned long arg0, arg1, arg2, arg3;
		};
		struct {
			u32 *uaddr;
			u32 val;
			u32 flags;
			u64 time;
		} futex;
	};
};

struct test_struct { }
