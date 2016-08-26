
#ifndef __IPF_DRIVER_H__
#define __IPF_DRIVER_H__

/**************************************************************************
  ͷ�ļ�����
**************************************************************************/
#include "BSP.h"
#include "MemoryMap.h"
#include "soc_irqs.h"
#include "mdrv_ipf.h"
#include "soc_baseaddr_interface.h"
#include "soc_ipf_interface.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/**************************************************************************
  �궨��
**************************************************************************/
#define __BSP_IPF_DEBUG__

#define IPF_AXI_MEM_ADDR                (MEMORY_AXI_IPF_ADDR)
#define IPF_AXI_MEM_SIZE                (MEMORY_AXI_IPF_SIZE)

/* IPF��ַ������Ϣ */

extern unsigned long ifp_ulbd_mem_addr;
#define IPF_ULBD_MEM_ADDR               (ifp_ulbd_mem_addr)
#define IPF_ULBD_MEM_SIZE               (IPF_ULBD_DESC_SIZE * sizeof(IPF_BD_DESC_S))

#define IPF_ULRD_MEM_ADDR               (IPF_ULBD_MEM_ADDR + IPF_ULBD_MEM_SIZE)
#define IPF_ULRD_MEM_SIZE               (IPF_ULRD_DESC_SIZE * sizeof(IPF_RD_DESC_S))

#define IPF_ULAD0_MEM_ADDR              (IPF_ULRD_MEM_ADDR + IPF_ULRD_MEM_SIZE)
#define IPF_ULAD0_MEM_SIZE              (IPF_ULAD0_DESC_SIZE * sizeof(IPF_AD_DESC_S))

#define IPF_ULAD1_MEM_ADDR              (IPF_ULAD0_MEM_ADDR + IPF_ULAD0_MEM_SIZE)
#define IPF_ULAD1_MEM_SIZE              (IPF_ULAD1_DESC_SIZE * sizeof(IPF_AD_DESC_S))

#define IPF_DLBD_MEM_ADDR               (IPF_ULAD1_MEM_ADDR + IPF_ULAD1_MEM_SIZE)
#define IPF_DLBD_MEM_SIZE               (IPF_DLBD_DESC_SIZE * sizeof(IPF_BD_DESC_S))

#define IPF_DLRD_MEM_ADDR               (IPF_DLBD_MEM_ADDR + IPF_DLBD_MEM_SIZE)
#define IPF_DLRD_MEM_SIZE               (IPF_DLRD_DESC_SIZE * sizeof(IPF_RD_DESC_S))

#define IPF_DLAD0_MEM_ADDR              (IPF_DLRD_MEM_ADDR + IPF_DLRD_MEM_SIZE)
#define IPF_DLAD0_MEM_SIZE              (IPF_DLAD0_DESC_SIZE * sizeof(IPF_AD_DESC_S))

#define IPF_DLAD1_MEM_ADDR              (IPF_DLAD0_MEM_ADDR + IPF_DLAD0_MEM_SIZE)
#define IPF_DLAD1_MEM_SIZE              (IPF_DLAD1_DESC_SIZE * sizeof(IPF_AD_DESC_S))

#define IPF_DLCD_MEM_ADDR               (IPF_DLAD1_MEM_ADDR  + IPF_DLAD1_MEM_SIZE)
#define IPF_DLCD_MEM_SIZE               (IPF_DLCD_DESC_SIZE * sizeof(IPF_CD_DESC_S))

#define IPF_ULBD_IDLENUM_ADDR           (IPF_DLCD_MEM_ADDR + IPF_DLCD_MEM_SIZE)
#define IPF_ULBD_IDLENUM_SIZE           (16)

#define IPF_DEBUG_INFO_ADDR             (IPF_ULBD_IDLENUM_ADDR + IPF_ULBD_IDLENUM_SIZE)
#define IPF_DEBUG_INFO_SIZE             (sizeof(IPF_DEBUG_INFO_S))

