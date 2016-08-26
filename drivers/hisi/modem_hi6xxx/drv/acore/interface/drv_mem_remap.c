/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : drv_mem_remap.c
  �� �� ��   : ����
  ��    ��   : c61362
  ��������   : 2012��3��2��
  ����޸�   :
  ��������   : ������ϲ������װ�Ľӿڲ�
  �޸���ʷ   :
  1.��    ��   : 2012��3��2��
    ��    ��   : c61362
    �޸�����   : �½�Drvinterface.c

  2.��    ��   : 2013��2��19��
    ��    ��   : ��ϲ 220237
    �޸�����   : ��Drvinterface.c�������

******************************************************************************/

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "BSP.h"

#if (defined BSP_CORE_APP)
#include "soc_irqs.h"
#include <linux/module.h>
#include "soc_baseaddr_interface.h"
#include "soc_timer_interface.h"
#include "soc_peri_sctrl_interface.h"
#include "MemoryMap.h"
#include <linux/dma-mapping.h>

#endif


#include <soc_ao_sctrl_interface.h>
#include "general_sram_map.h"

#include <mdrv_memory.h>
#include  <linux/hisi/hi6xxx-iomap.h>

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
  2 ��������
*****************************************************************************/

#define NOT_EXIST 0

#if (defined BSP_CORE_APP)
/* ȫ�ֵĽṹ�壬��¼DDR�ڴ�η�����Ϣ */
BSP_DDR_SECT_INFO_S g_stDdrSectInfo[] = {
    {BSP_DDR_SECT_TYPE_TTF,       BSP_DDR_SECT_ATTR_NONCACHEABLE, (BSP_VOID *)NOT_EXIST, (BSP_VOID *)NOT_EXIST,            NOT_EXIST},
    {BSP_DDR_SECT_TYPE_ARMDSP,    BSP_DDR_SECT_ATTR_NONCACHEABLE, (BSP_VOID *)NOT_EXIST, (BSP_VOID *)NOT_EXIST, NOT_EXIST},
    {BSP_DDR_SECT_TYPE_UPA,       BSP_DDR_SECT_ATTR_NONCACHEABLE, (BSP_VOID *)NOT_EXIST, (BSP_VOID *)ECS_UPA_BASE_ADDR,            ECS_UPA_SIZE},
    {BSP_DDR_SECT_TYPE_CQI,       BSP_DDR_SECT_ATTR_NONCACHEABLE, (BSP_VOID *)NOT_EXIST, (BSP_VOID *)ECS_CQI_BASE_ADDR,            ECS_CQI_SIZE},
    {BSP_DDR_SECT_TYPE_APT,       BSP_DDR_SECT_ATTR_NONCACHEABLE, (BSP_VOID *)NOT_EXIST, (BSP_VOID *)ECS_APT_BASE_ADDR,            ECS_APT_SIZE},
    {BSP_DDR_SECT_TYPE_ET,        BSP_DDR_SECT_ATTR_NONCACHEABLE, (BSP_VOID *)NOT_EXIST, (BSP_VOID *)ECS_ET_BASE_ADDR,             ECS_ET_SIZE},
    {BSP_DDR_SECT_TYPE_BBPMASTER, BSP_DDR_SECT_ATTR_NONCACHEABLE, (BSP_VOID *)NOT_EXIST, (BSP_VOID *)ECS_BBP_MASTER_BASE_ADDR,     ECS_BBP_MASTER_SIZE},
    {BSP_DDR_SECT_TYPE_NV,        BSP_DDR_SECT_ATTR_NONCACHEABLE, (BSP_VOID *)NOT_EXIST, (BSP_VOID *)ECS_NV_BASE_ADDR,             ECS_NV_SIZE},
    {BSP_DDR_SECT_TYPE_DICC,      BSP_DDR_SECT_ATTR_NONCACHEABLE, (BSP_VOID *)NOT_EXIST, (BSP_VOID *)ECS_TTF_DICC_ADDR,            ECS_TTF_DICC_SIZE},
    {BSP_DDR_SECT_TYPE_WAN,       BSP_DDR_SECT_ATTR_NONCACHEABLE, (BSP_VOID *)NOT_EXIST, (BSP_VOID *)CORESHARE_MEM_WAN_ADDR,       CORESHARE_MEM_WAN_SIZE},
    {BSP_DDR_SECT_TYPE_SHARE_MEM, BSP_DDR_SECT_ATTR_NONCACHEABLE, (BSP_VOID *)NOT_EXIST, (BSP_VOID *)GLOBAL_MEM_CORE_SHARE_ADDR,   GLOBAL_MEM_CORE_SHARE_SIZE},
    {BSP_DDR_SECT_TYPE_EXCP,      BSP_DDR_SECT_ATTR_NONCACHEABLE, (BSP_VOID *)NOT_EXIST, (BSP_VOID *)GLOBAL_MEM_EXCP_BASE_ADDR,    GLOBAL_MEM_EXCP_SIZE},
    {BSP_DDR_SECT_TYPE_HIFI,      BSP_DDR_SECT_ATTR_NONCACHEABLE, (BSP_VOID *)NOT_EXIST, (BSP_VOID *)GLOBAL_MEM_HIFI_BASE_ADDR,    GLOBAL_MEM_HIFI_SIZE},
    {BSP_DDR_SECT_TYPE_TDS_LH2,   BSP_DDR_SECT_ATTR_NONCACHEABLE, NULL,                   NULL,                            0},
    {BSP_DDR_SECT_TYPE_BUTTOM,    0,                              NULL,                   NULL,                         0}
};

