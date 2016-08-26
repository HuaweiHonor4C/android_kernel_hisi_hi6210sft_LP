/* ͷ�ļ����� */
#include "omappoperator.h"
#include "SysNvId.h"
#include "OmCommonPpm.h"
#include "om.h"

extern VOS_UINT32 OM_IsAcpuAuthNv(VOS_UINT16 usNvId);

/*******************************************************************
*������: OM_AcpuReadNv
*���⺯����������:��ȡNV�ĳ��ȴ���
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuReadNv_case1(VOS_VOID)
{
    VOS_UINT8				aucData[1024] = {0};
    APP_OM_MSG_EX_STRU		*pstMsg;
    APP_OM_READ_NV_STRU		*pstNV;
    VOS_UINT32               ulResult;

    pstMsg = (APP_OM_MSG_EX_STRU*)aucData;
    pstNV  = (APP_OM_READ_NV_STRU*)pstMsg->aucPara;

    pstNV->ulCount = 2;
    pstNV->ausNvItemId[0] = 5;
    pstNV->ausNvItemId[1] = 6;

    ulResult = OM_AcpuReadNv(pstMsg, APP_OM_READ_NV_REQ);

    return ulResult;
}

/*******************************************************************
*������: OM_AcpuReadNv
*���⺯����������:�ڴ��������
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuReadNv_case2(VOS_VOID)
{
    VOS_UINT8				aucData[1024] = {0};
    APP_OM_MSG_EX_STRU		*pstMsg;
    APP_OM_READ_NV_STRU		*pstNV;

    pstMsg = (APP_OM_MSG_EX_STRU*)aucData;
    pstNV  = (APP_OM_READ_NV_STRU*)pstMsg->aucPara;

    pstNV->ulCount = 2;
    pstNV->ausNvItemId[0] = 5;
    pstNV->ausNvItemId[1] = 6;

    return OM_AcpuReadNv(pstMsg, APP_OM_READ_NV_REQ);
}

/*******************************************************************
*������: OM_AcpuReadNv
*���⺯����������:NV��ȡ����
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuReadNv_case3(VOS_VOID)
{
    VOS_UINT8				aucData[1024] = {0};
    APP_OM_MSG_EX_STRU		*pstMsg;
    APP_OM_READ_NV_STRU		*pstNV;

    pstMsg = (APP_OM_MSG_EX_STRU*)aucData;
    pstNV  = (APP_OM_READ_NV_STRU*)pstMsg->aucPara;

    pstNV->ulCount = 2;
    pstNV->ausNvItemId[0] = 5;
    pstNV->ausNvItemId[1] = 6;

    return OM_AcpuReadNv(pstMsg, APP_OM_READ_NV_REQ);
}

/*******************************************************************
*������: OM_AcpuReadNv
*���⺯����������:NV��ȡOK
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuReadNv_case4(VOS_VOID)
{
    VOS_UINT8				aucData[1024] = {0};
    APP_OM_MSG_EX_STRU		*pstMsg;
    APP_OM_READ_NV_STRU		*pstNV;
    VOS_UINT32				ulResult;

    pstMsg = (APP_OM_MSG_EX_STRU*)aucData;
    pstNV  = (APP_OM_READ_NV_STRU*)pstMsg->aucPara;

    pstNV->ulCount = 2;
    pstNV->ausNvItemId[0] = 5;
    pstNV->ausNvItemId[1] = 6;

    return OM_AcpuReadNv(pstMsg, APP_OM_READ_NV_REQ);
}

/*******************************************************************
*������: OM_AcpuWriteNv
*���⺯����������:NV��Ҫ��Ȩ
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuWriteNv_case1(VOS_VOID)
{
    VOS_UINT8				aucData[1024] = {0};
    APP_OM_MSG_EX_STRU		*pstMsg;
    APP_OM_WRITE_NV_STRU		*pstNV;

    pstMsg = (APP_OM_MSG_EX_STRU*)aucData;
    pstNV  = (APP_OM_WRITE_NV_STRU*)pstMsg->aucPara;

    pstNV->ulCount = 2;
    pstNV->ausNvItemData[0] = en_NV_Item_USB_Enum_Status;

    return OM_AcpuWriteNv(pstMsg, APP_OM_WRITE_NV_REQ);
}

/*******************************************************************
*������: OM_AcpuWriteNv
*���⺯����������:NV����ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuWriteNv_case2(VOS_VOID)
{
    VOS_UINT8				aucData[1024] = {0};
    APP_OM_MSG_EX_STRU		*pstMsg;
    APP_OM_WRITE_NV_STRU	*pstNV;
    VOS_UINT16				*pusNVData;

    pstMsg = (APP_OM_MSG_EX_STRU*)aucData;
    pstMsg->ucFuncType = 0;

    pstNV  = (APP_OM_WRITE_NV_STRU*)pstMsg->aucPara;

    pstNV->ulCount = 2;

    pusNVData = &pstNV->ausNvItemData[0];

    pusNVData[0] = 5;
    pusNVData[1] = 10;
    pusNVData[6] = 6;
    pusNVData[7] = 10;

    return OM_AcpuWriteNv(pstMsg, APP_OM_WRITE_NV_REQ);
}

/*******************************************************************
*������: OM_AcpuWriteNv
*���⺯����������:NV����OK
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuWriteNv_case3(VOS_VOID)
{
    VOS_UINT8				aucData[1024] = {0};
    APP_OM_MSG_EX_STRU		*pstMsg;
    APP_OM_WRITE_NV_STRU	*pstNV;
    VOS_UINT16				*pusNVData;

    pstMsg = (APP_OM_MSG_EX_STRU*)aucData;
    pstMsg->ucFuncType = 0;
    pstNV  = (APP_OM_WRITE_NV_STRU*)pstMsg->aucPara;

    pstNV->ulCount = 2;

    pusNVData = &pstNV->ausNvItemData[0];

    pusNVData[0] = 5;
    pusNVData[1] = 10;
    pusNVData[6] = 6;
    pusNVData[7] = 10;

    return OM_AcpuWriteNv(pstMsg, APP_OM_WRITE_NV_REQ);
}

/*******************************************************************
*������: OM_AcpuGetNvIdList
*���⺯����������:��������
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuGetNvIdList_case1(VOS_VOID)
{
    VOS_UINT8							*pucTemp;
    APP_OM_MSG_EX_STRU					*pstAppToOmMsg;
    VOS_UINT32                           ulresult;

    pucTemp	= (VOS_UINT8*)malloc(100);
    pstAppToOmMsg = (APP_OM_MSG_EX_STRU*)pucTemp;
    pstAppToOmMsg->usPrimId = APP_OM_NV_ID_LIST_REQ;

    ulresult = OM_AcpuGetNvIdList((APP_OM_MSG_EX_STRU *)pucTemp, VOS_NULL_PTR);

    free(pucTemp);

    return ulresult;
}

/*******************************************************************
*������: OM_AcpuGetNvIdList
*���⺯����������:û��NV
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuGetNvIdList_case2(VOS_VOID)
{
    VOS_UINT8							*pucTemp;
    APP_OM_MSG_EX_STRU					*pstAppToOmMsg;
    VOS_UINT32                           ulresult;

    pucTemp	= (VOS_UINT8*)malloc(100);
    pstAppToOmMsg = (APP_OM_MSG_EX_STRU*)pucTemp;
    pstAppToOmMsg->usPrimId = APP_OM_NV_ID_LIST_REQ;

    ulresult = OM_AcpuGetNvIdList((APP_OM_MSG_EX_STRU *)pucTemp, VOS_NULL_PTR);

    free(pucTemp);

    return ulresult;
}

/*******************************************************************
*������: OM_AcpuGetNvIdList
*���⺯����������:����ռ�ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuGetNvIdList_case3(VOS_VOID)
{
    VOS_UINT8							*pucTemp;
    APP_OM_MSG_EX_STRU					*pstAppToOmMsg;
    VOS_UINT32                           ulresult;


    pucTemp	= (VOS_UINT8*)malloc(100);
    pstAppToOmMsg = (APP_OM_MSG_EX_STRU*)pucTemp;
    pstAppToOmMsg->usPrimId = APP_OM_NV_ID_LIST_REQ;

    ulresult = OM_AcpuGetNvIdList((APP_OM_MSG_EX_STRU *)pucTemp, VOS_NULL_PTR);

    free(pucTemp);

    return ulresult;
}

/*******************************************************************
*������: OM_AcpuGetNvIdList
*���⺯����������:��ȡNV��Ⱥ��б�ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuGetNvIdList_case4(VOS_VOID)
{
    VOS_UINT8							*pucTemp;
    APP_OM_MSG_EX_STRU					*pstAppToOmMsg;
    VOS_UINT32                           ulresult;

    pucTemp	= (VOS_UINT8*)malloc(100);
    pstAppToOmMsg = (APP_OM_MSG_EX_STRU*)pucTemp;
    pstAppToOmMsg->usPrimId = APP_OM_NV_ID_LIST_REQ;

    ulresult = OM_AcpuGetNvIdList((APP_OM_MSG_EX_STRU *)pucTemp, VOS_NULL_PTR);

    free(pucTemp);

    return ulresult;
}

/*******************************************************************
*������: OM_IsAcpuAuthNv
*���⺯����������:���ڼ�Ȩ�б���
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_IsAcpuAuthNv_case1(VOS_VOID)
{
    VOS_UINT32  ulResult;

    ulResult= OM_IsAcpuAuthNv(en_NV_Item_IMEI);

    return ulResult;
}

/*******************************************************************
*������: OM_IsAcpuAuthNv
*���⺯����������:�ڼ�Ȩ�б���
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_IsAcpuAuthNv_case2(VOS_VOID)
{
    VOS_UINT32  ulResult;

    ulResult= OM_IsAcpuAuthNv(en_NV_Item_LC_Ctrl_PARA);

    return ulResult;
}

/*******************************************************************
*������: OM_AcpuCbtEstablishProc
*���⺯����������:��CCPU���ͽ�����Ϣʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuCbtEstablishProc_case1(VOS_VOID)
{
    VOS_UINT32              ulResult;
    APP_OM_MSG_EX_STRU      stAppToOmMsg;
    VOS_UINT16 usReturnPrimId = OM_APP_ESTABLISH_CNF;

    memset(&stAppToOmMsg, 0, sizeof(stAppToOmMsg));

    ulResult = OM_AcpuCbtEstablishProc(&stAppToOmMsg, usReturnPrimId);

    return ulResult;
}

/*******************************************************************
*������: OM_AcpuCbtEstablishProc
*���⺯����������:��CCPU���ͽ�����Ϣʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuCbtEstablishProc_case2(VOS_VOID)
{
    VOS_UINT32              ulResult;
    APP_OM_MSG_EX_STRU      stAppToOmMsg;
    VOS_UINT16 usReturnPrimId = OM_APP_ESTABLISH_CNF;

    memset(&stAppToOmMsg, 0, sizeof(stAppToOmMsg));

    ulResult = OM_AcpuCbtEstablishProc(&stAppToOmMsg, usReturnPrimId);

    return ulResult;
}

/*******************************************************************
*������: OM_AcpuCnfEstablishProc
*���⺯����������:��CCPU���ͽ�����Ϣʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuCnfEstablishProc_case1(VOS_VOID)
{
    VOS_UINT32              ulResult;
    APP_OM_MSG_EX_STRU      stAppToOmMsg;
    VOS_UINT16 usReturnPrimId = OM_APP_ESTABLISH_CNF;

    memset(&stAppToOmMsg, 0, sizeof(stAppToOmMsg));

    ulResult = OM_AcpuCnfEstablishProc(&stAppToOmMsg, usReturnPrimId);

    return ulResult;
}

/*******************************************************************
*������: OM_AcpuCnfEstablishProc
*���⺯����������:��CCPU���ͽ�����Ϣʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuCnfEstablishProc_case2(VOS_VOID)
{
    VOS_UINT32              ulResult;
    APP_OM_MSG_EX_STRU      stAppToOmMsg;
    VOS_UINT16 usReturnPrimId = OM_APP_ESTABLISH_CNF;

    memset(&stAppToOmMsg, 0, sizeof(stAppToOmMsg));

    ulResult = OM_AcpuCnfEstablishProc(&stAppToOmMsg, usReturnPrimId);

    return ulResult;
}

/*******************************************************************
*������: OM_AcpuReleaseReq
*���⺯����������:ͨ��ICCͨ��֪ͨCCPU��·�Ͽ�ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuReleaseReq_case1(VOS_VOID)
{
    VOS_UINT32                  ulResult;
    APP_OM_MSG_EX_STRU          stAppToOmMsg;
    VOS_UINT16 usReturnPrimId = OM_APP_RELEASE_CNF;

    memset(&stAppToOmMsg, 0, sizeof(stAppToOmMsg));
    stAppToOmMsg.ucCpuId = OM_LOGIC_CHANNEL_CBT;

    ulResult = OM_AcpuReleaseReq(&stAppToOmMsg, usReturnPrimId);

    return ulResult;
}

/*******************************************************************
*������: OM_AcpuReleaseReq
*���⺯����������:ͨ��ICCͨ��֪ͨCCPU��·�Ͽ�ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuReleaseReq_case2(VOS_VOID)
{
    VOS_UINT32                  ulResult;
    APP_OM_MSG_EX_STRU          stAppToOmMsg;
    VOS_UINT16 usReturnPrimId   = OM_APP_RELEASE_CNF;

    memset(&stAppToOmMsg, 0, sizeof(stAppToOmMsg));
    stAppToOmMsg.ucCpuId = OM_LOGIC_CHANNEL_CNF;

    ulResult = OM_AcpuReleaseReq(&stAppToOmMsg, usReturnPrimId);

    return ulResult;
}

/*******************************************************************
*������: OM_AcpuEstablishReq
*���⺯����������:��ӦCBTͨ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuEstablishReq_case1(VOS_VOID)
{
    VOS_UINT32                  ulResult;
    APP_OM_MSG_EX_STRU          stAppToOmMsg;
    VOS_UINT16 usReturnPrimId   = OM_APP_ESTABLISH_CNF;

    memset(&stAppToOmMsg, 0, sizeof(stAppToOmMsg));
    stAppToOmMsg.ucCpuId = OM_LOGIC_CHANNEL_CBT;

    ulResult = OM_AcpuEstablishReq(&stAppToOmMsg, usReturnPrimId);

    return ulResult;
}

/*******************************************************************
*������: OM_AcpuEstablishReq
*���⺯����������:��ӦCFGͨ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuEstablishReq_case2(VOS_VOID)
{
    VOS_UINT32                  ulResult;
    APP_OM_MSG_EX_STRU          stAppToOmMsg;
    VOS_UINT16 usReturnPrimId   = OM_APP_ESTABLISH_CNF;

    memset(&stAppToOmMsg, 0, sizeof(stAppToOmMsg));
    stAppToOmMsg.ucCpuId = OM_LOGIC_CHANNEL_CNF;

    ulResult = OM_AcpuEstablishReq(&stAppToOmMsg, usReturnPrimId);

    return ulResult;
}

/*******************************************************************
*������: OM_NotifyOtherCpuReleaseLink
*���⺯����������:��ӦCFGͨ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_NotifyOtherCpuReleaseLink_case1(VOS_VOID)
{
    return OM_NotifyOtherCpuReleaseLink();
}

/*******************************************************************
*������: OM_AcpuCbtReleaseProc
*���⺯����������:CBTͨ���Ͽ�
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuCbtReleaseProc_case1(VOS_VOID)
{
    VOS_UINT32                  ulResult;
    APP_OM_MSG_EX_STRU          stAppToOmMsg;
    VOS_UINT16 usReturnPrimId   = OM_APP_RELEASE_CNF;

    memset(&stAppToOmMsg, 0, sizeof(stAppToOmMsg));
    stAppToOmMsg.ucCpuId = OM_LOGIC_CHANNEL_CBT;

    ulResult = OM_AcpuCbtReleaseProc(&stAppToOmMsg, usReturnPrimId);

    return ulResult;
}

/*******************************************************************
*������: OM_AcpuCnfReleaseProc
*���⺯����������:CBTͨ���Ͽ�
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuCnfReleaseProc_case1(VOS_VOID)
{
    VOS_UINT32                  ulResult;
    APP_OM_MSG_EX_STRU          stAppToOmMsg;
    VOS_UINT16 usReturnPrimId   = OM_APP_RELEASE_CNF;

    memset(&stAppToOmMsg, 0, sizeof(stAppToOmMsg));
    stAppToOmMsg.ucCpuId = OM_LOGIC_CHANNEL_CNF;

    ulResult = OM_AcpuCnfReleaseProc(&stAppToOmMsg, usReturnPrimId);

    return ulResult;
}

/*******************************************************************
*������: OM_AcpuCnfReleaseProc
*���⺯����������:CBTͨ���Ͽ�
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_AcpuCnfReleaseProc_case2(VOS_VOID)
{
    VOS_UINT32                  ulResult;
    APP_OM_MSG_EX_STRU          stAppToOmMsg;
    VOS_UINT16 usReturnPrimId   = OM_APP_RELEASE_CNF;

    memset(&stAppToOmMsg, 0, sizeof(stAppToOmMsg));
    stAppToOmMsg.ucCpuId = OM_LOGIC_CHANNEL_CNF;

    ulResult = OM_AcpuCnfReleaseProc(&stAppToOmMsg, usReturnPrimId);

    return ulResult;
}

VOS_UINT32 RspFuncPtr(OM_RSP_PACKET_STRU *pstRspPacket, VOS_UINT16 usLength)
{
    return 0;
}

/*******************************************************************
*������: OM_AcpuQueryMsgProc
*���⺯����������:��ѯ��Ϣ����
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_AcpuQueryMsgProc_case1(VOS_VOID)
{
    OM_REQ_PACKET_STRU  RspPacket;
    OM_RSP_FUNC         RspFuncPtr;
    APP_OM_MSG_EX_STRU *pstAppToOmMsg;

    pstAppToOmMsg = (APP_OM_MSG_EX_STRU*)&RspPacket;
    pstAppToOmMsg->usPrimId = APP_OM_ESTABLISH_REQ;

    OM_AcpuQueryMsgProc(&RspPacket, (OM_RSP_FUNC *)RspFuncPtr);

    return;
}

/*******************************************************************
*������: OM_AcpuQueryMsgProc
*���⺯����������:��ѯ��Ϣ����
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_AcpuQueryMsgProc_case2(VOS_VOID)
{
    OM_REQ_PACKET_STRU RspPacket;
    OM_RSP_FUNC RspFuncPtr;
    APP_OM_MSG_EX_STRU *pstAppToOmMsg;
    VOS_UINT32 ulRet;

    pstAppToOmMsg = (APP_OM_MSG_EX_STRU*)&RspPacket;
    pstAppToOmMsg->usPrimId = 0;

    OM_AcpuQueryMsgProc(&RspPacket, (OM_RSP_FUNC *)RspFuncPtr);

    return;
}

/*******************************************************************
*������: OmAcpuShowOnOff
*���⺯����������:��ѯ��Ϣ����
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OmAcpuShowOnOff_case1(VOS_VOID)
{
    OmAcpuShowOnOff();

    return;
}
