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

#include <linux/err.h>
#include <linux/io.h>
#include <linux/debugfs.h>
#include <linux/delay.h>
#include <linux/platform_device.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/device.h>
#include <linux/stddef.h>
#include <linux/sysfs.h>
#include <linux/types.h>
#include <linux/mutex.h>
#include <linux/interrupt.h>
#include <asm/irq.h>
#include <linux/reboot.h>
#include <linux/slab.h>
#include <linux/pm_qos.h>
#include <linux/delay.h>
#include <linux/timer.h>
#ifdef CONFIG_DEBUG_FS
#include <linux/debugfs.h>
#include <linux/seq_file.h>
#include <linux/uaccess.h>
#endif
//#include <mach/util.h>				/* For mach_call_usermoduleshell*/
#include <linux/hisi/util.h>				/* For mach_call_usermoduleshell*/
#include <linux/of.h>
#include <linux/of_irq.h>
#include "hi6xxx_tsensor_driver.h"
#include "soc_baseaddr_interface.h"
#include "soc_peri_sctrl_interface.h"
#include "soc_ao_sctrl_interface.h"
#include "soc_smart_interface.h"
#include "soc_irqs.h"
#include <linux/hisi/reg_ops.h>
#include "linux/io.h"
#include "linux/spinlock.h"
#include "../hisi/mailbox/hi6xxx_mailbox/bsp_mailbox.h"
#include "hi6xxx_hkadc_value.h"
#include <linux/hisi/hisi_efuse.h>

#ifdef _DRV_LLT_
#define static
#endif

#define TSENSOR_REG(addr)          (*(unsigned int *)((char *)gstTempPrtInfo.virt_base_addr + addr))
#define TSENSOR_REG_READ(addr)     (TSENSOR_REG(addr))
#define TSENSOR_REG_WRITE(addr, start, end, val) (TSENSOR_REG(addr) = (TSENSOR_REG(addr) & (~((((unsigned int)1 << (end - start + 1)) - 1) << (start)))) \
                                                                         | ((unsigned int)((val) & (((unsigned int)1 << (end - start + 1)) - 1)) << (start)))

static TRMP_PRT_INFO gstTempPrtInfo = {0};

extern struct tsensor_governor *tsensor_gov;

/*tsensor efuse trimֵ*/
static struct efuse_trim efuse_trim_data = {0,0, 0, 0, 0};

extern void pmqos_gpu_dfs_limit_max(u32 flag,u32 max_freq_limit);
extern int pwrctrl_acpu_freq_limit_max(unsigned int req_value, unsigned int req_flag);

/*****************************************************************************
 �� �� ��  : tsensor_init_config
 ��������  : tsensor�ĳ�ʼ������
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 1.��    ��   : 2014��5��26��
   ��    ��   : ���� w00251051
   �޸�����   : �����ɺ���
*****************************************************************************/
static void tsensor_init_config(void)
{
    /*��TSENSORʱ��*/
    TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_ADDR(0),
            SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_tsensor_START,
            SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_tsensor_END,
            0x01);

    /*����TSENSOR HKADCת������*/
    TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_TEMP0_CFG_ADDR(0),
            SOC_PERI_SCTRL_SC_TEMP0_CFG_temp0_ct_sel_raw_START,
            SOC_PERI_SCTRL_SC_TEMP0_CFG_temp0_ct_sel_raw_END,
            0x00);

    gstTempPrtInfo.cur_cfg_index = TSENSOR_INVALID_INDEX;
}

/*****************************************************************************
 �� �� ��  : tsensor_config
 ��������  : ����tsensor������
 �������  :
            index: tsensor�������±�
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 1.��    ��   : 2014��5��26��
   ��    ��   : ���� w00251051
   �޸�����   : �����ɺ���
*****************************************************************************/
static void tsensor_config_set(unsigned int index)
{

    /*�����Ҫ���õĲ���뵱ǰ���һ����������������*/
    if(gstTempPrtInfo.cur_cfg_index == index)
    {
        return;
    }

    /*�����¸߸�λ*/
    TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_ADDR(0),
            SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_temp0_rst_msk_START,
            SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_temp0_rst_msk_END,
            0x0);

    /*ȥʹ���¶ȼ��*/
    TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_TEMP0_EN_ADDR(0),
            SOC_PERI_SCTRL_SC_TEMP0_EN_temp0_en_raw_START,
            SOC_PERI_SCTRL_SC_TEMP0_EN_temp0_en_raw_END,
            0x0);

    /*����ѡ���¶Ȳ��Զ���*/
    TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_TEMP0_CFG_ADDR(0),
            SOC_PERI_SCTRL_SC_TEMP0_CFG_temp0_test_raw_START,
            SOC_PERI_SCTRL_SC_TEMP0_CFG_temp0_test_raw_END,
            gstTempPrtInfo.sensor_config[index].sel);

    /*�����²����жϸ澯����*/
    writel(gstTempPrtInfo.sensor_config[index].thres_cfg_value,
    SOC_PERI_SCTRL_SC_TEMP0_TH_ADDR(gstTempPrtInfo.virt_base_addr));

    /*�����²��ĸ�λ����*/
    TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_TEMP0_RST_TH_ADDR(0),
            SOC_PERI_SCTRL_SC_TEMP0_RST_TH_temp0_rst_th_START,
            SOC_PERI_SCTRL_SC_TEMP0_RST_TH_temp0_rst_th_END,
            gstTempPrtInfo.sensor_config[index].reset_cfg_value);

    /*ʹ���²���¸߸�λ*/
    TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_ADDR(0),
            SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_temp0_rst_msk_START,
            SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_temp0_rst_msk_END,
            0x1);

    /*ʹ���²���¶ȼ��*/
    TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_TEMP0_EN_ADDR(0),
            SOC_PERI_SCTRL_SC_TEMP0_EN_temp0_en_raw_START,
            SOC_PERI_SCTRL_SC_TEMP0_EN_temp0_en_raw_END,
            0x1);

    mdelay(3);

    gstTempPrtInfo.cur_cfg_index = index;
}

