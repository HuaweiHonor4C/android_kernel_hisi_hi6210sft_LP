/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : OmRl.h
  �� �� ��   : ����
  ��    ��   : ���� 46160
  ��������   : 2008��6��11��
  ����޸�   :
  ��������   : OmRl.h ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2008��6��11��
    ��    ��   : ���� 46160
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __OMAPPRL_H__
#define __OMAPPRL_H__

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "vos.h"
#include "omrl.h"
#include "OmHdlcInterface.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/
extern VOS_UINT32                          g_ulOmAcpuDbgFlag ;


#define BIT_N(num)          (0x01 << (num))

#define OM_ACPU_RECV_USB        BIT_N(0)
#define OM_ACPU_DISPATCH_MSG    BIT_N(1)
#define OM_ACPU_SEND_SOCP       BIT_N(2)
#define OM_ACPU_SEND_USB        BIT_N(3)
#define OM_ACPU_USB_CB          BIT_N(4)
#define OM_ACPU_DIAG            BIT_N(5)
#define OM_ACPU_ERRLOG_SEND     BIT_N(6)
#define OM_ACPU_ERRLOG_RCV      BIT_N(7)
#define OM_ACPU_ERRLOG_PRINT    BIT_N(8)
#define OM_ACPU_RECV_CBT        BIT_N(9)
#define OM_ACPU_VCOM_CB         BIT_N(10)
#define OM_ACPU_SN_CHECK        BIT_N(11)

#define OM_ACPU_DEBUG_TRACE(pucData, ulDataLen, ulSwitch) \
    if(VOS_FALSE != (g_ulOmAcpuDbgFlag&ulSwitch)) \
    { \
        VOS_UINT32 ulOmDbgIndex; \
        vos_printf("\n%s, Data Len: = %d\n", __FUNCTION__, ulDataLen); \
        for (ulOmDbgIndex = 0 ; ulOmDbgIndex < ulDataLen; ulOmDbgIndex++) \
        { \
            vos_printf("%02x ", *((VOS_UINT8*)pucData + ulOmDbgIndex)); \
        } \
        vos_printf("\r\n"); \
    } \


#define OM_ACPU_DEBUG_CHANNEL_TRACE(enChanID, pucData, ulDataLen, ulSwitch) \
    if(VOS_FALSE != (g_ulOmAcpuDbgFlag&ulSwitch)) \
    { \
        VOS_UINT32 ulOmDbgIndex; \
        vos_printf("\n%s, channal ID: = %d, Data Len: = %d\n", __FUNCTION__, enChanID, ulDataLen); \
        for (ulOmDbgIndex = 0 ; ulOmDbgIndex < ulDataLen; ulOmDbgIndex++) \
        { \
            vos_printf("%02x ", *((VOS_UINT8*)pucData + ulOmDbgIndex)); \
        } \
        vos_printf("\r\n"); \
    } \

/* ����ErrLog ��ӡ */
#define OM_ERR_LOG(string) \
    if(VOS_FALSE != (g_ulOmAcpuDbgFlag & OM_ACPU_ERRLOG_PRINT)) \
    {\
        vos_printf("%s.\r\n",string);\
    }\

#define OM_ERR_LOG1(string, para1) \
    if(VOS_FALSE != (g_ulOmAcpuDbgFlag & OM_ACPU_ERRLOG_PRINT)) \
    {\
        vos_printf("%s %d.\r\n", string, para1);\
    }\

#define OM_ERR_LOG2(string, para1, para2) \
    if(VOS_FALSE != (g_ulOmAcpuDbgFlag & OM_ACPU_ERRLOG_PRINT)) \
    {\
        vos_printf("%s %d, %d.\r\n", string, para1, para2);\
    }\




/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/

/*****************************************************************************
  4 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  6 STRUCT����
*****************************************************************************/

/*****************************************************************************
�ṹ��    : OMRL_MSG_COMBINE_INFO_STRU
�ṹ˵��  : OMRLģ����������Ҫ����Ϣ�ṹ
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucTotalSegNum;      /* �ܵķֶ��� */
    VOS_UINT8                           ucExpectedSegSn;    /* ��������������õ�����Ϣ����� */
    VOS_UINT16                          usRsv;
    VOS_UINT32                          ulTotalMsgLen;      /* ����������������Ϣ�ܵĳ��� */
    VOS_UINT32                          ulMoveLen;          /* ���������ÿ����һ��Ϣ�����ƫ�� */
    MsgBlock                           *pstWholeMsg;        /*ָ�����������������Ϣ��*/
}OMRL_MSG_COMBINE_INFO_STRU;

/*****************************************************************************
�ṹ��    : OMRL_RCV_CHAN_CTRL_INFO_STRU
�ṹ˵��  : OMRLģ��ͨ��������Ϣ�ṹ
*****************************************************************************/
typedef struct
{
    OM_LOGIC_CHANNEL_ENUM_UINT32        enChannel;
    VOS_UINT32                          ulOMSwitchOnOff;
    OMRL_MSG_COMBINE_INFO_STRU          stMsgCombineInfo;

    OM_ACPU_PC_UE_FAIL_STRU             stPcToUeErrRecord;
    OM_ACPU_PC_UE_SUC_STRU              stPcToUeSucRecord;
}OMRL_RCV_CHAN_CTRL_INFO_STRU;

