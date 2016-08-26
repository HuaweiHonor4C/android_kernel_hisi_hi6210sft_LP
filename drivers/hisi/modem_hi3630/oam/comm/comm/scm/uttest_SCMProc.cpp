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
    extern unsigned int BSP_SOCP_CoderSetSrcChan(unsigned int enSrcChanID, void *pSrcAttr);
    extern unsigned int NV_ReadEx(
        unsigned short                  enModemID,
        unsigned short                  usID,
        void                           *pItem,
        unsigned int                    ulLength);
    extern unsigned int NV_WriteExMemory(
        unsigned short                  enModemID,
        unsigned short                  usID,
        void                           *pItem,
        unsigned int                    ulLength);
    extern void *VOS_UnCacheMemAlloc(unsigned int ulSize, unsigned long *pulRealAddr);
    extern void VOS_UnCacheMemFree(void *pVirtAddr, void *pPhyAddr, unsigned int ulSize);
    extern unsigned int SCM_CoderDstChanMemAlloc(void);
    extern void OM_Inner_Log(
        const unsigned char            *pucStr,
        unsigned int                    ulP1,
        unsigned int                    ulP2,
        void                           *pstLogData,
        unsigned int                    ulFileID,
        int                             lLineNo);
    extern unsigned int BSP_SOCP_CoderSetDestChanAttr(unsigned int u32DestChanID,
        void *pDestAttr);
    extern unsigned int BSP_SOCP_RegisterReadCB(unsigned int u32DestChanID, void * ReadCB);
    extern unsigned int CPM_ComSend(unsigned int enLogicPort, unsigned char *pucVirData, unsigned char *pucPHYData, unsigned int ulLen);
    extern void PPM_GetSendDataLen(unsigned int enChanID, unsigned int ulDataLen, unsigned int *pulSendDataLen, unsigned int *penPhyport);
    extern unsigned int SCM_RlsDestBuf(unsigned int ulChanlID, unsigned int ulReadSize);
    extern unsigned int SCM_RegCoderDestProc(unsigned int enChanlID, void *func);
    extern unsigned int SCM_RegDecoderDestProc(unsigned int enChanlID, void *func);
    extern void CPM_LogicRcvReg(unsigned int enLogicPort, void *pRcvFunc);
    extern unsigned int SCM_Init(void);
    extern unsigned int PPM_InitPhyPort(void);
    extern unsigned int CPM_PortAssociateInit(void);

    extern unsigned int uttest_SCM_CoderSrcChannelCfg_GetenInitState(unsigned char ucIndex);
    extern unsigned int uttest_SCM_CoderSrcChannelCfg_case1(void);
    extern unsigned int uttest_SCM_CoderSrcChannelCfg_case2(void);

    extern unsigned int uttest_SCM_CoderDstChanMemInit_case1(void);
    extern unsigned int uttest_SCM_CoderDstChanMemInit_case2(void);
    extern unsigned int uttest_SCM_CoderDstChanMemInit_case3(void);
    extern unsigned int uttest_SCM_CoderDstChanMemInit_case4(void);
    extern unsigned int uttest_SCM_CoderDstChanMemInit_case5(void);
    extern unsigned int uttest_SCM_CoderDstChannelInit_case1(void);
    extern unsigned int uttest_SCM_CoderDstChannelInit_case2(void);
    extern unsigned int uttest_SCM_RegDecoderDestProc_case1(void);
    extern unsigned int uttest_SCM_RegDecoderDestProc_case2(void);
    extern unsigned int uttest_SCM_RegDecoderDestProc_case3(void);
    extern unsigned int uttest_SCM_RegDecoderDestProc_case4(void);
    extern unsigned int uttest_SCM_RegDecoderDestProc_case5(void);
    extern unsigned int uttest_SCM_RegDecoderDestProc_case6(void);
    extern void uttest_SCM_SocpSendDataToUDISucc_case1(void);
    extern void uttest_SCM_SocpSendDataToUDISucc_case2(void);
    extern void uttest_SCM_SocpSendDataToUDISucc_case3(void);
    extern void uttest_SCM_SocpSendDataToUDISucc_case4(void);

    extern void uttest_SCM_SocpSendDataToUDI_case1(void);
    extern void uttest_SCM_SocpSendDataToUDI_case2(void);
    extern void uttest_SCM_SocpSendDataToUDI_case3(void);
    extern void uttest_SCM_SocpSendDataToUDI_case4(void);
    extern void uttest_SCM_SocpSendDataToUDI_case5(void);
    extern void uttest_SCM_SocpSendDataToUDI_case6(void);
    extern void uttest_SCM_SocpSendDataToUDI_case7(void);
    extern void uttest_SCM_SocpSendDataToUDI_case8(void);
    extern void uttest_SCM_SocpSendDataToUDI_case9(void);
    extern unsigned int uttest_SCM_Init_case(void);
    extern unsigned int uttest_COMM_Init_case(void);


