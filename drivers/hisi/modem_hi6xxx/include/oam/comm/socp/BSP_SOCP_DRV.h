

#ifndef _BSP_SOCP_DRV_H
#define _BSP_SOCP_DRV_H

/**************************************************************************
  ͷ�ļ�����
**************************************************************************/
#include "product_config.h"

#if (FEATURE_SOCP_SYNC_ENABLE == FEATURE_ON)
#include "vos.h"
#include "SOCPInterface.h"

#if(VOS_OS_VER == VOS_LINUX)
#include <asm/dma-mapping.h>
#include <linux/dma-mapping.h>
#include <asm/io.h>
#include <linux/gfp.h>
#include <linux/mm.h>
#include <linux/kernel.h>
#include <linux/vmalloc.h>
#include <linux/io.h>
#endif


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/**************************************************************************
  �궨��
**************************************************************************/
/*����꿪�أ����ݵ�ǰ��Cpu����ȷ��*/
#if (VOS_OS_VER == VOS_WIN32)
#define SOCP_ACORE
#else

#if(OSA_CPU_ACPU == VOS_OSA_CPU)
#define SOCP_ACORE
#endif

#if(OSA_CPU_CCPU == VOS_OSA_CPU)
#define SOCP_CCORE
#endif
#endif    /*(VOS_OS_VER == VOS_WIN32)*/

#define SOCP_VIRT_PHY(virt)             (virt)
#define SOCP_PHY_VIRT(phy)              (phy)

#if(VOS_OS_VER == VOS_LINUX)
/*#define SOCP_VIRT_PHY(virt)             virt_to_phys((void*)virt)
 */
/*#define SOCP_PHY_VIRT(phy)              phys_to_virt((unsigned long)phy)
 */
#define SOCP_VIRT_BUS(virt)             virt_to_bus((void*)virt)
#define SOCP_BUS_VIRT(bus)              bus_to_virt((unsigned long)bus)
#endif

#if((VOS_OS_VER == VOS_VXWORKS)||(VOS_OS_VER == VOS_WIN32)||(VOS_OS_VER == VOS_RTOSCK) )
#define SOCP_VIRT_BUS(virt)             (virt)
#define SOCP_BUS_VIRT(bus)              (bus)
#endif

#define SOCP_REGISTER_SIZE                          (0x1000)

#define SOCP_ERROR_INFO_TAG                         (0x5A)

#define SOCP_ERRORNO_ENCDST_READ_DONE_REGERR        (0x20000050)

/* SOCP�������������������ӳ�ʱ�䣬msΪ��λ */
#define SOCP_LOG_FLUSH_MAX_OVER_TIME                (100)

#define SOCP_OLD_VER                                (0x200)

/**************************************************************************
  �Ĵ�������,ƫ�Ƶ�ַ
**************************************************************************/
/* BBP ͨ���Ĵ��� */
#define BBP_REG_LOG_ADDR(m)     (0x0200+0x10*m)
#define BBP_REG_LOG_WPTR(m)     (0x0204+0x10*m)
#define BBP_REG_LOG_RPTR(m)     (0x0208+0x10*m)
#define BBP_REG_LOG_CFG(m)      (0x020C+0x10*m)

#define BBP_REG_DS_ADDR         (0x0280)
#define BBP_REG_DS_WPTR         (0x0284)
#define BBP_REG_DS_RPTR         (0x0288)
#define BBP_REG_DS_CFG          (0x028C)
#define BBP_REG_PTR_ADDR        (0x0290)
#define BBP_REG_CH_EN           (0x0294)
#define BBP_REG_PKT_CNT         (0x0298)
#define BBP_REG_CH_STAT         (0x029C)

/* �����Ĵ��� */
#define SOCP_REG_GBLRST         (0x0000)
#define SOCP_REG_ENCRST         (0x0004)
#define SOCP_REG_DECRST         (0x0008)
#define SOCP_REG_ENCSTAT        (0x000C)
#define SOCP_REG_DECSTAT        (0x0010)
#define SOCP_REG_CLKCTRL        (0x0014)
#define SOCP_REG_PRICFG         (0x0018)
#define SOCP_REG_DECINTTIMEOUT  (0x0020)
#define SOCP_REG_INTTIMEOUT     (0x0024)
#define SOCP_REG_BUFTIMEOUT     (0x0028)
#define SOCP_REG_DEC_PKTLEN     (0x002C)
#define SOCP_REG_GBL_INTSTAT    (0x0050)

/* ������ �жϼĴ���*/
#define SOCP_REG_ENC_MASK0          (0x0054)
#define SOCP_REG_ENC_RAWINT0        (0x0058)
#define SOCP_REG_ENC_INTSTAT0       (0x005C)    /*�ж�״̬�Ĵ�������оƬ�ֲ�����дΪENC_MASKINT0���˴���ΪENC_INTSTAT0*/
#define SOCP_REG_APP_MASK1          (0x0060)
#define SOCP_REG_MODEM_MASK1        (0x0064)
#define SOCP_REG_ENC_RAWINT1        (0x0068)
#define SOCP_REG_APP_INTSTAT1       (0x006C)
#define SOCP_REG_MODEM_INTSTAT1     (0x0070)
#define SOCP_REG_ENC_MASK2          (0x0074)
#define SOCP_REG_ENC_RAWINT2        (0x0078)
#define SOCP_REG_ENC_INTSTAT2       (0x007C)
#define SOCP_REG_APP_MASK3          (0x0080)
#define SOCP_REG_MODEM_MASK3        (0x0084)
#define SOCP_REG_ENC_RAWINT3        (0x0088)
#define SOCP_REG_APP_INTSTAT3       (0x008C)
#define SOCP_REG_MODEM_INTSTAT3     (0x0090)
#define SOCP_REG_MODEM_ENC_MASK0    (0x00DC)    /* CORE1���봫���ж����μĴ��� */
#define SOCP_REG_MODEM_ENC_INT0     (0x00E0)    /* CORE1���봫���ж�״̬�Ĵ��� */
#define SOCP_REG_MODEM_ENC_MASK2    (0x00E4)    /* CORE1����Ŀ��buffer�����ж����μĴ��� */
#define SOCP_REG_MODEM_ENC_INT2     (0x00E8)    /* CORE1����Ŀ��buffer�����ж�״̬�Ĵ��� */

