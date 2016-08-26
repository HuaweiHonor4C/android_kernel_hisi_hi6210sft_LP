/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : omnosig.h
  �� �� ��   : ����
  ��    ��   : ����47350
  ��������   : 2011��9��27��

  ����޸�   :
  ��������   : omnosig.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2011��9��27��
    ��    ��   : ����47350
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __OMBBPMASTER_H__
#define __OMBBPMASTER_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#ifndef _SDR_FEATURE_ON
#include "vos.h"
#endif

#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define OM_BBPMASTER_IPC_LOCK_IDLE                      (0)
#define OM_BBPMASTER_IPC_LOCK_BUSY                      (9)

#define OM_BBPMASTER_WR_CHAN_CNT                        (5) /* �����GUX��дͨ����Ŀ */
#define OM_BBPMASTER_RD_CHAN_CNT                        (4) /* �����GUX��дͨ����Ŀ */

#define OM_BBPMASTER_WR_CHANNEL                         (0) /* BBP Masterдͨ�� */
#define OM_BBPMASTER_RD_CHANNEL                         (1) /* BBP Masterдͨ�� */

/*��ǰ��¼�ļ�����������ṹ����ʹ����Ҫ4�ֽڶ���*/
#define OM_BBPMASTER_LOG_FILE_NAME_LEN                  (0x10)


#define OM_BBP_MASTER_LOG_FILE_MAX_SIZE                 (0x400)
#define OM_FILE_OPEN_MODE_RW                            "ab+"   /* ��bin�ļ����ں�׷��д�� */
#define OM_FILE_OPEN_MODE_NEW_RW                        "wb+"   /* ��bin�ļ�����ͷ��ʼ����׷��д�� */

#define OM_IPC_SEM_INT_MASK(i)                          (0x604 + (i * 0x10))                /* �ź����ͷ��ж�����Ĵ��� */
#define OM_IPC_SEM_INT_CLR(i)                           (0x60C + (i * 0x10))                /* �ź����ͷ��ж�����Ĵ��� */
#define OM_IPC_HS_CTRL(i,j)                             (0x800 + (i * 0x100) + (j * 0x8 ))  /* �ź�������Ĵ��� */

#if ( VOS_WIN32 == VOS_OS_VER )
#define IPC_SEM_BBPMASTER_0                             (10)    /* IPC��Դ��10������дͨ��0���Ᵽ�� */
#define IPC_SEM_BBPMASTER_1                             (11)    /* IPC��Դ��11������дͨ��1���Ᵽ�� */
#define IPC_SEM_BBPMASTER_2                             (12)    /* IPC��Դ��12������дͨ��2���Ᵽ�� */
#define IPC_SEM_BBPMASTER_3                             (13)    /* IPC��Դ��13������дͨ��3���Ᵽ�� */
#define IPC_SEM_BBPMASTER_4                             (14)    /* IPC��Դ��14������дͨ��4���Ᵽ�� */
#define IPC_SEM_BBPMASTER_5                             (15)    /* IPC��Դ��15�����ڶ�ͨ��0���Ᵽ�� */
#define IPC_SEM_BBPMASTER_6                             (16)    /* IPC��Դ��16�����ڶ�ͨ��1���Ᵽ�� */
#define IPC_SEM_BBPMASTER_7                             (17)    /* IPC��Դ��17�����ڶ�ͨ��2���Ᵽ�� */
#define IPC_SEM_BBPMASTER_8                             (18)    /* IPC��Դ��18�����ڶ�ͨ��3���Ᵽ�� */
#endif

#if ( VOS_VXWORKS == VOS_OS_VER )
#if (FEATURE_ON == FEATURE_MULTI_FS_PARTITION)
#define OM_BBPMASTER_LOG_PATH                           "/mlog:0/DrvLog/OmBbpMasterError"

#define OM_BBPMASTER_LOGCTRL_FILE                       "/mlog:0/DrvLog/OmBbpMasterError/OmBbpMasterlogctrl.bin"
#else
#define OM_BBPMASTER_LOG_PATH                           "/yaffs0/DrvLog/OmBbpMasterError"

#define OM_BBPMASTER_LOGCTRL_FILE                       "/yaffs0/DrvLog/OmBbpMasterError/OmBbpMasterlogctrl.bin"
#endif
#endif

