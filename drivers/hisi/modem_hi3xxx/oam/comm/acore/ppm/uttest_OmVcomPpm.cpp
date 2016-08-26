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
extern unsigned int CPM_ComRcv(unsigned int enPhyPort, char *pucData, unsigned int ulLen);
extern unsigned int APP_VCOM_Send (unsigned char ucDevIndex, unsigned char *pData, unsigned int uslength);
extern unsigned int DMS_WriteOmData(unsigned int enChan, unsigned char *pucData, unsigned int ulLength);
extern unsigned int APP_VCOM_RegDataCallback(unsigned char ucDevIndex, void *pFunc);
extern unsigned int DMS_RegOmChanDataReadCB(unsigned char ucDevIndex, void *pFunc);
extern void CPM_PhySendReg(unsigned int enPhyPort, void* pSendFunc);
extern void PPM_VComIndPortInit(void);
extern void PPM_VComCfgPortInit(void);
extern void GU_OamErrLogVComPortInit(void);


extern int uttest_PPM_VComCfgReadData_case1(void);
extern int uttest_PPM_VComCfgReadData_case2(void);
extern int uttest_PPM_VComCfgReadData_case3(void);
extern int uttest_PPM_VComCfgReadData_case4(void);
extern unsigned int uttest_PPM_VComCfgSendData_case1(void);
extern unsigned int uttest_PPM_VComCfgSendData_case2(void);
extern unsigned int uttest_PPM_VComIndSendData_case1(void);
extern unsigned int uttest_PPM_VComIndSendData_case2(void);
extern void uttest_PPM_VComCfgPortInit_case1(void);
extern void uttest_PPM_VComIndPortInit_case1(void);
extern void uttest_PPM_VComPortInit_case1(void);
extern void uttest_PPM_VComInfoShow_case1(void);

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
*������: ���Ǵ���ȷ��VCOM�˿��յ�������
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_VComCfgReadData1, UT)
{
	EXPECT_EQ(VOS_ERR, uttest_PPM_VComCfgReadData_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ���������ǿ�ָ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_VComCfgReadData2, UT)
{
	EXPECT_EQ(VOS_ERR, uttest_PPM_VComCfgReadData_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ����CPM_ComRcv����ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_VComCfgReadData3, UT)
{
	MOCKER(CPM_ComRcv)
		.stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_OK, uttest_PPM_VComCfgReadData_case3());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: ����CPM_ComRcv���سɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_VComCfgReadData4, UT)
{
	MOCKER(CPM_ComRcv)
		.stubs()
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_PPM_VComCfgReadData_case4());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: VCOM CFG�˿ڵ���APP_VCOM_Send��������ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_VComCfgSendData1, UT)
{
	MOCKER(DMS_WriteOmData)
		.stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(3/*CPM_SEND_ERR*/, uttest_PPM_VComCfgSendData_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: VCOM CFG�˿ڵ���APP_VCOM_Send�������ݳɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_VComCfgSendData2, UT)
{
	MOCKER(DMS_WriteOmData)
		.stubs()
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(0/*CPM_SEND_OK*/, uttest_PPM_VComCfgSendData_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: VCOM IND�˿ڵ���APP_VCOM_Send��������ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_VComIndSendData1, UT)
{
	MOCKER(DMS_WriteOmData)
		.stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(3/*CPM_SEND_ERR*/, uttest_PPM_VComIndSendData_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: VCOM IND�˿ڵ���APP_VCOM_Send�������ݳɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_VComIndSendData2, UT)
{
	MOCKER(DMS_WriteOmData)
		.stubs()
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(0/*CPM_SEND_OK*/, uttest_PPM_VComIndSendData_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������: VCOM CFG�˿ڳ�ʼ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_VComCfgPortInit1, UT)
{
	MOCKER(DMS_RegOmChanDataReadCB)
		.stubs()
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(CPM_PhySendReg)
		.expects(once());

	uttest_PPM_VComCfgPortInit_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: VCOM IND�˿ڳ�ʼ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_VComIndPortInit1, UT)
{
	MOCKER(DMS_RegOmChanDataReadCB)
		.stubs()
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(CPM_PhySendReg)
		.expects(once());

	uttest_PPM_VComIndPortInit_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: VCOM �˿ڳ�ʼ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_VComPortInit1, UT)
{
	MOCKER(PPM_VComIndPortInit)
		.expects(once());

	MOCKER(PPM_VComCfgPortInit)
		.expects(once());

	MOCKER(GU_OamErrLogVComPortInit)
		.expects(once());

	uttest_PPM_VComPortInit_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������: VCOM �˿���Ϣ���
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_VComInfoShow1, UT)
{
	uttest_PPM_VComInfoShow_case1();

	GlobalMockObject::reset();
}

