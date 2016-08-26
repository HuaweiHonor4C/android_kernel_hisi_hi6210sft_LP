/* ͷ�ļ����� */

#include "cpm.h"
#include "NVIM_Interface.h"
#include "OmHsicPpm.h"
#include "SCMSoftDecode.h"
#include "OmVcomPpm.h"
#include "SCMSoftDecode.h"

extern CPM_LOGIC_PORT_CFG_STRU                 g_astCPMLogicPortCfg[CPM_COMM_BUTT];
extern CPM_PHY_PORT_CFG_STRU                   g_astCPMPhyPortCfg[CPM_PORT_BUTT - CPM_IND_PORT];
/*******************************************************************
*������:           CPM_PhySendReg
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_VOID uttest_CPM_PhySendReg_case1(VOS_VOID)
{
    CPM_PhySendReg(CPM_PORT_BUTT, PPM_HsicIndSendData);

    return;
}

/*******************************************************************
*������:           CPM_PhySendReg
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_VOID uttest_CPM_PhySendReg_case2(VOS_VOID)
{
    CPM_PhySendReg(CPM_HSIC_IND_PORT, PPM_HsicIndSendData);

    return;
}

/*******************************************************************
*������:           CPM_LogicRcvReg
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_VOID uttest_CPM_LogicRcvReg_case1(VOS_VOID)
{
    CPM_LogicRcvReg(CPM_COMM_BUTT, SCM_SoftDecodeCfgDataRcv);

    return;
}

/*******************************************************************
*������:           CPM_LogicRcvReg
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_VOID uttest_CPM_LogicRcvReg_case2(VOS_VOID)
{
    CPM_LogicRcvReg(CPM_OM_CFG_COMM, SCM_SoftDecodeCfgDataRcv);

    return;
}

/*******************************************************************
*������:           CPM_ConnectPorts
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_VOID uttest_CPM_ConnectPorts_case1(VOS_VOID)
{
    CPM_ConnectPorts(CPM_PORT_BUTT, CPM_AT_COMM);

    return;
}

/*******************************************************************
*������:           CPM_ConnectPorts
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_VOID uttest_CPM_ConnectPorts_case2(VOS_VOID)
{
    CPM_ConnectPorts(CPM_IND_PORT, CPM_COMM_BUTT);

    return;
}

/*******************************************************************
*������:           CPM_ConnectPorts
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_VOID uttest_CPM_ConnectPorts_case3(VOS_VOID)
{
    CPM_ConnectPorts(CPM_VCOM_CFG_PORT, CPM_OM_CFG_COMM);

    return;
}

/*******************************************************************
*������:           CPM_DisconnectPorts
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_VOID uttest_CPM_DisconnectPorts_case1(VOS_VOID)
{
    CPM_DisconnectPorts(CPM_PORT_BUTT, CPM_AT_COMM);

    return;
}

/*******************************************************************
*������:           CPM_DisconnectPorts
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_VOID uttest_CPM_DisconnectPorts_case2(VOS_VOID)
{
    CPM_DisconnectPorts(CPM_IND_PORT, CPM_COMM_BUTT);

    return;
}

/*******************************************************************
*������:           CPM_DisconnectPorts
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_VOID uttest_CPM_DisconnectPorts_case3(VOS_VOID)
{
    CPM_LOGIC_PHY_PORT(CPM_OM_IND_COMM) = CPM_SD_PORT;

    CPM_DisconnectPorts(CPM_CFG_PORT, CPM_OM_IND_COMM);

    return;
}

/*******************************************************************
*������:           CPM_DisconnectPorts
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_VOID uttest_CPM_DisconnectPorts_case4(VOS_VOID)
{
    CPM_LOGIC_PHY_PORT(CPM_OM_IND_COMM) = CPM_IND_PORT;

    CPM_DisconnectPorts(CPM_IND_PORT, CPM_OM_IND_COMM);

    return;
}

/*******************************************************************
*������:           CPM_ComSend
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_UINT32 uttest_CPM_ComSend_case1(VOS_VOID)
{
    VOS_UINT8 aucBuffer[10];

    return CPM_ComSend(CPM_PORT_BUTT, aucBuffer, VOS_NULL_PTR, 10);
}

/*******************************************************************
*������:           CPM_ComSend
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_UINT32 uttest_CPM_ComSend_case2(VOS_VOID)
{
    VOS_UINT8 aucBuffer[10];

    return CPM_ComSend(CPM_PORT_BUTT, VOS_NULL_PTR, VOS_NULL_PTR, 10);
}

/*******************************************************************
*������:           CPM_ComSend
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_UINT32 uttest_CPM_ComSend_case3(VOS_VOID)
{
    VOS_UINT8 aucBuffer[10];

    return CPM_ComSend(CPM_PORT_BUTT, aucBuffer, VOS_NULL_PTR, 0);
}

/*******************************************************************
*������:           CPM_ComSend
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_UINT32 uttest_CPM_ComSend_case4(VOS_VOID)
{
    VOS_UINT8 aucBuffer[10];

    CPM_LOGIC_SEND_FUNC(CPM_DIAG_COMM) = VOS_NULL_PTR;

    return CPM_ComSend(CPM_DIAG_COMM, aucBuffer, VOS_NULL_PTR, 10);
}

/*******************************************************************
*������:           CPM_ComSend
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_UINT32 uttest_CPM_ComSend_case5(VOS_VOID)
{
    VOS_UINT8 aucBuffer[10];

    CPM_LOGIC_SEND_FUNC(CPM_OM_IND_COMM) = (CPM_SEND_FUNC)PPM_VComCfgSendData;

    return CPM_ComSend(CPM_OM_IND_COMM, aucBuffer, VOS_NULL_PTR, 10);
}

/*******************************************************************
*������:           CPM_ComSend
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_UINT32 uttest_CPM_ComSend_case6(VOS_VOID)
{
    VOS_UINT8 aucBuffer[10];

    CPM_LOGIC_SEND_FUNC(CPM_OM_IND_COMM) = (CPM_SEND_FUNC)PPM_VComCfgSendData;

    return CPM_ComSend(CPM_OM_IND_COMM, aucBuffer, VOS_NULL_PTR, 10);
}

/*******************************************************************
*������:           CPM_ComRcv
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_UINT32 uttest_CPM_ComRcv_case1(VOS_VOID)
{
    VOS_UINT8 aucBuffer[10];

    return CPM_ComRcv(CPM_PORT_BUTT, aucBuffer, 10);
}

/*******************************************************************
*������:           CPM_ComRcv
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_UINT32 uttest_CPM_ComRcv_case2(VOS_VOID)
{
    VOS_UINT8 aucBuffer[10];

    return CPM_ComRcv(CPM_IND_PORT, VOS_NULL_PTR, 10);
}

/*******************************************************************
*������:           CPM_ComRcv
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_UINT32 uttest_CPM_ComRcv_case3(VOS_VOID)
{
    VOS_UINT8 aucBuffer[10];

    CPM_PHY_RCV_FUNC(CPM_IND_PORT - AT_PORT_BUTT) = VOS_NULL_PTR;

    return CPM_ComRcv(CPM_IND_PORT, aucBuffer, 10);
}

/*******************************************************************
*������:           CPM_ComRcv
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_UINT32 uttest_CPM_ComRcv_case4(VOS_VOID)
{
    VOS_UINT8 aucBuffer[10];

    CPM_PHY_RCV_FUNC(CPM_IND_PORT - AT_PORT_BUTT) = SCM_SoftDecodeCfgDataRcv;

    return CPM_ComRcv(CPM_IND_PORT, aucBuffer, 10);
}

/*******************************************************************
*������:           CPM_Show
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_UINT32 uttest_CPM_Show_case1(VOS_VOID)
{
    CPM_Show();

    return;
}

/*******************************************************************
*������:           CPM_PortAssociateInit
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/

VOS_UINT32 uttest_CPM_PortAssociateInit_case1(VOS_VOID)
{
    return CPM_PortAssociateInit();
}