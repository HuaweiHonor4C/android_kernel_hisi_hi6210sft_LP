#include "gtest/gtest.h"
#include "llt_mockcpp.h"

#include <stdio.h>
#include <stdlib.h>

//�����������ã����������ùؼ���ʱ��Ҫ��ǰ׺ testing::
using namespace testing;

#ifdef __cplusplus
extern "C"
{
#endif
extern void * V_AllocMsg(void);
extern unsigned int V_SendMsg(void);
extern unsigned int CPM_QueryPhyPort(unsigned int enLogicPort);
extern unsigned int PPM_DisconnectGUPort(unsigned int enChannel);
extern unsigned int PPM_DisconnectTLPort(void);
extern void PPM_DisconnectAllPort(unsigned int enChannel);
extern unsigned int OM_GetSlice(void);
extern void BSP_SOCP_SetLogIntTimeOut(void);
extern void BSP_SOCP_SetLogIntTimeOutDefautl(void);
extern int udi_close(unsigned int handle);
extern int udi_ioctl(unsigned int handle, unsigned int u32Cmd, void* pParam);
extern int udi_open(void *pParam);
extern unsigned int CPM_ComRcv(unsigned int enPhyPort, char *pucData, unsigned int ulLen);
extern unsigned int VOS_SmP(unsigned int Sm_ID, unsigned int  ulTimeOutInMillSec);
extern unsigned int VOS_SmV(unsigned int Sm_ID);
extern unsigned long _raw_spin_lock_irqsave(void *lock);
extern void _raw_spin_unlock_irqrestore(void *lock, unsigned long flags);
extern void CPM_ConnectPorts(unsigned int enPhyPort, unsigned int enLogicPort);
extern void CPM_DisconnectPorts(unsigned int enPhyPort, unsigned int enLogicPort);
extern unsigned int NV_WriteEx(unsigned short enModemID,unsigned short usID,void *pItem,unsigned int ulLength);
extern unsigned int PPM_UdiRegCallBackFun(unsigned int enHandle, unsigned int ulCmdType, void* pFunc);
extern void PPM_PortPseudoSyncGetSmp(unsigned int enHandle);
extern unsigned int OM_AcpuGetLogPath(char *pucBuf, char *pucOldPath, char *pucUnitaryPath);
extern unsigned int OM_Acpu_WriteLogFile(char * cFileName, void *pRecord, unsigned int ulLen);
extern void BSP_MNTN_SystemError(int modId, int arg1, int arg2, char * arg3, int arg3Length);
extern unsigned int PPM_LogFileInit(void);
extern unsigned int PPM_PortInit(void);
extern unsigned int PPM_SockPortInit(void);
extern unsigned int PPM_UsbPortInit(void);
extern void PPM_HsicPortInit(void);
extern void PPM_VComPortInit(void);
extern unsigned int uttest_PPM_DisconnectGUPort_case1(void);
extern unsigned int uttest_PPM_DisconnectGUPort_case2(void);
extern unsigned int uttest_PPM_DisconnectTLPort_case1(void);
extern unsigned int uttest_PPM_DisconnectTLPort_case2(void);
extern void uttest_PPM_DisconnectAllPort_case1(void);
extern void uttest_PPM_GetSendDataLen_case1(void);
extern void uttest_PPM_GetSendDataLen_case2(void);
extern void uttest_PPM_PortStatus_case1(void);
extern void uttest_PPM_PortStatus_case2(void);
extern void uttest_PPM_PortStatus_case3(void);
extern void uttest_PPM_PortStatus_case4(void);
extern void uttest_PPM_PortStatus_case5(void);
extern void uttest_PPM_PortCloseProc_case1(void);
extern void uttest_PPM_PortCloseProc_case2(void);
extern void uttest_PPM_PortCloseProc_case3(void);
extern void uttest_PPM_PortCloseProc_case4(void);
extern int uttest_PPM_ReadPortData_case1(void);
extern int uttest_PPM_ReadPortData_case2(void);
extern int uttest_PPM_ReadPortData_case3(void);
extern void uttest_PPM_PortPseudoSyncGetSmp_case1(void);
extern void uttest_PPM_PortPseudoSyncGetSmp_case2(void);
extern void uttest_PPM_PortPseudoSyncGetSmp_case3(void);
extern unsigned int uttest_PPM_QueryLogPort_case1(void);
extern unsigned int uttest_PPM_QueryLogPort_case2(void);
extern unsigned int uttest_PPM_QueryLogPort_case3(void);
extern unsigned int uttest_PPM_LogPortSwitch_case1(void);
extern unsigned int uttest_PPM_LogPortSwitch_case2(void);
extern unsigned int uttest_PPM_LogPortSwitch_case3(void);
extern unsigned int uttest_PPM_LogPortSwitch_case4(void);
extern unsigned int uttest_PPM_UdiRegCallBackFun_case1(void);
extern unsigned int uttest_PPM_UdiRegCallBackFun_case2(void);
extern unsigned int uttest_PPM_UdiRegCallBackFun_case3(void);
extern void uttest_PPM_ReadPortDataInit_case1(void);
extern void uttest_PPM_ReadPortDataInit_case2(void);
extern void uttest_PPM_ReadPortDataInit_case3(void);
extern void uttest_PPM_ReadPortDataInit_case4(void);
extern void uttest_PPM_ReadPortDataInit_case5(void);
extern void uttest_PPM_ReadPortDataInit_case6(void);
extern void uttest_PPM_ReadPortDataInit_case7(void);
extern void uttest_PPM_ReadPortDataInit_case8(void);
extern void uttest_PPM_ReadPortDataInit_case9(void);
extern void uttest_PPM_ReadPortDataInit_case10(void);
extern unsigned int uttest_PPM_PortSend_case1(void);
extern unsigned int uttest_PPM_PortSend_case2(void);
extern unsigned int uttest_PPM_PortSend_case3(void);
extern unsigned int uttest_PPM_PortSend_case4(void);
extern unsigned int uttest_PPM_PortSend_case5(void);
extern unsigned int uttest_PPM_PortSend_case6(void);
extern void uttest_PPM_PortWriteAsyCB_case1(void);
extern void uttest_PPM_PortWriteAsyCB_case2(void);
extern void uttest_PPM_PortWriteAsyCB_case3(void);
extern unsigned int uttest_PPM_InitPhyPort_case1(void);
extern unsigned int uttest_PPM_InitPhyPort_case2(void);
extern unsigned int uttest_PPM_InitPhyPort_case3(void);
extern unsigned int uttest_PPM_PortInit_case1(void);
extern unsigned int uttest_PPM_OmPortInfoShow_case1(void);
extern void uttest_PPM_PortSwitchInfoShow_case1(void);
#ifdef __cplusplus
}
#endif

