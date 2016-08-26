/*************************************************************************
*   ��Ȩ����(C) 1987-2004, ���ڻ�Ϊ�������޹�˾.
*
*   �� �� �� :  memMapGlobal.h
*
*   ��    �� :  liumengcun
*
*   ��    �� :  ���������ڴ����
*
*   �޸ļ�¼ :  2011��12��20��  v1.00  liumengcun  ����
*
*************************************************************************/
#ifndef __MEM_MAP_GLOBAL_H__
#define __MEM_MAP_GLOBAL_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#include "product_config.h"
#include "MemoryMap.h"

/* �ϱ��빤��ʹ�õĲ��֣��¹����Ƶ���product_config.h��
 */
 #ifdef  _DRV_LLT_
#ifndef BALONG_OBUILD_VERSION
#define BALONG_OBUILD_VERSION 10 
#endif 
#endif 
#ifndef BALONG_OBUILD_VERSION
/*-------------------------------------------------------------------------------
                            �����ڴ�ʹ�÷���,V7R1/PV500
  -------------------------------------------------------------------------------

                        | SOCP_BASE(0x1800000)          |UDP�������չʹ�ú�128M��ַ�ռ�
                         ------------------------------- 0x38000000
                        | ACORE_ACP(0x200000)           |
                         ------------------------------- 0x37E00000
                        | SOCP_BASE(0x800000)           | USB STICK,E5�����м��8M��ַ�ռ�
                         ------------------------------- 0x37600000
                        | ACORE_BASE(0x2000000)         |
                         ------------------------------- 0x35600000
                        | GU_RESERVED(0x1200000)        |
                         ------------------------------- 0x34400000
                        | CORE_SHARE(0x400000)          |
                         ------------------------------- 0x34000000
                        | PM_USER_RESERVED(0x6000)      |
                         ------------------------------- 0x33FFA000
                        | MCORE_USER_RESERVED(0x100000) |
                         ------------------------------- 0x33EFA000
                        | MCORE BASE(0x3CFA000)         |
                         ------------------------------- 0x30200000
                        | MCORE ACP(0x200000)           |
                         ------------------------------- 0x30000000
-------------------------------------------------------------------------------*/


/* �����ڴ����ַ*/
#if((defined(CHIP_BB_6920ES) || defined (CHIP_BB_6920CS)) && (defined(BOARD_ASIC) || defined (BOARD_SFT)))
#define GLOBAL_MEM_BASE_ADDR                   0x30000000
#elif ((defined(CHIP_BB_6920ES) || defined (CHIP_BB_6920CS)) && defined(BOARD_FPGA))
#define GLOBAL_MEM_BASE_ADDR                   0xC0000000
#else
#error "wrong board type"
#endif

/* ACORE ACPʹ�û���ַ*/
#define GLOBAL_MEM_ACORE_ACP_ADDR              GLOBAL_MEM_BASE_ADDR
#define GLOBAL_MEM_ACORE_ACP_SIZE              0x000000

/* MCOREʹ���ڴ����ַ*/
#define GLOBAL_MEM_MCORE_BASE_ADDR             ((GLOBAL_MEM_ACORE_ACP_ADDR) + (GLOBAL_MEM_ACORE_ACP_SIZE))
#if (  defined(CHIP_BB_6920CS) \
     &&(defined(BOARD_FPGA) || defined(BOARD_SFT) || defined(FEATURE_BOARD_STUB_BJ_UDP)))
#define GLOBAL_MEM_MCORE_BASE_SIZE             0x4FFA000
#else
#define GLOBAL_MEM_MCORE_BASE_SIZE             0x36FA000
#endif

/* MCORE����ϵͳ�����ڴ棬��¼EDR����*/
#define GLOBAL_MEM_MCORE_PM_RESERVED_ADDR      ((GLOBAL_MEM_MCORE_BASE_ADDR) + (GLOBAL_MEM_MCORE_BASE_SIZE))
#define GLOBAL_MEM_MCORE_PM_RESERVED_SIZE      0x6000

/* MCORE�����ڴ����ַ�������ڲ�ʹ�ã���ά�ɲ��*/
#define GLOBAL_MEM_MCORE_USER_RESERVED_ADDR    ((GLOBAL_MEM_MCORE_PM_RESERVED_ADDR) + (GLOBAL_MEM_MCORE_PM_RESERVED_SIZE))
#define GLOBAL_MEM_MCORE_USER_RESERVED_SIZE    0x100000

/* �˼乲���ڴ����ַ*/
#define GLOBAL_MEM_CORE_SHARE_ADDR             ((GLOBAL_MEM_MCORE_USER_RESERVED_ADDR) + (GLOBAL_MEM_MCORE_USER_RESERVED_SIZE))
#define GLOBAL_MEM_CORE_SHARE_SIZE             0x100000

