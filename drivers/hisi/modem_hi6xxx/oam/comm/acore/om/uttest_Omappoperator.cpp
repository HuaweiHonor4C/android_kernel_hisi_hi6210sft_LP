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
    extern unsigned int NV_GetLength(unsigned short usID, unsigned int *pulLength);
    extern void OM_AcpuSendResultChannel(unsigned int enChannel, unsigned char ucFuncType,
        unsigned int ulResult, unsigned short usReturnPrimId);
    extern unsigned int GU_OamSndPcMsgToCcpu(void *pstCtrlInfo, unsigned char *pucData, unsigned int ulSize);
    extern void * V_MemAlloc( unsigned int ulInfo, unsigned char  ucPtNo, unsigned int ulSize,
                        unsigned int ulRebootFlag, unsigned int ulFileID, int usLineNo  );
    extern unsigned int NV_ReadEx(unsigned short           enModemID,
                            unsigned short                  usID,
                            void                   *pItem,
                            unsigned int                  ulLength);
    extern unsigned int NV_WriteEx(unsigned short          enModemID,
                            unsigned short                  usID,
                            void                    *pItem,
                            unsigned int                  ulLength);
    extern unsigned int V_MemFree( unsigned int ulInfo, void **ppAddr,
                          unsigned int ulFileID, int usLineNo );
    extern void OM_SendResult(unsigned char ucFuncType,
                            unsigned int ulResult, unsigned short usReturnPrimId);
    extern unsigned int NV_GetNVIdListNum(void);
    extern unsigned int NV_GetNVIdList(void *pstNvIdList);
    extern unsigned int OM_AcpuCbtEstablishProc(void *pstAppToOmMsg,
                                           unsigned short usReturnPrimId);
    extern unsigned int OM_AcpuCnfEstablishProc(void *pstAppToOmMsg,
                                           unsigned short usReturnPrimId);
    extern unsigned int OMRL_AcpuSendMsg(unsigned char *pucData, unsigned int ulDataLen, unsigned int ulSenderPid, unsigned int ulReceiverPid);
    extern void OM_AcpuSendResult(unsigned char ucFuncType,
                            unsigned int ulResult, unsigned short usReturnPrimId);
    extern void OM_NotifyOtherCpuReleaseLink(void);
    extern unsigned int OM_GetSlice(void);
    extern unsigned int OM_AcpuEstablishReq(void *pstAppToOmMsg,
                                           unsigned short usReturnPrimId);
    extern unsigned int OM_AcpuCbtReleaseProc(void *pstAppToOmMsg,
        unsigned short usReturnPrimId);
    extern unsigned int OM_AcpuCnfReleaseProc(void *pstAppToOmMsg,
        unsigned short usReturnPrimId);
    extern void OM_AcpuSendContentChannel(unsigned int enChannel,unsigned char ucFuncType,
        void *pstOmToAppMsg, unsigned short usReturnPrimId);

    extern unsigned int uttest_OM_AcpuReadNv_case1(void);
    extern unsigned int uttest_OM_AcpuReadNv_case2(void);
    extern unsigned int uttest_OM_AcpuReadNv_case3(void);
    extern unsigned int uttest_OM_AcpuReadNv_case4(void);
    extern unsigned int uttest_OM_AcpuWriteNv_case1(void);
    extern unsigned int uttest_OM_AcpuWriteNv_case2(void);
    extern unsigned int uttest_OM_AcpuWriteNv_case3(void);
    extern unsigned int uttest_OM_AcpuGetNvIdList_case1(void);
    extern unsigned int uttest_OM_AcpuGetNvIdList_case2(void);
    extern unsigned int uttest_OM_AcpuGetNvIdList_case3(void);
    extern unsigned int uttest_OM_AcpuGetNvIdList_case4(void);
    extern unsigned int uttest_OM_IsAcpuAuthNv_case1(void);
    extern unsigned int uttest_OM_IsAcpuAuthNv_case2(void);
    extern unsigned int uttest_OM_AcpuCbtEstablishProc_case1(void);
    extern unsigned int uttest_OM_AcpuCbtEstablishProc_case2(void);
    extern unsigned int uttest_OM_AcpuCnfEstablishProc_case1(void);
    extern unsigned int uttest_OM_AcpuCnfEstablishProc_case2(void);
    extern unsigned int uttest_OM_AcpuReleaseReq_case1(void);
    extern unsigned int uttest_OM_AcpuReleaseReq_case2(void);
    extern unsigned int uttest_OM_AcpuEstablishReq_case1(void);
    extern unsigned int uttest_OM_AcpuEstablishReq_case2(void);
    extern void uttest_OM_NotifyOtherCpuReleaseLink_case1(void);
    extern unsigned int uttest_OM_AcpuCbtReleaseProc_case1(void);
    extern unsigned int uttest_OM_AcpuCnfReleaseProc_case1(void);
    extern unsigned int uttest_OM_AcpuCnfReleaseProc_case2(void);
    extern void uttest_OM_AcpuQueryMsgProc_case1(void);
    extern void uttest_OM_AcpuQueryMsgProc_case2(void);
    extern void uttest_OmAcpuShowOnOff_case1(void);