#define IPF_DEBUG_DLCD_ADDR             (IPF_DEBUG_INFO_ADDR + IPF_DEBUG_INFO_SIZE)
#define IPF_DEBUG_DLCD_SIZE             (IPF_DLCD_DESC_SIZE * sizeof(IPF_CD_DESC_S))

/* ��������CD��дָ�� */
#define IPF_DLCD_PTR_ADDR               (IPF_DEBUG_DLCD_ADDR + IPF_DEBUG_DLCD_SIZE)
#define IPF_DLCD_PTR_SIZE               (8)

#define IPF_MEM_USED_SIZE               (IPF_DLCD_PTR_ADDR + IPF_DLCD_PTR_SIZE - IPF_ULBD_MEM_ADDR)

/* IPF����������Ϣ */
#define IPF_REG_NUM                         (172)         /* IPF�Ĵ������� */
#define IPF_BF_NUM                          (FEATURE_IPF_BF_NUM)    /* ������������Ŀ */
#define IPF_TOTAL_FILTER_NUM                (256)         /* ����������Ŀ��ʹ��һ�� */
#define IPF_EXFLITER_NUM                    (IPF_TOTAL_FILTER_NUM-IPF_BF_NUM) /* ��չ��������Ŀ */
#define IPF_TAIL_INDEX                      (511)         /* ��ʶ���һ��filter */
#define IPF_FILTERCHAIN_HEAD_INDEX          (0)           /* ����������ͷ��������λ�� */
#define IPF_FILTERTYPE_MASK                 (0xFFFF)      /* ���ֹ������ǻ���������չ�˲��� */
#define IPF_TIME_OUT_CFG                    (65)          /* RD��ʱʱ��0.1msʱ��Ƶ��166MHZ�� */
#define IPF_ULADQ_PLEN_TH                   (404)         /* ���а�����ֵ */
#define IPF_DLADQ_PLEN_TH                   (448)         /* ���а�����ֵ */
#define IPF_RESUME_COUNT                    (200)         /* ���˹���ָ���ʱ,��λ10us,��2ms */
#define IPF_OBLIGATE_AD_NUM                 (3)           /* ADQ����Ԥ��AD���� */
#define IPF_OBLIGATE_BD_NUM                 (3)           /* ADQ����Ԥ��BD���� */
#define IPF_CH_IDLE                         (0x14)        /* ͨ��IDLE״ֵ̬ */
#define IPF_IDLE_TIMEOUT_NUM                (30)          /* ����ȴ���ʱֵ,��λ10ms,ȷ����ʱ����IPF������ */
#define IPF_ADQ_BUF_EPT_MASK                (0x00000004)  /* ADQ BUFF��Ԥ��״̬mask */
#define IPF_ADQ_BUF_FULL_MASK               (0x00000008)  /* ADQ BUFF��Ԥ��״̬mask */
#define IPF_SCHEDULE_STRATEGY               (0)           /* ������ͨ�����Ȳ���ѡ��
                                                            0����ʾ������ͨ������BDQ�Ƿ�Ϊ�ս��е��ȣ�
                                                            1����ʾ������ͨ������ADQ��BDQ�Ƿ�Ϊ�գ�RDQ�Ƿ�Ϊ�����е��ȡ�*/

/* IPF�ж��ϱ������Ρ�״̬�Ĵ���λ����,�ϱ������Ρ�״̬����һһ��Ӧ */
#define IPF_UL_RPT_INT                     (1 << 0)    /* ���н���ϱ� */
#define IPF_UL_TIMEOUT_INT                 (1 << 1)    /* ���н���ϱ���ʱ */
#define IPF_UL_RDQ_DOWN_OVERFLOW_INT       (1 << 6)    /* ����RDQ���� */
#define IPF_UL_BDQ_UP_OVERFLOW_INT         (1 << 7)    /* ����BDQ���� */
#define IPF_UL_RDQ_FULL_INT                (1 << 8)    /* ����RDQ�� */
#define IPF_UL_BDQ_EMPTY_INT               (1 << 9)    /* ����ͨ��BDQ�� */
#define IPF_UL_ADQ0_EMPTY_INT              (1 << 10)   /* ����ͨ��ADQ0�� */
#define IPF_UL_ADQ1_EMPTY_INT              (1 << 11)   /* ����ͨ��ADQ1�� */

