/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : AtTestParaCmd.h
  �� �� ��   : ����
  ��    ��   :
  ��������   : 2014��8��8��
  ����޸�   :
  ��������   : AtTestParaCmd.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2014��8��08��
    ��    ��   :
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __ATTESTPARACMD_H__
#define __ATTESTPARACMD_H__

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "AtParse.h"
#include "product_config.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/


/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  7 STRUCT����
*****************************************************************************/


/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
extern VOS_UINT32 At_CmdTestProcOK(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_CmdTestProcERROR(VOS_UINT8 ucIndex);

extern VOS_UINT32 AT_TestRefclkfreqPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 AT_TestNCellMonitorPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 AT_TestCbgPara( VOS_UINT8 ucIndex );

extern VOS_UINT32 AT_TestCgpsClockPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCgdcont(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCgdscont(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCgtft(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCgact(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCgcmod(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCgpaddr(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCgautoPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestAuhtdata(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestNdisconn(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestNdisDup(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCgeqos(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCgeqosrdp(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCgcontrdp(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCgscontrdp(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCgtftrdp(VOS_UINT8 ucIndex);

extern VOS_UINT32 AT_TestChrgEnablePara(VOS_UINT8 ucIndex);

extern VOS_UINT32 AT_TestCposrPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 AT_TestCmutPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestVtsPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCuus1Para(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCcwaPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCcfcPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCusdPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCpwdPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestClckPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 AT_TestCpbsPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 AT_TestCpbrPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 AT_TestCnmaPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 AT_TestCpasPara(VOS_UINT8 ucIndex);

#if ((FEATURE_ON == FEATURE_GCBS) || (FEATURE_ON == FEATURE_WCBS))
extern VOS_UINT32 AT_TestCscbPara(VOS_UINT8 ucIndex);
#endif

/* Added by f62575 for AT Project, 2011-10-28, begin */
extern VOS_UINT32 AT_TestCpmsPara(VOS_UINT8 ucIndex);
/* Added by f62575 for AT Project, 2011-10-28, end */

extern VOS_UINT32 At_TestCopsPara(TAF_UINT8 ucIndex);

extern VOS_UINT32 At_TestCpolPara(TAF_UINT8 ucIndex);

extern VOS_UINT32 At_TestCgeqnegPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCgeqreqPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCgansPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCgansExtPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCgdnsPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 At_TestCgdataPara(VOS_UINT8 ucIndex);

#if (FEATURE_ON == FEATURE_IMS)
extern VOS_UINT32 AT_TestCiregPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 AT_TestCirepPara(VOS_UINT8 ucIndex);
#endif





#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of AtCmdCallProc.h */

