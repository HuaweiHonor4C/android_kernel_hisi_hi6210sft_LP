/*************************************************************************
*   ��Ȩ����(C) 1987-2011, ���ڻ�Ϊ�������޹�˾.
*
*   �� �� �� :  Drvinterface_inner.h
*
*   ��    �� :  chenyingguo
*
*   ��    �� :  
*
*   �޸ļ�¼ :  2011��1��18��  v1.00  yangzhi����
*************************************************************************/

#ifndef __DRV_INTERFACE_INNER_H__
#define __DRV_INTERFACE_INNER_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#if ( defined(BSP_CORE_MODEM) && !defined(__BOOTLOADER__) && defined(CHIP_BB_HI6758) && defined(__OS_RTOSCK__))
#include "sre_base.h"
#include "sre_shell.h"
#endif

#include "drv_global.h"
#include "drv_ifc.h"
#include "drv_icc.h"
#include "mdrv.h"
#include "memMapGlobal.h"

/* ���ַת������ */
#define VIRT_ADDRESS(x)          x##_VIRT

#define CT_LOG(fileno)      /*exchSaveCodeTrace(fileno, __LINE__)*/

#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
#define DMA_SUCCESS 0
#else
#if (defined CHIP_BB_HI6758) ||(defined (BOARD_FPGA))/*address transfer */
#define IO_ADDRESS(x)   ((((x) & 0xF0000000) >> 4) | ((x) & 0x00FFFFFF) | 0xF0000000)
#define IO_TYPE(var) ((ICC_SUB_CHAN_S *)IO_ADDRESS((unsigned int)(var)))
#define PHY_TO_VIRT(var)  (((unsigned int)(var) - GLOBAL_MEM_CORE_SHARE_ADDR) + GLOBAL_MEM_CORE_SHARE_ADDR_VIRT)
#define DDR_VIRT_TO_PHY(var)  (((unsigned int)(var) - PBXA9_DRAM_SHARE_VIRT) + PBXA9_DRAM_SHARE_PHYS)
#define DRV_PHY_TO_VIRT(var)  (((unsigned int)(var) - PBXA9_DRAM_SHARE_PHYS) + PBXA9_DRAM_SHARE_VIRT)
#endif
#define bsp_assert(expr)                                            \
    if (!(expr)) {                                          \
        printk("Assertion failed! %s,%s,%s,line=%d\n",  \
        #expr, __FILE__, __func__, __LINE__);    \
    }
#endif

/* ͨ�ô����룬��0x1001��ʼ */
#define BSP_ERR_COMMON (0x1000)
#define BSP_ERR_MODULE_NOT_INITED (BSP_ERR_COMMON + 1)
#define BSP_ERR_NULL_PTR (BSP_ERR_COMMON + 2)
#define BSP_ERR_INVALID_PARA (BSP_ERR_COMMON + 3)
#define BSP_ERR_RETRY_TIMEOUT (BSP_ERR_COMMON + 4)
#define BSP_ERR_BUF_ALLOC_FAILED (BSP_ERR_COMMON + 5)
#define BSP_ERR_BUF_FREE_FAILED (BSP_ERR_COMMON + 6)

#define  BSP_MNTN_CACHE_FLUSH   0x8765abcd

/* ��ģ��ר�ô����룬��0x1��ʼ  */
#define BSP_ERR_SPECIAL (0x0)

/* ���Ժ궨�� */
#ifdef __BSP_DEBUG__
#undef __BSP_DEBUG__
#endif

#define MODE_GSM      0x01
#define MODE_CDMA     0x02
#define MODE_WCDMA    0x04

/* �Ĵ��������궨�� */
#define BSP_REG8(base, reg) (*(volatile BSP_U8 *)((BSP_U32)base + (reg)))
#define BSP_REG16(base, reg) (*(volatile BSP_U16 *)((BSP_U32)base + (reg)))

/* ��var��[pos, pos + bits-1]��������,  pos��0��ʼ���
   e.g BDOM_CLR_BITS(var, 4, 2) ��ʾ��Bit5~4���� */
#define BSP_REG_CLRBITS(base, reg, pos, bits) (BSP_REG(base, reg) &= ~((((BSP_U32)1 << (bits)) - 1) << (pos)))
   
/* ��var��[pos, pos + bits-1]��������Ϊval,  pos��0��ʼ���
   e.g BDOM_SET_BITS(var, 4, 2, 2) ��ʾ��Bit5~4����Ϊb'10 */
#define BSP_REG_SETBITS(base, reg, pos, bits, val) (BSP_REG(base, reg) = (BSP_REG(base, reg) & (~((((BSP_U32)1 << (bits)) - 1) << (pos)))) \
                                                                         | ((BSP_U32)((val) & (((BSP_U32)1 << (bits)) - 1)) << (pos)))

/* ��ȡvar��[pos, pos + bits-1]����ֵ,  pos��0��ʼ��� */
#define BSP_REG_GETBITS(base, reg, pos, bits) ((BSP_REG(base, reg) >> (pos)) & (((BSP_U32)1 << (bits)) - 1))

#define BSP_REG_WRITEBITS(base, reg, data) \
            (BSP_REG(base, reg) |= (data))
#define BSP_REG8_READ(base, reg, result) \
    ((result) = BSP_REG8(base, reg))

#define BSP_REG16_READ(base, reg, result) \
    ((result) = BSP_REG16(base, reg))

#define BSP_REG_MODIFY(base, reg, clrmsk, setmsk) \
    (BSP_REG(base, reg) = ((BSP_REG(base, reg) & ~clrmsk) | setmsk))

/* ���������Сֵ */
#ifndef BSP_MIN
 #define BSP_MIN(a, b) (((a) < (b)) ? (a) : (b))
#endif
#ifndef BSP_MAX
 #define BSP_MAX(a, b) (((a) > (b)) ? (a) : (b))
#endif

/* ��ӡ������ */
typedef enum tagBSP_LOG_LEVEL_E
{
    BSP_LOG_LEVEL_DEBUG = 0,  /* 0x0:debug-level                                  */
    BSP_LOG_LEVEL_INFO,      /* 0x1:informational                                */
    BSP_LOG_LEVEL_NOTICE,     /* 0x2:normal but significant condition             */
    BSP_LOG_LEVEL_WARNING,    /* 0x3:warning conditions                           */
    BSP_LOG_LEVEL_ERROR,      /* 0x4:error conditions                             */
    BSP_LOG_LEVEL_CRIT,       /* 0x5:critical conditions                          */
    BSP_LOG_LEVEL_ALERT,      /* 0x6:action must be taken immediately             */
    BSP_LOG_LEVEL_FATAL,      /* 0x7:just for compatibility with previous version */
    BSP_LOG_LEVEL_MAX         /* �߽�ֵ */
} BSP_LOG_LEVEL_E;

/* ����ģ��ö�ٶ��� */
typedef enum tagBSP_MODULE_E
{
    BSP_MODU_NANDF = 0x0, /* 0x0 */
    BSP_MODU_TIMER, /* 0x1 */
    BSP_MODU_VIC,   /* 0x2 */
    BSP_MODU_UART,  /* 0x3 */
    BSP_MODU_YAFFS, /* 0x4 */
    BSP_MODU_ETH,   /* 0x5 */
    BSP_MODU_DMAC,  /* 0x6 */
    BSP_MODU_SPI,   /* 0x7 */
    BSP_MODU_GPIO,  /* 0x8 */
    BSP_MODU_WDT,   /* 0x9 */
    BSP_MODU_SCI,   /* 0xA */
    BSP_MODU_USB,   /* 0xB */
    BSP_MODU_DRX,   /* 0xC */
    BSP_MODU_SDIO,  /* 0xD */
    BSP_MODU_FTP,   /* 0xE */
    BSP_MODU_GMAC,      /* 0xF */
    BSP_MODU_SEEKER,    /* 0x10 */
    BSP_MODU_UPGRADE,   /* 0x11 */
    BSP_MODU_AXI,       /* 0x12 */
    BSP_MODU_NET,       /* 0x13 */
    BSP_MODU_USB_ACM,   /* 0x14 */
    BSP_MODU_USB_NCM,   /* 0x15 */
    BSP_MODU_AXI_MONITOR,
    BSP_MODU_IFC,
    BSP_MODU_ICC,
    BSP_MODU_IPF,
    BSP_MODU_ACC,       /* 0x1A */
    BSP_MODU_BBP,
    BSP_MODU_MEM,
    BSP_MODU_UDI,
    BSP_MODU_DLOAD, 
    BSP_MODU_SOCP,
    BSP_MODU_IFCP,      /* 0x20 */
    BSP_MODU_PWRCTRL,
    BSP_MODU_SERIAL_UPGRADE,
    BSP_MODU_SYNC,
    BSP_MODU_IPC,
    BSP_MODU_MNTN,
    BSP_MODU_SSI,       /*����SSIģ�飬added by z00187553*/
    BSP_MODU_HKADC,
    BSP_MODU_PMU,       /*����PMUģ�飬added by z00187553*/
    BSP_MODU_HIFI,      /*0x29*//*����HIFIģ�飬added by w00193956*/
    BSP_MODU_AUDIO,
    BSP_MODU_CHGC,
    BSP_MODU_MAILBOX,
    BSP_MODU_SLAVE,
    BSP_MODU_MIPI,
    BSP_MODU_SKU,
    BSP_MODU_THERMAL,   /*�±�ģ��*/
    BSP_MODU_MBX,
    BSP_MODU_DORESET,   /*������C�˻���hifi������λ�����쳣ʱ��A��������λ�� added by l00212112*/
    BSP_MODU_EDMA,      /*0x33*/
	BSP_MODU_WM8990,	/*wm8990ģ��*/
    BSP_MODU_LED,		/*LEDģ��*/
    BSP_MODU_ABB,		/*ABBģ��*/
	BSP_MODU_RFILE,     /*add rfile system��add by l00201187*/
	BSP_MODU_SSDMA,     /*��ȫģ��*/
	BSP_MODU_OSAL,
	BSP_MODU_TUNER,
	BSP_MODU_BBE,
    BSP_MODU_CIPHER,
	BSP_MODU_RST,
	BSP_MODU_EMMC,
	/*�¼�ģ�����β�˿�ʼ��ͬʱ����ı��ϱ߸�ģ���λ��*/
    BSP_MODU_ALL,       /* �������е�ģ�� */
    BSP_MODU_MAX        /* �߽�ֵ */
} BSP_MODULE_E;



BSP_VOID BSP_ClearLogModule( BSP_MODULE_E enModule );
BSP_VOID BSP_SetLogModule( BSP_MODULE_E enModule );
BSP_U32  BSP_GetLogModule(BSP_VOID);
BSP_VOID BSP_SetLogLevel(BSP_LOG_LEVEL_E enLogLevel);
BSP_U32  BSP_GetLogLevel(BSP_VOID);
BSP_VOID BSP_SetPrintPos( BSP_BOOL bPrintPos);
BSP_BOOL BSP_GetPrintPos(BSP_VOID);

BSP_S32  BSP_ErrnoGet (BSP_VOID);
BSP_S32  BSP_TaskErrnoGet (BSP_S32 taskId);
BSP_S32  BSP_ErrnoSet (BSP_S32 s32ErrorValue);
BSP_S32  BSP_TaskErrnoSet (BSP_S32 s32TaskId, BSP_S32 s32ErrorValue);
BSP_VOID BSPLogHelp(BSP_VOID);


BSP_S32 BSP_ICC_Init(void);
extern BSP_S32 BSP_UDI_Init(void);
BSP_S32 BSP_MEM_Init(VOID);
BSP_VOID USB_UnReset(BSP_VOID);

#if !defined(BSP_CORE_MODEM)
BSP_BOOL USB_ETH_LinkStatGet(BSP_VOID);
#if( FEATURE_WIFI == FEATURE_ON )
BSP_S32 wifi_get_sta_num(BSP_VOID);
#endif
#endif

BSP_VOID WIFI_UnReset(BSP_VOID);
BSP_VOID HSIC_UnReset(BSP_VOID);

BSP_S32 test_thread_init(void);




#ifdef __BSP_DEBUG__
#include <logLib.h>

