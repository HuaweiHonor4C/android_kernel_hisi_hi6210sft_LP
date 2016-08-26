/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : bsp_timer.c
  �� �� ��   : ����
  ��    ��   : ����ΰ 176398
  ��������   : 2012��9��20��
  ����޸�   :
  ��������   : timer����
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2012��9��20��
    ��    ��   : ����ΰ 176398
    �޸�����   : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include <linux/module.h>
#include <linux/spinlock.h>
#include <asm/io.h>
#include <linux/hisi/hi6xxx-iomap.h>                   /* For IO_ADDRESS access */

#include <linux/hisi/hi6xxx-platform.h>
#include "bsp_timer_phy_om.h"
#include "soc_timer_interface.h"
#include "bsp_timer_if.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif



/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/
/* base address(virtual addr) of timer1 registers */
unsigned long timer1_base = 0;

/* om timer�Ƿ��ʼ��flag */
TIMER_INIT_FLAG g_om_timer_inited = TIMER_UNINITED;

spinlock_t g_sysctrl_lock = SPIN_LOCK_UNLOCKED;
/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/

/*****************************************************************************
 �� �� ��  : init_om_hardware_timer
 ��������  : ��ʼ��OMʹ�õ�timer
 �������  : ��
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��9��7��
    ��    ��   : ����ΰ 176398
    �޸�����   : �����ɺ���

*****************************************************************************/
int __init init_om_hardware_timer(void)
{
    volatile unsigned int tmp_val = 0;
    unsigned long timer1_addr = 0;
    unsigned long sctrl_addr = HISI_VA_ADDRESS(SOC_AO_SCTRL_BASE_ADDR);

    timer1_base = (unsigned long)ioremap(OSA_TIMER_REG_BASE, OSA_TIMER_REG_SIZE);
    if (!timer1_base)
    {
        printk(KERN_ERR "timer1 reg ioremap error.\n");
        return -1;
    }

    timer1_addr = timer1_base;

    /*��ϵͳ�������Ĳ�����ʹ��spin_lock��ס*/
    spin_lock(&g_sysctrl_lock);

    /*ѡ��32Kʱ��*/
    tmp_val = readl(SOC_AO_SCTRL_SC_TIMER_EN0_ADDR(sctrl_addr));
    tmp_val = (tmp_val & SC_TIMER_EN0_MSK_TIMER1_0_MSK) | (TIMER_32K << SC_TIMER_EN0_MSK_TIMER1_0_START_BIT);
    tmp_val = (tmp_val & SC_TIMER_EN0_TIMER1_0_MSK) | (TIMER_32K << SC_TIMER_EN0_TIMER1_0_START_BIT);
    writel(tmp_val, SOC_AO_SCTRL_SC_TIMER_EN0_ADDR(sctrl_addr));
    /*�ͷ��жϻ���*/
    spin_unlock(&g_sysctrl_lock);

    /*��ʼ��timer*/
    tmp_val = TIMER_DEF_TC_DISABLE | TIMER_DEF_TC_PERIODIC | TIMER_DEF_TC_INTDISABLE |\
            TIMER_DEF_TC_CLK_DIV_1 | TIMER_DEF_TC_32BITS_MODE;
    tmp_val = (tmp_val & TIMER_DEF_TC_ONESHOT_MODE_BIT_MSK) | TIMER_DEF_TC_ONCE_MODE;
    writel(tmp_val, SOC_TIMER_TIMERN_CONTROL_ADDR(timer1_addr, OSA_TIMER_INDEX));

    g_om_timer_inited = TIMER_INITED;

    return 0;
}

/************************************************************************
 * FUNCTION
 *      start_om_hard_timer
 * DESCRIPTION
 *       start hard timer
 * INPUTS
 *       value -- timer's value.uint is 32K cycle
 * OUTPUTS
 *       NONE
 *************************************************************************/
