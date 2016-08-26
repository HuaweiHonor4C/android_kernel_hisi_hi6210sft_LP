#if 1
/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : test_rfile_process.cpp
  �� �� ��   : ����
  ��    ��   :
  ��������   : 2013��01��29��
  ����޸�   :
  ��������   : UT���Խű�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2013��01��29��
    ��    ��   :
    �޸�����   : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "gtest/gtest.h"
#include "llt_mockcpp.h"

using namespace testing;

#if 0
class Test_FC_POINT_Init2:public Test
{
protected:
	static void SetUpTestCase();
	static void TearDownTestCase();

	void SetUp();
	void TearDown();
};
#endif

#ifdef __cplusplus

extern "C"
{
#endif


	extern void  FC_POINT_Init( void );
	extern int  stub_FC_POINT_Init( void );
	extern unsigned int  FC_SetDebugLev( unsigned int ulLev );
	extern int stub_FC_LOG(unsigned int ulLevel, char *pcString);
	extern long vos_printf(const char * format);
	extern int stub_FC_LOG1(unsigned int ulLevel,char *pcString,int lPara1);
	extern int stub_FC_LOG2(unsigned int ulLevel,char *pcString,int lPara1,int lPara2);
	extern int stub_FC_LOG3(unsigned int ulLevel,char *pcString,int lPara1,int lPara2,int lPara3);
	extern int stub_FC_LOG4(unsigned int ulLevel,char *pcString,int lPara1,int lPara2,int lPara3,int lPara4);
	extern void FC_MNTN_TraceEvent(void *pMsg);
	extern void OM_AcpuTraceMsgHook(void * pMsg);
	extern int stub_FC_MNTN_TracePointFcEvent(void);
	extern int stub_FC_MNTN_TracePolicy(void);
	extern int stub_FC_MNTN_TraceCpuLoad(void);
	extern int stub_FC_MNTN_TraceDrvAssemPara(void);
	extern int stub_FC_IsPolicyEnable(int ulPointPolicyMask, short enModemId);
	extern void stub_FC_IsPolicyEnable_end(void);
	extern unsigned int stub_FC_RegPoint(void *pstFcRegPoint);
	extern unsigned int FC_SndRegPointMsg(void *pstFcRegPoint);
	extern int stub_FC_SetFcEnableMsk(int mask);
	extern int  stub_FC_DeRegPoint(char FcId,short ModemId);
	extern void FC_LOG1(unsigned int ulLevel,const char *pcString,int lPara1);
	extern unsigned int FC_SndDeRegPointMsg(char FcId,short ModemId);
	extern int  stub_FC_ChangePoint(char FcId,char PolicyId,char Pri,short ModemId);
	extern unsigned int FC_SndChangePointMsg(char FcId,char PolicyId,char Pri,short ModemId);
	extern int  stub_FC_POINT_Get_MaxPointNum(char FcId);
	extern int  stub_FC_POINT_Get_Fail(char FcId);
	extern int  stub_FC_POINT_Get_Succ(char FcId);
	extern int  stub_FC_POINT_Add(void);
	extern void  stub_FC_POINT_SetPointNum(int Num);
	extern void  stub_FC_POINT_Add_SetPointInfo(char FcId);
	extern void stub_FC_POINT_MemSet(void);
	extern int  stub_FC_POINT_Del(char FcId);
	extern int  stub_FC_POINT_SetFc(unsigned int PolicyMask, char FcId);
	extern void *FC_POINT_Get(char enFcId);
	extern void stub_FC_POINT_SetFc_SetPoint(unsigned int PolicyMask, char FcId, int FcMask, short ModemId,void *pSetFunc, void *pClrFunc);
	extern int  stub_FC_POINT_ClrFc(unsigned int PolicyMask, char FcId);
	extern void FC_MNTN_TracePointFcEvent(short enMsgName,void *pstFcPoint,unsigned int ulIsFuncInvoked,unsigned int ulResult);
	extern unsigned int FC_POINT_Add(void *pstFcRegPoint);
	extern int  stub_FC_POINT_Reg(void);
	extern void  FC_LOG(unsigned int ulLevel,const char *pcString);
	extern char FC_POLICY_GetPriWithFcId(char enPolicyId, char enFcId);
	extern void  FC_POLICY_AddPoint(char enPolicyId, char enFcId, char enPointPri);
	extern int  stub_FC_POINT_DeReg(char FcId, short ModemId);
	extern void  FC_POLICY_DelPoint(char enPolicyId,char enFcId);
	extern void  FC_POINT_Del(char enFcId);
	extern int  stub_FC_POINT_Change(char FcId, char PolicyId, char NewPri, short ModemId);
	extern char  FC_POLICY_GetPriWithFcId(char enPolicyId,char enFcId);
	extern int stub_FC_POLICY_TrimInvalidPri(char DonePri);
	extern int stub_FC_POLICY_UpWithOnePri(char FcIdCnt);
	extern int stub_FC_POLICY_DownWithOnePri(char FcIdCnt);
	extern int stub_FC_POLICY_Up(char DonePri, char HighestPri, char Valid);
	extern void FC_POLICY_UpWithOnePri(void *pFcPolicy, void *pstPri);
	extern void FC_MNTN_TracePolicy(short enMsgName, void *pPolicy);
    extern int stub_FC_POLICY_UpToTargetPri(char DonePri, char TargetPri, char Valid);
	extern int stub_FC_POLICY_Down(char DonePri, char Valid);
	extern void  FC_POLICY_DownWithOnePri(void *pPolicy,void *pstPri);
	extern int stub_FC_POLICY_DownToTargetPri(char DonePri, char TargetPri, char Valid);
	extern int stub_FC_POLICY_UpdateHighestPri(char Valid);
	extern int stub_FC_POLICY_AddPointForPri(char Valid, char Cnt, char PointPri, char FcId);
	extern int stub_FC_POLICY_DelPointForPri(char Cnt, char PointPri, char FcId);
	extern unsigned int FC_POLICY_ADJUST_FOR_UP_FUNC_TEMP(char enPointPri, char enFcId);
	extern int stub_FC_POLICY_AddPoint(void *pAdjustForUpFunc, char PointPri, char DonePri);
	extern void FC_POINT_SetFc(unsigned int ulPolicyMask,char enFcId);
	extern int stub_FC_POLICY_GetPriWithFcId(char FcId, char TestcaseNum);
	extern int stub_FC_POLICY_DelPoint(void *pAdjustForUpFunc);
	extern void  FC_POINT_ClrFc(unsigned int ulPolicyMask, char enFcId);
	extern char  FC_POLICY_GetPriWithFcId(char enPolicyId,char enFcId);
	extern void  FC_POLICY_DelPointForPri(void *pPolicy,char enFcId,char enPointPri);
	extern int stub_FC_POLICY_ChangePoint(void *pAdjustForUpFunc, char DonePri, char NewPri, char OldPri);
	extern void FC_POINT_ClrFc(unsigned int ulPolicyMask, char enFcId);
	extern void FC_POINT_SetFc(unsigned int ulPolicyMask, char enFcId);
	extern int stub_FC_POLICY_GetPriCnt(int Cnt);
	extern int stub_FC_POLICY_Init(void);
	extern int stub_FC_CFG_CheckCpuParam(int CpuOverLoadVal, int CpuUnderLoadVal);
	extern int stub_FC_CFG_CheckMemParam(int ThresholdCnt, int SetThreshold, int StopThreshold);
	extern int stub_FC_CFG_CheckUlRateParam(char Cnt);
	extern int stub_FC_CFG_CheckParam(int TimerLen);
	extern unsigned int  FC_CFG_CheckCpuParam( void *pstFcCfgCpu );
	extern unsigned int  FC_CFG_CheckMemParam( void *pstFcCfgMem );
	extern unsigned int FC_CFG_CheckUlRateParam( void *pstFcCfgUmUlRate );
	extern int stub_FC_CFG_SetDefaultValue(void);
	extern int stub_FC_CFG_SetNvValue(void);
	extern int stub_FC_CFG_Init(void);
	extern unsigned int NV_ReadEx(short enModemID,short usID,void *pItem,unsigned int ulLength);
	extern void  FC_CFG_SetDefaultValue( void *pstFcCfg );
	extern unsigned int  FC_CFG_CheckParam( void *pstFcCfg );
	extern void FC_CFG_SetDefaultValue( void *pstFcCfg );
	extern int stub_FC_SndCpuMsg(void);
	extern void * V_AllocMsg( unsigned int Pid, unsigned int  ulLength, unsigned int  ulFileID, unsigned int  usLineNo );
	extern unsigned int V_SendMsg( unsigned int Pid, void **ppMsg,unsigned int ulFileID, unsigned int usLineNo );
	extern int stub_FC_SndRegPointMsg(void);
	extern int stub_FC_SndDeRegPointMsg(void);
	extern int stub_FC_SndChangePointMsg(void);
	extern int stub_FC_CommInit(void);
	extern unsigned int  FC_CFG_Init( void );
	extern int stub_FC_SetDebugLev(unsigned int ulLev);
	extern int stub_FC_SetFcEnableMask(unsigned int ulEnableMask);
	extern int stub_FC_SetThreshold(int PolicyId,int Param1);
	extern int stub_FC_Help(int PointNum, int Valid, int FcIdCnt);
	extern void * V_MemCpy( void * Dest, const void * Src, unsigned long Count,
                       unsigned long ulFileID, unsigned long usLineNo );



	extern unsigned long *g_ulFcPointMgr;


#ifdef __cplusplus
}
#endif

#endif

/*****************************************************************************
������:	 Test_FC_POINT_Init
��������:FC POINT�ĳ�ʼ��
���Ա��:
���Ա���:FC POINT�ĳ�ʼ��
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Init,UT01_init)
{
	int ret = 1;

	/*************************************************************************
      (1)��ʼ�����Ի���
    *************************************************************************/
	stub_FC_POINT_MemSet();

    /*************************************************************************
      (2)���ñ��⺯���β�
    *************************************************************************/	

    /*************************************************************************
      (3)ִ�б��⺯��
    *************************************************************************/
    ret = stub_FC_POINT_Init();

    /*************************************************************************
      (4)�����Խ��
    *************************************************************************/
    EXPECT_EQ(0, ret);

    /*************************************************************************
      (5)������Ի���
    *************************************************************************/

};

/*****************************************************************************
������:	 Test_FC_LOG
��������:FC��LOG��ӡ
���Ա��:Test_FC_LOG_001
���Ա���:FC��LOG��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_LOG,UT01_print)
{
	char *s;
	unsigned int lever;
	int ret;

	/*************************************************************************
      (1)��ʼ�����Ի���
    *************************************************************************/
	FC_SetDebugLev(2);

    /*************************************************************************
      (2)���ñ��⺯���β�
    *************************************************************************/
	lever = 2;
	ret = 0;

    /*************************************************************************
      (3)ִ�б��⺯��
    *************************************************************************/
	MOCKER(vos_printf).expects(once());
    ret = stub_FC_LOG(lever,s);

    /*************************************************************************
      (4)�����Խ��
    *************************************************************************/
    EXPECT_EQ(1,ret);

    /*************************************************************************
      (5)������Ի���
    *************************************************************************/
	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
};

/*****************************************************************************
������:	 Test_FC_LOG
��������:FC��LOG��ӡ
���Ա��:Test_FC_LOG_002
���Ա���:FC��LOG��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_LOG,UT02_notprint)
{
	char *s;
	unsigned int lever;
	int ret;

	/*************************************************************************
      (1)��ʼ�����Ի���
    *************************************************************************/
	FC_SetDebugLev(1);

    /*************************************************************************
      (2)���ñ��⺯���β�
    *************************************************************************/
	lever = 2;
	ret = 1;

    /*************************************************************************
      (3)ִ�б��⺯��
    *************************************************************************/
	ret = stub_FC_LOG(lever,s);

    /*************************************************************************
      (4)�����Խ��
    *************************************************************************/
    EXPECT_EQ(0,ret);

    /*************************************************************************
      (5)������Ի���
    *************************************************************************/

};

/*****************************************************************************
������:	 Test_FC_LOG1
��������:FC_LOG1��ӡ
���Ա��:Test_FC_LOG1_001
���Ա���:FC_LOG1��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_LOG1,UT01_print)
{
	char *s;
	unsigned int lever;
	int ret;
	int lpara;

	/*************************************************************************
      (1)��ʼ�����Ի���
    *************************************************************************/
	FC_SetDebugLev(2);

    /*************************************************************************
      (2)���ñ��⺯���β�
    *************************************************************************/
	lever = 2;
	ret = 0;

    /*************************************************************************
      (3)ִ�б��⺯��
    *************************************************************************/
	MOCKER(vos_printf).expects(once());
    ret = stub_FC_LOG1(lever,s,lpara);

    /*************************************************************************
      (4)�����Խ��
    *************************************************************************/
    EXPECT_EQ(1,ret);

    /*************************************************************************
      (5)������Ի���
    *************************************************************************/
	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
};

/*****************************************************************************
������:	 Test_FC_LOG1
��������:FC_LOG1��ӡ
���Ա��:Test_FC_LOG1_002
���Ա���:FC_LOG1��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_LOG1,UT02_notprint)
{
	char *s;
	unsigned int lever;
	int ret;
	int lpara;

	/*************************************************************************
      (1)��ʼ�����Ի���
    *************************************************************************/
	FC_SetDebugLev(1);

    /*************************************************************************
      (2)���ñ��⺯���β�
    *************************************************************************/
	lever = 2;
	ret = 1;

    /*************************************************************************
      (3)ִ�б��⺯��
    *************************************************************************/
	ret = stub_FC_LOG1(lever,s,lpara);

    /*************************************************************************
      (4)�����Խ��
    *************************************************************************/
    EXPECT_EQ(0,ret);

    /*************************************************************************
      (5)������Ի���
    *************************************************************************/

};

/*****************************************************************************
������:	 Test_FC_LOG2
��������:FC_LOG2��ӡ
���Ա��:Test_FC_LOG2_001
���Ա���:FC_LOG1��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_LOG2,UT01_print)
{
	char *s;
	unsigned int lever;
	int ret;
	int lpara1;
	int lpara2;

	/*************************************************************************
      (1)��ʼ�����Ի���
    *************************************************************************/
	FC_SetDebugLev(2);

    /*************************************************************************
      (2)���ñ��⺯���β�
    *************************************************************************/
	lever = 2;
	ret = 0;

    /*************************************************************************
      (3)ִ�б��⺯��
    *************************************************************************/
	MOCKER(vos_printf).expects(once());
    ret = stub_FC_LOG2(lever,s,lpara1,lpara2);

    /*************************************************************************
      (4)�����Խ��
    *************************************************************************/
    EXPECT_EQ(1,ret);

    /*************************************************************************
      (5)������Ի���
    *************************************************************************/
	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
};

/*****************************************************************************
������:	 Test_FC_LOG2
��������:FC_LOG2��ӡ
���Ա��:Test_FC_LOG2_001
���Ա���:FC_LOG1��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_LOG2,UT02_notprint)
{
	char *s;
	unsigned int lever;
	int ret;
	int lpara1;
	int lpara2;

	/*************************************************************************
      (1)��ʼ�����Ի���
    *************************************************************************/
	FC_SetDebugLev(1);

    /*************************************************************************
      (2)���ñ��⺯���β�
    *************************************************************************/
	lever = 2;
	ret = 1;

    /*************************************************************************
      (3)ִ�б��⺯��
    *************************************************************************/
	ret = stub_FC_LOG2(lever,s,lpara1,lpara2);

    /*************************************************************************
      (4)�����Խ��
    *************************************************************************/
    EXPECT_EQ(0,ret);

    /*************************************************************************
      (5)������Ի���
    *************************************************************************/

};

/*****************************************************************************
������:	 Test_FC_LOG3
��������:FC_LOG3��ӡ
���Ա��:Test_FC_LOG3_001
���Ա���:FC_LOG3��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_LOG3,UT01_print)
{
	char *s;
	unsigned int lever;
	int ret;
	int lpara1;
	int lpara2;
	int lpara3;

	/*************************************************************************
      (1)��ʼ�����Ի���
    *************************************************************************/
	FC_SetDebugLev(2);

    /*************************************************************************
      (2)���ñ��⺯���β�
    *************************************************************************/
	lever = 2;
	ret = 0;

    /*************************************************************************
      (3)ִ�б��⺯��
    *************************************************************************/
	MOCKER(vos_printf).expects(once());
    ret = stub_FC_LOG3(lever,s,lpara1,lpara2,lpara3);

    /*************************************************************************
      (4)�����Խ��
    *************************************************************************/
    EXPECT_EQ(1,ret);

    /*************************************************************************
      (5)������Ի���
    *************************************************************************/
	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
};

/*****************************************************************************
������:	 Test_FC_LOG3
��������:FC_LOG3��ӡ
���Ա��:Test_FC_LOG3_002
���Ա���:FC_LOG3��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_LOG3,UT02_notprint)
{
	char *s;
	unsigned int lever;
	int ret;
	int lpara1;
	int lpara2;
	int lpara3;

	/*************************************************************************
      (1)��ʼ�����Ի���
    *************************************************************************/
	FC_SetDebugLev(1);

    /*************************************************************************
      (2)���ñ��⺯���β�
    *************************************************************************/
	lever = 2;
	ret = 1;

    /*************************************************************************
      (3)ִ�б��⺯��
    *************************************************************************/
	ret = stub_FC_LOG3(lever,s,lpara1,lpara2,lpara3);

    /*************************************************************************
      (4)�����Խ��
    *************************************************************************/
    EXPECT_EQ(0,ret);

    /*************************************************************************
      (5)������Ի���
    *************************************************************************/

};

/*****************************************************************************
������:	 Test_FC_LOG4
��������:FC_LOG4��ӡ
���Ա��:Test_FC_LOG4_001
���Ա���:FC_LOG4��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_LOG4,UT01_print)
{
	char *s;
	unsigned int lever;
	int ret;
	int lpara1;
	int lpara2;
	int lpara3;
	int lpara4;

	/*************************************************************************
      (1)��ʼ�����Ի���
    *************************************************************************/
	FC_SetDebugLev(2);

    /*************************************************************************
      (2)���ñ��⺯���β�
    *************************************************************************/
	lever = 2;
	ret = 0;

    /*************************************************************************
      (3)ִ�б��⺯��
    *************************************************************************/
	MOCKER(vos_printf).expects(once());
    ret = stub_FC_LOG4(lever,s,lpara1,lpara2,lpara3,lpara4);

    /*************************************************************************
      (4)�����Խ��
    *************************************************************************/
    EXPECT_EQ(1,ret);

    /*************************************************************************
      (5)������Ի���
    *************************************************************************/
	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
};

/*****************************************************************************
������:	 Test_FC_LOG4
��������:FC_LOG4��ӡ
���Ա��:Test_FC_LOG4_002
���Ա���:FC_LOG4��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_LOG4,UT02_notprint)
{
	char *s;
	unsigned int lever;
	int ret;
	int lpara1;
	int lpara2;
	int lpara3;
	int lpara4;

	/*************************************************************************
      (1)��ʼ�����Ի���
    *************************************************************************/
	FC_SetDebugLev(1);

    /*************************************************************************
      (2)���ñ��⺯���β�
    *************************************************************************/
	lever = 2;
	ret = 1;

    /*************************************************************************
      (3)ִ�б��⺯��
    *************************************************************************/
	ret = stub_FC_LOG4(lever,s,lpara1,lpara2,lpara3,lpara4);

    /*************************************************************************
      (4)�����Խ��
    *************************************************************************/
    EXPECT_EQ(0,ret);

    /*************************************************************************
      (5)������Ի���
    *************************************************************************/

};

/*****************************************************************************
������:	 Test_FC_MNTN_TraceEvent
��������:FC_MNTN_TraceEvent��ӡ
���Ա��:Test_FC_MNTN_TraceEvent_001
���Ա���:FC_MNTN_TraceEvent��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_MNTN_TraceEvent,UT01_print)
{
	void *pMsg;

	MOCKER(OM_AcpuTraceMsgHook).expects(once());

	FC_MNTN_TraceEvent(pMsg);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_MNTN_TracePointFcEvent
��������:FC_MNTN_TracePointFcEvent��ӡ
���Ա��:Test_FC_MNTN_TracePointFcEvent_001
���Ա���:FC_MNTN_TracePointFcEvent��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_MNTN_TracePointFcEvent,UT01_print)
{
	int ret = 0;

	MOCKER(FC_MNTN_TraceEvent).expects(once());

	ret = stub_FC_MNTN_TracePointFcEvent();

	EXPECT_EQ(1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_MNTN_TracePolicy
��������:FC_MNTN_TracePolicy��ӡ
���Ա��:Test_FC_MNTN_TracePolicy_001
���Ա���:FC_MNTN_TracePolicy��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_MNTN_TracePolicy,UT01_print)
{
	int ret = 0;

	MOCKER(FC_MNTN_TraceEvent).expects(once());

	ret = stub_FC_MNTN_TracePolicy();

	EXPECT_EQ(1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_MNTN_TraceCpuLoad
��������:FC_MNTN_TraceCpuLoad��ӡ
���Ա��:Test_FC_MNTN_TraceCpuLoad_001
���Ա���:FC_MNTN_TraceCpuLoad��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_MNTN_TraceCpuLoad,UT01_print)
{
	int ret = -1;

	MOCKER(FC_MNTN_TraceEvent).expects(once());

	ret = stub_FC_MNTN_TraceCpuLoad();

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_MNTN_TraceDrvAssemPara
��������:FC_MNTN_TraceDrvAssemPara��ӡ
���Ա��:Test_FC_MNTN_TraceDrvAssemPara_001
���Ա���:FC_MNTN_TraceDrvAssemPara��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_MNTN_TraceDrvAssemPara,UT01_print)
{
	int ret = -1;

	MOCKER(FC_MNTN_TraceEvent).expects(once());

	ret = stub_FC_MNTN_TraceDrvAssemPara();

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_IsPolicyEnable
��������:FC_IsPolicyEnable��ӡ
���Ա��:Test_FC_IsPolicyEnable_001
���Ա���:FC_IsPolicyEnable��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_IsPolicyEnable,UT01_Modem0)
{
	int ulPointPolicyMask = 0x03FF;
	short enModemId = 0;
	int ret = 0;

	ret = stub_FC_IsPolicyEnable(ulPointPolicyMask, enModemId);

	EXPECT_EQ(0x7F, ret);

	stub_FC_IsPolicyEnable_end();
}

/*****************************************************************************
������:	 Test_FC_IsPolicyEnable
��������:FC_IsPolicyEnable��ӡ
���Ա��:Test_FC_IsPolicyEnable_002
���Ա���:FC_IsPolicyEnable��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_IsPolicyEnable,UT02_Modem1)
{
	int ulPointPolicyMask = 0x03FF;
	short enModemId = 1;
	int ret = 0;

	ret = stub_FC_IsPolicyEnable(ulPointPolicyMask, enModemId);

	EXPECT_EQ(0x07, ret);

	stub_FC_IsPolicyEnable_end();
}

/*****************************************************************************
������:	 Test_FC_RegPoint
��������:FC_RegPoint��ӡ
���Ա��:Test_FC_RegPoint_001
���Ա���:FC_RegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_RegPoint,UT01_NULL_PTR)
{
	int ret = 0;

	ret = stub_FC_RegPoint(NULL);

	EXPECT_EQ(1, ret);
}

/*****************************************************************************
������:	 Test_FC_RegPoint
��������:FC_RegPoint��ӡ
���Ա��:Test_FC_RegPoint_002
���Ա���:FC_RegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_RegPoint,UT02_ModemIdError)
{
	int ret = 0;

	char RegPoint[40] = {0x02,0x00,0x03,0x01,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00};

	ret = stub_FC_RegPoint((void *)(&RegPoint[0]));

	EXPECT_EQ(1, ret);
}

/*****************************************************************************
������:	 Test_FC_RegPoint
��������:FC_RegPoint��ӡ
���Ա��:Test_FC_RegPoint_003
���Ա���:FC_RegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_RegPoint,UT03_PolicyIdError)
{
	int ret = 0;

	char RegPoint[40] = {0x01,0x00,0x07,0x01,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00};

	ret = stub_FC_RegPoint((void *)(&RegPoint[0]));

	EXPECT_EQ(1, ret);
}

/*****************************************************************************
������:	 Test_FC_RegPoint
��������:FC_RegPoint��ӡ
���Ա��:Test_FC_RegPoint_004
���Ա���:FC_RegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_RegPoint,UT04_FcIdError)
{
	int ret = 0;

	char RegPoint[40] = {0x01,0x00,0x03,0x28,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00};

	ret = stub_FC_RegPoint((void *)(RegPoint));

	EXPECT_EQ(1, ret);
}

/*****************************************************************************
������:	 Test_FC_RegPoint
��������:FC_RegPoint��ӡ
���Ա��:Test_FC_RegPoint_005
���Ա���:FC_RegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_RegPoint,UT05_FcPriError1)
{
	int ret = 0;

	char RegPoint[40] = {0x01,0x00,0x03,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00};

	ret = stub_FC_RegPoint((void *)(RegPoint));

	EXPECT_EQ(1, ret);
}

/*****************************************************************************
������:	 Test_FC_RegPoint
��������:FC_RegPoint��ӡ
���Ա��:Test_FC_RegPoint_006
���Ա���:FC_RegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_RegPoint,UT06_FcPriError2)
{
	int ret = 0;

	char RegPoint[40] = {0x01,0x00,0x03,0x08,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00};

	ret = stub_FC_RegPoint((void *)(RegPoint));

	EXPECT_EQ(1, ret);
}

/*****************************************************************************
������:	 Test_FC_RegPoint
��������:FC_RegPoint��ӡ
���Ա��:Test_FC_RegPoint_007
���Ա���:FC_RegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_RegPoint,UT07_PolicyDisabled)
{
	int ret = 1;

	stub_FC_SetFcEnableMsk(0x0F);

	char RegPoint[40] = {0x01,0x00,0x06,0x08,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00};

	ret = stub_FC_RegPoint((void *)(RegPoint));

	EXPECT_EQ(0, ret);

	stub_FC_SetFcEnableMsk(0);
}

/*****************************************************************************
������:	 Test_FC_RegPoint
��������:FC_RegPoint��ӡ
���Ա��:Test_FC_RegPoint_008
���Ա���:FC_RegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_RegPoint,UT08_MemPolicyPriError1)
{
	int ret = 0;

	stub_FC_SetFcEnableMsk(0x0F);

	char RegPoint[40] = {0x01,0x00,0x00,0x08,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00};

	ret = stub_FC_RegPoint((void *)(RegPoint));

	EXPECT_EQ(1, ret);

	stub_FC_SetFcEnableMsk(0);
}

/*****************************************************************************
������:	 Test_FC_RegPoint
��������:FC_RegPoint��ӡ
���Ա��:Test_FC_RegPoint_009
���Ա���:FC_RegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_RegPoint,UT09_MemPolicyPriError2)
{
	int ret = 0;

	stub_FC_SetFcEnableMsk(0x0F);

	char RegPoint[40] = {0x01,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00};

	ret = stub_FC_RegPoint((void *)(RegPoint));

	EXPECT_EQ(1, ret);

	stub_FC_SetFcEnableMsk(0);
}

/*****************************************************************************
������:	 Test_FC_RegPoint
��������:FC_RegPoint��ӡ
���Ա��:Test_FC_RegPoint_010
���Ա���:FC_RegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_RegPoint,UT10_pSetFuncIsNull)
{
	int ret = 0;

	stub_FC_SetFcEnableMsk(0x0F);

	char RegPoint[40] = {0x01,0x00,0x02,0x08,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00};

	ret = stub_FC_RegPoint((void *)(RegPoint));

	EXPECT_EQ(1, ret);

	stub_FC_SetFcEnableMsk(0);
}

/*****************************************************************************
������:	 Test_FC_RegPoint
��������:FC_RegPoint��ӡ
���Ա��:Test_FC_RegPoint_011
���Ա���:FC_RegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_RegPoint,UT11_pClrFuncIsNull)
{
	int ret = 0;

	stub_FC_SetFcEnableMsk(0x0F);

	char RegPoint[40] = {0x01,0x00,0x02,0x08,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00};

	ret = stub_FC_RegPoint((void *)(RegPoint));

	EXPECT_EQ(1, ret);

	stub_FC_SetFcEnableMsk(0);
}
#if 0
/*****************************************************************************
������:	 Test_FC_RegPoint
��������:FC_RegPoint��ӡ
���Ա��:Test_FC_RegPoint_012
���Ա���:FC_RegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_RegPoint,UT12_pRstFuncIsNull)
{
	int ret = 0;

	stub_FC_SetFcEnableMsk(0x0F);

	char RegPoint[40] = {0x01,0x00,0x02,0x08,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

	ret = stub_FC_RegPoint((void *)(RegPoint));

	EXPECT_EQ(1, ret);

	stub_FC_SetFcEnableMsk(0);
}
#endif

/*****************************************************************************
������:	 Test_FC_RegPoint
��������:FC_RegPoint��ӡ
���Ա��:Test_FC_RegPoint_013
���Ա���:FC_RegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_RegPoint,UT13_Success)
{
	int ret = 1;

	stub_FC_SetFcEnableMsk(0x0F);

	char RegPoint[40] = {0x01,0x00,0x02,0x08,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00};

	MOCKER(FC_SndRegPointMsg).stubs().will(returnValue((unsigned int)0));

	ret = stub_FC_RegPoint((void *)(RegPoint));

	EXPECT_EQ(0, ret);

	stub_FC_SetFcEnableMsk(0);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_DeRegPoint
��������:FC_DeRegPoint��ӡ
���Ա��:Test_FC_DeRegPoint_001
���Ա���:FC_DeRegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_DeRegPoint,UT01_FcIdInvalid)
{
    char FcId = 45;
    short ModemId = 0;
	int ret = 1;

	ret = stub_FC_DeRegPoint(FcId, ModemId);

	EXPECT_EQ(-1, ret);

	FC_POINT_Init();
}

/*****************************************************************************
������:	 Test_FC_DeRegPoint
��������:FC_DeRegPoint��ӡ
���Ա��:Test_FC_DeRegPoint_002
���Ա���:FC_DeRegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_DeRegPoint,UT02_ModemIdInvalid)
{
    char FcId = 20;
    short ModemId = 3;
	int ret = 1;

	ret = stub_FC_DeRegPoint(FcId, ModemId);

	EXPECT_EQ(-1, ret);

	FC_POINT_Init();
}

/*****************************************************************************
������:	 Test_FC_DeRegPoint
��������:FC_DeRegPoint��ӡ
���Ա��:Test_FC_DeRegPoint_003
���Ա���:FC_DeRegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_DeRegPoint,UT03_FcPointNone)
{
    char FcId = 20;
    short ModemId = 0;
	int ret = 1;

	FC_POINT_Init();

	ret = stub_FC_DeRegPoint(FcId, ModemId);

	EXPECT_EQ(0, ret);

	FC_POINT_Init();
}

/*****************************************************************************
������:	 Test_FC_DeRegPoint
��������:FC_DeRegPoint��ӡ
���Ա��:Test_FC_DeRegPoint_004
���Ա���:FC_DeRegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_DeRegPoint,UT04_PolicyDisabled)
{
    char FcId = 1;
    short ModemId = 0;
	int ret = 1;

	FC_POINT_Init();
	stub_FC_SetFcEnableMsk(0);

	ret = stub_FC_DeRegPoint(FcId, ModemId);

	EXPECT_EQ(0, ret);

	FC_POINT_Init();
}

/*****************************************************************************
������:	 Test_FC_DeRegPoint
��������:FC_DeRegPoint��ӡ
���Ա��:Test_FC_DeRegPoint_005
���Ա���:FC_DeRegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_DeRegPoint,UT05_SndMsgFail)
{
    char FcId = 1;
    short ModemId = 0;
	int ret = 1;

	FC_POINT_Init();
	stub_FC_SetFcEnableMsk(0x7F);

	MOCKER(FC_SndDeRegPointMsg).stubs().will(returnValue((unsigned int)0));

	ret = stub_FC_DeRegPoint(FcId, ModemId);

	EXPECT_EQ(0, ret);

	stub_FC_SetFcEnableMsk(0);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

	FC_POINT_Init();
}

/*****************************************************************************
������:	 Test_FC_DeRegPoint
��������:FC_DeRegPoint��ӡ
���Ա��:Test_FC_DeRegPoint_006
���Ա���:FC_DeRegPoint��ӡ
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_DeRegPoint,UT06_SndMsgSucc)
{
    char FcId = 1;
    short ModemId = 0;
	int ret = 1;

	FC_POINT_Init();
	stub_FC_SetFcEnableMsk(0x7F);

	MOCKER(FC_SndDeRegPointMsg).stubs().will(returnValue((unsigned int)1));

	ret = stub_FC_DeRegPoint(FcId, ModemId);

	EXPECT_EQ(-1, ret);

	stub_FC_SetFcEnableMsk(0);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

	FC_POINT_Init();
}

/*****************************************************************************
������:	 Test_FC_ChangePoint
��������:FC_ChangePoint
���Ա��:Test_FC_ChangePoint_001
���Ա���:FC_ChangePoint
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_ChangePoint,UT01_FcIdError)
{
	char FcId;
	char PolicyId;
	char Pri;
	short ModemId;
	int ret = 1;

	FcId = 45;
	PolicyId = 6;
	Pri = 3;
	ModemId = 0;

	stub_FC_SetFcEnableMsk(0x7F);

	MOCKER(FC_LOG1).expects(once());

	ret = stub_FC_ChangePoint(FcId, PolicyId, Pri, ModemId);

	EXPECT_EQ(-1, ret);

	stub_FC_SetFcEnableMsk(0);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_ChangePoint
��������:FC_ChangePoint
���Ա��:Test_FC_ChangePoint_002
���Ա���:FC_ChangePoint
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_ChangePoint,UT02_FcPriError1)
{
	char FcId;
	char PolicyId;
	char Pri;
	short ModemId;
	int ret = 1;

	FcId = 25;
	PolicyId = 6;
	Pri = 0;
	ModemId = 0;

	stub_FC_SetFcEnableMsk(0x7F);

	MOCKER(FC_LOG1).expects(once());

	ret = stub_FC_ChangePoint(FcId, PolicyId, Pri, ModemId);

	EXPECT_EQ(-1, ret);

	stub_FC_SetFcEnableMsk(0);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_ChangePoint
��������:FC_ChangePoint
���Ա��:Test_FC_ChangePoint_003
���Ա���:FC_ChangePoint
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_ChangePoint,UT03_FcPriError2)
{
	char FcId;
	char PolicyId;
	char Pri;
	short ModemId;
	int ret = 1;

	FcId = 25;
	PolicyId = 6;
	Pri = 10;
	ModemId = 0;

	stub_FC_SetFcEnableMsk(0x7F);

	MOCKER(FC_LOG1).expects(once());

	ret = stub_FC_ChangePoint(FcId, PolicyId, Pri, ModemId);

	EXPECT_EQ(-1, ret);

	stub_FC_SetFcEnableMsk(0);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_ChangePoint
��������:FC_ChangePoint
���Ա��:Test_FC_ChangePoint_004
���Ա���:FC_ChangePoint
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_ChangePoint,UT04_PolicyIdInvalid)
{
	char FcId;
	char PolicyId;
	char Pri;
	short ModemId;
	int ret = 1;

	FcId = 25;
	PolicyId = 7;
	Pri = 5;
	ModemId = 0;

	stub_FC_SetFcEnableMsk(0x7F);

	MOCKER(FC_LOG1).expects(once());

	ret = stub_FC_ChangePoint(FcId, PolicyId, Pri, ModemId);

	EXPECT_EQ(-1, ret);

	stub_FC_SetFcEnableMsk(0);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_ChangePoint
��������:FC_ChangePoint
���Ա��:Test_FC_ChangePoint_005
���Ա���:FC_ChangePoint
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_ChangePoint,UT05_ModemIdInvalid)
{
	char FcId;
	char PolicyId;
	char Pri;
	short ModemId;
	int ret = 1;

	FcId = 25;
	PolicyId = 6;
	Pri = 5;
	ModemId = 2;

	stub_FC_SetFcEnableMsk(0x7F);

	MOCKER(FC_LOG1).expects(once());

	ret = stub_FC_ChangePoint(FcId, PolicyId, Pri, ModemId);

	EXPECT_EQ(-1, ret);

	stub_FC_SetFcEnableMsk(0);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_ChangePoint
��������:FC_ChangePoint
���Ա��:Test_FC_ChangePoint_006
���Ա���:FC_ChangePoint
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_ChangePoint,UT06_Disabled)
{
	char FcId;
	char PolicyId;
	char Pri;
	short ModemId;
	int ret = 1;

	FcId = 25;
	PolicyId = 6;
	Pri = 5;
	ModemId = 1;

	stub_FC_SetFcEnableMsk(0x00);

	MOCKER(FC_LOG1).expects(once());

	ret = stub_FC_ChangePoint(FcId, PolicyId, Pri, ModemId);

	EXPECT_EQ(0, ret);

	stub_FC_SetFcEnableMsk(0);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_ChangePoint
��������:FC_ChangePoint
���Ա��:Test_FC_ChangePoint_007
���Ա���:FC_ChangePoint
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_ChangePoint,UT07_SndMsgFail)
{
	char FcId;
	char PolicyId;
	char Pri;
	short ModemId;
	int ret = 1;

	FcId = 25;
	PolicyId = 6;
	Pri = 5;
	ModemId = 1;

	stub_FC_SetFcEnableMsk(0x7F);

	MOCKER(FC_LOG1).expects(once());
	MOCKER(FC_SndChangePointMsg).stubs().will(returnValue((unsigned int)1));

	ret = stub_FC_ChangePoint(FcId, PolicyId, Pri, ModemId);

	EXPECT_EQ(-1, ret);

	stub_FC_SetFcEnableMsk(0);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_ChangePoint
��������:FC_ChangePoint
���Ա��:Test_FC_ChangePoint_008
���Ա���:FC_ChangePoint
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_ChangePoint,UT08_SndMsgSucc)
{
	char FcId;
	char PolicyId;
	char Pri;
	short ModemId;
	int ret = 1;

	FcId = 25;
	PolicyId = 6;
	Pri = 5;
	ModemId = 1;

	stub_FC_SetFcEnableMsk(0x7F);

	MOCKER(FC_LOG1).expects(once());
	MOCKER(FC_SndChangePointMsg).stubs().will(returnValue((unsigned int)0));

	ret = stub_FC_ChangePoint(FcId, PolicyId, Pri, ModemId);

	EXPECT_EQ(0, ret);

	stub_FC_SetFcEnableMsk(0);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_POINT_Get
��������:FC_POINT_Get
���Ա��:Test_FC_POINT_Get_001
���Ա���:FC_POINT_Get
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Get,UT01_ExceedMaxPointNum)
{
	int ret = 1;
	char FcId = 3;

	ret = stub_FC_POINT_Get_MaxPointNum(FcId);

	EXPECT_EQ(-1, ret);

	stub_FC_POINT_MemSet();

}

/*****************************************************************************
������:	 Test_FC_POINT_Get
��������:FC_POINT_Get
���Ա��:Test_FC_POINT_Get_002
���Ա���:FC_POINT_Get
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Get,UT02_None)
{
	int ret = 1;
	char FcId = 3;

	ret = stub_FC_POINT_Get_Fail(FcId);

	EXPECT_EQ(-1, ret);

	stub_FC_POINT_MemSet();

}

/*****************************************************************************
������:	 Test_FC_POINT_Get
��������:FC_POINT_Get
���Ա��:Test_FC_POINT_Get_003
���Ա���:FC_POINT_Get
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Get,UT03_Succ)
{
	int ret = 1;
	char FcId = 3;

	ret = stub_FC_POINT_Get_Succ(FcId);

	EXPECT_EQ(0, ret);

	stub_FC_POINT_MemSet();

}

/*****************************************************************************
������:	 Test_FC_POINT_Add
��������:FC_POINT_Add
���Ա��:Test_FC_POINT_Add_001
���Ա���:FC_POINT_Add
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Add,UT01_ExceedMaxNum)
{
	int ret = 1;

	stub_FC_POINT_SetPointNum(11);

	ret = stub_FC_POINT_Add();

	EXPECT_EQ(-1, ret);

	stub_FC_POINT_MemSet();

}

/*****************************************************************************
������:	 Test_FC_POINT_Add
��������:FC_POINT_Add
���Ա��:Test_FC_POINT_Add_002
���Ա���:FC_POINT_Add
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Add,UT02_FcIdAlreadyExist)
{
	int ret = 1;

	stub_FC_POINT_Add_SetPointInfo(3);

	ret = stub_FC_POINT_Add();

	EXPECT_EQ(0, ret);

	stub_FC_POINT_MemSet();

}

/*****************************************************************************
������:	 Test_FC_POINT_Add
��������:FC_POINT_Add
���Ա��:Test_FC_POINT_Add_003
���Ա���:FC_POINT_Add
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Add,UT03_FcIdNotFound)
{
	int ret = 1;

	stub_FC_POINT_Add_SetPointInfo(5);

	ret = stub_FC_POINT_Add();

	EXPECT_EQ(0, ret);

	stub_FC_POINT_MemSet();

}

/*****************************************************************************
������:	 Test_FC_POINT_Add
��������:FC_POINT_Add
���Ա��:Test_FC_POINT_Add_004
���Ա���:FC_POINT_Add
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Add,UT04_ReachMaxNum)
{
	int ret = 1;

	stub_FC_POINT_MemSet();

	stub_FC_POINT_SetPointNum(10);

	ret = stub_FC_POINT_Add();

	EXPECT_EQ(-1, ret);

	stub_FC_POINT_MemSet();

}

/*****************************************************************************
������:	 Test_FC_POINT_Del
��������:FC_POINT_Del
���Ա��:Test_FC_POINT_Del_001
���Ա���:Test_FC_POINT_Del
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Del,UT01_ExceedMaxNum)
{
	int ret = 1;

	stub_FC_POINT_MemSet();

	stub_FC_POINT_SetPointNum(11);

	ret = stub_FC_POINT_Del(3);

	EXPECT_EQ(-1, ret);

	stub_FC_POINT_MemSet();

}

/*****************************************************************************
������:	 Test_FC_POINT_Del
��������:FC_POINT_Del
���Ա��:Test_FC_POINT_Del_002
���Ա���:Test_FC_POINT_Del
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Del,UT02_FoundFcPoint)
{
	int ret = 1;

	stub_FC_POINT_MemSet();

	stub_FC_POINT_Add_SetPointInfo(3);

	ret = stub_FC_POINT_Del(3);

	EXPECT_EQ(0, ret);

	stub_FC_POINT_MemSet();

}

/*****************************************************************************
������:	 Test_FC_POINT_Del
��������:FC_POINT_Del
���Ա��:Test_FC_POINT_Del_003
���Ա���:Test_FC_POINT_Del
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Del,UT03_FoundFcPoint2)
{
	int ret = 1;

	stub_FC_POINT_MemSet();

	stub_FC_POINT_Add_SetPointInfo(3);

	ret = stub_FC_POINT_Del(0);

	EXPECT_EQ(0, ret);

	stub_FC_POINT_MemSet();

}

/*****************************************************************************
������:	 Test_FC_POINT_Del
��������:FC_POINT_Del
���Ա��:Test_FC_POINT_Del_004
���Ա���:Test_FC_POINT_Del
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Del,UT04_NotFoundFcPoint)
{
	int ret = 1;

	stub_FC_POINT_MemSet();

	stub_FC_POINT_Add_SetPointInfo(5);

	ret = stub_FC_POINT_Del(3);

	EXPECT_EQ(0, ret);

	stub_FC_POINT_MemSet();

}


/*****************************************************************************
������:	 Test_FC_POINT_SetFc
��������:FC_POINT_SetFc
���Ա��:Test_FC_POINT_SetFc_001
���Ա���:FC_POINT_SetFc
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_SetFc,UT01_NotFoundFcPoint)
{
	int ret = -1;
	unsigned int PolicyMask = 0x7F;
	char FcId = 3;

	MOCKER(FC_POINT_Get).stubs().will(returnValue((void *)0));

	ret = stub_FC_POINT_SetFc(PolicyMask, FcId);

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

}

/*****************************************************************************
������:	 Test_FC_POINT_SetFc
��������:FC_POINT_SetFc
���Ա��:Test_FC_POINT_SetFc_002
���Ա���:FC_POINT_SetFc
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_SetFc,UT02_NeedSetTrueSetFuncExists)
{
	int ret = -1;
	unsigned int PolicyMask = 0x7F;
	int FcMask = 0;
	void *pSetFunc = (void *)0x123;
	void *pClrFunc = (void *)0x123;;
	char FcId = 3;

	stub_FC_POINT_SetFc_SetPoint(PolicyMask, FcId, FcMask,0,(void *)pSetFunc, (void *)pClrFunc);

	ret = stub_FC_POINT_SetFc(PolicyMask, FcId);

	EXPECT_EQ(1, ret);

	stub_FC_POINT_MemSet();

}

/*****************************************************************************
������:	 Test_FC_POINT_SetFc
��������:FC_POINT_SetFc
���Ա��:Test_FC_POINT_SetFc_003
���Ա���:FC_POINT_SetFc
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_SetFc,UT03_NeedSetTrueSetFuncNull)
{
	int ret = -1;
	unsigned int PolicyMask = 0x7F;
	int FcMask = 0;
	void *pSetFunc = (void *)0;
	void *pClrFunc = (void *)0x123;;
	char FcId = 3;

	stub_FC_POINT_SetFc_SetPoint(PolicyMask, FcId, FcMask,0,NULL, NULL);

	ret = stub_FC_POINT_SetFc(PolicyMask, FcId);

	EXPECT_EQ(1, ret);

	stub_FC_POINT_MemSet();

}

/*****************************************************************************
������:	 Test_FC_POINT_SetFc
��������:FC_POINT_SetFc
���Ա��:Test_FC_POINT_SetFc_004
���Ա���:FC_POINT_SetFc
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_SetFc,UT04_NeedSetFalse)
{
	int ret = -1;
	unsigned int PolicyMask = 0x7F;
	int FcMask = 1;
	void *pSetFunc = (void *)0;
	void *pClrFunc = (void *)0x123;;
	char FcId = 3;

	stub_FC_POINT_SetFc_SetPoint(PolicyMask, FcId, FcMask,0,NULL, NULL);

	ret = stub_FC_POINT_SetFc(PolicyMask, FcId);

	EXPECT_EQ(0, ret);

	stub_FC_POINT_MemSet();

}

/*****************************************************************************
������:	 Test_FC_POINT_ClrFc
��������:FC_POINT_ClrFc
���Ա��:Test_FC_POINT_ClrFc_001
���Ա���:FC_POINT_ClrFc
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_ClrFc,UT01_NotFoundFcPoint)
{
	int ret = -1;
	unsigned int PolicyMask = 0x7F;
	char FcId = 3;

	MOCKER(FC_POINT_Get).stubs().will(returnValue((void *)0));

	ret = stub_FC_POINT_ClrFc(PolicyMask, FcId);

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

}

/*****************************************************************************
������:	 Test_FC_POINT_ClrFc
��������:FC_POINT_ClrFc
���Ա��:Test_FC_POINT_ClrFc_002
���Ա���:FC_POINT_ClrFc
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_ClrFc,UT02_NoMask)
{
	int ret = -1;
	unsigned int PolicyMask = 0x00;
	int FcMask = 1;
	void *pSetFunc = (void *)0x123;
	void *pClrFunc = (void *)0x123;;
	char FcId = 3;

	stub_FC_POINT_SetFc_SetPoint(PolicyMask, FcId, FcMask,0,(void *)pSetFunc, (void *)pClrFunc);

	ret = stub_FC_POINT_ClrFc(PolicyMask, FcId);

	EXPECT_EQ(0, ret);

	stub_FC_POINT_MemSet();

}

/*****************************************************************************
������:	 Test_FC_POINT_ClrFc
��������:FC_POINT_ClrFc
���Ա��:Test_FC_POINT_ClrFc_003
���Ա���:FC_POINT_ClrFc
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_ClrFc,UT03_NeedSetFalse)
{
	int ret = -1;
	unsigned int PolicyMask = 0x01;
	int FcMask = 3;
	void *pSetFunc = (void *)0x123;
	void *pClrFunc = (void *)0x123;;
	char FcId = 3;

	stub_FC_POINT_SetFc_SetPoint(PolicyMask, FcId, FcMask,0,(void *)pSetFunc, (void *)pClrFunc);

	MOCKER(FC_MNTN_TracePointFcEvent).expects(once());

	ret = stub_FC_POINT_ClrFc(PolicyMask, FcId);

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

	stub_FC_POINT_MemSet();

}

/*****************************************************************************
������:	 Test_FC_POINT_ClrFc
��������:FC_POINT_ClrFc
���Ա��:Test_FC_POINT_ClrFc_004
���Ա���:FC_POINT_ClrFc
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_ClrFc,UT04_NeedSetTrueSetFuncExists)
{
	int ret = -1;
	unsigned int PolicyMask = 0x01;
	int FcMask = 1;
	void *pSetFunc = (void *)0x123;
	void *pClrFunc = (void *)0x123;;
	char FcId = 3;

	stub_FC_POINT_SetFc_SetPoint(PolicyMask, FcId, FcMask,0,(void *)pSetFunc, (void *)pClrFunc);

	MOCKER(FC_MNTN_TracePointFcEvent).expects(once());

	ret = stub_FC_POINT_ClrFc(PolicyMask, FcId);

	EXPECT_EQ(1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

	stub_FC_POINT_MemSet();

}

/*****************************************************************************
������:	 Test_FC_POINT_ClrFc
��������:FC_POINT_ClrFc
���Ա��:Test_FC_POINT_ClrFc_005
���Ա���:FC_POINT_ClrFc
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_ClrFc,UT05_NeedSetTrueSetFuncNull)
{
	int ret = -1;
	unsigned int PolicyMask = 0x01;
	int FcMask = 1;
	void *pSetFunc = (void *)0x123;
	void *pClrFunc = (void *)0x123;;
	char FcId = 3;

	stub_FC_POINT_SetFc_SetPoint(PolicyMask, FcId, FcMask, 0,NULL, NULL);

	MOCKER(FC_MNTN_TracePointFcEvent).expects(once());

	ret = stub_FC_POINT_ClrFc(PolicyMask, FcId);

	EXPECT_EQ(1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

	stub_FC_POINT_MemSet();
}

/*****************************************************************************
������:	 Test_FC_POINT_Reg
��������:FC_POINT_Reg
���Ա��:Test_FC_POINT_Reg_001
���Ա���:FC_POINT_Reg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Reg,UT01_AddFail)
{
	int ret = 1;

	MOCKER(FC_POINT_Add).stubs().will(returnValue((unsigned int)1));
	MOCKER(FC_LOG).expects(once());

	ret = stub_FC_POINT_Reg();

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_POINT_Reg
��������:FC_POINT_Reg
���Ա��:Test_FC_POINT_Reg_002
���Ա���:FC_POINT_Reg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Reg,UT02_PolicyHasThisFcId)
{
	int ret = 1;

	MOCKER(FC_POINT_Add).stubs().will(returnValue((unsigned int)0));
	MOCKER(FC_POLICY_GetPriWithFcId).stubs().will(returnValue((unsigned char)5));

	MOCKER(FC_LOG).expects(once());

	ret = stub_FC_POINT_Reg();

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_POINT_Reg
��������:FC_POINT_Reg
���Ա��:Test_FC_POINT_Reg_003
���Ա���:FC_POINT_Reg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Reg,UT03_Succ)
{
	int ret = 1;

	MOCKER(FC_POINT_Add).stubs().will(returnValue((unsigned int)0));
	MOCKER(FC_POLICY_GetPriWithFcId).stubs().will(returnValue((unsigned char)10));

	MOCKER(FC_POLICY_AddPoint).expects(once());

	ret = stub_FC_POINT_Reg();

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_POINT_DeReg
��������:FC_POINT_DeReg
���Ա��:Test_FC_POINT_DeReg_001
���Ա���:FC_POINT_DeReg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_DeReg,UT01_PointNotFound)
{
	int ret = 1;
	char FcId = 3;
	short ModemId = 0;

	MOCKER(FC_POINT_Get).stubs().will(returnValue((void *)0));

	ret = stub_FC_POINT_DeReg(FcId, ModemId);

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_POINT_DeReg
��������:FC_POINT_DeReg
���Ա��:Test_FC_POINT_DeReg_002
���Ա���:FC_POINT_DeReg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_DeReg,UT02_FromTheOtherModem)
{
	int ret = 1;
	char FcId = 3;
	short ModemId = 0;
	unsigned int PolicyMask = 0x01;
	int FcMask = 3;
	void *pSetFunc = (void *)0x123;
	void *pClrFunc = (void *)0x123;

	stub_FC_POINT_MemSet();

	stub_FC_POINT_SetFc_SetPoint(PolicyMask, FcId, FcMask,1,(void *)pSetFunc, (void *)pClrFunc);

	ret = stub_FC_POINT_DeReg(FcId, ModemId);

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

	stub_FC_POINT_MemSet();
}

/*****************************************************************************
������:	 Test_FC_POINT_DeReg
��������:FC_POINT_DeReg
���Ա��:Test_FC_POINT_DeReg_003
���Ա���:FC_POINT_DeReg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_DeReg,UT03_FindPolicy)
{
	int ret = 1;
	char FcId = 3;
	short ModemId = 0;
	unsigned int PolicyMask = 0x03;
	int FcMask = 3;
	void *pSetFunc = (void *)0x123;
	void *pClrFunc = (void *)0x123;

	stub_FC_POINT_MemSet();

	stub_FC_SetFcEnableMsk(0x01);

	stub_FC_POINT_SetFc_SetPoint(PolicyMask, FcId, FcMask,0,(void *)pSetFunc, (void *)pClrFunc);

	MOCKER(FC_POLICY_DelPoint).expects(once());
	MOCKER(FC_POINT_Del).expects(once());

	ret = stub_FC_POINT_DeReg(FcId, ModemId);

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

	stub_FC_POINT_MemSet();
}

/*****************************************************************************
������:	 Test_FC_POINT_DeReg
��������:FC_POINT_DeReg
���Ա��:Test_FC_POINT_DeReg_004
���Ա���:FC_POINT_DeReg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_DeReg,UT04_FindPolicyButDisabled)
{
	int ret = 1;
	char FcId = 3;
	short ModemId = 0;
	unsigned int PolicyMask = 0x03;
	int FcMask = 3;
	void *pSetFunc = (void *)0x123;
	void *pClrFunc = (void *)0x123;

	stub_FC_POINT_MemSet();

	stub_FC_SetFcEnableMsk(0x00);

	stub_FC_POINT_SetFc_SetPoint(PolicyMask, FcId, FcMask,0,(void *)pSetFunc, (void *)pClrFunc);

	MOCKER(FC_POINT_Del).expects(once());

	ret = stub_FC_POINT_DeReg(FcId, ModemId);

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

	stub_FC_POINT_MemSet();
}

/*****************************************************************************
������:	 Test_FC_POINT_DeReg
��������:FC_POINT_DeReg
���Ա��:Test_FC_POINT_DeReg_005
���Ա���:FC_POINT_DeReg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_DeReg,UT05_NotFindPolicy)
{
	int ret = 1;
	char FcId = 3;
	short ModemId = 0;
	unsigned int PolicyMask = 0;
	int FcMask = 3;
	void *pSetFunc = (void *)0x123;
	void *pClrFunc = (void *)0x123;

	stub_FC_POINT_MemSet();

	stub_FC_SetFcEnableMsk(0x00);

	stub_FC_POINT_SetFc_SetPoint(PolicyMask, FcId, FcMask,0,(void *)pSetFunc, (void *)pClrFunc);

	MOCKER(FC_POINT_Del).expects(once());

	ret = stub_FC_POINT_DeReg(FcId, ModemId);

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

	stub_FC_POINT_MemSet();
}

/*****************************************************************************
������:	 Test_FC_POINT_Change
��������:FC_POINT_Change
���Ա��:Test_FC_POINT_Change_001
���Ա���:FC_POINT_Change
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Change,UT01_NotFindPoint)
{
	int   ret = 1;
	char  FcId = 3;
	char  PolicyId;
	char  NewPri;
	short ModemId;

	MOCKER(FC_POINT_Get).stubs().will(returnValue((void *)0));

	ret = stub_FC_POINT_Change(FcId, PolicyId, NewPri, ModemId);

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

}

/*****************************************************************************
������:	 Test_FC_POINT_Change
��������:FC_POINT_Change
���Ա��:Test_FC_POINT_Change_002
���Ա���:FC_POINT_Change
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Change,UT02_OldPriInvalid)
{
	int   ret = 1;
	char  FcId = 3;
	char  PolicyId = 0;
	char  NewPri = 0;
	short ModemId = 0;
	unsigned long Point;

	MOCKER(FC_POINT_Get).stubs().will(returnValue((void *)(&Point)));
	MOCKER(FC_POLICY_GetPriWithFcId).stubs().will(returnValue((unsigned char)10));

	ret = stub_FC_POINT_Change(FcId, PolicyId, NewPri, ModemId);

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

}

/*****************************************************************************
������:	 Test_FC_POINT_Change
��������:FC_POINT_Change
���Ա��:Test_FC_POINT_Change_003
���Ա���:FC_POINT_Change
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Change,UT03_OldEqualsNew)
{
	int   ret = 1;
	char  FcId = 3;
	char  PolicyId = 0;
	char  NewPri = 5;
	short ModemId = 0;
	unsigned int PolicyMask = 0x01;
	int FcMask = 3;
	void *pSetFunc = (void *)0x123;
	void *pClrFunc = (void *)0x123;

	stub_FC_POINT_MemSet();

	stub_FC_POINT_SetFc_SetPoint(PolicyMask, FcId, FcMask,1,(void *)pSetFunc, (void *)pClrFunc);

	MOCKER(FC_POLICY_GetPriWithFcId).stubs().will(returnValue((unsigned char)5));

	ret = stub_FC_POINT_Change(FcId, PolicyId, NewPri, ModemId);

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

	stub_FC_POINT_MemSet();

}

/*****************************************************************************
������:	 Test_FC_POINT_Change
��������:FC_POINT_Change
���Ա��:Test_FC_POINT_Change_004
���Ա���:FC_POINT_Change
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POINT_Change,UT03_OldNotEqualsNew)
{
	int   ret = 1;
	char  FcId = 3;
	char  PolicyId = 0;
	char  NewPri = 6;
	short ModemId = 0;
	unsigned int PolicyMask = 0x01;
	int FcMask = 3;
	void *pSetFunc = (void *)0x123;
	void *pClrFunc = (void *)0x123;

	stub_FC_POINT_MemSet();

	stub_FC_POINT_SetFc_SetPoint(PolicyMask, FcId, FcMask,1,(void *)pSetFunc, (void *)pClrFunc);

	MOCKER(FC_POLICY_GetPriWithFcId).stubs().will(returnValue((unsigned char)5));

	ret = stub_FC_POINT_Change(FcId, PolicyId, NewPri, ModemId);

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

	stub_FC_POINT_MemSet();

}

/*****************************************************************************
������:	 Test_FC_POLICY_TrimInvalidPri
��������:FC_POLICY_TrimInvalidPri
���Ա��:Test_FC_POLICY_TrimInvalidPri_001
���Ա���:FC_POLICY_TrimInvalidPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_TrimInvalidPri,UT01_InvalidPri)
{
	char DonePri = 0;
	int ret = -1;

	ret = stub_FC_POLICY_TrimInvalidPri(DonePri);

	EXPECT_EQ(0, ret);
}

/*****************************************************************************
������:	 Test_FC_POLICY_TrimInvalidPri
��������:FC_POLICY_TrimInvalidPri
���Ա��:Test_FC_POLICY_TrimInvalidPri_002
���Ա���:FC_POLICY_TrimInvalidPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_TrimInvalidPri,UT02_AllPriValidFalse)
{
	char DonePri = 1;
	int ret = -1;

	ret = stub_FC_POLICY_TrimInvalidPri(DonePri);

	EXPECT_EQ(1, ret);
}

/*****************************************************************************
������:	 Test_FC_POLICY_TrimInvalidPri
��������:FC_POLICY_TrimInvalidPri
���Ա��:Test_FC_POLICY_TrimInvalidPri_003
���Ա���:FC_POLICY_TrimInvalidPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_TrimInvalidPri,UT03_NotAllPriValidFalse)
{
	char DonePri = 4;
	int ret = -1;

	ret = stub_FC_POLICY_TrimInvalidPri(DonePri);

	EXPECT_EQ(1, ret);
}

/*****************************************************************************
������:	 Test_FC_POLICY_UpWithOnePri
��������:FC_POLICY_UpWithOnePri
���Ա��:Test_FC_POLICY_UpWithOnePri_001
���Ա���:FC_POLICY_UpWithOnePri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_UpWithOnePri,UT01_ExceedMaxNum)
{
	char FcIdCnt = 11;
	int ret = -1;

	ret = stub_FC_POLICY_UpWithOnePri(FcIdCnt);

	EXPECT_EQ(0,ret);

}

/*****************************************************************************
������:	 Test_FC_POLICY_UpWithOnePri
��������:FC_POLICY_UpWithOnePri
���Ա��:Test_FC_POLICY_UpWithOnePri_002
���Ա���:FC_POLICY_UpWithOnePri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_UpWithOnePri,UT02_CntEquals0)
{
	char FcIdCnt = 0;
	int ret = -1;

	ret = stub_FC_POLICY_UpWithOnePri(FcIdCnt);

	EXPECT_EQ(1,ret);

}


/*****************************************************************************
������:	 Test_FC_POLICY_UpWithOnePri
��������:FC_POLICY_UpWithOnePri
���Ա��:Test_FC_POLICY_UpWithOnePri_003
���Ա���:FC_POLICY_UpWithOnePri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_UpWithOnePri,UT03_CntValid)
{
	char FcIdCnt = 2;
	int ret = -1;

	ret = stub_FC_POLICY_UpWithOnePri(FcIdCnt);

	EXPECT_EQ(1,ret);

}

/*****************************************************************************
������:	 Test_FC_POLICY_DownWithOnePri
��������:FC_POLICY_DownWithOnePri
���Ա��:Test_FC_POLICY_DownWithOnePri_001
���Ա���:FC_POLICY_DownWithOnePri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_DownWithOnePri,UT01_ExceedMaxNum)
{
	char FcIdCnt = 11;
	int ret = -1;

	ret = stub_FC_POLICY_DownWithOnePri(FcIdCnt);

	EXPECT_EQ(0,ret);

}

/*****************************************************************************
������:	 Test_FC_POLICY_DownWithOnePri
��������:FC_POLICY_DownWithOnePri
���Ա��:Test_FC_POLICY_DownWithOnePri_002
���Ա���:FC_POLICY_DownWithOnePri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_DownWithOnePri,UT02_CntEquals0)
{
	char FcIdCnt = 0;
	int ret = -1;

	ret = stub_FC_POLICY_DownWithOnePri(FcIdCnt);

	EXPECT_EQ(1,ret);

}


/*****************************************************************************
������:	 Test_FC_POLICY_DownWithOnePri
��������:FC_POLICY_DownWithOnePri
���Ա��:Test_FC_POLICY_DownWithOnePri_003
���Ա���:FC_POLICY_DownWithOnePri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_DownWithOnePri,UT03_CntValid)
{
	char FcIdCnt = 2;
	int ret = -1;

	ret = stub_FC_POLICY_DownWithOnePri(FcIdCnt);

	EXPECT_EQ(1,ret);

}

/*****************************************************************************
������:	 Test_FC_POLICY_Up
��������:FC_POLICY_Up
���Ա��:Test_FC_POLICY_Up_001
���Ա���:FC_POLICY_Up
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_Up,UT01_DoneHigherThanHighest)
{
	int ret = -1;
	char DonePri = 3;
	char HighestPri = 3;
	char Valid = 1;

	ret = stub_FC_POLICY_Up(DonePri, HighestPri, Valid);

	EXPECT_EQ(0,ret);

}

/*****************************************************************************
������:	 Test_FC_POLICY_Up
��������:FC_POLICY_Up
���Ա��:Test_FC_POLICY_Up_002
���Ա���:FC_POLICY_Up
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_Up,UT02_PriValid)
{
	int ret = -1;
	char DonePri = 3;
	char HighestPri = 7;
	char Valid = 1;

	MOCKER(FC_POLICY_UpWithOnePri).expects(once());
	MOCKER(FC_MNTN_TracePolicy).expects(once());

	ret = stub_FC_POLICY_Up(DonePri, HighestPri, Valid);

	EXPECT_EQ(0,ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

}

/*****************************************************************************
������:	 Test_FC_POLICY_Up
��������:FC_POLICY_Up
���Ա��:Test_FC_POLICY_Up_003
���Ա���:FC_POLICY_Up
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_Up,UT03_PriInvalid)
{
	int ret = -1;
	char DonePri = 3;
	char HighestPri = 7;
	char Valid = 0;

	MOCKER(FC_MNTN_TracePolicy).expects(once());

	ret = stub_FC_POLICY_Up(DonePri, HighestPri, Valid);

	EXPECT_EQ(0,ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

}

/*****************************************************************************
������:	 Test_FC_POLICY_UpToTargetPri
��������:FC_POLICY_UpToTargetPri
���Ա��:Test_FC_POLICY_UpToTargetPri_001
���Ա���:FC_POLICY_UpToTargetPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_UpToTargetPri,UT01_TargetInvalid)
{
	int ret = 1;
	char DonePri = 4;
	char TargetPri = 10;
	char Valid = 1;

	ret = stub_FC_POLICY_UpToTargetPri(DonePri, TargetPri, Valid);

	EXPECT_EQ(-1,ret);

}

/*****************************************************************************
������:	 Test_FC_POLICY_UpToTargetPri
��������:FC_POLICY_UpToTargetPri
���Ա��:Test_FC_POLICY_UpToTargetPri_002
���Ա���:FC_POLICY_UpToTargetPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_UpToTargetPri,UT02_DoneHigherThanTarget)
{
	int ret = -1;
	char DonePri = 4;
	char TargetPri = 3;
	char Valid = 1;

	ret = stub_FC_POLICY_UpToTargetPri(DonePri, TargetPri, Valid);

	EXPECT_EQ(0,ret);

}

/*****************************************************************************
������:	 Test_FC_POLICY_UpToTargetPri
��������:FC_POLICY_UpToTargetPri
���Ա��:Test_FC_POLICY_UpToTargetPri_003
���Ա���:FC_POLICY_UpToTargetPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_UpToTargetPri,UT03_PriValid)
{
	int ret = -1;
	char DonePri = 4;
	char TargetPri = 7;
	char Valid = 1;

	MOCKER(FC_POLICY_UpWithOnePri).expects(once());
	MOCKER(FC_MNTN_TracePolicy).expects(once());

	ret = stub_FC_POLICY_UpToTargetPri(DonePri, TargetPri, Valid);

	EXPECT_EQ(0,ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

}

/*****************************************************************************
������:	 Test_FC_POLICY_UpToTargetPri
��������:FC_POLICY_UpToTargetPri
���Ա��:Test_FC_POLICY_UpToTargetPri_004
���Ա���:FC_POLICY_UpToTargetPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_UpToTargetPri,UT04_PriInvalid)
{
	int ret = -1;
	char DonePri = 4;
	char TargetPri = 7;
	char Valid = 0;

	MOCKER(FC_MNTN_TracePolicy).expects(once());

	ret = stub_FC_POLICY_UpToTargetPri(DonePri, TargetPri, Valid);

	EXPECT_EQ(0,ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

}

/*****************************************************************************
������:	 Test_FC_POLICY_Down
��������:FC_POLICY_Down
���Ա��:Test_FC_POLICY_Down_001
���Ա���:FC_POLICY_Down
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_Down,UT01_DonePriInvalid)
{
	int ret = -1;
	char DonePri = 0;
	char Valid = 0;

	ret = stub_FC_POLICY_Down(DonePri,Valid);

	EXPECT_EQ(0,ret);
}

/*****************************************************************************
������:	 Test_FC_POLICY_Down
��������:FC_POLICY_Down
���Ա��:Test_FC_POLICY_Down_002
���Ա���:FC_POLICY_Down
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_Down,UT02_PriInvalid)
{
	int ret = -1;
	char DonePri = 3;
	char Valid = 0;

	MOCKER(FC_MNTN_TracePolicy).expects(once());

	ret = stub_FC_POLICY_Down(DonePri,Valid);

	EXPECT_EQ(0,ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_POLICY_Down
��������:FC_POLICY_Down
���Ա��:Test_FC_POLICY_Down_003
���Ա���:FC_POLICY_Down
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_Down,UT03_PriValid)
{
	int ret = -1;
	char DonePri = 3;
	char Valid = 1;

	MOCKER(FC_MNTN_TracePolicy).expects(once());
	MOCKER(FC_POLICY_DownWithOnePri).expects(once());

	ret = stub_FC_POLICY_Down(DonePri,Valid);

	EXPECT_EQ(0,ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_POLICY_DownToTargetPri
��������:FC_POLICY_DownToTargetPri
���Ա��:Test_FC_POLICY_DownToTargetPri_001
���Ա���:FC_POLICY_DownToTargetPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_DownToTargetPri,UT01_TargetInvalid)
{
	int ret = 1;
	char DonePri = 4;
	char TargetPri = 10;
	char Valid = 1;

	ret = stub_FC_POLICY_DownToTargetPri(DonePri, TargetPri, Valid);

	EXPECT_EQ(0,ret);

}

/*****************************************************************************
������:	 Test_FC_POLICY_DownToTargetPri
��������:FC_POLICY_DownToTargetPri
���Ա��:Test_FC_POLICY_DownToTargetPri_002
���Ա���:FC_POLICY_DownToTargetPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_DownToTargetPri,UT02_PriInvalid)
{
	int ret = 1;
	char DonePri = 4;
	char TargetPri = 1;
	char Valid = 0;

	MOCKER(FC_MNTN_TracePolicy).expects(once());

	ret = stub_FC_POLICY_DownToTargetPri(DonePri, TargetPri, Valid);

	EXPECT_EQ(0,ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

}

/*****************************************************************************
������:	 Test_FC_POLICY_DownToTargetPri
��������:FC_POLICY_DownToTargetPri
���Ա��:Test_FC_POLICY_DownToTargetPri_003
���Ա���:FC_POLICY_DownToTargetPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_DownToTargetPri,UT03_PriValid)
{
	int ret = 1;
	char DonePri = 4;
	char TargetPri = 1;
	char Valid = 1;

	MOCKER(FC_MNTN_TracePolicy).expects(once());
	MOCKER(FC_POLICY_DownWithOnePri).expects(once());

	ret = stub_FC_POLICY_DownToTargetPri(DonePri, TargetPri, Valid);

	EXPECT_EQ(0,ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

}

/*****************************************************************************
������:	 Test_FC_POLICY_UpdateHighestPri
��������:FC_POLICY_UpdateHighestPri
���Ա��:Test_FC_POLICY_UpdateHighestPri_001
���Ա���:FC_POLICY_UpdateHighestPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_UpdateHighestPri,UT01_PriValid)
{
	int ret = -1;
	char Valid = 1;

	ret = stub_FC_POLICY_UpdateHighestPri(Valid);

	EXPECT_EQ(1, ret);
}

/*****************************************************************************
������:	 Test_FC_POLICY_UpdateHighestPri
��������:FC_POLICY_UpdateHighestPri
���Ա��:Test_FC_POLICY_UpdateHighestPri_002
���Ա���:FC_POLICY_UpdateHighestPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_UpdateHighestPri,UT02_PriInvalid)
{
	int ret = -1;
	char Valid = 0;

	ret = stub_FC_POLICY_UpdateHighestPri(Valid);

	EXPECT_EQ(0, ret);
}

/*****************************************************************************
������:	 Test_FC_POLICY_AddPointForPri
��������:FC_POLICY_AddPointForPri
���Ա��:Test_FC_POLICY_AddPointForPri_001
���Ա���:FC_POLICY_AddPointForPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_AddPointForPri,UT01_PointPriInvalid)
{
	char Valid = 0;
	char Cnt = 1;
	char PointPri = 11;
	char FcId = 3;
	int ret = 1;

	MOCKER(FC_LOG).expects(once());

	ret = stub_FC_POLICY_AddPointForPri(Valid, Cnt, PointPri, FcId);

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_POLICY_AddPointForPri
��������:FC_POLICY_AddPointForPri
���Ա��:Test_FC_POLICY_AddPointForPri_002
���Ա���:FC_POLICY_AddPointForPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_AddPointForPri,UT02_ExceedMaxCnt)
{
	char Valid = 0;
	char Cnt = 11;
	char PointPri = 3;
	char FcId = 3;
	int ret = 1;

	MOCKER(FC_LOG1).expects(once());

	ret = stub_FC_POLICY_AddPointForPri(Valid, Cnt, PointPri, FcId);

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_POLICY_AddPointForPri
��������:FC_POLICY_AddPointForPri
���Ա��:Test_FC_POLICY_AddPointForPri_003
���Ա���:FC_POLICY_AddPointForPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_AddPointForPri,UT03_PriValidSameFcId)
{
	char Valid = 1;
	char Cnt = 6;
	char PointPri = 3;
	char FcId = 3;
	int ret = 1;

	MOCKER(FC_LOG1).expects(once());

	ret = stub_FC_POLICY_AddPointForPri(Valid, Cnt, PointPri, FcId);

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_POLICY_AddPointForPri
��������:FC_POLICY_AddPointForPri
���Ա��:Test_FC_POLICY_AddPointForPri_004
���Ա���:FC_POLICY_AddPointForPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_AddPointForPri,UT04_PriValidDifferentFcId)
{
	char Valid = 1;
	char Cnt = 6;
	char PointPri = 3;
	char FcId = 5;
	int ret = 1;

	ret = stub_FC_POLICY_AddPointForPri(Valid, Cnt, PointPri, FcId);

	EXPECT_EQ(0, ret);

}

/*****************************************************************************
������:	 Test_FC_POLICY_AddPointForPri
��������:FC_POLICY_AddPointForPri
���Ա��:Test_FC_POLICY_AddPointForPri_005
���Ա���:FC_POLICY_AddPointForPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_AddPointForPri,UT05_PriInvalid)
{
	char Valid = 0;
	char Cnt = 6;
	char PointPri = 3;
	char FcId = 5;
	int ret = 1;

	ret = stub_FC_POLICY_AddPointForPri(Valid, Cnt, PointPri, FcId);

	EXPECT_EQ(0, ret);

}

/*****************************************************************************
������:	 Test_FC_POLICY_DelPointForPri
��������:FC_POLICY_DelPointForPri
���Ա��:Test_FC_POLICY_DelPointForPri_001
���Ա���:FC_POLICY_DelPointForPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_DelPointForPri,UT01_PointPriInvalid)
{
	char Cnt = 1;
	char PointPri = 11;
	char FcId = 3;
	int ret = 1;

	MOCKER(FC_LOG).expects(once());

	ret = stub_FC_POLICY_DelPointForPri(Cnt, PointPri, FcId);

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_POLICY_DelPointForPri
��������:FC_POLICY_DelPointForPri
���Ա��:Test_FC_POLICY_DelPointForPri_002
���Ա���:FC_POLICY_DelPointForPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_DelPointForPri,UT02_SameFcId)
{
	char Cnt = 5;
	char PointPri = 2;
	char FcId = 3;
	int ret = 1;

	ret = stub_FC_POLICY_DelPointForPri(Cnt, PointPri, FcId);

	EXPECT_EQ(0, ret);

}

/*****************************************************************************
������:	 Test_FC_POLICY_DelPointForPri
��������:FC_POLICY_DelPointForPri
���Ա��:Test_FC_POLICY_DelPointForPri_003
���Ա���:FC_POLICY_DelPointForPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_DelPointForPri,UT03_SameFcId2)
{
	char Cnt = 1;
	char PointPri = 2;
	char FcId = 3;
	int ret = 1;

	ret = stub_FC_POLICY_DelPointForPri(Cnt, PointPri, FcId);

	EXPECT_EQ(0, ret);

}

/*****************************************************************************
������:	 Test_FC_POLICY_DelPointForPri
��������:FC_POLICY_DelPointForPri
���Ա��:Test_FC_POLICY_DelPointForPri_004
���Ա���:FC_POLICY_DelPointForPri
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_DelPointForPri,UT04_DifferentFcId)
{
	char Cnt = 3;
	char PointPri = 2;
	char FcId = 5;
	int ret = 1;

	ret = stub_FC_POLICY_DelPointForPri(Cnt, PointPri, FcId);

	EXPECT_EQ(0, ret);

}

/*****************************************************************************
������:	 Test_FC_POLICY_AddPoint
��������:FC_POLICY_AddPoint
���Ա��:Test_FC_POLICY_AddPoint_001
���Ա���:FC_POLICY_AddPoint
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_AddPoint,UT01_pAdjustForUpFuncIsNull)
{
	void *pAdjustForUpFunc = NULL;
	char PointPri = 3;
	char DonePri = 3;

	int ret = 1;

	MOCKER(FC_POINT_SetFc).expects(once());
	MOCKER(FC_MNTN_TracePolicy).expects(once());

	ret = stub_FC_POLICY_AddPoint(pAdjustForUpFunc, PointPri, DonePri);

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_POLICY_AddPoint
��������:FC_POLICY_AddPoint
���Ա��:Test_FC_POLICY_AddPoint_002
���Ա���:FC_POLICY_AddPoint
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_AddPoint,UT02_pAdjustForUpFuncIsNotNull)
{
	void *pAdjustForUpFunc = (void *)FC_POLICY_ADJUST_FOR_UP_FUNC_TEMP;
	char PointPri = 3;
	char DonePri = 2;

	int ret = 1;

	MOCKER(FC_MNTN_TracePolicy).expects(once());

	ret = stub_FC_POLICY_AddPoint(pAdjustForUpFunc, PointPri, DonePri);

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_POLICY_GetPriWithFcId
��������:FC_POLICY_GetPriWithFcId
���Ա��:Test_FC_POLICY_GetPriWithFcId_001
���Ա���:FC_POLICY_GetPriWithFcId
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_GetPriWithFcId,UT01_AllFcIdCntInvalid)
{
	char TestcaseNum = 1;
	char FcId  = 6;

	int ret = -1;

	ret = stub_FC_POLICY_GetPriWithFcId(FcId, TestcaseNum);

	EXPECT_EQ(0, ret);
}

/*****************************************************************************
������:	 Test_FC_POLICY_GetPriWithFcId
��������:FC_POLICY_GetPriWithFcId
���Ա��:Test_FC_POLICY_GetPriWithFcId_002
���Ա���:FC_POLICY_GetPriWithFcId
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_GetPriWithFcId,UT02_AllDifferentFcId)
{
	char TestcaseNum = 2;
	char FcId  = 6;

	int ret = -1;

	ret = stub_FC_POLICY_GetPriWithFcId(FcId, TestcaseNum);

	EXPECT_EQ(0, ret);
}

/*****************************************************************************
������:	 Test_FC_POLICY_GetPriWithFcId
��������:FC_POLICY_GetPriWithFcId
���Ա��:Test_FC_POLICY_GetPriWithFcId_003
���Ա���:FC_POLICY_GetPriWithFcId
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_GetPriWithFcId,UT03_SameFcId)
{
	char TestcaseNum = 3;
	char FcId  = 6;

	int ret = -1;

	ret = stub_FC_POLICY_GetPriWithFcId(FcId, TestcaseNum);

	EXPECT_EQ(1, ret);
}

/*****************************************************************************
������:	 Test_FC_POLICY_DelPoint
��������:FC_POLICY_DelPoint
���Ա��:Test_FC_POLICY_DelPoint_001
���Ա���:FC_POLICY_DelPoint
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_DelPoint,UT01_InvalidPointPri)
{
	void *pAdjustForDownFunc = NULL;
	int ret = 1;

	MOCKER(FC_POINT_ClrFc).expects(once());
	MOCKER(FC_POLICY_GetPriWithFcId).stubs().will(returnValue((unsigned char)10));

	ret = stub_FC_POLICY_DelPoint(pAdjustForDownFunc);

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_POLICY_DelPoint
��������:FC_POLICY_DelPoint
���Ա��:Test_FC_POLICY_DelPoint_002
���Ա���:FC_POLICY_DelPoint
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_DelPoint,UT02_AdjustForDownFuncIsNull)
{
	void *pAdjustForDownFunc = NULL;
	int ret = 1;

	MOCKER(FC_POINT_ClrFc).expects(once());
	MOCKER(FC_POLICY_GetPriWithFcId).stubs().will(returnValue((unsigned char)2));
	MOCKER(FC_POLICY_DelPointForPri).expects(once());
	MOCKER(FC_MNTN_TracePolicy).expects(once());

	ret = stub_FC_POLICY_DelPoint(pAdjustForDownFunc);

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_POLICY_DelPoint
��������:FC_POLICY_DelPoint
���Ա��:Test_FC_POLICY_DelPoint_003
���Ա���:FC_POLICY_DelPoint
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_DelPoint,UT03_AdjustForDownFuncIsNotNull)
{
	void *pAdjustForDownFunc = (void *)FC_POLICY_ADJUST_FOR_UP_FUNC_TEMP;
	int ret = 1;

	MOCKER(FC_POINT_ClrFc).expects(once());
	MOCKER(FC_POLICY_GetPriWithFcId).stubs().will(returnValue((unsigned char)2));
	MOCKER(FC_POLICY_DelPointForPri).expects(once());
	MOCKER(FC_MNTN_TracePolicy).expects(once());

	ret = stub_FC_POLICY_DelPoint(pAdjustForDownFunc);

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_POLICY_ChangePoint
��������:FC_POLICY_ChangePoint
���Ա��:Test_FC_POLICY_ChangePoint_001
���Ա���:FC_POLICY_ChangePoint
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_ChangePoint,UT01_AdjustForUpFuncIsNotNullClrFlowCtrl)
{
	void *pAdjustForUpFunc = (void *)FC_POLICY_ADJUST_FOR_UP_FUNC_TEMP;
	char DonePri = 2;
	char NewPri = 3;
	char OldPri = 1;

	int ret = 1;

	MOCKER(FC_POINT_ClrFc).expects(once());

	ret = stub_FC_POLICY_ChangePoint(pAdjustForUpFunc, DonePri, NewPri, OldPri);

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_POLICY_ChangePoint
��������:FC_POLICY_ChangePoint
���Ա��:Test_FC_POLICY_ChangePoint_002
���Ա���:FC_POLICY_ChangePoint
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_ChangePoint,UT02_AdjustForUpFuncIsNullSetFlowCtrl)
{
	void *pAdjustForUpFunc = NULL;
	char DonePri = 2;
	char NewPri = 1;
	char OldPri = 3;

	int ret = 1;

	MOCKER(FC_POINT_SetFc).expects(once());

	ret = stub_FC_POLICY_ChangePoint(pAdjustForUpFunc, DonePri, NewPri, OldPri);

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_POLICY_GetPriCnt
��������:FC_POLICY_GetPriCnt
���Ա��:Test_FC_POLICY_GetPriCnt_001
���Ա���:FC_POLICY_GetPriCnt
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_GetPriCnt,UT01_GetCnt)
{
	int Cnt = 10;
	int ret = -1;

	ret = stub_FC_POLICY_GetPriCnt(Cnt);

	EXPECT_EQ(1, ret);
}

/*****************************************************************************
������:	 Test_FC_POLICY_Init
��������:FC_POLICY_Init
���Ա��:Test_FC_POLICY_Init_001
���Ա���:FC_POLICY_Init
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_POLICY_Init,UT01_Init)
{
	int ret = -1;

	ret = stub_FC_POLICY_Init();

	EXPECT_EQ(0, ret);
}

/*****************************************************************************
������:	 Test_FC_CFG_CheckCpuParam
��������:FC_CFG_CheckCpuParam
���Ա��:Test_FC_CFG_CheckCpuParam_001
���Ա���:FC_CFG_CheckCpuParam
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_CheckCpuParam,UT01_OverLoadIsLowerThanUnderLoad)
{
	int CpuOverLoadVal = 20;
	int CpuUnderLoadVal = 30;

	int ret = 1;

	ret = stub_FC_CFG_CheckCpuParam(CpuOverLoadVal, CpuUnderLoadVal);

	EXPECT_EQ(-1, ret);
}

/*****************************************************************************
������:	 Test_FC_CFG_CheckCpuParam
��������:FC_CFG_CheckCpuParam
���Ա��:Test_FC_CFG_CheckCpuParam_002
���Ա���:FC_CFG_CheckCpuParam
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_CheckCpuParam,UT02_OverLoadIs0)
{
	int CpuOverLoadVal = 0;
	int CpuUnderLoadVal = 0;

	int ret = 1;

	ret = stub_FC_CFG_CheckCpuParam(CpuOverLoadVal, CpuUnderLoadVal);

	EXPECT_EQ(-1, ret);
}

/*****************************************************************************
������:	 Test_FC_CFG_CheckCpuParam
��������:FC_CFG_CheckCpuParam
���Ա��:Test_FC_CFG_CheckCpuParam_003
���Ա���:FC_CFG_CheckCpuParam
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_CheckCpuParam,UT03_OverLoadIsOver100)
{
	int CpuOverLoadVal = 101;
	int CpuUnderLoadVal = 20;

	int ret = 1;

	ret = stub_FC_CFG_CheckCpuParam(CpuOverLoadVal, CpuUnderLoadVal);

	EXPECT_EQ(-1, ret);
}

/*****************************************************************************
������:	 Test_FC_CFG_CheckCpuParam
��������:FC_CFG_CheckCpuParam
���Ա��:Test_FC_CFG_CheckCpuParam_004
���Ա���:FC_CFG_CheckCpuParam
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_CheckCpuParam,UT04_CheckPass)
{
	int CpuOverLoadVal = 50;
	int CpuUnderLoadVal = 20;

	int ret = 1;

	ret = stub_FC_CFG_CheckCpuParam(CpuOverLoadVal, CpuUnderLoadVal);

	EXPECT_EQ(0, ret);
}

/*****************************************************************************
������:	 Test_FC_CFG_CheckMemParam
��������:FC_CFG_CheckMemParam
���Ա��:Test_FC_CFG_CheckMemParam_001
���Ա���:FC_CFG_CheckMemParam
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_CheckMemParam,UT01_ThresholdCntInvalid)
{
	int ThresholdCnt = 9;
	int SetThreshold = 10;
	int StopThreshold = 10;

	int ret = 1;

	ret = stub_FC_CFG_CheckMemParam(ThresholdCnt, SetThreshold, StopThreshold);

	EXPECT_EQ(-1, ret);
}

/*****************************************************************************
������:	 Test_FC_CFG_CheckMemParam
��������:FC_CFG_CheckMemParam
���Ա��:Test_FC_CFG_CheckMemParam_002
���Ա���:FC_CFG_CheckMemParam
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_CheckMemParam,UT02_ThresholdCntIs0)
{
	int ThresholdCnt = 0;
	int SetThreshold = 10;
	int StopThreshold = 10;

	int ret = 1;

	ret = stub_FC_CFG_CheckMemParam(ThresholdCnt, SetThreshold, StopThreshold);

	EXPECT_EQ(0, ret);
}

/*****************************************************************************
������:	 Test_FC_CFG_CheckMemParam
��������:FC_CFG_CheckMemParam
���Ա��:Test_FC_CFG_CheckMemParam_003
���Ա���:FC_CFG_CheckMemParam
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_CheckMemParam,UT03_MemSetIsFree)
{
	int ThresholdCnt = 5;
	int SetThreshold = 20;
	int StopThreshold = 10;

	int ret = 1;

	ret = stub_FC_CFG_CheckMemParam(ThresholdCnt, SetThreshold, StopThreshold);

	EXPECT_EQ(-1, ret);
}

/*****************************************************************************
������:	 Test_FC_CFG_CheckMemParam
��������:FC_CFG_CheckMemParam
���Ա��:Test_FC_CFG_CheckMemParam_004
���Ա���:FC_CFG_CheckMemParam
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_CheckMemParam,UT04_MemSetIsNotFree)
{
	int ThresholdCnt = 4;
	int SetThreshold = 20;
	int StopThreshold = 30;

	int ret = 1;

	ret = stub_FC_CFG_CheckMemParam(ThresholdCnt, SetThreshold, StopThreshold);

	EXPECT_EQ(0, ret);
}

/*****************************************************************************
������:	 Test_FC_CFG_CheckUlRateParam
��������:FC_CFG_CheckUlRateParam
���Ա��:Test_FC_CFG_CheckUlRateParam_001
���Ա���:FC_CFG_CheckUlRateParam
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_CheckUlRateParam,UT01_RateCntInvalid)
{
	char Cnt = 12;
	int ret = 1;

	ret = stub_FC_CFG_CheckUlRateParam(Cnt);

	EXPECT_EQ(-1, ret);
}

/*****************************************************************************
������:	 Test_FC_CFG_CheckUlRateParam
��������:FC_CFG_CheckUlRateParam
���Ա��:Test_FC_CFG_CheckUlRateParam_002
���Ա���:FC_CFG_CheckUlRateParam
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_CheckUlRateParam,UT02_RateCntValid)
{
	char Cnt = 6;
	int ret = 1;

	ret = stub_FC_CFG_CheckUlRateParam(Cnt);

	EXPECT_EQ(0, ret);
}

/*****************************************************************************
������:	 Test_FC_CFG_CheckParam
��������:FC_CFG_CheckParam
���Ա��:Test_FC_CFG_CheckParam_001
���Ա���:FC_CFG_CheckParam
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_CheckParam,UT01_TimerLenError)
{
	int ret = 1;
	int TimerLen = 1;

	MOCKER(FC_LOG1).expects(once());

	ret = stub_FC_CFG_CheckParam(TimerLen);

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_CFG_CheckParam
��������:FC_CFG_CheckParam
���Ա��:Test_FC_CFG_CheckParam_002
���Ա���:FC_CFG_CheckParam
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_CheckParam,UT02_FcCfgCpuAParamError)
{
	int ret = 1;
	int TimerLen = 3;

	MOCKER(FC_CFG_CheckCpuParam).stubs().will(returnValue((unsigned int)1));
	MOCKER(FC_LOG).expects(once());

	ret = stub_FC_CFG_CheckParam(TimerLen);

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_CFG_CheckParam
��������:FC_CFG_CheckParam
���Ա��:Test_FC_CFG_CheckParam_003
���Ա���:FC_CFG_CheckParam
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_CheckParam,UT03_FcCfgCpuCParamError)
{
	int ret = 1;
	int TimerLen = 3;

	MOCKER(FC_CFG_CheckCpuParam).stubs().will(returnObjectList((unsigned int)0,(unsigned int)1));
	MOCKER(FC_LOG).expects(once());

	ret = stub_FC_CFG_CheckParam(TimerLen);

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_CFG_CheckParam
��������:FC_CFG_CheckParam
���Ա��:Test_FC_CFG_CheckParam_004
���Ա���:FC_CFG_CheckParam
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_CheckParam,UT04_FcCfgMemParamError)
{
	int ret = 1;
	int TimerLen = 3;

	MOCKER(FC_CFG_CheckCpuParam).stubs().will(returnObjectList((unsigned int)0,(unsigned int)0));
	MOCKER(FC_CFG_CheckMemParam).stubs().will(returnValue((unsigned int)1));
	MOCKER(FC_LOG).expects(once());

	ret = stub_FC_CFG_CheckParam(TimerLen);

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_CFG_CheckParam
��������:FC_CFG_CheckParam
���Ա��:Test_FC_CFG_CheckParam_005
���Ա���:FC_CFG_CheckParam
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_CheckParam,UT05_FcCfgUmUlRateForCpuParamError)
{
	int ret = 1;
	int TimerLen = 3;

	MOCKER(FC_CFG_CheckCpuParam).stubs().will(returnObjectList((unsigned int)0,(unsigned int)0));
	MOCKER(FC_CFG_CheckMemParam).stubs().will(returnValue((unsigned int)0));
	MOCKER(FC_CFG_CheckUlRateParam).stubs().will(returnValue((unsigned int)1));
	MOCKER(FC_LOG).expects(once());

	ret = stub_FC_CFG_CheckParam(TimerLen);

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_CFG_CheckParam
��������:FC_CFG_CheckParam
���Ա��:Test_FC_CFG_CheckParam_006
���Ա���:FC_CFG_CheckParam
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_CheckParam,UT06_FcCfgUmUlRateForTmpParamError)
{
	int ret = 1;
	int TimerLen = 3;

	MOCKER(FC_CFG_CheckCpuParam).stubs().will(returnObjectList((unsigned int)0,(unsigned int)0));
	MOCKER(FC_CFG_CheckMemParam).stubs().will(returnValue((unsigned int)0));
	MOCKER(FC_CFG_CheckUlRateParam).stubs().will(returnObjectList((unsigned int)0,(unsigned int)1));
	MOCKER(FC_LOG).expects(once());

	ret = stub_FC_CFG_CheckParam(TimerLen);

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_CFG_CheckParam
��������:FC_CFG_CheckParam
���Ա��:Test_FC_CFG_CheckParam_007
���Ա���:FC_CFG_CheckParam
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_CheckParam,UT07_Pass)
{
	int ret = 1;
	int TimerLen = 3;

	MOCKER(FC_CFG_CheckCpuParam).stubs().will(returnObjectList((unsigned int)0,(unsigned int)0));
	MOCKER(FC_CFG_CheckMemParam).stubs().will(returnValue((unsigned int)0));
	MOCKER(FC_CFG_CheckUlRateParam).stubs().will(returnObjectList((unsigned int)0,(unsigned int)0));

	ret = stub_FC_CFG_CheckParam(TimerLen);

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_CFG_SetDefaultValue
��������:FC_CFG_SetDefaultValue
���Ա��:Test_FC_CFG_SetDefaultValue_001
���Ա���:FC_CFG_SetDefaultValue
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_SetDefaultValue,UT01_SetDefaultValue)
{
	int ret = 1;

	MOCKER(FC_LOG).expects(once());

	ret = stub_FC_CFG_SetDefaultValue();

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();

}

/*****************************************************************************
������:	 Test_FC_CFG_SetNvValue
��������:FC_CFG_SetNvValue
���Ա��:Test_FC_CFG_SetNvValue_001
���Ա���:FC_CFG_SetNvValue
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_SetNvValue,UT01_SetNvValue)
{
	int ret = 1;

	ret = stub_FC_CFG_SetNvValue();

	EXPECT_EQ(0, ret);

}

/*****************************************************************************
������:	 Test_FC_CFG_Init
��������:FC_CFG_Init
���Ա��:Test_FC_CFG_Init_001
���Ա���:FC_CFG_Init
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_Init,UT01_NvReadFail)
{
	int ret = 1;

	MOCKER(NV_ReadEx).stubs().will(returnValue((unsigned int)1));
	MOCKER(FC_LOG1).expects(once());
	MOCKER(FC_CFG_SetDefaultValue).expects(once());

	ret = stub_FC_CFG_Init();

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_CFG_Init
��������:FC_CFG_Init
���Ա��:Test_FC_CFG_Init_002
���Ա���:FC_CFG_Init
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_Init,UT02_CheckParamFail)
{
	int ret = 1;

	MOCKER(NV_ReadEx).stubs().will(returnValue((unsigned int)0));
	MOCKER(FC_LOG).expects(once());
	MOCKER(FC_CFG_CheckParam).stubs().will(returnValue((unsigned int)1));
	MOCKER(FC_CFG_SetDefaultValue).expects(once());

	ret = stub_FC_CFG_Init();

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_CFG_Init
��������:FC_CFG_Init
���Ա��:Test_FC_CFG_Init_003
���Ա���:FC_CFG_Init
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CFG_Init,UT03_OK)
{
	int ret = 1;

	MOCKER(NV_ReadEx).stubs().will(returnValue((unsigned int)0));
	MOCKER(FC_LOG).expects(never());
	MOCKER(FC_CFG_CheckParam).stubs().will(returnValue((unsigned int)0));
	MOCKER(FC_CFG_SetDefaultValue).expects(never());

	ret = stub_FC_CFG_Init();

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_SndCpuMsg
��������:FC_SndCpuMsg
���Ա��:Test_FC_SndCpuMsg_001
���Ա���:FC_SndCpuMsg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SndCpuMsg,UT01_AllocMsgFail)
{
	int ret = 1;

	MOCKER(V_AllocMsg).stubs().will(returnValue((void *)0));

	ret = stub_FC_SndCpuMsg();

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_SndCpuMsg
��������:FC_SndCpuMsg
���Ա��:Test_FC_SndCpuMsg_002
���Ա���:FC_SndCpuMsg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SndCpuMsg,UT02_SendMsgFail)
{
	int ret = 1;

	char a[36] = {0};

	MOCKER(V_AllocMsg).stubs().will(returnValue((void *)&a[0]));
	MOCKER(V_SendMsg).stubs().will(returnValue((unsigned int)1));

	ret = stub_FC_SndCpuMsg();

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_SndCpuMsg
��������:FC_SndCpuMsg
���Ա��:Test_FC_SndCpuMsg_003
���Ա���:FC_SndCpuMsg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SndCpuMsg,UT03_SendMsgSucc)
{
	int ret = 1;

	char a[36] = {0};

	MOCKER(V_AllocMsg).stubs().will(returnValue((void *)&a[0]));
	MOCKER(V_SendMsg).stubs().will(returnValue((unsigned int)0));

	ret = stub_FC_SndCpuMsg();

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_SndRegPointMsg
��������:FC_SndRegPointMsg
���Ա��:Test_FC_SndRegPointMsg_001
���Ա���:FC_SndRegPointMsg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SndRegPointMsg,UT01_AllocMsgFail)
{
	int ret = 1;

	MOCKER(V_AllocMsg).stubs().will(returnValue((void *)0));

	ret = stub_FC_SndRegPointMsg();

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_SndRegPointMsg
��������:FC_SndRegPointMsg
���Ա��:Test_FC_SndRegPointMsg_002
���Ա���:FC_SndRegPointMsg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SndRegPointMsg,UT02_SendMsgFail)
{
	int ret = 1;

	char a[36] = {0};

	MOCKER(V_AllocMsg).stubs().will(returnValue((void *)&a[0]));
	MOCKER(V_SendMsg).stubs().will(returnValue((unsigned int)1));
	MOCKER(V_MemCpy).stubs().will(returnValue((void *)0));
#if 1
	ret = stub_FC_SndRegPointMsg();

	EXPECT_EQ(-1, ret);
#endif
	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_SndRegPointMsg
��������:FC_SndRegPointMsg
���Ա��:Test_FC_SndRegPointMsg_003
���Ա���:FC_SndRegPointMsg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SndRegPointMsg,UT03_SendMsgSucc)
{
	int ret = 1;

	char a[36] = {0};

	MOCKER(V_AllocMsg).stubs().will(returnValue((void *)&a[0]));
	MOCKER(V_SendMsg).stubs().will(returnValue((unsigned int)0));
	MOCKER(V_MemCpy).stubs().will(returnValue((void *)0));

	ret = stub_FC_SndRegPointMsg();

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_SndDeRegPointMsg
��������:FC_SndDeRegPointMsg
���Ա��:Test_FC_SndDeRegPointMsg_001
���Ա���:FC_SndDeRegPointMsg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SndDeRegPointMsg,UT01_AllocMsgFail)
{
	int ret = 1;

	MOCKER(V_AllocMsg).stubs().will(returnValue((void *)0));

	ret = stub_FC_SndDeRegPointMsg();

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_SndDeRegPointMsg
��������:FC_SndDeRegPointMsg
���Ա��:Test_FC_SndDeRegPointMsg_002
���Ա���:FC_SndDeRegPointMsg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SndDeRegPointMsg,UT02_SendMsgFail)
{
	int ret = 1;

	char a[36] = {0};

	MOCKER(V_AllocMsg).stubs().will(returnValue((void *)&a[0]));
	MOCKER(V_SendMsg).stubs().will(returnValue((unsigned int)1));

	ret = stub_FC_SndDeRegPointMsg();

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_SndDeRegPointMsg
��������:FC_SndDeRegPointMsg
���Ա��:Test_FC_SndDeRegPointMsg_003
���Ա���:FC_SndDeRegPointMsg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SndDeRegPointMsg,UT03_SendMsgSucc)
{
	int ret = 1;

	char a[36] = {0};

	MOCKER(V_AllocMsg).stubs().will(returnValue((void *)&a[0]));
	MOCKER(V_SendMsg).stubs().will(returnValue((unsigned int)0));

	ret = stub_FC_SndDeRegPointMsg();

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_SndChangePointMsg
��������:FC_SndChangePointMsg
���Ա��:Test_FC_SndChangePointMsg_001
���Ա���:FC_SndChangePointMsg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SndChangePointMsg,UT01_AllocMsgFail)
{
	int ret = 1;

	MOCKER(V_AllocMsg).stubs().will(returnValue((void *)0));

	ret = stub_FC_SndChangePointMsg();

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_SndChangePointMsg
��������:FC_SndChangePointMsg
���Ա��:Test_FC_SndChangePointMsg_002
���Ա���:FC_SndChangePointMsg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SndChangePointMsg,UT02_SendMsgFail)
{
	int ret = 1;

	char a[36] = {0};

	MOCKER(V_AllocMsg).stubs().will(returnValue((void *)&a[0]));
	MOCKER(V_SendMsg).stubs().will(returnValue((unsigned int)1));

	ret = stub_FC_SndChangePointMsg();

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_SndChangePointMsg
��������:FC_SndChangePointMsg
���Ա��:Test_FC_SndChangePointMsg_003
���Ա���:FC_SndChangePointMsg
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SndChangePointMsg,UT03_SendMsgSucc)
{
	int ret = 1;

	char a[36] = {0};

	MOCKER(V_AllocMsg).stubs().will(returnValue((void *)&a[0]));
	MOCKER(V_SendMsg).stubs().will(returnValue((unsigned int)0));

	ret = stub_FC_SndChangePointMsg();

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_CommInit
��������:FC_CommInit
���Ա��:Test_FC_CommInit_001
���Ա���:FC_CommInit
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CommInit,UT01_FCCFGInitFail)
{
	int ret = 1;

	MOCKER(FC_CFG_Init).stubs().will(returnValue((unsigned int)1));

	ret = stub_FC_CommInit();

	EXPECT_EQ(-1, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_CommInit
��������:FC_CommInit
���Ա��:Test_FC_CommInit_002
���Ա���:FC_CommInit
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_CommInit,UT02_Pass)
{
	int ret = 1;

	MOCKER(FC_CFG_Init).stubs().will(returnValue((unsigned int)0));

	ret = stub_FC_CommInit();

	EXPECT_EQ(0, ret);

	// ��ԭ��ĺ���׮
    GlobalMockObject::reset();
}

/*****************************************************************************
������:	 Test_FC_SetDebugLev
��������:FC_SetDebugLev
���Ա��:Test_FC_SetDebugLev_001
���Ա���:FC_SetDebugLev
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SetDebugLev,UT01_Pass)
{
	int ret = 0;
	unsigned int lev = 30;

	ret = stub_FC_SetDebugLev(lev);

	EXPECT_EQ(1, ret);
}

/*****************************************************************************
������:	 Test_FC_SetFcEnableMask
��������:FC_SetFcEnableMask
���Ա��:Test_FC_SetFcEnableMask_001
���Ա���:FC_SetFcEnableMask
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SetFcEnableMask,UT01_Pass)
{
	int ret = 0;
	unsigned int ulEnableMask = 127;

	ret = stub_FC_SetFcEnableMask(ulEnableMask);

	EXPECT_EQ(1, ret);
}

/*****************************************************************************
������:	 Test_FC_SetThreshold
��������:FC_SetThreshold
���Ա��:Test_FC_SetThreshold_001
���Ա���:FC_SetThreshold
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SetThreshold,UT01_PolicyIsMem)
{
	int ret = -1;

	int PolicyId = 0;
	int Param1 = 0;

	ret = stub_FC_SetThreshold(PolicyId, Param1);

	EXPECT_EQ(1, ret);

}

/*****************************************************************************
������:	 Test_FC_SetThreshold
��������:FC_SetThreshold
���Ա��:Test_FC_SetThreshold_002
���Ա���:FC_SetThreshold
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SetThreshold,UT02_PolicyIsCpuA)
{
	int ret = -1;

	int PolicyId = 1;
	int Param1 = 0;

	ret = stub_FC_SetThreshold(PolicyId, Param1);

	EXPECT_EQ(1, ret);

}

/*****************************************************************************
������:	 Test_FC_SetThreshold
��������:FC_SetThreshold
���Ա��:Test_FC_SetThreshold_003
���Ա���:FC_SetThreshold
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SetThreshold,UT03_PolicyIsCds)
{
	int ret = -1;

	int PolicyId = 2;
	int Param1 = 0;

	ret = stub_FC_SetThreshold(PolicyId, Param1);

	EXPECT_EQ(1, ret);

}

/*****************************************************************************
������:	 Test_FC_SetThreshold
��������:FC_SetThreshold
���Ա��:Test_FC_SetThreshold_004
���Ա���:FC_SetThreshold
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SetThreshold,UT04_PolicyIsCst)
{
	int ret = -1;

	int PolicyId = 3;
	int Param1 = 0;

	ret = stub_FC_SetThreshold(PolicyId, Param1);

	EXPECT_EQ(1, ret);

}

/*****************************************************************************
������:	 Test_FC_SetThreshold
��������:FC_SetThreshold
���Ա��:Test_FC_SetThreshold_005
���Ա���:FC_SetThreshold
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SetThreshold,UT05_PolicyIsGors1)
{
	int ret = -1;

	int PolicyId = 4;
	int Param1 = 0;

	ret = stub_FC_SetThreshold(PolicyId, Param1);

	EXPECT_EQ(1, ret);

}

/*****************************************************************************
������:	 Test_FC_SetThreshold
��������:FC_SetThreshold
���Ա��:Test_FC_SetThreshold_006
���Ա���:FC_SetThreshold
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SetThreshold,UT06_PolicyIsGors2)
{
	int ret = -1;

	int PolicyId = 4;
	int Param1 = 1;

	ret = stub_FC_SetThreshold(PolicyId, Param1);

	EXPECT_EQ(1, ret);

}

/*****************************************************************************
������:	 Test_FC_SetThreshold
��������:FC_SetThreshold
���Ա��:Test_FC_SetThreshold_007
���Ա���:FC_SetThreshold
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SetThreshold,UT07_PolicyIsTmp)
{
	int ret = -1;

	int PolicyId = 5;
	int Param1 = 1;

	ret = stub_FC_SetThreshold(PolicyId, Param1);

	EXPECT_EQ(1, ret);

}

/*****************************************************************************
������:	 Test_FC_SetThreshold
��������:FC_SetThreshold
���Ա��:Test_FC_SetThreshold_008
���Ա���:FC_SetThreshold
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SetThreshold,UT08_PolicyIsCpuC)
{
	int ret = -1;

	int PolicyId = 6;
	int Param1 = 1;

	ret = stub_FC_SetThreshold(PolicyId, Param1);

	EXPECT_EQ(1, ret);

}

/*****************************************************************************
������:	 Test_FC_SetThreshold
��������:FC_SetThreshold
���Ա��:Test_FC_SetThreshold_009
���Ա���:FC_SetThreshold
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_SetThreshold,UT09_PolicyIsOtherType)
{
	int ret = -1;

	int PolicyId = 7;
	int Param1 = 1;

	ret = stub_FC_SetThreshold(PolicyId, Param1);

	EXPECT_EQ(0, ret);

}

/*****************************************************************************
������:	 Test_FC_Help
��������:FC_Help
���Ա��:Test_FC_Help_001
���Ա���:FC_Help
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_Help,UT01_PointNumIs0PriInvalid)
{
	int ret = -1;

	int PointNum = 0;
	int Valid = 0;
	int FcIdCnt = 3;

	ret = stub_FC_Help(PointNum, Valid, FcIdCnt);

	EXPECT_EQ(0, ret);

}

/*****************************************************************************
������:	 Test_FC_Help
��������:FC_Help
���Ա��:Test_FC_Help_002
���Ա���:FC_Help
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_Help,UT02_PriValidFcIdCntIs0)
{
	int ret = -1;

	int PointNum = 3;
	int Valid = 1;
	int FcIdCnt = 0;

	ret = stub_FC_Help(PointNum, Valid, FcIdCnt);

	EXPECT_EQ(0, ret);

}

/*****************************************************************************
������:	 Test_FC_Help
��������:FC_Help
���Ա��:Test_FC_Help_003
���Ա���:FC_Help
Ԥ�ڽ��:

1.
��    ��: 2014��5��19��
��    ��: w68271
�޸�����: �½�CASE
*****************************************************************************/
TEST(Test_FC_Help,UT03_PriValidFcIdCntIsNot0)
{
	int ret = -1;

	int PointNum = 3;
	int Valid = 1;
	int FcIdCnt = 3;

	ret = stub_FC_Help(PointNum, Valid, FcIdCnt);

	EXPECT_EQ(0, ret);

}



