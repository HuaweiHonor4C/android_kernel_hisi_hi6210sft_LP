/* ͷ�ļ����� */
#include "Omappagent.h"

extern VOS_VOID   OM_AcpuAgentMsgProc(MsgBlock* pMsg);

extern MsgBlock *g_pstOmAcpuCnfMsg;

/*******************************************************************
*������: OM_AcpuAgentMsgProc
*���⺯����������:g_pstOmAcpuCnfMsgΪ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_AcpuAgentMsgProc_case1(VOS_VOID)
{
    OM_AUTOCONFIG_CNF_STRU stMsg;

    stMsg.usPrimId = OM_AUTOCONFIG_CNF;

    g_pstOmAcpuCnfMsg = VOS_NULL_PTR;

    OM_AcpuAgentMsgProc((MsgBlock*)&stMsg);
}

/*******************************************************************
*������: OM_AcpuAgentMsgProc
*���⺯����������:g_pstOmAcpuCnfMsg��Ϊ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_AcpuAgentMsgProc_case2(VOS_VOID)
{
    OM_WRITELOG_REQ_STRU stMsg;

    stMsg.usPrimId = OM_WRITE_LOG_REQ;

    g_pstOmAcpuCnfMsg = (MsgBlock *)malloc(sizeof(MsgBlock));

    OM_AcpuAgentMsgProc((MsgBlock*)&stMsg);
}

/*******************************************************************
*������: OM_AcpuAgentMsgProc
*���⺯����������:����OM_OLED_CLEAR_REQ��Ϣ
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_AcpuAgentMsgProc_case3(VOS_VOID)
{
    OM_OLED_CLEAR_REQ_STRU stMsg;

    stMsg.usPrimId = OM_OLED_CLEAR_REQ;

    OM_AcpuAgentMsgProc((MsgBlock*)&stMsg);
}

/*******************************************************************
*������: OM_AcpuAgentMsgProc
*���⺯����������:����OM_OLED_DISPLAY_REQ��Ϣ
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_AcpuAgentMsgProc_case4(VOS_VOID)
{
    OM_OLED_DISPLAY_REQ_STRU stMsg;

    stMsg.usPrimId = OM_OLED_DISPLAY_REQ;

    OM_AcpuAgentMsgProc((MsgBlock*)&stMsg);
}

/*******************************************************************
*������: OM_AcpuAgentMsgProc
*���⺯����������:����OM_HSIC_CONNECT_REQ��Ϣ
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_AcpuAgentMsgProc_case5(VOS_VOID)
{
    OM_HSIC_CONNECT_REQ_STRU stMsg;

    stMsg.usPrimId = OM_HSIC_CONNECT_REQ;

    OM_AcpuAgentMsgProc((MsgBlock*)&stMsg);
}

/*******************************************************************
*������: OM_AcpuAgentMsgProc
*���⺯����������:����OM_CBT_SEND_DATA_REQ��Ϣ
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_AcpuAgentMsgProc_case6(VOS_VOID)
{
    OM_CBT_MSG_STRU stMsg;

    stMsg.usPrimId = OM_CBT_SEND_DATA_REQ;

    OM_AcpuAgentMsgProc((MsgBlock*)&stMsg);
}

/*******************************************************************
*������: OM_AcpuAgentMsgProc
*���⺯����������:����OM_RECORD_DBU_INFO_REQ��Ϣ
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_AcpuAgentMsgProc_case7(VOS_VOID)
{
    OM_AUTOCONFIG_CNF_STRU stMsg;

    stMsg.usPrimId = OM_RECORD_DBU_INFO_REQ;

    OM_AcpuAgentMsgProc(&stMsg);
}

/*******************************************************************
*������: OM_AcpuAgentMsgProc
*���⺯����������:����OM_CONNECT_INFO_CNF��Ϣ
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
VOS_VOID uttest_OM_AcpuAgentMsgProc_case8(VOS_VOID)
{
    OM_CONNECT_INFO_CNF_STRU stMsg;

    stMsg.usPrimId = OM_CONNECT_INFO_CNF;

    OM_AcpuAgentMsgProc((MsgBlock*)&stMsg);
}