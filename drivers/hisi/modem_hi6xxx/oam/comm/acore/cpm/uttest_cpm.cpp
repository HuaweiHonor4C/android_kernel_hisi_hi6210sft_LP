
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
extern unsigned int PPM_VComCfgSendData(unsigned char *pucVirAddr, unsigned char *pucPhyAddr, unsigned int ulDataLen);
extern unsigned int SCM_SoftDecodeCfgDataRcv(unsigned char *pucBuffer, unsigned int ulLen);
extern unsigned int BSP_CheckModuleSupport(unsigned int enModuleType);
extern void uttest_CPM_PhySendReg_case1(void);
extern void uttest_CPM_PhySendReg_case2(void);
extern void uttest_CPM_LogicRcvReg_case1(void);
extern void uttest_CPM_LogicRcvReg_case2(void);
extern void uttest_CPM_ConnectPorts_case1(void);
extern void uttest_CPM_ConnectPorts_case2(void);
extern void uttest_CPM_ConnectPorts_case3(void);
extern void uttest_CPM_DisconnectPorts_case1(void);
extern void uttest_CPM_DisconnectPorts_case2(void);
extern void uttest_CPM_DisconnectPorts_case3(void);
extern void uttest_CPM_DisconnectPorts_case4(void);
extern unsigned int uttest_CPM_ComSend_case1(void);
extern unsigned int uttest_CPM_ComSend_case2(void);
extern unsigned int uttest_CPM_ComSend_case3(void);
extern unsigned int uttest_CPM_ComSend_case4(void);
extern unsigned int uttest_CPM_ComSend_case5(void);
extern unsigned int uttest_CPM_ComSend_case6(void);
extern unsigned int uttest_CPM_ComRcv_case1(void);
extern unsigned int uttest_CPM_ComRcv_case2(void);
extern unsigned int uttest_CPM_ComRcv_case3(void);
extern unsigned int uttest_CPM_ComRcv_case4(void);
extern void uttest_CPM_Show_case1(void);
extern unsigned int uttest_CPM_PortAssociateInit_case1(void);
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
*������:
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
/*
TEST(���⺯����, ������)
{
	MOCKER(Om_AcpuDumpReboot)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

	uttest_Om_AcpuBbpConfigMsgProc_case1();
}
*/

/*******************************************************************
*������: ע�������˿ں�Խ��
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_PhySendReg1, UT)
{
	uttest_CPM_PhySendReg_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ע�������ͺ����ɹ�
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_PhySendReg2, UT)
{
	uttest_CPM_PhySendReg_case2();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ע����߼��˿ں�Խ��
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_LogicRcvReg1, UT)
{
	uttest_CPM_LogicRcvReg_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ע����߼����պ����ɹ�
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_LogicRcvReg2, UT)
{
	uttest_CPM_LogicRcvReg_case2();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ���Ӷ˿ڵ�����ͨ����Խ��
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_ConnectPorts1, UT)
{
	uttest_CPM_ConnectPorts_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ���Ӷ˿ڵ��߼�ͨ����Խ��
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_ConnectPorts2, UT)
{
	uttest_CPM_ConnectPorts_case2();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ���Ӷ˿ڳɹ�
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_ConnectPorts3, UT)
{
	uttest_CPM_ConnectPorts_case3();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: �Ͽ��˿ڵ�����ͨ����Խ��
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_DisconnectPorts1, UT)
{
	uttest_CPM_DisconnectPorts_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: �Ͽ��˿ڵ��߼�ͨ����Խ��
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_DisconnectPorts2, UT)
{
	uttest_CPM_DisconnectPorts_case2();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: �Ͽ����߼�ͨ��û��ʹ�ô�����ͨ��
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_DisconnectPorts3, UT)
{
	uttest_CPM_DisconnectPorts_case3();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: �Ͽ��ɹ�
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_DisconnectPorts4, UT)
{
	uttest_CPM_DisconnectPorts_case4();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ���͵��߼�ͨ����Խ��
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_ComSend1, UT)
{
	EXPECT_EQ(2, uttest_CPM_ComSend_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: �������ݵ�ַΪ��
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_ComSend2, UT)
{
	EXPECT_EQ(2, uttest_CPM_ComSend_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: �������ݳ���Ϊ0
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_ComSend3, UT)
{
	EXPECT_EQ(2, uttest_CPM_ComSend_case3());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ���ͺ���ָ��Ϊ��
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_ComSend4, UT)
{
	EXPECT_EQ(1, uttest_CPM_ComSend_case4());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ���ͺ�������ʧ��
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_ComSend5, UT)
{
	MOCKER(PPM_VComCfgSendData)
		.stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR, uttest_CPM_ComSend_case5());

	GlobalMockObject::reset();
}


/*******************************************************************
*������: ���ͺ������سɹ�
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_ComSend6, UT)
{
	MOCKER(PPM_VComCfgSendData)
		.stubs()
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_CPM_ComSend_case6());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ���յ�����ͨ����Խ��
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_ComRcv1, UT)
{
	EXPECT_EQ(VOS_ERR, uttest_CPM_ComRcv_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: �������ݵ�ַΪ��
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_ComRcv2, UT)
{
	EXPECT_EQ(VOS_ERR, uttest_CPM_ComRcv_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ���պ���ָ��Ϊ��
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_ComRcv3, UT)
{
	EXPECT_EQ(VOS_ERR, uttest_CPM_ComRcv_case3());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:���պ������سɹ�
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_ComRcv4, UT)
{
	MOCKER(SCM_SoftDecodeCfgDataRcv)
		.stubs()
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_CPM_ComRcv_case4());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: CPM_Show�����ӡ��Ϣ
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_Show1, UT)
{
	uttest_CPM_Show_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: CPM_PortAssociateInit��ɶ˿ڹ�����֧��HSIC
*���⺯����������:
*Ԥ�ڽ����           ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��12��
#    ��    ��: h59254
#    �޸�����: �½�CASE
*******************************************************************/
TEST(CPM_PortAssociateInit1, UT)
{
	MOCKER(BSP_CheckModuleSupport)
		.stubs()
		.will(returnValue((unsigned int)0));

	EXPECT_EQ(VOS_OK, uttest_CPM_PortAssociateInit_case1());

	GlobalMockObject::reset();
}