/*****************************************************************************
 �� �� ��  : tsensor_temp_read_by_index
 ��������  : tsensor���¶ȶ�ȡ����
 �������  : index: tsensor�������±�
 �������  : *temperature�¶�
 �� �� ֵ  : OK:0 ERROR:-1
 ���ú���  :
 ��������  :

 �޸���ʷ      :
 1.��    ��   : 2014��5��26��
   ��    ��   : ���� w00251051
   �޸�����   : V8R1�޸�
*****************************************************************************/
static int tsensor_temp_read_by_index(unsigned int index, int *temperature)
{
    int regvalue = 0;

    if ((gstTempPrtInfo.enable == 0) || (gstTempPrtInfo.init_flag == TSENSOR_INIT_NOT_OK))
    {
        return TSENSOR_ERR;
    }

    if((index >= gstTempPrtInfo.num) || (NULL == temperature))
    {
        printk(KERN_ERR "tsensor_temp_read para error: %d, %p.",index,temperature);
        return TSENSOR_ERR;
    }

    mutex_lock(&gstTempPrtInfo.get_tmp_lock);

    tsensor_config_set(index);

    regvalue = TSENSOR_REG_READ(SOC_PERI_SCTRL_SC_TEMP0_VALUE_ADDR(0));
    udelay(50);

    switch(gstTempPrtInfo.sensor_config[index].sensor_type)
    {
        case TSENSOR_TYPE_ACPU_CLUSTER0:
            *temperature = ((regvalue * 200) / 255) - 60 - efuse_trim_data.remote_acpu_c0;
            break;            
        case TSENSOR_TYPE_ACPU_CLUSTER1:
            *temperature = ((regvalue * 200) / 255) - 60 - efuse_trim_data.remote_acpu_c1;
            break;
        case TSENSOR_TYPE_GPU:
            *temperature = ((regvalue * 200) / 255) - 60 - efuse_trim_data.remote_gpu;
            break;
        case TSENSOR_TYPE_LOCAL:
            *temperature = ((regvalue * 200) / 255) - 60 - efuse_trim_data.local;
            break;    
        default:
            break;
    }

    if(tsensor_gov->debug_switch)
    {
        printk(KERN_ERR "tsensor_temp_read temperature:%d, type:%d.\n",*temperature,gstTempPrtInfo.sensor_config[index].sensor_type);
    }

    mutex_unlock(&gstTempPrtInfo.get_tmp_lock);

    return TSENSOR_OK;
}

/*****************************************************************************
 �� �� ��  : tsensor_get_index_by_type
 ��������  : ͨ��tsensor���ͻ�ȡ��Ӧ�Ĳ��index
 �������  : tsensor_type:tsensor consumer_id�߼��û�
 �������  : ��
 �� �� ֵ  : ����index
 ���ú���  :
 ��������  :

 �޸���ʷ      :
 1.��    ��   : 2014��5��26��
   ��    ��   : ���� w00251051
   �޸�����   : V8R1�޸�
*****************************************************************************/
static unsigned int tsensor_get_index_by_type(ENUM_TSENSOR_TYPE tsensor_type)
{
    unsigned int i = 0;
    for(i=0; i<gstTempPrtInfo.num; i++)
    {
        if(gstTempPrtInfo.sensor_config[i].sensor_type == tsensor_type)
        {
            return i;
        }
    }

    return TSENSOR_INVALID_INDEX;
}

static int get_acpufreq_index(TRMP_PRT_INFO* pTempPrtInfo,unsigned int acpufreq)
{
    int index;
    
    BUG_ON(!pTempPrtInfo);
    
    for(index=0;index<pTempPrtInfo->acpu_freq_limit_num;index++)
    {
        if(acpufreq == pTempPrtInfo->acpu_freq_limit_table[index])
        {
            return index;
        }
    }

    pr_err("%s,%d failed!\n", __func__, __LINE__);
    BUG_ON(1);
    return TSENSOR_ERR;
}

static void acpufreq_limit(TRMP_PRT_INFO* pTempPrtInfo)
{
    int index = 0,ret;
    ret= pwrctrl_acpu_freq_limit_max(pTempPrtInfo->acpufreq_default_limit_value,LOCK_FREQ_ON);
    if(TSENSOR_ERR == ret)
    {
        pr_err("%s,%d pwrctrl_acpu_freq_limit_max failed! %u K \n", __func__, __LINE__,
        pTempPrtInfo->acpufreq_default_limit_value);
        return ;
    }
    
    index = get_acpufreq_index(pTempPrtInfo,pTempPrtInfo->acpufreq_default_limit_value);
    if(TSENSOR_ERR != index)
    {
        pTempPrtInfo->cur_acpu_freq_index = index;
    }
}

