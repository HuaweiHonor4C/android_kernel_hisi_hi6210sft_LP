/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : omappcommrx.c
  �� �� ��   : ����
  ��    ��   : ���� 46160
  ��������   : 2011��3��11��
  ����޸�   :
  ��������   :
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2011��6��11��
    ��    ��   : ���� 46160
    �޸�����   : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "OmApp.h"
#include "omrl.h"
#include "Omappagent.h"
#include "cpm.h"
#include "OmAppRl.h"
#include "omprivate.h"
#include "SCMProc.h"
#include "OmCommonPpm.h"
#include "AtAppVcomInterface.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*lint -e767 �޸���:��� 00128685;������:���� 51137;ԭ��:Log��ӡ */
#define    THIS_FILE_ID        PS_FILE_ID_OM_COMMRX_C
/*lint +e767 �޸���:��� 00128685;������:���� 51137; */

/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/




/* ����ACPU��SOCP���� ͨ����ͳ����Ϣ */
OM_ACPU_DEBUG_INFO                      g_stAcpuDebugInfo;

VOS_SPINLOCK                            g_stVosErrLogSendSpinLock;  /* ��������������Err Log�ϱ�״̬�����ٽ���Դ���� */

/*****************************************************************************
  3 �ⲿ��������
*****************************************************************************/


extern OM_RECORD_BUF_STRU               g_astAcpuRecordInfo[VOS_EXC_DUMP_MEM_NUM_BUTT];

extern OM_APP_MSG_RECORD_STRU           g_stOmAppMsgRecord;

extern OM_VCOM_DEBUG_INFO               g_stVComDebugInfo[3];
#if(FEATURE_ON == FEATURE_PTM)
extern struct semaphore                 g_stOmRxErrorLogBuffSem;
#endif

VOS_VOID SCM_LogToFile(FILE *fp);
#if (FEATURE_SOCP_SYNC_ENABLE == FEATURE_ON)
VOS_VOID SOCP_LogToFile(FILE *fp);
#endif

VOS_INT OM_AcpuReadVComData(VOS_UINT8 ucDevIndex, VOS_UINT8 *pucData, VOS_UINT32 uslength);

/*****************************************************************************
  4 ����ʵ��
*****************************************************************************/

/*****************************************************************************
 �� �� ��  : GU_OamSndPcCmsMsg
 ��������  : ����ACPU�����PC������ͨ��ICC���͸�CCPU OMģ��
 �������  : pucData:   ��Ҫ���͵���������
             ulDataLen: ���ݳ���
 �������  : ��
 �� �� ֵ  : VOS_ERROR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2011��3��10��
     ��    ��  : l46160
     �޸�����  : Creat Function
*****************************************************************************/
VOS_UINT32 GU_OamSndPcMsgToCcpu(OMRL_RCV_CHAN_CTRL_INFO_STRU *pstCtrlInfo, VOS_UINT8 *pucData, VOS_UINT32 ulSize)
{
    VOS_INT32  lResult = VOS_ERROR;

    lResult = DRV_ICC_WRITE(UDI_ICC_GUOM0, pucData, (VOS_INT32)ulSize);

    /* ����C�˸�λ��дICCͨ��ʧ�ܻ᷵��һ������ֵ�����ܸ�λ���� */
    if (BSP_ERR_ICC_CCORE_RESETTING == lResult )
    {
        LogPrint1("\n# GU_OamSndPcMsgToCcpu Error,Ccore Reset,ulSize %d .\n",(VOS_INT)ulSize);

        return VOS_ERR;
    }

    /* ��ǰд����ʧ�� */
    if(ulSize != (VOS_UINT32)lResult)
    {
        LogPrint2("GU_OamSndPcMsgToCcpu: The ICC UDI Write is Error.Size:%d,lResult:%d\n",(VOS_INT)ulSize,lResult);

        pstCtrlInfo->stPcToUeErrRecord.stICCSendFailInfo.ulICCOmSendErrNum++;
        pstCtrlInfo->stPcToUeErrRecord.stICCSendFailInfo.ulICCOmSendErrLen += ulSize;
        pstCtrlInfo->stPcToUeErrRecord.stICCSendFailInfo.ulICCOmSendErrSlice= VOS_GetSlice();

        return VOS_ERR;
    }
    pstCtrlInfo->stPcToUeSucRecord.stICCSendSUCInfo.ulICCOmSendMsgNum++;
    pstCtrlInfo->stPcToUeSucRecord.stICCSendSUCInfo.ulICCOmSendLen += ulSize;
    pstCtrlInfo->stPcToUeSucRecord.stICCSendSUCInfo.ulICCOmSendSlice= VOS_GetSlice();

    return VOS_OK;
}