/*****************************************************************************
�ṹ��    : OMRL_CBT_HDLC_ENCODE_MEM_CTRL
�ṹ˵��  : OMRL CBTУ׼ͨ��HDLC����������Ϣ�ṹ(uncache)
*****************************************************************************/
typedef struct
{
    VOS_UINT8                          *pucBuf;         /* ָ�򻺳��������׵�ַ */
    VOS_UINT8                          *pucRealBuf;     /* ָ�򻺳���ʵ�׵�ַ */
    VOS_UINT32                          ulBufSize;      /* ���滺�����ܴ�С */
    VOS_UINT32                          ulRsv;          /* Reserve */
}OMRL_CBT_HDLC_ENCODE_MEM_CTRL;

/*****************************************************************************
  7 ȫ�ֱ�������
*****************************************************************************/
/* CNFͨ��������Ϣȫ�ֱ��� */
extern OMRL_RCV_CHAN_CTRL_INFO_STRU            g_stAcpuCnfCtrlInfo;

/* CBTͨ��������Ϣȫ�ֱ��� */
extern OMRL_RCV_CHAN_CTRL_INFO_STRU            g_stAcpuCbtCtrlInfo;

extern OMRL_MNTN_TX_CHAN_CTRL_INFO_STRU        g_stAcpuTxCnfCtrlInfo;
extern OMRL_MNTN_TX_CHAN_CTRL_INFO_STRU        g_stAcpuTxIndCtrlInfo;

extern VOS_SEM                                 g_ulOmTxCbtSem;

/*��¼��ʼʱ��*/
extern VOS_UINT32                              g_ulAcpuLastTick;

/*��¼�ֽڳ���*/
extern VOS_UINT32                              g_ulAcpuLastByteCnt;

#ifdef SCM_SNCHECK
extern OM_HDLC_STRU                            g_astSnCheckHdlcEntity[2];
#endif

/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/



/*****************************************************************************
  10 ��������
*****************************************************************************/
extern VOS_UINT32 GU_OamSndPcMsgToCcpu(OMRL_RCV_CHAN_CTRL_INFO_STRU *pstCtrlInfo, VOS_UINT8 *pucData, VOS_UINT32 ulSize);
VOS_UINT32 OMRL_RcvCnfChannel(SOCP_DECODER_DST_ENUM_U32 enChanlID,VOS_UINT8 *pucData, VOS_UINT32 ulSize, VOS_UINT8 *pucRBData, VOS_UINT32 ulRBSize);
VOS_UINT32 OMRL_RcvCbtChannel(SOCP_DECODER_DST_ENUM_U32 enChanlID,VOS_UINT8 *pucData, VOS_UINT32 ulSize, VOS_UINT8 *pucRBData, VOS_UINT32 ulRBSize);
VOS_UINT32 OMRL_AcpuCpuIdToPid(VOS_UINT8 ucCpuId, VOS_UINT32 *pulPid);
VOS_UINT32 OMRL_AcpuMsgCombine(OMRL_RCV_CHAN_CTRL_INFO_STRU *pstCtrlInfo, VOS_UINT8 *pucData, VOS_UINT16 usLen);
VOS_UINT32 OMRL_AcpuSendMsg(VOS_UINT8 *pucData, VOS_UINT32 ulSize, VOS_UINT32 ulSenderPid, VOS_UINT32 ulReceiverPid);
VOS_UINT32 OMRL_AcpuReportEvent(VOS_VOID);
VOS_UINT32 OMRL_AcpuInit(VOS_VOID);
VOS_UINT32 OMRL_AcpuUsbFrameInit(VOS_VOID);
VOS_UINT32 OMRL_AcpuHeadProc(OMRL_RCV_CHAN_CTRL_INFO_STRU *pstCtrlInfo, VOS_UINT8 *pucData, VOS_UINT32 ulSize);
VOS_UINT32 OMRL_AcpuSendCbtData(VOS_UINT8  *pucSrc, VOS_UINT16  usSrcLen);

VOS_UINT32 OMRL_AcpuSendMsg(VOS_UINT8 *pucData, VOS_UINT32 ulSize,
                            VOS_UINT32 ulSenderPid, VOS_UINT32 ulReceiverPid);
VOS_UINT32 OMRL_AcpuReleaseSocpData(OMRL_MNTN_TX_CHAN_CTRL_INFO_STRU *pstCtrlInfo);
VOS_UINT32 OMRL_AcpuSendSocpData(OMRL_MNTN_TX_CHAN_CTRL_INFO_STRU *pstCtrlInfo, VOS_UINT8 *pucHead, VOS_UINT32 ulHeadLen,
                            VOS_UINT8 *pucData, VOS_UINT32 ulDataLen);
VOS_UINT32 OMRL_AcpuIsBDEnough(OMRL_MNTN_TX_CHAN_CTRL_INFO_STRU *pstCtrlInfo, VOS_UINT8 ucMsgCnt);
VOS_UINT32 OMRL_AcpuMsgSplit(OMRL_MNTN_TX_CHAN_CTRL_INFO_STRU *pstCtrlInfo, VOS_UINT8 *pucMsg, VOS_UINT16 usMsgLen);

VOS_VOID   OmAcpuRate(VOS_VOID);

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

#endif /* end of OmRl.h */

