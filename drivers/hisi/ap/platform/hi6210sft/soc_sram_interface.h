/******************************************************************************

                 ��Ȩ���� (C), 2001-2012, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : soc_sram_interface.h
  �� �� ��   : ����
  ��    ��   : 
  ��������   : 2012-06-05 09:48:59
  ����޸�   :
  ��������   : �ӿ�ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2012��6��5��
    ��    ��   : 
    �޸�����   : 

******************************************************************************/

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_SRAM_INTERFACE_H__
#define __SOC_SRAM_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif

#include "soc/soc_baseaddr_interface.h"

#define MEMORY_AXI_ACORE_DPM_ADDR           (SOC_SRAM_BASE_ADDR)
#define MEMORY_AXI_ACORE_DPM_SIZE           (0x00001000)

#define MEMORY_AXI_SOFT_FLAG_ADDR           (MEMORY_AXI_ACORE_DPM_ADDR + MEMORY_AXI_ACORE_DPM_SIZE)
#define MEMORY_AXI_SOFT_FLAG_SIZE           (0x00001000)

#define MEMORY_AXI_ICC_CHANNEL_ADDR         (MEMORY_AXI_SOFT_FLAG_ADDR + MEMORY_AXI_SOFT_FLAG_SIZE)
#define MEMORY_AXI_ICC_CHANNEL_SIZE         (0x00008000)

#define MEMORY_AXI_SECURE_ADDR              (MEMORY_AXI_ICC_CHANNEL_ADDR + MEMORY_AXI_ICC_CHANNEL_SIZE)
#define MEMORY_AXI_SECURE_SIZE              (0x00028000)

/* soft flag */
#define MEMORY_AXI_SRESET_FLAG_ADDR         (MEMORY_AXI_SOFT_FLAG_ADDR) 
#define MEMORY_AXI_SRESET_FLAG_SIZE         (4)

#define MEMORY_AXI_SECOND_CPU_START_ADDR    (MEMORY_AXI_SRESET_FLAG_ADDR + MEMORY_AXI_SRESET_FLAG_SIZE) 
#define MEMORY_AXI_SECOND_CPU_START_SIZE    (4)

#define MEMORY_AXI_CPU1_STACK_ADDR          (MEMORY_AXI_SECOND_CPU_START_ADDR + MEMORY_AXI_SECOND_CPU_START_SIZE) 
#define MEMORY_AXI_CPU1_STACK_SIZE          (4)

#define MEMORY_AXI_CPU2_STACK_ADDR          (MEMORY_AXI_CPU1_STACK_ADDR + MEMORY_AXI_CPU1_STACK_SIZE) 
#define MEMORY_AXI_CPU2_STACK_SIZE          (4)

#define MEMORY_AXI_CPU3_STACK_ADDR          (MEMORY_AXI_CPU2_STACK_ADDR + MEMORY_AXI_CPU2_STACK_SIZE) 
#define MEMORY_AXI_CPU3_STACK_SIZE          (4)

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of soc_sram_interface.h */