int start_om_hard_timer(unsigned int value)
{
    volatile unsigned int tmp_val = 0;
    unsigned long timer1_addr = 0;

    if(TIMER_UNINITED == g_om_timer_inited)
    {
        printk("%s: om hardware timer uninitialized\n",__func__);
        return -1;
    }

    timer1_addr = timer1_base;

    /*ֹͣtimer*/
    tmp_val = readl(SOC_TIMER_TIMERN_CONTROL_ADDR(timer1_addr, OSA_TIMER_INDEX));
    tmp_val = (tmp_val & TIMER_DEF_TC_ENABLE_BIT_MSK) | TIMER_DEF_TC_DISABLE;
    writel(tmp_val, SOC_TIMER_TIMERN_CONTROL_ADDR(timer1_addr, OSA_TIMER_INDEX));

    /*����ʱֵ���õ�timer load�Ĵ���*/
    writel(value, SOC_TIMER_TIMERN_LOAD_ADDR(timer1_addr, OSA_TIMER_INDEX));

    /*����timer*/
    writel(TIMER_INT_CLEAR, SOC_TIMER_TIMERN_INTCLR_ADDR(timer1_addr, OSA_TIMER_INDEX));/* clear timer int*/
    tmp_val = (tmp_val & TIMER_DEF_TC_ENABLE_BIT_MSK) | TIMER_DEF_TC_ENABLE;
    tmp_val = (tmp_val & TIMER_DEF_TC_INT_BIT_MSK)| TIMER_DEF_TC_INTENABLE;
    writel(tmp_val, SOC_TIMER_TIMERN_CONTROL_ADDR(timer1_addr, OSA_TIMER_INDEX));

    return 0;
}


/************************************************************************
 * FUNCTION
 *       stop_om_hard_timer
 * DESCRIPTION
 *       Stop hard timer
 * INPUTS
 *       NONE
 * OUTPUTS
 *       NONE
 *************************************************************************/
int stop_om_hard_timer(void)
{
    volatile unsigned int value = 0;
    unsigned long timer1_addr = 0;

    if(TIMER_UNINITED == g_om_timer_inited)
    {
        printk("%s: om hardware timer uninitialized\n",__func__);
        return -1;
    }

    timer1_addr = timer1_base;

    value = readl(SOC_TIMER_TIMERN_CONTROL_ADDR(timer1_addr, OSA_TIMER_INDEX));
    value = (value & TIMER_DEF_TC_ENABLE_BIT_MSK) | TIMER_DEF_TC_DISABLE;
    value = (value & TIMER_DEF_TC_INT_BIT_MSK) | TIMER_DEF_TC_INTDISABLE;
    writel(value, SOC_TIMER_TIMERN_CONTROL_ADDR(timer1_addr, OSA_TIMER_INDEX));

    return 0;
}

/************************************************************************
 * FUNCTION
 *       get_om_hard_timer_curtime
 * DESCRIPTION
 *       Get hard timer Current Value
 * INPUTS
 *       NONE
 * OUTPUTS
 *       NONE
 *************************************************************************/
unsigned int get_om_hard_timer_curtime(void)
{
    unsigned int readValue = 0;

    unsigned long timer1_addr = 0;

    if(TIMER_UNINITED == g_om_timer_inited)
    {
        printk("%s: om hardware timer uninitialized\n",__func__);
        return 0;
    }

    timer1_addr = timer1_base;

    readValue = readl(SOC_TIMER_TIMERN_VALUE_ADDR(timer1_addr, OSA_TIMER_INDEX));

    return readValue;
}

/************************************************************************
 * FUNCTION
 *       clear_om_hard_timer_int
 * DESCRIPTION
 *       clear om hard timer interrupt
 * INPUTS
 *       NONE
 * OUTPUTS
 *       NONE
 *************************************************************************/
int clear_om_hard_timer_int(void)
{


    unsigned long timer1_addr = 0;

    if(TIMER_UNINITED == g_om_timer_inited)
    {
        printk("%s: om hardware timer uninitialized\n",__func__);
        return -1;
    }

    timer1_addr = timer1_base;

    writel(TIMER_INT_CLEAR, SOC_TIMER_TIMERN_INTCLR_ADDR(timer1_addr, OSA_TIMER_INDEX));

    return 0;
}

/************************************************************************
 * FUNCTION
 *       GetHardTimerCurTime
 * DESCRIPTION
 *       Get hard timer Current Value
 * INPUTS
 *       NONE
 * OUTPUTS
 *       NONE
 *************************************************************************/
unsigned int GetHardTimerCurTime(void)
{
    unsigned int readValue;

    readValue = get_om_hard_timer_curtime();

    return readValue;
}

module_init(init_om_hardware_timer);
EXPORT_SYMBOL(start_om_hard_timer);
EXPORT_SYMBOL(stop_om_hard_timer);
EXPORT_SYMBOL(get_om_hard_timer_curtime);
EXPORT_SYMBOL(clear_om_hard_timer_int);
EXPORT_SYMBOL(GetHardTimerCurTime);

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