static void acpufreq_limit_level_regulator(TRMP_PRT_INFO* pTempPrtInfo,int up_or_down)
{

    int cur_acpu_freq_index = pTempPrtInfo->cur_acpu_freq_index+up_or_down;
    
    if(pTempPrtInfo->acpu_freq_limit_num <= cur_acpu_freq_index)
    {
        return;
    }

    if(cur_acpu_freq_index <0)
    {
        return ;
    }

    pTempPrtInfo->cur_acpu_freq_index= cur_acpu_freq_index;

    pwrctrl_acpu_freq_limit_max(pTempPrtInfo->acpu_freq_limit_table[pTempPrtInfo->cur_acpu_freq_index],LOCK_FREQ_ON);
    pr_err("%s : %dK.\n",__func__,pTempPrtInfo->acpu_freq_limit_table[pTempPrtInfo->cur_acpu_freq_index]);
 
}

/*****************************************************************************
 �� �� ��  : tsensor_temp_check
 ��������  : tsensor�¶ȼ�Ᵽ������
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��5��6��
    ��    ��   : ���� 00217270
    �޸�����   : �����ɺ��� �޸���ʷ      :
 1.��    ��   : 2014��5��26��
   ��    ��   : ���� w00251051
   �޸�����   : V8R1�޸�
*****************************************************************************/
void tsensor_monitor_work_fn(struct work_struct *work)
{
    int tempvalue = 0;
    int ret = TSENSOR_ERR;
    unsigned int index = 0;

    index = tsensor_get_index_by_type(TSENSOR_TYPE_LOCAL);
    ret = tsensor_temp_read_by_index(index, &tempvalue);
    if(TSENSOR_OK != ret)
    {
        pr_err("%s,%d tsensor_temp_read_by_index err\n", __func__, __LINE__);
        schedule_delayed_work(&tsensor_gov->tsensor_monitor_work,0);
        return;
    }

    pr_err("%s,%d temp_t0:%d tempvalue: %d\n", __func__, __LINE__,
        gstTempPrtInfo.sensor_config[index].temp_t0,tempvalue);

    if(tempvalue >= gstTempPrtInfo.sensor_config[index].thres_value)
    {
        gstTempPrtInfo.temp_prt_vote |= BIT(TSENSOR_TYPE_LOCAL);
        tsensor_gov->warning_count++;
        if(gstTempPrtInfo.temp_offset_benchmark<=(tempvalue-gstTempPrtInfo.sensor_config[index].temp_t0))
        {
          acpufreq_limit_level_regulator(&gstTempPrtInfo,FREQ_DOWN);
          gstTempPrtInfo.sensor_config[index].temp_t0 = tempvalue;
          pr_err("acpufreq regulator FREQ_DOWN.\n");
        }
    }
    else if (tempvalue >= (gstTempPrtInfo.sensor_config[index].thres_value -
        gstTempPrtInfo.sensor_config[index].lag_value))
    {
        if(gstTempPrtInfo.temp_offset_benchmark<=(gstTempPrtInfo.sensor_config[index].temp_t0 - tempvalue))
        {
          acpufreq_limit_level_regulator(&gstTempPrtInfo,FREQ_UP);
          gstTempPrtInfo.temp_prt_vote |= BIT(TSENSOR_TYPE_LOCAL);
          gstTempPrtInfo.sensor_config[index].temp_t0 = tempvalue;
          pr_err("acpufreq regulator FREQ_UP.\n");
        }
    }
    else 
    {
        pwrctrl_acpu_freq_limit_max(gstTempPrtInfo.acpu_freq_limit_table[0], LOCK_FREQ_OFF);
        gstTempPrtInfo.cur_acpu_freq_index = 0;
        gstTempPrtInfo.sensor_config[index].temp_t0 = tempvalue;
        gstTempPrtInfo.temp_prt_vote &= ~(BIT(TSENSOR_TYPE_LOCAL));
        pr_err("acpu acpufreq_limit OFF.\n");
    }


    index = tsensor_get_index_by_type(TSENSOR_TYPE_GPU);

    if(tempvalue>= gstTempPrtInfo.sensor_config[index].thres_value)
    {
        unsigned int  cur_gpu_freq_index =  gstTempPrtInfo.cur_gpu_freq_index;
        cur_gpu_freq_index++;
        if(cur_gpu_freq_index < gstTempPrtInfo.gpu_freq_limit_num)
        {
           gstTempPrtInfo.cur_gpu_freq_index = cur_gpu_freq_index;
        }
        
        pmqos_gpu_dfs_limit_max(LOCK_FREQ_ON,gstTempPrtInfo.gpu_freq_limit_table[gstTempPrtInfo.cur_gpu_freq_index]);
        gstTempPrtInfo.temp_prt_vote |= BIT(TSENSOR_TYPE_GPU);
        pr_err("gpufreq limit ON: %dM.\n", gstTempPrtInfo.gpu_freq_limit_table[gstTempPrtInfo.cur_gpu_freq_index]);

    }
    else if (tempvalue < gstTempPrtInfo.sensor_config[index].thres_value - gstTempPrtInfo.sensor_config[index].lag_value)
    {
        pmqos_gpu_dfs_limit_max(LOCK_FREQ_OFF, gstTempPrtInfo.gpu_freq_limit_table[0]);
        gstTempPrtInfo.cur_gpu_freq_index = 0;
        gstTempPrtInfo.temp_prt_vote &= ~(BIT(TSENSOR_TYPE_GPU));
        pr_err("gpufreq limit OFF .\n");
   }

    if(gstTempPrtInfo.temp_prt_vote)
    {
        schedule_delayed_work(&tsensor_gov->tsensor_monitor_work,msecs_to_jiffies(tsensor_gov->average_period));
    }
    else
    {
        /*Tsensor0�¶ȼ���ж����μĴ�����*/
        TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_TEMP0_INT_EN_ADDR(0),
            SOC_PERI_SCTRL_SC_TEMP0_INT_EN_temp0_int_en_START,
            SOC_PERI_SCTRL_SC_TEMP0_INT_EN_temp0_int_en_END,
            0x01);
    }

}

