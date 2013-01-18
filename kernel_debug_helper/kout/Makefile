KBUILD ?= /home/kinhi/src/OneSecBoot-tree

obj-m	:= kout.o

all:
	make -C $(KBUILD) M=$(shell pwd) modules

clean:
	make -C $(KBUILD) M=$(shell pwd) clean

