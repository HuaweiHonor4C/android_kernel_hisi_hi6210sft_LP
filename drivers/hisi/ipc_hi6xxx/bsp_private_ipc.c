
#include <linux/module.h>
#include <asm/io.h>
#include <asm/string.h>
#include <linux/semaphore.h>
#include <linux/interrupt.h>
#include <linux/io.h>
#include <linux/delay.h>
#include <linux/device.h>
#include <linux/init.h>
#include <linux/hisi/hi6xxx-iomap.h>                   /* For IO_ADDRESS access */

//#include <mach/hardware.h>
//#include <mach/system.h>
//#include <mach/irqs.h>
//#include <mach/io.h>
//#include <mach/platform.h>
#include "bsp_private_ipc.h"

#ifdef __cplusplus
extern "C" {
#endif


#define IPC2_NOSEC_CORE_ACPU 5

static unsigned long g_private_ipc_base = 0;
/*****************************************************************************
* �� �� ��  : BSP_DRV_PRIVATE_IPCIntInit
*
* ��������  : IPCģ���ʼ��
*
* �������  : ��
* �������  : ��
*
* �� �� ֵ  : ��
*
* �޸ļ�¼  : 2009��3��5��   wangjing  creat
*****************************************************************************/
int BSP_DRV_PRIVATE_IPCIntInit(void)
{
    /* make this funciton reentrant */
    if (g_private_ipc_base)
    {
        printk(KERN_INFO "private ipc is inited.\n");
        return 0;
    }

    g_private_ipc_base = (unsigned long)ioremap(SOC_IPC_BASE_ADDR,SZ_4K);
    if (!g_private_ipc_base)
    {
    	printk(KERN_ERR "ipc ioremap error.\n");
    	return -1;
    }

       /*дȫ0�������л���Դ*/
    BSP_RegWr(SOC_IPC_CPU_INT_MASK_ADDR(g_private_ipc_base, IPC2_NOSEC_CORE_ACPU), 0x0);

    /*дȫ1��������ж�*/
    BSP_RegWr(SOC_IPC_CPU_INT_CLR_ADDR(g_private_ipc_base, IPC2_NOSEC_CORE_ACPU), 0xFFFFFFFF);

    return 0;
}

void clear_private_ipc_int(unsigned int  enTarget, unsigned int enIntSrc)
{
    BSP_RegWr(SOC_IPC_CPU_INT_CLR_ADDR(g_private_ipc_base, enTarget), (0x1<<enIntSrc));
}


/*****************************************************************************
* �� �� ��  : BSP_IPC_IntEnable
*
* ��������  : ʹ��ĳ���ж�
*
* �������  :   IPC_INT_CORE_E enCoreNum Ҫʹ���жϵ�core
                BSP_U32 ulLvl Ҫʹ�ܵ��жϺţ�ȡֵ��Χ0��31
* �������  : ��
*
* �� �� ֵ  : OK&ERROR
*
* �޸ļ�¼  : 2011��4��11�� wangjing creat
*****************************************************************************/
int BSP_PRIVATE_IPC_IntEnable (unsigned int ulLvl)
{
    /*�������*/
    IPC_CHECK_PARA(ulLvl);

    /*д�ж����μĴ���*/
    BSP_RegWr(SOC_IPC_CPU_INT_EN_ADDR(g_private_ipc_base, IPC2_NOSEC_CORE_ACPU), (1 << ulLvl));

    return 0;
}


/*****************************************************************************
 * �� �� ��  : BSP_INT_Disable
 *
 * ��������  : ȥʹ��ĳ���ж�
 *
 * �������  : IPC_INT_CORE_E enCoreNum Ҫʹ���жϵ�core
                BSP_U32 ulLvl Ҫʹ�ܵ��жϺţ�ȡֵ��Χ0��31
 * �������  : ��
 *
 * �� �� ֵ  : OK&ERROR
 *
 * �޸ļ�¼  : 2011��4��11�� wangjing creat
 *****************************************************************************/
int BSP_PRIVATE_IPC_IntDisable (NOSEC_IPC2_INT_LEV_E ulLvl)
{
    /*�������*/
    IPC_CHECK_PARA(ulLvl);

    /*д�ж����μĴ���*/
    BSP_RegWr(SOC_IPC_CPU_INT_DIS_ADDR(g_private_ipc_base, IPC2_NOSEC_CORE_ACPU), (1 << ulLvl));

    return 0;
}

#ifdef __cplusplus
}
#endif

