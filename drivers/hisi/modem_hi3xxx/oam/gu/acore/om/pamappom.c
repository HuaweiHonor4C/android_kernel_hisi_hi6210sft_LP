
#include "om.h"
#include "OmApp.h"
#include "omprivate.h"
#include "pslog.h"
#include "omsdlog.h"
#include "cpm.h"
#include "Omappagent.h"
#include "NVIM_Interface.h"
#include "OamSpecTaskDef.h"
#include "GU_MSPComm.h"
#include "OmAppRl.h"
#include "TafNvInterface.h"
#include "SCMProc.h"
#include "OmHsicPpm.h"
#include "SCMSoftDecode.h"
#include "CbtPpm.h"

#if (RAT_MODE != RAT_GU)
#include "msp_nvim.h"
#endif

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /* __cpluscplus */
#endif /* __cpluscplus */

/*****************************************************************************
    Э��ջ��ӡ��㷽ʽ�µ�.C�ļ��궨��
*****************************************************************************/
/*lint -e767*/
#define    THIS_FILE_ID PS_FILE_ID_PAM_APP_OM_C
/*lint +e767*/

/* ��¼ICC�˼���Ϣ�ļ�·�� */
VOS_CHAR                                g_acICCLogFilePath[OM_ICC_MAX_NAME_LEN];

#if (FEATURE_ON == FEATURE_MULTI_FS_PARTITION)
#define  OM_ICC_LOG_PATH                "/data/modemlog/Log/Icc-log"
#define  OM_ICC_UNITARY_LOG_PATH        "/modem_log/Log/Icc-log"
#else
#define  OM_ICC_LOG_PATH                "/yaffs0/Log/Icc-log"
#define  OM_ICC_UNITARY_LOG_PATH        "/modem_log/Log/Icc-log"
#endif

/* ��¼ICC�˼���Ϣ�ļ�����ֵ��Ĭ��0 */
VOS_UINT32                              g_ulICCLogFileIndex;

/* ��¼ICC�˼���ϢBUFF */
OM_ICC_INFO_STRU                        g_astIccRecordInfo[OAM_ICC_RECORD_MAX_NUM];

/* ��¼ICC�˼���Ϣ����ֵ */
VOS_UINT32                              g_ulIccRecordIndex = 0;

/* ��¼ICC�˼���Ϣ��ʱ�� */
HTIMER                                  g_AcpuIccLogTimerId;

extern VOS_UINT V_ICC_OSAMsg_CB(VOS_UINT ulChannelID,VOS_INT lLen);

extern VOS_UINT32 VOS_GetMsgName(VOS_UINT32 ulAddrress);

extern VOS_VOID Om_AcpuQueryDumpMsgProc(MsgBlock* pMsg);
VOS_VOID OM_AcpuICCInfoFileName( VOS_CHAR * cFileName )
{
    FILE                                *fp;

    if ( VOS_NULL_PTR == cFileName )
    {
        return;
    }

    /* ��ȡ��󱣴��ļ�����ֵ */
    fp = mdrv_file_open((VOS_CHAR*)g_acICCLogFilePath, "rb+");

    /* ���û�ж�ȡ���ļ�����ֵ�ļ��������״α��棬�ļ�����ֵʹ��Ĭ��ֵ0��ʼ */
    if (VOS_NULL_PTR == fp)
    {
        g_ulICCLogFileIndex = 0;
    }
    else
    {
        mdrv_file_read(&g_ulICCLogFileIndex, sizeof(VOS_UINT32), 1, fp);

        mdrv_file_close(fp);
    }

    VOS_MemSet(cFileName, 0, OM_ICC_MAX_NAME_LEN);

    VOS_StrNCpy(cFileName, g_acICCLogFilePath, VOS_StrLen(g_acICCLogFilePath));

    (VOS_VOID)VOS_nsprintf((VOS_CHAR *)(cFileName+VOS_StrLen(g_acICCLogFilePath)), 2, ".%d", g_ulICCLogFileIndex);

    return;
}


