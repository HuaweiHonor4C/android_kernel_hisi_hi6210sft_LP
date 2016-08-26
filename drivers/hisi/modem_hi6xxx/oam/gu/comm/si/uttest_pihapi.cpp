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

    extern unsigned int uttest_SI_PIH_GetReceiverPid_case1(void);
    extern unsigned int uttest_SI_PIH_GetReceiverPid_case2(void);
    extern unsigned int uttest_SI_PIH_GetReceiverPid_case3(void);
    extern unsigned int uttest_SI_PIH_GetReceiverPid_case4(void);
    extern unsigned int uttest_SI_PIH_IsSvlte_case1(void);
    extern unsigned int uttest_SI_PIH_IsSvlte_case2(void);
    extern unsigned int uttest_SI_PIH_FdnBdnQuery_case1(void);
    extern unsigned int uttest_SI_PIH_FdnBdnQuery_case2(void);
    extern unsigned int uttest_SI_PIH_FdnBdnQuery_case3(void);
    extern unsigned int uttest_SI_PIH_FdnBdnQuery_case4(void);
    extern unsigned int uttest_SI_PIH_FdnBdnQuery_case5(void);
    extern unsigned int uttest_SI_PIH_GenericAccessReq_case1(void);
    extern unsigned int uttest_SI_PIH_GenericAccessReq_case2(void);
    extern unsigned int uttest_SI_PIH_GenericAccessReq_case3(void);
    extern unsigned int uttest_SI_PIH_GenericAccessReq_case4(void);
    extern unsigned int uttest_SI_PIH_GenericAccessReq_case5(void);
    extern unsigned int uttest_SI_PIH_GenericAccessReq_case6(void);
    extern unsigned int uttest_SI_PIH_GenericAccessReq_case7(void);
    extern unsigned int uttest_SI_PIH_FdnEnable_case1(void);
    extern unsigned int uttest_SI_PIH_FdnEnable_case2(void);
    extern unsigned int uttest_SI_PIH_FdnEnable_case3(void);
    extern unsigned int uttest_SI_PIH_FdnEnable_case4(void);
    extern unsigned int uttest_SI_PIH_FdnEnable_case5(void);
    extern unsigned int uttest_SI_PIH_FdnDisable_case1(void);
    extern unsigned int uttest_SI_PIH_FdnDisable_case2(void);
    extern unsigned int uttest_SI_PIH_FdnDisable_case3(void);
    extern unsigned int uttest_SI_PIH_FdnDisable_case4(void);
    extern unsigned int uttest_SI_PIH_FdnDisable_case5(void);
    extern unsigned int uttest_SI_PIH_IsdbAccessReq_case1(void);
    extern unsigned int uttest_SI_PIH_IsdbAccessReq_case2(void);
    extern unsigned int uttest_SI_PIH_IsdbAccessReq_case3(void);
    extern unsigned int uttest_SI_PIH_IsdbAccessReq_case4(void);
    extern unsigned int uttest_SI_PIH_IsdbAccessReq_case5(void);
    extern unsigned int uttest_SI_PIH_CchoSetReq_case1(void);
    extern unsigned int uttest_SI_PIH_CchoSetReq_case2(void);
    extern unsigned int uttest_SI_PIH_CchoSetReq_case3(void);
    extern unsigned int uttest_SI_PIH_CchoSetReq_case4(void);
    extern unsigned int uttest_SI_PIH_CchoSetReq_case5(void);
    extern unsigned int uttest_SI_PIH_CchcSetReq_case1(void);
    extern unsigned int uttest_SI_PIH_CchcSetReq_case2(void);
    extern unsigned int uttest_SI_PIH_CchcSetReq_case3(void);
    extern unsigned int uttest_SI_PIH_CchcSetReq_case4(void);
    extern unsigned int uttest_SI_PIH_CglaSetReq_case1(void);
    extern unsigned int uttest_SI_PIH_CglaSetReq_case2(void);
    extern unsigned int uttest_SI_PIH_CglaSetReq_case3(void);
    extern unsigned int uttest_SI_PIH_CglaSetReq_case3(void);
    extern unsigned int uttest_SI_PIH_CglaSetReq_case4(void);
    extern unsigned int uttest_SI_PIH_HvsDHSet_case1(void);
    extern unsigned int uttest_SI_PIH_HvsDHSet_case2(void);
    extern unsigned int uttest_SI_PIH_HvsDHSet_case3(void);
    extern unsigned int uttest_SI_PIH_HvsDHSet_case4(void);
    extern unsigned int uttest_SI_PIH_HvsDHSet_case5(void);
    extern unsigned int uttest_SI_PIH_HvsDHSet_case6(void);
    extern unsigned int uttest_SI_PIH_HvsDHQuery_case1(void);
    extern unsigned int uttest_SI_PIH_HvsDHQuery_case2(void);
    extern unsigned int uttest_SI_PIH_HvsDHQuery_case3(void);
    extern unsigned int uttest_SI_PIH_HvsDHQuery_case4(void);
    extern unsigned int uttest_SI_PIH_HvsContQuery_case1(void);
    extern unsigned int uttest_SI_PIH_HvsContQuery_case2(void);
    extern unsigned int uttest_SI_PIH_HvsContQuery_case3(void);
    extern unsigned int uttest_SI_PIH_HvsContQuery_case4(void);
    extern unsigned int uttest_SI_PIH_HvsContQuery_case1(void);
    extern unsigned int uttest_SI_PIH_HvsContQuery_case1(void);
    extern unsigned int uttest_SI_PIH_HvsContQuery_case2(void);
    extern unsigned int uttest_SI_PIH_HvsContQuery_case4(void);
    extern unsigned int uttest_SI_PIH_HvSstSet_case1(void);
    extern unsigned int uttest_SI_PIH_HvSstSet_case2(void);
    extern unsigned int uttest_SI_PIH_HvSstSet_case3(void);
    extern unsigned int uttest_SI_PIH_HvSstSet_case4(void);
    extern unsigned int uttest_SI_PIH_HvSstSet_case5(void);
    extern unsigned int uttest_SI_PIH_AtFileWrite_case1(void);
    extern unsigned int uttest_SI_PIH_AtFileWrite_case2(void);
    extern unsigned int uttest_SI_PIH_AtFileWrite_case3(void);
    extern unsigned int uttest_SI_PIH_AtFileWrite_case4(void);
    extern unsigned int uttest_SI_PIH_AtFileWrite_case5(void);
    extern unsigned int uttest_SI_PIH_AtFileWrite_case6(void);
    extern unsigned int uttest_SI_PIH_AtFileWrite_case7(void);
    extern unsigned int uttest_SI_PIH_UiccAuthReq_case1(void);
    extern unsigned int uttest_SI_PIH_UiccAuthReq_case2(void);
    extern unsigned int uttest_SI_PIH_UiccAuthReq_case3(void);
    extern unsigned int uttest_SI_PIH_UiccAuthReq_case4(void);
    extern unsigned int uttest_SI_PIH_UiccAuthReq_case5(void);
    extern unsigned int uttest_SI_PIH_AccessUICCFileReq_case1(void);
    extern unsigned int uttest_SI_PIH_AccessUICCFileReq_case2(void);
    extern unsigned int uttest_SI_PIH_AccessUICCFileReq_case3(void);
    extern unsigned int uttest_SI_PIH_AccessUICCFileReq_case4(void);
    extern unsigned int uttest_SI_PIH_AccessUICCFileReq_case5(void);

    extern unsigned int AT_GetModemIdFromClient(unsigned short usClientId, unsigned short *pModemId);
    extern unsigned int SI_PIH_IsSvlte(void);
    extern unsigned int NV_ReadEx(unsigned short enModemID, unsigned short usID, void *pItem, unsigned int ulLength);
    extern unsigned int uttest_NV_ReadEx_stub1(unsigned short enModemID, unsigned short usID, void *pItem, unsigned int ulLength);
    extern void * V_AllocMsg(unsigned int Pid, unsigned int ulLength, unsigned int ulFileID, signed int usLineNo);
    extern unsigned int V_SendMsg(unsigned int Pid, void **ppMsg, unsigned int ulFileID, signed int lLineNo);
    extern unsigned int SI_PIH_GetReceiverPid(unsigned short ClientId, unsigned int *pulReceiverPid);
