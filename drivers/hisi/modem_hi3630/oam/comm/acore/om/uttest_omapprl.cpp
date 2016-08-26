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
extern unsigned int PPM_DisconnectGUPort(unsigned int enChannel);
extern unsigned int GU_OamSndPcMsgToCcpu(void *pstCtrlInfo, unsigned char *pucData, unsigned int ulSize);
extern unsigned int V_SendMsg(unsigned int Pid, void **ppMsg, unsigned int ulFileID, int lLineNo);
extern unsigned int V_FreeMsg(unsigned int Pid, void **ppMsg, unsigned int ulFileID, int usLineNo);
extern void * V_MemAlloc(unsigned int ulInfo, unsigned char ucPtNo, unsigned int ulSize, unsigned int ulRebootFlag, unsigned int ulFileID, int usLineNo);
extern unsigned int OMRL_AcpuMsgDispatch(void* pstCtrlInfo);
extern unsigned int OMRL_AcpuHeadProc(void *pstCtrlInfo, unsigned char *pucData, unsigned int ulSize);
extern unsigned int OMRL_RcvChannelData(void *pstCtrlInfo, unsigned char *pucData, unsigned int ulSize);
extern void OM_AcpuAddSNTime(unsigned int  *pulSN, unsigned int  *pulTimeStamp);
extern void BSP_SOCP_GetEncSrcReg(unsigned int *pulData, unsigned int ulDataMax);
extern unsigned int OM_AcpuSendData(void *pucMsg, unsigned short usMsgLen);
extern unsigned int OM_AcpuEvent(void* pstEvent);
extern unsigned int VOS_SmP(unsigned int Sm_ID, unsigned int ulTimeOutInMillSec);
extern unsigned int VOS_SmV(unsigned int Sm_ID);
extern unsigned int Om_HdlcEncap(const unsigned char *pucSrc, unsigned short usSrcLen, unsigned char  *pucDest, unsigned short  usDestBuffLen, unsigned short *pusDestLen);
extern unsigned int CBTPPM_OamCbtPortDataSnd(unsigned char *pucVirAddr, unsigned char *pucPhyAddr, unsigned int ulDataLen);
extern unsigned int SCM_RlsSrcRDAll(unsigned int enChanlID, unsigned long *pDataPhyAddr, unsigned int *pulDataLen);
extern void * OM_AddrRealToVirt(void *pstBufCtrl, unsigned char *pucRealAddr);
extern void * OM_AddrVirtToReal(void *pstBufCtrl, unsigned char *pucVirtAddr);
extern unsigned int OM_ReleaseTraceMem(void *pstBufCtrl, void *pAddr, int lLen);
extern void* OM_AllocTraceMem(void *pstBufCtrl, int lLen);
extern void VOS_FlushCpuWriteBuf(void);
extern unsigned int SCM_SendCoderSrc(unsigned int enChanlID, unsigned char *pucSendDataPhy, unsigned int ulSendLen);
extern int OM_TraceMemNBytes(void *pstBufCtrl);
extern unsigned int SCM_GetBDFreeNum(unsigned int enChanlID, unsigned int *pulBDNum);
extern unsigned int OMRL_AcpuSendSocpData(void *pstCtrlInfo, unsigned char *pucHead, unsigned int ulHeadLen, unsigned char *pucData, unsigned int ulDataLen);
extern unsigned int mdrv_rtc_get_value(void);
extern unsigned int OMRL_AcpuReleaseSocpData(void *pstCtrlInfo);
extern unsigned int OMRL_AcpuIsBDEnough(void *pstCtrlInfo, unsigned char ucMsgCnt);
extern unsigned int OMRL_AcpuProcessSendData(void *pstCtrlInfo, unsigned char *pucMsg, unsigned char ucMsgCnt, unsigned short usMsgLen);