/* �������жϼĴ���*/

#define SOCP_REG_DEC_CORE0MASK0     (0x00A8)  /*�����ж�*/
#define SOCP_REG_DEC_CORE1MASK0     (0x00AC)
#define SOCP_REG_DEC_RAWINT0        (0x00B0)
#define SOCP_REG_DEC_CORE0ISTAT0    (0x00B4)
#define SOCP_REG_DEC_CORE1ISTAT0    (0x00B8)
#define SOCP_REG_DEC_MASK1          (0x00BC)
#define SOCP_REG_DEC_RAWINT1        (0x00C0)
#define SOCP_REG_DEC_INTSTAT1       (0x00C4)
#define SOCP_REG_DEC_CORE0MASK2     (0x00C8) /* Ŀ��buffer���*/
#define SOCP_REG_DEC_CORE1MASK2     (0x00CC)
#define SOCP_REG_DEC_RAWINT2        (0x00D0)
#define SOCP_REG_DEC_CORE0ISTAT2    (0x00D4)
#define SOCP_REG_DEC_CORE1ISTAT2    (0x00D8)
#define SOCP_REG_APP_DEC_MASK1      (0x00EC)    /* CORE1����ͨ���쳣�ж����μĴ��� */
#define SOCP_REG_APP_DEC_INT1       (0x00F0)    /* CORE1����ͨ���쳣�ж�״̬�Ĵ��� */


/*������ͨ��buffer�Ĵ���*/
#define SOCP_REG_ENCSRC_BUFWPTR(m)  (0x0100+m*0x40)
#define SOCP_REG_ENCSRC_BUFRPTR(m)  (0x0104+m*0x40)
#define SOCP_REG_ENCSRC_BUFADDR(m)  (0x0108+m*0x40)
#define SOCP_REG_ENCSRC_BUFCFG0(m)  (0x010C+m*0x40)
#define SOCP_REG_ENCSRC_BUFCFG1(m)  (0x0110+m*0x40)

#define SOCP_REG_ENCSRC_RDQWPTR(m)  (0x0114+m*0x40)
#define SOCP_REG_ENCSRC_RDQRPTR(m)  (0x0118+m*0x40)
#define SOCP_REG_ENCSRC_RDQADDR(m)  (0x011C+m*0x40)
#define SOCP_REG_ENCSRC_RDQCFG(m)   (0x0120+m*0x40)

/* ��ַ���޸�0x10->0x20, ��������ֵ�Ĵ���BUFTHRH */
#define SOCP_REG_ENCDEST_BUFWPTR(n) (0x0900+n*0x20)
#define SOCP_REG_ENCDEST_BUFRPTR(n) (0x0904+n*0x20)
#define SOCP_REG_ENCDEST_BUFADDR(n) (0x0908+n*0x20)
#define SOCP_REG_ENCDEST_BUFCFG(n)  (0x090C+n*0x20)
#define SOCP_REG_ENCDEST_BUFTHRH(n) (0x0910+n*0x20)
#define SOCP_REG_ENCDEST_INTTHRH(n) (0x0914+n*0x20)


/*������ͨ��buffer�Ĵ���*/
#define SOCP_REG_DECSRC_BUFWPTR(x)  (0x0A00+x*0x40)
#define SOCP_REG_DECSRC_BUFRPTR(x)  (0x0A04+x*0x40)
#define SOCP_REG_DECSRC_BUFADDR(x)  (0x0A08+x*0x40)
#define SOCP_REG_DECSRC_BUFCFG0(x)  (0x0A0C+x*0x40)

#define SOCP_REG_DECSRC_RDQWPTR(x)  (0x0A10+x*0x40)
#define SOCP_REG_DECSRC_RDQRPTR(x)  (0x0A14+x*0x40)
#define SOCP_REG_DECSRC_RDQADDR(x)  (0x0A18+x*0x40)
#define SOCP_REG_DECSRC_RDQCFG(x)   (0x0A1C+x*0x40)

#define SOCP_REG_DEC_BUFSTAT0(x)    (0x0A20+x*0x40)
#define SOCP_REG_DEC_BUFSTAT1(x)    (0x0A24+x*0x40)


#define SOCP_REG_DECDEST_BUFWPTR(y) (0x0C00+y*0x10)
#define SOCP_REG_DECDEST_BUFRPTR(y) (0x0C04+y*0x10)
#define SOCP_REG_DECDEST_BUFADDR(y) (0x0C08+y*0x10)
#define SOCP_REG_DECDEST_BUFCFG(y)  (0x0C0C+y*0x10)

/*DEBUG�Ĵ���*/
#define SOCP_REG_ENCCD_DBG0         (0x0E00)
#define SOCP_REG_ENCCD_DBG1         (0x0E04)
#define SOCP_REG_ENCIBUF_DBG0       (0x0E08)
#define SOCP_REG_ENCIBUF_DBG1       (0x0E0C)
#define SOCP_REG_ENCIBUF_DBG2       (0x0E10)
#define SOCP_REG_ENCIBUF_DBG3       (0x0E14)
#define SOCP_REG_ENCOBUF_DBG0       (0x0E18)
#define SOCP_REG_ENCOBUF_DBG1       (0x0E1C)
#define SOCP_REG_ENCOBUF_DBG2       (0x0E20)
#define SOCP_REG_ENCOBUF_DBG3       (0x0E24)

#define SOCP_REG_DECIBUF_DBG0       (0x0E28)
#define SOCP_REG_DECIBUF_DBG1       (0x0E2C)
#define SOCP_REG_DECIBUF_DBG2       (0x0E30)
#define SOCP_REG_DECIBUF_DBG3       (0x0E34)
#define SOCP_REG_DECOBUF_DBG0       (0x0E38)
#define SOCP_REG_DECOBUF_DBG1       (0x0E3C)
#define SOCP_REG_DECOBUF_DBG2       (0x0E40)
#define SOCP_REG_DECOBUF_DBG3       (0x0E44)