#ifdef _SDR_FEATURE_ON
#define BBE16_PID_RESERVED                              (19)
#endif

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
enum OM_BBPMASTER_CFG_DECFG_TYPE_ENUM
{
    OM_BBPMASTER_CONFIG_NONE                = 0,    /* ����ͨ���ӿڷ���ֵö��: δ���� */
    OM_BBPMASTER_CONFIG_SUCC                = 1,    /* ʹ������ͨ���ӿڷ���ֵö��: ���óɹ� */
    OM_BBPMASTER_PARA_CHANID_INVALID        = 2,    /* ʹ������ͨ���ӿڷ���ֵö��: ���ú���Ч */
    OM_BBPMASTER_PARA_CFG_NULL              = 3,    /* ʹ������ͨ���ӿڷ���ֵö��: ���ò���Ϊ��ָ�� */
    OM_BBPMASTER_PARA_CFG_WORKMODE          = 4,    /* ʹ������ͨ���ӿڷ���ֵö��: ���ù���ģʽ�������� */
    OM_BBPMASTER_PARA_CFG_CLOCKSEL          = 5,    /* ʹ������ͨ���ӿڷ���ֵö��: ����ʱ��ѡ��������� */
    OM_BBPMASTER_PARA_CFG_AXISEL            = 6,    /* ʹ������ͨ���ӿڷ���ֵö��: ����AXIѡ��������� */
    OM_BBPMASTER_PARA_CFG_BURSTLEN          = 7,    /* ʹ������ͨ���ӿڷ���ֵö��: ����BurstLen�������� */
    OM_BBPMASTER_CONFIG_CHAN_COLLIDE        = 8,    /* ʹ������ͨ���ӿڷ���ֵö��: �������ó�ͻ */
    OM_BBPMASTER_LOCK_IPC_FAIL              = 9,    /* ʹ������ͨ���ӿڷ���ֵö��: ��ȡIPC��Դ��ʧ�� */
    OM_BBPMASTER_DECONFIG_PARA_INVALID      = 10,   /* ȥʹ������ͨ���ӿڷ���ֵö��: ���ò�����Ч */
    OM_BBPMASTER_DECFG_PARA_NULL            = 11,   /* ȥʹ������ͨ���ӿڷ���ֵö��: ���ò���Ϊ��ָ�� */
    OM_BBPMASTER_DECFG_CHAN_IDLE            = 12,   /* ȥʹ������ͨ���ӿڷ���ֵö��: ����ȥʹ��ͨ��״̬ΪIDLE */
    OM_BBPMASTER_DECFG_PID_CHANGE           = 13,   /* ȥʹ������ͨ���ӿڷ���ֵö��: ͨ����ʹ��PID��ȥʹ��PID��ͬ */
    OM_BBPMASTER_DECFG_SUCC                 = 14,   /* ȥʹ������ͨ���ӿڷ���ֵö��: ���óɹ� */
    OM_BBPMASTER_CFG_DECFG_TYPE_BUTT
};

#ifdef _SDR_FEATURE_ON
typedef unsigned long OM_BBPMASTER_CFG_DECFG_TYPE_ENUM_UINT32;
#else
typedef VOS_UINT32 OM_BBPMASTER_CFG_DECFG_TYPE_ENUM_UINT32;
#endif

enum OM_BBPMASTER_CHAN_STATE_ENUM
{
    OM_BBPMASTER_CHAN_STATE_IDLE            = 0,    /* ͨ��״̬:δʹ��״̬ */
    OM_BBPMASTER_CHAN_STATE_BUSY            = 1,    /* ͨ��״̬:��ʹ��״̬ */
    OM_BBPMASTER_CHAN_STATE_BUTT
};

#ifdef _SDR_FEATURE_ON
typedef unsigned long OM_BBPMASTER_CHAN_STATE_ENUM_UINT32;
#else
typedef VOS_UINT32 OM_BBPMASTER_CHAN_STATE_ENUM_UINT32;
#endif

