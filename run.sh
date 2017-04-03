#!/bin/sh
qemu-system-$(uname -m) \
	-enable-kvm \
	-kernel ./linux/arch/x86_64/boot/bzImage \
	-initrd ./vm.img \
	-append console=ttyS0 \
	-nographic \