/*****************************************************************************
 �� �� ��  : tsensor_temp_get
 ��������  : tsensor���¶Ȼ�ȡ����
 �������  : tsensor_type:tsensor consumer_id�߼��û�
 �������  : *temperature�¶�
 �� �� ֵ  : OK:0 ERROR:-1
 ���ú���  :
 ��������  :

 
�޸���ʷ      :
 
1.��    ��   : 2014��5��26��
 
  ��    ��   : ���� w00251051
 
  �޸�����   : V8R1�޸�
*
****************************************************************************/
int tsensor_temp_get(ENUM_TSENSOR_TYPE tsensor_type, int *temperature)
{

 
   unsigned int index = 0;
 
   int ret = TSENSOR_ERR;

 
   index = tsensor_get_index_by_type(tsensor_type);
 
   if(TSENSOR_INVALID_INDEX == index)
 
   {
 
       printk(KERN_ERR "tsensor_temp_get! tsensor_type is error:%d.\n",tsensor_type);
 
       return TSENSOR_ERR;
 
   }

 
   ret = tsensor_temp_read_by_index(index, temperature);
 
   if(TSENSOR_OK != ret)
 
   {
 
       printk(KERN_ERR "tsensor_temp_get! read temp error.");
 
       return TSENSOR_ERR;
 
   }

   if(TSENSOR_TYPE_LOCAL != tsensor_type)
   {
        mutex_lock(&gstTempPrtInfo.get_tmp_lock);
        index = tsensor_get_index_by_type(TSENSOR_TYPE_LOCAL);
        tsensor_config_set(index);
        mutex_unlock(&gstTempPrtInfo.get_tmp_lock);   
   }
 
   return ret;
}