enum OM_BBPMASTER_WORKMODE_ENUM
{
    OM_BBPMASTER_WORKMODE_DISABLE           = 0,    /* 3'b000 ��ͨ����ʹ��
                                                            ��ʱ��ͨ����ǰ����BBP���valid/readyΪ0��
                                                            ��󼶵Ķ�д���Ʋ��ٷ����µĶ�/д����
                                                            ������еĶ�дͨ����û����������master�ڱ��ͷţ�����״̬��cpu�ӿ��ϱ���
                                                            �����ϸ�״̬�������ſػ�������� */
    OM_BBPMASTER_WORKMODE_INTERFACE_1       = 1,    /* 3'b001��ͨ�����ø���һ��ӿ�ʹ�� */
    OM_BBPMASTER_WORKMODE_INTERFACE_2       = 2,    /* 3'b010��ͨ�����ø��ڶ���ӿ�ʹ�� */
    OM_BBPMASTER_WORKMODE_RESERVE           = 3,    /* 3'b100��ͨ�����ø�������ӿ�ʹ�� */
    OM_BBPMASTER_WORKMODE_INTERFACE_3       = 4,
    OM_BBPMASTER_WORKMODE_BUTT
};

#ifdef _SDR_FEATURE_ON
typedef unsigned long OM_BBPMASTER_WORKMODE_ENUM_UINT32;
#else
typedef VOS_UINT32 OM_BBPMASTER_WORKMODE_ENUM_UINT32;
#endif

enum OM_BBPMASTER_CLOCKSEL_ENUM
{
    OM_BBPMASTER_CLOCKSEL_RESERVE_0         = 0,    /* ����ʱ����ö��ֵ����Ч */
    OM_BBPMASTER_CLOCKSEL_1                 = 1,    /* 3'b001����ͨ��������ӿ�ʹ�õ�һ��ʱ����,104MHz��Ϊgģ�Ĺ���ʱ�ӣ� */
    OM_BBPMASTER_CLOCKSEL_2                 = 2,    /* 3'b010����ͨ��������ӿ�ʹ�õڶ���ʱ����,122.88MHz��
                                                             ΪCģ�Լ�Uģ�г���������߼��Ĺ���ʱ�ӣ��Ҹ�ģ��cpu�ӿ�Ҳʹ�ø�ʱ���� */
    OM_BBPMASTER_CLOCKSEL_RESERVE           = 3,    /* ����ʱ����ö��ֵ����Ч */
    OM_BBPMASTER_CLOCKSEL_3                 = 4,    /* 3'b100����ͨ��������ӿ�ʹ�õ�����ʱ����,
                                                            245.76MHz��ΪUģ������Ĺ���ʱ�ӣ� */
    OM_BBPMASTER_CLOCKSEL_BUTT
};

#ifdef _SDR_FEATURE_ON
typedef unsigned long OM_BBPMASTER_CLOCKSEL_ENUM_UINT32;
#else
typedef VOS_UINT32 OM_BBPMASTER_CLOCKSEL_ENUM_UINT32;
#endif

enum OM_BBPMASTER_BURST_LEN_ENUM
{
    OM_BBPMASTER_BURST_LEN_1                = 0,    /* 4'b0000��Ӧburst1 */
    OM_BBPMASTER_BURST_LEN_2                = 1,    /* 4'b0001��Ӧburst2 */
    OM_BBPMASTER_BURST_LEN_3                = 2,    /* 4'b0010��Ӧburst3 */
    OM_BBPMASTER_BURST_LEN_4                = 3,    /* 4'b0011��Ӧburst4 */
    OM_BBPMASTER_BURST_LEN_5                = 4,    /* 4'b0100��Ӧburst5 */
    OM_BBPMASTER_BURST_LEN_6                = 5,    /* 4'b0101��Ӧburst6 */
    OM_BBPMASTER_BURST_LEN_7                = 6,    /* 4'b0110��Ӧburst7 */
    OM_BBPMASTER_BURST_LEN_8                = 7,    /* 4'b0111��Ӧburst8 */
    OM_BBPMASTER_BURST_LEN_9                = 8,    /* 4'b1000��Ӧburst9 */
    OM_BBPMASTER_BURST_LEN_10               = 9,    /* 4'b1001��Ӧburst10 */
    OM_BBPMASTER_BURST_LEN_11               = 10,   /* 4'b1010��Ӧburst11 */
    OM_BBPMASTER_BURST_LEN_12               = 11,   /* 4'b1011��Ӧburst12 */
    OM_BBPMASTER_BURST_LEN_13               = 12,   /* 4'b1100��Ӧburst13 */
    OM_BBPMASTER_BURST_LEN_14               = 13,   /* 4'b1101��Ӧburst14 */
    OM_BBPMASTER_BURST_LEN_15               = 14,   /* 4'b1110��Ӧburst15 */
    OM_BBPMASTER_BURST_LEN_16               = 15,   /* 4'b1111��Ӧburst16,��Ĭ��ʹ�ã� */
    OM_BBPMASTER_BURST_LEN_BUTT
};