/* �汾�Ĵ��� */
#define SOCP_REG_VERSION            (0x0FFC)
/**************************************************************************
  �ṹ����
**************************************************************************/

/* ͨ��״̬�ṹ�壬������ */
typedef struct
{
    VOS_UINT32                 u32Start;
    VOS_UINT32                 u32End;
    VOS_UINT32                 u32Write;
    VOS_UINT32                 u32Read;
    VOS_UINT32                 u32Length;
    VOS_UINT32                 u32IdleSize;
}SOCP_RING_BUF_STRU;

typedef struct
{
    VOS_UINT32                  u32ChanEn;      /*ͨ��ʹ��״̬*/
    VOS_UINT32                  u32SetStat;     /*ͨ������״̬*/
    SOCP_ENCSRC_CHNMODE_ENUM_UIN32       eChnMode;      /* ���ݽṹ���� */
    VOS_UINT32                  u32LastRdSize;  /*���һ�λ�ȡ��RD���ͷŵĴ�С*/
    SOCP_RING_BUF_STRU          sEncSrcBuf;     /*Դ�ռ����Ϣ*/
    SOCP_RING_BUF_STRU          sRdBuf;         /*RD�ռ���Ϣ*/
    socp_event_cb               event_cb;       /*ͨ���¼��ص�����*/
    socp_rd_cb                  rd_cb;          /*ͨ��RD�¼��ص�����*/
}SOCP_ENCSRC_CHAN_STRU;

typedef struct
{
    VOS_UINT32                  u32ChanID;
    VOS_UINT32                  u32SetStat;    /* ͨ���Ѿ���û�����õı�ʶ*/
    VOS_UINT32                  u32Thrh;       /* ��ֵ*/
    SOCP_EVENT_ENUM_UIN32       eChnEvent;
    SOCP_RING_BUF_STRU          sEncDstBuf;
    socp_read_cb                read_cb;
}SOCP_ENCDST_CHAN_STRU;

typedef struct
{
    VOS_UINT32                  u32ChanID;
    VOS_UINT32                  u32ChanEn;
    VOS_UINT32                  u32SetStat;    /* ͨ���Ѿ���û�����õı�ʶ*/
    VOS_UINT32                  u32RdThreshold;
    SOCP_DATA_TYPE_EN_ENUM_UIN32         eDataTypeEn;
    SOCP_DECSRC_CHNMODE_ENUM_UIN32       eChnMode;      /* ���ݽṹ���� */
    SOCP_RING_BUF_STRU          sDecSrcBuf;
    SOCP_RING_BUF_STRU          sDecRdBuf;
    socp_event_cb               event_cb;
    socp_rd_cb                  rd_cb;
}SOCP_DECSRC_CHAN_STRU;

typedef struct
{
    VOS_UINT32                  u32ChanID;
    VOS_UINT32                  u32SetStat;
    SOCP_DATA_TYPE_ENUM_UIN32   eDataType;
    VOS_UINT32                  ulRsv;
    SOCP_RING_BUF_STRU          sDecDstBuf;
    socp_read_cb                read_cb;
}SOCP_DECDST_CHAN_STRU;


/* ȫ��״̬�ṹ�� */
typedef struct
{
    VOS_BOOL                    bInitFlag;                  /*��ʶ��ǰSOCP��ʼ���Ƿ����*/
    VOS_UINT32                  ulRfu;
    VOS_UINT_PTR                uBaseAddr;                  /*SOCP IP�Ļ���ַ*/
#ifdef SOCP_ACORE
    VOS_SEM                     u32EncDstSemIDChannel[SOCP_REAL_CHAN_ID(SOCP_CODER_DST_BUTT)];     /*����Ŀ��ͨ���Դ���������ź���*/

    SOCP_ENCDST_CHAN_STRU       sEncDstChan[SOCP_MAX_ENCDST_CHN];   /*����Ŀ��ͨ������*/
    SOCP_DECSRC_CHAN_STRU       sDecSrcChan[SOCP_MAX_DECSRC_CHN];   /*����Դͨ������*/
    SOCP_DECDST_CHAN_STRU       sDecDstChan[SOCP_MAX_DECDST_CHN];   /*����Ŀ��ͨ������*/
#endif
    SOCP_ENCSRC_CHAN_STRU       sEncSrcChan[SOCP_MAX_ENCSRC_CHN];   /*����Դͨ������*/
}SOCP_GBLSTATE_STRU;

typedef struct
{
#ifdef SOCP_ACORE
    VOS_UINT32                 u32SocpAppEtrIntCnt;        /* ����APP�жϵĴ���*/
    VOS_UINT32                 u32SocpAppSucIntCnt;        /* ����APP�жϴ���ɹ��Ĵ���*/
#endif
#ifdef SOCP_CCORE
    VOS_UINT32                 u32SocpModemEtrIntCnt;      /* ����Modem�жϵĴ���*/
    VOS_UINT32                 u32SocpModemSucIntCnt;      /* ����Modem�жϴ���ɹ��Ĵ���*/
#endif
} SOCP_DEBUG_GBL_STRU;

