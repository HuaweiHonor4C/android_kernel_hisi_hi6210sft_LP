/* ͷ�ļ����� */
#include "omsdlog.h"

extern OM_SD_HEAD_STRU                     *g_pstHeadInfo;
extern OM_SD_BUFFER_INNER_DATA_STRU        *g_pstSdBuffer;
extern OM_SD_DEBUG_INFO                     g_stOmSDDebugInfo;
extern OM_SD_READ_INFO_STRU                 g_stReadInfo;
extern VOS_UINT32                           g_ulInterval;

OM_PORT_CFG_STRU                            stPortCfg;
OM_SD_HEAD_STRU                             stSdHea;
OM_SD_BUFFER_INNER_DATA_STRU                stSdBuffer;



/*******************************************************************
*������: OM_SDReadHeadInfo
*���⺯����������:д��ͷ����Ϣʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDReadHeadInfo_case1(VOS_VOID)
{
    return OM_SDReadHeadInfo();
}


/*******************************************************************
*������: OM_SDReadHeadInfo
*���⺯����������:д��ͷ����Ϣ�ɹ�
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDReadHeadInfo_case2(VOS_VOID)
{
    VOS_UINT32  ulResult;

    g_pstHeadInfo = (OM_SD_HEAD_STRU*)malloc(sizeof(OM_SD_HEAD_STRU));

    g_pstHeadInfo->ulMagicNum = OM_SD_MAGIC_NUMBER;

    g_pstHeadInfo->ulOppositeMagicNum = OM_SD_OPPOSITE_MAGIC_NUMBER;

    ulResult = OM_SDReadHeadInfo();

    free(g_pstHeadInfo);

    return ulResult;
}

/*******************************************************************
*������: OM_SDReadHeadInfo
*���⺯����������:��ȡ��SD����ͷ����Ϣʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDReadHeadInfo_case3(VOS_VOID)
{
    VOS_UINT32  ulResult;

    g_pstHeadInfo = (OM_SD_HEAD_STRU*)malloc(sizeof(OM_SD_HEAD_STRU));

    g_pstHeadInfo->ulMagicNum = 0xff;

    ulResult = OM_SDReadHeadInfo();

    free(g_pstHeadInfo);

    return ulResult;
}

/*******************************************************************
*������: OM_SDReadHeadInfo
*���⺯����������:��ʼ���¿�ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDReadHeadInfo_case4(VOS_VOID)
{
    VOS_UINT32  ulResult;

    g_pstHeadInfo = (OM_SD_HEAD_STRU*)malloc(sizeof(OM_SD_HEAD_STRU));

    g_pstHeadInfo->ulMagicNum = 0xff;

    ulResult = OM_SDReadHeadInfo();

    free(g_pstHeadInfo);

    return ulResult;
}

/*******************************************************************
*������: OM_SDReadHeadInfo
*���⺯����������:��ȡ��ͷ����Ϣ�ɹ�
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDReadHeadInfo_case5(VOS_VOID)
{
    VOS_UINT32  ulResult;

    g_pstHeadInfo = (OM_SD_HEAD_STRU*)malloc(sizeof(OM_SD_HEAD_STRU));

    g_pstHeadInfo->ulMagicNum = 0xff;

    ulResult = OM_SDReadHeadInfo();

    free(g_pstHeadInfo);

    return ulResult;
}

/*******************************************************************
*������: OM_SDFlushHeadInfo
*���⺯����������:����ͷ����Ϣʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDFlushHeadInfo_case1(VOS_VOID)
{
    g_pstHeadInfo = (OM_SD_HEAD_STRU*)malloc(sizeof(OM_SD_HEAD_STRU));

    g_pstHeadInfo->ulNextCid = 11;

    g_pstHeadInfo->ulTotalCNum = 10;

    return OM_SDFlushHeadInfo();
}

/*******************************************************************
*������: OM_SDFlushHeadInfo
*���⺯����������:����ͷ����Ϣ�ɹ�
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDFlushHeadInfo_case2(VOS_VOID)
{
    VOS_UINT32  ulResult;

    g_pstHeadInfo = (OM_SD_HEAD_STRU*)malloc(sizeof(OM_SD_HEAD_STRU));

    g_pstHeadInfo->ulNextCid = 9;

    g_pstHeadInfo->ulTotalCNum = 10;

    ulResult = OM_SDFlushHeadInfo();

    free(g_pstHeadInfo);

    return ulResult;
}


/*******************************************************************
*������: OM_SDWriteCard
*���⺯����������:�ռ��㹻�����Ϣ
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDWriteCard_case1(VOS_VOID)
{
    VOS_UINT8   pucData[100];
    VOS_UINT32  ulResult;

    g_pstSdBuffer = (OM_SD_BUFFER_INNER_DATA_STRU*)malloc(sizeof(OM_SD_BUFFER_INNER_DATA_STRU));

    g_pstSdBuffer->ulDataLen = OM_SD_BUFFER_MAX_DATA_LEN - 0xff;

    ulResult = OM_SDWriteCard(pucData, VOS_NULL_PTR, 0xf);

    free(g_pstSdBuffer);

    return ulResult;
}

/*******************************************************************
*������: OM_SDWriteCard
*���⺯����������:�ռ䲻�����Trace_��ͷ��Ϣʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDWriteCard_case2(VOS_VOID)
{
    VOS_UINT8   pucData[100];
    VOS_UINT32  ulResult;

    g_pstSdBuffer = (OM_SD_BUFFER_INNER_DATA_STRU*)malloc(sizeof(OM_SD_BUFFER_INNER_DATA_STRU));

    g_pstSdBuffer->ulDataLen = OM_SD_BUFFER_MAX_DATA_LEN - 0xf;

    ulResult = OM_SDWriteCard(pucData, VOS_NULL_PTR, 0xff);

    free(g_pstSdBuffer);

    return ulResult;
}

/*******************************************************************
*������: OM_SDWriteCard
*���⺯����������:�����Ϣʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDWriteCard_case3(VOS_VOID)
{
    VOS_UINT8   pucData[100];
    VOS_UINT32  ulResult;

    g_pstSdBuffer = (OM_SD_BUFFER_INNER_DATA_STRU*)malloc(sizeof(OM_SD_BUFFER_INNER_DATA_STRU));

    g_pstHeadInfo = (OM_SD_HEAD_STRU*)malloc(sizeof(OM_SD_HEAD_STRU));

    g_pstSdBuffer->ulDataLen = OM_SD_BUFFER_MAX_DATA_LEN - 0xf;

    g_pstHeadInfo->ulNextCid = 10;

    g_pstHeadInfo->ulNextCid = 20;

    g_stOmSDDebugInfo.ulDataLenth = OM_SD_MAX_DATA_LENTH;

    ulResult = OM_SDWriteCard(pucData, VOS_NULL_PTR, 0xff);

    free(g_pstSdBuffer);
    free(g_pstHeadInfo);

    return ulResult;
}

/*******************************************************************
*������: OM_SDWriteCard
*���⺯����������:�����Ϣ�ɹ�
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDWriteCard_case4(VOS_VOID)
{
    VOS_UINT8   pucData[256];
    VOS_UINT32  ulResult;

    g_pstSdBuffer = (OM_SD_BUFFER_INNER_DATA_STRU*)malloc(sizeof(OM_SD_BUFFER_INNER_DATA_STRU));

    g_pstHeadInfo = (OM_SD_HEAD_STRU*)malloc(sizeof(OM_SD_HEAD_STRU));

    g_pstSdBuffer->ulDataLen = OM_SD_BUFFER_MAX_DATA_LEN - 0xf;

    g_pstHeadInfo->ulNextCid = 10;

    g_pstHeadInfo->ulNextCid = 20;

    ulResult = OM_SDWriteCard(pucData, VOS_NULL_PTR, 0xff);

    free(g_pstSdBuffer);
    free(g_pstHeadInfo);

    return ulResult;
}

/*******************************************************************
*������: OM_SDReadCluster
*���⺯����������:PC�෢�����ݰ���ų�����Ҫ�������
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_SDReadCluster_case1(VOS_VOID)
{
    g_stReadInfo.ulTotalNeedCNum = 100;

    OM_SDReadCluster(100);

    g_stReadInfo.ulTotalNeedCNum = 0;
}

/*******************************************************************
*������: OM_SDReadCluster
*���⺯����������:��SD������ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_SDReadCluster_case2(VOS_VOID)
{
    g_stReadInfo.ulTotalNeedCNum = 100;

    g_pstHeadInfo = (OM_SD_HEAD_STRU*)malloc(OM_SD_BLOCK_SIZE);

    g_pstHeadInfo->ulTotalCNum = 100;

    g_ulInterval = 10;

    OM_SDReadCluster(30);

    g_stReadInfo.ulTotalNeedCNum = 0;

    g_ulInterval = 0;
}

/*******************************************************************
*������: OM_SDReadCluster
*���⺯����������:��ǰcluster������
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_SDReadCluster_case3(VOS_VOID)
{
    g_stReadInfo.ulTotalNeedCNum = 100;

    g_pstHeadInfo = (OM_SD_HEAD_STRU*)malloc(OM_SD_BLOCK_SIZE);
    g_pstHeadInfo->ulTotalCNum = 100;

    g_pstSdBuffer = (OM_SD_BUFFER_INNER_DATA_STRU*)malloc(sizeof(OM_SD_BUFFER_INNER_DATA_STRU));

    g_ulInterval = 5;

    g_stReadInfo.ulStartCID = 20;

    g_pstSdBuffer->ulClusterId = 10;


    g_pstSdBuffer->ulOppositeClusterId = ~(g_pstSdBuffer->ulClusterId);

    OM_SDReadCluster(80);

    g_stReadInfo.ulTotalNeedCNum = 0;

    g_ulInterval = 0;

    free(g_pstSdBuffer);
}

/*******************************************************************
*������: OM_SDReadCluster
*���⺯����������:��ȡ�ɹ�
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_SDReadCluster_case4(VOS_VOID)
{
    g_stReadInfo.ulTotalNeedCNum = 100;

    g_pstHeadInfo = (OM_SD_HEAD_STRU*)malloc(OM_SD_BLOCK_SIZE);
    g_pstHeadInfo->ulTotalCNum = 100;

    g_ulInterval = 5;

    g_pstSdBuffer = (OM_SD_BUFFER_INNER_DATA_STRU*)malloc(sizeof(OM_SD_BUFFER_INNER_DATA_STRU));

    g_stReadInfo.ulStartCID = 20;

    g_pstSdBuffer->ulClusterId = 10;

    g_pstSdBuffer->ulOppositeClusterId = ~(g_pstSdBuffer->ulClusterId + 1);

    OM_SDReadCluster(96);

    g_stReadInfo.ulTotalNeedCNum = 0;

    g_ulInterval = 0;

    free(g_pstSdBuffer);
}


/*******************************************************************
*������: OM_SDParaCheck
*���⺯����������:�û���Ҫ��trace��СΪ0
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDParaCheck_case1(VOS_VOID)
{
    VOS_UINT32  ulErrorNum;

    return OM_SDParaCheck(0,&ulErrorNum);
}

/*******************************************************************
*������: OM_SDParaCheck
*���⺯����������:������ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDParaCheck_case2(VOS_VOID)
{
    VOS_UINT32  ulErrorNum;

    return OM_SDParaCheck(100,&ulErrorNum);
}

/*******************************************************************
*������: OM_SDParaCheck
*���⺯����������:SD��Ϊ�¿�
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDParaCheck_case3(VOS_VOID)
{
    VOS_UINT32  ulErrorNum;
    VOS_UINT32  ulresult;

    g_pstHeadInfo = (OM_SD_HEAD_STRU*)malloc(sizeof(OM_SD_HEAD_STRU));


    g_pstHeadInfo->ulMagicNum = 0xffff ;

    g_pstHeadInfo->ulOppositeMagicNum =0xffff ;


    ulresult =  OM_SDParaCheck(100,&ulErrorNum);

    free(g_pstHeadInfo);

    return ulresult;
}


/*******************************************************************
*������: OM_SDParaCheck
*���⺯����������:�����ݳɹ�
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDParaCheck_case4(VOS_VOID)
{
    VOS_UINT32  ulErrorNum;
    VOS_UINT32  ulresult;

    g_pstHeadInfo = (OM_SD_HEAD_STRU*)malloc(sizeof(OM_SD_HEAD_STRU));


    g_pstHeadInfo->ulMagicNum = OM_SD_MAGIC_NUMBER ;

    g_pstHeadInfo->ulOppositeMagicNum = OM_SD_OPPOSITE_MAGIC_NUMBER ;

    ulresult =  OM_SDParaCheck(100,&ulErrorNum);

    free(g_pstHeadInfo);

    return ulresult;
}

/*******************************************************************
*������: OM_SDInit
*���⺯����������:NV����SD������traceû��ʹ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDInit_case1(VOS_VOID)
{
    stPortCfg.enPortType = 0;
    stPortCfg.ulMaxFileSize = 123456;

    return OM_SDInit();
}

/*******************************************************************
*������: OM_SDInit
*���⺯����������:����ͷ��Ϣ��ַʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDInit_case2(VOS_VOID)
{
    stPortCfg.enPortType = 1;
    stPortCfg.ulMaxFileSize = 123456;

    return OM_SDInit();
}

/*******************************************************************
*������: OM_SDInit
*���⺯����������:����SD��������Ϣbufferʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDInit_case3(VOS_VOID)
{
    stPortCfg.enPortType = 1;
    stPortCfg.ulMaxFileSize = 123456;

    return OM_SDInit();
}

/*******************************************************************
*������: OM_SDInit
*���⺯����������:��ʼ���ɹ�
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_SDInit_case4(VOS_VOID)
{
    stPortCfg.enPortType = 1;
    stPortCfg.ulMaxFileSize = 123456;

    return OM_SDInit();
}

/*******************************************************************
*������: OM_PrintfSDError
*���⺯����������:�鿴SD��Debug��Ϣ
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_PrintfSDError_case1(VOS_VOID)
{
    OM_PrintfSDError();
}

/*******************************************************************
*������: OM_ReadSdMsgProc
*���⺯����������:��⵽SD������λ
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_ReadSdMsgProc_case1(VOS_VOID)
{
    OM_REQ_PACKET_STRU *pstRspPacke;
    OM_RSP_FUNC *pstRspFuncPtr=VOS_NULL_PTR;

    pstRspPacke = (OM_REQ_PACKET_STRU *)malloc(200);

    OM_ReadSdMsgProc(pstRspPacke,pstRspFuncPtr);

    free(pstRspPacke);
}

/*******************************************************************
*������: OM_ReadSdMsgProc
*���⺯����������:PC�·�����SD�����ݵ���Ϣ
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_ReadSdMsgProc_case2(VOS_VOID)
{
    OM_REQ_PACKET_STRU	*pstRspPacket;
    OM_RSP_FUNC			*pstRspFuncPtr=VOS_NULL_PTR;
    APP_OM_MSG_EX_STRU              *pstAppToOmMsg;

    pstRspPacket = (OM_REQ_PACKET_STRU *)malloc(200);
    pstAppToOmMsg = (APP_OM_MSG_EX_STRU *)pstRspPacket;
    pstAppToOmMsg->usPrimId = APP_OM_READ_SD_DATA_REQ;

    OM_ReadSdMsgProc(pstRspPacket,pstRspFuncPtr);

    free(pstRspPacket);
}

/*******************************************************************
*������: OM_ReadSdMsgProc
*���⺯����������:PC�·���SD��cluster��Ϣ
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_ReadSdMsgProc_case3(VOS_VOID)
{
    OM_REQ_PACKET_STRU	*pstRspPacket;
    OM_RSP_FUNC			*pstRspFuncPtr=VOS_NULL_PTR;
    APP_OM_MSG_EX_STRU              *pstAppToOmMsg;

    pstRspPacket = (OM_REQ_PACKET_STRU *)malloc(200);
    pstAppToOmMsg = (APP_OM_MSG_EX_STRU*)pstRspPacket;
    pstAppToOmMsg->usPrimId = APP_OM_READ_SD_CLUSTER_REQ;

    OM_ReadSdMsgProc(pstRspPacket,pstRspFuncPtr);

    free(pstRspPacket);
}

/*******************************************************************
*������: OM_ReadSdMsgProc
*���⺯����������:PC����Ϣ����
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_ReadSdMsgProc_case4(VOS_VOID)
{
    OM_REQ_PACKET_STRU	*pstRspPacket;
    OM_RSP_FUNC			*pstRspFuncPtr=VOS_NULL_PTR;
    APP_OM_MSG_EX_STRU              *pstAppToOmMsg;

    pstRspPacket = (OM_REQ_PACKET_STRU *)malloc(200);
    pstAppToOmMsg = (APP_OM_MSG_EX_STRU*)pstRspPacket;
    pstAppToOmMsg->usPrimId = 0x1;

    OM_ReadSdMsgProc(pstRspPacket,pstRspFuncPtr);

    free(pstRspPacket);
}

VOS_VOID *uttest_GetPortCfgPtr(VOS_VOID)
{
    return &stPortCfg;
}

VOS_VOID *uttest_GetstSdHeaPtr(VOS_VOID)
{
    return &stSdHea;
}

VOS_VOID *uttest_GetstSdBufferPtr(VOS_VOID)
{
    return &stSdBuffer;
}
