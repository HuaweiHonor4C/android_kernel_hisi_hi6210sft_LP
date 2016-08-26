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
    extern unsigned int NV_ReadEx(
        unsigned short           enModemID,
        unsigned short           usID,
        void                    *pItem,
        unsigned int             ulLength);
    extern unsigned int SOCP_MsConvertToCycle(unsigned int ulDelayTimeInMs);
    extern unsigned int VOS_SmV( unsigned long Sm_ID );
    extern void * SocpGetSDLogCfg(void);
    extern unsigned int OM_GetSlice(void);
    extern void OM_Inner_Log(
        const unsigned char         *pucStr,
        unsigned int              ulP1,
        unsigned int              ulP2,
        void                     *pstLogData ,
        unsigned int              ulFileID,
        int                       lLineNo);
    extern void SocpHandlerEncDstTrfInt(void);
    extern void SocpHandlerEncDstOutOvfInt(void);
    extern unsigned int VOS_SmCCreate(
        unsigned char             acSmName[4],
        unsigned int              ulSmInit,
        unsigned int              ulFlags,
        unsigned long            *pSmID );
    extern unsigned int VOS_CreateTask(
        unsigned char            *puchName,
        unsigned int             *pulTaskID,
        void                     *pfnFunc,
        unsigned int              ulPriority,
        unsigned int              ulStackSize,
        unsigned int              aulArgs[4] );
    extern void * BSP_GetIPBaseAddr(unsigned int enIPType);
    extern void *__ioremap(unsigned long phys_addr, unsigned long size, unsigned long flags);
    extern void * __arm_ioremap(unsigned long, size_t, unsigned int);
    extern void SocpCoreInit(void);
    extern int BSP_GetIntNO(unsigned int enIntType);
    extern int BSP_INT_Connect  (void **vector,void *routine, int parameter);;
    extern int BSP_INT_Enable ( int s32Lvl);
    extern int SocpAcpuCreateTask(void);


    extern unsigned int uttest_SOCP_MsConvertToCycle_case(unsigned int ulDelayTimeInMs);
    extern void uttest_SocpEncDstTaskProc_case1(unsigned int ulRealChannelId);
    extern void uttest_SocpEncDstTaskProc_case2(unsigned int ulRealChannelId);
    extern void uttest_SocpEncDstTaskProc_case3(unsigned int ulRealChannelId);
    extern void uttest_SocpHandlerEncDstTrfInt_case1(void);
    extern void uttest_SocpHandlerEncDst_case1(void);
    extern void uttest_SocpHandlerEncDst_case2(void);
    extern void uttest_SocpHandlerEncDst_case3(void);
    extern void uttest_SocpHandlerDecSrc_case1(void);
    extern void uttest_SocpHandlerDecSrc_case2(void);
    extern void uttest_SocpHandlerDecDst_case1(void);
    extern void uttest_SocpHandlerDecDst_case2(void);
    extern void uttest_SocpHandlerDecDst_case3(void);
    extern unsigned int uttest_BSP_SOCP_DecoderSetDestChan_case1(void);
    extern unsigned int uttest_BSP_SOCP_DecoderSetDestChan_case2(void);
    extern unsigned int uttest_BSP_SOCP_DecoderSetDestChan_case3(void);

    extern unsigned int uttest_BSP_SOCP_CoderSetDestChanAttr_case1(void);
    extern unsigned int uttest_BSP_SOCP_CoderSetDestChanAttr_case2(void);
    extern unsigned int uttest_BSP_SOCP_CoderSetDestChanAttr_case3(void);
    extern unsigned int uttest_BSP_SOCP_CoderSetDestChanAttr_case4(void);
    extern unsigned int uttest_BSP_SOCP_CoderSetDestChanAttr_case5(void);
    extern unsigned int uttest_BSP_SOCP_CoderSetDestChanAttr_case6(void);

    extern unsigned int uttest_BSP_SOCP_DecoderSetSrcChanAttr_case1(void);
    extern unsigned int uttest_BSP_SOCP_DecoderSetSrcChanAttr_case2(void);
    extern unsigned int uttest_BSP_SOCP_DecoderSetSrcChanAttr_case3(void);
    extern unsigned int uttest_BSP_SOCP_DecoderSetSrcChanAttr_case4(void);
    extern int uttest_SocpAcpuCreateTask_case(void);
    extern int uttest_SocpCoreInit_case(void);
    extern unsigned long uttest_SocpAcpuInit_GetaulRegAddr(void);
    extern int uttest_SocpAcpuInit_case(void);
    extern unsigned int uttest_BSP_SOCP_CoderSetSrcChan_case1(void);
    extern unsigned int uttest_BSP_SOCP_CoderSetSrcChan_case2(void);
    extern unsigned int uttest_BSP_SOCP_CoderSetSrcChan_case3(void);
    extern unsigned int uttest_BSP_SOCP_CoderSetSrcChan_case4(void);
    extern void uttest_BSP_SOCP_EncDstBufFlush_case(void);

