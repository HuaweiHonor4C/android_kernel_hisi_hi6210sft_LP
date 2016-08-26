/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : lt_nv_common_interface.h
  �� �� ��   : ����
  ��    ��   : wangxu
  ��������   : 2014��3��13��
  ����޸�   :
  ��������   : TL ����NV����
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2014��3��13��
    ��    ��   : wangxu
    �޸�����   : �����ļ�
--------------------------------------------------------------------------------


******************************************************************************/


#ifndef __LT_NV_COMMON_INTERFACE_H__
#define __LT_NV_COMMON_INTERFACE_H__
#include "TLPhyInterface.h"
#include "LNvCommon.h"/*alex nv write*/

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */
/************************************************************
                     ��������ģ���ͷ�ļ�
************************************************************/

/************************************************************
                               �궨��
************************************************************/
#define TL_DCXO_POLY_COEF_NUM									(4)
#define TL_DCXO_TEMP_AFC_MAX_NUM          						(144)
#define TL_DCXO_UNITARY_TEMP									(250)
#define TL_DCXO_POLY_COEF_DEFAULT_A0_MANTISSA					(0)
#define TL_DCXO_POLY_COEF_DEFAULT_A0_EXP						(0)
#define TL_DCXO_POLY_COEF_DEFAULT_A1_MANTISSA					(1920998616)
#define TL_DCXO_POLY_COEF_DEFAULT_A1_EXP						(49154)
#define TL_DCXO_POLY_COEF_DEFAULT_A2_MANTISSA					(144403660)
#define TL_DCXO_POLY_COEF_DEFAULT_A2_EXP						(16379)
#define TL_DCXO_POLY_COEF_DEFAULT_A3_MANTISSA					(3271384601)
#define TL_DCXO_POLY_COEF_DEFAULT_A3_EXP						(16369)


/************************************************************
                               ö�ٶ���
************************************************************/


/************************************************************
                             ���ݽṹ����
************************************************************/
/*****************************************************************************
 �ṹ��    : TLCOMM_NV_DCXO_TEMP_COMP_POLY_COEF_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����DCXO����ʽ�� 4��ϵ�����¶ȵ������Сֵ
*****************************************************************************/
typedef struct
{
	UINT32							aulMantissaDefault[TL_DCXO_POLY_COEF_NUM];  /* ���δ��a0,a1,a2,a3��β�� */
	UINT16							ausExponentDefault[TL_DCXO_POLY_COEF_NUM]; /* ���δ��a0,a1,a2,a3��ָ�� */
	INT16							sTmax;								/* �����¶����ֵ */
	INT16							sTmin;								/* �����¶���Сֵ */
}TLCOMM_NV_DCXO_TEMP_COMP_POLY_COEF_STRU;

enum TLCOMM_NV_32K_TYPE_ENUM
{
    TLCOMM_NV_32K_TYPE_32000            = 0,        /*32kʱ�Ӹ���32000*/
    TLCOMM_NV_32K_TYPE_32764            = 1,        /*32kʱ�Ӹ���32764*/
    TLCOMM_NV_32K_TYPE_32768            = 2     /*32kʱ�Ӹ���32768*/
};
typedef UINT16 TLCOMM_NV_32K_TYPE_ENUM_UINT16;

enum TLCOMM_NV_SINGLE_XO_TYPE_ENUM
{
    TLCOMM_NV_SINGLE_XO_TYPE_UNSUPPORT    = 0,                                    /* ��֧�ֵ�ʱ�� */                                                           /* ���н�����DPCH */
    TLCOMM_NV_SINGLE_XO_TYPE_TCXO         = 1,                                    /* ��TCXO */                                                           /* ���д���RACH */
    TLCOMM_NV_SINGLE_XO_TYPE_DCXO         = 2,                                    /* ��DCXO */
    TLCOMM_NV_SINGLE_XO_TYPE_BUTT
};
typedef UINT16 TLCOMM_NV_SINGLE_XO_TYPE_ENUM_UINT16;

typedef struct
{
    TLCOMM_NV_SINGLE_XO_TYPE_ENUM_UINT16 enSingleXoType;                    /*��ʱ������*/
    TLCOMM_NV_32K_TYPE_ENUM_UINT16       en32kType;                         /*32kʱ��Ƶ������*/
}TLCOMM_NV_SINGLE_XO_DEFINE_STRU;