extern unsigned int uttest_OMRL_JudgeCbtMsg_case1(void);
extern unsigned int uttest_OMRL_JudgeCbtMsg_case2(void);
extern unsigned int uttest_OMRL_AcpuMsgDispatch_case1(void);
extern unsigned int uttest_OMRL_AcpuMsgDispatch_case2(void);
extern unsigned int uttest_OMRL_AcpuMsgDispatch_case3(void);
extern unsigned int uttest_OMRL_AcpuMsgDispatch_case4(void);
extern unsigned int uttest_OMRL_AcpuMsgDispatch_case5(void);
extern unsigned int uttest_OMRL_AcpuMsgDispatch_case6(void);
extern unsigned int uttest_OMRL_AcpuMsgCombine_case1(void);
extern unsigned int uttest_OMRL_AcpuMsgCombine_case2(void);
extern unsigned int uttest_OMRL_AcpuMsgCombine_case3(void);
extern unsigned int uttest_OMRL_AcpuMsgCombine_case4(void);
extern unsigned int uttest_OMRL_AcpuMsgCombine_case5(void);
extern unsigned int uttest_OMRL_AcpuMsgCombine_case6(void);
extern unsigned int uttest_OMRL_AcpuMsgCombine_case7(void);
extern unsigned int uttest_OMRL_RcvChannelData_case1(void);
extern unsigned int uttest_OMRL_RcvCbtChannel_case1(void);
extern unsigned int uttest_OMRL_RcvCnfChannel_case1(void);
extern void uttest_OMRL_AcpuConnectInfoReportEvent_case1(void);
extern void uttest_OMRL_AcpuConnectInfoReportEvent_case2(void);
extern unsigned int uttest_OMRL_AcpuReportEvent_case1(void);
extern unsigned int uttest_OMRL_AcpuReportEvent_case2(void);
extern unsigned int uttest_OMRL_AcpuReportEvent_case3(void);
extern unsigned int uttest_OMRL_AcpuSendCbtData_case1(void);
extern unsigned int uttest_OMRL_AcpuSendCbtData_case2(void);
extern unsigned int uttest_OMRL_AcpuSendCbtData_case3(void);
extern unsigned int uttest_OMRL_AcpuReleaseSocpData_case1(void);
extern unsigned int uttest_OMRL_AcpuReleaseSocpData_case2(void);
extern unsigned int uttest_OMRL_AcpuReleaseSocpData_case3(void);
extern unsigned int uttest_OMRL_AcpuReleaseSocpData_case4(void);
extern unsigned int uttest_OMRL_AcpuReleaseSocpData_case5(void);
extern unsigned int uttest_OMRL_AcpuSendSocpData_case1(void);
extern unsigned int uttest_OMRL_AcpuSendSocpData_case2(void);
extern unsigned int uttest_OMRL_AcpuSendSocpData_case3(void);
extern unsigned int uttest_OMRL_AcpuSendSocpData_case4(void);
extern unsigned int uttest_OMRL_AcpuIsBDEnough_case1(void);
extern unsigned int uttest_OMRL_AcpuIsBDEnough_case2(void);
extern unsigned int uttest_OMRL_AcpuIsBDEnough_case3(void);
extern unsigned int uttest_OMRL_AcpuProcessSendData_case1(void);
extern unsigned int uttest_OMRL_AcpuProcessSendData_case2(void);
extern unsigned int uttest_OMRL_AcpuProcessSendData_case3(void);
extern unsigned int uttest_OMRL_AcpuProcessSendData_case4(void);
extern unsigned int uttest_OMRL_AcpuProcessSendData_case5(void);
extern unsigned int uttest_OMRL_AcpuProcessSendData_case6(void);
extern unsigned int uttest_OMRL_AcpuMsgSplit_case1(void);
extern unsigned int uttest_OMRL_AcpuMsgSplit_case2(void);
extern unsigned int uttest_OMRL_AcpuMsgSplit_case3(void);
extern unsigned int uttest_OMRL_AcpuMsgSplit_case4(void);
extern void uttest_OMRL_Show_case1(void);
extern void * V_MemCpy( void * Dest, const void * Src, unsigned int Count,
					   unsigned int ulFileID, int usLineNo );
extern int VOS_MemCmp( const void * Dest, const void * Src, unsigned int Count );
extern unsigned int OMRL_AcpuMsgCombine(void *pstCtrlInfo, unsigned char *pucData, unsigned short usLen);
extern void * V_MemSet( void * ToSet, unsigned char Char, unsigned int Count,
					   unsigned int ulFileID, int usLineNo );

extern unsigned int  VOS_SmMCreate( unsigned char acSmName[4],
								   unsigned int ulFlags,
								   void  *pSmID );

extern unsigned int uttest_OMRL_AcpuHeadProc_case1(void);
extern unsigned int uttest_OMRL_AcpuHeadProc_case2(void);
extern unsigned int uttest_OMRL_AcpuHeadProc_case3(void);
extern unsigned int uttest_OMRL_AcpuHeadProc_case4(void);
extern unsigned int uttest_OMRL_AcpuHeadProc_case5(void);

extern unsigned int uttest_OMRL_AcpuUsbFrameInit_case1(void);

extern void *VOS_UnCacheMemAlloc(unsigned int ulSize, void *pulRealAddr);

extern unsigned int OM_CreateTraceBuffer(void *pstBufCtrl, int lBufSize);

extern void uttest_OmAcpuInitVar_case1(void);

extern void OmAcpuInitVar(void);

extern unsigned int uttest_OMRL_AcpuInit_case1(void);

extern unsigned int OMRL_AcpuUsbFrameInit(void);
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
*������:��OM_FS_FUNC�����ж��Ƿ�ΪCBT����
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_JudgeCbtMsg1, UT)
{
	EXPECT_EQ(1 /*VOS_TRUE*/, uttest_OMRL_JudgeCbtMsg_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:��OM_AIR_FUNC�����ж��Ƿ�ΪCBT����
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_JudgeCbtMsg2, UT)
{
	EXPECT_EQ(0 /*VOS_FALSE*/, uttest_OMRL_JudgeCbtMsg_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:��CBTͨ�����յ���CBT������
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuMsgDispatch1, UT)
{
	MOCKER(PPM_DisconnectGUPort)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));;

	EXPECT_EQ(VOS_OK, uttest_OMRL_AcpuMsgDispatch_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:���͸�CCPU�ķ�CBT��Ϣ
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuMsgDispatch3, UT)
{
	MOCKER(GU_OamSndPcMsgToCcpu)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(V_FreeMsg)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_OMRL_AcpuMsgDispatch_case3());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:���͸�ACPU����Ϣ
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuMsgDispatch4, UT)
{
	MOCKER(V_SendMsg)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_OMRL_AcpuMsgDispatch_case4());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:���͸�HIFI OM����Ϣ
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuMsgDispatch5, UT)
{
	MOCKER(V_SendMsg)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_OMRL_AcpuMsgDispatch_case5());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:���͸�����ģ�����Ϣ������ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuMsgDispatch6, UT)
{
	MOCKER(V_SendMsg)
		.expects(once())
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuMsgDispatch_case6());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:ACPU�������������Ϊ��ָ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuMsgCombine1, UT)
{
	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuMsgCombine_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:ACPU��������ݳ��Ȳ���ȷ
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuMsgCombine2, UT)
{
	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuMsgCombine_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:ACPU������յ������ݰ��еķֶ�����ָʾ���һ���е�ָʾ��ƥ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuMsgCombine3, UT)
{
	MOCKER(V_FreeMsg)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuMsgCombine_case3());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:ACPU������յ������ݰ��еķֶκ���Ԥ�ڵķֶβ�ƥ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuMsgCombine4, UT)
{
	MOCKER(V_FreeMsg)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuMsgCombine_case4());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:ACPU������յ������ݳ��ȳ����ܳ���
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuMsgCombine5, UT)
{
	MOCKER(V_FreeMsg)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuMsgCombine_case5());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:ACPU����������ɺ��жϴ�����ֵ
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuMsgCombine6, UT)
{
	MOCKER(V_FreeMsg)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuMsgCombine_case6());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:ACPU����������ɺ���зַ�����
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuMsgCombine7, UT)
{
	MOCKER(OMRL_AcpuMsgDispatch)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_OMRL_AcpuMsgCombine_case7());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:ACPU����ͨ���ϵ�����
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_RcvChannelData1, UT)
{
	MOCKER(OMRL_AcpuHeadProc)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_OMRL_RcvChannelData_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:ACPU����CBTͨ���ϵ�����,�����ص��лؾ������
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_RcvCbtChannel1, UT)
{
	MOCKER(OMRL_RcvChannelData)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_OMRL_RcvCbtChannel_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:ACPU����CNFͨ���ϵ�����,�����ص��лؾ������
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_RcvCnfChannel1, UT)
{
	MOCKER(OMRL_RcvChannelData)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_OMRL_RcvCnfChannel_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:�����ڴ�ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuConnectInfoReportEvent1, UT)
{
	MOCKER(V_MemAlloc)
		.expects(once())
		.will(returnValue((void *)0));

	uttest_OMRL_AcpuConnectInfoReportEvent_case1();

	GlobalMockObject::reset();
}