/*****************************************************************************
 
�� �� ��  : get_device_tree_data
 
��������  : DTS ��������
 
�������  :
 
		pdev: �豸���
 
�������  : ��
 
�� �� ֵ  : ��
 
���ú���  :
 
��������  :

 
�޸���ʷ      :
 
 1.��    ��   : 2014��2��12��
 
   ��    ��   : ����wx206530
 
   �޸�����   : �����ɺ���
 
�޸���ʷ      :
 
1.��    ��   : 2014��5��26��
 
  ��    ��   : ���� w00251051
 
  �޸�����   : V8R1�޸�
*
****************************************************************************/
static int get_device_tree_data(struct platform_device *pdev)
{

	
const struct device_node *of_node = pdev->dev.of_node;
	
struct device_node *root;
	
u32 dts_value = 0;
	
char *buf = NULL;
	
int index = 0;
	
int ret = -1;

	
ret = of_property_read_u32(of_node, "tsensor-enable", &dts_value);
	
if (ret) {
	
	printk(KERN_ERR "no tsensor-enable in DTS!\n");
	
	goto dt_parse_err2;
	
}
	
gstTempPrtInfo.enable = dts_value;

 
   ret = of_property_read_u32(of_node, "temp-offset", &dts_value);
	
if (ret) {
	
	printk(KERN_ERR "no temp-offset in DTS!\n");
	
	goto dt_parse_err2;
	
}
	
gstTempPrtInfo.temp_offset_benchmark = dts_value;

	
ret = of_property_read_u32(of_node, "tsensor-num", &dts_value);
	
if (ret) {
	
	printk(KERN_ERR "no tsensor-num in DTS!\n");
	
	goto dt_parse_err2;
	
}
	
gstTempPrtInfo.num = dts_value;

/*acpu start*/
	
ret = of_property_read_u32(of_node, "acpu-freq-limit-num", &dts_value);
	
if (ret) {
	
	printk(KERN_ERR "no acpu-freq-limit-num in DTS!\n");
	
	goto dt_parse_err2;
	
}
	
gstTempPrtInfo.acpu_freq_limit_num = dts_value;

 
   gstTempPrtInfo.acpu_freq_limit_table = kzalloc((sizeof(unsigned int)*gstTempPrtInfo.acpu_freq_limit_num), GFP_KERNEL);
 
   if(!gstTempPrtInfo.acpu_freq_limit_table)
 
   {
 
       ret = -ENOMEM;
 
       goto dt_parse_err2;
 
   }
 
   
 
   ret = of_property_read_u32_array(of_node, "acpu-freq-limit-table", gstTempPrtInfo.acpu_freq_limit_table, gstTempPrtInfo.acpu_freq_limit_num);
	
if (ret) {
	
	printk(KERN_ERR "no acpu-freq-limit-table in DTS!\n");
	
	goto dt_parse_err2;
	
}

 
   ret = of_property_read_u32(of_node, "acpu-freq-default-limit", &dts_value);
	
if (ret) {
	
	pr_err("no acpu-freq-default-limit in DTS!\n");
	
	goto dt_parse_err2;
	
}
	
gstTempPrtInfo.acpufreq_default_limit_value = dts_value;
/*acpu end*/

/*gpu start*/
	
ret = of_property_read_u32(of_node, "gpu-freq-limit-num", &dts_value);
	
if (ret) {
	
	printk(KERN_ERR "no gpu-freq-limit-num in DTS!\n");
	
	goto dt_parse_err2;
	
	}
	gstTempPrtInfo.gpu_freq_limit_num = dts_value;

    gstTempPrtInfo.gpu_freq_limit_table = kzalloc((sizeof(unsigned int)*gstTempPrtInfo.gpu_freq_limit_num), GFP_KERNEL);
    if(!gstTempPrtInfo.gpu_freq_limit_table)
    {
        ret = -ENOMEM;
        goto dt_parse_err2;
    }
    
    ret = of_property_read_u32_array(of_node, "gpu-freq-limit-table", gstTempPrtInfo.gpu_freq_limit_table, gstTempPrtInfo.gpu_freq_limit_num);
	if (ret) {
		printk(KERN_ERR "no gpu-freq-limit-table in DTS!\n");
		goto dt_parse_err2;
	}

    ret = of_property_read_u32(of_node, "gpu-freq-default-limit", &dts_value);
	if (ret) {
		pr_err("no gpu-freq-default-limit in DTS!\n");
		goto dt_parse_err2;
	}
	gstTempPrtInfo.gpufreq_default_limit_value = dts_value;
/*gpu end*/

    ret = of_property_read_u32(of_node, "tsensor-monitor-period", &dts_value);
    if (ret) {
    	
    	pr_err("no acpu-freq-default-limit in DTS!\n");
    	
    	goto dt_parse_err2;
    }
    
    tsensor_gov->average_period = dts_value;


    /*����SENSOR����������Ӧ����Ϣ�ռ䣬����ʼ��Ϊ0*/
    gstTempPrtInfo.sensor_config = kzalloc((sizeof(TRMP_PRT_INFO)*gstTempPrtInfo.num), GFP_KERNEL);
    if(!gstTempPrtInfo.sensor_config)
    {
        ret = -ENOMEM;
        goto dt_parse_err2;
    }

    buf = kzalloc(32, GFP_KERNEL);
    if(!buf)
    {
        ret = -ENOMEM;
        goto dt_parse_err1;
    }

    for(index=0; index<gstTempPrtInfo.num; index++)
    {
        sprintf(buf,"hisilicon,hi6xxx-tsensor%d",index);
        root = of_find_compatible_node(NULL, NULL, buf);
        if (!root)
        {
            printk(KERN_ERR "no root : %s in DTS!\n",buf);
            goto dt_parse_err0;
        }

        ret = of_property_read_u32_array(root, "tsensor-type", &dts_value, 1);
        if(ret)
        {
            printk(KERN_ERR "no tsensor-type in tsensor%d!\n",index);
            goto dt_parse_err0;
        }
        gstTempPrtInfo.sensor_config[index].sensor_type = dts_value;

        ret = of_property_read_u32_array(root, "tsensor-sel", &dts_value, 1);
        if(ret)
        {
            printk(KERN_ERR "no tsensor-sel in tsensor%d!\n",index);
            goto dt_parse_err0;
        }
        gstTempPrtInfo.sensor_config[index].sel = dts_value;

        ret = of_property_read_u32_array(root, "tsensor-lag-value", &dts_value, 1);
        if(ret)
        {
            printk(KERN_ERR "no tsensor-type in tsensor%d!\n",index);
            goto dt_parse_err0;
        }
        gstTempPrtInfo.sensor_config[index].lag_value = dts_value;

        ret = of_property_read_u32_array(root, "tsensor-thres-value", &dts_value, 1);
        if(ret)
        {
            printk(KERN_ERR "no tsensor-thres-value in tsensor%d!\n",index);
            goto dt_parse_err0;
        }
        gstTempPrtInfo.sensor_config[index].thres_value = dts_value;

        ret = of_property_read_u32_array(root, "tsensor-reset-value", &dts_value, 1);
        if(ret)
        {
            printk(KERN_ERR "no tsensor-reset-value in tsensor%d!\n",index);
            goto dt_parse_err0;
        }
        gstTempPrtInfo.sensor_config[index].reset_value = dts_value;

        ret = of_property_read_u32_array(root, "tsensor-alarm-count", &dts_value, 1);
        if(ret)
        {
            printk(KERN_ERR "no tsensor-alarm-count in tsensor%d!\n",index);
            goto dt_parse_err0;
        }
        gstTempPrtInfo.sensor_config[index].alarm_cnt = dts_value;

        ret = of_property_read_u32_array(root, "tsensor-recover-count", &dts_value, 1);
        if(ret)
        {
            printk(KERN_ERR "no tsensor-recover-count in tsensor%d!\n",index);
            goto dt_parse_err0;
        }
        gstTempPrtInfo.sensor_config[index].recover_cnt = dts_value;
    }

    kfree(buf);
    return ret;

dt_parse_err0:
    kfree(buf);
dt_parse_err1:
    kfree(gstTempPrtInfo.sensor_config);
    gstTempPrtInfo.sensor_config = NULL;
dt_parse_err2:
    gstTempPrtInfo.enable = 0;
	return ret;
}

/*****************************************************************************
 �� �� ��  : tsensor_config_init
 ��������  : tsensor���ó�ʼ������
 �������  : pdev: �豸���
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��5��6��
    ��    ��   : ���� 00217270
    �޸�����   : �����ɺ���
 �޸���ʷ      :
 1.��    ��   : 2014��5��26��
   ��    ��   : ���� w00251051
   �޸�����   : V8R1�޸�
*****************************************************************************/
int tsensor_config_init(struct platform_device *pdev)
{
    int ret = 0;

    ret = get_device_tree_data(pdev);
    if (ret)
    {
		printk(KERN_ERR "DTS decode ERR!\n");
		return TSENSOR_ERR;
    }

    return TSENSOR_OK;
}