#ifdef _SDR_FEATURE_ON
typedef unsigned long OM_BBPMASTER_BURST_LEN_ENUM_UINT32;
#else
typedef VOS_UINT32 OM_BBPMASTER_BURST_LEN_ENUM_UINT32;
#endif

enum OM_BBPMASTER_AXI_SEL_ENUM
{
    OM_BBPMASTER_AXI_SEL_INTERFACE1         = 0,    /* ͨ��ѡ��ʹ�õ�master��1 */
    OM_BBPMASTER_AXI_SEL_INTERFACE2         = 1,    /* ͨ��ѡ��ʹ�õ�master��2 */
    OM_BBPMASTER_AXI_SEL_BUTT
};

#ifdef _SDR_FEATURE_ON
typedef unsigned long OM_BBPMASTER_AXI_SEL_ENUM_UINT32;
#else
typedef VOS_UINT32 OM_BBPMASTER_AXI_SEL_ENUM_UINT32;
#endif

/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/

/*****************************************************************************
  7 STRUCT����
*****************************************************************************/
#ifndef _SDR_FEATURE_ON
typedef struct
{
    OM_BBPMASTER_CHAN_STATE_ENUM_UINT32         enChanState;    /* ͨ������״̬ */
    VOS_PID                                     ulConfigPID;    /* ͨ��������ɵ�PID */
    VOS_UINT32                                  ulConfigSlice;  /* ͨ���������ʱ�� */
}BBPMASTER_ENTITY_STRU;

typedef struct
{
    OM_BBPMASTER_CFG_DECFG_TYPE_ENUM_UINT32     enResult;       /* �ӿ����ý�� */
    VOS_PID                                     ulConfigPID;    /* �������ýӿڵ�PID */
    VOS_UINT32                                  ulConfigSlice;  /* �������ýӿ�ʱ�� */
}BBPMASTER_ERROR_STRU;

typedef struct
{
    OM_BBPMASTER_WORKMODE_ENUM_UINT32           enWorkMode;     /* ʹ��дͨ�����ò���:����ģʽ */
    OM_BBPMASTER_CLOCKSEL_ENUM_UINT32           enClockSel;     /* ʹ��дͨ�����ò���:ʱ��ѡ�� */
    OM_BBPMASTER_AXI_SEL_ENUM_UINT32            enAxiSel;       /* ʹ��дͨ�����ò���:AXIͨ��ѡ�� */
    VOS_UINT32                                  ulStartAddr;    /* ʹ��дͨ�����ò���:дͨ����ʼ��ַ */
    VOS_UINT32                                  ulEndAddr;      /* ʹ��дͨ�����ò���:дͨ����ֹ��ַ */
    OM_BBPMASTER_BURST_LEN_ENUM_UINT32          enBurstLen;     /* ʹ��дͨ�����ò���:Burst�������� */
}BBPMASTER_WR_CHANNEL_CONFIG_STRU;

typedef struct
{
    VOS_UINT32                                  ulWorkModeAddr; /* дͨ�����ò���:����ģʽ���üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
    VOS_UINT32                                  ulClockSelAddr; /* дͨ�����ò���:ʱ��ѡ�����üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
    VOS_UINT32                                  ulAxiSelAddr;   /* дͨ�����ò���:AXIͨ��ѡ�����üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
    VOS_UINT32                                  ulStartAddr;    /* дͨ�����ò���:дͨ����ʼ��ַ���üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
    VOS_UINT32                                  ulEndAddr;      /* дͨ�����ò���:дͨ����ֹ��ַ���üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
    VOS_UINT32                                  ulBurstLenAddr; /* дͨ�����ò���:Burst�����������üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
}BBPMASTER_WR_CHANNEL_CONFIG_ADDR_STRU;

typedef struct
{
    OM_BBPMASTER_WORKMODE_ENUM_UINT32           enWorkMode;     /* ȥʹ��ͨ�����ò���:����ģʽ���üĴ��� */
    OM_BBPMASTER_CLOCKSEL_ENUM_UINT32           enClockSel;     /* ȥʹ��ͨ�����ò���:ʱ��ѡ�����üĴ��� */
}BBPMASTER_CHANNEL_DECONFIG_STRU;