typedef struct
{
    VOS_UINT32 u32SocpStartEncSrcCnt[SOCP_MAX_ENCSRC_CHN];        /* SOCP��������Դͨ���Ĵ���*/
    VOS_UINT32 u32SocpStopEncSrcCnt[SOCP_MAX_ENCSRC_CHN];         /* SOCP�رձ���Դͨ���Ĵ���*/
    VOS_UINT32 u32SocpRegEventEncSrcCnt[SOCP_MAX_ENCSRC_CHN];     /* SOCPע�����Դͨ���¼��Ĵ���*/
    VOS_UINT32 u32SocpGetWBufEncSrcEtrCnt[SOCP_MAX_ENCSRC_CHN];      /* SOCP����Դͨ�����Ի��дbuffer�Ĵ���*/
    VOS_UINT32 u32SocpGetWBufEncSrcSucCnt[SOCP_MAX_ENCSRC_CHN];      /* SOCP����Դͨ���ɹ����дbuffer�Ĵ���*/
    VOS_UINT32 u32SocpWriteDoneEncSrcEtrCnt[SOCP_MAX_ENCSRC_CHN];    /* SOCP����Դͨ������д��buffer�Ĵ���*/
    VOS_UINT32 u32SocpWriteDoneEncSrcSucCnt[SOCP_MAX_ENCSRC_CHN];    /* SOCP����Դͨ���ɹ�д��buffer�Ĵ���*/
    VOS_UINT32 u32SocpWriteDoneEncSrcFailCnt[SOCP_MAX_ENCSRC_CHN];    /* SOCP����Դͨ��д��bufferʧ�ܵĴ���*/
    VOS_UINT32 u32SocpGetRdBufEncSrcEtrCnt[SOCP_MAX_ENCSRC_CHN];     /* SOCP����Դͨ�����Ի��Rdbuffer�Ĵ���*/
    VOS_UINT32 u32SocpGetRdBufEncSrcSucCnt[SOCP_MAX_ENCSRC_CHN];     /* SOCP����Դͨ���ɹ����Rdbuffer�Ĵ���*/
    VOS_UINT32 u32SocpReadRdDoneEncSrcEtrCnt[SOCP_MAX_ENCSRC_CHN];   /* SOCP����Դͨ������д��Rdbuffer�Ĵ���*/
    VOS_UINT32 u32SocpReadRdDoneEncSrcSucCnt[SOCP_MAX_ENCSRC_CHN];   /* SOCP����Դͨ���ɹ�д��Rdbuffer�Ĵ���*/
    VOS_UINT32 u32SocpReadRdDoneEncSrcFailCnt[SOCP_MAX_ENCSRC_CHN];   /* SOCP����Դͨ��д��Rdbufferʧ�ܵĴ���*/
    VOS_UINT32 u32SocpEncSrcIsrHeadIntCnt[SOCP_MAX_ENCSRC_CHN];      /* ISR�н������Դͨ����ͷ�����жϴ���*/
    VOS_UINT32 u32SocpEncSrcIsrRdIntCnt[SOCP_MAX_ENCSRC_CHN];        /* ISR�������Դͨ��Rd ����жϴ���*/
} SOCP_DEBUG_ENCSRC_STRU;

#ifdef SOCP_ACORE
typedef struct
{
    VOS_UINT32 u32SocpRegEventEncDstCnt[SOCP_MAX_ENCDST_CHN];     /* SOCPע�����Ŀ��ͨ���¼��Ĵ���*/
    VOS_UINT32 u32SocpRegReadCBEncDstCnt[SOCP_MAX_ENCDST_CHN];    /* SOCPע�����Ŀ��ͨ�������ݻص������Ĵ���*/
    VOS_UINT32 u32SocpGetReadBufEncDstEtrCnt[SOCP_MAX_ENCDST_CHN];   /* SOCP����Ŀ��ͨ�����Զ����ݵĴ���*/
    VOS_UINT32 u32SocpGetReadBufEncDstSucCnt[SOCP_MAX_ENCDST_CHN];   /* SOCP����Ŀ��ͨ���ɹ������ݵĴ���*/
    VOS_UINT32 u32SocpReadDoneEncDstEtrCnt[SOCP_MAX_ENCDST_CHN];     /* SOCP����Ŀ��ͨ������д��Ŀ��buffer�Ĵ���*/
    VOS_UINT32 u32SocpReadDoneEncDstSucCnt[SOCP_MAX_ENCDST_CHN];     /* SOCP����Ŀ��ͨ��д��Ŀ��buffer�ɹ��Ĵ���*/
    VOS_UINT32 u32SocpReadDoneEncDstFailCnt[SOCP_MAX_ENCDST_CHN];     /* SOCP����Ŀ��ͨ��д��Ŀ��bufferʧ�ܵĴ���*/
    VOS_UINT32 u32SocpReadDoneValidEncDstCnt[SOCP_MAX_ENCDST_CHN];    /* SOCP����Ŀ��ͨ��д��Ŀ��buffer size ������0 �Ĵ���*/
    VOS_UINT32 u32SocpEncDstTskTrfCbCnt[SOCP_MAX_ENCDST_CHN];        /* �����лص�����Ŀ��ͨ����������жϴ�������ɵĴ���*/
    VOS_UINT32 u32SocpEncDstTskTrfCbOriCnt[SOCP_MAX_ENCDST_CHN];        /* �����лص�����Ŀ��ͨ����������жϴ������Ĵ���*/
    VOS_UINT32 u32SocpEncDstTskOvfCbCnt[SOCP_MAX_ENCDST_CHN];        /* �����лص�����Ŀ��ͨ��buf ����жϴ�������ɵĴ���*/
    VOS_UINT32 u32SocpEncDstTskOvfCbOriCnt[SOCP_MAX_ENCDST_CHN];     /* �����лص�����Ŀ��ͨ��buf ����жϴ���������*/
    VOS_UINT32 u32SocpEncDstIsrTrfIntCnt[SOCP_MAX_ENCDST_CHN];        /* ISR�н������Ŀ��ͨ����������жϴ���*/
    VOS_UINT32 u32SocpEncDstIsrTrfIntINvalidChannelCnt[SOCP_MAX_ENCDST_CHN];  /* ISR�н������Ŀ��ͨ����������жϣ���ͨ���쳣��ͳ�ƴ���*/
    VOS_UINT32 u32SocpEncDstTskThresholdOvfCbCnt[SOCP_MAX_ENCDST_CHN];        /* �����лص�����Ŀ��ͨ��buf��ֵ����жϴ�������ɵĴ���*/
    VOS_UINT32 u32SocpEncDstTskThresholdOvfCbOriCnt[SOCP_MAX_ENCDST_CHN];     /* �����лص�����Ŀ��ͨ��buf��ֵ����жϴ���������*/
    VOS_UINT32 u32SocpEncDstIsrThresholdOvfIntCnt[SOCP_MAX_ENCDST_CHN];       /* ISR�н������Ŀ��ͨ��buf��ֵ����жϴ���*/
    VOS_UINT32 u32SocpEncDstLogSaveOriCnt[SOCP_MAX_ENCDST_CHN];      /* SOCP����Ŀ��ͨ����ӦAT^LOGSAVE������������log���� */
    VOS_UINT32 u32SocpEncDstLogSaveCnt[SOCP_MAX_ENCDST_CHN];         /* SOCP����Ŀ��ͨ����ӦAT^LOGSAVE������������log��ɴ��� */
} SOCP_DEBUG_ENCDST_STRU;

