#include <iostream>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

#define DEV_MEM  "/dev/mem"

using namespace std;

void help(void)
{
	cout << "memdump <start> <len>" << endl;
}

void err_exit(const char *msg)
{
	perror(msg);
	cerr << "errno = " << errno << endl;
	exit(-1);
}


void dumpMem(void *pa, void *va, unsigned long len)
{
	int i;
	const unsigned int lineSize = 16;

	i = 0;
	while (i < len ) {
		for (int j = 0; j < lineSize; j += sizeof(unsigned long)) {
			//printf("%08x ", *(unsigned long *)((unsigned long)va + i));
			long x =  *(volatile unsigned long *)((unsigned long)va + i);
			i += sizeof(unsigned long);
		}
		//printf("\n");
	}
}

int main(int argc, char *argv[])
{
	int fd;
	unsigned long offset, len, page_size;
	void *buf;

	if (argc != 3) {
		help();
		return -1;
	}

	offset = strtoul(argv[1], NULL, 0);
	len = strtoul(argv[2], NULL, 0);

	page_size = getpagesize();
	//fd = open(DEV_MEM, O_RDWR | O_SYNC);
	fd = open(DEV_MEM, O_RDWR);
	if (fd < 0)
		err_exit(DEV_MEM);

	buf = mmap(NULL, len, PROT_READ | PROT_WRITE, MAP_SHARED, fd, offset);
	if ((int)buf == -1)
		err_exit("mmap");

	if (close(fd))
		err_exit("devmem close");
	fprintf(stderr, "mmap: offset = 0x%x, len = 0x%x\n", offset, len);
	fprintf(stderr, "mapped to: 0x%p\n", buf);

	while (1)
		dumpMem((void *)offset, buf, len);

	return 0;
}