#define BSP_ASSERT(expr) \
{\
    if (!(expr)) { \
        logMsg("ASSERT failed at:\n  >File name: %s\n  >Function : %s\n  >Line No. : %d\n  >Condition: %s\n", \
               (BSP_S32)__FILE__, (BSP_S32)__FUNCTION__, (BSP_S32)__LINE__, (BSP_S32) # expr, (BSP_S32)5, (BSP_S32)6); \
    return BSP_ERROR;\
    } \
}

#define BSP_ASSERT_HALT (expr) \
{\
    if (!(expr)) { \
        logMsg("ASSERT failed at:\n  >File name: %s\n  >Function : %s\n  >Line No. : %d\n  >Condition: %s\n", \
               (BSP_S32)__FILE__, (BSP_S32)__FUNCTION__, (BSP_S32)__LINE__, (BSP_S32) # expr, (BSP_S32)5, (BSP_S32)6); \
        for (;;) ;\
    } \
}


#else
#define BSP_ASSERT(expr)
#define BSP_ASSERT_HALT(expr)
#endif


/*************************IFC BEGIN************************/
/* ������*/
/*ר�ô�����*/
#define BSP_ERR_IFC_SEND_FAIL         BSP_DEF_ERR(BSP_MODU_IFC,(BSP_ERR_SPECIAL + 1)) /*0x10120001*/
#define BSP_ERR_IFC_SEND_TIMEOUT      BSP_DEF_ERR(BSP_MODU_IFC,(BSP_ERR_SPECIAL + 2)) /*0x10120002*/
#define BSP_ERR_IFC_RCV_FAIL          BSP_DEF_ERR(BSP_MODU_IFC,(BSP_ERR_SPECIAL + 3)) /*0x10120003*/

#define IFC_ICC_CHAN_IN_FIFOSIZE  1024
#define IFC_ICC_CHAN_OUT_FIFOSIZE 1024
/*IFC������󳤶�*/
#define BSP_IFC_SEND_MAX_LEN  IFC_ICC_CHAN_IN_FIFOSIZE

/* ����˼���÷�װ�ص�����*/
/* pMsgBody:�ú���ID��Ӧ�����Ĳ���*/
/* u32Len:pMsgBody����*/
typedef BSP_S32 (*BSP_IFCP_REG_FUNC)(BSP_VOID *pMsgBody,BSP_U32 u32Len);

typedef enum tagIFCP_FUNC_E
{
    IFCP_FUNC_NANDFINIT =  0,   /* NANDflash��ʼ��ͬ��*/
    IFCP_FUNC_SD_POWER_CTRL,    /* SD�����µ����*/
    IFCP_FUNC_SYNC,             /* ͬ��ģ��*/
    IFCP_FUNC_DMACINIT,      /* DMAC��ʼ��ͬ��*/
    IFCP_FUNC_USB_PCSC,
    IFCP_FUNC_USB_DIAGMODE,
    IFCP_FUNC_USB_U2DIAG,
    IFCP_FUNC_DFS_ACPULOAD,  
    IFCP_FUNC_DFS_SETPROFILE,  
    IFCP_FUNC_DFS_RELEASEPROFILE,   
    IFCP_FUNC_ONOFF_NOTIFY_APP      = 10,     /* notify Application power off event */
    IFCP_FUNC_ONOFF_SHUTDOWN        = 11,     /* A-CPU to shutdown the system */
    IFCP_FUNC_ONOFF_DRV_POWER_OFF   = 12,
    IFCP_FUNC_CHGC_CallUsb=13,/*UT��׮*/
    IFCP_FUNC_CHGC_ReportStaToAPP=14,/*UT��׮*/
    IFCP_FUNC_CHGC_GetUsbReply=15,/*UT��׮*/
    IFCP_FUNC_CHGC_InterfacePro=16,/*UT��׮*/
    IFCP_FUNC_CHGC_GetInterface=17,/*UT��׮*/
    IFCP_FUNC_CHGC_SendOledIoctrl=18,/*UT��׮*/
    IFCP_FUNC_LED_CTRL_SET = 19,         /*LED_DRV added by j00179452*/
    IFCP_FUNC_SD_LDO_CTRL = 20,   /*SD����Դ���ؼ���ѹ����,y00186965*/
    IFCP_FUNC_PMU_ID = 21,
    IFCP_FUNC_PMU_CTRL = 22,
    IFCP_FUNC_RTC_RW_SET = 23,
    IFCP_FUNC_RTC_READ_GET = 24,
    IFCP_FUNC_NVIM_READ_SET = 25,
    IFCP_FUNC_NVIM_READ_GET = 26,
    IFCP_FUNC_PWRCTRL_PMU_ACCESS = 27,        /*ACPU PMU ACCESS  read/write Reg*/
    IFCP_FUNC_SD_HOOK = 28,   /*SD�����Ӻ���*/
    IFCP_FUNC_SDUP_INFO_SET = 29, /*SD�������汾��Ϣ��ȡ*/
    IFCP_FUNC_SDUP_INFO_GET = 30, /*SD�������汾��Ϣ��ȡ*/  
	IFCP_FUNC_LCD_PMU_ACCESS = 31,        /*ACPU PMU ACCESS  read/write Reg*/
    IFCP_FUNC_CHGC_USB_INOUT = 33,
    IFCP_FUNC_ONLINE_UP_INFO_SET =34,/*��������˫��ͨѶ*/
    IFCP_FUNC_ONLINE_UP_INFO_GET =35,/*��������˫��ͨѶ*/
    IFCP_FUNC_ERROR_LOG_SET=36,
    IFCP_FUNC_BREATH_LED_CTRL = 37, /*������˫��ͨ��*/
	IFCP_FUNC_SD_LDO_RESP = 38,   /*SD����Դ���ؼ���ѹ������Ӧ,y00186965*/
    IFCP_FUNC_LCD_IOCTRL_ACCESS = 39,/*����C��LCDģ����A�˷���ioctl����*/
    IFCP_FUNC_SD_GET_HWVER =40, /*SD��ʼ����ȡӲ���汾��*/
    IFCP_FUNC_GPIO_ANT=41,
    IFCP_FUNC_GPIO_USIM=42,
#if 1/*(FEATURE_UPDATEONLINE == FEATURE_ON)*/
    IFCP_FUNC_ONLINE_UP_INFO_FILE =43, /*��������˫��ͨѶ*/
#endif
    IFCP_FUNC_RFILE_SEM = 44,
    IFCP_FUNC_RFILE_CP2AP_SEM = 45,
    IFCP_FUNC_RFILE_LOG_SAVE = 46,
    IFCP_FUNC_RFILE_AP_NOTIFY_CP_INIT = 47,
	IFCP_FUNC_SD_IO_PMU_CTRL = 48,
    IFCP_FUNC_HISC_PMU_CTRL = 49,
    IFCP_FUNC_LED_RED_PMU_CTRL = 50,
    IFCP_FUNC_LED_GREEN_PMU_CTRL = 51,
    IFCP_FUNC_LED_BLUE_PMU_CTRL = 52,
    IFCP_FUNC_BUTT
} IFCP_FUNC_E;

BSP_U32 BSP_IFCP_RegFunc(IFCP_FUNC_E enFuncId, BSP_IFCP_REG_FUNC pFuncCb);
BSP_S32 IFC_Process(BSP_VOID *pMsgBody,BSP_U32 u32Len);
BSP_S32 IFC_Init(void);
BSP_S32 IFCP_Init(void);

/*************************IFC END************************/



/*************************TIMER BEGIN*****************************/

#define BSP_ERR_CLK_NO_FREE_CLK         BSP_DEF_ERR(BSP_MODU_TIMER,(BSP_ERR_SPECIAL + 1)) 
/*****************************************************************************
* �� �� ��  : BSP_USRCLK_Alloc
*
* ��������  : �����û�ʱ��ID
*
* �������  : BSP_S32 * ps32UsrClkId  
* �������  : 
*
* �� �� ֵ  : 
*
* ����˵��  : 
*
*****************************************************************************/
BSP_U32 BSP_USRCLK_Alloc(BSP_S32 * ps32UsrClkId);

/*****************************************************************************
* �� �� ��  : BSP_USRCLK_Free
*
* ��������  : �ͷ��û�ʱ��
*
* �������  : BSP_S32 s32UsrClkId  
* �������  : 
*
* �� �� ֵ  : 
*
* ����˵��  : 
*
*****************************************************************************/
BSP_U32 BSP_USRCLK_Free(BSP_S32 s32UsrClkId);

/*****************************************************************************
* �� �� ��  : BSP_USRCLK_RateGet
*
* ��������  : This routine returns the interrupt rate of the system aux clock.
*
* �������  : BSP_S32 s32UsrClkid  which user clock the interrup routine belongs to
* �������  : BSP_S32 * pu32ClkRate  clk rate
* �� �� ֵ  : OK&������
*
* �޸ļ�¼  : 2009��1��20��   liumengcun  creat
*****************************************************************************/
extern BSP_S32 BSP_USRCLK_RateGet (BSP_S32 s32UsrClkId, BSP_S32 * pu32ClkRate);

/*****************************************************************************
* �� �� ��  : BSP_USRCLK_TimerStart
*
* ��������  : ��������Timer��ʱ��.
*
* �������  : s32UsrClkid   Timer Id
*             u32Cycles   Timer�Ĵ����ļ���ֵ
* �������  : ��
* �� �� ֵ  : OK&ERROR
*
* �޸ļ�¼  : 2009��2��24��   liumengcun  creat
*****************************************************************************/
extern BSP_S32    BSP_USRCLK_TimerStart(BSP_S32 s32UsrClkid,BSP_U32 u32Cycles);

/*****************************************************************************
* �� �� ��  : BSP_USRCLK_TimerStop
*
* ��������  : �رյ���Timer��ʱ��.
*
* �������  : s32UsrClkid   Timer Id
* �������  : ��
* �� �� ֵ  : ��.
*
* �޸ļ�¼  : 2009��2��24��   liumengcun  creat
*****************************************************************************/
extern BSP_S32    BSP_USRCLK_TimerStop(BSP_S32 s32UsrClkid);

/*****************************************************************************
* �� �� ��  : BSP_USRCLK_TimerValue
*
* ��������  : ��������Timer��ʱ��.
*
* �������  : s32UsrClkid   Timer Id
* �������  : Value      ��ǰTimer value�Ĵ����ļ���ֵ
* �� �� ֵ  : OK&������
*
* �޸ļ�¼  : 2009��2��24��   liumengcun  creat
*****************************************************************************/
extern BSP_U32  BSP_USRCLK_TimerValue(BSP_S32 s32UsrClkId, BSP_U32 *pu32Value);

/*****************************************************************************
* �� �� ��  : BSP_USRCLK_TimerMilliSecStart
*
* ��������  : �Ժ���Ϊ��λ��������Timer��ʱ��.
*
* �������  : s32UsrClkid        Timer Id
*             u32MilliSecond   ���ö�ʱ����ʱ�ĺ���ֵ
* �������  : ��
* �� �� ֵ  : OK&����������
*
* �޸ļ�¼  : 2009��2��24��   liumengcun  creat
*****************************************************************************/
extern BSP_S32    BSP_USRCLK_TimerMilliSecStart(BSP_S32 s32UsrClkid ,BSP_U32 u32MilliSecond);

/*****************************************************************************
* �� �� ��  : BSP_USRCLK_TimerMilliSecValue
*
* ��������  : ��õ�ǰTimer�ĺ���ֵ.
*
* �������  : s32UsrClkid        Timer Id
* �������  : BSP_U32 * pu32Value ��ǰTimer value�Ĵ����ĺ���ֵ
* �� �� ֵ  : OK&����������
*
* �޸ļ�¼  : 2009��2��24��   liumengcun  creat
*****************************************************************************/
extern BSP_U32 BSP_USRCLK_TimerMilliSecValue(BSP_S32 s32UsrClkId ,BSP_U32 * pu32Value);

/*****************************************************************************
* �� �� ��  : sysTimestampRateSet
*
* ��������  : This routine sets the interrupt rate of the timestamp clock.  It does 
*             not enable system clock interrupts unilaterally, but if the timestamp is currently enabled, the clock is disabled and then 
*             re-enabled with the new rate.  Normally it is called by usrRoot() 
*             in usrConfig.c.
*
* �������  : int ticksPerSecond   number of clock interrupts per second 
* �������  : ��
* �� �� ֵ  : OK, or ERROR if the tick rate is invalid or the timer cannot be set.
*
* �޸ļ�¼  : 2009��1��20��   liumengcun  creat

*****************************************************************************/
BSP_S32 sysTimestampRateSet(BSP_S32 ticksPerSecond);

/*****************************************************************************
* �� �� ��  : sysTimestampRateGet
*
* ��������  : This routine returns the interrupt rate of the timestamp clock.
*
* �������  : ��
* �������  : ��
* �� �� ֵ  : The number of ticks per second of the system clock.
*
* �޸ļ�¼  : 2009��1��20��   liumengcun  creat

*****************************************************************************/
BSP_S32 sysTimestampRateGet (BSP_VOID);

/*************************TIMER END*****************************/

/*************************SCI BEGIN*****************************/
typedef void (*USIMMSCIInfo)(void);
typedef BSP_U32 (*Sci_Event_Func)(BSP_U32 u32Event, BSP_VOID* para);

/*������*/
#define BSP_ERR_SCI_NOTINIT              951
#define BSP_ERR_SCI_INVALIDFREQ          952
#define BSP_ERR_SCI_USEDEFAULT           953
#define BSP_ERR_SCI_INVALIDPARA          954
#define BSP_ERR_SCI_NOCARD               955
#define BSP_ERR_SCI_NODATA               956
#define BSP_ERR_SCI_NOTREADY             957
#define BSP_ERR_SCI_DISABLED             958
#define BSP_ERR_SCI_UNSUPPORTED          959
#define BSP_ERR_SCI_INSERROR             960 
#define BSP_ERR_SCI_GETAPDU_ERROR        961
#define BSP_ERR_SCI_VLTG_HIGHEST         962
#define BSP_ERR_SCI_CURRENT_STATE_ERR    963
#define BSP_ERR_SCI_CURRENT_VLTG_ERR     964
#define BSP_ERR_SCI_TIMESTOP_TIMEOUT     965
#define BSP_ERR_SCI_BUFF_OVERRUN         967

/*�ص�����ע���¼�����*/
#define SCI_EVENT_CARD_IN                0x1
#define SCI_EVENT_CARD_OUT               0x2
#define SCI_EVENT_CARD_DEACTIVE_SUCCESS  0x4
#define SCI_EVENT_CARD_RESET_SUCCESS     0x8
#define SCI_EVENT_CARD_READ_DATA         0x10
#define SCI_EVENT_CARD_TX_ERR            0x20

#define SCI_DEF_CARD_OK     0x0 /* ������������ʹ��*/
#define SCI_DEF_CARD_ERROR  0x1   /* �޿����߿��쳣*/


/*************************SCI END*******************************/

/*************************PMU BEGIN*****************************/

/* ������ */
#define BSP_ERR_PMU_PARA_INVALID      BSP_DEF_ERR(BSP_MODU_SPI, 0x50)
#define BSP_ERR_PMU_ERROR_INIT        BSP_DEF_ERR(BSP_MODU_SPI, 0x51)   
#define BSP_ERR_PMU_SPI_NOT_INIT      BSP_DEF_ERR(BSP_MODU_SPI, 0x52)
#define BSP_ERR_PMU_NOT_INIT          BSP_DEF_ERR(BSP_MODU_SPI, 0x53)

/* PMU�˼�ͨ�Ź��� */
/* ����Դ���� */
typedef enum _tagePmuCtrlSrType
{
    E_PMU_CTRL_SR_TYPE_LDO = 0,
    E_PMU_CTRL_SR_TYPE_BUCK,
    E_PMU_CTRL_SR_TYPE_DR,
    E_PMU_CTRL_SR_TYPE_BOTTOM
}ePmuCtrlSrType;

/* �������� */
typedef enum _tagePmuCtrlType
{
    E_PMU_CTRL_TYPE_VOL_CUR_SET= 0,
    E_PMU_CTRL_TYPE_ONOFF,
    E_PMU_CTRL_TYPE_BOTTOM
}ePmuCtrlType;

typedef struct _tagStPmuCtrl
{
    ePmuCtrlSrType  eSrType;
    ePmuCtrlType    eCtrlType;
    BSP_U32         id;         /* LDO/BUCK/DR�� */
    union 
    {
        BSP_U32 value;  /* ��ѹ�����ֵ */
        BSP_BOOL bOn;   /* �Ƿ�� */
    }param;
}stPmuCtrl;

/*****************************************************************************
* �� �� ��  : BSP_PMU_CtrlCb
*
* ��������  : ��A�˵��õ�PMU���ƺ���
*
* �������  : 
* �������  : 
*
* �� �� ֵ  : 
*
* ����˵��  : 
*
*****************************************************************************/
BSP_S32 BSP_PMU_CtrlCb( BSP_VOID *pMsgBody,BSP_U32 u32Len);

/*****************************************************************************
* �� �� ��  : BSP_PMU_LDOOff
*
* ��������  : �ر�PMU LDO���
*
* �������  : 
* �������  : 
*
* �� �� ֵ  : 
*
* ����˵��  : 
*
*****************************************************************************/
BSP_S32 BSP_PMU_LDOOff( BSP_U8 LdoID );

/*****************************************************************************
* �� �� ��  : BSP_PMU_LDOOn
*
* ��������  : ��PMU LDO���
*
* �������  : 
* �������  : 
*
* �� �� ֵ  : 
*
* ����˵��  : 
*
*****************************************************************************/
BSP_S32 BSP_PMU_LDOOn( BSP_U8 LdoID );

/*****************************************************************************
* �� �� ��  : BSP_PMU_BuckOff
*
* ��������  : �ر�PMU��Buck
*
* �������  : BuckID, Buck�ţ���1��ʼ
* �������  : 
*
* �� �� ֵ  : 
*
* ����˵��  : 
*
*****************************************************************************/
BSP_S32 BSP_PMU_BuckOff( BSP_U8 BuckID );

/*****************************************************************************
* �� �� ��  : BSP_PMU_BuckOn
*
* ��������  : ��PMU��Buck
*
* �������  : BuckID, Buck�ţ���1��ʼ
* �������  : 
*
* �� �� ֵ  : 
*
* ����˵��  : 
*
*****************************************************************************/
BSP_S32 BSP_PMU_BuckOn( BSP_U8 BuckID );

/*****************************************************************************
* �� �� ��  : BSP_PMU_DROff
*
* ��������  : DR�򿪹رտ���
*
* �������  : DR_ID,DR���,��1��ʼ
* �������  : 
*
* �� �� ֵ  : 
*
* ����˵��  : 
*
*****************************************************************************/
BSP_S32 BSP_PMU_DROff(BSP_U8 DR_ID);

/*****************************************************************************
* �� �� ��  : BSP_PMU_DROn
*
* ��������  : DR��
*
* �������  : DR_ID,DR���,��1��ʼ
* �������  : 
*
* �� �� ֵ  : 
*
* ����˵��  : 
*
*****************************************************************************/
BSP_S32 BSP_PMU_DROn(BSP_U8 DR_ID);

/*****************************************************************************
* �� �� ��  : BSP_PMU_LDOVoltGet
*
* ��������  : ��ȡLDOͨ���ĵ�ѹֵ
*
* �������  : LdoID��LDOͨ��
*             pusVoltValue����ѹֵָ�룬����ʵ�ʵ�ѹ����100
* �������  : 
*
* �� �� ֵ  : 
*
* ����˵��  : 
*
*****************************************************************************/
BSP_S32 BSP_PMU_LDOVoltGet(BSP_U8 ucLDO);

/*****************************************************************************
* �� �� ��  : BSP_PMU_LDOVoltSet
*
* ��������  : ����PMU LDO��ѹ���ֵ
*
* �������  : LdoID��LDOͨ��
*             vltg����ѹֵ������ʵ�ʵ�ѹ����100
* �������  : 
*
* �� �� ֵ  : 
*
* ����˵��  : 
*
*****************************************************************************/
BSP_S32 BSP_PMU_LDOVoltSet(BSP_U8 LdoID, BSP_U16 vltg);

/*****************************************************************************
* �� �� ��  : BSP_PMU_BuckVoltSet
*
* ��������  : ����PMU BUCK��ѹ���ֵ
*
* �������  : buckID��BUCKͨ��
*             vltg����ѹֵ������ʵ�ʵ�ѹ����100
* �������  : 
*
* �� �� ֵ  : 
*
* ����˵��  : 
*
*****************************************************************************/
BSP_S32 BSP_PMU_BuckVoltSet(BSP_U8 buckID, BSP_U16 vltg);
/*****************************************************************************
* �� �� ��  : BSP_PMU_BuckVoltGet
*
* ��������  : ����PMU BUCK��ѹ���ֵ
*
* �������  : buckID��BUCKͨ��
*
* �������  : 
*
* �� �� ֵ  : 
* �� �� ֵ  : ��ѹֵ,����ʵ�ʵ�ѹ����100
*               -1,����
*
* ����˵��  : 
*
*****************************************************************************/
BSP_S32 BSP_PMU_BuckVoltGet(BSP_U8 buckID);
/*******************************************************************************
  Function:     BSP_PMU_DrCurrentSet
  Description:  �������ø�·����Դ���������

  Input:        Vs_ID: PMU����Դ��ţ�ȡֵ��Χ��PMU_ISRC���壺
                          DR1~DR3��
                ImA:      Ŀ�����ֵ����λ:mA����ȡֵ��Χ��
                          3mA,6mA,9mA,12mA,15mA,18mA,21mA,24mA
  Output:
  Return:       BSP_OK:    �����ɹ�
                BSP_ERROR: ����ʧ��
  Others:
*******************************************************************************/
int BSP_PMU_DrCurrentSet(int I_ID, BSP_U16 ImA);
/*******************************************************************************
  Function:     BSP_PMU_DrCurrentGet
  Description:  ���ڲ�ѯ��·����Դ���������

  Input:        I_ID: PMU����Դ��ţ�ȡֵ��Χ DR1~DR3 (0~2)
  Output:
  Return:       ��ѯ����Դ���������ֵ����λ:mA��
                Ϊ��ֵ��ERROR����ʾ��ѯʧ��
  Others:
*******************************************************************************/
int BSP_PMU_DrCurrentGet(int I_ID);
/**************************************************************************
  ȫ�ֱ�������
**************************************************************************/


/**************************************************************************
  ö�ٶ���
**************************************************************************/
/*DVFS type*/
typedef enum tagPMU_DVFS_TYPE_E
{
    DVFS_ARMCORE = 0,
    DVFS_CEVACORE,
    DVFS_BUTTOM 
}PMU_DVFS_TYPE_E;

/*DVFS Voltage type*/
typedef enum tagPMU_DVFS_VOLTAGE_TYPE_E
{
    DVFS_VOLTAGE_1000 = 0,
    DVFS_VOLTAGE_1100,
    DVFS_VOLTAGE_1150,
    DVFS_VOLTAGE_1200,
    DVFS_VOLTAGE_1250,
    DVFS_VOLTAGE_1350,
    DVFS_VOLTAGE_1500,
    DVFS_VOLTAGE_1800,
    DVFS_VOLTAGE_BUTTOM 
}PMU_DVFS_VOLTAGE_TYPE_E;
    
 /*DEVICE type*/
typedef enum tagPMU_DEVS_TYPE_E
{
    DEVS_RF = 0,
    DEVS_ABB,
    DEVS_SD,
    DEVS_SIM,
    DEVS_LCD,
    DEVS_BUTTOM 
}PMU_DEVS_TYPE_E;

    
/*DEVICE CTRL type*/
typedef enum tagPMU_DEVS_CTRL_TYPE_E
{
    CTRL_ON = 0,
    CTRL_OFF,
    CTRL_BUTTOM 
}PMU_DEVS_CTRL_TYPE_E;

 /*OCP type*/
typedef enum tagPMU_OCP_TYPE_E
{
    OCP_ONLYINT_NOAUTOOFF = 0,
    OCP_INT_AND_AUTOOFF,
    OCP_AUTOOFF,
    OCP_BUTTOM 
}PMU_OCP_TYPE_E;

 /* VOLTAGE ADJUST REG */
typedef enum tagPMU_VOL_SCI_E
{
    PMU_VOL_UP = 0, /* ��1.8��������3.0��*/
    PMU_VOL_DOWN,   /* ��3.0������1.8��*/
    PMU_VOL_SCI_BUTTOM
}PMU_VOL_SCI_E;


/* LED MODE */
typedef enum tagPMU_LED_STATE_E
{
    PMU_LED_FLASH_POWER_OFF = 0,    /* ȫ������ */
    PMU_LED_FLASH_BLUE_ON,          /* ���Ƴ��� */
    PMU_LED_FLASH_BLUE_SLOW,        /* �������� */
    PMU_LED_FLASH_BLUE_FAST,        /* ���ƿ��� */
    PMU_LED_FLASH_BLUE_ONCE,        /* ���Ƶ��� */
    PMU_LED_FLASH_BLUE_TWICE,       /* ����˫�� */
    PMU_LED_FLASH_BLUE_FOUR,        /* �������� */
    
    PMU_LED_FLASH_RED_ON,           /* ��Ƴ��� */
    PMU_LED_FLASH_RED_SLOW,         /* ������� */
    PMU_LED_FLASH_RED_FAST,         /* ��ƿ��� */
    PMU_LED_FLASH_RED_ONCE,         /* ��Ƶ��� */
    PMU_LED_FLASH_RED_TWICE,        /* ���˫�� */
    PMU_LED_FLASH_RED_FOUR,         /* ������� */
    
    PMU_LED_FLASH_GREEN_ON,         /* �̵Ƴ��� */
    PMU_LED_FLASH_GREEN_SLOW,       /* �̵����� */
    PMU_LED_FLASH_GREEN_FAST,       /* �̵ƿ��� */
    PMU_LED_FLASH_GREEN_ONCE,       /* �̵Ƶ��� */
    PMU_LED_FLASH_GREEN_TWICE,      /* �̵�˫�� */
    PMU_LED_FLASH_GREEN_FOUR,       /* �̵����� */
    
    PMU_LED_FLASH_CYANBLUE_ON,      /* ��Ƴ��� */
    PMU_LED_FLASH_CYANBLUE_SLOW,    /* ������� */
    PMU_LED_FLASH_CYANBLUE_FAST,    /* ��ƿ��� */
    PMU_LED_FLASH_CYANBLUE_ONCE,    /* ��Ƶ��� */
    PMU_LED_FLASH_CYANBLUE_TWICE,   /* ���˫�� */
    PMU_LED_FLASH_CYANBLUE_FOUR,    /* ������� */

    PMU_LED_STATE_BUTT
}PMU_LED_STATE_E;


/**************************************************************************
  STRUCT����
**************************************************************************/

/*SPI��ID��ASIC��ʹ��3ƬSPI*/
typedef enum tagSPI_DEV_ID
{
    SPI_ID0,
#if defined(CHIP_BB_HI6620) || defined(CHIP_BB_HI6210) ||(defined(BOARD_FPGA))
    SPI_ID1,
#endif
    SPI_ID_MAX
}SPI_DEV_ID_E;


/*ÿ��SPI�ϵ�Ƭѡ�ţ���ǰÿ��SPI��4��Ƭѡ*/
typedef enum tagSPI_DEV_CS
{
    SPI_DEV_CS0,
    SPI_DEV_CS1,
    SPI_DEV_CS2,
    SPI_DEV_CS3,
    SPI_DEV_CS_MAX,
    NO_OWNER = -1
}SPI_DEV_CS_E;


/*���ݴ��䷽ʽ������DMA��ʽ����ѭ��ʽ*/
typedef enum tagSPI_SENDMOD
{
    SPI_SENDMOD_POLLING,                                                          
    SPI_SENDMOD_DMA,
    SPI_SENDMOD_MAX
}RXTX_MODE_E;


/* ��¼SPI��ID��Ƭѡ�ŵĽṹ��*/
typedef struct tagSPI_DEV_STRUCTION
{
    SPI_DEV_ID_E enSpiId;
    SPI_DEV_CS_E enSpiCs;
}SPI_DEV_S;

/* ���������ֳ��� */
typedef enum tagspi_CommandLen                                                       
{
    SPI_COMMANDSIZE_1BITS =  0x0,     /*  1 bit command */
    SPI_COMMANDSIZE_2BITS =  0x1,     /*  2 bit command */
    SPI_COMMANDSIZE_3BITS =  0x2,     /*  3 bit command */
    SPI_COMMANDSIZE_4BITS  = 0x3,     /*  4 bit command */                           
    SPI_COMMANDSIZE_5BITS  = 0x4,     /*  5 bit command */                           
    SPI_COMMANDSIZE_6BITS  = 0x5,     /*  6 bit command */                           
    SPI_COMMANDSIZE_7BITS  = 0x6,     /*  7 bit command */                           
    SPI_COMMANDSIZE_8BITS  = 0x7,     /*  8 bit command */                           
    SPI_COMMANDSIZE_9BITS  = 0x8,     /*  9 bit command */                           
    SPI_COMMANDSIZE_10BITS = 0x9,     /* 10 bit command */                           
    SPI_COMMANDSIZE_11BITS = 0xA,     /* 11 bit command */                           
    SPI_COMMANDSIZE_12BITS = 0xB,     /* 12 bit command */                           
    SPI_COMMANDSIZE_13BITS = 0xC,     /* 13 bit command */                           
    SPI_COMMANDSIZE_14BITS = 0xD,     /* 14 bit command */                           
    SPI_COMMANDSIZE_15BITS = 0xE,     /* 15 bit command */                           
    SPI_COMMANDSIZE_16BITS = 0xF,      /* 16 bit command */ 
    SPI_COMMANDSIZE_MAX
} SPI_COMMAND_LEN_E;

/*����֡����*/
typedef enum tagspi_DataLen                                                       
{                                                                              
    SPI_DATASIZE_4BITS  = 0x3,     /*  4 bit data */                           
    SPI_DATASIZE_5BITS  = 0x4,     /*  5 bit data */                           
    SPI_DATASIZE_6BITS  = 0x5,     /*  6 bit data */                           
    SPI_DATASIZE_7BITS  = 0x6,     /*  7 bit data */                           
    SPI_DATASIZE_8BITS  = 0x7,     /*  8 bit data */                           
    SPI_DATASIZE_9BITS  = 0x8,     /*  9 bit data */                           
    SPI_DATASIZE_10BITS = 0x9,     /* 10 bit data */                           
    SPI_DATASIZE_11BITS = 0xA,     /* 11 bit data */                           
    SPI_DATASIZE_12BITS = 0xB,     /* 12 bit data */                           
    SPI_DATASIZE_13BITS = 0xC,     /* 13 bit data */                           
    SPI_DATASIZE_14BITS = 0xD,     /* 14 bit data */                           
    SPI_DATASIZE_15BITS = 0xE,     /* 15 bit data */                           
    SPI_DATASIZE_16BITS = 0xF,     /* 16 bit data */
    SPI_DATASIZE_MAX
} SPI_DATA_LEN_E;    

/* SPI֧�ֵ�Э��*/
typedef enum tagSPI_PROT
{
    SPI_PROT_SPI,
    SPI_PROT_SSP,
    SPI_PROT_NSM,
    SPI_PROT_MAX
}SPI_PROT_E;

typedef enum tagSPI_SCPOL
{
    SPI_SCPOL_LOW, /*�½��ش���*/
    SPI_SCPOL_HIGH,/*�����ش���*/
    SPI_SCPOL_MAX
}SPI_SCPOL_E;

/*SPI����豸���Խṹ�壬�����豸��Ҫ�������ֳ��ȣ�����֡���ȣ�ʹ��Э��� */
typedef struct tagSPI_DEV_ATTR
{
    SPI_COMMAND_LEN_E enCommandLen;
    SPI_DATA_LEN_E enDataLen;
    SPI_PROT_E enSpiProt;
    SPI_SCPOL_E enSpiScpol;
    BSP_U16 u16SpiBaud;
}SPI_DEV_ATTR_S;

/*��¼��SPI���ݴ��������Ϣ�Ľṹ�壬��Ա����Ҫ��д��SPI�ţ�Ƭѡ�ţ�����ģʽ��
  ���ݵ�ַ�����ݳ��ȵ�*/                                     
typedef struct tagSPI_DATA_HANDLE
{
    SPI_DEV_ID_E enSpiID;
    SPI_DEV_CS_E enCsID;
    RXTX_MODE_E enMode;
    void *pvCmdData;
    BSP_U32 u32length;
}SPI_DATA_HANDLE_S;

/*****************************************************************************
* �� �� ��  : BSP_PMU_ShutDown
*
* ��������  : ���ӿ����ڹر�PMU
*
* �������  : 
* �������  : ��
*
* �� �� ֵ  :
* �޸ļ�¼  : 
*
*****************************************************************************/
BSP_VOID BSP_PMU_ShutDown(void);
/*****************************************************************************
* �� �� ��  : BSP_PMU_DVFS_VolAdjust
*
* ��������  : DVFS ��ѹ����
*
* �������  : 
* �������  : 
*
* �� �� ֵ  :
* �޸ļ�¼  : 
*
*****************************************************************************/
BSP_S32 BSP_PMU_DVFS_VolAdjust(PMU_DVFS_TYPE_E enDvfsType,PMU_DVFS_VOLTAGE_TYPE_E enVoltage);
/*****************************************************************************
* �� �� ��  : BSP_PMU_OCPConfig
*
* ��������  : OCPC����
*
* �������  : 
* �������  : 
*
* �� �� ֵ  :
* �޸ļ�¼  : 
*
*****************************************************************************/
BSP_S32 BSP_PMU_OCPConfig(PMU_OCP_TYPE_E enOcpType);
/*****************************************************************************
* �� �� ��  : BSP_PMU_DEVS_Ctrl
*
* ��������  : DEVS������
*
* �������  : 
* �������  : 
*
* �� �� ֵ  :
* �޸ļ�¼  : 
*
*****************************************************************************/
BSP_S32 BSP_PMU_DEVS_Ctrl(PMU_DEVS_TYPE_E enDevsType, PMU_DEVS_CTRL_TYPE_E enCtrlType);
/*****************************************************************************
* �� �� ��  : BSP_PMU_VolAdjust_ForSci
*
* ��������  : SCI��ѹ����
*
* �������  : 
* �������  : 
*
* �� �� ֵ  :
* �޸ļ�¼  : 
*
*****************************************************************************/
BSP_S32 BSP_PMU_VolAdjust_ForSci(PMU_VOL_SCI_E enSCIVolCfg);
/*****************************************************************************
* �� �� ��  : BSP_PMU_VolAdjust_ForSDIO
*
* ��������  : SDIO��ѹ����
*
* �������  : 
* �������  : 
*
* �� �� ֵ  :
* �޸ļ�¼  : 
*
*****************************************************************************/
BSP_S32 BSP_PMU_VolAdjust_ForSDIO(PMU_VOL_SCI_E enSCIVolCfg);

/*****************************************************************************
* �� �� ��  : BSP_PMU_CutOff_ForDrx
*
* ��������  : �͹��ĳ���PMU�µ�
*
* �������  : ��
* �������  : ��
*
* �� �� ֵ  :
* �޸ļ�¼  : ��ȷ/����
*
*****************************************************************************/
BSP_S32 BSP_PMU_CutOff_ForDrx(void);

/*****************************************************************************
* �� �� ��  : BSP_PMU_SetLED
*
* ��������  : ����LTD�ƵĿ���
*
* �������  : enLEDType         LED0
*                               LED1
*                               LED2
*             enPower           PMU_LED_POWER_ON
*                               PMU_LED_POWER_OFF
* �������  : ��
*
* �� �� ֵ  : OK�����óɹ�
*             ERROR������ʧ��
*****************************************************************************/
BSP_S32 BSP_PMU_SetLedState(PMU_LED_STATE_E eLedState);


/*****************************************************************************
 �� �� ��  : BSP_PMU_GetPMUState
 ��������  : ��ȡPMUģ�鿪����ʽ�����״̬����ص����������λ״̬��
 �������  : �ޡ�
 �������  : Pmu_State :������ʽ�����״̬����ص����������λ״̬��
 �� �� ֵ  : 0:  �����ɹ���
             -1������ʧ�ܡ�
 ע��������ýӿڽ���PS��PC������ʹ�ã�Ŀǰû��Ӧ�ã��ݱ�����
*****************************************************************************/
extern unsigned int BSP_PMU_GetPMUState(void*  Pmu_State);

/*************************PMU END*****************************/

/*************************INT BEGIN*****************************/

/*****************************************************************************
 * �� �� ��  : BSP_INT_DisConnect
 *
 * ��������  : ȡ��ע��ĳ���ж�
 *
 * �������  : VOIDFUNCPTR * vector �ж������ţ�ȡֵ��Χ0��40
 *           VOIDFUNCPTR routine  �жϷ������
 *           INT32 parameter      �жϷ���������
 * �������  : ��
 *
 * �� �� ֵ  : OK&ERROR
 *
 * �޸ļ�¼  : 2009��3��5��   zhanghailun  creat
 *****************************************************************************/
BSP_S32 BSP_INT_DisConnect  (VOIDFUNCPTR * vector,VOIDFUNCPTR routine, BSP_S32 parameter);

/*****************************************************************************
 * �� �� ��  : BSP_INT_Lock
 *
 * ��������  : ���������ж�
 *
 * �������  : ��
 * 
 * �������  : ��
 *
 * �� �� ֵ  : �ж�����
 *
 * �޸ļ�¼  : 2009��3��5��   zhanghailun  creat
 *****************************************************************************/
BSP_S32 BSP_INT_Lock (BSP_VOID);

/*****************************************************************************
 * �� �� ��  : BSP_INT_UnLock
 *
 * ��������  : ���ж�
 *
 * �������  : INT32 ulLocKKey  �ж����ţ�ǰһ��BSP_INT_Lock�ķ���ֵ
 * 
 * �������  : ��
 *
 * �� �� ֵ  : �ж�����
 *
 * �޸ļ�¼  : 2009��3��5��   zhanghailun  creat
 *****************************************************************************/
BSP_VOID BSP_INT_UnLock ( BSP_S32 s32LocKKey);

/*************************INT END*****************************/

/*************************WDT BEGIN*****************************/

#if defined (BSP_CORE_MODEM)  || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
/* ���Ź���ι��ģʽ */
#define BSP_HW_WATCHDOG       0
#define BSP_SW_WATCHDOG       1

#if defined(CHIP_BB_HI6620) || defined(CHIP_BB_HI6210)
/* ���Ź��߼�ID */
typedef enum WDT_LOGIC_ID_E
{
    WDT_DEF_WATCHDOG0,
    WDT_DEF_WATCHDOG_MAX

}WDT_LOGIC_ID;

#else

/*���Ź�Ӳ����Ϣ���ݽṹ*/
typedef struct tagWDT_ID_INFO_S
{
    BSP_U32 u32PartNum;
    BSP_U32 u32DesignerID;
    BSP_U32 u32Version;
    BSP_U32 u32Config;
    BSP_U32 u32PrimeCellID;
}WDT_ID_INFO_S;

typedef BSP_VOID(*wdt_timeout_cb)(void);
#endif
#endif

/*************************SD BEGIN*****************************/

/*****************************************************************************
* �� �� ��  : SDIO_check_card
*
* ��������  :
*
* �������  : BSP_S32 s32CardNo
* �������  :
*
* �� �� ֵ  :
*
* ����˵��  :
*
*****************************************************************************/
BSP_S32 SDIO_check_card(BSP_S32 s32CardNo);

/*****************************************************************************
* �� �� ��  : read_write_blkdata
*
* ��������  : 

* �������  : 

* �������  : 
* �� �� ֵ  : 
*
* �޸ļ�¼  : 

*****************************************************************************/
BSP_S32  read_write_blkdata(BSP_S32 s32CardNo, BSP_U32 u32Addr,
                            BSP_U32 u32DataSize,
                            BSP_U8  *pu8DataBuff,
                            BSP_U8  *pu8CmdRespBuff,
                            BSP_U8  *pu8ErrRespBuff,
                            BSP_VOID (*callback)(BSP_U32 u32ErrData),
                            BSP_S32 s32NoOfRetries,
                            BSP_S32 s32Flags);

/*****************************************************************************
* �� �� ��  : sd_get_status
*
* ��������  : ����λ��ѯ
*
* �������  : void
* �������  : NA
*
* �� �� ֵ  : 0 : ��λ��-1: ����λ
*
* ����˵��  : NA
*
*****************************************************************************/
extern int sd_get_status(void);

/*****************************************************************************
* �� �� ��  : sd_get_capacity
*
* ��������  : ��������ѯ
*
* �������  : void
* �������  : NA
*
* �� �� ֵ  : 0 : ʧ�ܣ�>0: ������
*
* ����˵��  : NA
*
*****************************************************************************/
extern int sd_get_capacity(void);

/*****************************************************************************
* �� �� ��     : sd_sg_init_table
*
* ��������  : SD������ݴ���sg list��ʼ��
*
* �������  :    const void *buf         ��������buffer��ַ
                 unsigned int buflen    ��������buffer��С��С��32K����СΪ512B����������
                                        ����32K����СΪ32KB�������������bufferΪ128K��
                            
* �������  : NA
*
* �� �� ֵ  : 0 : �ɹ�������: ʧ��
*
* ����˵��  : NA
*
*****************************************************************************/
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
#else
extern int sd_sg_init_table(const void *buf,unsigned int buflen);
#endif

/*****************************************************************************
* �� �� ��  : sd_multi_transfer
*
* ��������  : SD������ݴ��䡣
*
* �������  : unsigned dev_addr       ��д���SD block ��ַ
              unsigned blocks         ��д���block����
              unsigned blksz          ÿ��block�Ĵ�С����λ�ֽ�
              int write               ��д��־λ��д:1 ; ��:0
* �������  : NA
*
* �� �� ֵ  : 0 : �ɹ�������: ʧ��
*
* ����˵��  : NA
*
*****************************************************************************/
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
#else
extern int sd_multi_transfer(unsigned dev_addr, unsigned blocks, unsigned blksz, int write);
#endif

/*************************SD END**************************************/
#ifdef BSP_CPE
typedef enum tagCPE_SIGNAL_INTENSITY_E
{ 
    SIGNALNULL,
    SIGNALLOW,
    SIGNALMIDDLE,
    SIGNALHIGH,
    SIGNALMAX
}CPE_SIGNAL_INTENSITY_E;

typedef enum tagCPE_SIGNAL_STATUS_E
{
     SIGNAL_STATUS_ABNORMAL,    //�ź��쳣
     SIGNAL_STATUS_NORMAL,      //�ź�����
     SIGNAL_STATUS_MAX
}CPE_SIGNAL_STATUS_E;

typedef enum tagGPIO_CTRL_E
{
    GPIO_ON,
    GPIO_OFF,
    GPIO_MAX
}GPIO_CTRL_E;

#endif
/*************************DRX BEGIN***********************************/

/*PSע�ắ������*/
typedef BSP_U8   (*BSPRegDRXFunc)(BSP_VOID);

typedef enum tagDRX_SLEEP_MODE_E
{
    DRX_WEEK_SLEEP_MODE_E = 0x0,
    DRX_DEEP_SLEEP_MODE_E = 0x1,
    DRX_WEEK2_SLEEP_MODE_E = 0x2,
    DRX_NO_SLEEP_MODE_E = 0x3
}DRX_SLEEP_MODE_E;


typedef enum tagDRX_TIMER_ID_E
{
    DRX_LTESYS_TIMER = 0x0,
    DRX_LTET3412_TIMER,    
    DRX_LTEVPLMN_TIMER,    
    DRX_LTETSRHC_TIMER,    
    DRX_LTETA_TIMER,    
    DRX_DEEP_SLEEP_TIMER,    
    DRX_LTE_PS32K_TIMER,
    DRX_LTE_PS32K_BASETIMER,
    DRX_LTE_NO_TIMER
}DRX_TIMER_ID_E;

typedef enum tagDRX_TIMER_MODE_E
{
    DRX_TIMER_FREE_MODE = 0x0,
    DRX_TIMER_USER_MODE
}DRX_TIMER_MODE_E;

typedef enum tagDRX_REG_CB_E
{
    DRX_PS_GET_SLEEP_INFO = 0x0,
    DRX_RTC_TIME_START = 0x1,
    DRX_RTC_TIME_END = 0x2
}DRX_REG_CB_E;

typedef enum tagPWRCTRL_MODULE_E
{
    PWRCTRL_MODU_BOOTROM,       /*0x0*/
    PWRCTRL_MODU_EFUSE,
    PWRCTRL_MODU_SSDMA,
    PWRCTRL_MODU_LBBP,
    PWRCTRL_MODU_LDSP,      
    PWRCTRL_MODU_HSUART,
    PWRCTRL_MODU_EMI,  
    PWRCTRL_MODU_SDCC,
    PWRCTRL_MODU_USBHSIC,
    PWRCTRL_MODU_SOCP,
    PWRCTRL_MODU_GMAC,          /* 0xa */
    PWRCTRL_MODU_SCI0,
    PWRCTRL_MODU_SCI1,
    PWRCTRL_MODU_UICC,
    PWRCTRL_MODU_USBOTG_BC,
    PWRCTRL_MODU_MMC0,              /*0x10*/
    PWRCTRL_MODU_MMC1,
    PWRCTRL_MODU_MMC2,
    PWRCTRL_MODU_USBOTG,
    PWRCTRL_MODU_WDT,
    PWRCTRL_MODU_TCSSI,
    PWRCTRL_MODU_IPF,
    PWRCTRL_MODU_CIPHER,
    PWRCTRL_MODU_BBPCOMM,
    PWRCTRL_MODU_TENSI,             /*0x1a*/
    PWRCTRL_MODU_CORESIGHT,
    PWRCTRL_MODU_ACP,
    PWRCTRL_MODU_I2C,
    PWRCTRL_MODU_SPI1,
    PWRCTRL_MODU_DMAC,
    PWRCTRL_MODU_LSIO,                  /*0x20*/
    PWRCTRL_MODU_HIFI,
    PWRCTRL_MODU_TSENSOR,
    PWRCTRL_MODU_CICOM,
    PWRCTRL_MODU_EDMA,
    PWRCTRL_MODU_HDLC,
    PWRCTRL_MODU_DM,
    PWRCTRL_MODU_DWSSI0,
    PWRCTRL_MODU_WGBBP,
    PWRCTRL_MODU_ZSP,
    PWRCTRL_MODU_ALL,   /* �������е�ģ�� */
    PWRCTRL_MODU_MAX    /* �߽�ֵ */
}PWRCTRL_MODULE_E;

typedef enum tagPWC_SLEEP_TYPE_E
{
    PWC_ARM_SLEEP = 0,
    PWC_LIGHT_SLEEP,
    PWC_DEEP_SLEEP,
    PWC_TYPE_BUTTON
}PWC_SLEEP_TYPE_E;

BSP_VOID BSP_PWRCTRL_ClkGateEn(BSP_VOID);
BSP_VOID BSP_PWRCTRL_ClkGateDis(BSP_VOID);
BSP_VOID BSP_PWRCTRL_SetWakeSrc(PWC_SLEEP_TYPE_E enSleepType);

/*****************************************************************************
* �� �� ��  : BSP_PWRCTRL_TimerClose
*
* ��������  : SOC����ʱ�ӹرսӿ�
*
* �������  : 
* �������  : 
* �� �� ֵ   :
*
* �޸ļ�¼  : 

*****************************************************************************/
BSP_S32 BSP_PWRCTRL_TimerClose(PWRCTRL_MODULE_E enModu);

/*****************************************************************************
* �� �� ��  : BSP_PWRCTRL_TimerOpen
*
* ��������  : SOC����ʱ��ʹ�ܽӿ�
*
* �������  : 
* �������  : 
* �� �� ֵ   :
*
* �޸ļ�¼  : 

*****************************************************************************/
BSP_S32 BSP_PWRCTRL_TimerOpen(PWRCTRL_MODULE_E enModu);

/*****************************************************************************
* �� �� ��  : set32KHwTimerMode
*
* ��������  : ��ѯ32KӲ��ʱ�Ӽ�����ֵ
*
* �������  : 
* �������  : 
* �� �� ֵ   :
*
* �޸ļ�¼  : 

*****************************************************************************/
BSP_S32 set32KHwTimerMode(DRX_TIMER_MODE_E eMode);

/*****************************************************************************
* �� �� ��  : get32KHwTimerMode
*
* ��������  : ��ѯ32KӲ��ʱ�Ӽ������Ĺ���ģʽ
*
* �������  : 
* �������  : 
* �� �� ֵ   :
*
* �޸ļ�¼  : 

*****************************************************************************/
DRX_TIMER_MODE_E get32KHwTimerMode(void);

/*****************************************************************************
* �� �� ��  : BSP_DRX_RegCb
*
* ��������  : PSע�ắ��
*
* �������  : 
* �������  : 
* �� �� ֵ   :
*
* �޸ļ�¼  : 

*****************************************************************************/
BSP_VOID BSP_DRX_RegCb (DRX_REG_CB_E enType, BSPRegDRXFunc pFunc);

/*****************************************************************************
* �� �� ��  : usrTimer4Start
*
* ��������  : ����32KӲ��ʱ�Ӷ�ʱ��
*
* �������  : 
* �������  : 
* �� �� ֵ   :
*
* �޸ļ�¼  : 

*****************************************************************************/
BSP_S32 usrTimer4Start(DRX_TIMER_ID_E eTimerId, BSP_U32 u32Count);

/*****************************************************************************
* �� �� ��  : usrTimer4Stop
*
* ��������  : ֹͣ32KӲ��ʱ�Ӷ�ʱ��
*
* �������  : 
* �������  : 
* �� �� ֵ   :
*
* �޸ļ�¼  : 

*****************************************************************************/
BSP_S32 usrTimer4Stop(DRX_TIMER_ID_E eTimerId);

/*****************************************************************************
* �� �� ��  : usrTimer4Value
*
* ��������  : ��ѯ32K BBP ʱ�Ӷ�ʱ��ʣ��ֵ
*
* �������  : 
* �������  : 
* �� �� ֵ   :
*
* �޸ļ�¼  : 

*****************************************************************************/
BSP_S32 usrTimer4Value(DRX_TIMER_ID_E eTimerId);

/*************************DRX END*************************************/

/*************************SPI START***********************************/
/*�����붨��*/
#define BSP_ERR_SPI_MODULE_NOT_INITED BSP_DEF_ERR(BSP_MODU_SPI, BSP_ERR_MODULE_NOT_INITED)
#define BSP_ERR_SPI_INVALID_PARA      BSP_DEF_ERR(BSP_MODU_SPI, BSP_ERR_INVALID_PARA)
#define BSP_ERR_SPI_RETRY_TIMEOUT     BSP_DEF_ERR(BSP_MODU_SPI, BSP_ERR_RETRY_TIMEOUT)

#define BSP_ERR_SPI_SEM_CREATE        BSP_DEF_ERR(BSP_MODU_SPI, 1)
#define BSP_ERR_SPI_SEM_LOCK          BSP_DEF_ERR(BSP_MODU_SPI, 2)
#define BSP_ERR_SPI_SEM_UNLOCK        BSP_DEF_ERR(BSP_MODU_SPI, 3)
#define BSP_ERR_SPI_DATASIZE_INVALID  BSP_DEF_ERR(BSP_MODU_SPI, 4)
#define BSP_ERR_SPI_ATTR_NOTSET       BSP_DEF_ERR(BSP_MODU_SPI, 5)
#define BSP_ERR_SPI_PROT_INVALID      BSP_DEF_ERR(BSP_MODU_SPI, 6)
#define BSP_ERR_SPI_TMOD_INVALID      BSP_DEF_ERR(BSP_MODU_SPI, 7)
#define BSP_ERR_SPI_RECEIVE_POLL      BSP_DEF_ERR(BSP_MODU_SPI, 8)



/*****************************************************************************
* �� �� ��  : BSP_SPI_SetAttr
*
* ��������  : ����SPI�ļĴ��������ÿ��������ֳ��ȡ�����֡���ȵȡ�
*
* �������  : enSpiID        ��Ҫ���õ�SPI�ţ��Լ�������ƬƬѡ�������õ�Ƭѡ�š�
*             pstSpiDevAttr  ��¼SPI����豸���ԵĽṹ��ָ�룬�ṹ���Ա�����豸
                             ��Ҫ�������ֳ��ȣ�����֡���ȣ�ʹ��Э�飬�����ʵȡ�
*
* �������  : ��
*
* �� �� ֵ  : OK    ���ճɹ�
*             ERROR ����ʧ��
*****************************************************************************/
BSP_S32 BSP_SPI_SetAttr(SPI_DEV_S *enSpiID,SPI_DEV_ATTR_S *pstSpiDevAttr);

/*****************************************************************************
* �� �� ��  : BSP_SPI_Write
*
* ��������  : ͨ��SPI���豸д������
*
* �������  : pstWriteData ��¼��SPI���ݴ����й���Ϣ�Ľṹ��ָ�룬��Ա����
                           Ҫ��д��SPI�ţ�Ƭѡ�ţ�����ģʽ��
*             pSendData    �洢���յ����ݻ�����ָ��
*             u32Length    �����յ����ݳ���
*
* �������  : ��
*
* �� �� ֵ  : OK    ���ճɹ�
*             ERROR ����ʧ��
*****************************************************************************/
BSP_S32 BSP_SPI_Write(SPI_DATA_HANDLE_S *pstWriteData,BSP_VOID *pSendData, BSP_U32 u32Length);

/*****************************************************************************
* �� �� ��  : BSP_SPI_Read
*
* ��������  : ͨ��SPI��ȡ�豸����
*
* �������  : pstReadData  ��¼��SPI���ݴ����й���Ϣ�Ľṹ��ָ�룬��Ա����
                           Ҫ��д��SPI�ţ�Ƭѡ�ţ�����ģʽ�ȡ� 
*             u32Length    �����յ����ݳ���
*
* �������  : pRecData     �洢���յ����ݻ�����ָ�롣
*
* �� �� ֵ  : OK    ���ճɹ�
*             ERROR ����ʧ��
*****************************************************************************/
BSP_S32 BSP_SPI_Read(SPI_DATA_HANDLE_S *pstReadData,BSP_VOID *pRecData, BSP_U32 u32Length);

/*****************************************************************************
* �� �� ��  : BSP_SPI_GetAttr
*
* ��������  : ��ȡ��ǰSPI���õ�����
*
* �������  : enSpiId    Ҫ��ѯ��SPI�š�                        
*            
* �������  : pstDevAttr ���SPI���ԵĽṹ��ָ�롣
*
* �� �� ֵ  : OK    ���ճɹ�
*             ERROR ����ʧ��
*****************************************************************************/
BSP_S32 BSP_SPI_GetAttr(SPI_DEV_ID_E enSpiId, SPI_DEV_ATTR_S *pstDevAttr);

/*************************SPI END*************************************/

/*************************IPCM BEGIN**********************************/

 /*****************************************************************************
  * �� �� ��  : BSP_IPC_DebugShow
  *
  * ��������  : ��ά�ɲ�ӿ�
  *
  * �������  : ��  
  * �������  : ��
  *
  * �� �� ֵ  : ��
  *
  * �޸ļ�¼  : 2011��4��11�� wangjing creat
  *****************************************************************************/
 BSP_VOID BSP_IPC_DebugShow(BSP_VOID);

/*�����ǽ���V7R1 FPGAƽ̨�ϲ��ṩ��GU IPC�����ӿ�*/
 /*****************************************************************************
 * �� �� ��  : BSP_GUIPC_SemCreate
 *
 * ��������  : �ź�����������
 *
 * �������  : ��
 * �������  : ��
 *
 * �� �� ֵ  : ��
 *
 * �޸ļ�¼  : 2011��4��11�� wangjing creat
 *****************************************************************************/
BSP_S32 BSP_GUIPC_SemCreate(BSP_U32 u32SignalNum);

/*****************************************************************************
* �� �� ��  : BSP_GUIPC_SemDelete
*
* ��������  : ɾ���ź���
*
* �������  :   BSP_U32 u32SignalNum Ҫɾ�����ź������

* �������  : ��
*
* �� �� ֵ  : OK&ERROR
*
* �޸ļ�¼  : 2011��4��11�� wangjing creat
*****************************************************************************/
BSP_S32 BSP_GUIPC_SemDelete(BSP_U32 u32SignalNum);

/*****************************************************************************
* �� �� ��  : BSP_GUIPC_IntEnable
*
* ��������  : ʹ��ĳ���ж�
*
* �������  :
                BSP_U32 ulLvl Ҫʹ�ܵ��жϺţ�ȡֵ��Χ0��31
* �������  : ��
*
* �� �� ֵ  : OK&ERROR
*
* �޸ļ�¼  : 2011��4��11�� wangjing creat
*****************************************************************************/
BSP_S32 BSP_GUIPC_IntEnable (IPC_INT_LEV_E ulLvl);

/*****************************************************************************
 * �� �� ��  : BSP_GUIPC_IntDisable
 *
 * ��������  : ȥʹ��ĳ���ж�
 *
 * �������  :
                BSP_U32 ulLvl Ҫʹ�ܵ��жϺţ�ȡֵ��Χ0��31
 * �������  : ��
 *
 * �� �� ֵ  : OK&ERROR
 *
 * �޸ļ�¼  : 2011��4��11�� wangjing creat
 *****************************************************************************/
BSP_S32 BSP_GUIPC_IntDisable (IPC_INT_LEV_E ulLvl);

/*****************************************************************************
 * �� �� ��  : BSP_GUIPC_IntConnect
 *
 * ��������  : ע��ĳ���ж�
 *
 * �������  :
               BSP_U32 ulLvl Ҫʹ�ܵ��жϺţ�ȡֵ��Χ0��31
               VOIDFUNCPTR routine �жϷ������
 *             BSP_U32 parameter      �жϷ���������
 * �������  : ��
 *
 * �� �� ֵ  : OK&ERROR
 *
 * �޸ļ�¼  : 2011��4��11�� wangjing creat
 *****************************************************************************/
BSP_S32 BSP_GUIPC_IntConnect  (IPC_INT_LEV_E ulLvl,VOIDFUNCPTR routine, BSP_U32 parameter);

/*****************************************************************************
* �� �� ��  : BSP_GUIPC_IntSend
*
* ��������  : �����ж�
*
* �������  :
                IPC_INT_CORE_E enDstore Ҫ�����жϵ�core
                BSP_U32 ulLvl Ҫ���͵��жϺţ�ȡֵ��Χ0��31
* �������  : ��
*
* �� �� ֵ  : OK&ERROR
*
* �޸ļ�¼  : 2011��4��11�� wangjing creat
*****************************************************************************/
BSP_S32 BSP_GUIPC_IntSend(IPC_INT_CORE_E enDstCore, IPC_INT_LEV_E ulLvl);

/*****************************************************************************
* �� �� ��  : BSP_GUIPC_SemTake
*
* ��������  : ��ȡ�ź���
*
* �������  : ��
* �������  : ��
*
* �� �� ֵ  : ��
*
* �޸ļ�¼  : 2011��4��11�� wangjing creat
*****************************************************************************/
BSP_S32  BSP_GUIPC_SemTake(BSP_U32 u32SignalNum, BSP_S32 s32timeout);

/*****************************************************************************
* �� �� ��  : BSP_GUIPC_SemGive
*
* ��������  : �ͷ��ź���
*
* �������  : ��
* �������  : ��
*
* �� �� ֵ  : ��
*
* �޸ļ�¼  : 2011��4��11�� wangjing creat
*****************************************************************************/
BSP_VOID BSP_GUIPC_SemGive(BSP_U32 u32SignalNum);


/*****************************************************************************
* �� �� ��  : BSP_GUIPC_SpinLock
*
* ��������  : ��ȡ�ź���
*
* �������  : ��
* �������  : ��
*
* �� �� ֵ  : ��
*
* �޸ļ�¼  : 2011��4��11�� wangjing creat
*****************************************************************************/
BSP_VOID BSP_GUIPC_SpinLock (BSP_U32 u32SignalNum);

/*****************************************************************************
* �� �� ��  : BSP_GUIPC_SpinUnLock
*
* ��������  : �ͷ��ź���
*
* �������  : ��
* �������  : ��
*
* �� �� ֵ  : ��
*
* �޸ļ�¼  : 2011��4��11�� wangjing creat
*****************************************************************************/
BSP_VOID BSP_GUIPC_SpinUnLock (BSP_U32 u32SignalNum);

/*************************IPCM END************************************/

/*************************IPM START***********************************/

/**************************************************************************
  �궨��
**************************************************************************/

#define MAC_HEADER_LEN      14
#define IPM_SUCCESS                       BSP_OK
#define IPM_ERROR                         BSP_ERROR

/**************************************************************************
  STRUCT����
**************************************************************************/

/* �˼�����Ŀ��ṹ�� */
typedef struct tagIPM_DESC_ITEM_S
{
    BSP_U32 Addr;
    BSP_U16 Len;
    BSP_U16 Invalid;  /* 0��ʾ����BD,1��ʾ����BD */
} IPM_DESC_ITEM_S;

/* �˼��������ṹ�� */
typedef struct tagIPM_DESC_NODE_S
{
    BSP_U32 StartAddr;
    BSP_U16 ItemNum;  /* �ܵ�Item��Ŀ */
    BSP_U16 TailIdx;  /* ���һ����Ч��Item ID, ��0��ʼ */
    BSP_U16 ValidNum; /* ��Ч��Item��Ŀ */
    IPM_DESC_ITEM_S *pstDescItem;
}IPM_DESC_NODE_S;

/*****************************************************************************
* �� �� ��  : BSP_IPM_GetDescNode
*
* ��������  : ��ȡ��Ϣ���ָ��ӿ�
*
* �������  : BSP_U32 u32ItemNum    IP��������
*
* �������  : ��
* �� �� ֵ  : �� --- ��ȡʧ��
*             �ǿ� ---  ��ȡ����Ϣ���ָ��
*
* �޸ļ�¼  :2011��1��27��   ³��  ����
*****************************************************************************/
IPM_DESC_NODE_S *BSP_IPM_GetDescNode(BSP_U32 u32ItemNum);

/*****************************************************************************
* �� �� ��  : BSP_IPM_FreeDescNode
*
* ��������  : �ͷ���Ϣ���ָ��ӿ�
*
* �������  : IPM_DESC_NODE_S *pstDescNode
*             BSP_BOOL bNodeOnly
*             trueֻ�ͷŽ��      false �ͷŽ�����֯�ڴ�
*
* �������  : ��
* �� �� ֵ  : ��
*
* �޸ļ�¼  :2011��1��27��   ³��  ����
*****************************************************************************/
BSP_S32 BSP_IPM_FreeDescNode(IPM_DESC_NODE_S *pstDescNode, BSP_BOOL bNodeOnly);

/*****************************************************************************
* �� �� ��  : BSP_IPM_GetBspBuf
*
* ��������  : �����ڴ�ӿ�
*
* �������  : BSP_U32 u32len    ��Ҫ�����buf����
*
* �������  : ��
* �� �� ֵ  : ��ȡ��bufָ��
*
* �޸ļ�¼  :2011��1��27��   ³��  ����
*****************************************************************************/
BSP_U8 *BSP_IPM_GetBspBuf(BSP_U32 u32len);

/*************************IPM END*************************************/


/*************************SSI START***********************************/
/*�����붨��*/
#define BSP_ERR_SSI_MODULE_NOT_INITED  BSP_DEF_ERR(BSP_MODU_SSI, BSP_ERR_MODULE_NOT_INITED)
#define BSP_ERR_SSI_INVALID_PARA        BSP_DEF_ERR(BSP_MODU_SSI, BSP_ERR_INVALID_PARA)
#define BSP_ERR_SSI_RETRY_TIMEOUT       BSP_DEF_ERR(BSP_MODU_SSI, BSP_ERR_RETRY_TIMEOUT)

#define BSP_ERR_SSI_SEM_CREATE           BSP_DEF_ERR(BSP_MODU_SSI, 1)
#define BSP_ERR_SSI_SEM_LOCK             BSP_DEF_ERR(BSP_MODU_SSI, 2)
#define BSP_ERR_SSI_SEM_UNLOCK           BSP_DEF_ERR(BSP_MODU_SSI, 3)
#define BSP_ERR_SSI_ATTR_NOTSET          BSP_DEF_ERR(BSP_MODU_SSI, 4)
#define BSP_ERR_SSI_TXFIFO_NOTEMPTY      BSP_DEF_ERR(BSP_MODU_SSI, 5)
#define BSP_ERR_SSI_RXFIFO_EMPTY         BSP_DEF_ERR(BSP_MODU_SSI, 6)
#define BSP_ERR_SSI_RXFIFO_NOTEMPTY      BSP_DEF_ERR(BSP_MODU_SSI, 7)
#define BSP_ERR_SSI_RXNUM_WRONG          BSP_DEF_ERR(BSP_MODU_SSI, 8)

/*SSI��ID��ASIC��ʹ��3ƬSSI*/
typedef enum tagSSI_DEV_ID
{
    SSI_ID0,
    SSI_ID1,
    SSI_ID2,
    SSI_ID3,
    SSI_ID_MAX
}SSI_ID_E;

/*���ݳ��� */
typedef enum tagssi_DATALEN                                                       
{
    SSI_DATALEN_2BITS =  0x1,     /*  2 bit address */
    SSI_DATALEN_3BITS =  0x2,     /*  3 bit address */
    SSI_DATALEN_4BITS  = 0x3,     /*  4 bit address */                           
    SSI_DATALEN_5BITS  = 0x4,     /*  5 bit address */                           
    SSI_DATALEN_6BITS  = 0x5,     /*  6 bit address */                           
    SSI_DATALEN_7BITS  = 0x6,     /*  7 bit address */                           
    SSI_DATALEN_8BITS  = 0x7,     /*  8 bit address */                           
    SSI_DATALEN_9BITS  = 0x8,     /*  9 bit address */                           
    SSI_DATALEN_10BITS = 0x9,     /* 10 bit address */                           
    SSI_DATALEN_11BITS = 0xA,     /* 11 bit address */                           
    SSI_DATALEN_12BITS = 0xB,     /* 12 bit address */                           
    SSI_DATALEN_13BITS = 0xC,     /* 13 bit address */                           
    SSI_DATALEN_14BITS = 0xD,     /* 14 bit address */                           
    SSI_DATALEN_15BITS = 0xE,     /* 15 bit address */                           
    SSI_DATALEN_16BITS = 0xF,     /* 16 bit address */
    SSI_DATALEN_17BITS = 0x10,    /* 17 bit address */
    SSI_DATALEN_18BITS = 0x11,    /* 18 bit address */
    SSI_DATALEN_19BITS = 0x12,    /* 19 bit address */
    SSI_DATALEN_20BITS = 0x13,    /* 20 bit address */
    SSI_DATALEN_21BITS = 0x14,    /* 21 bit address */
    SSI_DATALEN_22BITS = 0x15,    /* 22 bit address */
    SSI_DATALEN_23BITS = 0x16,    /* 23 bit address */
    SSI_DATALEN_24BITS = 0x17,    /* 24 bit address */
    SSI_DATALEN_MAX
} SSI_DATA_LEN_E;

/*��ַ����*/
typedef enum tagssi_ADDRLEN                                                      
{                                                                              
    SSI_ADDRLEN_1BITS  = 0x0,     /*  4 bit data */                           
    SSI_ADDRLEN_2BITS  = 0x1,     /*  5 bit data */                           
    SSI_ADDRLEN_3BITS  = 0x2,     /*  6 bit data */                           
    SSI_ADDRLEN_4BITS  = 0x3,     /*  7 bit data */                           
    SSI_ADDRLEN_5BITS  = 0x4,     /*  8 bit data */                           
    SSI_ADDRLEN_6BITS  = 0x5,     /*  9 bit data */                           
    SSI_ADDRLEN_7BITS  = 0x6,     /* 10 bit data */                           
    SSI_ADDRLEN_8BITS  = 0x7,     /* 11 bit data */     
    SSI_ADDRLEN_MAX
} SSI_ADDR_LEN_E;    

/*��ʱ�ȴ�*/
typedef enum tagssi_WAITTIME
{
    SSI_WAITTIME_1CYCLES = 0x0,
    SSI_WAITTIME_2CYCLES = 0x1,
    SSI_WAITTIME_3CYCLES = 0x2,
    SSI_WAITTIME_4CYCLES = 0x3,
    SSI_WAITTIME_5CYCLES = 0x4,
    SSI_WAITTIME_6CYCLES = 0x5,
    SSI_WAITTIME_7CYCLES = 0x6,
    SSI_WAITTIME_8CYCLES = 0x7,
    SSI_WAITTIME_9CYCLES = 0x8,
    SSI_WAITTIME_10CYCLES = 0x9,
    SSI_WAITTIME_11CYCLES = 0xA,
    SSI_WAITTIME_12CYCLES = 0xB,
    SSI_WAITTIME_13CYCLES = 0xC,
    SSI_WAITTIME_14CYCLES = 0xD,
    SSI_WAITTIME_15CYCLES = 0xE,
    SSI_WAITTIME_16CYCLES = 0xF,
    SSI_WAITTIME_MAX
}SSI_WAIT_TIME_E;

/*SSI����豸���Խṹ�壬�����豸�����ݳ��ȣ���ַ���ȣ��ȴ���ʱʱ��� */
typedef struct tagSSI_DEV_ATTR
{
    SSI_ADDR_LEN_E enAddrLen;
    SSI_DATA_LEN_E enDataLen;
    SSI_WAIT_TIME_E enWaitTime;
}SSI_SLAVE_ATTR_S;

/*****************************************************************************
* �� �� ��  : BSP_SSI_SetAttr
*
* ��������  : ����SSI�ļĴ��������ÿ��������ֳ��ȡ�����֡���ȵȡ�
*
* �������  : enSSIID        ��Ҫ���õ�SSI�ţ��Լ�������ƬƬѡ�������õ�Ƭѡ�š�
*             pstSSIDevAttr  ��¼SSI����豸���ԵĽṹ��ָ�룬�ṹ���Ա�����豸
                             ��Ҫ�������ֳ��ȣ�����֡���ȣ�ʹ��Э�飬�����ʵȡ�
*
* �������  : ��
*
* �� �� ֵ  : OK    ���ճɹ�
*             ERROR ����ʧ��
*****************************************************************************/
BSP_S32 BSP_SSI_SetAttr(SSI_ID_E enSsiId, SSI_SLAVE_ATTR_S *pstSsiDevAttr);

/*****************************************************************************
* �� �� ��  : BSP_SSI_Write
*
* ��������  : ͨ��SSI���豸д������
*
* �������  : pstWriteData ��¼��SSI���ݴ����й���Ϣ�Ľṹ��ָ�룬��Ա����
                           Ҫ��д��SSI�ţ�Ƭѡ�ţ�����ģʽ��
*             pSendData    �洢���յ����ݻ�����ָ��
*             u32Length    �����յ����ݳ���
*
* �������  : ��
*
* �� �� ֵ  : OK    ���ճɹ�
*             ERROR ����ʧ��
*****************************************************************************/
BSP_S32 BSP_SSI_Write(SSI_ID_E enSsiId, BSP_VOID *pSrcAddr, BSP_U32 u32Length);

/*****************************************************************************
* �� �� ��  : BSP_SSI_Read
*
* ��������  : ͨ��SSI��ȡ�豸����
*
* �������  : pstReadData  ��¼��SSI���ݴ����й���Ϣ�Ľṹ��ָ�룬��Ա����
                           Ҫ��д��SSI�ţ�Ƭѡ�ţ�����ģʽ�ȡ� 
*             u32Length    �����յ����ݳ���
*
* �������  : pRecData     �洢���յ����ݻ�����ָ�롣
*
* �� �� ֵ  : OK    ���ճɹ�
*             ERROR ����ʧ��
*****************************************************************************/
BSP_S32 BSP_SSI_Read(SSI_ID_E enSsiId,BSP_VOID *pSrcAddr,BSP_VOID *pDescAddr,BSP_U32 u32Length);

/*****************************************************************************
* �� �� ��  : BSP_SSI_GetAttr
*
* ��������  : ��ȡ��ǰSSI���õ�����
*
* �������  : enSSIId    Ҫ��ѯ��SSI�š�                        
*            
* �������  : pstDevAttr ���SSI���ԵĽṹ��ָ�롣
*
* �� �� ֵ  : OK    ���ճɹ�
*             ERROR ����ʧ��
*****************************************************************************/
BSP_S32 BSP_SSI_GetAttr(SSI_ID_E enSsiId, SSI_SLAVE_ATTR_S *pstDevAttr);

/*************************SSI END*************************************/


/*************************NANDF BEGIN*********************************/

/**************************************************************************
  �궨�� 
**************************************************************************/
/*������*/
#define NANDF_OK              BSP_OK
#define NANDF_ERROR_INIT      BSP_DEF_ERR(BSP_MODU_NANDF, BSP_ERR_MODULE_NOT_INITED)  /*û�г�ʼ��*/
#define NANDF_ERROR_ARGS      BSP_DEF_ERR(BSP_MODU_NANDF, BSP_ERR_INVALID_PARA)  /*��������*/
#define NANDF_ERROR_MALLOC    BSP_DEF_ERR(BSP_MODU_NANDF, BSP_ERR_BUF_ALLOC_FAILED)  /*�ڴ�ռ����ʧ��*/
#define NANDF_ERROR_TIMEOUT   BSP_DEF_ERR(BSP_MODU_NANDF, BSP_ERR_RETRY_TIMEOUT)  /*ѭ�������ﵽ���*/
#define NANDF_BAD_BLOCK       BSP_DEF_ERR(BSP_MODU_NANDF, BSP_ERR_SPECIAL + 1)  /*����*/
#define NANDF_GOOD_BLOCK      BSP_DEF_ERR(BSP_MODU_NANDF, BSP_ERR_SPECIAL + 2)  /*�ÿ�*/
#define NANDF_ERROR_READ      BSP_DEF_ERR(BSP_MODU_NANDF, BSP_ERR_SPECIAL + 3)  /*������ʧ��*/
#define NANDF_ERROR_WRITE     BSP_DEF_ERR(BSP_MODU_NANDF, BSP_ERR_SPECIAL + 4)  /*д����ʧ��*/
#define NANDF_ERROR_ERASE     BSP_DEF_ERR(BSP_MODU_NANDF, BSP_ERR_SPECIAL + 5)  /*��������ʧ��*/
#define NANDF_ERROR_MARKBAD   BSP_DEF_ERR(BSP_MODU_NANDF, BSP_ERR_SPECIAL + 6)  /*��־����ʧ��*/
#define NANDF_ERROR_ERASE_MARKBAD   BSP_DEF_ERR(BSP_MODU_NANDF, BSP_ERR_SPECIAL + 7)  /*����ʧ�ܲ��ұ�־����ʧ��*/
#define NANDF_ERROR_WRITE_MARKBAD   BSP_DEF_ERR(BSP_MODU_NANDF, BSP_ERR_SPECIAL + 8)  /*д��ʧ�ܲ��ұ�־����ʧ��*/
#define NANDF_ERROR_STATUS_CHECK   BSP_DEF_ERR(BSP_MODU_NANDF, BSP_ERR_SPECIAL + 9)  /*��ȡ״̬�Ĵ�����״̬����ȷ*/
#define NANDF_ERROR_SEMTAKE   BSP_DEF_ERR(BSP_MODU_NANDF, BSP_ERR_SPECIAL + 10)  /*�����ź���ʧ��*/
#define NANDF_ERROR_SEMGIVE   BSP_DEF_ERR(BSP_MODU_NANDF, BSP_ERR_SPECIAL + 11)  /*�ͷ��ź���ʧ��*/
#define NANDF_ERROR_ADDR_OVERFLOW BSP_DEF_ERR(BSP_MODU_NANDF, BSP_ERR_SPECIAL + 12)  /* ��ַԽ�� */
#define NANDF_ERROR_MODULE_LOCKED  BSP_DEF_ERR(BSP_MODU_NANDF, BSP_ERR_SPECIAL + 13)

/******************************************************************************
* Function     :   BSP_NANDF_Read
* 
* Description  :   ��ȡNand Flash��ָ����ַ�ͳ������ݵ�ָ���ռ���
* 
* Input        :   u32FlashAddr  ��ȡ���ݵ�Դ��ַ
*              :   u32NumByte    ��ȡ���ݳ��ȣ���λΪ�ֽ�
* 
* Output       :   pRamAddr      ��ȡ�����ݴ�ŵĵ�ַ
* 
* return       :   �������ɹ����
******************************************************************************/
extern BSP_U32 nandc4_FlashRead(BSP_U32 u32FlashAddr, BSP_VOID* pRamAddr, BSP_U32 u32NumByte);

/******************************************************************************
* Function     :   BSP_NANDF_Write
* 
* Description  :   ��ָ����ַ�ͳ������ݵ�д��ָ��FLASH��ַ��
* 
* Input        :   pRamAddr     д����Դ��ַ    
*              :   u32NumByte   ���ݳ��ȣ���λΪ�ֽ�
* 
* Output       :   u32FlashAddr д����Ŀ�ĵ�ַ
* 
* return       :   д�����ɹ����
******************************************************************************/
extern BSP_U32 nandc4_FlashWrite(BSP_U32 u32FlashAddr, BSP_VOID * pRamAddr, BSP_U32 u32NumByte);

/******************************************************************************
* Function     :   BSP_NANDF_Erase
* 
* Description  :   ����ָ��Flash��ַ���ڿ�
* 
* Input        :   u32address   Ҫ�������ID
* 
* Output       :   ��
* 
* return       :   ���������ɹ����
******************************************************************************/
extern  BSP_U32 nandc4_BlockEraseById(BSP_U32 u32BlockID);

/*************************NANDF END***********************************/

/*************************OM START************************************/

typedef enum{
     MEMCHKTYPE16BIT,
     MEMCHKTYPE32BIT
}ENMEMCHKTYPE;

/*****************************************************************************
* �� �� ��  : BSP_OM_GetFlashSpec
*
* ��������  : ��ȡFLASH���
*
* �������  : ��
*
* �������  : BSP_U32 *pu32FlashTotalSize  : FLASH�ܴ�С
*             BSP_U32 *pu32FlashBlkSize     : FLASH���С
*             BSP_U32 *pu32FlashPageSize    : FLASHҳ��С
*
* �� �� ֵ  : BSP_ERROR:��ȡʧ��
*             BSP_OK:��ȡ�ɹ�
*
* ����˵��  : ��
*
*****************************************************************************/
BSP_S32 BSP_OM_GetFlashSpec(BSP_U32 *pu32FlashTotalSize, BSP_U32 *pu32FlashBlkSize, BSP_U32 *pu32FlashPageSize);
/*****************************************************************************
* �� �� ��  : BSP_OM_GetVerTime
*
* ��������  : ���verʱ��
*
* �������  : ��
*
* �������  : 
*
* �� �� ֵ  : 
*
* ����˵��  : ��
*
*****************************************************************************/
BSP_VOID BSP_OM_GetVerTime(BSP_S8* strVerTime);

/******************************************************************************
* Function     :   BSP_OM_MemNWrite
* 
* Description  :   
* 
* Input        :  
* 
* Output       :   ��
* 
* return       :   
******************************************************************************/
BSP_S32 BSP_OM_MemNWrite(BSP_U32* u32MemAddr, BSP_U32 u32Value, BSP_U32 u32Count);
#if 0
/******************************************************************************
* Function     :   BSP_OM_MemPrint
* 
* Description  :   
* 
* Input        :  
* 
* Output       :   ��
* 
* return       :   
******************************************************************************/
BSP_S32 BSP_OM_MemPrint(BSP_U32* u32MemAddr,ENADDRTYPE enAddrType);
#endif
/******************************************************************************
* Function     :   BSP_OM_MemChk
* 
* Description  :   
* 
* Input        :  
* 
* Output       :   ��
* 
* return       :   
******************************************************************************/
BSP_S32 BSP_OM_MemChk(BSP_U32* u32StartAddr, BSP_U32* u32EndAddr, ENMEMCHKTYPE enChkType);

/******************************************************************************
* Function     :   BSP_OM_GetFPGAVer
* 
* Description  :   
* 
* Input        :  
* 
* Output       :   ��
* 
* return       :   
******************************************************************************/
BSP_S32 BSP_OM_GetFPGAVer(void);
#if 0
/******************************************************************************
* Function     :   BSP_OM_NET
* 
* Description  :   
* 
* Input        :  
* 
* Output       :   ��
* 
* return       :   
******************************************************************************/
BSP_VOID BSP_OM_NET(BSP_OM_NET_S *pstNetOm);
#endif
/******************************************************************************
* Function     :   BSP_OM_ShellLock
* 
* Description  :   
* 
* Input        :  
* 
* Output       :   ��
* 
* return       :   
******************************************************************************/
BSP_S32 BSP_OM_ShellLock(BSP_BOOL bRequest);



/*****************************************************************************
* �� �� ��  : BSP_OM_GetTcmAdr
*
* ��������  : ��ȡDSP�������ַ
*
* �������  : BSP_VOID  
* �������  : ��
*
* �� �� ֵ  : DSP�������ַ
*
* ����˵��  : ����ֵ0Ϊ�Ƿ�ֵ
*
*****************************************************************************/
BSP_U32 BSP_OM_GetTcmAdr(BSP_VOID);

/*************************OM END**************************************/

/*************************WIFI START**********************************/

/*****************************************************************************
 �� �� ��  : WIFI_TEST_CMD
 ��������  : ��������
 �������  : cmdStr�������ַ���
 �������  : ��
 ����ֵ    ��
    0: execute succes
    1: execute failed
*****************************************************************************/
extern int wifi_tcmd(char * cmdStr);

/*****************************************************************************
 �� �� ��  : wifi_get_tcmd_mode
 ��������  : ��ȡ���������ģʽ
 �������  : ��
 �������  : 16��У׼����ģʽ
             17����ʾ���ڷ���ģʽ
             18����ʾ����ģʽ
 ����ֵ    ������ִ�е�״̬���ֵ
*****************************************************************************/
extern int wifi_get_tcmd_mode(void);

/*****************************************************************************
 �� �� ��  : wifi_power_on
 ��������  : WIFI�ϵ�
 �������  : ��
 �������  : ��
 ����ֵ    �� 0: execute ok 
              1: execute failed
*****************************************************************************/
extern int wifi_power_on(void);

/*****************************************************************************
 �� �� ��  : wifi_power_off
 ��������  : WIFI�µ�
 �������  : ��
 �������  : ��
 ����ֵ    �� 0: execute ok 
              1: execute failed
*****************************************************************************/
extern int wifi_power_off(void);

/*****************************************************************************
 �� �� ��  : wifi_get_status
 ��������  : WIFI״̬��ȡ
 �������  : ��
 �������  : ��
 ����ֵ    �� 0: wifi is off
              1: wifi is in normal mode
              2: wifi is in tcmd mode
*****************************************************************************/
extern int wifi_get_status(void);

/*****************************************************************************
 �� �� ��  : wifi_get_rx_detail_report
 ��������  : get result of rx report: totalPkt, GoodPkt, ErrorPkt
 �������  : ��
 �������  : totalPkt��goodPkt��badPkt
 ����ֵ    ����
*****************************************************************************/
extern void wifi_get_rx_detail_report(unsigned int *totalPkts, unsigned int *googPkts, unsigned int * badPkts);

/*****************************************************************************
 �� �� ��  : wifi_get_rx_packet_report
 ��������  : get result of rx ucast&mcast packets
 �������  : ��
 �������  : ucastPkts��mcastPkts
 ����ֵ    ����
*****************************************************************************/
extern void  wifi_get_rx_packet_report(unsigned int *ucastPkts, unsigned int *mcastPkts);

/*****************************************************************************
 �� �� ��  : wifi_get_pa_curMode
 ��������  : get the currrent PA mode of the wifi chip
 �������  : ��
 �������  : ��
 ����ֵ    ��0:  (WIFI_ONLY_PA_MODE) WIFI chip is in PA mode
             1:  (WIFI_ONLY_NOPA_MODE) WIFI chip is in no PA mode
             -1: wifi chip is in abnormal mode
*****************************************************************************/
extern int wifi_get_pa_curMode(void);

/*****************************************************************************
 �� �� ��  : wifi_get_pa_mode
 ��������  : get the support PA mode of wifi chip
 �������  : ��
 �������  : ��
 ����ֵ    ��0:  (WIFI_ONLY_PA_MODE) WIFI suppport only PA mode
             1:  (WIFI_ONLY_NOPA_MODE) WIFI suppport only no PA mode 
             2:  (WIFI_PA_NOPA_MODE) WIFI suppport both PA &  no PA mode 
             -1: failed
*****************************************************************************/
extern int wifi_get_pa_mode(void);

/*****************************************************************************
 �� �� ��  : wifi_set_pa_mode
 ��������  : set the PA mode of wifi chip 
 �������  : 0:  (WIFI_ONLY_PA_MODE) WIFI suppport only PA mode
             1:  (WIFI_ONLY_NOPA_MODE) WIFI suppport only no PA mode 
             2:  (WIFI_PA_NOPA_MODE) WIFI suppport both PA &  no PA mode 
 �������  : ��
 ����ֵ    ��0: success
             -1: failed
*****************************************************************************/
extern int wifi_set_pa_mode(int wifiPaMode);

/*****************************************************************************
 �� �� ��  : BSP_WifiDataReservedTail
 ��������  : WIFI������Ҫ���ݿ��ڴ�
 �������  : usLen - �û��������ݳ���Len
 �������  : ��
 �� �� ֵ  : ��������β��Ԥ���ĳ���
*****************************************************************************/
extern unsigned int BSP_WifiDataReservedTail(unsigned int len);

/*****************************************************************************
 �� �� ��  : WiFi_DrvSetRxFlowCtrl
 ��������  : ����WIFI�������ر�ʶ
 �������  : para1��para2
 �������  : ��
 �� �� ֵ  : BSP_OK/BSP_ERROR
*****************************************************************************/
extern unsigned long WiFi_DrvSetRxFlowCtrl(unsigned long para1, unsigned long para2);

/*****************************************************************************
 �� �� ��  : WiFi_DrvSetRxFlowCtrl
 ��������  : ���WIFI�������ر�ʶ
 �������  : para1��para2
 �������  : ��
 �� �� ֵ  : 1 : ��
             0 : ��
*****************************************************************************/    
extern unsigned long WiFi_DrvClearRxFlowCtrl(unsigned long para1, unsigned long para2);

/*****************************************************************************
 �� �� ��  : drv_get_local_usr_connect_status
 ��������  : ���ص�ǰ�Ƿ���USB���ӻ���WIFI�û�����(C�˵���)
 �������  : ��
 �������  : ��
 �� �� ֵ  : 1 : ��
             0 : ��
*****************************************************************************/
extern unsigned long  drv_get_local_usr_connect_status(void);

/*************************WIFI START**********************************/

/*************************NCM START***********************************/

/* ������*/
#define BSP_ERR_NCM_NOTXBUFF         BSP_DEF_ERR(BSP_MODU_USB_NCM,(BSP_ERR_SPECIAL + 1)) /*0x10120001*/
#define BSP_ERR_NCM_NOIDLEDEV        BSP_DEF_ERR(BSP_MODU_USB_NCM,(BSP_ERR_SPECIAL + 2)) /*0x10120002*/
#define BSP_ERR_NCM_AT_SEND_TIMEOUT  BSP_DEF_ERR(BSP_MODU_USB_NCM,(BSP_ERR_SPECIAL + 3))/*0x10121003*/
#define BSP_ERR_NCM_WRONG_STATE      BSP_DEF_ERR(BSP_MODU_USB_NCM,(BSP_ERR_SPECIAL + 4))/*0x10121004*/
#define BSP_ERR_NCM_AT_SEND_FAIL     BSP_DEF_ERR(BSP_MODU_USB_NCM,(BSP_ERR_SPECIAL + 5))/*0x10121005*/
#define BSP_ERR_NCM_SEND_EXCEED_MAXPKT  BSP_DEF_ERR(BSP_MODU_USB_NCM,(BSP_ERR_SPECIAL + 6))/*0x10121006*/
#define BSP_ERR_NCM_IPV6_DNS_NFT_FAIL  BSP_DEF_ERR(BSP_MODU_USB_NCM,(BSP_ERR_SPECIAL + 7))/*0x10121007*/


/*****************************************************************************
* �� �� ��  : BSP_NCM_Open
*
* ��������  : ������ȡ����ʹ��NCM�豸ID,����ͨ�����ͣ�PSʹ��;����ͨ�����ͣ�
*              MSP����AT����ʹ��
*
* �������  : NCM_DEV_TYPE_E enDevType  �豸����
* �������  : pu32NcmDevId              NCM �豸ID
*
* �� �� ֵ  : BSP_ERR_NET_NOIDLEDEV
*             OK
*
* �޸ļ�¼  : 2010��3��17��   liumengcun  creat
*****************************************************************************/
BSP_U32 BSP_NCM_Open(NCM_DEV_TYPE_E enDevType, BSP_U32 * pu32NcmDevId);

/*****************************************************************************
* �� �� ��  : BSP_NCM_Write
*
* ��������  : ��������
*
* �������  : BSP_U32 u32NcmDevId  NCM�豸ID
* �������  : BSP_VOID *pPktEncap       ����װ�׵�ַ
*
* �� �� ֵ  : BSP_OK
*             BSP_ERR_NET_INVALID_PARA
*             BSP_ERR_NET_BUF_ALLOC_FAILED
*
* �޸ļ�¼  : 2010��3��17��   liumengcun  creat
*****************************************************************************/
BSP_U32 BSP_NCM_Write(BSP_U32 u32NcmDevId, BSP_VOID *pPktEncap, void *net_priv);

/*****************************************************************************
* �� �� ��  : BSP_NCM_Ioctl
*
* ��������  : ����NCM�豸����
*
* �������  : ��
* �������  : ��
*
* �� �� ֵ  : 
*
* �޸ļ�¼  : 2010��3��17��   liumengcun  creat
*****************************************************************************/
BSP_U32 BSP_NCM_Ioctl(BSP_U32 u32NcmDevId, NCM_IOCTL_CMD_TYPE_E enNcmCmd, BSP_VOID *param);

/*****************************************************************************
* �� �� ��  : BSP_NCM_Close
*
* ��������  : �ر�NCM�豸
*
* �������  : NCM_DEV_TYPE_E enDevType   �豸ID����
*             BSP_U32 u32NcmDevId        NCM�豸ID
* �������  : ��
*
* �� �� ֵ  : OK
*
* �޸ļ�¼  : 2010��3��17��   liumengcun  creat
*****************************************************************************/
BSP_U32 BSP_NCM_Close(NCM_DEV_TYPE_E enDevType, BSP_U32 u32NcmDevId);

/*****************************************************************************
* �� �� ��  : NCM_debugPktGet
*
* ��������  : �ṩ��PS��ȡ�շ���ͳ��
*
* �������  : 
* �������  : NCM_PKT_INFO_S *penPktNum :ͳ�ƽṹ��
*
* �� �� ֵ  : OK/ERROR
*
* �޸ļ�¼  : 2011��8��5��   wangjing   creat
*****************************************************************************/
BSP_S32 NCM_debugPktGet(BSP_U32 u32DevId,NCM_PKT_INFO_S *penPktNum);

/*****************************************************************************
* �� �� ��  : NCM_debugPktClear
*
* ��������  : �ṩ��PS���ڽ�ͳ��ֵ��0
*
* �������  : 
* �������  : 
*
* �� �� ֵ  : OK/ERROR
*
* �޸ļ�¼  : 2011��8��5��   wangjing   creat
*****************************************************************************/
BSP_S32 NCM_debugPktClear(BSP_U32 u32DevId);

/*************************NCM END*************************************/

/*************************ACM START***********************************/

/* MODEM �ܽ��ź�ֵ���� */
#define SIGNALNOCH 0
#define SIGNALCH 1
#define RECV_ENABLE 1
#define RECV_DISABLE 0
#define SEND_ENABLE 1
#define SEND_DISABLE 0
#define HIGHLEVEL 1
#define LOWLEVEL 0

/*************************ACM END*************************************/


/*************************HKADC START*********************************/

/*************************************************
 �� �� ��   : BSP_HKADC_BatVoltGet
 ��������   : ���ص�ǰ��ص�ѹֵ
 �������   : pslData : ��ص�ѹֵ
 �������   : pslData : ��ص�ѹֵ
 �� �� ֵ   :0:��ȡ�ɹ�
            -1:��ȡʧ��
*************************************************/
extern BSP_S32 BSP_HKADC_BatVoltGet(BSP_S32 *ps32Data);

/*****************************************************************************
 �� �� ��  : hkadcBatADCRead
 ��������  : ��ȡ��ص�ѹ����ֵ
 �������  : ��
 �������  : pTemp��        ָ�����¶ȵ�ָ�롣
 �� �� ֵ  : 0:  �����ɹ���
             -1������ʧ�ܡ�
*****************************************************************************/
extern BSP_S32 BSP_HKADC_BatADCRead(BSP_S32 * pslData);

/*************************************************
*  Function:  hkadcGsmTempRead
*  Description: Read gsm temperature *
*  Called By:sysctrl
*  Table Accessed:
*  Table Updated:
*  Input:
*          
*  Output:
*         pslData:��Ӧhkadcͨ�����¶�ֵ
*  Return:
*         HKADC_OK/HKADC_ERROR
*************************************************/
int hkadcGsmPATempRead(int *pslData, unsigned short *hkAdcTable);

/*************************************************
*  Function:  hkadcWcdmaTempRead
*  Description: Read wcdma temperature *
*  Called By:sysctrl
*  Table Accessed:
*  Table Updated:
*  Input:
*          
*  Output:
*         pslData:��Ӧhkadcͨ�����¶�ֵ
*  Return:
*         HKADC_OK/HKADC_ERROR
*************************************************/
int hkadcWcdmaPATempRead(int *pslData, unsigned short *hkAdcTable);

/*************************************************
*  Function:  hkadcSIMTempRead
*  Description: Read SIM temperature *
*  Called By:sysctrl
*  Table Accessed:
*  Table Updated:
*  Input:
*          
*  Output:
*         pslData:��Ӧhkadcͨ�����¶�ֵ
*  Return:
*         HKADC_OK/HKADC_ERROR
*************************************************/
int hkadcSIMTempRead(int *pslData, unsigned short *hkAdcTable);

/*************************************************
*  Function:  hkadcOLEDTempRead
*  Description: Read OLED temperature *
*  Called By:sysctrl
*  Table Accessed:
*  Table Updated:
*  Input:
*          
*  Output:
*         pslData:��Ӧhkadcͨ�����¶�ֵ
*  Return:
*         HKADC_OK/HKADC_ERROR
*************************************************/
int hkadcOLEDTempRead(int *pslData, unsigned short *hkAdcTable);

/*************************************************
*  Function:  hkadcBatTempRead
*  Description: Read battery temperature *
*  Called By:sysctrl
*  Table Accessed:
*  Table Updated:
*  Input:
*          
*  Output:
*         pslData:��Ӧhkadcͨ�����¶�ֵ
*  Return:
*         HKADC_OK/HKADC_ERROR
*************************************************/
int hkadcBatTempRead(int *pslData, unsigned short *hkAdcTable);

/*************************************************
*  Function:  hkadcBatRefTempRead
*  Description: ͨ���������NTC���������¶ȣ������жϵ���Ƿ���λ*
*  Called By:sysctrl
*  Table Accessed:
*  Table Updated:
*  Input:*          
           hkAdcTable:  ��ѹ�¶Ȼ����
*  Output:
*         pslData:     �洢�ĵ�ѹת��Ϊ���¶�ֵ��
*  Return:
*         ����ִ�е�״̬���ֵ��
*************************************************/
int hkadcBatRefTempRead(int *pslData, unsigned short *hkAdcTable);

/*************************************************
*  Function:  hkadcPaPowerRead
*  Description: Read gsm PA power *
*  Called By:sysctrl
*  Table Accessed:
*  Table Updated:
*  Input:
*          
*  Output:
*         N/A
*  Return:
*         N/A
*************************************************/
int hkadcPAPowerRead(int *pslData);


/*************************************************
*  Function:  hkadcTemVoltTrans
*  Description:  *
*  Called By:sysctrl
*  Table Accessed:
*  Table Updated:
*  Input:
*          
*  Output:
*         N/A
*  Return:
*         N/A
*************************************************/
signed short hkadcTemVoltTrans(unsigned char ucChan, unsigned short usVoltage, unsigned short *hkAdcTable);


/*************************************************
*  Function:  hkadcBatVoltRefSet
*  Description:  * ����Battery��ͺ���ߵ�ѹ��Ӧ��adcֵ
*  Called By:sysctrl
*  Table Accessed:
*  Table Updated:
*  Input:
*        minVol:��͵�ѹ��minAdc����͵�ѹ��Ӧ��adcֵ��
*	 maxVol:��ߵ�ѹ��maxAdc����ߵ�ѹ��Ӧ��adcֵ
*  Output:
*         N/A
*  Return:
*         HKADC_OK/HKADC_ERROR
*************************************************/
int hkadcBatVoltRefSet(int minVol, int minAdc, int maxVol, int maxAdc);

/*************************************************
*  Function:  hkadcBatVoltGet
*  Description:  *
*  Called By:sysctrl
*  Table Accessed:
*  Table Updated:
*  Input:
*        N/A  
*  Output:
*         pslData : ��ص�ѹֵ
*  Return:
*         HKADC_OK/HKADC_ERROR
*************************************************/
int hkadcBatVoltGet(int *pslData );



/*************************************************
*  Function:  hkadcBatADCRead
*  Description: Read the battery adc value 
*  Table Accessed:
*  Table Updated:
*  Input:
*         N/A
*  Output:
*         pslData:��Ӧhkadcͨ��adcֵ
*  Return:
*         HKADC_OK/HKADC_ERROR��
*************************************************/
int hkadcBatADCRead(int* pslData);
/*************************HKADC END***********************************/

/*************************SEC START***********************************/

/*************************SEC START***********************************/

/*************************************************
 �� �� ��       : BSP_SEC_Support
 ��������   : ��ǰ�汾�Ƿ�֧�ְ�ȫ����
 �������   : unsigned char *pData
 �������   : unsigned char *pData
 �� �� ֵ      : OK/ERROR
*************************************************/
extern BSP_S32 BSP_SEC_Support(BSP_U8 *pu8Data);

/*************************************************
 �� �� ��       : BSP_SEC_AlreadyUse
 ��������   : ��ѯ��ǰ�汾�Ƿ��Ѿ����ð�ȫ����
 �������   : unsigned char *pData
 �������   : unsigned char *pData
 �� �� ֵ      : OK/ERROR
*************************************************/
extern BSP_S32 BSP_SEC_AlreadyUse(BSP_U8 *pu8Data);

/*************************************************
 �� �� ��       : BSP_SEC_Start
 ��������   : ���ð�ȫ����
 �������   :
 �������   :
 �� �� ֵ      : OK/ERROR
*************************************************/
extern BSP_S32 BSP_SEC_Start(void);


extern BSP_U32 BSP_SEC_Check(void);


/*************************SEC END*************************************/

/************************Build�Ż� START******************************/

#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
#ifndef __BOOTLOADER__
extern int	printf (const char *, ...); /*lint18,modify by z00212992*/
#ifndef __OS_RTOSCK__
#define   DRV_PRINTF     printf
#else
#define   DRV_PRINTF     SRE_Printf
#endif
#endif
#else
int printk(const char *fmt, ...);
#define   DRV_PRINTF     printk
#endif

/*****************************************************************************
 �� �� ��  : BSP_DMR_ATAnalyze
 ��������  : ��NAS��ѯ��̬�ڴ�ռ����Ϣ��ͨ��AT�����ѯ
 �������  : �ޡ�
 �������  : �ޡ�
 �� �� ֵ  : �ɹ�0��ʧ��-1
*****************************************************************************/
extern int BSP_DMR_ATAnalyze(void * pstMem,unsigned int uiSize, unsigned int * puiModIdSum);

/*****************************************************************************
 �� �� ��  : BSP_DLOAD_GetDloadInfo
 ��������  : Get dload infomation
 �������  : �ޡ�
 �������  : �ޡ�
 �� �� ֵ  : �ޡ�
*****************************************************************************/

extern BSP_S32 BSP_DLOAD_GetDloadInfo(unsigned char atCmdBuf[], unsigned int dloadType);

/*****************************************************************************
 �� �� ��  : BSP_DLOAD_GetAuthorityVer
 ��������  : Get Authority version
 �������  : �ޡ�
 �������  : �ޡ�
 �� �� ֵ  : �ޡ�
*****************************************************************************/
extern BSP_S32 BSP_DLOAD_GetAuthorityVer(BSP_U8 *str, BSP_S32 len);

/*****************************************************************************
 �� �� ��  : BSP_DLOAD_GetAuthorityId
 ��������  : ��ȡ���ؼ�ȨЭ��Id
 �������  : unsigned char *buf
                          int len
 �������  : ��
 �� �� ֵ  : 0:  �����ɹ���
                      -1������ʧ�ܡ�
*****************************************************************************/
extern BSP_S32 BSP_DLOAD_GetAuthorityId(unsigned char *buf, BSP_S32 len);

/*****************************************************************************
 �� �� ��  : BSP_ONOFF_DrvPowerOff
 ��������  : ����ֱ���µ�
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
*****************************************************************************/
extern void BSP_ONOFF_DrvPowerOff(void);

/************************************************************************
 * FUNCTION
 *       max_freeblock_size_get
 * DESCRIPTION
 *       get memory max free block size
 * INPUTS
 *       ��
 * OUTPUTS
 *       max free block size
 *************************************************************************/
extern int max_freeblock_size_get(void);

#if defined(CHIP_BB_HI6620) || defined (CHIP_BB_HI6210) ||defined(BOARD_FPGA)
/*****************************************************************************
 �� �� ��  : BSP_SOCP_SleepIn
 ��������  : SOCP����˯��
 �������  : pu32SrcChanID:����Դͨ��ID�б�
             uSrcChanNum:  ����Դͨ������
             pu32DstChanID:����Ŀ��ͨ��ID�б�
             uSrcChanNum:  ����Ŀ��ͨ������
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:����˯�߳ɹ���
             ����:   ����˯��ʧ��
*****************************************************************************/
extern BSP_U32 BSP_SOCP_SleepIn(BSP_U32 *pu32SrcChanID, BSP_U32 uSrcChanNum, BSP_U32 *pu32DstChanID, BSP_U32 uDstChanNum);

/*****************************************************************************
 �� �� ��  : BSP_SOCP_SleepOut
 ��������  : SOCP�˳�˯��
 �������  : pu32SrcChanID:����Դͨ��ID�б�
             uSrcChanNum:  ����Դͨ������
             pu32DstChanID:����Ŀ��ͨ��ID�б�
             uSrcChanNum:  ����Ŀ��ͨ������
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:����˯�߳ɹ���
             ����:   ����˯��ʧ��
*****************************************************************************/
extern BSP_U32 BSP_SOCP_SleepOut(BSP_U32 *pu32SrcChanID, BSP_U32 uSrcChanNum, BSP_U32 *pu32DstChanID, BSP_U32 uDstChanNum);
#endif

#if 0
/*****************************************************************************
* �� �� ��  : BSP_MspProcReg
*
* ��������  : DRV�ṩ��OM��ע�ắ��
*
* �������  : MSP_PROC_ID_E eFuncID, BSP_MspProc pFunc
* �������  : NA
*
* �� �� ֵ  : NA
*
* ����˵��  : ��ά�ɲ�ӿں���
*
*****************************************************************************/
extern void BSP_MspProcReg(MSP_PROC_ID_E eFuncID, BSP_MspProc pFunc);
#endif
/*****************************************************************************
 �� �� ��  : memReadApi
 ��������  : ��32λ��Ȳ�ѯ�ڴ棬���4�ֽ����ݡ���ά�ɲ⣬V7�ȴ�׮
 �������  : ulAddress����ѯ��ַ�ռ��ַ����ַ�����ڴ淶Χ�ڣ����򷵻�-1��
 �������  : pulData��ָ���ѯ���ݵ�ָ�롣
 �� �� ֵ  : 0:  �����ɹ���
             -1������ʧ�ܡ�
*****************************************************************************/
extern int BSP_MEM_READ (unsigned int ulAddress, unsigned int* pulData);


extern BSP_S32  BSP_StartModeGet(BSP_VOID);

/*****************************************************************************
 �� �� ��  : BSP_CHG_StateSet
 ��������  :chg_state_set(UINT32 ulstate)��A�˵�ӳ�亯��,ʹ�ܻ��߽�ֹ���
 �������  :ulState      0:��ֹ���
 						  1:ʹ�ܳ��
 �������  :��
 ����ֵ��    ��
*****************************************************************************/
void BSP_CHG_StateSet(unsigned long ulState);


/************************Build�Ż� END********************************/

/*************************DPM START***********************************/
/*****************************************************************************
 �� �� ��  : BSP_PWRCTRL_DeepSleepForever
 ��������  : AARM CARM �µ�ӿ�
 �������  : None
 �������  : None
 �� �� ֵ  : None

*****************************************************************************/
extern void BSP_PWRCTRL_DeepSleepForever(void );

/*****************************************************************************
 �� �� ��  : BSP_PWRCTRL_AhbBakAddrAlloc
 ��������  : arm���µ繦�ܣ���Ҫ����ahb���ݣ��ýӿ��������ݱ����ַ�ͳ���
 �������  : length     ��������ռ��С��ָ��
 �������  : ��
 �� �� ֵ  : ����ռ�ĵ�ַ ��
*****************************************************************************/
/*V3R2 CS f00164371������ӿ���ʱ������*/
extern void * BSP_PWRCTRL_AhbBakAddrAlloc(unsigned int * length);

/*****************************************************************************
 �� �� ��  : BSP_PWRCTRL_GetCpuLoad
 ��������  : arm cpuռ���ʲ�ѯ����
 �������  : ��
 �������  : ulAcpuLoad:Acpuռ���ʵ�ַ.
             ulCcpuLoad:Ccpuռ���ʵ�ַ.
 �� �� ֵ  : 0/1 ��
*****************************************************************************/
extern int BSP_PWRCTRL_GetCpuLoad(unsigned int *ulAcpuLoad,unsigned int *ulCcpuLoad);

/*****************************************************************************
 �� �� ��  : BSP_PWRCTRL_UsbLowPowerEnter
 ��������  : USB����͹��Ľӿ�
 �������  : None
 �������  : None
 �� �� ֵ  : None
*****************************************************************************/
extern void BSP_PWRCTRL_UsbLowPowerEnter(void);

/*****************************************************************************
 �� �� ��  : BSP_PWRCTRL_UsbLowPowerEnter
 ��������  : USB�˳��͹��Ľӿ�
 �������  : None
 �������  : None
 �� �� ֵ  : None
*****************************************************************************/
extern void BSP_PWRCTRL_UsbLowPowerExit(void);

/*************************DPM END*************************************/

#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
/**********************************NEW PMU INTERFACE BEGIN*******************************************/
/*ͨ��ģ�鹩��� CONSUMER��idö��*/
typedef enum
{
    CH0_PA_VCC,/* PA��VCC*/
    CH0_PA_VBIAS,/* PA��ƫ�õ�Դ*/
    CH0_SWITCH_VCC,/* ����2.8V��Դ*/
    CH0_RFIC_TX_ANA,/* RFIC TXģ���Դ*/
    CH0_RFIC_RX_ANA,/* RFIC RXģ��1.8V��Դ*/
    CH0_FEM_VIO,/*FEM��VIO��Դ1.8V*/
    CH0_TUNNER_VCC,/*ǰ��Tunner VCC��Դ*/


    CH1_PA_VCC,/*PA��VCC*/
    CH1_PA_VBIAS,/* PA��ƫ�õ�Դ*/
    CH1_SWITCH_VCC,/* ����2.8V��Դ*/
    CH1_RFIC_TX_ANA,/* RFIC TXģ���Դ*/
    CH1_RFIC_RX_ANA,/* RFIC RXģ��1.8V��Դ*/
    CH1_FEM_VIO,/*FEM��VIO��Դ1.8V*/
    CH1_TUNNER_VCC,/*ǰ��Tunner VCC��Դ*/
    CH0_RFIC_XO_2P85,
    CH1_RFIC_XO_2P85,
    /*����RF ��Դ���޸� MODEM_RF_COMSUMER_ID_BUTT*/
    MODEM_SIM0,
    MODEM_SIM1,
    MODEM_CONSUMER_ID_MAX
}EM_MODEM_CONSUMER_ID;

/*****************************************************************************
 �� �� ��  : bsp_pastar_exc_check
 ��������  : ͨ��ģ����PASTAR�Ƿ����쳣�ӿ�
 �������  : modem_id       ����
 �������  : ��
 �� �� ֵ  : BSP_OK          û���쳣
             BSP_ERROR       �����쳣
*****************************************************************************/
extern BSP_S32 bsp_pastar_exc_check(PWC_COMM_MODEM_E modem_id);
/*****************************************************************************
 �� �� ��  : bsp_modem_voltage_set
 ��������  : ͨ��ģ�����õ�ѹ�ӿ�
 �������  : consumer_id     �û�id
             voltage_mv      ���õĵ�ѹֵ����
 �������  : ��
 �� �� ֵ  : BSP_OK          ���óɹ�
             BSP_ERROR       ����ʧ��
*****************************************************************************/
extern BSP_S32 bsp_modem_voltage_set(EM_MODEM_CONSUMER_ID_E consumer_id, BSP_U32 voltage_mv);
/*****************************************************************************
 �� �� ��  : bsp_modem_voltage_get
 ��������  : ͨ��ģ���ȡ��ѹ�ӿ�
 �������  : consumer_id     �û�id
             voltage_mv      ��õĵ�ѹֵ����
 �������  : ��
 �� �� ֵ  : BSP_OK          ��ȡ�ɹ�
             BSP_ERROR       ��ȡʧ��
*****************************************************************************/
extern BSP_S32 bsp_modem_voltage_get(EM_MODEM_CONSUMER_ID_E consumer_id, BSP_U32 *voltage_mv);

/*****************************************************************************
 �� �� ��  : bsp_modem_voltage_list
 ��������  : ͨ��ģ���ȡ��ѹ���÷�Χ�ӿ�
 �������  : consumer_id     �û�id
             list            ��ѹ��Χ����
             size            �����С
 �������  : ��
 �� �� ֵ  : BSP_OK          ��ȡ�ɹ�
             BSP_ERROR       ��ȡʧ��
*****************************************************************************/
extern BSP_S32 bsp_modem_voltage_list(EM_MODEM_CONSUMER_ID_E consumer_id,BSP_U16 **list, BSP_U32 *size);
/*****************************************************************************
 �� �� ��  : bsp_modem_apt_enable
 ��������  : ͨ��ģ��ʹ��APT�ӿ�
 �������  : modem_id       ����
             mode_id        ͨ��ģʽ
 �������  : ��
 �� �� ֵ  : BSP_OK         ���óɹ�
             BSP_ERROR      ����ʧ��
*****************************************************************************/
extern BSP_S32 bsp_modem_apt_enable(PWC_COMM_MODEM_E modem_id, PWC_COMM_MODE_E mode_id);

/*****************************************************************************
 �� �� ��  : bsp_modem_apt_disable
 ��������  : ͨ��ģ��ȥʹ��APT�ӿ�
 �������  : modem_id       ����
             mode_id        ͨ��ģʽ
 �������  : ��
 �� �� ֵ  : BSP_OK         ���óɹ�
             BSP_ERROR      ����ʧ��
*****************************************************************************/
extern BSP_S32 bsp_modem_apt_disable(PWC_COMM_MODEM_E modem_id, PWC_COMM_MODE_E mode_id);

/*****************************************************************************
 �� �� ��  : bsp_modem_apt_status_get
 ��������  : ͨ��ģ���ȡ��ǰAPT״̬�ӿ�
 �������  : modem_id       ����
             mode_id        ͨ��ģʽ
 �������  : ��
 �� �� ֵ  : PWRCTRL_COMM_ON     APTʹ��
             PWRCTRL_COMM_OFF    APTδʹ��
             BSP_ERROR           ��ȡʧ��
*****************************************************************************/
extern BSP_S32 bsp_modem_apt_status_get(PWC_COMM_MODEM_E modem_id, PWC_COMM_MODE_E mode_id);


/*****************************************************************************
 �� �� ��  : bsp_modem_mode_config
 ��������  : ͨ��ģ������Gģ��Wģ�ӿ�
 �������  : modem_id       ����
             mode_id        ͨ��ģʽ
 �������  : ��
 �� �� ֵ  : BSP_OK         ���óɹ�
             BSP_ERROR      ����ʧ��
*****************************************************************************/
extern BSP_S32 bsp_modem_mode_config(PWC_COMM_MODEM_E modem_id, PWC_COMM_MODE_E mode_id);

/**********************************NEW PMU INTERFACE END*******************************************/
#endif


/************************V3R2��ʵ�ֵ� START***************************/

/*****************************************************************************
* �� �� ��  : BSP_OM_DspAHBReset

* ��������  : ZSP AHB���߸�λ
* �������  : ��
* �������  : ��
* �� �� ֵ  : ��
* ����˵��  : ��
*****************************************************************************/
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
extern BSP_VOID BSP_OM_DspAHBReset(BSP_VOID);
#else
#endif
/*****************************************************************************
* �� �� ��  : BSP_OM_DspAHBResetCancel
* ��������  : ZSP AHB���߽⸴λ
* �������  : ��
* �������  : ��
* �� �� ֵ  : ��
* ����˵��  : ��
*****************************************************************************/
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
extern BSP_VOID BSP_OM_DspAHBResetCancel(BSP_VOID);
#else
#endif

/************************V3R2��ʵ�ֵ� END*****************************/

#ifdef __cplusplus
    #if __cplusplus
        }    
    #endif   
#endif       
             
             
#endif /* end of __DRV_INTERFACE_INNER_H__ */