#ifdef __cplusplus
}
#endif

#ifndef VOS_OK
#define VOS_OK                          0
#endif

#ifndef VOS_ERR
#define VOS_ERR                         1
#endif

#ifndef VOS_TRUE
#define VOS_TRUE                        1
#endif

#ifndef VOS_FALSE
#define VOS_FALSE                       0
#endif

#ifndef VOS_NULL_PTR
#define VOS_NULL_PTR                    0
#endif

/*******************************************************************
*������:
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��:
#    ��    ��:
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SI_PIH_GetReceiverPid1, ERROR)
{
	MOCKER(AT_GetModemIdFromClient)
		.stubs()
        .will(returnValue(VOS_ERR));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_GetReceiverPid_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
*������:
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��:
#    ��    ��:
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SI_PIH_GetReceiverPid2, MODEMID0)
{
	unsigned short usModemID = 0;

	MOCKER(AT_GetModemIdFromClient)
        .stubs()
		.with(any(), outBoundP(&usModemID))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(SI_PIH_IsSvlte)
        .stubs()
		.will(returnValue((unsigned int)VOS_FALSE));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_GetReceiverPid_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
*������:
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��:
#    ��    ��:
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SI_PIH_GetReceiverPid3, MODEMID1)
{
	unsigned short usModemID = 1;

	MOCKER(AT_GetModemIdFromClient)
        .stubs()
		.with(any(), outBoundP(&usModemID))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(SI_PIH_IsSvlte)
        .stubs()
		.will(returnValue((unsigned int)VOS_FALSE));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_GetReceiverPid_case3());

    GlobalMockObject::reset();
}

/*******************************************************************
*������:
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��:
#    ��    ��:
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SI_PIH_GetReceiverPid4, SVLTE)
{
	unsigned short usModemID = 1;

	MOCKER(AT_GetModemIdFromClient)
        .stubs()
		.with(any(), outBoundP(&usModemID))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(SI_PIH_IsSvlte)
        .stubs()
		.will(returnValue((unsigned int)VOS_TRUE));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_GetReceiverPid_case4());

    GlobalMockObject::reset();
}

/*******************************************************************
*������:NV���ȡʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��:
#    ��    ��:
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SI_PIH_IsSvlte1, UT)
{
	MOCKER(NV_ReadEx)
        .stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_IsSvlte_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
*������:NV���ȡ�ɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��:
#    ��    ��:
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SI_PIH_IsSvlte2, UT)
{
	MOCKER(NV_ReadEx)
		.stubs()
        .will(invoke(uttest_NV_ReadEx_stub1));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_IsSvlte_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
*������:
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��:
#    ��    ��:
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SI_PIH_FdnBdnQuery1, Error)
{
	unsigned char	                    aucData[100];

    MOCKER(AT_GetModemIdFromClient)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_FdnBdnQuery_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
*������:��ѯ��ǰ��FDN״̬
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��:
#    ��    ��:
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SI_PIH_FdnBdnQuery2, UT)
{
	unsigned char	                    aucData[100];

    MOCKER(AT_GetModemIdFromClient)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
            .stubs()
            .will(returnValue((unsigned int)VOS_FALSE));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_FdnBdnQuery_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: ��ѯ��ǰ��BDN״̬
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��:
#    ��    ��:
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SI_PIH_FdnBdnQuery3, UT)
{
    unsigned char	                    aucData[100];

    MOCKER(AT_GetModemIdFromClient)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
            .stubs()
            .will(returnValue((unsigned int)VOS_FALSE));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_FdnBdnQuery_case3());

    GlobalMockObject::reset();
}

/*******************************************************************
*������:��ѯ��ǰ��FDN״̬Failed
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��:
#    ��    ��:
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SI_PIH_FdnBdnQuery4, UT)
{
    MOCKER(AT_GetModemIdFromClient)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
            .stubs()
            .will(returnValue((unsigned int)VOS_FALSE));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)0));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_FdnBdnQuery_case4());

    GlobalMockObject::reset();
}

/*******************************************************************
*������:��ѯ��ǰ��FDN״̬Failed
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��:
#    ��    ��:
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SI_PIH_FdnBdnQuery5, UT)
{
    unsigned char	                    aucData[100];

    MOCKER(AT_GetModemIdFromClient)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
            .stubs()
            .will(returnValue((unsigned int)VOS_FALSE));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_FdnBdnQuery_case5());

    GlobalMockObject::reset();
}

/*******************************************************************
*������:
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��:
#    ��    ��:
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SI_PIH_GenericAccessReq1, Error)
{
	MOCKER(AT_GetModemIdFromClient)
        .stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_GenericAccessReq_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: �����������
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��:
#    ��    ��:
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SI_PIH_GenericAccessReq2, UT)
{
	MOCKER(AT_GetModemIdFromClient)
        .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_GenericAccessReq_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: ���ȴ���5
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��:
#    ��    ��:
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SI_PIH_GenericAccessReq3, UT)
{
	MOCKER(AT_GetModemIdFromClient)
        .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_GenericAccessReq_case3());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: �����ڴ�ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��:
#    ��    ��:
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SI_PIH_GenericAccessReq4, UT)
{
	MOCKER(V_AllocMsg)
        .stubs()
		.will(returnValue((void*)0));

	MOCKER(AT_GetModemIdFromClient)
        .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_GenericAccessReq_case4());

    GlobalMockObject::reset();
}
/*******************************************************************
*������:
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��:
#    ��    ��:
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SI_PIH_GenericAccessReq5, UT)
{
	unsigned char				 aucData[100];

	MOCKER(V_AllocMsg)
        .stubs()
		.will(returnValue((void*)&aucData[0]));

	MOCKER(AT_GetModemIdFromClient)
        .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	MOCKER(V_SendMsg)
        .stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_GenericAccessReq_case5());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: ���ݴ���
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��:
#    ��    ��:
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SI_PIH_GenericAccessReq6, UT)
{
	unsigned char				 aucData[100];

	MOCKER(V_AllocMsg)
        .stubs()
		.will(returnValue((void*)&aucData[0]));

	MOCKER(V_SendMsg)
        .stubs()
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(AT_GetModemIdFromClient)
        .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_GenericAccessReq_case6());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: ������ϢOK
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *********************************
#  1.��    ��:
#    ��    ��:
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SI_PIH_GenericAccessReq7, UT)
{
    unsigned char                          aucData[100];

	MOCKER(V_AllocMsg)
        .stubs()
		.will(returnValue((void*)&aucData[0]));

	MOCKER(V_SendMsg)
        .stubs()
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(AT_GetModemIdFromClient)
        .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_GenericAccessReq_case7());

    GlobalMockObject::reset();
}


TEST(SI_PIH_FdnEnable1, UT)
{
	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_ERR));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_FdnEnable_case1());

	GlobalMockObject::reset();
}


TEST(SI_PIH_FdnEnable2, UT)
{
	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_FdnEnable_case2());

	GlobalMockObject::reset();
}


TEST(SI_PIH_FdnEnable3,UT)
{
	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	MOCKER(V_AllocMsg)
	    .stubs()
		.will(returnValue((void*)0));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_FdnEnable_case3());

	GlobalMockObject::reset();
}


TEST(SI_PIH_FdnEnable4,UT)
{
    unsigned char                       aucData[100];

    MOCKER(AT_GetModemIdFromClient)
        .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

	MOCKER(V_SendMsg)
    	.stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_FdnEnable_case4());

	GlobalMockObject::reset();
}


TEST(SI_PIH_FdnEnable5,UT)
{
    unsigned char                       aucData[100];

	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

	MOCKER(V_SendMsg)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_FdnEnable_case5());

	GlobalMockObject::reset();
}


TEST(SI_PIH_FdnDisable1, UT)
{
	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_ERR));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_FdnDisable_case1());

	GlobalMockObject::reset();
}


TEST(SI_PIH_FdnDisable2, UT)
{
	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_FdnDisable_case2());

	GlobalMockObject::reset();
}


TEST(SI_PIH_FdnDisable3, UT)
{
	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	MOCKER(V_AllocMsg)
	    .stubs()
		.will(returnValue((void*)VOS_NULL_PTR));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_FdnDisable_case3());

	GlobalMockObject::reset();

}


TEST(SI_PIH_FdnDisable4, UT)
{
    unsigned char	                    aucData[100];

	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	MOCKER(V_AllocMsg)
	    .stubs()
		.will(returnValue((void*)&aucData[0]));

	MOCKER(V_SendMsg)
	    .stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_FdnDisable_case4());

	GlobalMockObject::reset();
}


TEST(SI_PIH_FdnDisable5, UT)
{
	unsigned char	                    aucData[100];

	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	MOCKER(V_AllocMsg)
	    .stubs()
		.will(returnValue((void*)&aucData[0]));

	MOCKER(V_SendMsg)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_FdnDisable_case5());

	GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_IsdbAccessReq_001
������������      : �����APDU����Ϊ0
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2012-09-04
  ��   ��  : h59254
  �޸����� : ��ȫ�洢��Ŀ����
*******************************************************************/
TEST(Test_SI_PIH_IsdbAccessReq1, UT)
{
	// ��������
	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	// ִ�м��
	EXPECT_EQ(VOS_OK, uttest_SI_PIH_IsdbAccessReq_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_IsdbAccessReq_001
������������      : �����APDU����Ϊ0
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2012-09-04
  ��   ��  : h59254
  �޸����� : ��ȫ�洢��Ŀ����
*******************************************************************/
TEST(Test_SI_PIH_IsdbAccessReq2, UT)
{
    unsigned short          usModemId = 0;

	// ��������
	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
	    .with(any(), outBoundP(&usModemId))
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	// ���ñ��⺯��
	EXPECT_EQ(VOS_OK, uttest_SI_PIH_IsdbAccessReq_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_IsdbAccessReq_003
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2012-09-04
  ��   ��  : h59254
  �޸����� : ��ȫ�洢��Ŀ����
*******************************************************************/
TEST(Test_SI_PIH_IsdbAccessReq3, UT)
{
    unsigned short          usModemId = 0;

	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
	    .with(any(), outBoundP(&usModemId))
		.will(returnValue((unsigned int)VOS_OK));


    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	//mocker
	MOCKER(V_AllocMsg)
	    .stubs()
        .will(returnValue((void*)VOS_NULL_PTR));

	// ���ñ��⺯��
	EXPECT_EQ(VOS_OK, uttest_SI_PIH_IsdbAccessReq_case3());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_IsdbAccessReq_004
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2012-09-04
  ��   ��  : h59254
  �޸����� : ��ȫ�洢��Ŀ����
*******************************************************************/
TEST(Test_SI_PIH_IsdbAccessReq4, UT)
{
    unsigned short          usModemId = 0;
    unsigned char	        aucData[100];

	//mocker
	MOCKER(V_AllocMsg)
	    .stubs()
        .will(returnValue((void*)&aucData[0]));

	MOCKER(V_SendMsg)
	    .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
	    .with(any(), outBoundP(&usModemId))
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	// ���ñ��⺯��
	EXPECT_EQ(VOS_OK, uttest_SI_PIH_IsdbAccessReq_case4());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_IsdbAccessReq_005
������������      : ������Ϣ�ɹ�
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2012-09-04
  ��   ��  : h59254
  �޸����� : ��ȫ�洢��Ŀ����
*******************************************************************/
TEST(Test_SI_PIH_IsdbAccessReq5, UT)
{
	// ��������
	unsigned short          usModemId = 0;
	unsigned char	        aucData[100];

	//mocker
	MOCKER(V_AllocMsg)
	    .stubs()
        .will(returnValue((void*)&aucData[0]));

	MOCKER(V_SendMsg)
	    .stubs()
        .will(returnValue((unsigned int)VOS_OK));

	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
	    .with(any(), outBoundP(&usModemId))
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	// ���ñ��⺯��
	EXPECT_EQ(VOS_OK, uttest_SI_PIH_IsdbAccessReq_case5());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_CchoSetReq_001
������������      : �������ʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-05-21
  ��   ��  : g47350
  �޸����� : NFC-BIP��Ŀ����
*******************************************************************/
TEST(SI_PIH_CchoSetReq1, UT)
{
    // ���ñ��⺯��
	EXPECT_EQ(VOS_OK, uttest_SI_PIH_CchoSetReq_case1());
}

/*******************************************************************
�����������      : Test_SI_PIH_CchoSetReq_002
������������      : ��ȡ������PIDʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-05-21
  ��   ��  : g47350
  �޸����� : NFC-BIP��Ŀ����
*******************************************************************/
TEST(SI_PIH_CchoSetReq2, UT)
{
    //mocker
    MOCKER(SI_PIH_GetReceiverPid)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    // ���ñ��⺯��
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_CchoSetReq_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_CchoSetReq_003
������������      : ������Ϣ�ڴ�ʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-05-21
  ��   ��  : g47350
  �޸����� : NFC-BIP��Ŀ����
*******************************************************************/
TEST(SI_PIH_CchoSetReq3, UT)
{
    // ��������

    //mocker
    MOCKER(SI_PIH_GetReceiverPid)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)VOS_NULL_PTR));

    // ���ñ��⺯��
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_CchoSetReq_case3());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_CchoSetReq_004
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-05-21
  ��   ��  : g47350
  �޸����� : NFC-BIP��Ŀ����
*******************************************************************/
TEST(SI_PIH_CchoSetReq4, UT)
{
    // ��������
    unsigned char	                    aucData[100];
    unsigned short                      usModemId = 0;

    //mocker
    MOCKER(AT_GetModemIdFromClient)
        .stubs()
        .with(any(), outBoundP(&usModemId))
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));


    // ���ñ��⺯��
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_CchoSetReq_case4());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_CchoSetReq_005
������������      : ִ�гɹ�
Ԥ�ڽ��          : ��������TAF_SUCCESS
�޸���ʷ          :
1.��   ��  : 2013-05-21
  ��   ��  : g47350
  �޸����� : NFC-BIP��Ŀ����
*******************************************************************/
TEST(SI_PIH_CchoSetReq5, UT)
{
    // ��������
    unsigned short                      usModemId = 0;
    unsigned char	                    aucData[100];

    //mocker
    MOCKER(AT_GetModemIdFromClient)
        .stubs()
        .with(any(), outBoundP(&usModemId))
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));


    // ���ñ��⺯��
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_CchoSetReq_case5());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_CchcSetReq_001
������������      : ��ȡ������PIDʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-05-21
  ��   ��  : g47350
  �޸����� : NFC-BIP��Ŀ����
*******************************************************************/
TEST(SI_PIH_CchcSetReq1, UT)
{
    //mocker
    MOCKER(SI_PIH_GetReceiverPid)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    // ���ñ��⺯��
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_CchcSetReq_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_CchcSetReq_002
������������      : ������Ϣ�ڴ�ʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-05-21
  ��   ��  : g47350
  �޸����� : NFC-BIP��Ŀ����
*******************************************************************/
TEST(SI_PIH_CchcSetReq2, UT)
{
    //mocker
    MOCKER(SI_PIH_GetReceiverPid)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)VOS_NULL_PTR));

    // ���ñ��⺯��
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_CchcSetReq_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_CchcSetReq_003
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-05-21
  ��   ��  : g47350
  �޸����� : NFC-BIP��Ŀ����
*******************************************************************/
TEST(SI_PIH_CchcSetReq3, UT)
{
    // ��������
    unsigned char	                    aucData[100];

    //mocker
    MOCKER(SI_PIH_GetReceiverPid)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    // ���ñ��⺯��
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_CchcSetReq_case3());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_CchcSetReq_004
������������      : ִ�гɹ�
Ԥ�ڽ��          : ��������TAF_SUCCESS
�޸���ʷ          :
1.��   ��  : 2013-05-21
  ��   ��  : g47350
  �޸����� : NFC-BIP��Ŀ����
*******************************************************************/
TEST(SI_PIH_CchcSetReq4, UT)
{
    // ��������
    unsigned char	                    aucData[100];

    //mocker
    MOCKER(SI_PIH_GetReceiverPid)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_CchcSetReq_case4());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_CglaSetReq_001
������������      : ��ȡ������PIDʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-05-21
  ��   ��  : g47350
  �޸����� : NFC-BIP��Ŀ����
*******************************************************************/
TEST(SI_PIH_CglaSetReq1, UT)
{
    //mocker
    MOCKER(SI_PIH_GetReceiverPid)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    // ���ñ��⺯��
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_CglaSetReq_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_CglaSetReq_002
������������      : ������Ϣ�ڴ�ʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-05-21
  ��   ��  : g47350
  �޸����� : NFC-BIP��Ŀ����
*******************************************************************/
TEST(SI_PIH_CglaSetReq2, UT)
{
    //mocker
    MOCKER(SI_PIH_GetReceiverPid)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)VOS_NULL_PTR));

    // ���ñ��⺯��
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_CglaSetReq_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_CglaSetReq_003
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-05-21
  ��   ��  : g47350
  �޸����� : NFC-BIP��Ŀ����
*******************************************************************/
TEST(SI_PIH_CglaSetReq3, UT)
{
    // ��������
    unsigned char	                    aucData[100];

    //mocker
    MOCKER(SI_PIH_GetReceiverPid)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    // ���ñ��⺯��
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_CglaSetReq_case3());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_CglaSetReq_004
������������      : ִ�гɹ�
Ԥ�ڽ��          : ��������TAF_SUCCESS
�޸���ʷ          :
1.��   ��  : 2013-05-21
  ��   ��  : g47350
  �޸����� : NFC-BIP��Ŀ����
*******************************************************************/
TEST(SI_PIH_CglaSetReq4, UT)
{
    // ��������
    unsigned char	                    aucData[100];

    //mocker
    MOCKER(SI_PIH_GetReceiverPid)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    // ���ñ��⺯��
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_CglaSetReq_case4());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SI_PIH_HvsDHSet_001
������������      : ��������ָ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvsDHSet1, UT)
{
    // ���ñ��⺯��
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvsDHSet_case1());
}

/*******************************************************************
�����������      : SI_PIH_HvsDHSet_002
������������      : ������ⳤ�ȹ���
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvsDHSet2, UT)
{
    // ���ñ��⺯��
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvsDHSet_case2());
}

/*******************************************************************
�����������      : SI_PIH_HvsDHSet_003
������������      : clientת��ΪulReceiverPidʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvsDHSet3, UT)
{
	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	// ���ñ��⺯��
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvsDHSet_case3());

	GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SI_PIH_HvsDHSet_004
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvsDHSet4, UT)
{
	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)VOS_NULL_PTR));

	// ���ñ��⺯��
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvsDHSet_case4());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SI_PIH_HvsDHSet_005
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvsDHSet5, UT)
{
    unsigned char	                    aucData[100];

	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

	// ���ñ��⺯��
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvsDHSet_case5());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SI_PIH_HvsDHSet_006
������������      : ��������Կ�������󷢵�CCPU
Ԥ�ڽ��          : ��������TAF_SUCCESS
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvsDHSet6, UT)
{
    unsigned char	                    aucData[100];

	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

	// ���ñ��⺯��
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvsDHSet_case6());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SI_PIH_HvsDHQuery_001
������������      : clientת��ΪulReceiverPidʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvsDHQuery1, UT)
{
    unsigned char	                    aucData[100];

	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_ERR));

    // ���ñ��⺯��
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvsDHQuery_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SI_PIH_HvsDHQuery_002
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvsDHQuery2, UT)
{
	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)VOS_NULL_PTR));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvsDHQuery_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SI_PIH_HvsDHQuery_003
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvsDHQuery3, UT)
{
    unsigned char	                    aucData[100];

	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvsDHQuery_case3());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SI_PIH_HvsDHQuery_004
������������      : ��Կ��ѯ���͵�CCPU
Ԥ�ڽ��          : ��������TAF_SUCCESS
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvsDHQuery4, UT)
{
    unsigned char	                    aucData[100];

	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvsDHQuery_case4());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SI_PIH_HvsContQuery_001
������������      : clientת��ΪulReceiverPidʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvsContQuery1, UT)
{
	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_ERR));

   EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvsContQuery_case1());

   GlobalMockObject::reset();
}


/*******************************************************************
�����������      : SI_PIH_HvsContQuery_002
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvsContQuery2, UT)
{
	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)VOS_NULL_PTR));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvsContQuery_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SI_PIH_HvsContQuery_003
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvsContQuery3, UT)
{
    unsigned char	                    aucData[100];

	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvsContQuery_case3());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SI_PIH_HvsContQuery_004
������������      : �ļ����ݲ�ѯ���͵�CCPU
Ԥ�ڽ��          : ��������TAF_SUCCESS
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvsContQuery4, UT)
{
    unsigned char	                    aucData[100];

	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvsContQuery_case4());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SI_PIH_HvSstQuery_001
������������      : clientת��ΪulReceiverPidʧ��)
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvSstQuery1, UT)
{
    unsigned char	                    aucData[100];

	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_ERR));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvsContQuery_case1());

    GlobalMockObject::reset();
}


/*******************************************************************
�����������      : SI_PIH_HvSstQuery_002
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvSstQuery2, UT)
{
    unsigned char	                    aucData[100];

	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)VOS_NULL_PTR));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvsContQuery_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SI_PIH_HvSstQuery_003
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvSstQuery3, UT)
{
    unsigned char	                    aucData[100];

	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvsContQuery_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SI_PIH_HvSstQuery_004
������������      : ��״̬��ѯ���͵�CCPU
Ԥ�ڽ��          : ��������TAF_SUCCESS
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvSstQuery4, UT)
{
    unsigned char	                    aucData[100];

	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvsContQuery_case4());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SI_PIH_HvSstSet_001
������������      : �������ʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvSstSet1, UT)
{
    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvSstSet_case1());
}

/*******************************************************************
�����������      : SI_PIH_HvSstSet_002
������������      : clientת��ΪulReceiverPidʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvSstSet2, UT)
{
	unsigned char	                    aucData[100];

	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvSstSet_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SI_PIH_HvSstSet_003
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvSstSet3, UT)
{
	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)VOS_NULL_PTR));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvSstSet_case3());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SI_PIH_HvSstSet_004
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvSstSet4, UT)
{
    unsigned char	                    aucData[100];

	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvSstSet_case4());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SI_PIH_HvSstSet_005
������������      : ��״̬���÷��͵�CCPU
Ԥ�ڽ��          : ��������TAF_SUCCESS
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(SI_PIH_HvSstSet5, UT)
{
    unsigned char	                    aucData[100];

	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

    MOCKER(V_SendMsg)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_HvSstSet_case5());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : At_SetHvsDHPara_001
������������      : ��������
Ԥ�ڽ��          : ��������AT_CME_INCORRECT_PARAMETERS
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(At_SetHvsDHPara1, UT)
{
}

/*******************************************************************
�����������      : At_SetHvsDHPara_002
������������      : �����ַ���Ϊ��
Ԥ�ڽ��          : ��������AT_CME_INCORRECT_PARAMETERS
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(At_SetHvsDHPara2, UT)
{
}

/*******************************************************************
�����������      : At_SetHvsDHPara_002
������������      : �����ڴ�ʧ��
Ԥ�ڽ��          : ��������AT_ERROR
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(At_SetHvsDHPara3, UT)
{
}

/*******************************************************************
�����������      : At_SetHvsDHPara_003
������������      : BASE64����ʧ��
Ԥ�ڽ��          : ��������AT_CME_INCORRECT_PARAMETERS
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(At_SetHvsDHPara4, UT)
{
}

/*******************************************************************
�����������      : At_SetHvsDHPara_004
������������      : BASE64��������ݹ���
Ԥ�ڽ��          : ��������AT_CME_INCORRECT_PARAMETERS
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(At_SetHvsDHPara5, UT)
{
}

/*******************************************************************
�����������      : At_SetHvsDHPara_005
������������      : PIH�ӿڷ���ʧ��
Ԥ�ڽ��          : ��������AT_ERROR
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(At_SetHvsDHPara6, UT)
{
}

/*******************************************************************
�����������      : At_SetHvsDHPara_005
������������      : ��������Կ����AT�����ɹ�
Ԥ�ڽ��          : ��������AT_WAIT_ASYNC_RETURN
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(At_SetHvsDHPara7, UT)
{
}

/*******************************************************************
�����������      : At_QryHvsDHPara_001
������������      : PIH�ӿڷ���ʧ��
Ԥ�ڽ��          : ��������AT_ERROR
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(At_QryHvsDHPara1, UT)
{
}

/*******************************************************************
�����������      : At_QryHvsDHPara_002
������������      : ��Կ��ѯAT�����ɹ�
Ԥ�ڽ��          : ��������AT_WAIT_ASYNC_RETURN
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(At_QryHvsDHPara2, UT)
{
}

/*******************************************************************
�����������      : At_TestHvsDHPara_001
������������      : ���سɹ�
Ԥ�ڽ��          : ��������AT_OK
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(At_TestHvsDHPara1, UT)
{
}

/*******************************************************************
�����������      : At_QryHvsContPara_001
������������      : PIH�ӿڷ���ʧ��
Ԥ�ڽ��          : ��������AT_ERROR
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(At_QryHvsContPara1, UT)
{
}

/*******************************************************************
�����������      : At_QryHvsContPara_002
������������      : ��ѯ�ļ�����AT�����ɹ�
Ԥ�ڽ��          : ��������AT_WAIT_ASYNC_RETURN
�޸���ʷ          :
1.��   ��  : 2013-04-02
  ��   ��  : g47350
  �޸����� : BalongV300R002 vSIM������Ŀ
*******************************************************************/
TEST(At_QryHvsContPara2, UT)
{
}