#ifdef __cplusplus
}
#endif

#ifndef VOS_OK
#define VOS_OK                          0
#endif

#ifndef VOS_ERR
#define VOS_ERR                         1
#endif

#ifndef NV_OK
#define NV_OK                           0
#endif

#ifndef MODEM_ID_0
#define MODEM_ID_0                      0
#endif

#ifndef MODEM_ID_1
#define MODEM_ID_1                      1
#endif

#ifndef MODEM_ID_BUTT
#define MODEM_ID_BUTT                   2
#endif

#ifndef VOS_YES
#define VOS_YES                         1
#endif

#ifndef VOS_NO
#define VOS_NO                          0
#endif

#ifndef VOS_NULL_PTR
#define VOS_NULL_PTR                    (0L)
#endif


/*******************************************************************
�����������      : OM_AcpuReadNv
������������      : ��ȡNV�ĳ��ȴ���
Ԥ�ڽ��          : ��¼���󣬺�������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(OM_AcpuReadNv1, UT)
{
    unsigned int                ulResult;

    MOCKER(NV_GetLength)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    MOCKER(OM_AcpuSendResultChannel)
        .expects(exactly(1));

    ulResult = ((5<<16) + VOS_ERR);

    EXPECT_EQ(ulResult, uttest_OM_AcpuReadNv_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : OM_AcpuReadNv
������������      : �ڴ��������
Ԥ�ڽ��          : ��¼���󣬺�������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(OM_AcpuReadNv2, UT)
{
    unsigned int        ulNVLen = 10;

    MOCKER(NV_GetLength)
        .stubs()
        .with(any(), outBoundP(&ulNVLen))
        .will(returnValue((unsigned int)NV_OK));

    MOCKER(V_MemAlloc)
        .stubs()
        .will(returnValue((void *)VOS_NULL_PTR));

    MOCKER(OM_AcpuSendResultChannel)
        .expects(exactly(1));

    EXPECT_EQ(VOS_ERR, uttest_OM_AcpuReadNv_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : OM_AcpuReadNv
������������      : NV��ȡ����
Ԥ�ڽ��          : ��¼���󣬺�������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(OM_AcpuReadNv3, UT)
{
    unsigned int                ulNVLen = 10;
    unsigned int                ulResult;
    unsigned char               aucCnf[1024];

    MOCKER(NV_GetLength)
        .stubs()
        .with(any(), outBoundP(&ulNVLen))
        .will(returnValue((unsigned int)NV_OK));

    MOCKER(V_MemAlloc)
        .stubs()
        .will(returnValue((void *)aucCnf));

    MOCKER(NV_ReadEx)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    MOCKER(OM_AcpuSendResultChannel)
        .expects(exactly(1));

    MOCKER(V_MemFree)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

    ulResult = ((5<<16) + VOS_ERR);

    EXPECT_EQ(ulResult, uttest_OM_AcpuReadNv_case3());

    GlobalMockObject::reset();
}


/*******************************************************************
�����������      : OM_AcpuReadNv
������������      : NV��ȡOK
Ԥ�ڽ��          : ��¼���󣬺�������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(OM_AcpuReadNv4, UT)
{
    unsigned char               aucCnf[1024];
    unsigned int                ulNVLen = 10;

    MOCKER(NV_GetLength)
        .stubs()
        .with(any(), outBoundP(&ulNVLen))
        .will(returnValue((unsigned int)NV_OK));

    MOCKER(V_MemAlloc)
        .stubs()
        .will(returnValue((void *)aucCnf));

    MOCKER(NV_ReadEx)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(OM_AcpuSendContentChannel)
        .expects(exactly(1));

    MOCKER(V_MemFree)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

    EXPECT_EQ(VOS_OK, uttest_OM_AcpuReadNv_case4());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : OM_AcpuWriteNv
������������      : NV��Ҫ��Ȩ
Ԥ�ڽ��          : ��¼���󣬺�������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(OM_AcpuWriteNv1, UT)
{
    MOCKER(OM_AcpuSendResultChannel)
        .expects(exactly(1));

    EXPECT_EQ(VOS_ERR, uttest_OM_AcpuWriteNv_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : OM_AcpuWriteNv
������������      : NV����ʧ��
Ԥ�ڽ��          : ��¼���󣬺�������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(OM_AcpuWriteNv2, UT)
{
    MOCKER(NV_WriteEx)
        .stubs()
        .with(eq((unsigned short)MODEM_ID_0), any(), any(), any())
        .will(returnValue((unsigned int)VOS_ERR));

    MOCKER(OM_AcpuSendResultChannel)
        .expects(exactly(1));

    EXPECT_EQ(VOS_ERR, uttest_OM_AcpuWriteNv_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : OM_AcpuWriteNv
������������      : NV����OK
Ԥ�ڽ��          : ��¼���󣬺�������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(OM_AcpuWriteNv3, UT)
{
    MOCKER(NV_WriteEx)
        .stubs()
        .with(eq((unsigned short)MODEM_ID_0), any(), any(), any())
        .will(returnValue((unsigned int)NV_OK));

    MOCKER(OM_AcpuSendResultChannel)
        .expects(exactly(1));

    EXPECT_EQ(VOS_OK, uttest_OM_AcpuWriteNv_case3());

    GlobalMockObject::reset();
}


/*****************************************************************************
* �� �� ��  : OM_AcpuGetNvIdList
*
* ��������  : ��������
*
* ��������  : ��
*
* �������  : ��
*
* �ж�����  : ��ʼ�����
*****************************************************************************/
TEST(OM_AcpuGetNvIdList1, UT)
{
    unsigned char               aucNv[1024];

    MOCKER(NV_GetNVIdListNum)
        .stubs()
        .will(returnValue((unsigned int)2));

    MOCKER(NV_GetNVIdList)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(V_MemAlloc)
        .stubs()
        .will(returnValue((void *)aucNv));

    MOCKER(OM_AcpuSendContentChannel)
        .expects(exactly(1));

    MOCKER(V_MemFree)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

    EXPECT_EQ(VOS_OK, uttest_OM_AcpuGetNvIdList_case1());


    GlobalMockObject::reset();
}

