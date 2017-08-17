#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/slab.h>

int __init kmtest_init(void)
{
	printk(KERN_INFO "Starting the kmemleak test...\n");
	kmalloc(5000, GFP_KERNEL);

	return 0;
}

void __exit kmtest_exit(void)
{
	printk(KERN_INFO "Exitting the kmemleak test...\n");

	return;
}

MODULE_AUTHOR("Stan Drozd <drozdziak1@gmail.com>");
MODULE_DESCRIPTION("A simple kmemleak tester");
MODULE_LICENSE("GPL");