typedef struct
{
    VOS_UINT32 u32SocpStartDecSrcCnt[SOCP_MAX_DECSRC_CHN];        /* SOCP��������Դͨ���Ĵ���*/
    VOS_UINT32 u32SocpStopDecSrcCnt[SOCP_MAX_DECSRC_CHN];         /* SOCP�رս���Դͨ���Ĵ���*/
    VOS_UINT32 u32SocpRegEventDecSrcCnt[SOCP_MAX_DECSRC_CHN];     /* SOCPע�����Դͨ���¼��Ĵ���*/
    VOS_UINT32 u32SocpGetWBufDecSrcEtrCnt[SOCP_MAX_DECSRC_CHN];      /* SOCP����Դͨ�����Ի��дbuffer�Ĵ���*/
    VOS_UINT32 u32SocpGetWBufDecSrcSucCnt[SOCP_MAX_DECSRC_CHN];      /* SOCP����Դͨ�����дbuffer�ɹ��Ĵ���*/
    VOS_UINT32 u32SocpWriteDoneDecSrcEtrCnt[SOCP_MAX_DECSRC_CHN];    /* SOCP����Դͨ������д��buffer�Ĵ���*/
    VOS_UINT32 u32SocpWriteDoneDecSrcSucCnt[SOCP_MAX_DECSRC_CHN];    /* SOCP����Դͨ��д��buffer�ɹ��Ĵ���*/
    VOS_UINT32 u32SocpWriteDoneDecSrcFailCnt[SOCP_MAX_DECSRC_CHN];    /* SOCP����Դͨ��д��bufferʧ�ܵĴ���*/
    VOS_UINT32 u32SocpDecSrcIsrErrIntCnt[SOCP_MAX_DECSRC_CHN];        /* ISR�н������Դͨ�������жϴ���*/
} SOCP_DEBUG_DECSRC_STRU;
#endif

typedef struct
{
    VOS_UINT32 u32SocpRegEventDecDstCnt[SOCP_MAX_DECDST_CHN];     /* SOCPע�����Ŀ��ͨ���¼��Ĵ���*/
    VOS_UINT32 u32SocpRegReadCBDecDstCnt[SOCP_MAX_DECDST_CHN];    /* SOCPע�����Ŀ��ͨ�������ݻص������Ĵ���*/
    VOS_UINT32 u32SocpGetReadBufDecDstEtrCnt[SOCP_MAX_DECDST_CHN];   /* SOCP����Ŀ��ͨ�����Զ����ݵĴ���*/
    VOS_UINT32 u32SocpGetReadBufDecDstSucCnt[SOCP_MAX_DECDST_CHN];   /* SOCP����Ŀ��ͨ�������ݳɹ��Ĵ���*/
    VOS_UINT32 u32SocpReadDoneDecDstEtrCnt[SOCP_MAX_DECDST_CHN];     /* SOCP����Ŀ��ͨ������д��Ŀ��buffer�Ĵ���*/
    VOS_UINT32 u32SocpReadDoneDecDstSucCnt[SOCP_MAX_DECDST_CHN];     /* SOCP����Ŀ��ͨ��д��Ŀ��buffer�ɹ��Ĵ���*/
    VOS_UINT32 u32SocpReadDoneDecDstFailCnt[SOCP_MAX_DECDST_CHN];     /* SOCP����Ŀ��ͨ��д��Ŀ��bufferʧ�ܵĴ���*/
    VOS_UINT32 u32SocpReadDoneZeroDecDstCnt[SOCP_MAX_DECDST_CHN];   /* SOCP����Ŀ��ͨ��д��Ŀ��buffer size ����0 �Ĵ���*/
    VOS_UINT32 u32SocpReadDoneValidDecDstCnt[SOCP_MAX_DECDST_CHN];   /* SOCP����Ŀ��ͨ��д��Ŀ��buffer size ������0 �Ĵ���*/
    VOS_UINT32 u32SocpDecDstIsrTrfIntCnt[SOCP_MAX_DECDST_CHN];        /* ISR�н������Ŀ��ͨ����������жϴ���*/
    VOS_UINT32 u32SocpDecDstIsrOvfIntCnt[SOCP_MAX_DECDST_CHN];        /* ISR�н������Ŀ��ͨ��buf ����жϴ���*/
} SOCP_DEBUG_DECDST_STRU;

typedef struct
{
    VOS_UINT32  ulStartTimeNum;
    VOS_UINT32  ulEncDstRunNum;
    VOS_UINT32  ulFlushBufferNum;
    VOS_UINT32  ulFlushTimeOutNum;
}SOCP_DEBUG_SDLOG_STRU;

#ifdef SOCP_ACORE
typedef struct
{
    VOS_UINT32  ulTimerNum;
    VOS_UINT32  ulTimerSlice;
    VOS_UINT32  ulFlushNum;
    VOS_UINT32  ulFlushSlice;
    VOS_UINT32  ulIntNum;
    VOS_UINT32  ulIntSlice;
    VOS_UINT32  ulTaskNum;
    VOS_UINT32  ulTaskSlice;
    VOS_UINT32  ulTaskErrNum;
    VOS_UINT32  ulTaskErrSlice;
}SOCP_ENCDST_SEM_STRU;
#endif

/* ������Ϣ*/
typedef struct
{
    SOCP_DEBUG_GBL_STRU         sSocpDebugGBl;
    SOCP_DEBUG_ENCSRC_STRU      sSocpDebugEncSrc;
#ifdef SOCP_ACORE
    SOCP_DEBUG_ENCDST_STRU      sSocpDebugEncDst;
    SOCP_DEBUG_DECSRC_STRU      sSocpDebugDecSrc;
    SOCP_DEBUG_DECDST_STRU      sSocpDebugDecDst;
    SOCP_DEBUG_SDLOG_STRU       stSocpSDLogInfo[SOCP_MAX_ENCDST_CHN];
    SOCP_ENCDST_SEM_STRU        stSocpEncDstSemInfo[SOCP_MAX_ENCDST_CHN];
#endif
}SOCP_DEBUGINFO_STRU;