#ifdef __cplusplus
}
#endif

#ifndef VOS_OK
#define VOS_OK                          0
#endif

#ifndef VOS_ERR
#define VOS_ERR                         1
#endif

#ifndef VOS_FALSE
#define VOS_FALSE                       0
#endif

#ifndef VOS_TRUE
#define VOS_TRUE                        1
#endif

#ifndef MDRV_OK
#define MDRV_OK                          (0)
#endif

#ifndef MDRV_ERROR
#define MDRV_ERROR                       (-1)
#endif

#ifndef BSP_ERR_SOCP_NOT_INIT
#define BSP_ERR_SOCP_NOT_INIT           2
#endif

#ifndef BSP_ERR_SOCP_SEM_CREATE
#define BSP_ERR_SOCP_SEM_CREATE         4
#endif

#ifndef BSP_ERR_SOCP_TSK_CREATE
#define BSP_ERR_SOCP_TSK_CREATE         5
#endif

#ifndef BSP_ERR_SOCP_INVALID_PARA
#define BSP_ERR_SOCP_INVALID_PARA       7
#endif

#ifndef BSP_ERR_SOCP_SET_FAIL
#define BSP_ERR_SOCP_SET_FAIL           9
#endif

#ifndef BSP_ERR_SOCP_DECSRC_SET
#define BSP_ERR_SOCP_DECSRC_SET         15
#endif



typedef struct
{
    //unsigned int IndWaterMark;    /* SOCP����Ŀ��ͨ�����ݴ���ˮ�ߣ�INDͨ�� */
    //unsigned int CfgWaterMark;    /* SOCP����Ŀ��ͨ�����ݴ���ˮ��, CFGͨ�� */
    //unsigned int overTime;        /* SOCP����Ŀ��ͨ�����ݴ��䳬ʱʱ�� */
    //unsigned int logOnFlag;       /* LOG2.0����������־ */
    void*      pVirBuffer;      /* SOCP����Ŀ��ͨ����������BUFFER����32λϵͳ����4�ֽڣ���64λϵͳ����8�ֽ� */
    unsigned int     ulPhyBufferAddr; /* SOCP����Ŀ��ͨ����������BUFFER��ַ����64λ��32λϵͳ�������ַ����4�ֽ� */
    unsigned int     BufferSize;      /* SOCP����Ŀ��ͨ������BUFFER��С */
    unsigned int overTime;        /* SOCP����Ŀ��ͨ�����ݴ��䳬ʱʱ�� */
    unsigned int logOnFlag;       /* LOG2.0����������־ */
}UTTEST_BSP_SOCP_ENC_DST_BUF_LOG_CFG_STRU;


