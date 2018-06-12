KERNELDIR = /home/slash/project/embedded/Linux_Driver/experiment/tiny4412-kernel/linux_3.5.0_tiny4412
PWD := $(shell pwd)
INSTALLDIR = /media/slash/1t/driver_nfs

obj-m := led_driver.o 

modules:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

install:
	cp led_driver.ko $(INSTALLDIR)
clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions modules.order  Module.symvers

.PHONY: modules install clean