VOS_VOID OM_AcpuICCInfoWriteLog(VOS_UINT32 ulParam, VOS_UINT32 ulTimerName)
{
    VOS_UINT32                          ulLen;
    VOS_CHAR                            ucFileName[OM_ICC_MAX_NAME_LEN];
    FILE                                *fp;

    OM_AcpuICCInfoFileName(ucFileName);

    fp = mdrv_file_open((VOS_CHAR*)ucFileName, "ab+");  /*����׷�ӷ�ʽ���ļ�*/

    if(VOS_NULL_PTR == fp)                      /*����ļ���ʧ��˵�������ļ�Ҳ���ɹ�*/
    {
        return;
    }

    if(VOS_OK != mdrv_file_seek(fp, 0, DRV_SEEK_END))
    {
        mdrv_file_close(fp);
        return;
    }

    ulLen = (VOS_UINT32)mdrv_file_tell(fp);

    if(ulLen >= OM_LOG_FILE_MAX_SIZE)            /*�ļ���С��������*/
    {
        mdrv_file_close(fp);

        g_ulICCLogFileIndex++;

        if (g_ulICCLogFileIndex > OAM_ICC_RECORD_MAX_FILE)
        {
            g_ulICCLogFileIndex = 0;
        }

        /* ����ǰ�ļ�����ֵ��¼��Icc-log�ļ��� */
        fp = mdrv_file_open((VOS_CHAR*)g_acICCLogFilePath, "wb+");

        if(VOS_NULL_PTR == fp)
        {
            return;
        }

        mdrv_file_write(&g_ulICCLogFileIndex, sizeof(VOS_UINT32), 1, fp);

        mdrv_file_close(fp);

        /* ��ȡ�¼�¼�ļ��� */
        OM_AcpuICCInfoFileName(ucFileName);

        fp = mdrv_file_open((VOS_CHAR*)ucFileName, "wb+");  /*����ļ�����*/
    }

    if(VOS_NULL_PTR == fp)                      /*����ļ���ʧ��˵�������ļ�Ҳ���ɹ�*/
    {
        return;
    }

    /* ͨ����¼����Ϣ����ֵ��¼��ǰ�����ICC��Ϣ */
    mdrv_file_write(g_astIccRecordInfo, sizeof(OM_ICC_INFO_STRU), OAM_ICC_RECORD_MAX_NUM, fp);

    mdrv_file_close(fp);

    /* ÿ�μ�¼��ɺ���յ�ǰICC��ά�ɲ�BUFF */
    VOS_MemSet(g_astIccRecordInfo, 0, sizeof(OM_ICC_INFO_STRU)*OAM_ICC_RECORD_MAX_NUM);

    g_ulIccRecordIndex = 0;

    return;
}
VOS_UINT32  OM_AcpuICCInfoInit( VOS_VOID )
{
    NV_SOCP_SDLOG_CFG_STRU              stInfoCfg ;

    VOS_MemSet(&stInfoCfg, 0, sizeof(stInfoCfg));

    g_AcpuIccLogTimerId = VOS_NULL_PTR;

    if(NV_OK != NV_ReadEx(MODEM_ID_0, en_NV_ID_SOCP_SDLOG_CFG, &stInfoCfg, sizeof(NV_SOCP_SDLOG_CFG_STRU)))
    {
        return VOS_ERR;
    }

    if(VOS_TRUE != stInfoCfg.ulSocpDelayWriteFlg)
    {
        return VOS_OK;
    }

    /* ʹ���ӳ�д��NVʱ����������ʱ���涨ʱ�� */
    /*(VOS_VOID)VOS_StartRelTimer(&g_AcpuIccLogTimerId, ACPU_PID_PAM_OM, stInfoCfg.ulTimeOutValue,
                    OM_ICC_TIMER, 0, VOS_RELTIMER_LOOP, VOS_TIMER_PRECISION_5);*/

    return VOS_OK;
}


VOS_VOID OM_AcpuICCInfoRecord(MsgBlock *pMsgCtrlBlk)
{
    if (VOS_NULL_PTR == pMsgCtrlBlk)
    {
        return;
    }

    g_astIccRecordInfo[g_ulIccRecordIndex].usSendPid    = (VOS_UINT16)pMsgCtrlBlk->ulSenderPid;
    g_astIccRecordInfo[g_ulIccRecordIndex].usRecvPid    = (VOS_UINT16)pMsgCtrlBlk->ulReceiverPid;
    g_astIccRecordInfo[g_ulIccRecordIndex].ulMsgName    = VOS_GetMsgName((VOS_UINT_PTR)pMsgCtrlBlk);
    g_astIccRecordInfo[g_ulIccRecordIndex].ulSlice      = OM_GetSlice();

    g_ulIccRecordIndex++;

    /* ����¼��ICC��Ϣ����BUFF�������ֵ����BUFFͷ��ʼ���¼�¼ */
    if (g_ulIccRecordIndex >= OAM_ICC_RECORD_MAX_NUM)
    {
        g_ulIccRecordIndex = 0;
    }

    return;
}
VOS_VOID PAMOM_AcpuTimerMsgProc(MsgBlock* pMsg)
{
    VOS_UINT32 ulName;

    ulName = ((REL_TIMER_MSG*)pMsg)->ulName;

    if (OM_ICC_TIMER == ulName)
    {
        OM_AcpuICCInfoWriteLog(0, ulName);
    }
    else
    {
        /* blank */
    }
}


