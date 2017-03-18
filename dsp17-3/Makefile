obj-m += hello.o

KERNEL_VERSION := $(shell uname -r)

all:
	$(MAKE) -C /lib/modules/$(KERNEL_VERSION)/build M=$(PWD) modules

clean:
	$(MAKE) -C /lib/modules/$(KERNEL_VERSION)/build M=$(PWD) clean