#ifndef VOS_OK
#define VOS_OK                          0
#endif

#ifndef VOS_ERR
#define VOS_ERR                         1
#endif


/*******************************************************************
*������: ��Ϣ����ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_DisconnectGUPort1, UT)
{
	MOCKER(V_AllocMsg)
		.stubs()
		.will(returnValue((void*)0));

	EXPECT_EQ(VOS_ERR, uttest_PPM_DisconnectGUPort_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ��Ϣ���ͳɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_DisconnectGUPort2, UT)
{
	char 			aucMem[60];

	MOCKER(V_AllocMsg)
		.stubs()
		.will(returnValue((void*)aucMem));

	MOCKER(V_SendMsg)
		.stubs()
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_PPM_DisconnectGUPort_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ��Ϣ����ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_DisconnectTLPort1, UT)
{
	MOCKER(V_AllocMsg)
		.stubs()
		.will(returnValue((void*)0));

	EXPECT_EQ(VOS_ERR, uttest_PPM_DisconnectTLPort_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ��Ϣ���ͳɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_DisconnectTLPort2, UT)
{
	char 			aucMem[60];

	MOCKER(V_AllocMsg)
		.stubs()
		.will(returnValue((void*)aucMem));

	MOCKER(V_SendMsg)
		.stubs()
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_PPM_DisconnectTLPort_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: �Ͽ���������
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_DisconnectAllPort1, UT)
{
	MOCKER(PPM_DisconnectTLPort)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(PPM_DisconnectGUPort)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	uttest_PPM_DisconnectAllPort_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: UDI�豸�����ݳ��ȴ���60K
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_GetSendDataLen1, UT)
{
	MOCKER(CPM_QueryPhyPort)
		.stubs()
		.will(returnValue((unsigned int)4/*CPM_IND_PORT*/));

	uttest_PPM_GetSendDataLen_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: VCOM�����ݳ���С��60K
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_GetSendDataLen2, UT)
{
	MOCKER(CPM_QueryPhyPort)
		.stubs()
		.will(returnValue((unsigned int)12/*CPM_VCOM_IND_PORT*/));

	uttest_PPM_GetSendDataLen_case2();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: UDI�豸USB CFG�˿ڶϿ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortStatus1, UT)
{
	MOCKER(CPM_QueryPhyPort)
		.stubs()
		.will(returnValue((unsigned int)5/*CPM_CFG_PORT*/));

	MOCKER(PPM_DisconnectAllPort)
		.expects(once());

    MOCKER(OM_GetSlice)
        .stubs()
        .will(returnValue((unsigned int)1));

	uttest_PPM_PortStatus_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: UDI�豸USB IND�˿ڶϿ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortStatus2, UT)
{
	MOCKER(CPM_QueryPhyPort)
		.stubs()
		.will(returnValue((unsigned int)4/*CPM_IND_PORT*/));

	MOCKER(PPM_DisconnectAllPort)
		.expects(once());

    MOCKER(OM_GetSlice)
        .stubs()
        .will(returnValue((unsigned int)1));

	uttest_PPM_PortStatus_case2();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ����UDI�豸�˿ڶϿ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortStatus3, UT)
{
	MOCKER(CPM_QueryPhyPort)
		.stubs()
		.will(returnValue((unsigned int)4/*CPM_IND_PORT*/));

	MOCKER(PPM_DisconnectAllPort)
		.expects(never());

    MOCKER(OM_GetSlice)
        .stubs()
        .will(returnValue((unsigned int)1));

	uttest_PPM_PortStatus_case3();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: �˿�״̬ΪREADY
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortStatus4, UT)
{
	MOCKER(CPM_QueryPhyPort)
		.expects(never());

	MOCKER(PPM_DisconnectAllPort)
		.expects(never());

	MOCKER(OM_GetSlice)
		.expects(once())
		.will(returnValue(1000));

	uttest_PPM_PortStatus_case4();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: �����˿�״̬
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortStatus5, UT)
{
	MOCKER(CPM_QueryPhyPort)
		.expects(never());

	MOCKER(PPM_DisconnectAllPort)
		.expects(never());

	MOCKER(OM_GetSlice)
		.expects(once())
		.will(returnValue(1000));

	uttest_PPM_PortStatus_case5();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: UDI�豸�������
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortCloseProc1, UT)
{
	MOCKER(CPM_QueryPhyPort)
		.expects(never());

	MOCKER(PPM_DisconnectAllPort)
		.expects(never());

    MOCKER(OM_GetSlice)
        .stubs()
        .will(returnValue((unsigned int)1));

	uttest_PPM_PortCloseProc_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: UDI�豸USB CFG�˿ڶϿ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortCloseProc2, UT)
{
	MOCKER(CPM_QueryPhyPort)
		.stubs()
		.will(returnValue((unsigned int)5/*CPM_CFG_PORT*/));

	MOCKER(PPM_DisconnectAllPort)
		.expects(once());

	MOCKER(udi_close)
		.expects(once())
		.will(returnValue(VOS_OK));

	MOCKER(OM_GetSlice)
		.expects(atLeast(2))
		.will(returnValue((unsigned int)1000));
#if 0
	MOCKER(_raw_spin_lock_irqsave)
		.stubs()
		.will(returnValue(0));

	MOCKER(_raw_spin_unlock_irqrestore)
		.stubs()
		.will(returnValue(0));
#endif
	uttest_PPM_PortCloseProc_case2();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: UDI�豸USB IND�˿ڶϿ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortCloseProc3, UT)
{
	MOCKER(CPM_QueryPhyPort)
		.stubs()
		.will(returnValue((unsigned int)4/*CPM_IND_PORT*/));

	MOCKER(PPM_DisconnectAllPort)
		.expects(once());

	MOCKER(udi_close)
		.expects(once())
		.will(returnValue(VOS_OK));

	MOCKER(OM_GetSlice)
		.expects(atLeast(2))
		.will(returnValue((unsigned int)1000));

	uttest_PPM_PortCloseProc_case3();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: UDI�豸�����˿ڶϿ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortCloseProc4, UT)
{
	MOCKER(CPM_QueryPhyPort)
		//.stubs()
		.expects(never())
		.will(returnValue((unsigned int)4/*CPM_IND_PORT*/));

	MOCKER(PPM_DisconnectAllPort)
		.expects(never());

	MOCKER(udi_close)
		.expects(once())
		.will(returnValue(VOS_OK));

	MOCKER(OM_GetSlice)
		.expects(atLeast(2))
		.will(returnValue((unsigned int)1000));

	uttest_PPM_PortCloseProc_case4();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: UDI�豸�������
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_ReadPortData1, UT)
{
	EXPECT_EQ(VOS_ERR, uttest_PPM_ReadPortData_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ��ȡUSB��IO CTRL�ڵĶ�����ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_ReadPortData2, UT)
{
	MOCKER(udi_ioctl)
		.stubs()
		.will(returnValue((int)VOS_ERR));

	EXPECT_EQ(VOS_ERR, uttest_PPM_ReadPortData_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: USB��IO CTRL�ڵĻ����ͷ�ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_ReadPortData3, UT)
{
	MOCKER(udi_ioctl)
		.expects(exactly(2))
		.will(returnObjectList((int)0, (int)1));

	MOCKER(CPM_ComRcv)
		.stubs()
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_PPM_ReadPortData_case3());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: USB IND�˿ڵ�αͬ���ź����ͷ�ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortPseudoSyncGetSmp1, UT)
{
	MOCKER(VOS_SmP)
		.stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	MOCKER(OM_GetSlice)
		.expects(once())
		.will(returnValue(1000));

	uttest_PPM_PortPseudoSyncGetSmp_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: USB CFG�˿ڵ�αͬ���ź����ͷ�ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortPseudoSyncGetSmp2, UT)
{
	MOCKER(VOS_SmP)
		.stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	MOCKER(OM_GetSlice)
		.expects(once())
		.will(returnValue((unsigned int)1000));

	uttest_PPM_PortPseudoSyncGetSmp_case2();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: �����˿ڵĴ���
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortPseudoSyncGetSmp3, UT)
{
	MOCKER(VOS_SmP)
		.expects(never())
		.will(returnValue((unsigned int)VOS_ERR));

	MOCKER(OM_GetSlice)
		.expects(never())
		.will(returnValue((unsigned int)1000));

	uttest_PPM_PortPseudoSyncGetSmp_case3();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: �����ָ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_QueryLogPort1, UT)
{
	EXPECT_EQ(VOS_ERR, uttest_PPM_QueryLogPort_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ��ǰ�˿����Ͳ���VCOMҲ����USB
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_QueryLogPort2, UT)
{
	EXPECT_EQ(VOS_ERR, uttest_PPM_QueryLogPort_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ��ǰ�˿�������VCOM
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_QueryLogPort3, UT)
{
	EXPECT_EQ(VOS_OK, uttest_PPM_QueryLogPort_case3());

	GlobalMockObject::reset();
}


/*******************************************************************
*������: �л��Ķ˿����Ͳ���ȷ
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_LogPortSwitch1, UT)
{
	EXPECT_EQ(VOS_ERR, uttest_PPM_LogPortSwitch_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: �л��Ķ˿��뵱ǰ�˿�һ�²��л�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_LogPortSwitch2, UT)
{
	MOCKER(mdrv_socp_set_log_int_timeout)
		.expects(exactly(1));

	EXPECT_EQ(VOS_OK, uttest_PPM_LogPortSwitch_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ��ǰ��USB����л���VCOM���
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_LogPortSwitch3, UT)
{
	MOCKER(CPM_QueryPhyPort)
		.expects(exactly(2))
		.will(returnObjectList((unsigned int)5, (unsigned int)4));

	MOCKER(CPM_DisconnectPorts)
		.expects(exactly(2));

	MOCKER(CPM_ConnectPorts)
		.expects(exactly(2));

	MOCKER(PPM_DisconnectAllPort)
		.expects(exactly(2));

	MOCKER(BSP_SOCP_SetLogIntTimeOut)
		.expects(exactly(1));

	MOCKER(OM_GetSlice)
		.expects(exactly(2))
		.will(returnValue((unsigned int)1000));

	EXPECT_EQ(VOS_OK, uttest_PPM_LogPortSwitch_case3());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ��ǰ��VCOM����л���USB���
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_LogPortSwitch4, UT)
{
	MOCKER(CPM_QueryPhyPort)
		.expects(exactly(2))
		.will(returnObjectList((unsigned int)13, (unsigned int)12));

	MOCKER(CPM_DisconnectPorts)
		.expects(exactly(2));

	MOCKER(CPM_ConnectPorts)
		.expects(exactly(2));

	MOCKER(PPM_DisconnectAllPort)
		.expects(exactly(2));

	MOCKER(BSP_SOCP_SetLogIntTimeOutDefautl)
		.expects(exactly(1));

	MOCKER(OM_GetSlice)
		.expects(exactly(2))
		.will(returnValue((unsigned int)1000));

	MOCKER(NV_WriteEx)
		.stubs()
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_PPM_LogPortSwitch_case4());

	GlobalMockObject::reset();
}

#if 0 /*��������ܲ���ȥ*/
/*******************************************************************
*������: ��ǰ��WIFI������������л�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_LogPortSwitch5, UT)
{
	MOCKER(CPM_QueryPhyPort)
		.expects(exactly(2))
		.will(returnObjectList((unsigned int)13, (unsigned int)12));

	MOCKER(CPM_DisconnectPorts)
		.expects(exactly(2));

	MOCKER(CPM_ConnectPorts)
		.expects(exactly(2));

	MOCKER(PPM_DisconnectAllPort)
		.expects(exactly(2));

	MOCKER(OM_GetSlice)
		.expects(exactly(2))
		.will(returnValue((unsigned int)1000));

	MOCKER(NV_WriteEx)
		.stubs()
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_PPM_LogPortSwitch_case5());

	GlobalMockObject::reset();
}
#endif

/*******************************************************************
*������: ����ĺ���ָ��Ϊ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_UdiRegCallBackFun1, UT)
{
	EXPECT_EQ(VOS_OK, uttest_PPM_UdiRegCallBackFun_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ����UDI�豸ע�ắ������ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_UdiRegCallBackFun2, UT)
{
	MOCKER(udi_ioctl)
		.expects(once())
		.will(returnValue(VOS_ERR));

	EXPECT_EQ(VOS_ERR, uttest_PPM_UdiRegCallBackFun_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ����UDI�豸ע�ắ�����سɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_UdiRegCallBackFun3, UT)
{
	MOCKER(udi_ioctl)
		.expects(once())
		.will(returnValue(VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_PPM_UdiRegCallBackFun_case3());

	GlobalMockObject::reset();
}


/*******************************************************************
*������: ���������͵�UDI�豸
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_ReadPortDataInit1, UT)
{
	MOCKER(udi_open)
		.expects(never())
		.will(returnValue(VOS_OK));

	uttest_PPM_ReadPortDataInit_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ��USB IND���͵�UDI�豸���豸�Ѿ���
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_ReadPortDataInit2, UT)
{
	MOCKER(udi_open)
		.expects(never())
		.will(returnValue(VOS_OK));

	MOCKER(OM_GetSlice)
		.expects(exactly(1))
		.will(returnValue((unsigned int)1000));

	uttest_PPM_ReadPortDataInit_case2();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ��USB CFG���͵�UDI�豸���豸��ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_ReadPortDataInit3, UT)
{
	MOCKER(udi_open)
		.expects(once())
		.will(returnValue((int)-1));

	MOCKER(OM_GetSlice)
		.expects(once())
		.will(returnValue((unsigned int)1000));

	uttest_PPM_ReadPortDataInit_case3();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ��HSIC IND���͵�UDI�豸������OMʹ�õ�USBͨ������ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_ReadPortDataInit4, UT)
{
	MOCKER(udi_open)
		.expects(once())
		.will(returnValue((int)2));

	MOCKER(udi_ioctl)
		.expects(once())
		.will(returnValue((int)VOS_ERR));

	MOCKER(OM_GetSlice)
		.expects(exactly(2))
		.will(returnValue((unsigned int)1000));

	uttest_PPM_ReadPortDataInit_case4();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ��HSIC CFG���͵�UDI�豸����ȡUSB��IO CTRL�ڵĶ�����ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_ReadPortDataInit5, UT)
{
	MOCKER(udi_open)
		.expects(once())
		.will(returnValue((int)2));

	MOCKER(udi_ioctl)
		.expects(exactly(2))
		.will(returnObjectList((int)VOS_OK, (int)VOS_ERR));

	MOCKER(OM_GetSlice)
		.expects(exactly(2))
		.will(returnValue((unsigned int)1000));

	uttest_PPM_ReadPortDataInit_case5();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ��HSIC CFG���͵�UDI�豸��ע��OMʹ�õĶ����ݻص�����ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_ReadPortDataInit6, UT)
{
	MOCKER(udi_open)
		.expects(once())
		.will(returnValue((int)2));

	MOCKER(udi_ioctl)
		.expects(exactly(2))
		.will(returnObjectList((int)VOS_OK, (int)VOS_OK));

	MOCKER(OM_GetSlice)
		.expects(exactly(2))
		.will(returnValue((unsigned int)1000));

	MOCKER(PPM_UdiRegCallBackFun)
		.expects(exactly(1))
		.will(returnValue((unsigned int)VOS_ERR));

	uttest_PPM_ReadPortDataInit_case6();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ��HSIC CFG���͵�UDI�豸��ע��OMʹ�õ�д���ݻص�����ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_ReadPortDataInit7, UT)
{
	MOCKER(udi_open)
		.expects(once())
		.will(returnValue((int)2));

	MOCKER(udi_ioctl)
		.expects(exactly(2))
		.will(returnObjectList((int)VOS_OK, (int)VOS_OK));

	MOCKER(OM_GetSlice)
		.expects(exactly(2))
		.will(returnValue((unsigned int)1000));

	MOCKER(PPM_UdiRegCallBackFun)
		.expects(exactly(2))
		.will(returnObjectList((unsigned int)VOS_OK, (unsigned int)VOS_ERR));

	uttest_PPM_ReadPortDataInit_case7();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ��HSIC CFG���͵�UDI�豸��ע��OMʹ�õ�״̬�ص�����ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_ReadPortDataInit8, UT)
{
	MOCKER(udi_open)
		.expects(once())
		.will(returnValue((int)2));

	MOCKER(udi_ioctl)
		.expects(exactly(2))
		.will(returnObjectList((int)VOS_OK, (int)VOS_OK));

	MOCKER(OM_GetSlice)
		.expects(exactly(2))
		.will(returnValue((unsigned int)1000));

	MOCKER(PPM_UdiRegCallBackFun)
		.expects(exactly(3))
		.will(returnObjectList((unsigned int)VOS_OK, (unsigned int)VOS_OK, (unsigned int)VOS_ERR));

	uttest_PPM_ReadPortDataInit_case8();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ��HSIC CFG���͵�UDI�豸���豸UDI�豸���㿽��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_ReadPortDataInit9, UT)
{
	MOCKER(udi_open)
		.expects(once())
		.will(returnValue((int)2));

	MOCKER(udi_ioctl)
		.expects(exactly(3))
		.will(returnObjectList((int)VOS_OK, (int)VOS_OK, (int)VOS_ERR));

	MOCKER(OM_GetSlice)
		.expects(exactly(2))
		.will(returnValue((unsigned int)1000));

	MOCKER(PPM_UdiRegCallBackFun)
		.expects(exactly(3))
		.will(returnObjectList((unsigned int)VOS_OK, (unsigned int)VOS_OK, (unsigned int)VOS_OK));

	uttest_PPM_ReadPortDataInit_case9();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ��HSIC CFG���͵�UDI�豸���豸�򿪳ɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_ReadPortDataInit10, UT)
{
	MOCKER(udi_open)
		.expects(once())
		.will(returnValue((int)2));

	MOCKER(udi_ioctl)
		.expects(exactly(3))
		.will(returnObjectList((int)VOS_OK, (int)VOS_OK, (int)VOS_OK));

	MOCKER(OM_GetSlice)
		.expects(exactly(3))
		.will(returnValue((unsigned int)1000));

	MOCKER(PPM_UdiRegCallBackFun)
		.expects(exactly(3))
		.will(returnObjectList((unsigned int)VOS_OK, (unsigned int)VOS_OK, (unsigned int)VOS_OK));

	uttest_PPM_ReadPortDataInit_case10();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: UDI����������ʵ��ַΪ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortSend1, UT)
{
	EXPECT_EQ(2/*CPM_SEND_PARA_ERR*/, uttest_PPM_PortSend_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: UDI���Ϊ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortSend2, UT)
{
	EXPECT_EQ(3/*CPM_SEND_ERR*/, uttest_PPM_PortSend_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ���ݷ��ͳɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortSend3, UT)
{
	MOCKER(OM_GetSlice)
		.expects(exactly(2))
		.will(returnObjectList((unsigned int)1000, (unsigned int)2000));

	MOCKER(udi_ioctl)
		.expects(once())
		.will(returnValue((int)VOS_OK));

	MOCKER(PPM_PortPseudoSyncGetSmp)
		.expects(exactly(1));

	EXPECT_EQ(0/*CPM_SEND_OK*/, uttest_PPM_PortSend_case3());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ���ݷ���ʧ�ܣ���ȡ������Ϣ��·��ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortSend4, UT)
{
	MOCKER(OM_GetSlice)
		.expects(exactly(3))
		.will(returnObjectList((unsigned int)2000, (unsigned int)1000, (unsigned int)3000));

	MOCKER(udi_ioctl)
		.expects(once())
		.will(returnValue((int)(-1)));

	MOCKER(PPM_PortPseudoSyncGetSmp)
		.expects(never());

	MOCKER(OM_AcpuGetLogPath)
		.expects(once())
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(1/*CPM_SEND_FUNC_NULL*/, uttest_PPM_PortSend_case4());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ���ݷ���ʧ�ܣ���Ϣ���浽����
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortSend5, UT)
{
	MOCKER(OM_GetSlice)
		.expects(exactly(3))
		.will(returnObjectList((unsigned int)2000, (unsigned int)1000, (unsigned int)3000));

	MOCKER(udi_ioctl)
		.expects(once())
		.will(returnValue((int)(-1)));

	MOCKER(PPM_PortPseudoSyncGetSmp)
		.expects(never());

	MOCKER(OM_AcpuGetLogPath)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(OM_Acpu_WriteLogFile)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(1/*CPM_SEND_FUNC_NULL*/, uttest_PPM_PortSend_case5());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ���ݷ���ʧ�ܣ����帴λ
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortSend6, UT)
{
	MOCKER(OM_GetSlice)
		.expects(exactly(2))
		.will(returnObjectList((unsigned int)2000, (unsigned int)1000));

	MOCKER(udi_ioctl)
		.expects(once())
		.will(returnValue((int)(2)));

	MOCKER(PPM_PortPseudoSyncGetSmp)
		.expects(never());

	MOCKER(OM_AcpuGetLogPath)
		.expects(never())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(OM_Acpu_WriteLogFile)
		.expects(never())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(BSP_MNTN_SystemError)
		.expects(once());

	EXPECT_EQ(3/*CPM_SEND_ERR*/, uttest_PPM_PortSend_case6());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ���ݳ���С��0��USB IND�˿�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortWriteAsyCB1, UT)
{
	MOCKER(VOS_SmV)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	uttest_PPM_PortWriteAsyCB_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ���ݳ��ȴ���0��USB CFG�˿�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortWriteAsyCB2, UT)
{
	MOCKER(VOS_SmV)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	uttest_PPM_PortWriteAsyCB_case2();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC CFG�˿�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortWriteAsyCB3, UT)
{
	uttest_PPM_PortWriteAsyCB_case3();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: PPM_LogFileInit����ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_InitPhyPort1, UT)
{
	MOCKER(PPM_LogFileInit)
		.expects(once())
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR, uttest_PPM_InitPhyPort_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: PPM_PortInit����ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_InitPhyPort2, UT)
{
	MOCKER(PPM_LogFileInit)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(PPM_PortInit)
		.expects(once())
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR, uttest_PPM_InitPhyPort_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ���سɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_InitPhyPort3, UT)
{
	MOCKER(PPM_LogFileInit)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(PPM_PortInit)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_PPM_InitPhyPort_case3());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: PPM_PortInit���سɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortInit1, UT)
{
	MOCKER(PPM_UsbPortInit)
		.expects(once())
		.will(returnValue((unsigned int)VOS_ERR));

	MOCKER(PPM_HsicPortInit)
		.expects(once());

	MOCKER(PPM_VComPortInit)
		.expects(once());

	EXPECT_EQ(VOS_OK, uttest_PPM_PortInit_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: PPM_OmPortInfoShow���
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_OmPortInfoShow1, UT)
{
	uttest_PPM_OmPortInfoShow_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: PPM_PortSwitchInfoShow���
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_PortSwitchInfoShow1, UT)
{
	uttest_PPM_PortSwitchInfoShow_case1();

	GlobalMockObject::reset();
}


