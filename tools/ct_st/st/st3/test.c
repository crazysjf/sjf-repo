struct restart_block {
	int a;
	struct nest_struct1 {
		int b;
	} ab;
	struct nest_struct2 {
		char c;
		struct nest_struct3 {
			int c;
		} ff;
	} s3;

};

struct test_struct { int b;};