/* ACOREʹ���ڴ����ַ*/
#define GLOBAL_MEM_ACORE_BASE_ADDR             ((GLOBAL_MEM_CORE_SHARE_ADDR) + (GLOBAL_MEM_CORE_SHARE_SIZE))
#define GLOBAL_MEM_ACORE_BASE_SIZE             0x2C00000

/* ��GUԤ�����ڴ����ַ*/
#define GLOBAL_MEM_GU_RESERVED_ADDR            ((GLOBAL_MEM_ACORE_BASE_ADDR) + (GLOBAL_MEM_ACORE_BASE_SIZE))
#if (  defined(CHIP_BB_6920CS) \
     &&(defined(BOARD_FPGA) || defined(BOARD_SFT) || defined(FEATURE_BOARD_STUB_BJ_UDP)))
    #define GLOBAL_MEM_GU_RESERVED_ADDR_VIRT       0xF3200000
#else
    #define GLOBAL_MEM_GU_RESERVED_ADDR_VIRT       0xF3900000
#endif
#define GLOBAL_MEM_GU_RESERVED_SIZE            0x1500000

#define GLOBAL_LNV_BASE_ADDR                   ((GLOBAL_MEM_GU_RESERVED_ADDR) + (GLOBAL_MEM_GU_RESERVED_SIZE))
#define GLOBAL_LNV_BASE_SIZE                   0x80000

/* LCS����ַ*/

#define GLOBAL_MEM_LCS_ADDR                   ((GLOBAL_LNV_BASE_ADDR) + (GLOBAL_LNV_BASE_SIZE))
#define GLOBAL_MEM_LCS_SIZE                   0x280000

#if((defined(CHIP_BB_6920ES) || defined (CHIP_BB_6920CS)) && (defined(BOARD_ASIC) || defined (BOARD_SFT)))
#if defined(FEATURE_BOARD_STUB_BJ_E5776S) || defined (FEATURE_BOARD_STUB_BJ_STICK)
/* SOCPʹ�û���ַ*/
#define GLOBAL_MEM_SOCP_ADDR                   ((GLOBAL_MEM_LCS_ADDR) + (GLOBAL_MEM_LCS_SIZE))
#define GLOBAL_MEM_SOCP_SIZE                   0x200000

#elif (defined(FEATURE_BOARD_STUB_BJ_UDP) || defined(FEATURE_BOARD_STUB_BJ_SFT)) /* UDP����
 */
/* HIFIʹ�õ�ַ*/
#define GLOBAL_MEM_HIFI_ADDR                  ((GLOBAL_MEM_LCS_ADDR) + (GLOBAL_MEM_LCS_SIZE))
#define GLOBAL_MEM_HIFI_SIZE                  0x100000

/* SOCPʹ�û���ַ*/
#define GLOBAL_MEM_SOCP_ADDR                   ((GLOBAL_MEM_HIFI_ADDR) + (GLOBAL_MEM_HIFI_SIZE))
#define GLOBAL_MEM_SOCP_SIZE                   0x1800000

#else
#error "wrong board type"
#endif
#elif ((defined(CHIP_BB_6920ES) || defined (CHIP_BB_6920CS)) && defined(BOARD_FPGA))
/* SOCPʹ�û���ַ*/
#define GLOBAL_MEM_SOCP_ADDR                   ((GLOBAL_MEM_LCS_ADDR) + (GLOBAL_MEM_LCS_SIZE))
#define GLOBAL_MEM_SOCP_SIZE                   0x1800000

#else
#error "wrong board type"
#endif

/* MCORE ACP����ַ*/
#define GLOBAL_MEM_MCORE_ACP_ADDR              ((GLOBAL_MEM_SOCP_ADDR) + (GLOBAL_MEM_SOCP_SIZE))
#define GLOBAL_MEM_MCORE_ACP_SIZE              0x000000


/*-------------------------------------------------------------------------------
                            �����ڴ�,V7R1
  -------------------------------------------------------------------------------
                         ----------------------- 0x38400000
                        |  SYNC(0x60)           |
                         ----------------------- 0x383FFFA0
                        |  MEM spinlock(0x20)   |
                         ----------------------- 0x383FFF80
                        |  ICC(0x80)            |
                         ----------------------- 0x383FFF00
                        |  MULT BAND(0x8000)   |
                         ----------------------- 0x383F7F00
                        |  IPC(0x20)           |
                         ----------------------- 0x383F7EE0               
                        |  WAN(0x5000)         |
                         ----------------------- 0x383F2EE0
                        |  MEM MGR M            |
                         ----------------------- 0x38000000
-------------------------------------------------------------------------------*/
/* �Ӷ����·��䣬���µ�ַ�ʹ�С���ɸı� */
#define CORESHARE_MEM_ADDR                     GLOBAL_MEM_CORE_SHARE_ADDR
#define CORESHARE_MEM_SIZE                     GLOBAL_MEM_CORE_SHARE_SIZE
#define CORESHARE_MEM_TOP_ADDR                 ((CORESHARE_MEM_ADDR) + (CORESHARE_MEM_SIZE))