TEST(SI_PIH_AtFileWrite1, UT)
{
	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_ERR));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_AtFileWrite_case1());

    GlobalMockObject::reset();
}


TEST(SI_PIH_AtFileWrite2, UT)
{
	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_AtFileWrite_case2());

    GlobalMockObject::reset();
}


TEST(SI_PIH_AtFileWrite3, UT)
{
	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_AtFileWrite_case3());

    GlobalMockObject::reset();
}


TEST(SI_PIH_AtFileWrite4, UT)
{
	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_AtFileWrite_case4());

    GlobalMockObject::reset();
}


TEST(SI_PIH_AtFileWrite5, UT)
{
	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(V_AllocMsg)
	    .stubs()
		.will(returnValue((void*)VOS_NULL_PTR));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_AtFileWrite_case5());

    GlobalMockObject::reset();
}


TEST(SI_PIH_AtFileWrite6, UT)
{
	unsigned char	                    aucData[100];

	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

	MOCKER(V_SendMsg)
	    .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_AtFileWrite_case6());

    GlobalMockObject::reset();
}


TEST(SI_PIH_AtFileWrite7, UT)
{
	unsigned char	                    aucData[100];

	MOCKER(SI_PIH_GetReceiverPid)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_AllocMsg)
        .stubs()
        .will(returnValue((void*)&aucData[0]));

	MOCKER(V_SendMsg)
	    .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    EXPECT_EQ(VOS_OK, uttest_SI_PIH_AtFileWrite_case7());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_UiccAuthReq_001