/*****************************************************************************
 Prototype       : CBT_AppMsgProc
 Description     : Handle all messages sent to OM.
 Input           : pMsg -- The pointer of the msg.
 Output          : None
 Return Value    : VOS_VOID

 History         : ---
    Date         : 2008-03-20
    Author       : g47350
    Modification : Created function
 *****************************************************************************/
VOS_VOID PAMOM_AppMsgProc(MsgBlock* pMsg)
{
    if (VOS_PID_TIMER == pMsg->ulSenderPid)
    {
        PAMOM_AcpuTimerMsgProc(pMsg);
    }
    else if (CCPU_PID_PAM_OM == pMsg->ulSenderPid)
    {
        Om_AcpuQueryDumpMsgProc(pMsg);
    }
    else
    {
        /* blank */
    }

    return;
}

/*****************************************************************************
 Prototype       : OM_AcpuInit
 Description     : OM' initializtion function
 Input           : None
 Output          : None
 Return Value    : VOS_UINT32

 History         : ---
    Date         : 2011-07-01
    Author       : g47350
    Modification : Created function
 *****************************************************************************/
VOS_UINT32 PAMOM_AcpuInit(VOS_VOID)
{
    if (VOS_OK != OM_AcpuICCInfoInit())
    {
        PS_LOG(WUEPS_PID_OM, 0, PS_PRINT_WARNING, "OM_AcpuInit: OM_AcpuICCInfoInit failed.\n");
    }

    if (VOS_OK != OM_AcpuGetLogPath(g_acICCLogFilePath, OM_ICC_LOG_PATH, OM_ICC_UNITARY_LOG_PATH))
    {
        return VOS_ERR;
    }

    return VOS_OK;
}

/*****************************************************************************
 Prototype       : OM_AcpuPidInit
 Description     : ACPU OM PID' initializtion function
 Input           : None
 Output          : None
 Return Value    : VOS_UINT32

 History         : ---
    Date         : 2011-07-01
    Author       : g47350
    Modification : Created function
 *****************************************************************************/
VOS_UINT32 PAMOM_AppPidInit(enum VOS_INIT_PHASE_DEFINE ip)
{
    switch( ip )
    {
        case VOS_IP_LOAD_CONFIG:
            return PAMOM_AcpuInit();

        default:
            break;
    }

    return VOS_OK;
}

/*****************************************************************************
 Prototype       : OM_AcpuFidInit
 Description     : ACPU OM FID' initializtion function
 Input           : None
 Output          : None
 Return Value    : VOS_UINT32

 History         : ---
    Date         : 2011-07-01
    Author       : g47350
    Modification : Created function
 *****************************************************************************/