/*****************************************************************************
 �ṹ��    : TLCOMM_NV_DCXO_AFC_VS_TEMP_VALUE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ���һ��DCXO���¶�-Ƶ��(ʵ��ΪAFC����ֵ)����
*****************************************************************************/
typedef struct
{
    INT16                           sTemp;                                /* �¶� */
    INT16                           sFreqPpm;                             /* �����¶��¶�Ӧ�����Ƶƫ */
}TLCOMM_NV_DCXO_AFC_VS_TEMP_VALUE_STRU;


/*****************************************************************************
 �ṹ��    : TLCOMM_NV_DCXO_TEMP_READ_PERIOD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DCXO��ȡ�¶ȵ�����,����IDLE̬��DCH̬
*****************************************************************************/
typedef struct
{
    UINT16                          usIdlePeriod;                          /* IDLE̬�¶�ȡ���� */
    UINT16                          usConnPeriod;                          /* CONN̬�¶�ȡ���� */
}TLCOMM_NV_DCXO_TEMP_READ_PERIOD_STRU;


/*****************************************************************************
 �ṹ��    : TLCOMM_NV_DCXO_TEMP_COMP_THRESHOLD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DCXO����ʽϵ����������
*****************************************************************************/
typedef struct
{
    UINT8   ucMinSampleNum;
    UINT8   ucMaxSampleNUm;
    UINT8   ucSampleInStep;
    UINT8   ucRsv;
    UINT16  usSampleInThr;
    INT16   sCoefVerifyTemp;
}TLCOMM_NV_DCXO_TEMP_CTRL_THR_ONE_AREA_STRU;
typedef struct
{
    INT16                                 sMinTemp;
    INT16                                 sMaxTemp;
    INT16                                 sLowestHighTempAreaThr;
    INT16                                 sHighestLowTempAreaThr;
	TLCOMM_NV_DCXO_TEMP_CTRL_THR_ONE_AREA_STRU astTempCtrlOneArea[3];
}TLCOMM_NV_DCXO_TEMP_CTRL_THR_STRU;
/*****************************************************************************
 �ṹ��    : TLCOMM_NV_DCXO_TEMP_COMP_THRESHOLD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DCXO����ʽϵ����������
*****************************************************************************/
typedef struct
{
    UINT32                          aulLowMantissa[TL_DCXO_POLY_COEF_NUM];
    UINT16                          ausLowExponent[TL_DCXO_POLY_COEF_NUM];
    UINT32                          aulHighMantissa[TL_DCXO_POLY_COEF_NUM];
    UINT16                          ausHighExponent[TL_DCXO_POLY_COEF_NUM];
    TLCOMM_NV_DCXO_TEMP_CTRL_THR_STRU stTempCtrlThr;
}TLCOMM_NV_DCXO_TEMP_COMP_THRESHOLD_STRU;


/*****************************************************************************
 �ṹ��    : TLCOMM_NV_DCXO_FREQ_VS_TEMP_ARRAY_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ���DCXO���¶�-Ƶ��(ʵ��ΪAFC����ֵ)��������
*****************************************************************************/
#if 0
typedef struct
{
    UINT32                          uwValidNum;                             /* ��������Ч���� */
    INT16                           shwTmax;                                /* �����¶����ֵ */
    INT16                           shwTmin;                                /* �����¶���Сֵ */
    TLCOMM_NV_DCXO_AFC_VS_TEMP_VALUE_STRU astAfcTempValue[TL_DCXO_TEMP_AFC_MAX_NUM]; /* �������� */
}TLCOMM_NV_DCXO_FREQ_VS_TEMP_ARRAY_STRU;
#endif

#define TL_DCXO_TEMP_AFC_ONE_AREA_MAX_NUM                           (40)
typedef struct
{
    INT16                           sTemp;                                /* �¶� 0.1*/
    INT16                           sFreqPpm;                             /* �����¶��¶�Ӧ�����Ƶƫ */
}TLCOMM_NV_DCXO_T2F_SAMPLE_STRU;

typedef struct
{
    UINT8   ucValidNum;
    UINT8   ucWriteIdx;
    UINT8   ucMinSampleNum;
    UINT8   ucMaxSampleNUm;
    UINT8   ucSampleInStep;
    UINT8   ucRsv;
    UINT16  usSampleInThr;
    INT16   sCoefVerifyTemp;
    INT16   sRsv;
    TLCOMM_NV_DCXO_T2F_SAMPLE_STRU astSample[TL_DCXO_TEMP_AFC_ONE_AREA_MAX_NUM];
}TLCOMM_NV_DCXO_T2F_ONE_TEMP_AREA_STRU;