void efuse_trim_init(void)
{
    unsigned int trimdata = efuse_trim_data.trimdata;

	pr_err("%s get thermal trim : 0x%x.\n",__func__,trimdata);

    efuse_trim_data.local = (trimdata & LOCAL_TRIM_DATA_MASK) >> LOCAL_TRIM_DATA_OFFSET;
    if ((trimdata & LOCAL_TRIM_DATA_PLUSMINUS) == LOCAL_TRIM_DATA_PLUSMINUS)
        efuse_trim_data.local = 0 - efuse_trim_data.local;

    efuse_trim_data.remote_acpu_c0 = (trimdata & REMOTE_ACPU_C0_TRIM_DATA_MASK) >> REMOTE_ACPU_C0_TRIM_DATA_OFFSET;
    if ((trimdata & REMOTE_ACPU_C0_TRIM_DATA_PLUSMINUS) == REMOTE_ACPU_C0_TRIM_DATA_PLUSMINUS)
        efuse_trim_data.remote_acpu_c0 = 0 - efuse_trim_data.remote_acpu_c0;

    efuse_trim_data.remote_acpu_c1 = (trimdata & REMOTE_ACPU_C1_TRIM_DATA_MASK) >> REMOTE_ACPU_C1_TRIM_DATA_OFFSET;
    if ((trimdata & REMOTE_ACPU_C1_TRIM_DATA_PLUSMINUS) == REMOTE_ACPU_C1_TRIM_DATA_PLUSMINUS)
        efuse_trim_data.remote_acpu_c1 = 0 - efuse_trim_data.remote_acpu_c1;

    efuse_trim_data.remote_gpu = (trimdata & REMOTE_GPU_TRIM_DATA_MASK) >> REMOTE_GPU_TRIM_DATA_OFFSET;
    if ((trimdata & REMOTE_GPU_TRIM_DATA_PLUSMINUS) == REMOTE_GPU_TRIM_DATA_PLUSMINUS)
        efuse_trim_data.remote_gpu = 0 - efuse_trim_data.remote_gpu;

    printk(KERN_INFO "local : %d.\n",efuse_trim_data.local);
    printk(KERN_INFO "acpu0 : %d.\n",efuse_trim_data.remote_acpu_c0);
    printk(KERN_INFO "acpu1 : %d.\n",efuse_trim_data.remote_acpu_c1);
    printk(KERN_INFO "gpupp : %d.\n",efuse_trim_data.remote_gpu);

    return;
}

/*****************************************************************************
 �� �� ��  : tsensor_init
 ��������  : tsensor��ʼ������
 �������  : pdev: �豸���
 �������  : ��
 �� �� ֵ  : 0:�ɹ���-1:ʧ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��5��6��
    ��    ��   : ���� 00217270
    �޸�����   : �����ɺ���
  �޸���ʷ      :
  1.��    ��   : 2014��5��26��
    ��    ��   : ���� w00251051
    �޸�����   : V8R1�޸�

*****************************************************************************/
int tsensor_init(struct platform_device *pdev)
{

    gstTempPrtInfo.virt_base_addr = (void __iomem  *)HISI_VA_ADDRESS(SOC_PERI_SCTRL_BASE_ADDR);
    if(!gstTempPrtInfo.virt_base_addr)
    {
        printk(KERN_ERR "tsensor baseaddr ioremap error.\n");
        return TSENSOR_ERR;
    }

    /* tsensor���ó�ʼ�� */
    (void)tsensor_config_init(pdev);

    if (gstTempPrtInfo.enable == 0)
    {
        printk(KERN_ERR "Tsensor is not enabled.\n");
	    return TSENSOR_ERR;
	}

    mutex_init(&gstTempPrtInfo.get_tmp_lock);

    tsensor_init_config();

    /*��late_init��ʼ����ɺ���λΪok*/
    gstTempPrtInfo.init_flag = TSENSOR_INIT_NOT_OK;

	printk(KERN_INFO "Tsensor early init ok.\n");

    return TSENSOR_OK;
}

//zhangran
static struct delayed_work	 tsensor_debug_work;

static void hw_tsensor_debug_work(void)
{
   hkadc_tsensor_debug_show();
   schedule_delayed_work(&tsensor_debug_work,
                        msecs_to_jiffies(60*1000));// 60s
}

/*****************************************************************************
 �� �� ��  : tsensor0_irq
 ��������  : tsensor0�жϴ�����
 �������  : ��
 �������  : ��
 �� �� ֵ  : tsensor״̬
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 
    ��    ��   : 
    �޸�����   : �����ɺ���

*****************************************************************************/
static irqreturn_t tsensor_irq(int irq, void *data)
{

    TRMP_PRT_INFO* pTempPrtInfo = (TRMP_PRT_INFO*)data;

    BUG_ON(!pTempPrtInfo);

    /*Tsensor0�¶ȼ���ж����μĴ�����*/
    TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_TEMP0_INT_EN_ADDR(0),
            SOC_PERI_SCTRL_SC_TEMP0_INT_EN_temp0_int_en_START,
            SOC_PERI_SCTRL_SC_TEMP0_INT_EN_temp0_int_en_END,
            0x0);

    /*Tsensor0�¶ȼ���ж�����Ĵ���*/
    TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_ADDR(0),
            SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_temp0_int_clr_START,
            SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_temp0_int_clr_END,
            0x01);

    pr_err("%s,%d \n", __func__, __LINE__);

    pTempPrtInfo->temp_prt_vote = BIT(TSENSOR_TYPE_LOCAL)|BIT(TSENSOR_TYPE_GPU);

    schedule_delayed_work(&tsensor_gov->tsensor_monitor_work,0);

    return IRQ_HANDLED;
}

