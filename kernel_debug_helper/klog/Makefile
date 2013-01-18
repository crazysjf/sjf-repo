DIR    := /lib/modules/$(shell uname -r)/build
PWD     := $(shell pwd)
KDIR   := /home/kinhi/src/linux-2.6.23.y-BRANCH_SS-RT
CC = arm-sony-linux-gnueabi-dev-gcc
obj-m := klog-mod.o

default:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules
	$(CC) -o klog klog.c -lpthread

clean:
	/bin/rm -rf *.o *.ko *~ core *.mod.c .*.cmd .tmp_versions Module* klog