typedef struct
{
    INNER_LOG_DATA_STRU         stSocpInfo;
    INNER_LOG_DATA_STRU         stSocpWarning;
    INNER_LOG_DATA_STRU         stSocpErr;
}SOCP_LOG_INFO_STRU;

/**************************************************************************
  �Ĵ���λ����
**************************************************************************/

/*
* Bit masks for registers: ENCSTAT,DECSTAT, channel state
*/
#define SOCP_CHN_BUSY                   ( (VOS_INT32) 1)   /*ͨ��æ*/
#define SOCP_CHN_IDLE                   ( (VOS_INT32) 0)   /*ͨ����*/

/*
* ͨ��ʹ�ܺ궨�壬ͬʱ�����ڱ���Դͨ���ͽ���Դͨ��
*/
#define SOCP_CHN_ENABLE                 ( (VOS_INT32) 1)   /*ͨ����*/
#define SOCP_CHN_DISABLE                ( (VOS_INT32) 0)   /*ͨ���ر�*/

/*
* ͨ���Ƿ��Ѿ�����
*/
#define SOCP_CHN_SET                    ( (VOS_INT32) 1)     /*ͨ���Ѿ�����*/
#define SOCP_CHN_UNSET                  ( (VOS_INT32) 0)     /*ͨ��û������*/
/*
* ������·����ʹ��λ
*/
#define SOCP_ENCSRC_BYPASS_ENABLE       ( (VOS_INT32) 1)     /*ͨ����·ʹ��*/
#define SOCP_ENCSRC_BYPASS_DISABLE      ( (VOS_INT32) 0)     /*ͨ����·û��ʹ��*/


/*
* ������·����ʹ��λ
*/
#define SOCP_DECSRC_DEBUG_ENBALE        ( (VOS_INT32) 1)     /*ͨ��DEBUG ʹ��*/
#define SOCP_DECSRC_DEBUG_DISBALE       ( (VOS_INT32) 0)     /*ͨ��DEBUG û��ʹ��*/

#define SOCP_CORE0_DEC_OUTOVFINT_MASK   ( (VOS_INT32)(1))          /* ����core0 Ŀ��BUFFER����ж� */
#define SOCP_DEC_INERRINT_MASK          ( (VOS_INT32)(1<<1))       /* ��������������ж� */
#define SOCP_CORE0_DEC_TFRINT_MASK      ( (VOS_INT32)(1<<2))       /* ����core0��������ж� */
#define SOCP_CORE1_DEC_TFRINT_MASK      ( (VOS_INT32)(1<<3))       /* ����core1 ��������ж� */
#define SOCP_CORE1_DEC_OUTOVFINT_MASK   ( (VOS_INT32)(1<<4))       /* ����core1 Ŀ��BUFFER����ж�*/
#define SOCP_MODEM_ENC_RDINT_MASK       ( (VOS_INT32)(1<<10))      /* ����RDBUFFER����ж� */
#define SOCP_APP_ENC_RDINT_MASK         ( (VOS_INT32)(1<<11))      /* ����MODEMCPU��ͷ�������ж� */
#define SOCP_APP_ENC_OUTOVFINT_MASK     ( (VOS_INT32)(1<<12))      /* ����RDBUFFER����ж� */
#define SOCP_MODEM_ENC_FLAGINT_MASK     ( (VOS_INT32)(1<<13))      /* ����MODEMCPU��ͷ�������ж� */
#define SOCP_APP_ENC_FLAGINT_MASK       ( (VOS_INT32)(1<<14))      /* ����RDBUFFER����ж� */
#define SOCP_APP_ENC_TFRINT_MASK        ( (VOS_INT32)(1<<15))      /* ����MODEMCPU��ͷ�������ж� */
#define SOCP_DEC_SRCINT_NUM             (6)              /* ����MODEMCPU��ͷ�������ж� */


#define SOCP_TRANS_TIMEOUT_DEFAULT      (0x17)      /*dec:23 */
#define SOCP_OVERFLOW_TIMEOUT_DEFAULT   (0x5969)    /*dec:22889 */
#define SOCP_DEC_PKTLGTH_MAX            (0x04)      /*dec:4090 */
#define SOCP_DEC_PKTLGTH_MIN            (0x06)      /*dec:6 */
#define SOCP_TIMEOUT_MAX                (0xffff)
#define SOCP_DEC_MAXPKT_MAX             (0xfff)
#define SOCP_DEC_MINPKT_MAX             (0x1f)
#define SOCP_ENC_SRC_BUFLGTH_MAX        (0x7ffffff)
#define SOCP_ENC_SRC_RDLGTH_MAX         (0xffff)
#define SOCP_ENC_DST_BUFLGTH_MAX        (0x1fffff)
#define SOCP_ENC_DST_TH_MAX             (0x7ff)
#define SOCP_ENC_DST_THRH_MIN           (256)
#define SOCP_DEC_SRC_BUFLGTH_MAX        (0xffff)
#define SOCP_DEC_SRC_RDLGTH_MAX         (0xffff)
#define SOCP_DEC_DST_BUFLGTH_MAX        (0xffff)
#define SOCP_DEC_DST_TH_MAX             (0xff)

/* ����Ŀ��buffer�����ж�״̬�Ĵ���16-22λָʾ��ֵ����жϣ�0-6λָʾ�����ж� */
#define SOCP_ENC_DST_BUFF_THRESHOLD_OVF_MASK    (0x007f0000)
#define SOCP_ENC_DST_BUFF_OVF_MASK              (0x0000007f)
/* ��ֵ�жϼĴ�����ʼλ */
#define SOCP_ENC_DST_BUFF_THRESHOLD_OVF_BEGIN   (16)


#define SOCP_RD_TIMEOUT                 ((VOS_INT32) 100)     /*����*/
#define SOCP_RESET_TIME                 (1000)
#define SOCP_GBLRESET_TIME              (100)


