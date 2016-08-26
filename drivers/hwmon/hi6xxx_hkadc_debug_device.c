/*
 * Copyright (c) 2011 Hisilicon Technologies Co., Ltd. All rights reserved.
 *
 * This software is available to you under a choice of one of two
 * licenses.  You may choose to be licensed under the terms of the GNU
 * General Public License (GPL) Version 2, available from the file
 * COPYING in the main directory of this source tree, or the
 * OpenIB.org BSD license below:
 *
 *     Redistribution and use in source and binary forms, with or
 *     without modification, are permitted provided that the following
 *     conditions are met:
 *
 *      - Redistributions of source code must retain the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer.
 *
 *      - Redistributions in binary form must reproduce the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer in the documentation and/or other materials
 *        provided with the distribution.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/fs.h>
#include <linux/types.h>
#include <linux/cdev.h>
#include <linux/semaphore.h>
#include <linux/device.h>
#include <asm/uaccess.h>
#include <linux/delay.h>
#include "hi6xxx_hkadc_value.h"
#include "hi6xxx_hkadc_ctrl.h"
/*#include "mdrv_temp_cfg.h"*/


#define HKADC_ERRO        1

#define HKADC_CLASS_NAME   "hkadc_debug"
#define HKADC_DEVICE_NAME  "hkadc"

#define HKADC_DEV_MAX        HKADC_CHAN_MAX

static int channels[HKADC_DEV_MAX];

static ssize_t hkadc_debug_val_show(struct device * dev,
                    struct device_attribute * attr,
                    char * buf);

static  ssize_t hkadc_debug_val_store(struct device *dev, struct device_attribute *attr,
			 const char *buf, size_t count);

static ssize_t hkadc_quick_value_show(struct device * dev,struct device_attribute * attr,char * buf);

/*����: dev_attr_value*/
DEVICE_ATTR(value, S_IRUGO | S_IWUSR, hkadc_debug_val_show, hkadc_debug_val_store);
DEVICE_ATTR(quick_value, S_IRUGO, hkadc_quick_value_show, NULL);

/*****************************************************************************
 �� �� ��  : hkadc_debug_val_show
 ��������  : ��ʾĳ��hkadc�ڵ��ֵ
 �������  : dev ��׼�豸������

 �������  : ��ʾ������ַ�������
 �� �� ֵ  :
*****************************************************************************/
static ssize_t hkadc_debug_val_show(struct device * dev,
                    struct device_attribute * attr,
                    char * buf)
{
    unsigned short volt = -1;
    int channel = *(int *)dev_get_drvdata(dev);
    hkadc_debug_init(channel);
    mdelay(1500);
    if (hkadc_get_shared_value(channel, &volt) != 0){
        hkadc_debug_uninit(channel);
        return sprintf(buf, "read error\n");
    }

    hkadc_debug_uninit(channel);
    return sprintf(buf, "%d\n",volt);
}

static ssize_t hkadc_debug_val_store(struct device *dev, struct device_attribute *attr,
			 const char *buf, size_t count)
{
    return 0;
}

static ssize_t hkadc_quick_value_show(struct device * dev,struct device_attribute * attr,char * buf)
{
    unsigned short volt = -1;
    int ret = -1;
    unsigned char channel = *(unsigned char *)dev_get_drvdata(dev);

    ret = get_voltage_by_hkadc(channel, &volt);
    if(0 != ret)
    {
        return sprintf(buf, "read error\n");
    }

    return sprintf(buf, "%dmV\n",volt);
}

/*****************************************************************************
 �� �� ��  : hkadc_debug_create_device
 ��������  : ����hkadc���߼�ͨ�����б�����hkadc_debug class�����sysfs�ļ��ڵ�
 �������  : hkadc�豸������

 �������  :
 �� �� ֵ  : �ɹ�����0��ʧ�ܷ��ش����
*****************************************************************************/
int hkadc_debug_create_device(struct class* hkadc_debug_class)
{
    struct device * new_dev = NULL;
    int i;
    int ret;
    dev_t devno = 0;
    char dev_name[256];

    /*��������hkadc�豸�ڵ��ļ�*/
    for (i = 0 ; i < HKADC_DEV_MAX ; i++) {
	   memset(dev_name, 0, sizeof(dev_name));
	   snprintf(dev_name,256,"%s_%d", HKADC_DEVICE_NAME, i);

		/*���豸���Ŀ¼����char���ļ��ڵ�: /sys/class/hkadc_debug/hkadc_i*/
		new_dev = device_create(hkadc_debug_class, NULL, devno, "%s",
						dev_name);
		if (IS_ERR(new_dev)) {
			ret = PTR_ERR(new_dev);
			printk(KERN_ALERT"failed to create hkadc debug device.\n");
			return ret;
		}

		/*�����洴�������ļ�/sys/class/hkadc_debug/hkadc_i/value */
		ret = device_create_file(new_dev, &dev_attr_value);
		if (ret < 0) {
			printk(KERN_ALERT"failed to create hkadc debug file.\n");
			return ret;
		}

	    ret = device_create_file(new_dev, &dev_attr_quick_value);
		if (ret < 0) {
			printk(KERN_ALERT"failed to create hkadc debug file.\n");
			return ret;
		}

		channels[i] = i;
		dev_set_drvdata(new_dev, &channels[i]);
    }

    return 0;
}

/*****************************************************************************
 �� �� ��  : hkadc_debug_device_init
 ��������  : hkadc �ڵ��豸������ʼ��
 �������  :

 �������  :
 �� �� ֵ  :
*****************************************************************************/
static int __init hkadc_debug_device_init(void)
{
    int ret = HKADC_ERRO;

    struct class * hkadc_class;

    /*�� /sys/class/Ŀ¼�´���hkadc �豸�ڵ��ļ�Ŀ¼hkadc_debug*/
    hkadc_class = class_create(THIS_MODULE, HKADC_CLASS_NAME);
    if (IS_ERR(hkadc_class)) {
        ret = PTR_ERR(hkadc_class);
        printk(KERN_ALERT"failed to create hkadc debug class.\n");
        goto destory_class;
    }

    printk(KERN_INFO" initialize hkadc debug device.\n");

    /*���´���������棬��������hkadc ��ʾ�豸*/
    if (hkadc_debug_create_device(hkadc_class))
    {
        goto destory_device;
    }

    //hkadc_debug_init();

    printk(KERN_INFO"Succeedded to initialize hkadc debug device.\n");

    return 0;

destory_device:

destory_class:

    return ret;
}

static void __exit hkadc_debug_device_exit(void)
{
}
fs_initcall(hkadc_debug_device_init);
module_exit(hkadc_debug_device_exit);

MODULE_AUTHOR("  <@huawei.com>");
MODULE_DESCRIPTION("hi6620 hkadc debug sysfs interface");
MODULE_LICENSE("GPL");