void tsensor_late_init(void)
{
    int i = 0,ret=0;
    efuse_trim_init();

    for(i=0; i<gstTempPrtInfo.num; i++)
    {
        printk(KERN_INFO "sensor%d type : %d.\n",i,gstTempPrtInfo.sensor_config[i].sensor_type);
        printk(KERN_INFO "sensor%d sel : %d.\n",i,gstTempPrtInfo.sensor_config[i].sel);
        printk(KERN_INFO "sensor%d lag_value : %d.\n",i,gstTempPrtInfo.sensor_config[i].lag_value);
        gstTempPrtInfo.sensor_config[i].lag_cfg_value= (gstTempPrtInfo.sensor_config[i].lag_value*255/200);
        printk(KERN_INFO "sensor%d thres_value : %d.\n",i,gstTempPrtInfo.sensor_config[i].thres_value);
        printk(KERN_INFO "sensor%d reset_value : %d.\n",i,gstTempPrtInfo.sensor_config[i].reset_value);
        printk(KERN_INFO "sensor%d alarm_cnt : %d.\n",i,gstTempPrtInfo.sensor_config[i].alarm_cnt);
        printk(KERN_INFO "sensor%d recover_cnt : %d.\n",i,gstTempPrtInfo.sensor_config[i].recover_cnt);
        switch(gstTempPrtInfo.sensor_config[i].sensor_type)
        {
            case TSENSOR_TYPE_ACPU_CLUSTER0:
                gstTempPrtInfo.sensor_config[i].thres_cfg_value = \
                    ((gstTempPrtInfo.sensor_config[i].thres_value + 60 + efuse_trim_data.remote_acpu_c0)*255/200);
                gstTempPrtInfo.sensor_config[i].thres_cfg_value = \
                    (gstTempPrtInfo.sensor_config[i].thres_cfg_value>254)?254:gstTempPrtInfo.sensor_config[i].thres_cfg_value;
                gstTempPrtInfo.sensor_config[i].reset_cfg_value = \
                    ((gstTempPrtInfo.sensor_config[i].reset_value + 60 + efuse_trim_data.remote_acpu_c0)*255/200);
                gstTempPrtInfo.sensor_config[i].reset_cfg_value = \
                    (gstTempPrtInfo.sensor_config[i].reset_cfg_value>254)?254:gstTempPrtInfo.sensor_config[i].reset_cfg_value;
                break;
            case TSENSOR_TYPE_ACPU_CLUSTER1:
                gstTempPrtInfo.sensor_config[i].thres_cfg_value = \
                    ((gstTempPrtInfo.sensor_config[i].thres_value + 60 + efuse_trim_data.remote_acpu_c1)*255/200);
                gstTempPrtInfo.sensor_config[i].thres_cfg_value = \
                    (gstTempPrtInfo.sensor_config[i].thres_cfg_value>254)?254:gstTempPrtInfo.sensor_config[i].thres_cfg_value;
                gstTempPrtInfo.sensor_config[i].reset_cfg_value = \
                    ((gstTempPrtInfo.sensor_config[i].reset_value + 60 + efuse_trim_data.remote_acpu_c1)*255/200);
                gstTempPrtInfo.sensor_config[i].reset_cfg_value = \
                    (gstTempPrtInfo.sensor_config[i].reset_cfg_value>254)?254:gstTempPrtInfo.sensor_config[i].reset_cfg_value;
                break;
            case TSENSOR_TYPE_GPU:
                gstTempPrtInfo.sensor_config[i].thres_cfg_value = \
                    ((gstTempPrtInfo.sensor_config[i].thres_value + 60 + efuse_trim_data.remote_gpu)*255/200);
                gstTempPrtInfo.sensor_config[i].thres_cfg_value = \
                    (gstTempPrtInfo.sensor_config[i].thres_cfg_value>254)?254:gstTempPrtInfo.sensor_config[i].thres_cfg_value;
                gstTempPrtInfo.sensor_config[i].reset_cfg_value = \
                    ((gstTempPrtInfo.sensor_config[i].reset_value + 60 + efuse_trim_data.remote_gpu)*255/200);
                gstTempPrtInfo.sensor_config[i].reset_cfg_value = \
                    (gstTempPrtInfo.sensor_config[i].reset_cfg_value>254)?254:gstTempPrtInfo.sensor_config[i].reset_cfg_value;
                break;
            case TSENSOR_TYPE_LOCAL:
                gstTempPrtInfo.sensor_config[i].thres_cfg_value = \
                    ((gstTempPrtInfo.sensor_config[i].thres_value + 60 + efuse_trim_data.local)*255/200);
                gstTempPrtInfo.sensor_config[i].thres_cfg_value = \
                    (gstTempPrtInfo.sensor_config[i].thres_cfg_value>254)?254:gstTempPrtInfo.sensor_config[i].thres_cfg_value;
                gstTempPrtInfo.sensor_config[i].reset_cfg_value = \
                    ((gstTempPrtInfo.sensor_config[i].reset_value + 60 + efuse_trim_data.local)*255/200);
                gstTempPrtInfo.sensor_config[i].reset_cfg_value = \
                    (gstTempPrtInfo.sensor_config[i].reset_cfg_value>254)?254:gstTempPrtInfo.sensor_config[i].reset_cfg_value;
                break;
            default:
                break;
        }

          gstTempPrtInfo.sensor_config[i].thres_cfg_value |= 0x0FFFFFF00; 
          gstTempPrtInfo.sensor_config[i].temp_t0 = gstTempPrtInfo.sensor_config[i].thres_value; 
    }

    
    ret = request_irq(IRQ_TSENSOR0,tsensor_irq, IRQF_DISABLED,"Tsensor-irq",(void*)&gstTempPrtInfo);
    if (ret) {
        pr_err("%s,%d request_irq  failed!\n", __func__, __LINE__);
        return;
    }

    /*hw init*/
    tsensor_config_set(tsensor_get_index_by_type(TSENSOR_TYPE_LOCAL));

    /*Tsensor0�¶ȼ���ж�����Ĵ�����clr irq*/
    TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_ADDR(0),
            SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_temp0_int_clr_START,
            SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_temp0_int_clr_END,
            0x01);


    /*Tsensor0�¶ȼ���ж����μĴ�����enable irq*/
    TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_TEMP0_INT_EN_ADDR(0),
            SOC_PERI_SCTRL_SC_TEMP0_INT_EN_temp0_int_en_START,
            SOC_PERI_SCTRL_SC_TEMP0_INT_EN_temp0_int_en_END,
            0x01);

    gstTempPrtInfo.init_flag = TSENSOR_INIT_OK;
    pr_info("Tsensor late init ok.\n");



    /* HKADC BUSINESS -s */
    INIT_DELAYED_WORK(&tsensor_debug_work,
                      hw_tsensor_debug_work);
    schedule_delayed_work(&tsensor_debug_work,
                        msecs_to_jiffies(60*1000));// 60s
    /* HKADC BUSINESS -e */
                        
    return;
}