typedef struct
{
    OM_BBPMASTER_WORKMODE_ENUM_UINT32           enWorkMode;     /* ʹ�ܶ�ͨ�����ò���:����ģʽ */
    OM_BBPMASTER_CLOCKSEL_ENUM_UINT32           enClockSel;     /* ʹ�ܶ�ͨ�����ò���:ʱ��ѡ�� */
    OM_BBPMASTER_AXI_SEL_ENUM_UINT32            enAxiSel;       /* ʹ�ܶ�ͨ�����ò���:AXIͨ��ѡ�� */
    VOS_UINT32                                  ulStartAddr;    /* ʹ�ܶ�ͨ�����ò���:��ͨ����ʼ��ַ */
    OM_BBPMASTER_BURST_LEN_ENUM_UINT32          enBurstLen;     /* ͨ�����ò���:Burst�������� */
}BBPMASTER_RD_CHANNEL_CONFIG_STRU;

typedef struct
{
    VOS_UINT32                                  ulWorkModeAddr; /* ��ͨ�����ò���:����ģʽ���üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
    VOS_UINT32                                  ulClockSelAddr; /* ��ͨ�����ò���:ʱ��ѡ�����üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
    VOS_UINT32                                  ulAxiSelAddr;   /* ��ͨ�����ò���:AXIͨ��ѡ�����üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
    VOS_UINT32                                  ulStartAddr;    /* ��ͨ�����ò���:��ͨ����ʼ��ַ���üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
    VOS_UINT32                                  ulBurstLenAddr; /* ��ͨ�����ò���:Burst�����������üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
}BBPMASTER_RD_CHANNEL_CONFIG_ADDR_STRU;
#else
typedef struct
{
    OM_BBPMASTER_CHAN_STATE_ENUM_UINT32         enChanState;    /* ͨ������״̬ */
    unsigned long                               ulConfigPID;    /* ͨ��������ɵ�PID */
    unsigned long                               ulConfigSlice;  /* ͨ���������ʱ�� */
}BBPMASTER_ENTITY_STRU;

typedef struct
{
    OM_BBPMASTER_CFG_DECFG_TYPE_ENUM_UINT32     enResult;       /* �ӿ����ý�� */
    unsigned long                               ulConfigPID;    /* �������ýӿڵ�PID */
    unsigned long                               ulConfigSlice;  /* �������ýӿ�ʱ�� */
}BBPMASTER_ERROR_STRU;

typedef struct
{
    OM_BBPMASTER_WORKMODE_ENUM_UINT32           enWorkMode;     /* ʹ��дͨ�����ò���:����ģʽ */
    OM_BBPMASTER_CLOCKSEL_ENUM_UINT32           enClockSel;     /* ʹ��дͨ�����ò���:ʱ��ѡ�� */
    OM_BBPMASTER_AXI_SEL_ENUM_UINT32            enAxiSel;       /* ʹ��дͨ�����ò���:AXIͨ��ѡ�� */
    unsigned long                               ulStartAddr;    /* ʹ��дͨ�����ò���:дͨ����ʼ��ַ */
    unsigned long                               ulEndAddr;      /* ʹ��дͨ�����ò���:дͨ����ֹ��ַ */
    OM_BBPMASTER_BURST_LEN_ENUM_UINT32          enBurstLen;     /* ʹ��дͨ�����ò���:Burst�������� */
}BBPMASTER_WR_CHANNEL_CONFIG_STRU;

typedef struct
{
    unsigned long                               ulWorkModeAddr; /* дͨ�����ò���:����ģʽ���üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
    unsigned long                               ulClockSelAddr; /* дͨ�����ò���:ʱ��ѡ�����üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
    unsigned long                               ulAxiSelAddr;   /* дͨ�����ò���:AXIͨ��ѡ�����üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
    unsigned long                               ulStartAddr;    /* дͨ�����ò���:дͨ����ʼ��ַ���üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
    unsigned long                               ulEndAddr;      /* дͨ�����ò���:дͨ����ֹ��ַ���üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
    unsigned long                               ulBurstLenAddr; /* дͨ�����ò���:Burst�����������üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
}BBPMASTER_WR_CHANNEL_CONFIG_ADDR_STRU;

typedef struct
{
    OM_BBPMASTER_WORKMODE_ENUM_UINT32           enWorkMode;     /* ȥʹ��ͨ�����ò���:����ģʽ���üĴ��� */
    OM_BBPMASTER_CLOCKSEL_ENUM_UINT32           enClockSel;     /* ȥʹ��ͨ�����ò���:ʱ��ѡ�����üĴ��� */
}BBPMASTER_CHANNEL_DECONFIG_STRU;