VOS_VOID GU_OamErrLogVComPortInit(VOS_VOID)
{
#if(FEATURE_ON == FEATURE_PTM)
    VOS_SpinLockInit(&g_stVosErrLogSendSpinLock);

    /* ����ERR LOG�ϱ�ȫ�ֱ�����ʼ�� */
    g_stOmAppMsgRecord.ulErrLogReportSend = 0;/* ��¼Err Log��Ҫ�ϱ���� */
    g_stOmAppMsgRecord.ulFTMReportSend    = 0;/* ��¼FTM��Ҫ�ϱ���� */
    g_stOmAppMsgRecord.pulErrorLogModule  = VOS_NULL_PTR;
    g_stOmAppMsgRecord.pulFTMModule       = VOS_NULL_PTR;
    g_stOmAppMsgRecord.usModemId          = MODEM_ID_BUTT;

#if (VOS_LINUX == VOS_OS_VER)
    sema_init(&g_stOmRxErrorLogBuffSem, 1);
#endif

    /* ע����Vcom Error log������NAS */
    APP_VCOM_RegDataCallback(APP_VCOM_DEV_INDEX_ERRLOG, OM_AcpuReadVComData);
#endif
    return;
}


/*****************************************************************************
 �� �� ��  : GU_OAMAcpu_ICCError_CB
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

VOS_UINT GU_OamAcpu_ICCError_CB(VOS_UINT ulChanID, VOS_UINT ulEvent, VOS_VOID* pParam)
{
    VOS_UINT32 ulChannelID;

    if(UDI_ICC_GUOM0 == (UDI_HANDLE)ulChanID)
    {
        ulChannelID = OM_OM_ICC_CHANNEL;
    }
    else
    {
        LogPrint("GU_OamAcpu_ICCError_CB: The Channel ID is not used by OAM\n");

        return VOS_ERR;
    }

    LogPrint2("GU_OAMAcpu_ICCError_CB: The Error Channel ID is %d,and Event is %d\n",
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
VOS_UINT32 OM_ComRx_ICC_Init(VOS_VOID)
{
    OM_ICC_UDI_CTRL_STRU                astACPUICCCtrlTable;

    /*��ʼ�� ICCͨ��*/
    VOS_MemSet((&astACPUICCCtrlTable), 0, sizeof(astACPUICCCtrlTable));

    astACPUICCCtrlTable.pstICCAttr = (ICC_CHAN_ATTR_S*)VOS_MemAlloc(ACPU_PID_OM,
                                                                       STATIC_MEM_PT,
                                                                       sizeof(ICC_CHAN_ATTR_S));
    if(VOS_NULL_PTR == astACPUICCCtrlTable.pstICCAttr)
    {
        return VOS_ERR;             /*�����ڴ�ʧ�ܵ������������˲���Ҫ�ͷ�֮ǰ�Ѿ�������ڴ�*/
    }

    astACPUICCCtrlTable.enICCId                    = UDI_ICC_GUOM0;

    astACPUICCCtrlTable.pstICCAttr->u32Priority    = OM_ICC_CHANNEL_PRIORITY;
    astACPUICCCtrlTable.pstICCAttr->u32TimeOut     = OM_ICC_HANDSHAKE_TIME_MAX;
    astACPUICCCtrlTable.pstICCAttr->u32FIFOInSize  = OM_ICC_BUFFER_SIZE;
    astACPUICCCtrlTable.pstICCAttr->u32FIFOOutSize = OM_ICC_BUFFER_SIZE;
    astACPUICCCtrlTable.pstICCAttr->enChanMode     = ICC_CHAN_MODE_PACKET;
    astACPUICCCtrlTable.pstICCAttr->event_cb       = GU_OamAcpu_ICCError_CB;
    astACPUICCCtrlTable.pstICCAttr->write_cb       = VOS_NULL_PTR;

    if(VOS_ERROR == DRV_ICC_OPEN(astACPUICCCtrlTable.enICCId, astACPUICCCtrlTable.pstICCAttr))
    {
        /* ��ʧ��ʱ��¼��ǰICCͨ����Ϣ */
        VOS_ProtectionReboot(OM_APP_ICC_INIT_ERROR, THIS_FILE_ID, __LINE__,VOS_NULL_PTR,0);

        return VOS_ERR;
    }

    return VOS_OK;
}

/*****************************************************************************
 Prototype       : GU_OmAcpuSwitchOnOff
 Description     : ON or Off Acpu Switch
 Input           : VOS_UINT32
 Output          : None
 Return Value    : None

 History         : ---
    Date         :
    Author       :
    Modification : Created function
 *****************************************************************************/
