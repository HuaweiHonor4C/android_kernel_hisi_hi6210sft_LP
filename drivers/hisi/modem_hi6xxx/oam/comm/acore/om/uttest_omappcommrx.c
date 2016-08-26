/* ͷ�ļ����� */
#include "OmAppRl.h"
#include "SOCPInterface.h"
#include "om.h"
#include "omrl.h"
#include "OmCommonPpm.h"


extern OMRL_RCV_CHAN_CTRL_INFO_STRU            g_stAcpuCnfCtrlInfo;;
/*******************************************************************
*������: GU_OamSndPcMsgToCcpu
*���⺯����������:C�˸�λдICCʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_GU_OamSndPcMsgToCcpu_case1(VOS_VOID)
{
    OMRL_RCV_CHAN_CTRL_INFO_STRU stCtrlInfo;
    SOCP_CODER_DST_ENUM_U32 enChanID = SOCP_CODER_DST_OM_CNF;
    VOS_UINT8 aucData[USB_MAX_DATA_LEN + 1] = {0};
    VOS_UINT32 ulDataLen = USB_MAX_DATA_LEN + 1;

    return GU_OamSndPcMsgToCcpu(&stCtrlInfo, aucData, ulDataLen);
}

/*******************************************************************
*������: GU_OamSndPcMsgToCcpu
*���⺯����������:C�˸�λдICCʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_GU_OamSndPcMsgToCcpu_case2(VOS_VOID)
{
    OMRL_RCV_CHAN_CTRL_INFO_STRU stCtrlInfo;
    SOCP_CODER_DST_ENUM_U32 enChanID = SOCP_CODER_DST_OM_CNF;
    VOS_UINT8 aucData[USB_MAX_DATA_LEN + 1] = {0};
    VOS_UINT32 ulDataLen = USB_MAX_DATA_LEN + 1;

    return GU_OamSndPcMsgToCcpu(&stCtrlInfo, aucData, ulDataLen);
}

/*******************************************************************
*������: GU_OamSndPcMsgToCcpu
*���⺯����������:C�˸�λдICCʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_GU_OamSndPcMsgToCcpu_case3(VOS_VOID)
{
    OMRL_RCV_CHAN_CTRL_INFO_STRU stCtrlInfo;
    SOCP_CODER_DST_ENUM_U32 enChanID = SOCP_CODER_DST_OM_CNF;
    VOS_UINT8 aucData[USB_MAX_DATA_LEN + 1] = {0};
    VOS_UINT32 ulDataLen = USB_MAX_DATA_LEN + 1;

    return GU_OamSndPcMsgToCcpu(&stCtrlInfo, aucData, ulDataLen);
}

/*******************************************************************
*������: GU_OamErrLogVComPortInit
*���⺯����������:ErrLog Vcom ��ͨ���ĳ�ʼ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_GU_OamErrLogVComPortInit_case1(VOS_VOID)
{
    GU_OamErrLogVComPortInit();
}

/*******************************************************************
*������: GU_OamAcpu_ICCError_CB
*���⺯����������:OM ICCͨ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT uttest_GU_OamAcpu_ICCError_CB_case1(VOS_VOID)
{
    VOS_UINT ulChanID;
    VOS_UINT ulEvent = 0;
    VOS_VOID* pParam = VOS_NULL_PTR;

    ulChanID = UDI_ICC_GUOM0;

    return GU_OamAcpu_ICCError_CB(ulChanID, ulEvent, pParam);
}

/*******************************************************************
*������: GU_OamAcpu_ICCError_CB
*���⺯����������:OSA MSG ICCͨ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT uttest_GU_OamAcpu_ICCError_CB_case2(VOS_VOID)
{
    VOS_UINT ulChanID;
    VOS_UINT ulEvent = 0;
    VOS_VOID* pParam = VOS_NULL_PTR;

    ulChanID = UDI_ICC_GUOM4;

    return GU_OamAcpu_ICCError_CB(ulChanID, ulEvent, pParam);
}

/*******************************************************************
*������: GU_OamAcpu_ICCError_CB
*���⺯����������:ͨ������
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT uttest_GU_OamAcpu_ICCError_CB_case3(VOS_VOID)
{
    VOS_UINT ulChanID;
    VOS_UINT ulEvent = 0;
    VOS_VOID* pParam = VOS_NULL_PTR;

    ulChanID = UDI_ICC_GUOM2;

    return GU_OamAcpu_ICCError_CB(ulChanID, ulEvent, pParam);
}

/*******************************************************************
*������: OM_ComRx_ICC_Init
*���⺯����������:�����ڴ�ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_ComRx_ICC_Init_case1(VOS_VOID)
{
    return OM_ComRx_ICC_Init();
}

/*******************************************************************
*������: OM_ComRx_ICC_Init
*���⺯����������:�򿪶˿�ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_ComRx_ICC_Init_case2(VOS_VOID)
{
    return OM_ComRx_ICC_Init();
}

/*******************************************************************
*������: OM_ComRx_ICC_Init
*���⺯����������:�򿪶˿�ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_OM_ComRx_ICC_Init_case3(VOS_VOID)
{
    return OM_ComRx_ICC_Init();
}

/*******************************************************************
*������: GU_OmAcpuSwitchOnOff
*���⺯����������:��ȡulOMSwitchOnOff���
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_UINT32 uttest_GU_OmAcpuSwitchOnOff_GetFlag(VOS_VOID)
{
    return g_stAcpuCnfCtrlInfo.ulOMSwitchOnOff;
}

/*******************************************************************
*������: GU_OmAcpuSwitchOnOff
*���⺯����������:����ulOMSwitchOnOff���
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_GU_OmAcpuSwitchOnOff_case1(VOS_VOID)
{
    VOS_UINT32 ulFlag;

    ulFlag = OM_STATE_IDLE;

    g_stAcpuCnfCtrlInfo.ulOMSwitchOnOff = OM_STATE_ACTIVE;

    GU_OmAcpuSwitchOnOff(ulFlag);
}

/*******************************************************************
*������: OM_AcpuLogShowToFile
*���⺯����������:���ļ�ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_AcpuLogShowToFile_case1(VOS_VOID)
{
    VOS_BOOL bIsSendMsg = VOS_FALSE;

    OM_AcpuLogShowToFile(bIsSendMsg);
}

/*******************************************************************
*������: OM_AcpuLogShowToFile
*���⺯����������:��������Ϣ��ACPU
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_AcpuLogShowToFile_case2(VOS_VOID)
{
    VOS_BOOL bIsSendMsg = VOS_FALSE;

    OM_AcpuLogShowToFile(bIsSendMsg);
}

/*******************************************************************
*������: OM_AcpuLogShowToFile
*���⺯����������:������Ϣ�ڴ�ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_AcpuLogShowToFile_case3(VOS_VOID)
{
    VOS_BOOL bIsSendMsg = VOS_TRUE;

    OM_AcpuLogShowToFile(bIsSendMsg);
}

/*******************************************************************
*������: OM_AcpuLogShowToFile
*���⺯����������:������Ϣ�ڴ�ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_AcpuLogShowToFile_case4(VOS_VOID)
{
    VOS_BOOL bIsSendMsg = VOS_TRUE;

    OM_AcpuLogShowToFile(bIsSendMsg);
}

/*******************************************************************
*������: OmAcpuPortInfoShow
*���⺯����������:�˿���Ϣ��ά�ɲ��ӡ
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OmAcpuPortInfoShow_case1(VOS_VOID)
{
    OM_PROT_HANDLE_ENUM_UINT32  enHandle = OM_USB_IND_PORT_HANDLE;

    OmAcpuPortInfoShow(enHandle);
}