/*************************************************************************
*   ��Ȩ����(C) 1987-2011, ���ڻ�Ϊ�������޹�˾.
*
*   �� �� �� :  Drvinterface.c
*
*   ��    �� :  c61362
*
*   ��    �� :  ������ϲ������װ�Ľӿڲ�
*
*   �޸ļ�¼ :  2012��3��2�� ����
*************************************************************************/
#include "BSP.h"
#include "soc_irqs.h"
#include <linux/module.h>

#include "soc_baseaddr_interface.h"
#include "soc_timer_interface.h"
#include "soc_peri_sctrl_interface.h"
#include <soc_ao_sctrl_interface.h>
#include "MemoryMap.h"
#include <linux/dma-mapping.h>
//#include <mach/bsp_timer.h>




/*************************�ڴ���ʵת�� start*********************************/

/*****************************************************************************
 �� �� ��  : drv_uncache_mem_alloc
 ��������  : �����cache���ڴ�
 �������  : int size
 �������  : ��
 �� �� ֵ  : void * ���뵽�ڴ�������ַ
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��9��5��
    ��    ��   : ����ΰ 176398
    �޸�����   : �����ɺ���

*****************************************************************************/
void * drv_uncache_mem_alloc( int size )
{
    dma_addr_t phys_addr;	
	
#ifdef CONFIG_ARM64
    struct device        dev;
#endif

    if(size <= 0)
	{
        return NULL;
    }

    /*ʹ��ϵͳAPI���װ�Ľӿ�����uncache���ڴ�*/
#ifdef CONFIG_ARM64
	memset(&dev, 0, sizeof(dev));
    return dma_alloc_coherent(&dev, size, &phys_addr, GFP_KERNEL); 
#else
   return dma_alloc_coherent(NULL, size, &phys_addr, GFP_KERNEL);
#endif
}
EXPORT_SYMBOL(drv_uncache_mem_alloc);
