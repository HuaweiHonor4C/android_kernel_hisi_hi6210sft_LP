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
extern unsigned int NV_ReadEx(unsigned short enModemID, unsigned short usID, void *pItem, unsigned int ulLength);
extern unsigned int NV_ReadExPPMLogFileInitStub(unsigned short enModemID, unsigned short usID, void *pItem, unsigned int ulLength);
extern unsigned int NV_ReadExPPMLogFileInitStub1(unsigned short enModemID, unsigned short usID, void *pItem, unsigned int ulLength);
extern unsigned int NV_ReadExPPMLogFileInitStub2(unsigned short enModemID, unsigned short usID, void *pItem, unsigned int ulLength);
extern unsigned int OM_SDInit(void);
extern unsigned int PPM_FSInitLogFile(void);


extern unsigned int uttest_PPM_LogFileInit_case1(void);
extern unsigned int uttest_PPM_LogFileInit_case2(void);
extern unsigned int uttest_PPM_LogFileInit_case3(void);
extern unsigned int uttest_PPM_LogFileInit_case4(void);
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
*������: NV���ȡʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_LogFileInit1, UT)
{
	MOCKER(NV_ReadEx)
		.expects(exactly(1))
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_OK, uttest_PPM_LogFileInit_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:NV���ȡ���������SD��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_LogFileInit2, UT)
{
	MOCKER(NV_ReadEx)
		.expects(once())
		.will(invoke(NV_ReadExPPMLogFileInitStub));

	MOCKER(OM_SDInit)
		.expects(exactly(1))
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_PPM_LogFileInit_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:NV���ȡ����������ļ�ϵͳ
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_LogFileInit3, UT)
{
	MOCKER(NV_ReadEx)
		.expects(once())
		.will(invoke(NV_ReadExPPMLogFileInitStub1));

	MOCKER(PPM_FSInitLogFile)
		.expects(exactly(1))
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_PPM_LogFileInit_case3());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:NV���ȡ�����������USB
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(PPM_LogFileInit4, UT)
{
	MOCKER(NV_ReadEx)
		.expects(once())
		.will(invoke(NV_ReadExPPMLogFileInitStub2));

	EXPECT_EQ(VOS_OK, uttest_PPM_LogFileInit_case4());

	GlobalMockObject::reset();
}