typedef struct
{
    OM_BBPMASTER_WORKMODE_ENUM_UINT32           enWorkMode;     /* ʹ�ܶ�ͨ�����ò���:����ģʽ */
    OM_BBPMASTER_CLOCKSEL_ENUM_UINT32           enClockSel;     /* ʹ�ܶ�ͨ�����ò���:ʱ��ѡ�� */
    OM_BBPMASTER_AXI_SEL_ENUM_UINT32            enAxiSel;       /* ʹ�ܶ�ͨ�����ò���:AXIͨ��ѡ�� */
    unsigned long                               ulStartAddr;    /* ʹ�ܶ�ͨ�����ò���:��ͨ����ʼ��ַ */
    OM_BBPMASTER_BURST_LEN_ENUM_UINT32          enBurstLen;     /* ͨ�����ò���:Burst�������� */
}BBPMASTER_RD_CHANNEL_CONFIG_STRU;

typedef struct
{
    unsigned long                               ulWorkModeAddr; /* ��ͨ�����ò���:����ģʽ���üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
    unsigned long                               ulClockSelAddr; /* ��ͨ�����ò���:ʱ��ѡ�����üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
    unsigned long                               ulAxiSelAddr;   /* ��ͨ�����ò���:AXIͨ��ѡ�����üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
    unsigned long                               ulStartAddr;    /* ��ͨ�����ò���:��ͨ����ʼ��ַ���üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
    unsigned long                               ulBurstLenAddr; /* ��ͨ�����ò���:Burst�����������üĴ�����ʹ�ܡ�ȥʹ�ܽӿڸ��� */
}BBPMASTER_RD_CHANNEL_CONFIG_ADDR_STRU;
#endif

/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/
#ifndef _SDR_FEATURE_ON
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                                  ulMsgID;        /* BBP Master���ô����ϱ���ϢID */
    VOS_UINT32                                  ulChanType;     /* BBP Masterͨ������:WR/RD */
    VOS_UINT32                                  ulChanId;       /* BBP Masterͨ���� */
    BBPMASTER_ENTITY_STRU                       stEntityInfo;   /* BBP Masterͨ����Ϣ */
    BBPMASTER_ERROR_STRU                        stErrorInfo;    /* BBP Master���ô�����Ϣ */
}BBPMASTER_OM_ERROR_IND_STRU;
#endif


/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/
#define ID_OM_BBP_MASTER_CONFIG_ERROR_IND               (0xF086)

/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
extern OM_BBPMASTER_CFG_DECFG_TYPE_ENUM_UINT32 OM_BbpMasterRdChannelConfig(VOS_PID ulPID,
                                                               VOS_UINT32 ulChanId,
                                                               BBPMASTER_RD_CHANNEL_CONFIG_STRU *pstRdChanCfg);
extern OM_BBPMASTER_CFG_DECFG_TYPE_ENUM_UINT32 OM_BbpMasterRdChannelDeConfig(VOS_PID ulPID,
                                                               VOS_UINT32 ulChanId,
                                                               BBPMASTER_CHANNEL_DECONFIG_STRU *pstChanDeCfg);

extern OM_BBPMASTER_CFG_DECFG_TYPE_ENUM_UINT32 OM_BbpMasterWrChannelConfig(VOS_PID ulPID,
                                                               VOS_UINT32 ulChanId,
                                                               BBPMASTER_WR_CHANNEL_CONFIG_STRU *pstWrChanCfg);
extern OM_BBPMASTER_CFG_DECFG_TYPE_ENUM_UINT32 OM_BbpMasterWrChannelDeConfig(VOS_PID ulPID,
                                                               VOS_UINT32 ulChanId,
                                                               BBPMASTER_CHANNEL_DECONFIG_STRU *pstChanDeCfg);

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of omnosig.h */