#define CORESHARE_MEM_SYNC_SIZE                0x60
#define CORESHARE_MEM_SYNC_ADDR                ((CORESHARE_MEM_TOP_ADDR) - (CORESHARE_MEM_SYNC_SIZE))
    
#define CORESHARE_MEM_SPINLOCK_SIZE            0x20
#define CORESHARE_MEM_SPINLOCK_ADDR            ((CORESHARE_MEM_SYNC_ADDR) - (CORESHARE_MEM_SPINLOCK_SIZE))

#define CORESHARE_MEM_ICC_SIZE                 0x80
#define CORESHARE_MEM_ICC_ADDR                 ((CORESHARE_MEM_SPINLOCK_ADDR) - (CORESHARE_MEM_ICC_SIZE))

/* ��bandԤ���ڴ�,װ��CT BTʹ��*/
#define CORESHARE_MEM_TENCILICA_MULT_BAND_SIZE  0x8000
#define CORESHARE_MEM_TENCILICA_MULT_BAND_ADDR ((CORESHARE_MEM_ICC_ADDR) - (CORESHARE_MEM_TENCILICA_MULT_BAND_SIZE))

#define CORESHARE_MEM_IPC_SIZE                 0x20
#define CORESHARE_MEM_IPC_ADDR                 ((CORESHARE_MEM_TENCILICA_MULT_BAND_ADDR) - (CORESHARE_MEM_IPC_SIZE))

/* Ӳ����Ϣ������������HKADC��̬��� */
#define CORESHARE_MEM_HW_INFO_SIZE             0x40
#define CORESHARE_MEM_HW_INFO_ADDR              ((CORESHARE_MEM_IPC_ADDR) - (CORESHARE_MEM_HW_INFO_SIZE))

#define CORESHARE_MEM_WAN_SIZE                 0x8000
#define CORESHARE_MEM_WAN_ADDR                 ((CORESHARE_MEM_HW_INFO_ADDR) - (CORESHARE_MEM_WAN_SIZE))

#define CORESHARE_MEM_MEMMGR_SIZE              ((CORESHARE_MEM_WAN_ADDR) - (CORESHARE_MEM_MEMMGR_ADDR))
#define CORESHARE_MEM_MEMMGR_ADDR              CORESHARE_MEM_ADDR


/*GU NVԤ���ڴ�ռ�궨��,P500����ַΪ0xCxxxxxxx��ʹ��IO_ADDRESS���ܵ������鲻ͬ
��ʵ��ַӳ�䵽ͬһ�����ַ,���Դ����ַ����ֱ�Ӷ���*/
#define GLOBAL_MEM_GUNV_RESV_VIRT       (0xFF3B0000)
#define GLOBAL_MEM_GUNV_RESV_PHYS       (GLOBAL_MEM_GU_RESERVED_ADDR + GLOBAL_MEM_GU_RESERVED_SIZE - 0x50000)
#define GLOBAL_MEM_GUNV_RESV_SIZE       (0x30000)

#if 0
#if((defined(CHIP_BB_6920ES) || defined (CHIP_BB_6920CS)) && (defined(BOARD_ASIC) || defined (BOARD_SFT)))

/* �±�����OM��GUL DSP�����ַ�����ڴ����¶�ֵ����Ҫ��BSP_MEMORY.h����һ�£��õ�ַ���ܱ��޸�*/
#define GLOBAL_AXI_TEMP_PROTECT_ADDR        0x2FFFE218
#define GLOBAL_AXI_TEMP_PROTECT_SIZE        (128)

/* GUʹ�õ�DICC���Ե�ַ����Ҫ��BSP_MEMORY.h����һ�£��õ�ַ���ܱ��޸�*/
#define GLOBAL_AXI_DICC_ADDR                0x2FFFFEC0
#define GLOBAL_AXI_DICC_SIZE                (32)
#elif ((defined(CHIP_BB_6920ES) || defined (CHIP_BB_6920CS)) && defined(BOARD_FPGA))
/* GUʹ�õ�DICC���Ե�ַ����Ҫ��BSP_MEMORY.h����һ�£��õ�ַ���ܱ��޸�*/
#define GLOBAL_AXI_DICC_ADDR                0x3000D3C0
#define GLOBAL_AXI_DICC_SIZE                (32)

/* �±�����OM��GUL DSP�����ַ�����ڴ����¶�ֵ����Ҫ��BSP_MEMORY.h����һ�£��õ�ַ���ܱ��޸�*/
#define GLOBAL_AXI_TEMP_PROTECT_ADDR        0x3000D3E0
#define GLOBAL_AXI_TEMP_PROTECT_SIZE        (128)

#else
#error "wrong board type"
#endif
#endif

#endif /*#ifndef BALONG_OBUILD_VERSION
 */

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif


#endif /* end of __MEM_MAP_GLOBAL_H__ */