VOS_UINT32 PAMOM_APP_FID_Init(enum VOS_INIT_PHASE_DEFINE ip)
{
    VOS_UINT32                          ulRslt;

    switch( ip )
    {
        case VOS_IP_LOAD_CONFIG:
        {
            ulRslt = VOS_RegisterPIDInfo(ACPU_PID_PAM_OM,
                                        (Init_Fun_Type)VOS_NULL_PTR,
                                        (Msg_Fun_Type)PAMOM_AppMsgProc);
            if( VOS_OK != ulRslt )
            {
                return VOS_ERR;
            }

            ulRslt = VOS_RegisterMsgTaskPrio(ACPU_FID_PAM_OM, VOS_PRIORITY_M2);
            if( VOS_OK != ulRslt )
            {
                return VOS_ERR;
            }

            break;
        }

        default:
            break;
    }
    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : VOS_ICCError_CB
 ��������  : ����ICC WIFIͨ�������ݶ�ȡ�ص�����
 �������  : ulChannelID:   ��ǰͨ��ID
             ulLen:         ��ǰͨ�����ݳ���
 �������  : ��
 �� �� ֵ  : VOS_ERROR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2011��3��10��
     ��    ��  : l46160
     �޸�����  : Creat Function
*****************************************************************************/
VOS_UINT VOS_ICCError_CB(VOS_UINT ulChanID, VOS_UINT ulEvent, VOS_VOID* pParam)
{
    VOS_UINT32 ulChannelID;

    if(UDI_ICC_GUOM4 == (UDI_HANDLE)ulChanID)
    {
        ulChannelID = OM_OSA_MSG_ICC_CHANNEL;
    }
    else
    {
        LogPrint("VOS_ICCError_CB: The Channel ID is not used by OAM\n");

        return VOS_ERR;
    }

    LogPrint2("VOS_ICCError_CB: The Error Channel ID is %d,and Event is %d\n",
                (VOS_INT32)ulChannelID, (VOS_INT32)ulEvent);

    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : OM_ComRx_ICC_Init
 ��������  : ����OM��CCPU��ʼ��ICCͨ��
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_ERR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2011��3��10��
     ��    ��  : l46160
     �޸�����  : Creat Function
*****************************************************************************/
VOS_UINT32 VOS_ICC_Init(VOS_VOID)
{
    OM_ICC_UDI_CTRL_STRU                astACPUICCCtrlTable;

    /*��ʼ�� ICCͨ��*/
    VOS_MemSet((&astACPUICCCtrlTable), 0, sizeof(astACPUICCCtrlTable));

    astACPUICCCtrlTable.pstICCAttr = (ICC_CHAN_ATTR_S*)VOS_MemAlloc(ACPU_PID_PAM_OM,
                                                                    STATIC_MEM_PT,
                                                                    sizeof(ICC_CHAN_ATTR_S));
    if(VOS_NULL_PTR == astACPUICCCtrlTable.pstICCAttr)
    {
        return VOS_ERR;             /*�����ڴ�ʧ�ܵ������������˲���Ҫ�ͷ�֮ǰ�Ѿ�������ڴ�*/
    }

    astACPUICCCtrlTable.enICCId               = UDI_ICC_GUOM4;
    astACPUICCCtrlTable.pstICCAttr->read_cb   = V_ICC_OSAMsg_CB;
    astACPUICCCtrlTable.pstICCAttr->u32Priority    = OM_ICC_CHANNEL_PRIORITY;
    astACPUICCCtrlTable.pstICCAttr->u32TimeOut     = OM_ICC_HANDSHAKE_TIME_MAX;
    astACPUICCCtrlTable.pstICCAttr->u32FIFOInSize  = OSA_ICC_BUFFER_SIZE;
    astACPUICCCtrlTable.pstICCAttr->u32FIFOOutSize = OSA_ICC_BUFFER_SIZE;
    astACPUICCCtrlTable.pstICCAttr->enChanMode     = ICC_CHAN_MODE_PACKET;
    astACPUICCCtrlTable.pstICCAttr->event_cb       = VOS_ICCError_CB;
    astACPUICCCtrlTable.pstICCAttr->write_cb       = VOS_NULL_PTR;

    if(VOS_ERROR == DRV_ICC_OPEN(astACPUICCCtrlTable.enICCId, astACPUICCCtrlTable.pstICCAttr))
    {
        /* ��ʧ��ʱ��¼��ǰICCͨ����Ϣ */
        VOS_ProtectionReboot(OM_APP_ICC_INIT_ERROR, THIS_FILE_ID, __LINE__,VOS_NULL_PTR,0);

        return VOS_ERR;
    }

    return VOS_OK;
}

#if (VOS_WIN32 != VOS_OS_VER)
/*****************************************************************************
 �� �� ��  : OM_OSAEvent
 ��������  : �ϱ�OSA�Ŀ�ά�ɲ���Ϣ
 �������  :
 �������  : ��
 �� �� ֵ  : ��

 �޸���ʷ      :
  1.��    ��   : 2013��7��27��
    ��    ��   : x51137
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_VOID OM_OSAEvent(VOS_VOID *pData, VOS_UINT32 ulLength)
{
    PS_OM_EVENT_IND_STRU    *pstEventInd;
    VOS_UINT32               ulEventLenth;

    ulEventLenth = (VOS_UINT32)sizeof(PS_OM_EVENT_IND_STRU)
                    + ulLength
                    - 4U * (VOS_UINT32)sizeof(VOS_UINT8);/*�ṹ���а�����4byte������������Ҫ��ȥ*/

    pstEventInd = (PS_OM_EVENT_IND_STRU *)VOS_MemAlloc(ACPU_PID_OM, DYNAMIC_MEM_PT, ulEventLenth);
    if(VOS_NULL_PTR == pstEventInd)
    {
        return;
    }

    pstEventInd->ulLength   = ulEventLenth;

    pstEventInd->usEventId  = (VOS_UINT16)OAM_EVENT_TIMER;

    pstEventInd->ulModuleId = ACPU_PID_OM;

    /*lint -e419 -e416  */
    VOS_MemCpy((VOS_UINT8 *)pstEventInd->aucData, (VOS_UINT8 *)pData, ulLength);
    /*lint +e419 +e416*/

    if (VOS_OK != OM_AcpuEvent(pstEventInd))
    {
        PS_LOG(ACPU_PID_OM, VOS_NULL, PS_PRINT_WARNING, "OM_OSAEvent: send event fail.");
    }

    VOS_MemFree(ACPU_PID_OM, pstEventInd);

    return;
}
#endif

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */

