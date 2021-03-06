#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/slab.h>

int kmtest_init(void)
{
	printk(KERN_INFO "Starting the kmemleak test...\n");
	kmalloc(5000, GFP_KERNEL);

	return 0;
}

void kmtest_exit(void)
{
	printk(KERN_INFO "Exitting the kmemleak test...\n");

	return;
}

module_init(kmtest_init);
module_exit(kmtest_exit);

MODULE_DESCRIPTION("A simple kmemleak tester");
MODULE_AUTHOR("Stan Drozd <drozdziak1@gmail.com>");
MODULE_LICENSE("GPL");