/* ����Ƿ��ʼ���ĺ궨�� */
#define SOCP_CHECK_INIT() \
        if (!g_strSocpStat.bInitFlag)\
        {\
            SOCP_LOG_ERR("The module has not been initialized!\n", 0, 0);\
            return BSP_ERR_SOCP_NOT_INIT;\
        }\

/* �������Ƿ���Ч */
#define SOCP_CHECK_PARA(para) \
        if (VOS_NULL_PTR == para)\
        {\
            SOCP_LOG_ERR("the parameter is NULL!", 0, 0);\
            return BSP_ERR_SOCP_NULL;\
        }\

#define SOCP_CHECK_BUF_ADDR(start, end) \
        if (start >= end)\
        {\
            SOCP_LOG_ERR("the buff is valid!", 0, 0);\
            return BSP_ERR_SOCP_INVALID_PARA;\
        }\

#define SOCP_CHECK_CHAN_TYPE(para, type) \
        if (type != para)\
        {\
            SOCP_LOG_ERR("the Chan's Type is Valid!", 0, 0);\
            return BSP_ERR_SOCP_INVALID_CHAN;\
        }\

#define SOCP_CHECK_CHAN_ID(para, id) \
        if (para >= id)\
        {\
            SOCP_LOG_ERR("the Chan Id is Valid!", 0, 0);\
            return BSP_ERR_SOCP_INVALID_CHAN;\
        }\

/* ����Ƿ�8�ֽڶ��� */
#define SOCP_CHECK_8BYTESALIGN(para) \
        if (0 != (para%8))\
        {\
            SOCP_LOG_ERR("the parameter is not 8 bytes aligned!", 0, 0);\
            return BSP_ERR_SOCP_NOT_8BYTESALIGN;\
        }\

#define SOCP_CHECK_ENCSRC_CHNMODE(para) \
        if (para >= SOCP_ENCSRC_CHNMODE_BUTT)\
        {\
            SOCP_LOG_ERR("encoder src channele mode is, which is valid!", para, 0);\
            return BSP_ERR_SOCP_INVALID_PARA;\
        }\

#define SOCP_CHECK_DECSRC_CHNMODE(para) \
        if (para >= SOCP_DECSRC_CHNMODE_BUTT)\
        {\
            SOCP_LOG_ERR("decoder dst channele mode is, which is valid!", para, 0);\
            return BSP_ERR_SOCP_INVALID_PARA;\
        }\

#define SOCP_CHECK_CHAN_PRIORITY(para) \
        if (para >= SOCP_CHAN_PRIORITY_BUTT)\
        {\
            SOCP_LOG_ERR("encoder src channele priority is, which is valid!", para, 0);\
            return BSP_ERR_SOCP_INVALID_PARA;\
        }\

#define SOCP_CHECK_DATA_TYPE(para) \
        if (para >= SOCP_DATA_TYPE_BUTT)\
        {\
            SOCP_LOG_ERR("channel data type is, which is valid!", para, 0);\
            return BSP_ERR_SOCP_INVALID_PARA;\
        }\

#define SOCP_CHECK_ENCSRC_SET(id) \
        if(SOCP_CHN_SET != g_strSocpStat.sEncSrcChan[id].u32SetStat)\
        {\
            SOCP_LOG_ERR("encoder src not allocated!\n", id, 0);\
            return BSP_ERR_SOCP_INVALID_CHAN;\
        }\

#define SOCP_CHECK_ENCDST_SET(id) \
        if(SOCP_CHN_SET!= g_strSocpStat.sEncDstChan[id].u32SetStat)\
        {\
            SOCP_LOG_ERR("encoder dst set failed!\n", id, 0);\
            return BSP_ERR_SOCP_INVALID_CHAN;\
        }\

#define SOCP_CHECK_DECDST_SET(id) \
        if(SOCP_CHN_SET!= g_strSocpStat.sDecDstChan[id].u32SetStat)\
        {\
            SOCP_LOG_ERR("decoder dst[%d] alloc failed!\n", id, 0);\
            return BSP_ERR_SOCP_INVALID_CHAN;\
        }\

#define SOCP_CHECK_DECSRC_SET(id) \
        if(SOCP_CHN_SET!= g_strSocpStat.sDecSrcChan[id].u32SetStat)\
        {\
            SOCP_LOG_ERR("decoder src set failed!\n", id, 0);\
            return BSP_ERR_SOCP_INVALID_CHAN;\
        }\

#define SOCP_CHECK_DATA_TYPE_EN(param) \
        if (param >= SOCP_DATA_TYPE_EN_BUTT)\
        {\
            SOCP_LOG_ERR("the data type en is valid!\n", param, 0); \
            return BSP_ERR_SOCP_INVALID_PARA; \
        } \

#define SOCP_CHECK_ENC_DEBUG_EN(param) \
        if (param >= SOCP_ENC_DEBUG_EN_BUTT)\
        {\
            SOCP_LOG_ERR("the enc src debug en is valid", param, 0); \
            return BSP_ERR_SOCP_INVALID_PARA; \
        } \

/*
 * �Ĵ��������궨��
 */
#define SOCP_REG(base, reg)      (*(volatile VOS_UINT32 *)((base) + (VOS_UINT_PTR)(reg)))

/* ��var��[pos, pos + bits-1]��������,  pos��0��ʼ���
   e.g BDOM_CLR_BITS(var, 4, 2) ��ʾ��Bit5~4���� */
#define BSP_REG_CLRBITS(base, reg, pos, bits) (SOCP_REG(base, reg) &= ~((((VOS_UINT32)1 << (bits)) - 1) << (pos)))

/* ��var��[pos, pos + bits-1]��������Ϊval,  pos��0��ʼ���
   e.g BDOM_SET_BITS(var, 4, 2, 2) ��ʾ��Bit5~4����Ϊb'10 */
#define BSP_REG_SETBITS(base, reg, pos, bits, val) (SOCP_REG(base, reg) = (SOCP_REG(base, reg) & (~((((VOS_UINT32)1 << (bits)) - 1) << (pos)))) \
                                                                         | ((VOS_UINT32)((val) & (((VOS_UINT32)1 << (bits)) - 1)) << (pos)))