/*****************************************************************************
 �� �� ��  : tsensor_suspend
 ��������  : tsensor������
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��5��6��
    ��    ��   : ���� 00217270
    �޸�����   : �����ɺ���
  �޸���ʷ      :
 1.��    ��   : 2014��5��26��
   ��    ��   : ���� w00251051
   �޸�����   : V8R1�޸�
*****************************************************************************/
int tsensor_suspend(void)
{

    if(TSENSOR_INIT_OK != gstTempPrtInfo.init_flag)
    {
        return 0;
    }

    /*ȥʹ���¶ȼ��ģ��*/
    TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_TEMP0_EN_ADDR(0),
            SOC_PERI_SCTRL_SC_TEMP0_EN_temp0_en_raw_START,
            SOC_PERI_SCTRL_SC_TEMP0_EN_temp0_en_raw_END,
            0x0);

    /*�����¶ȼ�⸴λ*/
    TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_ADDR(0),
            SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_temp0_rst_msk_START,
            SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_temp0_rst_msk_END,
            0x0);

    /*�����¶ȼ���жϣ�*/
    TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_TEMP0_INT_EN_ADDR(0),
            SOC_PERI_SCTRL_SC_TEMP0_INT_EN_temp0_int_en_START,
            SOC_PERI_SCTRL_SC_TEMP0_INT_EN_temp0_int_en_END,
            0x0);

    /*�ر�ʱ��*/
    TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_ADDR(0),
            SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_tsensor_START,
            SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_tsensor_END,
            0x1);

    return 0;
}

/*****************************************************************************
 �� �� ��  : tsensor_resume
 ��������  : tsensor�ָ�����
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��5��6��
    ��    ��   : ���� 00217270
    �޸�����   : �����ɺ���
  �޸���ʷ      :
 1.��    ��   : 2014��5��26��
   ��    ��   : ���� w00251051
   �޸�����   : V8R1�޸�
*****************************************************************************/
int tsensor_resume(void)
{
    if((TSENSOR_INIT_OK != gstTempPrtInfo.init_flag)||(TSENSOR_FEATURES_OFF == gstTempPrtInfo.enable))
    {
        return 0;
    }

    tsensor_init_config();
    tsensor_config_set(tsensor_get_index_by_type(TSENSOR_TYPE_LOCAL));

    /*Tsensor0�¶ȼ���ж�����Ĵ�����clr irq*/
    TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_ADDR(0),
            SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_temp0_int_clr_START,
            SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_temp0_int_clr_END,
            0x01);


    /*Tsensor0�¶ȼ���ж����μĴ�����enable irq*/
    TSENSOR_REG_WRITE(SOC_PERI_SCTRL_SC_TEMP0_INT_EN_ADDR(0),
            SOC_PERI_SCTRL_SC_TEMP0_INT_EN_temp0_int_en_START,
            SOC_PERI_SCTRL_SC_TEMP0_INT_EN_temp0_int_en_END,
            0x01);
    
    return 0;
}

void tsensor_switch(int on_or_off)
{
    if(TSENSOR_FEATURES_ON == on_or_off)
    {
        tsensor_resume();
    }
    else if (TSENSOR_FEATURES_OFF == on_or_off)
    {
        tsensor_suspend();
    }

    gstTempPrtInfo.enable = on_or_off;
}

int tsensor_status(void)
{
    return gstTempPrtInfo.enable;
}

static int __init tsensor_get_trim(char *p)
{
   phys_addr_t trimdata;
   char *endp;
   trimdata  = memparse(p, &endp);
   efuse_trim_data.trimdata = trimdata;
   return 0;
}
early_param("thermal_trim", tsensor_get_trim);