#endif

/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/

/*****************************************************************************
 �� �� ��  : BSP_DDR_GetSectInfo
 ��������  : DDR�ڴ�β�ѯ�ӿ�
 �������  : pstSectQuery: ��Ҫ��ѯ���ڴ�����͡�����
 �������  : pstSectInfo:  ��ѯ�����ڴ����Ϣ
 ����ֵ    ��BSP_OK/BSP_ERROR
*****************************************************************************/
BSP_S32 BSP_DDR_GetSectInfo(BSP_DDR_SECT_QUERY_S *pstSectQuery, BSP_DDR_SECT_INFO_S *pstSectInfo)
{
    int i = 0;
    int NUM_TMP = sizeof(g_stDdrSectInfo)/sizeof(g_stDdrSectInfo[0]);
    if((BSP_NULL == pstSectQuery) || (BSP_NULL == pstSectInfo))
    {
        return BSP_ERROR;
    }

    for (i = 0;i < NUM_TMP;i++)
    {

        if (pstSectQuery->enSectType == g_stDdrSectInfo[i].enSectType)
        {
            memcpy((void *)pstSectInfo, (const void *)(&g_stDdrSectInfo[i]), sizeof(BSP_DDR_SECT_INFO_S));
#if (defined BSP_CORE_APP)
            if (pstSectInfo->pSectPhysAddr != 0)
            {
                pstSectInfo->pSectVirtAddr = (BSP_VOID*)HISI_VA_ADDRESS(pstSectInfo->pSectPhysAddr);
            }
#endif
            return BSP_OK;
        }
    }

    return BSP_ERROR;
}
/*************************�ڴ���ʵת�� start*********************************/
/*****************************************************************************
 �� �� ��  : DRV_DDR_VIRT_TO_PHY
 ��������  : DDR�ڴ����ַ��ʵ��ַת��
 �������  : ulVAddr�����ַ
 �������  : ��
 ����ֵ    ��ʵ��ַ
*****************************************************************************/
void * DRV_DDR_VIRT_TO_PHY(void* ulVAddr)
{

    return (void*)HISI_PA_ADDRESS((unsigned long)ulVAddr);
}

/*****************************************************************************
 �� �� ��  : DRV_DDR_PHY_TO_VIRT
 ��������  : DDR�ڴ����ַ��ʵ��ַת��
 �������  : ulPAddr��ʵ��ַ
 �������  : ��
 ����ֵ    �����ַ
*****************************************************************************/
void* DRV_DDR_PHY_TO_VIRT(void* ulPAddr)
{
    return (void*)HISI_VA_ADDRESS((unsigned long)ulPAddr);
}

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
int mdrv_get_fix_ddr_addr (BSP_DDR_SECT_QUERY_S *pstSectQuery, BSP_DDR_SECT_INFO_S *pstSectInfo)
{
    return BSP_DDR_GetSectInfo(pstSectQuery, pstSectInfo);
}
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
void*  mdrv_virt_to_phy (MEM_MODE_TYPE_E mode, void* lPAddr)
{
    switch (mode){
        case MEM_DDR_MODE:
            return DRV_DDR_VIRT_TO_PHY(lPAddr);
        default:
            return NULL;

    }
}

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
void*  mdrv_phy_to_virt (MEM_MODE_TYPE_E mode, void* pMem)
{
    switch (mode){
        case MEM_DDR_MODE:
            return DRV_DDR_PHY_TO_VIRT(pMem);
        default:
            return NULL;
    }
}

/*****************************************************************************
* �� �� ��  : mdrv_memcpy
*
* ��������  :���ݿ����ӿڡ��ײ���ڻ��ʵ�ֵ����Ż��ӿڣ�Ŀǰ��v8r1��ʹ�á�
*
* �������  : dest :  ������Ŀ�ĵ�ַ
*             src  :  ������Դ��ַ
*             count:  �������ݵĴ�С
* �������  : ��
* �� �� ֵ  :  ��
****************************************************************************/
void *mdrv_memcpy(void * dest, const void * src, unsigned long count)
{
    memcpy(dest,src,count);
}



#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

