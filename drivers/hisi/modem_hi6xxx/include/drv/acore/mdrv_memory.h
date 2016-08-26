
/*************************************************************************
*   ��Ȩ����(C) 1987-2011, ���ڻ�Ϊ�������޹�˾.
*
*   �� �� �� :  mdrv_memory.h
*
*   ��    �� :  yangzhi
*
*   ��    �� :  ���ļ�����Ϊ"mdrv.h", ����V7R1�����Э��ջ֮���API�ӿ�ͳ��
*
*   �޸ļ�¼ :  2011��1��18��  v1.00  yangzhi����
*************************************************************************/

#ifndef __MDRV_ACORE_MEMORY_H__
#define __MDRV_ACORE_MEMORY_H__
#ifdef __cplusplus
extern "C"
{
#endif

#include <mdrv_memory_common.h>

typedef enum tagMEM_MODE_TYPE
{
    MEM_DDR_MODE = 0,
    MEM_IPF_MODE,
    MEM_TTF_MODE,
    MEM_AXI_MODE,
    MEM_MODE_MAX
}MEM_MODE_TYPE_E;

typedef enum tagBSP_DDR_SECT_TYPE_E
{
    BSP_DDR_SECT_TYPE_TTF = 0x0,
    BSP_DDR_SECT_TYPE_ARMDSP,
    BSP_DDR_SECT_TYPE_UPA,
    BSP_DDR_SECT_TYPE_CQI,
    BSP_DDR_SECT_TYPE_APT,
    BSP_DDR_SECT_TYPE_ET,
    BSP_DDR_SECT_TYPE_BBPMASTER,
    BSP_DDR_SECT_TYPE_NV,
    BSP_DDR_SECT_TYPE_DICC,
    BSP_DDR_SECT_TYPE_WAN,
    BSP_DDR_SECT_TYPE_SHARE_MEM,
    BSP_DDR_SECT_TYPE_EXCP,
    BSP_DDR_SECT_TYPE_HIFI,
    BSP_DDR_SECT_TYPE_HARQ,
    BSP_DDR_SECT_TYPE_ZSP_UP,
    BSP_DDR_SECT_TYPE_HUTAF,
    BSP_DDR_SECT_TYPE_BBPSAMPLE,
    BSP_DDR_SECT_TYPE_TDS_LH2,
    BSP_DDR_SECT_TYPE_SOCP,
    BSP_DDR_SECT_TYPE_BUTTOM
}BSP_DDR_SECT_TYPE_E;

typedef enum tagBSP_DDR_SECT_ATTR_E
{
    BSP_DDR_SECT_ATTR_CACHEABLE = 0x0,
    BSP_DDR_SECT_ATTR_NONCACHEABLE,
    BSP_DDR_SECT_ATTR_BUTTOM
}BSP_DDR_SECT_ATTR_E;

typedef enum tagBSP_DDR_SECT_PVADDR_E
{
    BSP_DDR_SECT_PVADDR_EQU = 0x0,
    BSP_DDR_SECT_PVADDR_NOT_EQU,
    BSP_DDR_SECT_PVADDR_BUTTOM
}BSP_DDR_SECT_PVADDR_E;


typedef struct tagBSP_DDR_SECT_QUERY_S
{
    BSP_DDR_SECT_TYPE_E     enSectType;
    BSP_DDR_SECT_ATTR_E     enSectAttr;
    BSP_DDR_SECT_PVADDR_E   enPVAddr;
    unsigned int                 ulSectSize;
}BSP_DDR_SECT_QUERY_S;

typedef struct tagBSP_DDR_SECT_INFO_S
{
    BSP_DDR_SECT_TYPE_E    enSectType;
    BSP_DDR_SECT_ATTR_E    enSectAttr;
    void *                 pSectVirtAddr;
    void *                 pSectPhysAddr;
    unsigned int           ulSectSize;
}BSP_DDR_SECT_INFO_S;

/*****************************************************************************
* �� �� ��  : mdrv_get_fix_ddr_addr
*
* ��������  :DDR�ڴ�β�ѯ�ӿڡ�
*
* �������  : pstSectQuery: ��Ҫ��ѯ�ڴ�ε����ԣ�����
*             pstSectInfo:  ��ѯ�����ڴ����Ϣ
*
* �������  : ��
* �� �� ֵ  :  ��
****************************************************************************/
int mdrv_get_fix_ddr_addr (BSP_DDR_SECT_QUERY_S *pstSectQuery, BSP_DDR_SECT_INFO_S *pstSectInfo);

/*****************************************************************************
* �� �� ��  : mdrv_virt_to_phy
*
* ��������  :���ַת���������ַ
*
* �������  : lPAddr: ��Ҫת��Ϊ�����ַ�������ַ�ĵ�ֵַ
*             mode:   ģ������
* �������  : ��
* �� �� ֵ  : �����ֵַ
****************************************************************************/
void*  mdrv_virt_to_phy (MEM_MODE_TYPE_E mode, void* lPAddr);

/*****************************************************************************
* �� �� ��  : mdrv_phy_to_virt
*
* ��������  :�����ַת���������ַ
*
* �������  : pMem: ��Ҫ����ת���ĵ�ַ
*             mode: ģ������
*
* �������  : ��
* �� �� ֵ  : �����ֵַ
****************************************************************************/
void*  mdrv_phy_to_virt (MEM_MODE_TYPE_E mode, void* pMem);

/*****************************************************************************
* �� �� ��  : mdrv_memcpy
*
* ��������  : ���ݿ����ӿڣ��ײ���ڻ��ʵ�ֵ����Ż��ӿڣ�ֻ������memory��
*             memory�Ŀ���
* Լ������  :
*             ֻ������memory ��memory�Ŀ�������������memory���Ĵ����Ŀ���
*             ��Ҫ4�ֽڶ���
*             ��A�� ARMv8 �ܹ��У���Ҫ8�ֽڶ��������normal memory ���ԣ�
*             ����ioremap_wcӳ��� uncachable ���ڴ� ����cachable���ڴ�
*
* �������  : dest :  ������Ŀ�ĵ�ַ
*             src  :  ������Դ��ַ
*             count:  �������ݵĴ�С
* �������  : ��
* �� �� ֵ  :  ��
****************************************************************************/
void *mdrv_memcpy(void * dest, const void * src, unsigned long count);

#ifdef __cplusplus
}
#endif
#endif