/*****************************************************************************
* �� �� ��  : OM_AcpuGetNvIdList
*
* ��������  : û��NV
*
* ��������  : ��
*
* �������  : ��
*
* �ж�����  : ��ʼ�����
*****************************************************************************/
TEST(OM_AcpuGetNvIdList2, UT)
{
    MOCKER(NV_GetNVIdListNum)
        .stubs()
        .will(returnValue((unsigned int)0));

    MOCKER(OM_AcpuSendResultChannel)
        .expects(exactly(1));

    EXPECT_EQ(VOS_ERR, uttest_OM_AcpuGetNvIdList_case2());

    GlobalMockObject::reset();
}

/*****************************************************************************
* �� �� ��  : OM_AcpuGetNvIdList
*
* ��������  : ����ռ�ʧ��
*
* ��������  : ��
*
* �������  : ��
*
* �ж�����  : ��ʼ�����
*****************************************************************************/
TEST(OM_AcpuGetNvIdList3, UT)
{
    MOCKER(NV_GetNVIdListNum)
        .stubs()
        .will(returnValue((unsigned int)2));

    MOCKER(V_MemAlloc)
        .stubs()
        .will(returnValue((void *)VOS_NULL_PTR));

    MOCKER(OM_AcpuSendResultChannel)
        .expects(exactly(1));

    EXPECT_EQ(VOS_ERR, uttest_OM_AcpuGetNvIdList_case3());

    GlobalMockObject::reset();
}

/*****************************************************************************
* �� �� ��  : OM_AcpuGetNvIdList
*
* ��������  : ��ȡNV��Ⱥ��б�ʧ��
*
* ��������  : ��
*
* �������  : ��
*
* �ж�����  : ��ʼ�����
*****************************************************************************/
TEST(OM_AcpuGetNvIdList4, UT)
{
    unsigned char               aucNv[1024];

    MOCKER(NV_GetNVIdListNum)
        .stubs()
        .will(returnValue((unsigned int)2));

    MOCKER(NV_GetNVIdList)
        .stubs()
        .will(returnValue((int)VOS_ERR));

    MOCKER(V_MemAlloc)
        .stubs()
        .will(returnValue((void *)aucNv));

    MOCKER(OM_AcpuSendResultChannel)
        .expects(exactly(1));

    MOCKER(V_MemFree)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

    EXPECT_EQ(VOS_ERR, uttest_OM_AcpuGetNvIdList_case4());

    GlobalMockObject::reset();
}