������������      : Client Idת��ʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2014-03-24
  ��   ��  : h59254
  �޸����� : GBA��Ŀ����
*******************************************************************/
TEST(Test_SI_PIH_UiccAuthReq1, UT)
{
	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_ERR));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	// ���ñ��⺯��
	EXPECT_EQ(VOS_OK, uttest_SI_PIH_UiccAuthReq_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_UiccAuthReq_002
������������      : ��Ȩ����Ϊ��ָ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2014-03-24
  ��   ��  : h59254
  �޸����� : GBA��Ŀ����
*******************************************************************/
TEST(Test_SI_PIH_UiccAuthReq2, UT)
{
	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	// ���ñ��⺯��
	EXPECT_EQ(VOS_OK, uttest_SI_PIH_UiccAuthReq_case2());


    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_UiccAuthReq_003
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2014-03-24
  ��   ��  : h59254
  �޸����� : GBA��Ŀ����
*******************************************************************/
TEST(Test_SI_PIH_UiccAuthReq3, UT)
{
	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
                .stubs()
                .will(returnValue((unsigned int)VOS_FALSE));

	MOCKER(V_AllocMsg)
	    .stubs()
		.will(returnValue((void*)VOS_NULL_PTR));

	// ���ñ��⺯��
	EXPECT_EQ(VOS_OK, uttest_SI_PIH_UiccAuthReq_case3());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_UiccAuthReq_004
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2014-03-24
  ��   ��  : h59254
  �޸����� : GBA��Ŀ����
*******************************************************************/
TEST(Test_SI_PIH_UiccAuthReq4, UT)
{
	unsigned char	                    aucData[1000];

	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
        .stubs()
        .will(returnValue((unsigned int)VOS_FALSE));

	MOCKER(V_AllocMsg)
	    .stubs()
		.will(returnValue((void*)&aucData[0]));

	MOCKER(V_SendMsg)
	    .stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	// ���ñ��⺯��
	EXPECT_EQ(VOS_OK, uttest_SI_PIH_UiccAuthReq_case4());


    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_UiccAuthReq_005
������������      : ������Ϣ�ɹ�
Ԥ�ڽ��          : ��������TAF_SUCCESS
�޸���ʷ          :
1.��   ��  : 2014-03-24
  ��   ��  : h59254
  �޸����� : GBA��Ŀ����
*******************************************************************/
TEST(Test_SI_PIH_UiccAuthReq5, UT)
{
	// ��������
	unsigned char	                    aucData[1000];

	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
        .stubs()
        .will(returnValue((unsigned int)VOS_FALSE));

	MOCKER(V_AllocMsg)
	    .stubs()
		.will(returnValue((void*)&aucData[0]));

	MOCKER(V_SendMsg)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

	// ���ñ��⺯��
	EXPECT_EQ(VOS_OK, uttest_SI_PIH_UiccAuthReq_case5());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_AccessUICCFileReq_001
������������      : Client Idת��ʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2014-03-24
  ��   ��  : h59254
  �޸����� : GBA��Ŀ����
*******************************************************************/
TEST(Test_SI_PIH_AccessUICCFileReq1, UT)
{
	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	// ���ñ��⺯��
	EXPECT_EQ(VOS_OK, uttest_SI_PIH_AccessUICCFileReq_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_AccessUICCFileReq_002
������������      : ��Ȩ����Ϊ��ָ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2014-03-24
  ��   ��  : h59254
  �޸����� : GBA��Ŀ����
*******************************************************************/
TEST(Test_SI_PIH_AccessUICCFileReq2, UT)
{
	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
        .stubs()
        .will(returnValue((unsigned int)VOS_FALSE));

	// ���ñ��⺯��
	EXPECT_EQ(VOS_OK, uttest_SI_PIH_AccessUICCFileReq_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_AccessUICCFileReq_003
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2014-03-24
  ��   ��  : h59254
  �޸����� : GBA��Ŀ����
*******************************************************************/
TEST(Test_SI_PIH_AccessUICCFileReq3, UT)
{
	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
        .stubs()
        .will(returnValue((unsigned int)VOS_FALSE));

	MOCKER(V_AllocMsg)
	    .stubs()
		.will(returnValue((void*)VOS_NULL_PTR));

	// ���ñ��⺯��
	EXPECT_EQ(VOS_OK, uttest_SI_PIH_AccessUICCFileReq_case3());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_AccessUICCFileReq_005
������������      : ������Ϣ�ɹ�
Ԥ�ڽ��          : ��������TAF_SUCCESS
�޸���ʷ          :
1.��   ��  : 2014-03-24
  ��   ��  : h59254
  �޸����� : GBA��Ŀ����
*******************************************************************/
TEST(Test_SI_PIH_AccessUICCFileReq4, UT)
{

	// ��������
	unsigned char	                    aucData[1000];

	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
        .stubs()
        .will(returnValue((unsigned int)VOS_FALSE));

	MOCKER(V_AllocMsg)
	    .stubs()
		.will(returnValue((void*)&aucData[0]));

	MOCKER(V_SendMsg)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

	// ���ñ��⺯��
	EXPECT_EQ(VOS_OK, uttest_SI_PIH_AccessUICCFileReq_case4());


    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_SI_PIH_AccessUICCFileReq_004
������������      : ������Ϣʧ��
Ԥ�ڽ��          : ��������TAF_FAILURE
�޸���ʷ          :
1.��   ��  : 2014-03-24
  ��   ��  : h59254
  �޸����� : GBA��Ŀ����
*******************************************************************/
TEST(Test_SI_PIH_AccessUICCFileReq5, UT)
{

	// ��������
	unsigned char	                    aucData[1000];

	MOCKER(AT_GetModemIdFromClient)
	    .stubs()
		.will(returnValue((unsigned int)VOS_OK));

    MOCKER(SI_PIH_IsSvlte)
        .stubs()
        .will(returnValue((unsigned int)VOS_FALSE));

	MOCKER(V_AllocMsg)
	    .stubs()
		.will(returnValue((void*)&aucData[0]));

	MOCKER(V_SendMsg)
	    .stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	// ���ñ��⺯��
	EXPECT_EQ(VOS_OK, uttest_SI_PIH_AccessUICCFileReq_case5());


    GlobalMockObject::reset();
}