VOS_VOID GU_OmAcpuSwitchOnOff(VOS_UINT32 ulFlag)
{
    g_stAcpuCnfCtrlInfo.ulOMSwitchOnOff = ulFlag;
}




VOS_VOID OM_AcpuLogShowToFile(VOS_BOOL bIsSendMsg)
{
    FILE                               *fp;
    OM_AUTOCONFIG_CNF_STRU             *pstSendCnf;
    VOS_UINT32                          ulTemp = 0x5a5a5a5a;

#if(VOS_WIN32 == VOS_OS_VER)
    VOS_CHAR                  g_acLogPath[] = ".\\yaffs0\\A_OmLog.bin";

#else
#if (FEATURE_ON == FEATURE_MULTI_FS_PARTITION)
    VOS_CHAR                  g_acLogPath[] = "/data/modemlog/A_OmLog.bin";

#else
    VOS_CHAR                  g_acLogPath[] = "/yaffs0/A_OmLog.bin";
#endif
#endif

    fp = mdrv_file_open(g_acLogPath, "w+");

    if (VOS_NULL_PTR == fp)
    {
        return;
    }

    mdrv_file_write((VOS_VOID*)&(g_stAcpuCnfCtrlInfo.stPcToUeSucRecord), sizeof(VOS_CHAR), sizeof(g_stAcpuCnfCtrlInfo.stPcToUeSucRecord), fp);
    mdrv_file_write((VOS_VOID*)&(g_stAcpuCbtCtrlInfo.stPcToUeSucRecord), sizeof(VOS_CHAR), sizeof(g_stAcpuCbtCtrlInfo.stPcToUeSucRecord), fp);
    mdrv_file_write((VOS_VOID*)&ulTemp, sizeof(VOS_CHAR), sizeof(VOS_UINT32), fp);
    mdrv_file_write((VOS_VOID*)&(g_stAcpuCnfCtrlInfo.stPcToUeErrRecord), sizeof(VOS_CHAR), sizeof(g_stAcpuCnfCtrlInfo.stPcToUeErrRecord), fp);
    mdrv_file_write((VOS_VOID*)&(g_stAcpuCbtCtrlInfo.stPcToUeErrRecord), sizeof(VOS_CHAR), sizeof(g_stAcpuCbtCtrlInfo.stPcToUeErrRecord), fp);
    mdrv_file_write((VOS_VOID*)&ulTemp, sizeof(VOS_CHAR), sizeof(VOS_UINT32), fp);

    mdrv_file_write((VOS_VOID*)&(g_stAcpuTxCnfCtrlInfo.stUeToPcSucRecord), sizeof(VOS_CHAR), sizeof(g_stAcpuTxCnfCtrlInfo.stUeToPcSucRecord), fp);
    mdrv_file_write((VOS_VOID*)&(g_stAcpuTxIndCtrlInfo.stUeToPcSucRecord), sizeof(VOS_CHAR), sizeof(g_stAcpuTxIndCtrlInfo.stUeToPcSucRecord), fp);
    mdrv_file_write((VOS_VOID*)&ulTemp, sizeof(VOS_CHAR), sizeof(VOS_UINT32), fp);
    mdrv_file_write((VOS_VOID*)&(g_stAcpuTxCnfCtrlInfo.stUeToPcErrRecord), sizeof(VOS_CHAR), sizeof(g_stAcpuTxCnfCtrlInfo.stUeToPcErrRecord), fp);
    mdrv_file_write((VOS_VOID*)&(g_stAcpuTxIndCtrlInfo.stUeToPcErrRecord), sizeof(VOS_CHAR), sizeof(g_stAcpuTxIndCtrlInfo.stUeToPcErrRecord), fp);
    mdrv_file_write((VOS_VOID*)&ulTemp, sizeof(VOS_CHAR), sizeof(VOS_UINT32), fp);

    mdrv_file_write((VOS_VOID*)&g_stAcpuDebugInfo , sizeof(VOS_CHAR), sizeof(g_stAcpuDebugInfo), fp);
    mdrv_file_write((VOS_VOID*)&ulTemp, sizeof(VOS_CHAR), sizeof(VOS_UINT32), fp);
    mdrv_file_write((VOS_VOID*)&g_stVComDebugInfo[0] , sizeof(VOS_CHAR), sizeof(g_stVComDebugInfo), fp);
    mdrv_file_write((VOS_VOID*)&ulTemp, sizeof(VOS_CHAR), sizeof(VOS_UINT32), fp);
    mdrv_file_write((VOS_VOID*)g_astAcpuRecordInfo , sizeof(VOS_CHAR), sizeof(g_astAcpuRecordInfo), fp);
    mdrv_file_write((VOS_VOID*)&ulTemp, sizeof(VOS_CHAR), sizeof(VOS_UINT32), fp);

    mdrv_file_write((VOS_VOID*)&g_stAcpuCnfCtrlInfo.ulOMSwitchOnOff , sizeof(VOS_CHAR), sizeof(g_stAcpuCnfCtrlInfo.ulOMSwitchOnOff), fp);
    mdrv_file_write((VOS_VOID*)&ulTemp, sizeof(VOS_CHAR), sizeof(VOS_UINT32), fp);

    /* SCM ���*/
    SCM_LogToFile(fp);
    mdrv_file_write((VOS_VOID*)&ulTemp, sizeof(VOS_CHAR), sizeof(VOS_UINT32), fp);

    /* SOCP ���*/
#if (FEATURE_SOCP_SYNC_ENABLE == FEATURE_ON)
    SOCP_LogToFile(fp);
#endif
    mdrv_file_write((VOS_VOID*)&ulTemp, sizeof(VOS_CHAR), sizeof(VOS_UINT32), fp);
#ifdef SCM_SNCHECK
    mdrv_file_write((VOS_VOID*)&g_ulSnErrCount , sizeof(VOS_CHAR), sizeof(g_ulSnErrCount), fp);
    mdrv_file_write((VOS_VOID*)&ulTemp, sizeof(VOS_CHAR), sizeof(VOS_UINT32), fp);
#endif

    mdrv_file_close(fp);

    /* ������Ϣ�o Acpu */
    if(VOS_FALSE == bIsSendMsg)
    {
        return;
    }

    pstSendCnf = (OM_AUTOCONFIG_CNF_STRU*)VOS_AllocMsg(ACPU_PID_OMAGENT,
                            sizeof(OM_AUTOCONFIG_CNF_STRU) - VOS_MSG_HEAD_LENGTH);

    /* ������Ϣʧ�� */
    if (VOS_NULL_PTR == pstSendCnf)
    {
        return;
    }

    pstSendCnf->ulReceiverPid  = CCPU_PID_OMAGENT;
    pstSendCnf->usPrimId       = OM_RECORD_DBU_INFO_REQ;

    (VOS_VOID)VOS_SendMsg(ACPU_PID_OMAGENT, pstSendCnf);

    return;
}