/*****************************************************************************
* �� �� ��  : OM_IsAcpuAuthNv
*
* ��������  : ���ڼ�Ȩ�б���
*
* ��������  : ��
*
* �������  : ��
*
* �ж�����  : ��ʼ�����
*****************************************************************************/
TEST(OM_IsAcpuAuthNv1, UT)
{
    EXPECT_EQ(VOS_NO, uttest_OM_IsAcpuAuthNv_case1());

    GlobalMockObject::reset();
}

/*****************************************************************************
* �� �� ��  : OM_IsAcpuAuthNv
*
* ��������  : �ڼ�Ȩ�б���
*
* ��������  : ��
*
* �������  : ��
*
* �ж�����  : ��ʼ�����
*****************************************************************************/
TEST(OM_IsAcpuAuthNv2, UT)
{
    EXPECT_EQ(VOS_YES, uttest_OM_IsAcpuAuthNv_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_OM_AcpuCbtEstablishProc1
������������      : ��CCPU���ͽ�����Ϣʧ��
Ԥ�ڽ��          : ��������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(Test_OM_AcpuCbtEstablishProc1, UT)
{
    MOCKER(GU_OamSndPcMsgToCcpu)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    MOCKER(OM_AcpuSendResultChannel)
        .expects(exactly(1));

    // ִ�м��
    EXPECT_EQ(VOS_OK, uttest_OM_AcpuCbtEstablishProc_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_OM_AcpuCbtEstablishProc2
������������      : ��CCPU���ͽ�����Ϣ�ɹ�
Ԥ�ڽ��          : ��������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(Test_OM_AcpuCbtEstablishProc2, UT)
{
    MOCKER(GU_OamSndPcMsgToCcpu)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(OM_AcpuSendResultChannel)
        .expects(exactly(1));

    // ִ�м��
    EXPECT_EQ(VOS_OK, uttest_OM_AcpuCbtEstablishProc_case2());

    GlobalMockObject::reset();
}


/*******************************************************************
�����������      : Test_OM_AcpuCnfEstablishProc1
������������      : ��CCPU���ͽ�����Ϣʧ��
Ԥ�ڽ��          : ��������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(Test_OM_AcpuCnfEstablishProc1, UT)
{
    MOCKER(GU_OamSndPcMsgToCcpu)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    MOCKER(OM_AcpuSendResultChannel)
        .expects(exactly(1));

    // ִ�м��
    EXPECT_EQ(VOS_OK, uttest_OM_AcpuCnfEstablishProc_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_OM_AcpuCnfEstablishProc2
������������      : ��CCPU���ͽ�����Ϣ�ɹ�
Ԥ�ڽ��          : ��������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(Test_OM_AcpuCnfEstablishProc2, UT)
{
    MOCKER(GU_OamSndPcMsgToCcpu)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(OM_AcpuSendResultChannel)
        .expects(exactly(1));

    // ִ�м��
    EXPECT_EQ(VOS_OK, uttest_OM_AcpuCnfEstablishProc_case2());

    GlobalMockObject::reset();
}
#if 0
/*******************************************************************
�����������      : Test_OM_AcpuEstablishReq_001
������������      : ��ӦCBTͨ��
Ԥ�ڽ��          : ��¼���󣬺�������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(OM_AcpuEstablishReq1, UT)
{
    // ���ñ��⺯��
    MOCKER(OM_AcpuCbtEstablishProc)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

    // ִ�м��
    EXPECT_EQ(VOS_OK, uttest_OM_AcpuEstablishReq_case1());

    GlobalMockObject::reset();
}
#endif

/*******************************************************************
�����������      : OM_AcpuEstablishReq2
������������      : ��ӦCFGͨ��
Ԥ�ڽ��          : ��¼���󣬺�������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(OM_AcpuEstablishReq2, UT)
{
    // ���ñ��⺯��
    MOCKER(OM_AcpuCnfEstablishProc)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

    // ִ�м��
    EXPECT_EQ(VOS_OK, uttest_OM_AcpuEstablishReq_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : OM_NotifyOtherCpuReleaseLink1
������������      : ֪ͨ���ӶϿ�
Ԥ�ڽ��          : ��¼���󣬺�������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(OM_NotifyOtherCpuReleaseLink1, UT)
{
    // ���ñ��⺯��
    MOCKER(OMRL_AcpuSendMsg)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

    // ִ�м��
    uttest_OM_NotifyOtherCpuReleaseLink_case1();

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : OM_AcpuCbtReleaseProc1
������������      : CBTͨ���Ͽ�
Ԥ�ڽ��          : ��¼���󣬺�������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(OM_AcpuCbtReleaseProc1, UT)
{
    // ���ñ��⺯��
    MOCKER(GU_OamSndPcMsgToCcpu)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

    // ִ�м��
    EXPECT_EQ(VOS_OK, uttest_OM_AcpuCbtReleaseProc_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : OM_AcpuCnfReleaseProc1
������������      : CFGͨ���Ͽ�����������Ϣʧ��
Ԥ�ڽ��          : ��¼���󣬺�������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(OM_AcpuCnfReleaseProc1, UT)
{
    // ���ñ��⺯��
    MOCKER(GU_OamSndPcMsgToCcpu)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_ERR));

    MOCKER(OM_NotifyOtherCpuReleaseLink)
        .expects(exactly(1));

    MOCKER(OM_GetSlice)
        .expects(exactly(1))
        .will(returnValue((unsigned int)0));

        // ִ�м��
    EXPECT_EQ(VOS_OK, uttest_OM_AcpuCnfReleaseProc_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : OM_AcpuCnfReleaseProc2
������������      : CFGͨ���ϣ�������Ϣ�ɹ�
Ԥ�ڽ��          : ��¼���󣬺�������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(OM_AcpuCnfReleaseProc2, UT)
{
    // ���ñ��⺯��
    MOCKER(GU_OamSndPcMsgToCcpu)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(OM_NotifyOtherCpuReleaseLink)
        .expects(exactly(1));

    MOCKER(OM_GetSlice)
        .expects(exactly(1))
        .will(returnValue((unsigned int)0));

        // ִ�м��
    EXPECT_EQ(VOS_OK, uttest_OM_AcpuCnfReleaseProc_case2());

    GlobalMockObject::reset();
}



/*******************************************************************
�����������      : Test_OM_ReleaseReq_001
������������      : ͨ��ICCͨ��֪ͨCCPU��·�Ͽ�ʧ��
Ԥ�ڽ��          : ��¼���󣬺�������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(Test_OM_AcpuReleaseReq1, UT)
{
    MOCKER(OM_AcpuCbtReleaseProc)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(OM_AcpuCnfReleaseProc)
        .expects(exactly(0))
        .will(returnValue((unsigned int)VOS_OK));

    // ִ�м��
    EXPECT_EQ(VOS_OK, uttest_OM_AcpuReleaseReq_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_OM_ReleaseReq_002
������������      : ������CPU������·�Ͽ���Ϣ�ɹ�
Ԥ�ڽ��          : ��������VOS_OK
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(Test_OM_AcpuReleaseReq2, UT)
{
    MOCKER(OM_AcpuCbtReleaseProc)
        .expects(exactly(0))
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(OM_AcpuCnfReleaseProc)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

    // ִ�м��
    EXPECT_EQ(VOS_OK, uttest_OM_AcpuReleaseReq_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_OM_AcpuQueryMsgProc1
������������      : ��ѯ��Ϣ����
Ԥ�ڽ��          :
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(Test_OM_AcpuQueryMsgProc1, UT)
{
    MOCKER(OM_AcpuSendResult)
        .expects(exactly(0));

    MOCKER(OM_AcpuEstablishReq)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

    // ���ñ��⺯��
    uttest_OM_AcpuQueryMsgProc_case1();


    // ִ�м��

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_OM_AcpuQueryMsgProc2
������������      : δ�ҵ���Ϣ������
Ԥ�ڽ��          :
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(Test_OM_AcpuQueryMsgProc2, UT)
{
    MOCKER(OM_AcpuSendResult)
        .expects(exactly(1));

    // ���ñ��⺯��
    uttest_OM_AcpuQueryMsgProc_case2();

    // ִ�м��

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : Test_OmAcpuShowOnOff1
������������      : �鿴��·����״̬
Ԥ�ڽ��          :
�޸���ʷ          :
1.��   ��  : 2012-08-14
  ��   ��  : J00168360
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ��������
*******************************************************************/
TEST(Test_OmAcpuShowOnOff1, UT)
{
    uttest_OmAcpuShowOnOff_case1();

    // ִ�м��

    GlobalMockObject::reset();
}