/*******************************************************************
*������: SOCP_MsConvertToCycle1
*���⺯����������:ʱ�䵥λת��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SOCP_MsConvertToCycle1, UT)
{
    unsigned int    ulDelayTimeInMs = 1200000;
    unsigned int    ulResult = 0x29E9B0;

    EXPECT_EQ(ulResult, uttest_SOCP_MsConvertToCycle_case(ulDelayTimeInMs));

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_EncDstBufFlush1
*���⺯����������:LOG 2.0����δ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_EncDstBufFlush1, UT)
{
    UTTEST_BSP_SOCP_ENC_DST_BUF_LOG_CFG_STRU stcfg;

    stcfg.logOnFlag = VOS_FALSE;

    MOCKER(SocpGetSDLogCfg)
        .stubs()
        .will(returnValue((void *)&stcfg));

    MOCKER(VOS_SmV)
        .expects(exactly(0))
        .will(returnValue((unsigned int)VOS_ERR));

    uttest_BSP_SOCP_EncDstBufFlush_case();

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_EncDstBufFlush2
*���⺯����������:��ȡ�ź���ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_EncDstBufFlush2, UT)
{
    UTTEST_BSP_SOCP_ENC_DST_BUF_LOG_CFG_STRU stcfg;

    stcfg.logOnFlag = VOS_TRUE;

    MOCKER(SocpGetSDLogCfg)
        .stubs()
        .will(returnValue((void *)&stcfg));

    MOCKER(VOS_SmV)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_ERR));

    uttest_BSP_SOCP_EncDstBufFlush_case();

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_EncDstBufFlush1
*���⺯����������:��ȡ�ź����ɹ�
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_EncDstBufFlush3, UT)
{
    UTTEST_BSP_SOCP_ENC_DST_BUF_LOG_CFG_STRU stcfg;

    stcfg.logOnFlag = VOS_TRUE;

    MOCKER(SocpGetSDLogCfg)
        .stubs()
        .will(returnValue((void *)&stcfg));

    MOCKER(VOS_SmV)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(OM_GetSlice)
        .expects(exactly(1))
        .will(returnValue((unsigned int)0));

    uttest_BSP_SOCP_EncDstBufFlush_case();

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpEncDstTaskProc1
*���⺯����������:ͨ��δ����
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpEncDstTaskProc1, UT)
{
    MOCKER(OM_GetSlice)
        .expects(exactly(0))
        .will(returnObjectList((unsigned int)10, (unsigned int)20));

    uttest_SocpEncDstTaskProc_case1(0);

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpEncDstTaskProc2
*���⺯����������:�ص�����δע��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpEncDstTaskProc2, UT)
{
    MOCKER(OM_GetSlice)
        .expects(exactly(0))
        .will(returnObjectList((unsigned int)10, (unsigned int)20));

    uttest_SocpEncDstTaskProc_case2(0);

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpEncDstTaskProc3
*���⺯����������:�ص�������ע��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpEncDstTaskProc3, UT)
{
    MOCKER(OM_GetSlice)
        .expects(exactly(2))
        .will(returnObjectList((unsigned int)10, (unsigned int)20));

    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    uttest_SocpEncDstTaskProc_case3(0);

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpHandlerEncDstTrfInt1
*���⺯����������:�������Ŀ������ж�
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpHandlerEncDstTrfInt1, UT)
{
    MOCKER(OM_GetSlice)
        .expects(exactly(2))
        .will(returnObjectList((unsigned int)10, (unsigned int)20));

    MOCKER(VOS_SmV)
        .expects(exactly(2))
        .will(returnValue((unsigned int)VOS_OK));

    uttest_SocpHandlerEncDstTrfInt_case1();

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpHandlerEncDst1
*���⺯����������:����Ŀ�Ĵ����жϴ���
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpHandlerEncDst1, UT)
{
    MOCKER(SocpHandlerEncDstTrfInt)
        .expects(exactly(1));

    uttest_SocpHandlerEncDst_case1();

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpHandlerEncDst2
*���⺯����������:����Ŀ������жϴ���
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpHandlerEncDst2, UT)
{
    MOCKER(SocpHandlerEncDstOutOvfInt)
        .expects(exactly(1));

    uttest_SocpHandlerEncDst_case2();

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpHandlerEncDst3
*���⺯����������:�ж�λ����ȷ
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpHandlerEncDst3, UT)
{
    MOCKER(SocpHandlerEncDstTrfInt)
        .expects(exactly(0));

    MOCKER(SocpHandlerEncDstOutOvfInt)
        .expects(exactly(0));

    uttest_SocpHandlerEncDst_case3();

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpHandlerDecSrc1
*���⺯����������:�ж�λ����
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpHandlerDecSrc1, UT)
{
    uttest_SocpHandlerDecSrc_case1();

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpHandlerDecSrc2
*���⺯����������:�ж�λ��ȷ
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpHandlerDecSrc2, UT)
{
    uttest_SocpHandlerDecSrc_case2();

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpHandlerDecDst1
*���⺯����������:�ж�λ����
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpHandlerDecDst1, UT)
{
    uttest_SocpHandlerDecDst_case1();

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpHandlerDecDst2
*���⺯����������:����Ŀ�Ĵ����ж�
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpHandlerDecDst2, UT)
{
    uttest_SocpHandlerDecDst_case2();

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpHandlerDecDst3
*���⺯����������:����Ŀ������ж�
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpHandlerDecDst3, UT)
{
    uttest_SocpHandlerDecDst_case3();

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_DecoderSetDestChan1
*���⺯����������:����Ŀ��ͨ����bufThreshold��������
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_DecoderSetDestChan1, UT)
{
    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(BSP_ERR_SOCP_INVALID_PARA, uttest_BSP_SOCP_DecoderSetDestChan_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_DecoderSetDestChan2
*���⺯����������:����Ŀ��ͨ����buflength��������
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_DecoderSetDestChan2, UT)
{
    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(BSP_ERR_SOCP_INVALID_PARA, uttest_BSP_SOCP_DecoderSetDestChan_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_DecoderSetDestChan3
*���⺯����������:����Ŀ��ͨ�����óɹ�
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_DecoderSetDestChan3, UT)
{
    EXPECT_EQ(VOS_OK, uttest_BSP_SOCP_DecoderSetDestChan_case3());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_CoderSetDestChanAttr1
*���⺯����������:����Ŀ��ͨ��:δ��ɳ�ʼ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_CoderSetDestChanAttr1, UT)
{
    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(BSP_ERR_SOCP_NOT_INIT, uttest_BSP_SOCP_CoderSetDestChanAttr_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_CoderSetDestChanAttr2
*���⺯����������:����Ŀ��ͨ��:buflength��������
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_CoderSetDestChanAttr2, UT)
{
    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(BSP_ERR_SOCP_INVALID_PARA, uttest_BSP_SOCP_CoderSetDestChanAttr_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_CoderSetDestChanAttr3
*���⺯����������:����Ŀ��ͨ��:bufThreshold��������
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_CoderSetDestChanAttr3, UT)
{
    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(BSP_ERR_SOCP_INVALID_PARA, uttest_BSP_SOCP_CoderSetDestChanAttr_case3());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_CoderSetDestChanAttr4
*���⺯����������:����Ŀ��ͨ��:u32Thrh�쳣
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_CoderSetDestChanAttr4, UT)
{
    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(BSP_ERR_SOCP_INVALID_PARA, uttest_BSP_SOCP_CoderSetDestChanAttr_case4());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_CoderSetDestChanAttr5
*���⺯����������:����Ŀ��ͨ��:ͨ���Ѿ����ù�
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_CoderSetDestChanAttr5, UT)
{
    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(BSP_ERR_SOCP_SET_FAIL, uttest_BSP_SOCP_CoderSetDestChanAttr_case5());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_CoderSetDestChanAttr6
*���⺯����������:����Ŀ��ͨ����ʼ���ɹ�
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_CoderSetDestChanAttr6, UT)
{
    EXPECT_EQ(VOS_OK, uttest_BSP_SOCP_CoderSetDestChanAttr_case6());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_DecoderSetSrcChanAttr1
*���⺯����������:����Դͨ����δ��ɳ�ʼ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_DecoderSetSrcChanAttr1, UT)
{
    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(BSP_ERR_SOCP_NOT_INIT, uttest_BSP_SOCP_DecoderSetSrcChanAttr_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_DecoderSetSrcChanAttr2
*���⺯����������:����Դͨ����buflength����SOCP_DEC_SRC_BUFLGTH_MAX
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_DecoderSetSrcChanAttr2, UT)
{
    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(BSP_ERR_SOCP_INVALID_PARA, uttest_BSP_SOCP_DecoderSetSrcChanAttr_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_DecoderSetSrcChanAttr3
*���⺯����������:����Դͨ����ͨ���Ѿ���ʼ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_DecoderSetSrcChanAttr3, UT)
{
    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(BSP_ERR_SOCP_DECSRC_SET, uttest_BSP_SOCP_DecoderSetSrcChanAttr_case3());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_DecoderSetSrcChanAttr3
*���⺯����������:����Դͨ�����óɹ�
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_DecoderSetSrcChanAttr4, UT)
{
    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(VOS_OK, uttest_BSP_SOCP_DecoderSetSrcChanAttr_case4());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpAcpuCreateTask1
*���⺯����������:����CH0SCP�ź���ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpAcpuCreateTask1, UT)
{
    MOCKER(VOS_SmCCreate)
        .stubs()
        .will(returnValue((unsigned int)VOS_ERR));

    MOCKER(VOS_CreateTask)
        .expects(exactly(0))
        .will(returnValue((unsigned int)VOS_ERR));

    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(BSP_ERR_SOCP_SEM_CREATE, uttest_SocpAcpuCreateTask_case());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpAcpuCreateTask2
*���⺯����������:����EncDstCh0����ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpAcpuCreateTask2, UT)
{
    MOCKER(VOS_SmCCreate)
        .stubs()
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(VOS_CreateTask)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_ERR));

    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(BSP_ERR_SOCP_TSK_CREATE, uttest_SocpAcpuCreateTask_case());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpAcpuCreateTask3
*���⺯����������:����CH1SCP�ź���ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpAcpuCreateTask3, UT)
{
    MOCKER(VOS_SmCCreate)
        .expects(exactly(2))
        .will(returnObjectList ((unsigned int)VOS_OK, (unsigned int)VOS_ERR));

    MOCKER(VOS_CreateTask)
        .expects(exactly(1))
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(BSP_ERR_SOCP_SEM_CREATE, uttest_SocpAcpuCreateTask_case());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpAcpuCreateTask4
*���⺯����������:����EncDstCh1����ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpAcpuCreateTask4, UT)
{
    MOCKER(VOS_SmCCreate)
        .expects(exactly(2))
        .will(returnObjectList ((unsigned int)VOS_OK, (unsigned int)VOS_OK));

    MOCKER(VOS_CreateTask)
        .expects(exactly(2))
        .will(returnObjectList ((unsigned int)VOS_OK, (unsigned int)VOS_ERR));

    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(BSP_ERR_SOCP_TSK_CREATE, uttest_SocpAcpuCreateTask_case());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpAcpuCreateTask5
*���⺯����������:��������ɹ�
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpAcpuCreateTask5, UT)
{
    MOCKER(VOS_SmCCreate)
        .expects(exactly(2))
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(VOS_CreateTask)
        .expects(exactly(2))
        .will(returnValue((unsigned int)VOS_OK));

    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(VOS_OK, uttest_SocpAcpuCreateTask_case());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpCoreInit1
*���⺯����������:SOCP������ʼ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpCoreInit1, UT)
{
    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(VOS_OK, uttest_SocpCoreInit_case());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpAcpuInit1
*���⺯����������:ACPU SOCP������ʼ��:ioremap���ص�ַΪ0
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpAcpuInit1, UT)
{
    UTTEST_BSP_SOCP_ENC_DST_BUF_LOG_CFG_STRU stcfg;

    stcfg.logOnFlag = VOS_TRUE;

    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    MOCKER(SocpGetSDLogCfg)
        .expects(exactly(1))
        .will(returnValue((void *)&stcfg));

    MOCKER(BSP_GetIPBaseAddr)
        .expects(exactly(1))
        .will(returnValue((void *)uttest_SocpAcpuInit_GetaulRegAddr()));

    MOCKER(__ioremap)
        .expects(exactly(1))
        .will(returnValue((void *)0));

    MOCKER(__arm_ioremap)
        .expects(exactly(1))
        .will(returnValue((void *)0));

    EXPECT_EQ(MDRV_ERROR, uttest_SocpAcpuInit_case());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpAcpuInit2
*���⺯����������:ACPU SOCP������ʼ��:��ȡ�жϺ�ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpAcpuInit2, UT)
{
    UTTEST_BSP_SOCP_ENC_DST_BUF_LOG_CFG_STRU stcfg;

    stcfg.logOnFlag = VOS_TRUE;

    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    MOCKER(SocpGetSDLogCfg)
        .expects(exactly(1))
        .will(returnValue((void *)&stcfg));

    MOCKER(BSP_GetIPBaseAddr)
        .expects(exactly(1))
        .will(returnValue((void *)uttest_SocpAcpuInit_GetaulRegAddr()));

    MOCKER(__ioremap)
        .expects(exactly(1))
        .will(returnValue((void *)uttest_SocpAcpuInit_GetaulRegAddr()));

    MOCKER(__arm_ioremap)
        .expects(exactly(1))
        .will(returnValue((void *)uttest_SocpAcpuInit_GetaulRegAddr()));

    MOCKER(SocpCoreInit)
        .expects(exactly(1));

    MOCKER(SOCP_MsConvertToCycle)
        .expects(exactly(1))
        .will(returnValue((unsigned int)0));

    MOCKER(BSP_GetIntNO)
        .expects(exactly(1))
        .will(returnValue((int)MDRV_ERROR));

    MOCKER(BSP_INT_Connect)
        .expects(exactly(1))
        .will(returnValue((int)VOS_ERR));


    EXPECT_EQ(MDRV_ERROR, uttest_SocpAcpuInit_case());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpAcpuInit3
*���⺯����������:ACPU SOCP������ʼ��:�жϹҽ�ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpAcpuInit3, UT)
{
    UTTEST_BSP_SOCP_ENC_DST_BUF_LOG_CFG_STRU stcfg;

    stcfg.logOnFlag = VOS_TRUE;

    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    MOCKER(SocpGetSDLogCfg)
        .expects(exactly(1))
        .will(returnValue((void *)&stcfg));

    MOCKER(BSP_GetIPBaseAddr)
        .expects(exactly(1))
        .will(returnValue((void *)uttest_SocpAcpuInit_GetaulRegAddr()));

    MOCKER(__ioremap)
        .expects(exactly(1))
        .will(returnValue((void *)uttest_SocpAcpuInit_GetaulRegAddr()));

    MOCKER(__arm_ioremap)
        .expects(exactly(1))
        .will(returnValue((void *)uttest_SocpAcpuInit_GetaulRegAddr()));

    MOCKER(SocpCoreInit)
        .expects(exactly(1));

    MOCKER(SOCP_MsConvertToCycle)
        .expects(exactly(1))
        .will(returnValue((unsigned int)0));

    MOCKER(BSP_GetIntNO)
        .expects(exactly(1))
        .will(returnValue((int)MDRV_OK));

    MOCKER(BSP_INT_Connect)
        .expects(exactly(1))
        .will(returnValue((int)VOS_ERR));


    EXPECT_EQ(MDRV_ERROR, uttest_SocpAcpuInit_case());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpAcpuInit4
*���⺯����������:ACPU SOCP������ʼ��:�ж�ʹ��ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpAcpuInit4, UT)
{
    UTTEST_BSP_SOCP_ENC_DST_BUF_LOG_CFG_STRU stcfg;

    stcfg.logOnFlag = VOS_TRUE;

    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    MOCKER(SocpGetSDLogCfg)
        .expects(exactly(1))
        .will(returnValue((void *)&stcfg));

    MOCKER(BSP_GetIPBaseAddr)
        .expects(exactly(1))
        .will(returnValue((void *)uttest_SocpAcpuInit_GetaulRegAddr()));

    MOCKER(__ioremap)
        .expects(exactly(1))
        .will(returnValue((void *)uttest_SocpAcpuInit_GetaulRegAddr()));

    MOCKER(__arm_ioremap)
        .expects(exactly(1))
        .will(returnValue((void *)uttest_SocpAcpuInit_GetaulRegAddr()));

    MOCKER(SocpCoreInit)
        .expects(exactly(1));

    MOCKER(SOCP_MsConvertToCycle)
        .expects(exactly(1))
        .will(returnValue((unsigned int)0));

    MOCKER(BSP_GetIntNO)
        .expects(exactly(1))
        .will(returnValue((int)MDRV_OK));

    MOCKER(BSP_INT_Connect)
        .expects(exactly(1))
        .will(returnValue((int)VOS_OK));

    MOCKER(BSP_INT_Enable)
        .expects(exactly(1))
        .will(returnValue((int)VOS_ERR));

    EXPECT_EQ(MDRV_ERROR, uttest_SocpAcpuInit_case());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpAcpuInit5
*���⺯����������:ACPU SOCP������ʼ��:A�˴�������ʧ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpAcpuInit5, UT)
{
    UTTEST_BSP_SOCP_ENC_DST_BUF_LOG_CFG_STRU stcfg;

    stcfg.logOnFlag = VOS_TRUE;

    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    MOCKER(SocpGetSDLogCfg)
        .expects(exactly(1))
        .will(returnValue((void *)&stcfg));

    MOCKER(BSP_GetIPBaseAddr)
        .expects(exactly(1))
        .will(returnValue((void *)uttest_SocpAcpuInit_GetaulRegAddr()));

    MOCKER(__ioremap)
        .expects(exactly(1))
        .will(returnValue((void *)uttest_SocpAcpuInit_GetaulRegAddr()));

    MOCKER(__arm_ioremap)
        .expects(exactly(1))
        .will(returnValue((void *)uttest_SocpAcpuInit_GetaulRegAddr()));

    MOCKER(SocpCoreInit)
        .expects(exactly(1));

    MOCKER(SOCP_MsConvertToCycle)
        .expects(exactly(1))
        .will(returnValue((unsigned int)0));

    MOCKER(BSP_GetIntNO)
        .expects(exactly(1))
        .will(returnValue((int)MDRV_OK));

    MOCKER(BSP_INT_Connect)
        .expects(exactly(1))
        .will(returnValue((int)VOS_OK));

    MOCKER(BSP_INT_Enable)
        .expects(exactly(1))
        .will(returnValue((int)VOS_OK));

    MOCKER(SocpAcpuCreateTask)
        .expects(exactly(1))
        .will(returnValue((int)VOS_ERR));

    EXPECT_EQ(MDRV_ERROR, uttest_SocpAcpuInit_case());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: SocpAcpuInit6
*���⺯����������:ACPU SOCP������ʼ��:A�˴�������ɹ�
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��17��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(SocpAcpuInit6, UT)
{
    UTTEST_BSP_SOCP_ENC_DST_BUF_LOG_CFG_STRU stcfg;

    stcfg.logOnFlag = VOS_TRUE;

    MOCKER(SocpGetSDLogCfg)
        .expects(exactly(1))
        .will(returnValue((void *)&stcfg));

    MOCKER(BSP_GetIPBaseAddr)
        .expects(exactly(1))
        .will(returnValue((void *)uttest_SocpAcpuInit_GetaulRegAddr()));

    MOCKER(__ioremap)
        .expects(exactly(1))
        .will(returnValue((void *)uttest_SocpAcpuInit_GetaulRegAddr()));

    MOCKER(__arm_ioremap)
        .expects(exactly(1))
        .will(returnValue((void *)uttest_SocpAcpuInit_GetaulRegAddr()));

    MOCKER(SocpCoreInit)
        .expects(exactly(1));

    MOCKER(SOCP_MsConvertToCycle)
        .expects(exactly(1))
        .will(returnValue((unsigned int)0));

    MOCKER(BSP_GetIntNO)
        .expects(exactly(1))
        .will(returnValue((int)MDRV_OK));

    MOCKER(BSP_INT_Connect)
        .expects(exactly(1))
        .will(returnValue((int)VOS_OK));

    MOCKER(BSP_INT_Enable)
        .expects(exactly(1))
        .will(returnValue((int)VOS_OK));

    MOCKER(SocpAcpuCreateTask)
        .expects(exactly(1))
        .will(returnValue((int)VOS_OK));

    EXPECT_EQ(VOS_OK, uttest_SocpAcpuInit_case());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_CoderSetSrcChan1
*���⺯����������:δ��ɳ�ʼ��
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��18��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_CoderSetSrcChan1, UT)
{
    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(BSP_ERR_SOCP_NOT_INIT, uttest_BSP_SOCP_CoderSetSrcChan_case1());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_CoderSetSrcChan2
*���⺯����������:eMode����ȷ
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��18��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_CoderSetSrcChan2, UT)
{
    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(BSP_ERR_SOCP_INVALID_PARA, uttest_BSP_SOCP_CoderSetSrcChan_case2());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_CoderSetSrcChan3
*���⺯����������:buflength��������
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��18��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_CoderSetSrcChan3, UT)
{
    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(BSP_ERR_SOCP_INVALID_PARA, uttest_BSP_SOCP_CoderSetSrcChan_case3());

    GlobalMockObject::reset();
}

/*******************************************************************
*������: BSP_SOCP_CoderSetSrcChan4
*���⺯����������:Rdbuflength��������
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��: 2014��6��18��
#    ��    ��: L00256032
#    �޸�����: �½�CASE
*******************************************************************/
TEST(BSP_SOCP_CoderSetSrcChan4, UT)
{
    MOCKER(OM_Inner_Log)
        .expects(exactly(1));

    EXPECT_EQ(BSP_ERR_SOCP_INVALID_PARA, uttest_BSP_SOCP_CoderSetSrcChan_case4());

    GlobalMockObject::reset();
}