#define IPF_DL_RPT_INT                     (1 << 16)   /* ���н���ϱ� */
#define IPF_DL_TIMEOUT_INT                 (1 << 17)   /* ���н���ϱ���ʱ */
#define IPF_DL_RDQ_DOWN_OVERFLOW_INT       (1 << 22)   /* ����RDQ���� */
#define IPF_DL_BDQ_UP_OVERFLOW_INT         (1 << 23)   /* ����BDQ���� */
#define IPF_DL_RDQ_FULL_INT                (1 << 24)   /* ����RDQ�� */
#define IPF_DL_BDQ_EMPTY_INT               (1 << 25)   /* ����ͨ��BDQ�� */
#define IPF_DL_ADQ0_EMPTY_INT              (1 << 26)   /* ����ͨ��ADQ0�� */
#define IPF_DL_ADQ1_EMPTY_INT              (1 << 27)   /* ����ͨ��ADQ1�� */
/* INTO�ж��ϱ����: */
#define IPF_INT_OPEN0                       ( IPF_UL_RPT_INT \
                                            | IPF_UL_TIMEOUT_INT \
                                            | IPF_UL_ADQ0_EMPTY_INT \
                                            | IPF_UL_ADQ1_EMPTY_INT)
/* INT1�ж��ϱ����: */
#define IPF_INT_OPEN1                       ( IPF_DL_RPT_INT \
                                            | IPF_DL_TIMEOUT_INT \
                                            | IPF_DL_ADQ0_EMPTY_INT \
                                            | IPF_DL_ADQ1_EMPTY_INT)
#define IPF_PRINT_INFO(fmt, arg...)     (printk(KERN_INFO "<%s> "fmt, __FUNCTION__, ##arg))
#define IPF_PRINT_ERROR(fmt, arg...)    (printk(KERN_ERR "<%s> "fmt, __FUNCTION__, ##arg))
extern unsigned long ipf_regs_base_addr;
#define IPF_REGBASE_ADR                 (ipf_regs_base_addr)
#define INT_LVL_IPF                     IRQ_IPF1
#define INT_VEC_IPF                     IVEC_TO_INUM(INT_LVL_IPF)

#if 0
#define ipf_isb()
#define ipf_dsb()

#define ipf_mb()
#define ipf_rmb()
#define ipf_wmb()

#define IPF_REG_WRITE(uwAddr,uwValue)   (*((volatile unsigned int *)(uwAddr)) = uwValue)
#define IPF_REG_READ(uwAddr,uwValue)    (uwValue = *((volatile unsigned int *)(uwAddr)))
#else
#ifndef CONFIG_ARM64
#define ipf_isb()		asm volatile("isb" : : : "memory")
#define ipf_dsb()		asm volatile("dsb" : : : "memory")

#define ipf_mb()		ipf_dsb()
#define ipf_rmb()		asm volatile("dsb" : : : "memory")
#define ipf_wmb()		asm volatile("dsb" : : : "memory")
#else
#define ipf_isb()		asm volatile("isb" : : : "memory")
#define ipf_dsb()		asm volatile("dsb sy" : : : "memory")

#define ipf_mb()		ipf_dsb()
#define ipf_rmb()		asm volatile("dsb ld" : : : "memory")
#define ipf_wmb()		asm volatile("dsb st" : : : "memory")
#endif

#define IPF_REG_WRITE(uwAddr,uwValue)  \
do{\
    ipf_wmb();\
    (*(volatile unsigned int *) (uwAddr)) = (uwValue);\
    ipf_wmb();\
}while(0)

#define IPF_REG_READ(uwAddr,uwValue)    \
do{\
    (uwValue) = (*((volatile unsigned int *)(uwAddr)));\
    ipf_rmb();\
}while(0)
#endif

/**************************************************************************
  ö�ٶ���
**************************************************************************/

/**************************************************************************
  STRUCT����
**************************************************************************/
typedef struct tagIPF_UL_S
{
    IPF_BD_DESC_S* pstIpfBDQ;
    IPF_RD_DESC_S* pstIpfRDQ;
    IPF_AD_DESC_S* pstIpfADQ0;
    IPF_AD_DESC_S* pstIpfADQ1;
    unsigned int* pu32IdleBd; /* ��¼��һ�λ�ȡ�Ŀ���BD �� */
}IPF_UL_S;

typedef struct tagIPF_DL_S
{
    IPF_BD_DESC_S* pstIpfBDQ;
    IPF_RD_DESC_S* pstIpfRDQ;
    IPF_AD_DESC_S* pstIpfADQ0;
    IPF_AD_DESC_S* pstIpfADQ1;
    IPF_CD_DESC_S* pstIpfCDQ;
    IPF_CD_DESC_S* pstIpfDebugCDQ;
    BSP_IPF_WakeupDlCb pFnDlIntCb; /* �ж��л��ѵ�PS���� */
    BSP_IPF_AdqEmptyDlCb pAdqEmptyDlCb;
    unsigned int* u32IpfCdRptr; /* ��ǰ���Զ�����λ�� */
    unsigned int* u32IpfCdWptr;
}IPF_DL_S;

typedef struct tagIPF_ID_S
{
    unsigned int u32PsID;
    unsigned int u32FilterID;
    struct tagIPF_ID_S* pstNext;
}IPF_ID_S;

typedef struct tagIPF_FILTER_INFO_S
{
    IPF_ID_S* pstUseList;
    unsigned int u32FilterNum;
}IPF_FILTER_INFO_S;

typedef struct tagIPF_DEBUG_INFO_S
{
    unsigned int u32UlResultTime;        /* �������һ���ϱ�����ж�ʱ�� */
    unsigned int u32UlGetRdTime;         /* �������һ�λ�ȡ������ʱ�� */
    unsigned int u32DlResultTime;        /* �������һ���ϱ�����ж�ʱ�� */
    unsigned int u32DlGetRdTime;         /* �������һ�λ�ȡ������ʱ�� */
    unsigned int u32UlResultCnt;         /* �����ϱ�����жϼ��� */
    unsigned int u32UlResultTimeoutCnt;  /* �����ϱ������ʱ�жϼ��� */
    unsigned int u32DlResultCnt;         /* �����ϱ�����жϼ��� */
    unsigned int u32DlResultTimeoutCnt;  /* �����ϱ������ʱ�жϼ��� */

    unsigned int u32UlBdqEmptyCnt;       /* ����BDQ�ռ��� */
    unsigned int u32UlRdqFullCnt;        /* ����RDQ������ */
    unsigned int u32DlBdqEmptyCnt;       /* ����BDQ�ռ��� */
    unsigned int u32DlRdqFullCnt;        /* ����RDQ������ */
    unsigned int u32UlBdqOverflow;       /* �ж��ϱ�����BD����������� */
    unsigned int u32DlBdqOverflow;       /* �ж��ϱ�����BD����������� */
    unsigned int u32UlBdNotEnough;       /* ��������BD,BD�����ô��� */
    unsigned int u32DlBdNotEnough;       /* ��������BD,BD�����ô��� */
    unsigned int u32UlAdq0Empty;         /* �ж��ϱ�����ADQ0�մ��� */
    unsigned int u32UlAdq1Empty;         /* �ж��ϱ�����ADQ1�մ��� */
    unsigned int u32DlAdq0Empty;         /* �ж��ϱ�����ADQ0�մ��� */
    unsigned int u32DlAdq1Empty;         /* �ж��ϱ�����ADQ1�մ��� */
    unsigned int u32UlAd0NotEnough;      /* ����ADQ0�������� */
    unsigned int u32UlAd1NotEnough;      /* ����ADQ0�������� */
    unsigned int u32DlAd0NotEnough;      /* ����ADQ0�������� */
    unsigned int u32DlAd1NotEnough;      /* ����ADQ0�������� */
    unsigned int u32DlCdNotEnough;       /* ��������CD,CD�����ô��� */
    unsigned int u32UlIPFBusyNum;        /* ����IPFæ���� */
    unsigned int u32DlIPFBusyNum;        /* ����IPFæ���� */
    unsigned int u32UlResumeTimeoutCnt;  /* ���й��˹���ָ���ʱ���� */
    unsigned int u32DlResumeTimeoutCnt;  /* ���й��˹���ָ���ʱ���� */

    unsigned int u32UlBdNum;             /* ���з���BD���� */
    unsigned int u32UlAdq0Num;           /* ��������AD0���� */
    unsigned int u32UlAdq1Num;           /* ��������AD1���� */
    unsigned int u32UlRdNum;             /* ���н���RD���� */
    unsigned int u32DlBdNum;             /* ���з���BD���� */
    unsigned int u32DlAdq0Num;           /* ��������AD1���� */
    unsigned int u32DlAdq1Num;           /* ��������AD1���� */
    unsigned int u32DlRdNum;             /* ���н���RD���� */

    /* ������Ч�� */
    unsigned int u32UlBdAlignErr;        /* ����Bd�������,�ֽڶ��� */
    unsigned int u32DlBdAlignErr;        /* ����Bd�������,8�ֽڶ��� */
    unsigned int u32UlBdSizeErr;         /* ����Bd��С����,lenΪ0 */
    unsigned int u32DlBdSizeErr;         /* ����Bd��С����,lenΪ0 */
}IPF_DEBUG_INFO_S;

