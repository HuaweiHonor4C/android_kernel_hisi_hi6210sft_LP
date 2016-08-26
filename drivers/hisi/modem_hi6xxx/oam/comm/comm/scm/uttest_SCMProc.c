/* ͷ�ļ����� */
#include "SCMProc.h"
#include "SOCPInterface.h"
#include "OmCommonPpm.h"
#include "omprivate.h"

extern SCM_CODER_SRC_CFG_STRU      g_astSCMCoderSrcCfg[SCM_CODER_SRC_NUM];

extern OM_PSEUDO_SYNC_STRU         g_stUsbCfgPseudoSync;;

extern VOS_UINT32                  g_ulOmAcpuDbgFlag = VOS_NULL_DWORD;

extern VOS_VOID SCM_SocpSendDataToUDISucc(
    SOCP_CODER_DST_ENUM_U32             enChanID,
    CPM_PHY_PORT_ENUM_UINT32            enPhyport,
    OM_SOCP_CHANNEL_DEBUG_INFO         *pstDebugInfo,
    VOS_UINT32                         *pulSendDataLen
);

/*******************************************************************
*������: SCM_CoderSrcChannelCfg            
*���⺯����������:��ȡͨ��״̬
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_SCM_CoderSrcChannelCfg_GetenInitState(VOS_UINT8 ucIndex)
{
    return g_astSCMCoderSrcCfg[ucIndex].enInitState;
}

/*******************************************************************
*������: SCM_CoderSrcChannelCfg            
*���⺯����������:����Դͨ����ʧ��
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_SCM_CoderSrcChannelCfg_case1(VOS_VOID)
{
    g_astSCMCoderSrcCfg[2].enInitState = SCM_CHANNEL_UNINIT;

    return SCM_CoderSrcChannelCfg(&g_astSCMCoderSrcCfg[2]);
}

/*******************************************************************
*������: SCM_CoderSrcChannelCfg            
*���⺯����������:����Դͨ����ɹ�
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_SCM_CoderSrcChannelCfg_case2(VOS_VOID)
{
    g_astSCMCoderSrcCfg[2].enInitState = SCM_CHANNEL_UNINIT;

    return SCM_CoderSrcChannelCfg(&g_astSCMCoderSrcCfg[2]);
}

/*******************************************************************
*������: SCM_CoderDstChannelInit
*���⺯����������:����Ŀ��ͨ������ʧ��
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_SCM_CoderDstChannelInit_case1(VOS_VOID)
{
    return SCM_CoderDstChannelInit();
}

/*******************************************************************
*������: SCM_CoderDstChannelInit            
*���⺯����������:����Ŀ��ͨ�����óɹ�
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_SCM_CoderDstChannelInit_case2(VOS_VOID)
{
    return SCM_CoderDstChannelInit();
}

/*******************************************************************
*������: SCM_RegDecoderDestProc            
*���⺯����������:ע�����Ŀ�Ļص�����enChanlID�쳣
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_SCM_RegDecoderDestProc_case1(VOS_VOID)
{
    SOCP_DECODER_DST_ENUM_U32       enChanlID;
    SCM_DECODERDESTFUCN             func;

    enChanlID = SOCP_DECODER_DST_BUTT;
    func      = VOS_NULL_PTR;

    return SCM_RegDecoderDestProc(enChanlID, func);
}

/*******************************************************************
*������: SCM_RegDecoderDestProc            
*���⺯����������:ע�����Ŀ�Ļص�����funcΪ��ָ��
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_SCM_RegDecoderDestProc_case2(VOS_VOID)
{
    SOCP_DECODER_DST_ENUM_U32       enChanlID;
    SCM_DECODERDESTFUCN             func;

    enChanlID = SOCP_DECODER_DST_LOM;
    func      = VOS_NULL_PTR;

    return SCM_RegDecoderDestProc(enChanlID, func);
}

/*******************************************************************
*������: SCM_RegDecoderDestProc            
*���⺯����������:ע�����Ŀ�Ļص���enChanlIDΪSOCP_DECODER_DST_LOM
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_SCM_RegDecoderDestProc_case3(VOS_VOID)
{
    SOCP_DECODER_DST_ENUM_U32       enChanlID;
    SCM_DECODERDESTFUCN             func;

    enChanlID = SOCP_DECODER_DST_LOM;
    func      = (SCM_DECODERDESTFUCN)1;

    return SCM_RegDecoderDestProc(enChanlID, func);
}

/*******************************************************************
*������: SCM_RegDecoderDestProc            
*���⺯����������:ע�����Ŀ�Ļص���enChanlIDΪSOCP_DECODER_DST_GUOM
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_SCM_RegDecoderDestProc_case4(VOS_VOID)
{
    SOCP_DECODER_DST_ENUM_U32       enChanlID;
    SCM_DECODERDESTFUCN             func;

    enChanlID = SOCP_DECODER_DST_GUOM;
    func      = (SCM_DECODERDESTFUCN)1;

    return SCM_RegDecoderDestProc(enChanlID, func);
}


/*******************************************************************
*������: SCM_RegDecoderDestProc            
*���⺯����������:ע�����Ŀ�Ļص���enChanlIDΪSOCP_DECODER_CBT
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_SCM_RegDecoderDestProc_case5(VOS_VOID)
{
    SOCP_DECODER_DST_ENUM_U32       enChanlID;
    SCM_DECODERDESTFUCN             func;

    enChanlID = SOCP_DECODER_CBT;
    func      = (SCM_DECODERDESTFUCN)1;

    return SCM_RegDecoderDestProc(enChanlID, func);
}

/*******************************************************************
*������: SCM_RegDecoderDestProc            
*���⺯����������:ע�����Ŀ�Ļص���enChanlID����
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_SCM_RegDecoderDestProc_case6(VOS_VOID)
{
    SOCP_DECODER_DST_ENUM_U32       enChanlID;
    SCM_DECODERDESTFUCN             func;

    enChanlID = SOCP_DECODER_DST_RFU;
    func      = (SCM_DECODERDESTFUCN)1;

    return SCM_RegDecoderDestProc(enChanlID, func);
}

/*******************************************************************
*������: SCM_SocpSendDataToUDISucc            
*���⺯����������:CNFͨ������len�쳣
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_SCM_SocpSendDataToUDISucc_case1(VOS_VOID)
{
    SOCP_CODER_DST_ENUM_U32             enChanID;
    CPM_PHY_PORT_ENUM_UINT32            enPhyport;
    OM_SOCP_CHANNEL_DEBUG_INFO         *pstDebugInfo;
    VOS_UINT32                          ulSendDataLen;

    enChanID      = SOCP_CODER_DST_OM_CNF;
    enPhyport     = CPM_CFG_PORT;
    pstDebugInfo  = &g_stAcpuDebugInfo.stCnfDebugInfo;
    ulSendDataLen = 1;

    g_stUsbCfgPseudoSync.ulLen = 0;

    SCM_SocpSendDataToUDISucc(enChanID, enPhyport, pstDebugInfo, &ulSendDataLen);
}

/*******************************************************************
*������: SCM_SocpSendDataToUDISucc            
*���⺯����������:CNFͨ����len����
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_SCM_SocpSendDataToUDISucc_case2(VOS_VOID)
{
    SOCP_CODER_DST_ENUM_U32             enChanID;
    CPM_PHY_PORT_ENUM_UINT32            enPhyport;
    OM_SOCP_CHANNEL_DEBUG_INFO         *pstDebugInfo;
    VOS_UINT32                          ulSendDataLen;

    enChanID      = SOCP_CODER_DST_OM_CNF;
    enPhyport     = CPM_CFG_PORT;
    pstDebugInfo  = &g_stAcpuDebugInfo.stCnfDebugInfo;
    ulSendDataLen = 1;

    g_stUsbCfgPseudoSync.ulLen = 1;

    SCM_SocpSendDataToUDISucc(enChanID, enPhyport, pstDebugInfo, &ulSendDataLen);
}

/*******************************************************************
*������: SCM_SocpSendDataToUDISucc            
*���⺯����������:INDͨ������len�쳣
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_SCM_SocpSendDataToUDISucc_case3(VOS_VOID)
{
    SOCP_CODER_DST_ENUM_U32             enChanID;
    CPM_PHY_PORT_ENUM_UINT32            enPhyport;
    OM_SOCP_CHANNEL_DEBUG_INFO         *pstDebugInfo;
    VOS_UINT32                          ulSendDataLen;

    enChanID      = SOCP_CODER_DST_OM_IND;
    enPhyport     = CPM_IND_PORT;
    pstDebugInfo  = &g_stAcpuDebugInfo.stIndDebugInfo;
    ulSendDataLen = 1;

    g_stUsbCfgPseudoSync.ulLen = 0;

    SCM_SocpSendDataToUDISucc(enChanID, enPhyport, pstDebugInfo, &ulSendDataLen);
}

/*******************************************************************
*������: SCM_SocpSendDataToUDISucc            
*���⺯����������:INDͨ����len����
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_SCM_SocpSendDataToUDISucc_case4(VOS_VOID)
{
    SOCP_CODER_DST_ENUM_U32             enChanID;
    CPM_PHY_PORT_ENUM_UINT32            enPhyport;
    OM_SOCP_CHANNEL_DEBUG_INFO         *pstDebugInfo;
    VOS_UINT32                          ulSendDataLen;

    enChanID      = SOCP_CODER_DST_OM_IND;
    enPhyport     = CPM_IND_PORT;
    pstDebugInfo  = &g_stAcpuDebugInfo.stIndDebugInfo;
    ulSendDataLen = 1;

    g_stUsbCfgPseudoSync.ulLen = 1;

    SCM_SocpSendDataToUDISucc(enChanID, enPhyport, pstDebugInfo, &ulSendDataLen);
}

/*******************************************************************
*������: SCM_SocpSendDataToUDI            
*���⺯����������:INDͨ����len����
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_SCM_SocpSendDataToUDI_case1(VOS_VOID)
{
    SOCP_CODER_DST_ENUM_U32             enChanID;
    VOS_UINT8                          *pucVirData;
    VOS_UINT8                          *pucPHYData;
    VOS_UINT32                          ulDataLen;

    enChanID    = SOCP_CODER_DST_BUTT;
    pucVirData  = VOS_NULL_PTR;
    pucPHYData  = VOS_NULL_PTR;
    ulDataLen   = 0;

    SCM_SocpSendDataToUDI(enChanID, pucVirData, pucPHYData, ulDataLen);
}

/*******************************************************************
*������: SCM_SocpSendDataToUDI            
*���⺯����������:ulDataLen�쳣
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_SCM_SocpSendDataToUDI_case2(VOS_VOID)
{
    SOCP_CODER_DST_ENUM_U32             enChanID;
    VOS_UINT8                          *pucVirData;
    VOS_UINT8                          *pucPHYData;
    VOS_UINT32                          ulDataLen;

    enChanID    = SOCP_CODER_DST_OM_CNF;
    pucVirData  = (VOS_UINT8 *)1;
    pucPHYData  = (VOS_UINT8 *)1;
    ulDataLen   = 0;

    SCM_SocpSendDataToUDI(enChanID, pucVirData, pucPHYData, ulDataLen);
}

/*******************************************************************
*������: SCM_SocpSendDataToUDI            
*���⺯����������:pucVirData�쳣
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_SCM_SocpSendDataToUDI_case3(VOS_VOID)
{
    SOCP_CODER_DST_ENUM_U32             enChanID;
    VOS_UINT8                          *pucVirData;
    VOS_UINT8                          *pucPHYData;
    VOS_UINT32                          ulDataLen;

    enChanID    = SOCP_CODER_DST_OM_IND;
    pucVirData  = VOS_NULL_PTR;
    pucPHYData  = (VOS_UINT8 *)1;
    ulDataLen   = 1;

    SCM_SocpSendDataToUDI(enChanID, pucVirData, pucPHYData, ulDataLen);
}

/*******************************************************************
*������: SCM_SocpSendDataToUDI            
*���⺯����������:CPM_ComSend���ؽ��CPM_SEND_ERR
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_SCM_SocpSendDataToUDI_case4(VOS_VOID)
{
    SOCP_CODER_DST_ENUM_U32             enChanID;
    VOS_UINT8                          *pucVirData;
    VOS_UINT8                          *pucPHYData;
    VOS_UINT32                          ulDataLen;

    enChanID    = SOCP_CODER_DST_OM_IND;
    pucVirData  = (VOS_UINT8 *)1;
    pucPHYData  = (VOS_UINT8 *)1;
    ulDataLen   = 1;

    g_ulOmAcpuDbgFlag = 0;

    SCM_SocpSendDataToUDI(enChanID, pucVirData, pucPHYData, ulDataLen);
}

/*******************************************************************
*������: SCM_SocpSendDataToUDI            
*���⺯����������:CPM_ComSend���ؽ��CPM_SEND_FUNC_NULL
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_SCM_SocpSendDataToUDI_case5(VOS_VOID)
{
    SOCP_CODER_DST_ENUM_U32             enChanID;
    VOS_UINT8                          *pucVirData;
    VOS_UINT8                          *pucPHYData;
    VOS_UINT32                          ulDataLen;

    enChanID    = SOCP_CODER_DST_OM_IND;
    pucVirData  = (VOS_UINT8 *)1;
    pucPHYData  = (VOS_UINT8 *)1;
    ulDataLen   = 1;

    g_ulOmAcpuDbgFlag = 0;

    SCM_SocpSendDataToUDI(enChanID, pucVirData, pucPHYData, ulDataLen);
}

/*******************************************************************
*������: SCM_SocpSendDataToUDI            
*���⺯����������:CPM_ComSend���ؽ��CPM_SEND_PARA_ERR
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_SCM_SocpSendDataToUDI_case6(VOS_VOID)
{
    SOCP_CODER_DST_ENUM_U32             enChanID;
    VOS_UINT8                          *pucVirData;
    VOS_UINT8                          *pucPHYData;
    VOS_UINT32                          ulDataLen;

    enChanID    = SOCP_CODER_DST_OM_IND;
    pucVirData  = (VOS_UINT8 *)1;
    pucPHYData  = (VOS_UINT8 *)1;
    ulDataLen   = 1;

    g_ulOmAcpuDbgFlag = 0;

    SCM_SocpSendDataToUDI(enChanID, pucVirData, pucPHYData, ulDataLen);
}


/*******************************************************************
*������: SCM_SocpSendDataToUDI            
*���⺯����������:CPM_ComSend���ؽ��CPM_SEND_OK,ulUSBSendLenΪ0
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_SCM_SocpSendDataToUDI_case7(VOS_VOID)
{
    SOCP_CODER_DST_ENUM_U32             enChanID;
    VOS_UINT8                          *pucVirData;
    VOS_UINT8                          *pucPHYData;
    VOS_UINT32                          ulDataLen;

    enChanID    = SOCP_CODER_DST_OM_IND;
    pucVirData  = (VOS_UINT8 *)1;
    pucPHYData  = (VOS_UINT8 *)1;
    ulDataLen   = 1;

    g_ulOmAcpuDbgFlag = 0;
    g_stAcpuDebugInfo.stIndDebugInfo.ulUSBSendLen = 0;

    SCM_SocpSendDataToUDI(enChanID, pucVirData, pucPHYData, ulDataLen);
}

/*******************************************************************
*������: SCM_SocpSendDataToUDI            
*���⺯����������:CPM_ComSend���ؽ��CPM_SEND_OK,ulUSBSendLenΪOM_DATA_MAX_LENGTH
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_SCM_SocpSendDataToUDI_case8(VOS_VOID)
{
    SOCP_CODER_DST_ENUM_U32             enChanID;
    VOS_UINT8                          *pucVirData;
    VOS_UINT8                          *pucPHYData;
    VOS_UINT32                          ulDataLen;

    enChanID    = SOCP_CODER_DST_OM_IND;
    pucVirData  = (VOS_UINT8 *)1;
    pucPHYData  = (VOS_UINT8 *)1;
    ulDataLen   = 1;

    g_ulOmAcpuDbgFlag = 0;
    g_stAcpuDebugInfo.stIndDebugInfo.ulUSBSendLen = OM_DATA_MAX_LENGTH;

    SCM_SocpSendDataToUDI(enChanID, pucVirData, pucPHYData, ulDataLen);
}

/*******************************************************************
*������: SCM_SocpSendDataToUDI            
*���⺯����������:CPM_ComSend���ؽ��CPM_SEND_BUTT
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_SCM_SocpSendDataToUDI_case9(VOS_VOID)
{
    SOCP_CODER_DST_ENUM_U32             enChanID;
    VOS_UINT8                          *pucVirData;
    VOS_UINT8                          *pucPHYData;
    VOS_UINT32                          ulDataLen;

    enChanID    = SOCP_CODER_DST_OM_IND;
    pucVirData  = (VOS_UINT8 *)1;
    pucPHYData  = (VOS_UINT8 *)1;
    ulDataLen   = 1;

    g_ulOmAcpuDbgFlag = 0;

    SCM_SocpSendDataToUDI(enChanID, pucVirData, pucPHYData, ulDataLen);
}

/*******************************************************************
*������: SCM_Init            
*���⺯����������:SCM��ʼ��
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_SCM_Init_case(VOS_VOID)
{
    return SCM_Init();
}

/*******************************************************************
*������: COMM_Init            
*���⺯����������:COMM��ʼ��
*Ԥ�ڽ����           
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_COMM_Init_case(VOS_VOID)
{
    return COMM_Init();
}