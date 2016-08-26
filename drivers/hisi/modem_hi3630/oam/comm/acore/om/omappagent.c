/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��      : omappagent.c
  �� �� ��      : ����
  ��    ��      : ����47350
  ��������      : 2008��5��3��
  ����޸�      :
  ��������      : ��C�ļ�������OMģ���ʵ��
  �����б�      :
  �޸���ʷ      :
  1.��    ��    : 2008��5��3��
    ��    ��    : ����47350
    �޸�����    : �����ļ�

******************************************************************************/
/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "OmApp.h"
#include "Omappagent.h"
#include "OmAppRl.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif

/*lint -e767 �޸��ˣ�����47350�������ˣ�����46160��ԭ�������LOG���������Ҫ*/
#define    THIS_FILE_ID        PS_FILE_ID_ACPU_OMAGENT_C
/*lint +e767 �޸��ˣ�����47350�������ˣ�lixiao��*/

/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/
extern MsgBlock         *g_pstOmAcpuCnfMsg;
extern VOS_SEM           g_ulOmAcpuCnfSem;
extern VOS_SEM           g_ulOmAcpuSyncSem;

extern VOS_UINT32        OM_AcpuInit(VOS_VOID);

extern VOS_VOID          PPM_HsicConnectProc(VOS_VOID);

extern VOS_UINT32        OM_AutoConfigProc(VOS_VOID);

/*****************************************************************************
 Prototype       : OM_CAgentMsgProc
 Description     : ��������CCPU AGENT����Ϣ.
 Input           : pMsg -- The pointer of the msg.
 Output          : None
 Return Value    : VOS_VOID

 History         : ---
    Date         : 2011-07-01
    Author       : g47350
    Modification : Created function
 *****************************************************************************/
VOS_VOID OM_AcpuAgentMsgProc(MsgBlock* pMsg)
{
    VOS_UINT16                  usPrimId;

    /* ����Ϣǰ�����ֽ���ȡ��ԭ��ID */
    usPrimId = *(VOS_UINT16*)(pMsg->aucValue);

    OM_RecordInfoStart(VOS_EXC_DUMP_MEM_NUM_1, pMsg->ulSenderPid, ACPU_PID_OMAGENT, *((VOS_UINT32*)pMsg->aucValue));

    /* �ж��Ƿ�ΪCCCPU AGENT�����Ļظ���Ϣ */
    if (IS_CAGENT_CNF_MSG(usPrimId))
    {
        /* �ж���Ϣ�Ƿ��ͷ� */
        if (VOS_NULL_PTR == g_pstOmAcpuCnfMsg)
        {
            /* ��Ǹ���Ϣ�����ͷ� */
            VOS_ReserveMsg(ACPU_PID_OMAGENT, pMsg);

            g_pstOmAcpuCnfMsg = pMsg;

            /* �ͷ��ź�����ʹ�õ���API����������� */
            VOS_SmV(g_ulOmAcpuCnfSem);
        }

        /* CCPU �Ѿ�OK,���Խ���SD��������Ϣ */
        if(OM_AUTOCONFIG_CNF == usPrimId)
        {
            OM_AutoConfigProc();
        }

        OM_RecordInfoEnd(VOS_EXC_DUMP_MEM_NUM_1);

        return;
    }

    /* ����ΪCCPU��������Ҫ�ظ���������Ϣ */
    if (OM_OLED_CLEAR_REQ == usPrimId)
    {
        OM_RecordInfoEnd(VOS_EXC_DUMP_MEM_NUM_1);

        return;
    }

    if (OM_OLED_DISPLAY_REQ == usPrimId)
    {
        OM_RecordInfoEnd(VOS_EXC_DUMP_MEM_NUM_1);

        return;
    }

    /* Modified by h59254 for AP-Modem Personalisation Project, 2012/04/12, begin */
    if (OM_HSIC_CONNECT_REQ == usPrimId)
    {
        PPM_HsicConnectProc();

        OM_RecordInfoEnd(VOS_EXC_DUMP_MEM_NUM_1);

        return;
    }
    /* Modified by h59254 for AP-Modem Personalisation Project, 2012/04/12, end */

    if(OM_RECORD_DBU_INFO_REQ == usPrimId)
    {
        OM_AcpuLogShowToFile(VOS_FALSE);
    }

    if (OM_CONNECT_INFO_CNF == usPrimId)
    {
        OMRL_AcpuConnectInfoReportEvent((OM_CONNECT_INFO_CNF_STRU *)pMsg);
    }

    OM_RecordInfoEnd(VOS_EXC_DUMP_MEM_NUM_1);

    return;
}