typedef struct tagIPF_ADQ_INFO_S
{
    unsigned int *pu32RptReg;   /* ��ָ��Ĵ��� */
}IPF_ADQ_INFO_S;

typedef struct tagIPF_CONTEXT_S
{
    unsigned int isInit:     1;  /* 1:�ѳ�ʼ�� 0:δ��ʼ�� */
    unsigned int resv:       31; /* reserved */
}IPF_CONTEXT_S;
/**************************************************************************
  UNION����
**************************************************************************/

/**************************************************************************
  OTHERS����
**************************************************************************/



/**************************************************************************
  ��������
**************************************************************************/
extern int IPF_Init(void);
extern int BSP_IPF_RegisterWakeupDlCb(BSP_IPF_WakeupDlCb pFnWakeupDl);
extern void BSP_IPF_GetDlRd(unsigned int* pu32Num, IPF_RD_DESC_S *pstRd);
extern unsigned int BSP_IPF_GetUlRdNum(void);
extern unsigned int BSP_IPF_GetDlRdNum(void);
extern int BSP_IPF_GetDlAdNum(unsigned int* pu32AD0Num, unsigned int* pu32AD1Num);
extern int BSP_IPF_ConfigDlAd(IPF_AD_TYPE_E eAdType, unsigned int u32AdNum, IPF_AD_DESC_S *pstAdDesc);
extern int BSP_IPF_RegisterAdqEmptyDlCb(BSP_IPF_AdqEmptyDlCb pAdqEmptyDl);
extern int BSP_IPF_GetUsedDlAd(IPF_AD_TYPE_E eAdType, unsigned int *pu32AdNum, IPF_AD_DESC_S *pstAdDesc);
extern void BSP_IPF_DlRegReInit(void);
extern void BSP_IPF_SetControlFLagForCcoreReset(IPF_FORRESET_CONTROL_E flagvalue);
extern int BSP_IPF_ConfigTimeout(unsigned int u32Timeout);
extern int BSP_IPF_ConfigUpFilter(unsigned int u32Num, IPF_CONFIG_ULPARAM_S* pstUlPara);
extern unsigned int BSP_IPF_GetUlDescNum(void);
extern unsigned int BSP_IPF_GetUlBDNum(void);
extern int BSP_IPF_UlStateIdle(void);
extern int BSP_IPF_SetPktLen(unsigned int u32MaxLen, unsigned int u32MinLen);
extern int BSP_IPF_GetStat(IPF_FILTER_STAT_S *pstFilterStat);


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif/*_IPF_DRIVER_H_*/