/*******************************************************************
*������:�ϱ���ǰ��������Ϣ
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuConnectInfoReportEvent2, UT)
{
	char							aucMem[6000];

	MOCKER(V_MemAlloc)
		.expects(once())
		.will(returnValue((void *)aucMem));

	MOCKER(OM_AcpuAddSNTime)
		.expects(once());

	MOCKER(BSP_SOCP_GetEncSrcReg)
		.expects(once());

	MOCKER(OM_AcpuSendData)
		.expects(once())
		.will(returnValue((unsigned int)VOS_ERR));

	MOCKER(V_FreeMsg)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	uttest_OMRL_AcpuConnectInfoReportEvent_case2();

	GlobalMockObject::reset();
}

/*******************************************************************
*������:�����ڴ�ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuReportEvent1, UT)
{
	MOCKER(V_MemAlloc)
		.expects(once())
		.will(returnValue((void *)0));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuReportEvent_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:�����ڴ������ڴ�ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuReportEvent2, UT)
{
	char							aucMem[3000];

	MOCKER(V_MemAlloc)
		.expects(exactly(2))
		.will(returnObjectList((void *)aucMem, (void *)0));

	MOCKER(V_FreeMsg)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(OM_AcpuEvent)
		.stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuReportEvent_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:�¼����ͳɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuReportEvent3, UT)
{
	char							aucMem[3000];

	MOCKER(V_MemAlloc)
		.expects(exactly(2))
		.will(returnValue((void *)aucMem));

	MOCKER(V_FreeMsg)
		.expects(exactly(2))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(OM_AcpuEvent)
		.stubs()
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_OK, uttest_OMRL_AcpuReportEvent_case3());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:��ȡ�ź���ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuSendCbtData1, UT)
{
	MOCKER(VOS_SmP)
		.expects(once())
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuSendCbtData_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:HDLC��װʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuSendCbtData2, UT)
{
	MOCKER(VOS_SmP)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(VOS_SmV)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(Om_HdlcEncap)
		.expects(once())
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuSendCbtData_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:HDLC��װ�ɹ������ݷ��ͳɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuSendCbtData3, UT)
{
	MOCKER(VOS_SmP)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(VOS_SmV)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(Om_HdlcEncap)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(CBTPPM_OamCbtPortDataSnd)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_OMRL_AcpuSendCbtData_case3());

	GlobalMockObject::reset();
}


/*******************************************************************
*������:��������ѷ���RDʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuReleaseSocpData1, UT)
{
	MOCKER(SCM_RlsSrcRDAll)
		.expects(once())
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuReleaseSocpData_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:�Ѿ�û��RD
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuReleaseSocpData2, UT)
{
    unsigned long                       DataAddr = 0;
    unsigned int                        ulDataLen = 0;

	MOCKER(SCM_RlsSrcRDAll)
		.expects(once())
		.with(any(), outBoundP(&DataAddr), outBoundP(&ulDataLen))
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_OMRL_AcpuReleaseSocpData_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:��ʵ��ַת������
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuReleaseSocpData3, UT)
{
    unsigned long                       DataAddr = 0x3000000;
    unsigned int                        ulDataLen = 1000;

	MOCKER(SCM_RlsSrcRDAll)
		.expects(once())
		.with(any(), outBoundP(&DataAddr), outBoundP(&ulDataLen))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(OM_AddrRealToVirt)
		.expects(once())
		.will(returnValue((void *)0));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuReleaseSocpData_case3());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:�����ѷ���RD�ܳ����ͷ��ڴ淵��ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuReleaseSocpData4, UT)
{
    unsigned long                       DataAddr = 0x3000000;
    unsigned int                        ulDataLen = 1000;

	MOCKER(SCM_RlsSrcRDAll)
		.expects(once())
		.with(any(), outBoundP(&DataAddr), outBoundP(&ulDataLen))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(OM_AddrRealToVirt)
		.expects(once())
		.will(returnValue((void *)0x3000000));

	MOCKER(OM_ReleaseTraceMem)
		.expects(once())
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuReleaseSocpData_case4());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:����ִ�гɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuReleaseSocpData5, UT)
{
    unsigned long                       DataAddr = 0x3000000;
    unsigned int                        ulDataLen = 1000;

	MOCKER(SCM_RlsSrcRDAll)
		.expects(once())
		.with(any(), outBoundP(&DataAddr), outBoundP(&ulDataLen))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(OM_AddrRealToVirt)
		.expects(once())
		.will(returnValue((void *)0x3000000));

	MOCKER(OM_ReleaseTraceMem)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_OMRL_AcpuReleaseSocpData_case5());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:�ӻ������з��������������ڴ�ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuSendSocpData1, UT)
{
	MOCKER(OM_AllocTraceMem)
		.expects(once())
		.will(returnValue((void *)0));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuSendSocpData_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:��ʵ��ַת������
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuSendSocpData2, UT)
{
	char								acuBuffer[1000];

	MOCKER(OM_AllocTraceMem)
		.expects(once())
		.will(returnValue((void *)acuBuffer));

	MOCKER(VOS_FlushCpuWriteBuf)
		.expects(once());

	MOCKER(OM_AddrVirtToReal)
		.expects(once())
		.will(returnValue((void *)0));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuSendSocpData_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:����SCM�ṩ�Ľӿڽ����ݷ��͸�SOCP
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuSendSocpData3, UT)
{
	char								acuBuffer[1000];

	MOCKER(OM_AllocTraceMem)
		.expects(once())
		.will(returnValue((void *)acuBuffer));

	MOCKER(VOS_FlushCpuWriteBuf)
		.expects(once());

	MOCKER(OM_AddrVirtToReal)
		.expects(once())
		.will(returnValue((void *)0x300000));

	MOCKER(SCM_SendCoderSrc)
		.expects(once())
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuSendSocpData_case3());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:����SCM�ṩ�Ľӿڽ����ݷ��͸�SOCP�ɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuSendSocpData4, UT)
{
	char								acuBuffer[1000];

	MOCKER(OM_AllocTraceMem)
		.expects(once())
		.will(returnValue((void *)acuBuffer));

	MOCKER(VOS_FlushCpuWriteBuf)
		.expects(once());

	MOCKER(OM_AddrVirtToReal)
		.expects(once())
		.will(returnValue((void *)0x300000));

	MOCKER(SCM_SendCoderSrc)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(OM_TraceMemNBytes)
		.expects(once())
		.will(returnValue((int)1000));

	EXPECT_EQ(VOS_OK, uttest_OMRL_AcpuSendSocpData_case4());

	GlobalMockObject::reset();
}


/*******************************************************************
*������:��ȡʣ��BD����ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuIsBDEnough1, UT)
{
	MOCKER(SCM_GetBDFreeNum)
		.expects(once())
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuIsBDEnough_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:��ȡʣ��BD��������
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuIsBDEnough2, UT)
{
	unsigned int                          ulFreeBdNum = 10;

	MOCKER(SCM_GetBDFreeNum)
		.expects(once())
		.with(any(), outBoundP(&ulFreeBdNum))
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuIsBDEnough_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:��ȡʣ��BD�����㹻����
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuIsBDEnough3, UT)
{
	unsigned int                          ulFreeBdNum = 1000;

	MOCKER(SCM_GetBDFreeNum)
		.expects(once())
		.with(any(), outBoundP(&ulFreeBdNum))
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_OMRL_AcpuIsBDEnough_case3());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:ACPU���ݷ��ͣ������ڴ�ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuProcessSendData1, UT)
{
	MOCKER(V_MemAlloc)
		.expects(once())
		.will(returnValue((void *)0));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuProcessSendData_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:ACPU���ݷ��ͣ���Ϣͷǰ���ϳ����Ų����뻷�λ�����ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuProcessSendData2, UT)
{
	char								aucMem[200];

	MOCKER(V_MemAlloc)
		.expects(once())
		.will(returnValue((void *)aucMem));

	MOCKER(OMRL_AcpuSendSocpData)
		.expects(once())
		.will(returnValue((unsigned int)VOS_ERR));

	MOCKER(mdrv_rtc_get_value)
		.expects(once())
		.will(returnValue((unsigned int)1000));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuProcessSendData_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:ACPU���ݷ��ͣ�����Ϣͷǰ���ϳ����Ų����뻷�λ�����ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuProcessSendData3, UT)
{
	char								aucMem[200];

	MOCKER(V_MemAlloc)
		.expects(once())
		.will(returnValue((void *)aucMem));

	MOCKER(OMRL_AcpuSendSocpData)
		.expects(exactly(2))
		.will(returnObjectList((unsigned int)VOS_OK, (unsigned int)VOS_ERR));

	MOCKER(mdrv_rtc_get_value)
		.expects(once())
		.will(returnValue((unsigned int)1000));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuProcessSendData_case3());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:ACPU���ݷ��ͣ���Ϣͷǰ���ϳ����Ų����뻷�λ�����ʧ�ܣ�����ֻ��һ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuProcessSendData4, UT)
{
	char								aucMem[200];

	MOCKER(V_MemAlloc)
		.expects(once())
		.will(returnValue((void *)aucMem));

	MOCKER(OMRL_AcpuSendSocpData)
		.expects(once())
		.will(returnValue((unsigned int)VOS_ERR));

	MOCKER(mdrv_rtc_get_value)
		.expects(once())
		.will(returnValue((unsigned int)1000));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuProcessSendData_case4());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:ACPU���ݷ��ͣ����һ��������Ϣͷǰ���ϳ����Ų����뻷�λ�����ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuProcessSendData5, UT)
{
	char								aucMem[200];

	MOCKER(V_MemAlloc)
		.expects(once())
		.will(returnValue((void *)aucMem));

	MOCKER(OMRL_AcpuSendSocpData)
		.expects(exactly(2))
		.will(returnObjectList((unsigned int)VOS_OK, (unsigned int)VOS_ERR));

	MOCKER(mdrv_rtc_get_value)
		.expects(once())
		.will(returnValue((unsigned int)1000));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuProcessSendData_case5());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:ACPU���ݷ��ͳɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuProcessSendData6, UT)
{
	char								aucMem[200];

	MOCKER(V_MemAlloc)
		.expects(once())
		.will(returnValue((void *)aucMem));

	MOCKER(OMRL_AcpuSendSocpData)
		.expects(exactly(2))
		.will(returnObjectList((unsigned int)VOS_OK, (unsigned int)VOS_OK));

	MOCKER(mdrv_rtc_get_value)
		.expects(once())
		.will(returnValue((unsigned int)1000));

	EXPECT_EQ(VOS_OK, uttest_OMRL_AcpuProcessSendData_case6());

	GlobalMockObject::reset();
}


/*******************************************************************
*������:��ȡ�ź���ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuMsgSplit1, UT)
{
	MOCKER(VOS_SmP)
		.expects(once())
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuMsgSplit_case1());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:�ͷ��ѷ��������ڴ�ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuMsgSplit2, UT)
{
	MOCKER(VOS_SmP)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(VOS_SmV)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(OMRL_AcpuReleaseSocpData)
		.expects(once())
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuMsgSplit_case2());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:��ȡOMԴͨ��ʣ��BD����ʧ��
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuMsgSplit3, UT)
{
	MOCKER(VOS_SmP)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(VOS_SmV)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(OMRL_AcpuReleaseSocpData)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(OMRL_AcpuIsBDEnough)
		.expects(once())
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR, uttest_OMRL_AcpuMsgSplit_case3());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:���ݷ��ͳɹ�
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_AcpuMsgSplit4, UT)
{
	MOCKER(VOS_SmP)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(VOS_SmV)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(OMRL_AcpuReleaseSocpData)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(OMRL_AcpuIsBDEnough)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(OMRL_AcpuProcessSendData)
		.expects(once())
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_OMRL_AcpuMsgSplit_case4());

	GlobalMockObject::reset();
}

/*******************************************************************
*������:SHOW����
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
TEST(OMRL_Show1, UT)
{
	uttest_OMRL_Show_case1();

	GlobalMockObject::reset();
}



TEST(OMRL_AcpuHeadProc1, UT)
{
	EXPECT_EQ(VOS_ERR,uttest_OMRL_AcpuHeadProc_case1());

	GlobalMockObject::reset();
}


TEST(OMRL_AcpuHeadProc2, UT)
{
	unsigned int ulValue = 0xaaaa5500;
#if 0
	MOCKER(V_MemCpy)
		.stubs()
		.with(outBoundP(&ulValue),any(), any(),any(),any())
		.will(returnValue((void *)0x30000));
#endif

	EXPECT_EQ(VOS_ERR,uttest_OMRL_AcpuHeadProc_case2());

	GlobalMockObject::reset();
}


TEST(OMRL_AcpuHeadProc3, UT)
{
	unsigned int ulValue = 0xaaaa5555;
	unsigned int ulValue1 = 0x5555aa00;
#if 0
	MOCKER(V_MemCpy)
		.stubs()
		.with(outBoundP(&ulValue),any(), any(),any(),any())
		.will(returnValue((void *)0));

	MOCKER(V_MemCpy)
		.stubs()
		.with(outBoundP(&ulValue1),any(), any(),any(),any())
		.will(returnValue((void *)0));
#endif
	EXPECT_EQ(VOS_ERR,uttest_OMRL_AcpuHeadProc_case3());

	GlobalMockObject::reset();
}


TEST(OMRL_AcpuHeadProc4, UT)
{
	unsigned int ulValue = 0xaaaa5555;
	unsigned int ulValue1 = 0x5555aaaa;
#if 0
	MOCKER(V_MemCpy)
		.stubs()
		.with(outBoundP(&ulValue),any(), any(),any(),any())
		.will(returnValue((void *)0));

	MOCKER(V_MemCpy)
		.stubs()
		.with(outBoundP(&ulValue1),any(), any(),any(),any())
		.will(returnValue((void *)0));
#endif
	MOCKER(VOS_MemCmp)
		.expects(atMost(1))
		.will(returnValue((int)1));

	EXPECT_EQ(VOS_ERR,uttest_OMRL_AcpuHeadProc_case4());

	GlobalMockObject::reset();
}


TEST(OMRL_AcpuHeadProc5, UT)
{
	unsigned int ulValue = 0xaaaa5555;
	unsigned int ulValue1 = 0x5555aaaa;
#if 0
	MOCKER(V_MemCpy)
		.stubs()
		.with(outBoundP(&ulValue), any(), any(), any(),any())
		.will(returnValue((void *)0));

	MOCKER(V_MemCpy)
		.stubs()
		.with(outBoundP(&ulValue1),any(), any(),any(),any())
		.will(returnValue((void *)0));
#endif
	MOCKER(VOS_MemCmp)
		.expects(atMost(1))
		.will(returnValue((int)0));

	MOCKER(OMRL_AcpuMsgCombine)
		.expects(atMost(1))
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK,uttest_OMRL_AcpuHeadProc_case5());

	GlobalMockObject::reset();
}


TEST(OMRL_AcpuUsbFrameInit1, UT)
{
	MOCKER(V_MemSet)
		.expects(atMost(2))
		.will(returnValue((void *)0));

	MOCKER(OM_CreateTraceBuffer)
		.expects(atMost(1))
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR,uttest_OMRL_AcpuUsbFrameInit_case1());

	GlobalMockObject::reset();
}


TEST(OMRL_AcpuUsbFrameInit2, UT)
{
	MOCKER(V_MemSet)
		.expects(atMost(2))
		.will(returnValue((void *)0));

	MOCKER(OM_CreateTraceBuffer)
		.stubs()
		.will(returnObjectList((unsigned int)VOS_OK, (unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR,uttest_OMRL_AcpuUsbFrameInit_case1());

	GlobalMockObject::reset();
}


TEST(OMRL_AcpuUsbFrameInit3, UT)
{
	MOCKER(V_MemSet)
		.expects(atMost(2))
		.will(returnValue((void *)0));

	MOCKER(OM_CreateTraceBuffer)
		.expects(atMost(2))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(VOS_SmMCreate)
		.expects(atMost(1))
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR,uttest_OMRL_AcpuUsbFrameInit_case1());

	GlobalMockObject::reset();
}



TEST(OMRL_AcpuUsbFrameInit4, UT)
{
	MOCKER(V_MemSet)
		.expects(atMost(2))
		.will(returnValue((void *)0));

	MOCKER(OM_CreateTraceBuffer)
		.expects(atMost(2))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(VOS_SmMCreate)
		.stubs()
		.will(returnObjectList((unsigned int)VOS_OK, (unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR,uttest_OMRL_AcpuUsbFrameInit_case1());

	GlobalMockObject::reset();
}


TEST(OMRL_AcpuUsbFrameInit5, UT)
{
	MOCKER(V_MemSet)
		.expects(atMost(3))
		.will(returnValue((void *)0));

	MOCKER(OM_CreateTraceBuffer)
		.expects(atMost(2))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(VOS_SmMCreate)
		.stubs()
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(VOS_UnCacheMemAlloc)
		.stubs()
		.will(returnValue((void *)0));

	EXPECT_EQ(VOS_ERR,uttest_OMRL_AcpuUsbFrameInit_case1());

	GlobalMockObject::reset();
}


TEST(OMRL_AcpuUsbFrameInit6, UT)
{
	char cBuf[100];

	MOCKER(V_MemSet)
		.expects(atMost(3))
		.will(returnValue((void *)0));

	MOCKER(OM_CreateTraceBuffer)
		.expects(atMost(2))
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(VOS_SmMCreate)
		.stubs()
		.will(returnValue((unsigned int)VOS_OK));

	MOCKER(VOS_UnCacheMemAlloc)
		.stubs()
		.will(returnValue((void *)cBuf));

	EXPECT_EQ(VOS_OK,uttest_OMRL_AcpuUsbFrameInit_case1());

	GlobalMockObject::reset();
}


TEST(OmAcpuInitVar1, UT)
{
	MOCKER(V_MemSet)
		.expects(atMost(2))
		.will(returnValue((void *)0));

	uttest_OmAcpuInitVar_case1();

	GlobalMockObject::reset();
}


TEST(OMRL_AcpuInit1, UT)
{
	MOCKER(OmAcpuInitVar)
		.expects(once());

	MOCKER(OMRL_AcpuUsbFrameInit)
		.expects(atMost(1))
		.will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR,uttest_OMRL_AcpuInit_case1());

	GlobalMockObject::reset();
}


TEST(OMRL_AcpuInit2, UT)
{
	MOCKER(OmAcpuInitVar)
		.expects(once());

	MOCKER(OMRL_AcpuUsbFrameInit)
		.expects(atMost(1))
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK,uttest_OMRL_AcpuInit_case1());

	GlobalMockObject::reset();
}