/*****************************************************************************
 �� �� ��  : MNTN_ErrorLog
 ��������  : ��������Ϣ��¼��ERRORLOG��
 �������  : cFileName: ���ú��������ļ���
             ulFileId: ���ú��������ļ�ID
             ulLine: ���ú��������ļ����к�
             ulErrNo: ���������
             pRecord: ��¼���λ��
             ulLen: ��¼����pRecord�ĳ��ȣ�������¼ͷ����λ���ֽ�
 �������  : VOID
 �� �� ֵ  : VOS_ERR:����ִ�й����г��ִ���
             VOS_OK:����ִ������
 �޸���ʷ      :
  1.��    ��   : 2011��7��1��
    ��    ��   : g47350
    �޸�����   : �����ɺ���
*****************************************************************************/
unsigned int MNTN_ErrorLog(char * cFileName, unsigned int ulFileId, unsigned int ulLine,
                unsigned int ulErrNo, void *pRecord, unsigned int ulLen)
{
    ERRORLOG_REQ_STRU       *pstErrorLogReq;
    ERRORLOG_CNF_STRU       *pstErrorLogCnf;
    VOS_UINT32              ulResult;

    /* ������� */
    if ((VOS_NULL_PTR == cFileName) || (VOS_NULL_PTR == pRecord))
    {
        return OM_ACPU_PARA_ERR;
    }

#if (VOS_OS_VER == VOS_LINUX)
    if( in_interrupt() )
    {
        return OM_ACPU_RUN_IRQ;
    }
#endif

    pstErrorLogReq = (ERRORLOG_REQ_STRU*)VOS_AllocMsg(ACPU_PID_OMAGENT,
                                                ERRORLOG_HEAD_LEN + ulLen);

    /* ������Ϣʧ�� */
    if (VOS_NULL_PTR == pstErrorLogReq)
    {
        return OM_ACPU_ALLOC_FAIL;
    }

    pstErrorLogReq->ulReceiverPid = CCPU_PID_OMAGENT;
    pstErrorLogReq->usPrimId      = ERRORLOG_REQ;
    pstErrorLogReq->ulFileId      = ulFileId;
    pstErrorLogReq->ulLine        = ulLine;
    pstErrorLogReq->ulErrNo       = ulErrNo;
    pstErrorLogReq->ulLen         = ulLen;

    /* Ϊ��ȷ��aucFileName����ֽ�Ϊ'\0',����������Ҫ��1 */
    VOS_MemCpy(pstErrorLogReq->aucFileName, cFileName, VOS_StrLen(cFileName) + 1);
    VOS_MemCpy(pstErrorLogReq->aucData, pRecord, ulLen);


    /* ������������ڽ����У���Ҫ�ȴ������ */
    if (VOS_OK != VOS_SmP(g_ulOmAcpuSyncSem, 0))
    {
        VOS_FreeMsg(ACPU_PID_OMAGENT, pstErrorLogReq);

        return OM_ACPU_SYNC_TIMEOUT;
    }

    /* ��������Ϣ���͸�CCPU */
    if (VOS_OK != VOS_SendMsg(ACPU_PID_OMAGENT, pstErrorLogReq))
    {
        VOS_SmV(g_ulOmAcpuSyncSem);

        return OM_ACPU_SEND_FAIL;
    }

    /* �ȴ�CCPU�Ļظ� */
    if (VOS_OK != VOS_SmP(g_ulOmAcpuCnfSem, WAITING_CNF_TIMEOUT_LEN))
    {
        VOS_SmV(g_ulOmAcpuSyncSem);

        return OM_ACPU_CNF_TIMEOUT;
    }

    pstErrorLogCnf = (ERRORLOG_CNF_STRU*)g_pstOmAcpuCnfMsg;

    /* �жϻظ���Ϣ�����Ƿ���ȷ */
    if (ERRORLOG_CNF != pstErrorLogCnf->usPrimId)
    {
        VOS_FreeReservedMsg(ACPU_PID_OMAGENT, g_pstOmAcpuCnfMsg);

        VOS_SmV(g_ulOmAcpuSyncSem);

        return OM_ACPU_CNF_ERR;
    }

    ulResult = (VOS_UINT32)pstErrorLogCnf->usResult;

    VOS_FreeReservedMsg(ACPU_PID_OMAGENT, g_pstOmAcpuCnfMsg);

    VOS_SmV(g_ulOmAcpuSyncSem);

    return ulResult;
}

/*****************************************************************************
 �� �� ��  : OM_Acpu_WriteLogFile
 ��������  : ��������Ϣ��¼��ERRORLOG��
 �������  : cFileName: log�ļ���������·����Ϣ
             pRecord: ��¼��������
             ulLen: ��¼���ݳ���
 �������  : VOID
 �� �� ֵ  : ����:����ִ�й����г��ִ���
             VOS_OK:����ִ������
 �޸���ʷ      :
  1.��    ��   : 2012��5��8��
    ��    ��   : zhuli
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_UINT32 OM_Acpu_WriteLogFile(VOS_CHAR * cFileName, void *pRecord, VOS_UINT32 ulLen)
{
    OM_WRITELOG_REQ_STRU    *pstLogReq;

    /* ������� */
    if ((VOS_NULL_PTR == cFileName) || (VOS_NULL_PTR == pRecord))
    {
        return OM_ACPU_PARA_ERR;
    }

    pstLogReq = (OM_WRITELOG_REQ_STRU*)VOS_AllocMsg(ACPU_PID_OMAGENT,
                                            (sizeof(OM_WRITELOG_REQ_STRU)-VOS_MSG_HEAD_LENGTH)+ulLen);

    /* ������Ϣʧ�� */
    if (VOS_NULL_PTR == pstLogReq)
    {
        return OM_ACPU_ALLOC_FAIL;
    }

    pstLogReq->ulReceiverPid = CCPU_PID_OMAGENT;
    pstLogReq->usPrimId      = OM_WRITE_LOG_REQ;
    pstLogReq->ulLen         = ulLen;

    /* Ϊ��ȷ��aucFileName����ֽ�Ϊ'\0',����������Ҫ��1 */
    VOS_MemCpy(pstLogReq->aucFileName, cFileName, VOS_StrLen(cFileName)+1);
    VOS_MemCpy(pstLogReq->aucData, pRecord, ulLen);

    /* ��������Ϣ���͸�CCPU */
    if (VOS_OK != VOS_SendMsg(ACPU_PID_OMAGENT, pstLogReq))
    {
        return OM_ACPU_SEND_FAIL;
    }

    return VOS_OK;
}


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif


