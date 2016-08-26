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
extern void PPM_PortWriteAsyCB(unsigned int enHandle, unsigned char* pucData, int lLen);
extern int PPM_ReadPortData(unsigned int enPhyPort, unsigned int UdiHandle);
extern unsigned int PPM_GetHsicPortStatus(void);
extern void PPM_ReadPortDataInit(unsigned int enPhyPort, unsigned int enHandle, void *pReadCB, void *pWriteCB, void *pStateCB);
extern void PPM_PortCloseProc(unsigned int enHandle, unsigned int enPhyPort);
extern unsigned int PPM_PortSend(unsigned int enHandle, unsigned char *pucVirAddr, unsigned char *pucPhyAddr, unsigned int ulDataLen);
extern void PPM_PortStatus(unsigned int enHandle, unsigned int enPhyPort, unsigned int enPortState);
extern void PPM_HsicIndPortOpen(void);
extern void PPM_HsicCfgPortOpen(void);
extern void CPM_PhySendReg(unsigned int enPhyPort, void *pSendFunc);
extern unsigned int VOS_SmP(unsigned int Sm_ID, unsigned int ulTimeOutInMillSec);
extern unsigned int VOS_SmV(unsigned int Sm_ID);
extern unsigned int BSP_CheckModuleSupport(unsigned int enModuleType);
extern unsigned int BSP_GetHsicEnumStatus(void);
extern unsigned int BSP_HSIC_RegUdiEnableCB(void *pFunc);
extern unsigned int BSP_HSIC_RegUdiDisableCB(void *pFunc);

extern unsigned int uttest_PPM_GetHsicPortStatus_case1(void);
extern void uttest_PPM_HsicIndWriteDataCB_case1(void);
extern int uttest_PPM_HsicCfgReadDataCB_case1(void);
extern int uttest_PPM_HsicCfgReadDataCB_case2(void);
extern void uttest_PPM_HsicCfgWriteDataCB_case1(void);
extern void uttest_PPM_HsicCfgPortOpen_case1(void);
extern void uttest_PPM_HsicIndPortOpen_case1(void);
extern void uttest_PPM_HsicIndPortClose_case1(void);
extern void uttest_PPM_HsicCfgPortClose_case1(void);
extern unsigned int uttest_PPM_HsicIndSendData_case1(void);
extern unsigned int uttest_PPM_HsicCfgSendData_case1(void);
extern void uttest_PPM_HsicIndStatusCB_case1(void);
extern void uttest_PPM_HsicCfgStatusCB_case1(void);
extern void uttest_PPM_HsicPortInit_case1(void);
extern void uttest_PPM_HsicPortInit_case2(void);
extern void uttest_PPM_HsicPortInit_case3(void);
extern void uttest_PPM_HsicConnectProc_case1(void);
extern void uttest_PPM_HsicConnectProc_case2(void);
extern void uttest_PPM_HsicConnectProc_case3(void);
extern void uttest_PPM_HsicConnectProc_case4(void);
extern void uttest_PPM_HsicDisconnectProc_case1(void);
extern void uttest_PPM_HsicDisconnectProc_case2(void);
extern void uttest_PPM_HsicDisconnectProc_case3(void);
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
*������: ��ȡHSIC�˿���״̬
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_GetHsicPortStatus1, UT)
{
	EXPECT_EQ(0 /*OM_HSIC_PORT_STATUS_OFF*/, uttest_PPM_GetHsicPortStatus_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC INDд��ص�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicIndWriteDataCB1, UT)
{
	MOCKER(PPM_PortWriteAsyCB)
		.expects(exactly(1));

	uttest_PPM_HsicIndWriteDataCB_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC CFG�˿ڶ�ȡ�ص����˿�����
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicCfgReadDataCB1, UT)
{
	MOCKER(PPM_GetHsicPortStatus)
		.expects(exactly(1))
		.will(returnValue((unsigned int)0/*OM_HSIC_PORT_STATUS_OFF*/));

	MOCKER(PPM_ReadPortData)
		.expects(never())
		.will(returnValue((int)VOS_OK));

	EXPECT_EQ(0 /*OM_HSIC_PORT_STATUS_OFF*/, uttest_PPM_HsicCfgReadDataCB_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC CFG�˿ڶ�ȡ�ص����˿��ѽ���
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicCfgReadDataCB2, UT)
{
	MOCKER(PPM_GetHsicPortStatus)
		.expects(exactly(1))
		.will(returnValue((unsigned int)1/*OM_HSIC_PORT_STATUS_ON*/));

	MOCKER(PPM_ReadPortData)
		.expects(exactly(1))
		.will(returnValue((int)VOS_OK));

	EXPECT_EQ(0 /*OM_HSIC_PORT_STATUS_OFF*/, uttest_PPM_HsicCfgReadDataCB_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC CFG�˿�д�ص�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicCfgWriteDataCB1, UT)
{
	MOCKER(PPM_PortWriteAsyCB)
		.expects(exactly(1));

	uttest_PPM_HsicCfgWriteDataCB_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC CFG�˿ڴ򿪴���
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicCfgPortOpen1, UT)
{
	MOCKER(PPM_ReadPortDataInit)
		.expects(exactly(1));

	uttest_PPM_HsicCfgPortOpen_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC IND�˿ڴ򿪴���
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicIndPortOpen1, UT)
{
	MOCKER(PPM_ReadPortDataInit)
		.expects(exactly(1));

	uttest_PPM_HsicIndPortOpen_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC IND�˿ڹرմ���
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicIndPortCloses1, UT)
{
	MOCKER(PPM_PortCloseProc)
		.expects(exactly(1));

	uttest_PPM_HsicIndPortClose_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC CFG�˿ڹرմ���
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicCfgPortCloses1, UT)
{
	MOCKER(PPM_PortCloseProc)
		.expects(exactly(1));

	uttest_PPM_HsicCfgPortClose_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC IND�˿����ݷ��ʹ���
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicIndSendData1, UT)
{
	MOCKER(PPM_PortSend)
		.stubs()
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_PPM_HsicIndSendData_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC CFG�˿����ݷ��ʹ���
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicCfgSendData1, UT)
{
	MOCKER(PPM_PortSend)
		.stubs()
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_PPM_HsicCfgSendData_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC IND�˿�״̬�������
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicIndStatusCB1, UT)
{
	MOCKER(PPM_PortStatus)
		.expects(exactly(1));

	uttest_PPM_HsicIndStatusCB_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC CFG�˿�״̬�������
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicCfgStatusCB1, UT)
{
	MOCKER(PPM_PortStatus)
		.expects(exactly(1));

	uttest_PPM_HsicCfgStatusCB_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC�˿ڳ�ʼ������֧��HSIC����
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicPortInit1, UT)
{
	MOCKER(BSP_CheckModuleSupport)
		.expects(exactly(1))
		.will(returnValue((unsigned int)1/*BSP_MODULE_UNSUPPORT*/));

	uttest_PPM_HsicPortInit_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC�˿ڳ�ʼ����֧��HSIC���ԣ������ѳ�ʼ�����
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicPortInit2, UT)
{
	MOCKER(BSP_CheckModuleSupport)
		.expects(exactly(1))
		.will(returnValue((unsigned int)0/*BSP_MODULE_SUPPORT*/));

	MOCKER(BSP_GetHsicEnumStatus)
		.expects(exactly(1))
		.will(returnValue((unsigned int)1/*VOS_TRUE*/));

	MOCKER(BSP_HSIC_RegUdiEnableCB)
		.expects(exactly(2))
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(BSP_HSIC_RegUdiDisableCB)
        .expects(exactly(2))
        .will(returnValue((unsigned int)VOS_OK));

	MOCKER(PPM_HsicIndPortOpen)
		.expects(exactly(1));

	MOCKER(PPM_HsicCfgPortOpen)
		.expects(exactly(1));

	MOCKER(CPM_PhySendReg)
		.expects(exactly(2));

	uttest_PPM_HsicPortInit_case2();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC�˿ڳ�ʼ����֧��HSIC���ԣ������ʼ��δ���
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicPortInit3, UT)
{
	MOCKER(BSP_CheckModuleSupport)
		.expects(exactly(1))
		.will(returnValue((unsigned int)0/*BSP_MODULE_SUPPORT*/));

	MOCKER(BSP_GetHsicEnumStatus)
		.expects(exactly(1))
		.will(returnValue((unsigned int)0/*VOS_FALSE*/));

	MOCKER(BSP_HSIC_RegUdiEnableCB)
		.expects(exactly(2))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(BSP_HSIC_RegUdiDisableCB)
		.expects(exactly(2))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(CPM_PhySendReg)
		.expects(exactly(2));

	uttest_PPM_HsicPortInit_case3();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC�˿ڹ���������ȡ�ź���ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicConnectProc1, UT)
{
	MOCKER(VOS_SmP)
		.expects(exactly(1))
		.will(returnValue((unsigned int)VOS_ERR));

	uttest_PPM_HsicConnectProc_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC�˿ڹ���������Ʒ��֧��HSIC���ԣ�ֱ�ӳ�ʼ���ɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicConnectProc2, UT)
{
	MOCKER(VOS_SmP)
		.expects(exactly(1))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(VOS_SmV)
		.expects(exactly(1))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(BSP_CheckModuleSupport)
		.expects(exactly(1))
		.will(returnValue((unsigned int)1/*BSP_MODULE_UNSUPPORT*/));

	uttest_PPM_HsicConnectProc_case2();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC�˿ڹ��������Ѿ������ϲ�������
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicConnectProc3, UT)
{
	MOCKER(VOS_SmP)
		.expects(exactly(1))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(VOS_SmV)
		.expects(exactly(1))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(BSP_CheckModuleSupport)
		.expects(exactly(1))
		.will(returnValue((unsigned int)0/*BSP_MODULE_SUPPORT*/));

	uttest_PPM_HsicConnectProc_case3();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC�˿ڹ���������ȫ�ֱ�������Ϊ�ѹ�����
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicConnectProc4, UT)
{
	MOCKER(VOS_SmP)
		.expects(exactly(1))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(VOS_SmV)
		.expects(exactly(1))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(BSP_CheckModuleSupport)
		.expects(exactly(1))
		.will(returnValue((unsigned int)0/*BSP_MODULE_SUPPORT*/));

	uttest_PPM_HsicConnectProc_case4();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC�˿ڶϿ�����������Ʒ��֧��HSIC���ԣ�ֱ�ӳ�ʼ���ɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicDisconnectProc1, UT)
{
	MOCKER(BSP_CheckModuleSupport)
		.expects(exactly(1))
		.will(returnValue((unsigned int)1/*BSP_MODULE_UNSUPPORT*/));

	uttest_PPM_HsicDisconnectProc_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC�˿ڶϿ�������������Ѿ���δ����״̬���������������
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicDisconnectProc2, UT)
{
	MOCKER(BSP_CheckModuleSupport)
		.expects(exactly(1))
		.will(returnValue((unsigned int)0/*BSP_MODULE_SUPPORT*/));

	uttest_PPM_HsicDisconnectProc_case2();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: HSIC�˿ڶϿ����������Ͽ��ɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_HsicDisconnectProc3, UT)
{
	MOCKER(BSP_CheckModuleSupport)
		.expects(exactly(1))
		.will(returnValue((unsigned int)0/*BSP_MODULE_SUPPORT*/));

	uttest_PPM_HsicDisconnectProc_case3();

	GlobalMockObject::reset();
}