VOS_VOID OmAcpuPortInfoShow(OM_PROT_HANDLE_ENUM_UINT32  enHandle)
{
    vos_printf("\r\nThe Port Write num 1 is          %d",   g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBWriteNum1);
    vos_printf("\r\nThe Port Write num 2 is          %d",   g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBWriteNum2);
    vos_printf("\r\nThe Port Write Max Time is       0x%x", g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBWriteMaxTime);

    vos_printf("\r\nThe Port Write CB Num is         %d",   g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBWriteCBNum);

    vos_printf("\r\nThe Port Write Err Time is       %d",   g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBWriteErrNum);
    vos_printf("\r\nThe Port Write Err Value is      0x%x", g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBWriteErrValue);
    vos_printf("\r\nThe Port Write Err Len is        0x%x", g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBWriteErrLen);

    vos_printf("\r\nThe Port In CB Num is            %d",   g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBINNum);
    vos_printf("\r\nThe Port In CB Time is           0x%x", g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBINTime);
    vos_printf("\r\nThe Port Out CB Num is           %d",   g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBOutNum);
    vos_printf("\r\nThe Port Out CB Time is          0x%x", g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBOutTime);
    vos_printf("\r\nThe Port State CB Err Num is     %d",   g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBStateErrNum);
    vos_printf("\r\nThe Port State CB Err Time is    0x%x", g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBStateErrTime);

    vos_printf("\r\nThe Port Open num is            %d",    g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBOpenNum);
    vos_printf("\r\nThe Port Open slice is          0x%x",  g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBOpenSlice);

    vos_printf("\r\nThe Port Open OK num is         %d",    g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBOpenOkNum);
    vos_printf("\r\nThe Port Open OK slice is       0x%x",  g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBOpenOkSlice);

    vos_printf("\r\nThe Port Open OK2 num is        %d",    g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBOpenOk2Num);
    vos_printf("\r\nThe Port Open OK2 slice is      0x%x",  g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBOpenOk2Slice);

    vos_printf("\r\nThe Port Close num is           %d",    g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBCloseNum);
    vos_printf("\r\nThe Port Close slice is         0x%x",  g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBCloseSlice);

    vos_printf("\r\nThe Port Close OK num is        %d",    g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBCloseOkNum);
    vos_printf("\r\nThe Port Close OK slice is      0x%x",  g_stAcpuDebugInfo.astPortInfo[enHandle].ulUSBCloseOkSlice);
}

#ifdef __cplusplus
#if __cplusplus
    }
#endif
#endif