#ifdef __cplusplus
}
#endif

#ifndef VOS_OK
#define VOS_OK                          0
#endif

#ifndef VOS_ERR
#define VOS_ERR                         1
#endif

#ifndef SCM_CHANNEL_INIT_SUCC
#define SCM_CHANNEL_INIT_SUCC           1
#endif

#ifndef VOS_FALSE
#define VOS_FALSE                       0
#endif

#ifndef VOS_TRUE
#define VOS_TRUE                        1
#endif

#ifndef CPM_SEND_OK
#define CPM_SEND_OK                     0
#endif

#ifndef CPM_SEND_FUNC_NULL
#define CPM_SEND_FUNC_NULL              1
#endif

#ifndef CPM_SEND_PARA_ERR
#define CPM_SEND_PARA_ERR               2
#endif

#ifndef CPM_SEND_ERR
#define CPM_SEND_ERR                    3
#endif

#ifndef CPM_SEND_BUTT
#define CPM_SEND_BUTT                   4
#endif

typedef struct
{
    unsigned int ulSocpDelayWriteFlg;/* SOCP�ӳ�д�빦��������� */
    unsigned int ulIndSocpLevel;     /* INDͨ��Ŀ��BUFFER����ˮ�� */
    unsigned int ulCfgSocpLevel;     /* CFGͨ��Ŀ��BUFFER����ˮ�� */
    unsigned int ulTimeOutValue;     /* SOCPĿ��BUFFER�ĳ�ʱʱ�� */
}UTTEST_NV_SOCP_SDLOG_CFG_STRU;

/*******************************************************************
�����������      : Test_SCM_CoderSrcChannelCfg_001
������������      : ����Դͨ����ʧ�� 
Ԥ�ڽ��          : ���� VOS_ERR
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_CoderSrcChannelCfg1, UT)
{
	MOCKER(BSP_SOCP_CoderSetSrcChan)
        .stubs()
		.will(returnValue((unsigned int)VOS_ERR));

    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

	EXPECT_EQ(VOS_ERR, uttest_SCM_CoderSrcChannelCfg_case1());

    GlobalMockObject::reset();

}

/*******************************************************************
�����������      : Test_SCM_CoderSrcChannelCfg_002
������������      : ����Դͨ����ɹ�
Ԥ�ڽ��          : ���� VOS_OK
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_CoderSrcChannelCfg2, UT)
{
	MOCKER(BSP_SOCP_CoderSetSrcChan)
        .stubs()
		.will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_SCM_CoderSrcChannelCfg_case2());

	EXPECT_EQ(SCM_CHANNEL_INIT_SUCC, uttest_SCM_CoderSrcChannelCfg_GetenInitState(2));

    GlobalMockObject::reset();

}

/*******************************************************************
�����������      : SCM_CoderDstChannelInit1
������������      : ����Ŀ��ͨ������ʧ��
Ԥ�ڽ��          : ���� VOS_ERR
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_CoderDstChannelInit1, UT)
{
    MOCKER(BSP_SOCP_CoderSetDestChanAttr)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    MOCKER(BSP_SOCP_RegisterReadCB)
        .expects(exactly(0))
        .will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_ERR, uttest_SCM_CoderDstChannelInit_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_CoderDstChannelInit2
������������      : ����Ŀ��ͨ�����óɹ�
Ԥ�ڽ��          : ���� VOS_ERR
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_CoderDstChannelInit2, UT)
{
    MOCKER(BSP_SOCP_CoderSetDestChanAttr)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(BSP_SOCP_RegisterReadCB)
        .expects(exactly(2))
        .will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_SCM_CoderDstChannelInit_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_RegDecoderDestProc1
������������      : ע�����Ŀ�Ļص�����enChanlID�쳣
Ԥ�ڽ��          : ���� VOS_ERR
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_RegDecoderDestProc1, UT)
{
	EXPECT_EQ(VOS_ERR, uttest_SCM_RegDecoderDestProc_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_RegDecoderDestProc2
������������      : ע�����Ŀ�Ļص�����funcΪ��ָ��
Ԥ�ڽ��          : ���� VOS_ERR
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_RegDecoderDestProc2, UT)
{
	EXPECT_EQ(VOS_ERR, uttest_SCM_RegDecoderDestProc_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_RegDecoderDestProc3
������������      : ע�����Ŀ�Ļص���enChanlIDΪSOCP_DECODER_DST_LOM
Ԥ�ڽ��          : ���� VOS_ERR
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_RegDecoderDestProc3, UT)
{
	EXPECT_EQ(VOS_OK, uttest_SCM_RegDecoderDestProc_case3());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_RegDecoderDestProc4
������������      : ע�����Ŀ�Ļص���enChanlIDΪSOCP_DECODER_DST_GUOM
Ԥ�ڽ��          : ���� VOS_ERR
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_RegDecoderDestProc4, UT)
{
	EXPECT_EQ(VOS_OK, uttest_SCM_RegDecoderDestProc_case4());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_RegDecoderDestProc5
������������      : ע�����Ŀ�Ļص���enChanlIDΪSOCP_DECODER_CBT
Ԥ�ڽ��          : ���� VOS_ERR
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_RegDecoderDestProc5, UT)
{
	EXPECT_EQ(VOS_OK, uttest_SCM_RegDecoderDestProc_case5());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_RegDecoderDestProc6
������������      : ע�����Ŀ�Ļص���enChanlID����
Ԥ�ڽ��          : ���� VOS_ERR
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_RegDecoderDestProc6, UT)
{
	EXPECT_EQ(VOS_ERR, uttest_SCM_RegDecoderDestProc_case6());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_SocpSendDataToUDISucc1
������������      : CNFͨ������len�쳣
Ԥ�ڽ��          : ���� VOS_ERR
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_SocpSendDataToUDISucc1, UT)
{
	uttest_SCM_SocpSendDataToUDISucc_case1();

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_SocpSendDataToUDISucc2
������������      : CNFͨ����len����
Ԥ�ڽ��          : ���� VOS_ERR
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_SocpSendDataToUDISucc2, UT)
{
	uttest_SCM_SocpSendDataToUDISucc_case2();

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_SocpSendDataToUDISucc3
������������      : INDͨ������len�쳣
Ԥ�ڽ��          : ���� VOS_ERR
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_SocpSendDataToUDISucc3, UT)
{
	uttest_SCM_SocpSendDataToUDISucc_case3();

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_SocpSendDataToUDISucc4
������������      : INDͨ����len�쳣
Ԥ�ڽ��          : ���� VOS_ERR
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_SocpSendDataToUDISucc4, UT)
{
	uttest_SCM_SocpSendDataToUDISucc_case4();

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_SocpSendDataToUDI1
������������      : enChanID�쳣
Ԥ�ڽ��          : 
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_SocpSendDataToUDI1, UT)
{
    MOCKER(CPM_ComSend)
        .expects(exactly(0));

	uttest_SCM_SocpSendDataToUDI_case1();

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_SocpSendDataToUDI2
������������      : ulDataLen�쳣
Ԥ�ڽ��          : 
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_SocpSendDataToUDI2, UT)
{
    MOCKER(CPM_ComSend)
        .expects(exactly(0));

	uttest_SCM_SocpSendDataToUDI_case2();

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_SocpSendDataToUDI3
������������      : pucVirData�쳣
Ԥ�ڽ��          : 
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_SocpSendDataToUDI3, UT)
{
    MOCKER(CPM_ComSend)
        .expects(exactly(0));

	uttest_SCM_SocpSendDataToUDI_case3();

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_SocpSendDataToUDI4
������������      : CPM_ComSend���ؽ��CPM_SEND_ERR
Ԥ�ڽ��          : 
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_SocpSendDataToUDI4, UT)
{
    MOCKER(CPM_ComSend)
        .expects(exactly(1))
        .will(returnValue((unsigned int)CPM_SEND_ERR));

    MOCKER(PPM_GetSendDataLen)
        .expects(exactly(1));

    MOCKER(SCM_RlsDestBuf)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_ERR));

	uttest_SCM_SocpSendDataToUDI_case4();

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_SocpSendDataToUDI5
������������      : CPM_ComSend���ؽ��CPM_SEND_FUNC_NULL
Ԥ�ڽ��          : 
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_SocpSendDataToUDI5, UT)
{
    MOCKER(CPM_ComSend)
        .expects(exactly(1))
        .will(returnValue((unsigned int)CPM_SEND_FUNC_NULL));

    MOCKER(PPM_GetSendDataLen)
        .expects(exactly(1));

    MOCKER(SCM_RlsDestBuf)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

	uttest_SCM_SocpSendDataToUDI_case5();

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_SocpSendDataToUDI6
������������      : CPM_ComSend���ؽ��CPM_SEND_PARA_ERR
Ԥ�ڽ��          : 
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_SocpSendDataToUDI6, UT)
{
    MOCKER(CPM_ComSend)
        .expects(exactly(1))
        .will(returnValue((unsigned int)CPM_SEND_FUNC_NULL));

    MOCKER(PPM_GetSendDataLen)
        .expects(exactly(1));

    MOCKER(SCM_RlsDestBuf)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

	uttest_SCM_SocpSendDataToUDI_case6();

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_SocpSendDataToUDI7
������������      : CPM_ComSend���ؽ��CPM_SEND_OK,ulUSBSendLenΪ0
Ԥ�ڽ��          : 
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_SocpSendDataToUDI7, UT)
{
    MOCKER(CPM_ComSend)
        .expects(exactly(1))
        .will(returnValue((unsigned int)CPM_SEND_OK));

    MOCKER(PPM_GetSendDataLen)
        .expects(exactly(1));

    MOCKER(SCM_RlsDestBuf)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

	uttest_SCM_SocpSendDataToUDI_case7();

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_SocpSendDataToUDI8
������������      : CPM_ComSend���ؽ��CPM_SEND_OK,ulUSBSendLenΪOM_DATA_MAX_LENGTH
Ԥ�ڽ��          : 
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_SocpSendDataToUDI8, UT)
{
    MOCKER(CPM_ComSend)
        .expects(exactly(1))
        .will(returnValue((unsigned int)CPM_SEND_OK));

    MOCKER(PPM_GetSendDataLen)
        .expects(exactly(1));

    MOCKER(SCM_RlsDestBuf)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

	uttest_SCM_SocpSendDataToUDI_case8();

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_SocpSendDataToUDI9
������������      : CPM_ComSend���ؽ��CPM_SEND_BUTT
Ԥ�ڽ��          : 
�޸���ʷ     :
#  1.��    ��: 2014��6��16��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_SocpSendDataToUDI9, UT)
{
    MOCKER(CPM_ComSend)
        .expects(exactly(1))
        .will(returnValue((unsigned int)CPM_SEND_BUTT));

    MOCKER(PPM_GetSendDataLen)
        .expects(exactly(1));

    MOCKER(SCM_RlsDestBuf)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

	uttest_SCM_SocpSendDataToUDI_case9();

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_Init1
������������      : ע��SOCP_CODER_DST_OM_CNF�ı���Ŀ�Ļص�ʧ��
Ԥ�ڽ��          : 
�޸���ʷ     :
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_Init1, UT)
{
    MOCKER(SCM_RegCoderDestProc)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    MOCKER(SCM_RegDecoderDestProc)
        .expects(exactly(0))
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(CPM_LogicRcvReg)
        .expects(exactly(0));

	EXPECT_EQ(VOS_ERR, uttest_SCM_Init_case());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_Init2
������������      : ע��SOCP_CODER_DST_OM_IND�ı���Ŀ�Ļص�ʧ��
Ԥ�ڽ��          : 
�޸���ʷ     :
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_Init2, UT)
{
    MOCKER(SCM_RegCoderDestProc)
        .stubs()
        .will(returnObjectList((unsigned int)VOS_OK, (unsigned int)VOS_ERR));

    MOCKER(SCM_RegDecoderDestProc)
        .expects(exactly(0))
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(CPM_LogicRcvReg)
        .expects(exactly(0));

	EXPECT_EQ(VOS_ERR, uttest_SCM_Init_case());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_Init3
������������      : ע��SOCP_DECODER_DST_GUOM�Ľ���Ŀ�Ļص�ʧ��
Ԥ�ڽ��          : 
�޸���ʷ     :
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_Init3, UT)
{
    MOCKER(SCM_RegCoderDestProc)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(SCM_RegDecoderDestProc)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    MOCKER(CPM_LogicRcvReg)
        .expects(exactly(0));

	EXPECT_EQ(VOS_ERR, uttest_SCM_Init_case());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_Init4
������������      : ע��SOCP_DECODER_CBT�Ľ���Ŀ�Ļص�ʧ��
Ԥ�ڽ��          : 
�޸���ʷ     :
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_Init4, UT)
{
    MOCKER(SCM_RegCoderDestProc)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(SCM_RegDecoderDestProc)
        .stubs()
        .will(returnObjectList((unsigned int)VOS_OK, (unsigned int)VOS_ERR));

    MOCKER(CPM_LogicRcvReg)
        .expects(exactly(0));

	EXPECT_EQ(VOS_ERR, uttest_SCM_Init_case());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : SCM_Init5
������������      : SCM��ʼ���ɹ�
Ԥ�ڽ��          : 
�޸���ʷ     :
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SCM_Init5, UT)
{
    MOCKER(SCM_RegCoderDestProc)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(SCM_RegDecoderDestProc)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(CPM_LogicRcvReg)
        .expects(exactly(1));

	EXPECT_EQ(VOS_OK, uttest_SCM_Init_case());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : COMM_Init1
������������      : COMM��ʼ��:SCM_Initʧ��
Ԥ�ڽ��          : 
�޸���ʷ     :
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(COMM_Init1, UT)
{
    MOCKER(SCM_Init)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    MOCKER(PPM_InitPhyPort)
        .expects(exactly(0));

    MOCKER(CPM_PortAssociateInit)
        .expects(exactly(0));

	EXPECT_EQ(VOS_ERR, uttest_COMM_Init_case());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : COMM_Init2
������������      : COMM��ʼ��:PPM_InitPhyPortʧ��
Ԥ�ڽ��          : 
�޸���ʷ     :
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(COMM_Init2, UT)
{
    MOCKER(SCM_Init)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(PPM_InitPhyPort)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    MOCKER(CPM_PortAssociateInit)
        .expects(exactly(0));

	EXPECT_EQ(VOS_ERR, uttest_COMM_Init_case());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : COMM_Init3
������������      : COMM��ʼ��:CPM_PortAssociateInitʧ��
Ԥ�ڽ��          : 
�޸���ʷ     :
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(COMM_Init3, UT)
{
    MOCKER(SCM_Init)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(PPM_InitPhyPort)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(CPM_PortAssociateInit)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

	EXPECT_EQ(VOS_ERR, uttest_COMM_Init_case());

    GlobalMockObject::reset();
}

/*******************************************************************
�����������      : COMM_Init4
������������      : COMM��ʼ���ɹ�
Ԥ�ڽ��          : 
�޸���ʷ     :
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(COMM_Init4, UT)
{
    MOCKER(SCM_Init)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(PPM_InitPhyPort)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(CPM_PortAssociateInit)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

	EXPECT_EQ(VOS_OK, uttest_COMM_Init_case());

    GlobalMockObject::reset();
}