#define TLCOMM_NV_DCXO_T2F_LOW_TEMP_AREA_IDX                    (0)
#define TLCOMM_NV_DCXO_T2F_MID_TEMP_AREA_IDX                    (1)
#define TLCOMM_NV_DCXO_T2F_HIGH_TEMP_AREA_IDX                   (2)
typedef struct
{
    INT16                                 sMinTemp;
    INT16                                 sMaxTemp;
    INT16                                 sLowestHighTempAreaThr;
    INT16                                 sHighestLowTempAreaThr;
    TLCOMM_NV_DCXO_T2F_ONE_TEMP_AREA_STRU astTempArea[3];
}TLCOMM_NV_DCXO_FREQ_VS_TEMP_ARRAY_STRU;
/*end*/

typedef struct
{
    UINT32                                      ulCoefValid;                /*�����У׼ϵ���Ƿ���Ч*/
    TLCOMM_NV_DCXO_TEMP_COMP_POLY_COEF_STRU     stCoef;                     /*��ֵ3�η�����ϵ��*/
}TLCOMM_NV_DCXO_TEMP_COMP_POLY_STRU;

typedef struct
{
    TLCOMM_NV_DCXO_TEMP_COMP_POLY_STRU astcoef[3];
}TLCOMM_NV_DCXO_TEMP_COMP_POLY_ALL_STRU;

typedef struct
{
    INT16  sInitCfix;
    UINT16 usFreqErrThreshold;
    UINT16 usCfixLowerLimit;
    UINT16 usCfixUpperLimit;
}NV_DCXO_C_TRIM_DEFAULT;

typedef struct
{
    UINT16 usC2fixLowerLimit;
    UINT16 usC2fixUpperLimit;
    UINT16 usC2fixFactoryCal;
	UINT16 usRsv;
}NV_DCXO_C2_FIX_DEFAULT;

typedef struct
{
    INT16 sInitAfc;
	INT16 sInitTemperature;
}NV_XO_INIT_FREQUENCY;

typedef struct
{
    INT16  sCtrim;
	UINT16 usRsv;
}NV_DCXO_C_TRIM;

typedef struct
{
    INT16  sC2fix;
	UINT16 usRsv;
}NV_DCXO_C2_FIX;

typedef struct
{
	UINT32 ulTLCommNVSize;
}TL_COMM_NV_SIZE_PARA_STRU;

/*****************************************************************************
 �ṹ��    : TLCOMM_NV_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : TL ����NV
*****************************************************************************/
typedef struct
{
	TL_COMM_NV_SIZE_PARA_STRU	  stNvSize;
	NV_DCXO_C_TRIM_DEFAULT        stDcxoCTrimdefault;
	NV_DCXO_C2_FIX_DEFAULT        stDcxoC2Fixdefault;
	NV_XO_INIT_FREQUENCY          stXoInitFrequency;
	NV_DCXO_C_TRIM                stDcxoCTrim;
	NV_DCXO_C2_FIX                stDcxoC2Fix;

	TLCOMM_NV_DCXO_TEMP_COMP_POLY_COEF_STRU stDcxoDefaultPlyCoef;/*DCXO �²�����ʽȱʡϵ��*/
	TLCOMM_NV_DCXO_TEMP_COMP_THRESHOLD_STRU stDcxoPlyCoefUpdateThr;/*DCXO�²�ϵ��ˢ������*/
	TLCOMM_NV_DCXO_FREQ_VS_TEMP_ARRAY_STRU  stDcxoFrqToTempBuffer;/*�¶�ppm����*/
	TLCOMM_NV_DCXO_TEMP_READ_PERIOD_STRU	stDcxoTempSamplePeriod;/*�¶�Ƶƫ��������*/
	TLCOMM_NV_DCXO_TEMP_COMP_POLY_ALL_STRU  stDcxoCmpPlyCoef;/*DCXO �²�����ʽ����ϵ��*/

}TLCOMM_NV_PARA_STRU;

extern TLCOMM_NV_PARA_STRU *gpTLNvCommPara;

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __LT_NV_COMMON_INTERFACE_H__ */


