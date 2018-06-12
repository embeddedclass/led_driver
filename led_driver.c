#define MODULE
#define LINUX
#define __KERNEL__

#include <linux/init.h> 
#include <linux/kernel.h>
#include <linux/module.h> 
#include <linux/moduleparam.h> 

int __init led_init(void) 
{
	pr_info("%s v0.1\r\n", __func__);

	return 0;
}

void __exit led_exit(void)
{
	pr_info("%s\r\n", __func__);
} 

module_init(led_init);
module_exit(led_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Slash");
MODULE_DESCRIPTION("Led module");
MODULE_VERSION("v 0.1");