/* ��ȡvar��[pos, pos + bits-1]����ֵ,  pos��0��ʼ��� */
#define BSP_REG_GETBITS(base, reg, pos, bits) ((SOCP_REG(base, reg) >> (pos)) & (((VOS_UINT32)1 << (bits)) - 1))

#define COMM_DRV_REG_READ(base, reg, result) \
    ((result) = SOCP_REG(base, reg))

#define COMM_DRV_REG_WRITE(base, reg, data) \
    (SOCP_REG(base, reg) = (data))

#define BSP_REG_WRITEBITS(base, reg, data) \
            (SOCP_REG(base, reg) |= (data))

#define BSP_REG_MODIFY(base, reg, clrmsk, setmsk) \
    (SOCP_REG(base, reg) = ((SOCP_REG(base, reg) & ~clrmsk) | setmsk))

#define SOCP_REG_WRITE(reg, data)               COMM_DRV_REG_WRITE(g_strSocpStat.uBaseAddr,   reg, data)
#define SOCP_REG_READ(reg, result)              COMM_DRV_REG_READ(g_strSocpStat.uBaseAddr,    reg, result)
#define SOCP_REG_SETBITS(reg, pos, bits, val)   BSP_REG_SETBITS(g_strSocpStat.uBaseAddr, reg, pos, bits, val)
#define SOCP_REG_GETBITS(reg, pos, bits)        BSP_REG_GETBITS(g_strSocpStat.uBaseAddr, reg, pos, bits)

#define SOCP_ENC_DEST_LOG_DELAY_ON              (0x5A5A5A5A)
typedef struct SOCP_ENC_DST_BUF_LOG_CFG
{
    VOS_VOID*      pVirBuffer;      /* SOCP����Ŀ��ͨ����������BUFFER����32λϵͳ����4�ֽڣ���64λϵͳ����8�ֽ� */
    VOS_UINT32     ulPhyBufferAddr; /* SOCP����Ŀ��ͨ����������BUFFER��ַ����64λ��32λϵͳ�������ַ����4�ֽ� */
    VOS_UINT32     BufferSize;      /* SOCP����Ŀ��ͨ������BUFFER��С */
    VOS_UINT32     overTime;        /* NVE�����õĳ�ʱʱ�� */
    VOS_UINT32     logOnFlag;       /* LOG2.0����������־ */
    VOS_UINT32     ulCurTimeout;    /* SOCP����Ŀ��ͨ�����ݴ��䳬ʱʱ�� */
} SOCP_ENC_DST_BUF_LOG_CFG_STRU;


/**************************************************************************
  ��������
**************************************************************************/

extern SOCP_GBLSTATE_STRU       g_strSocpStat;          /* ��¼��ǰȫ��״̬��ͨ��������Ϣ */

extern SOCP_DEBUGINFO_STRU      g_stSocpDebugInfo;      /* ��¼��SOCP����״̬�еĹ�����Ϣ */

extern SOCP_LOG_INFO_STRU       g_stSocpLog;            /* ��¼��SOCP����״̬�е�log��Ϣ */

extern VOS_SPINLOCK             g_stSocpSpinLock;       /* ��������������SOCP�ٽ���Դ���� */


#ifdef SOCP_ACORE
extern VOS_VOID SocpHandlerEncDst(VOS_VOID);

extern VOS_UINT32 SocpAppInthandler(VOS_VOID);
#else
extern VOS_VOID SocpModemInthandler(VOS_VOID);
#endif

extern VOS_VOID SOCP_LFixChan_Init(VOS_VOID);

extern VOS_VOID SOCP_EnableLFixChan(VOS_VOID);


#if (FEATURE_SOCP_SYNC_ENABLE == FEATURE_ON)
#define SOCP_LOG_INFO(pucStr, ulP1, ulP2)\
    OM_Inner_Log(pucStr, ulP1, ulP2, &g_stSocpLog.stSocpInfo, VOS_FILE_ID, __LINE__)

#define SOCP_LOG_WARNING(pucStr, ulP1, ulP2)\
    OM_Inner_Log(pucStr, ulP1, ulP2, &g_stSocpLog.stSocpWarning, VOS_FILE_ID, __LINE__)

#define SOCP_LOG_ERR(pucStr, ulP1, ulP2)\
    OM_Inner_Log(pucStr, ulP1, ulP2, &g_stSocpLog.stSocpErr, VOS_FILE_ID, __LINE__)
#else
#define SOCP_LOG_INFO(pucStr, ulP1, ulP2)\
    vos_printf("SOCP_LOG_INFO %s, %d, %d", pucStr, ulP1, ulP2)

#define SOCP_LOG_WARNING(pucStr, ulP1, ulP2)\
    vos_printf("SOCP_LOG_WARNING %s, %d, %d", pucStr, ulP1, ulP2)

#define SOCP_LOG_ERR(pucStr, ulP1, ulP2)\
    vos_printf("SOCP_LOG_ERR %s, %d, %d", pucStr, ulP1, ulP2)

#endif


#if(VOS_OS_VER == VOS_LINUX)

#define SOCP_FLUSH_CACHE(ptr, size)     (0)/*__dma_single_cpu_to_dev(ptr, size, 1)*/

#define SOCP_INVALID_CACHE(ptr, size)   (0)/*__dma_single_dev_to_cpu(ptr, size, 2)*/

#elif(VOS_OS_VER == VOS_VXWORKS)
#define SOCP_FLUSH_CACHE(ptr, size) \
    VOS_FlushCpuCache((void  *)(((VOS_UINT32)(ptr)) & (~0x1F)), (unsigned int)((((size) + (((VOS_UINT32)(ptr)) & 0x1F) + 0x1F)>>0x5)<<0x5))
#else
#define SOCP_FLUSH_CACHE(ptr, size)     (0)

#endif

#if(VOS_OS_VER == VOS_WIN32)    /* for PC Stub */
extern VOS_VOID Stub_SendSocpData(VOS_UINT32 ulSrcChID,VOS_UINT8 *pucData,VOS_UINT32 ulDataLen);
#endif


#ifdef __cplusplus
#if __cplusplus
    }
#endif
#endif

#else
#include "mdrv_socp.h"
#endif

#endif


