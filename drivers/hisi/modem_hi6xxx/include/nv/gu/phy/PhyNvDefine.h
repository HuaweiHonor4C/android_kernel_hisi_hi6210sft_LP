/******************************************************************************

  Copyright(C)2008,Hisilicon Co. LTD.

 ******************************************************************************
  File Name       : PhyNvDefine.h
  Description     : PhyNvDefine.h header file
  History         :

******************************************************************************/
#ifndef __PHYNVDEFINE_H__
#define __PHYNVDEFINE_H__

#include "vos.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(1)


/*****************************************************************************
  2 �궨��
*****************************************************************************/


/* xiongjiangjiang Begine */
#define UCOM_NV_EDGE_TX_TEMP_COMP_NUM           ( 16 )
#define UCOM_NV_EDGE_TX_RF_GAIN_CTRL_NUM        ( 20 )


#define UCOM_NV_G_RAMP_PWR_LEVEL_NUM        ( 7 )                               /* ������10dBm,20dBm����Ϊ3�����¹������� */
#define UCOM_NV_G_TX_REF_CHAN_NUM_MAX       ( 32 )                              /* TXƵ�ʲ���У׼Ƶ�������� */


#define UCOM_NV_G_TX_8PSK_PWR_CONT_NUM      ( 30 )                              /* (����)8PSK��ҪУ���ķ��书�ʵ�Ϊ30�� */
#define UCOM_NV_G_TX_PWR_CONT_NUM           ( 60 )                              /* ��ҪУ���ķ��书�ʵ�Ϊ60�� */


#define UCOM_NV_G_TEMP_LEVEL_NUM            ( 16 )                              /* [�¶ȵ�λ,��5��:-20~0,0~20,20~40,40~60,60~85] */
#define UCOM_NV_G_AGC_LEVEL_MAX_NUM         ( 8 )
#define UCOM_NV_G_GAIN_THRESHOLD_MAX_NUM    ( UCOM_NV_G_AGC_LEVEL_MAX_NUM - 1 )  /* UCOM_NV_G_AGC_LEVEL_MAX_NUM - 1 */
#define UCOM_G_RX_OTHER_GAIN_DCR_CHAN_NUM   ( UCOM_NV_G_AGC_LEVEL_MAX_NUM - 1 ) /* ��Ƶ������λDCRУ׼��� */


#define UCOM_NV_G_CHAN_GAIN_MAX_NUM         ( 8 )                               /* �������浵������AGC��λ�ʶ�Ӧ��ϵ */

#define UCOM_NV_G_TX_POWER_LEVEL_NUM        ( 3 )                               /* �����书�ʻ���Ϊ3���ȼ� */
#define UCOM_NV_G_TX_CHAN_COMP_NUM          ( 32 )                              /* 8PSK TXƵ�ʲ����ο���������� */
#define UCOM_NV_G_PCL_NUM                   ( 32 )                              /* ���ʵȼ����� */
#define UCOM_NV_G_TX_SLOT_MAX_NUM           ( 4 )                               /* ���ʵȼ����� */

#define UCOM_NV_G_TX_ATTEN_NUM              ( 55 )                              /* 8PSK ˥������ */

#define UCOM_NV_G_RX_CHAN_COMP_NUM          ( 16 )                              /* ��Ƶ�βο���������� */
#define UCOM_NV_G_HIGH_BAND_CHAN_COMP_NUM   ( 16 )                              /* ��Ƶ�βο���������� */

#define UCOM_NV_G_RX_GSM850_GAIN0_DCR_NUM   ( 42 )
#define UCOM_NV_G_RX_GSM900_GAIN0_DCR_NUM   ( 65 )
#define UCOM_NV_G_RX_DCS1800_GAIN0_DCR_NUM  ( 125 )
#define UCOM_NV_G_RX_PCS1900_GAIN0_DCR_NUM  ( 100 )
#define UCOM_G_RX_GAIN0_DCR_MAX_NUM         ( 125 )

#if ( FEATURE_ON == FEATURE_VIRTUAL_BAND )
#define UCOM_NV_G_BAND_NUM                  ( 5 )                               /* GSM Narrow Dcs�����Ƶ�� */
#else
#define UCOM_NV_G_BAND_NUM                  ( 4 )                               /* GSM���ĸ�Ƶ�� */
#endif
#define UCOM_NV_G_BAND_NUMBER               ( 4 )                               /* GSM���ĸ�Ƶ�� */
#define UCOM_NV_G_HIGH_BAND_NUM             ( 2 )                               /* ��Ƶ�ΰ���1800/1900����Ƶ�� */
#define UCOM_NV_G_LOW_BAND_NUM              ( 2 )                               /* ��Ƶ�ΰ���850/900����Ƶ�� */
#define UCOM_NV_G_HIGH_BAND_INDEX           ( 0 )                               /* ��Ƶ�ΰ���1800/1900����Ƶ�� */
#define UCOM_NV_G_LOW_BAND_INDEX            ( 1 )                               /* ��Ƶ�ΰ���850/900����Ƶ�� */
#define UCOM_NV_G_HIGH_LOW_BUTT             ( 2 )                               /* Gģ���ָߵ�BAND */
#define UCOM_NV_G_SUBBAND_NUM               ( 3 )                               /* ÿƵ������Ƶ�θ��� */
#define UCOM_NV_G_RAMP_COEF_NUM             ( 16 )                              /* ���µ��� */

/* xiongjiangjiang End */

#define UCOM_NV_W_BAND_SECTION_NUM                  ( 3 )                       /* W BAND SECTION */
#define UCOM_NV_WCDMA_PA_EN_LINE_NUM        ( 4 )                               /* w pa 4 line */

/* ���HSUPA ETFCI ������ */
#define UCOM_NV_HSUPA_ETFCI_TABLE_MAX_NUM   ( 6 )

#define UCOM_NV_W_TX_TEMP_COMP_NUM                  ( 16 )                      /* ÿ��RF Gain��λ���¶Ȳ�����Ŀ */

#define UCOM_NV_W_TX_RF_GAIN_CTRL_NUM               ( 20 )                      /* RF���浵λ������Ŀ */

#define UCOM_W_MAX_RF_GAIN_CTRL_NUM             ( 20 )                          /* rf gain ctrl���λ�� */

#define UCOM_W_MAX_RF_BIAS_NUM                  ( 16 )                          /* rf BIAS���λ�� */
#define UCOM_W_MAX_RF_BB_GAIN_NUM               ( 32 )                          /* rf BB GAIN���λ�� */

#define UCOM_NV_MAX_RF_VCO_CONFIG_NUM               ( 4 )                       /* RF VCO CONFIG */
#define UCOM_NV_W_TX_RF_BIAS_NUM                    ( 0x4 )                     /* RF TX BIAS */
#define UCOM_NV_W_TX_DPA_IQ_REDUCTION_NUM           ( 15 )                      /* DPAҵ�����ֻ��� */
#define UCOM_NV_W_TX_SCUPA_IQ_REDUCTION_NUM         ( 26 )                      /* SC-UPAҵ�����ֻ��� */
#define UCOM_NV_W_TX_DPA_MPR_NUM                    ( 15 )                      /* DPAҵ��Ĺ��ʻ��� */
#define UCOM_NV_MAX_MMMBPA_CMD_NUMBER                ( 8 )                       /* ���������������Ŀ */
#define UCOM_NV_MAX_MIPI_ANT_CMD_NUMBER              ( 4 )                       /* ant switch���������������Ŀ */
#define UCOM_NV_W_ANT_NUM                            ( 2 )                        /* 2���� */
#define UCOM_NV_W_TX_SCUPA_MPR_NUM                   ( 26 )                      /* SC-UPAҵ��Ĺ��ʻ��� */
#define UCOM_NV_W_TX_DCUPA_MPR_NUM                   ( 7 )                       /* SC-UPAҵ��Ĺ��ʻ��� */
#define UCOM_NV_SAR_BACKOF_NUM                       ( 9 )                               /* ��SAR����9���ȼ� */
#define UCOM_NV_W_PA_GAIN_SWITCH_COMP_BOUNDARY_NUM  ( 5 )                       /* W TX PA�����л��㲹��,ÿ��BAND����5������ */
#define UCOM_NV_APT_TABLE_MAX_LEN           ( 96 )                              /* APT��������� */
#define UCOM_NV_APT_STEP_0_8_NUM            ( 32 )                              /* 0.8db����ÿ����λ��APT������ */
#define UCOM_NV_APT_STEP_0_4_NUM            ( 48 )                              /* 0.4db����ÿ����λ��APT������ */
#define UCOM_NV_APT_MAX_NUM                 ( UCOM_NV_APT_STEP_0_4_NUM )        /* ÿ����λ��APT������������ */
#define UCOM_NV_W_PA_NONLINEAR_NUM          ( UCOM_NV_APT_TABLE_MAX_LEN )       /* PA�����Բ��� */

#define UCOM_NV_PA_GAIN_MAX_NUM             ( 3 )                               /* PA��λ���� */
#define UCOM_WCDMA_UARFCN_NUM               ( 0x10 )                            /* ÿ��Ƶ����UARFCN���� */
#define UCOM_NV_W_TX_PA_MODE_NUM            ( 3 )                               /* PA �������:���е� */
#define UCOM_NV_W_TEMP_NUM                  ( 0x10  )                           /* �¶Ȳ������õ��¶ȵ㣬ǰ5���ֱ���� -20,0,20,40,60����6�������ֽڶ��� */
#define UCOM_NV_W_TX_PA_TEMP_NUM            ( 0x10 )                            /* TX PA���¶Ȳ������õ��¶ȵ㣬�ɹ����·�����16�� */
#define UCOM_NV_W_TX_FREQ_COMP_NUM          ( 0x10 )                            /* TX PA���¶Ȳ������õ��¶ȵ㣬�ɹ����·�����16�� */


#define UCOM_NV_W_AGC_GAIN_NOBLK_STEP_NUM             ( 0x8 )
#define UCOM_NV_W_AGC_GAIN_NOBLK_THRESHOLD_NUM        ( UCOM_NV_W_AGC_GAIN_NOBLK_STEP_NUM -1 )  /* 6361��AGC GAIN��λ�л����޵ĸ���
                                                         ��ֵ�����ڵ�λ=(UCOM_NV_W_AGC_GAIN_NOBLK_STEP_NUM - 1) */

#define UCOM_NV_W_AGC_GAIN_BLK_STEP_NUM               ( 0x8 )                                           /* NV����block��λ���� */
#define UCOM_NV_W_AGC_GAIN_BLK_THRESHOLD_NUM          ( UCOM_NV_W_AGC_GAIN_BLK_STEP_NUM - 1 )    /* 6361��AGC GAIN��λ�л����޵ĸ���
                                                                  UCOM_NV_W_AGC_GAIN_BLK_STEP_NUM - 1 */

#define UCOM_NV_W_TX_HDET_DPA_CM_COMP_NUM           ( 15 )                      /* DPAҵ��PD��CM���� */
#define UCOM_NV_W_TX_HDET_SCUPA_CM_COMP_NUM         ( 26 )                      /* SC-UPAҵ��PD��CM���� */

#define UCOM_NV_W_APT_FREQ_COMP_NUM                 ( 16 )
#define UCOM_NV_W_APT_TEMP_COMP_NUM                 ( 16 )

#define UCOM_NV_W_CHANNEL_NUM               ( 3 )                               /* NV��ÿ��BAND���ָ��е������ŵ� */
#define UCOM_NV_W_PA_SWITCH_COMP_SLOT       ( 4 )                               /* Pa�л�����ʱ϶�� */
#define UCOM_NV_W_APC_ATTEN_NUM             ( 0x58 )
#define UCOM_NV_W_TX_HDET_PV_NUM            ( 0x10 )                            /* PA�Ĺ�����ѹ���� */
#define UCOM_NV_W_PA_GAIN_SWITCH_COMP_CHAN_NUM      ( 4 )                       /* W TX PA�����л��㲹����4���ֽ�Ƶ�� */
#define UCOM_NV_W_TX_APT_SCUPA_CM_COMP_NUM          ( 26 )                      /* SC-UPAҵ��APT��CM���� */

#define UCOM_NV_W_TX_APT_DPA_CM_COMP_NUM            ( 15 )                     /* DPAҵ��APT��CM���� */
#define UCOM_NV_W_TX_PA_VBIAS_NUM           ( 3 )                               /* pa vbias���� */


#define UCOM_NV_W_TOTAL_BAND_NUM            ( 0x06 )
#define UCOM_NV_RFABB_INIT_REG_NUM          ( 60 )                             /* ��ʼ��������60�� */

/* tuner MIPI�ӿڳ�ʼ���Ĵ��������� */
#define UCOM_NV_TUNER_MIPI_COMM_INIT_REG_NUM    ( 6 )

/* AP+Sensor�ֳ�״̬����,Ŀǰ֧��5��״̬ */
#define UCOM_NV_TUNER_HANDLE_STATUS_NUM         ( 5 )

/* idleʱ��tuner֧�ֵ����MIPI���� */
#define UCOM_NV_TUNER_MIPI_IDLE_CMD_MAX_NUM     ( 6 )

/* activeʱ��w tuner֧�ֵ����MIPI���� */
#define UCOM_NV_W_TUNER_MIPI_CMD_MAX_NUM        ( 10 )
#define UCOM_NV_W_TUNER_MIPI_DATA_MAX_NUM       ( UCOM_NV_W_TUNER_MIPI_CMD_MAX_NUM )

/* activeʱ,G tuner֧�ֵ����MIPI���� */
#define UCOM_NV_GSM_TUNER_MIPI_CMD_MAX_NUM      ( 6 )
#define UCOM_NV_GSM_TUNER_MIPI_DATA_MAX_NUM     ( UCOM_NV_GSM_TUNER_MIPI_CMD_MAX_NUM )

/* activeʱ,G PA֧�ֵ����MIPI���� */
#define UCOM_NV_PA_MIPI_CMD_MAX_NUM             ( 8 )
#define UCOM_NV_PA_MIPI_DATA_MAX_NUM            ( UCOM_NV_PA_MIPI_CMD_MAX_NUM )

#define UCOM_G_RX_GAIN0_DCR_CHAN_NUM            ( 16 )                          /*DCR channel NUM */
/* DCXO����ʽϵ���ĸ��� */
#define UCOM_DCXO_POLY_COEFF_NUM            ( 4 )

#define UCOM_NV_XO_TEMP_COMP_NUM            ( 32 )
#define UCOM_NV_BATT_TEMP_SENSOR_NUM        ( 8 )
/* ��� 144���¶�-Ƶ��������:����ʱ���� FIFOԭ�� */
#define UCOM_DCXO_TEMP_AFC_MAX_NUM          ( 144 )
#define UCOM_NV_PA_TEMP_SENSOR_NUM          ( 32 )

#define UCOM_NV_GSM_LINEAR_PA_GAIN_NUM                ( 4 )                       /* GSM ����PA������� */

#define UCOM_NV_GSM_LINEAR_PA_SWITCH_THRESHOLD_NUM    ( UCOM_NV_GSM_LINEAR_PA_GAIN_NUM - 1 )  /* GSM ����PA������� */

#define UCOM_NV_DCXO_SEARCH_AFC_OFFSET_SAMPLE_NUM       ( 5 )                   /* ��������AFCƫ�ü��������������� */

#define UCOM_NV_RCM_TAS_TABLE_NUM                      ( 12 )


#define UCOM_NV_GSM_TX_HD35_ARFCN_NUM        ( 3 )                              /* ÿ��Ƶ������У׼Ƶ�� */
#define UCOM_NV_GSM_TX_HD35_PCL_NUM          ( 3 )                              /* ÿ��Ƶ������У׼PCL�� */

/*****************************************************************************
  3 Massage Declare
*****************************************************************************/

/*****************************************************************************
  4 Enum
*****************************************************************************/


/*****************************************************************************
 ö����    :UCOM_NV_DC_SC_MODE_ENUM_UINT16
 Э����  :
 ASN.1���� :
 ö��˵��  :�ز�ģʽ
*****************************************************************************/
enum UCOM_NV_DC_SC_MODE_ENUM
{
    UCOM_NV_SC_MODE                     = 0,                                    /* ���ز�ģʽ */
    UCOM_NV_DC_MODE                     = 1,                                    /* ˫�ز�ģʽ */
    UCOM_NV_DC_SC_MODE_BUTT             = 2
};
typedef VOS_UINT16 UCOM_NV_DC_SC_MODE_ENUM_UINT16;

/*****************************************************************************
 ö����    : UCOM_NV_CHAN_CONNECT_ENUM_UINT16
 Э����  :
 ASN.1���� :
 ö��˵��  : A/Bͨ���ı�ʶ
*****************************************************************************/
enum UCOM_NV_CHAN_CONNECT_ENUM
{
    UCOM_NV_CHAN_CONNECT_A                  = 0,                                /* Aͨ�� */
    UCOM_NV_CHAN_CONNECT_B                  = 1,                                   /* Bͨ�� */
    UCOM_NV_CHAN_CONNECT_BUTT               = 2
};
typedef VOS_UINT16 UCOM_NV_CHAN_CONNECT_ENUM_UINT16;


/*****************************************************************************
 ö����    : UCOM_NV_WCDMA_SPUR_TYPE_ENUM_UINT16
 Э����  :
 ASN.1���� :
 ö��˵��  : г��������
*****************************************************************************/
enum UCOM_NV_WCDMA_SPUR_TYPE_ENUM
{
    UCOM_NV_WCDMA_SPUR_1920                  = 0,                               /* 19.20M */
    UCOM_NV_WCDMA_SPUR_1536                  = 1,                                  /* 15.36M */
    UCOM_NV_WCDMA_SPUR_6144                  = 2,                                  /* 61.44M */
    UCOM_NV_WCDMA_SPUR_BUTT                  = 3
};
typedef VOS_UINT16 UCOM_NV_WCDMA_SPUR_TYPE_ENUM_UINT16;

/*****************************************************************************
 ö����    :UCOM_NV_XO_TYPE_UINT16
 Э����  :
 ASN.1���� :
 ö��˵��  :������������,0��ʾ DCXO,1��ʾ TCXO
*****************************************************************************/
enum UCOM_NV_XO_TYPE_ENUM
{
    UCOM_NV_XO_TYPE_DCXO                = 0,                                    /* ��ʾʹ�� DCXO */                                                           /* ���н�����DPCH */
    UCOM_NV_XO_TYPE_TCXO                = 1,                                    /* ��ʾʹ�� TCXO */                                                             /* ���д���RACH */
    UCOM_NV_XO_TYPE_BUTT                = 2
};
typedef VOS_UINT16 UCOM_NV_XO_TYPE_ENUM_UINT16;

/*****************************************************************************
 ö����    :UCOM_NV_DCXO_TEMP_CIRCUIT_ENUM_UINT16
 Э����  :
 ASN.1���� :
 ö��˵��  :DCXO���������¶Ȳɼ���·��һ�����ڲɼ����º͸��£���һ�����ڲɼ����ºͲ��ֳ���
*****************************************************************************/
enum UCOM_NV_DCXO_TEMP_CIRCUIT_ENUM
{
    UCOM_NV_DCXO_TEMP_CIRCUIT_HIGH              = 0,                            /* ���µ�·  */
    UCOM_NV_DCXO_TEMP_CIRCUIT_NORMAL            = 0,                            /* ���º͸��µ�·��һ�� */                                                           /* ���н�����DPCH */
    UCOM_NV_DCXO_TEMP_CIRCUIT_LOW               = 1,                            /* ���µ�· */                                                             /* ���д���RACH */
    UCOM_NV_DCXO_TEMP_CIRCUIT_BUTT              = 2
};
typedef VOS_UINT16 UCOM_NV_DCXO_TEMP_CIRCUIT_ENUM_UINT16;

/*****************************************************************************
 ö����    :UCOM_NV_SINGLE_XO_TYPE_ENUM_UINT16
 Э����  :
 ASN.1���� :
 ö��˵��  :��ʱ������
*****************************************************************************/
enum UCOM_NV_SINGLE_XO_TYPE_ENUM
{
    UCOM_NV_SINGLE_XO_TYPE_UNSUPPORT      = 0,                                    /* ��֧�ֵ�ʱ�� */                                                           /* ���н�����DPCH */
    UCOM_NV_SINGLE_XO_TYPE_TCXO           = 1,                                    /* ��TCXO */                                                           /* ���д���RACH */
    UCOM_NV_SINGLE_XO_TYPE_DCXO           = 2,                                    /* ��DCXO */
    UCOM_NV_SINGLE_XO_TYPE_BUTT
};
typedef VOS_UINT16 UCOM_NV_SINGLE_XO_TYPE_ENUM_UINT16;


/*****************************************************************************
 ö����    :UCOM_NV_POWER_STEP_ENUM_UINT16
 Э����  :
 ASN.1���� :
 ö��˵��  :APT����������,0��ʾ 0.8db����,1��ʾ 0.4db����
*****************************************************************************/
enum UCOM_NV_APT_STEP_ENUM
{
    UCOM_NV_POWER_STEP_0_POINT_8_DB           = 0,                                /* ��ʾAPT��Ϊ0.8db���� */                                                           /* ���н�����DPCH */
    UCOM_NV_POWER_STEP_0_POINT_4_DB           = 1,                                /* ��ʾAPT��Ϊ0.4db���� */                                                             /* ���д���RACH */
    UCOM_NV_POWER_STEP_BUTT
};
typedef VOS_UINT16 UCOM_NV_POWER_STEP_ENUM_UINT16;

/*****************************************************************************
 ö����    :UCOM_NV_BBP_HARQ_OUT_TYPE_ENUM_UINT16
 Э����  :
 ASN.1���� :
 ö��˵��  :HARQ������������,0��ʾ��֧������, 1��ʾ���Ƶ�DDR, 2��ʾ���Ƶ�Ƭ���ڴ�
*****************************************************************************/
enum UCOM_NV_BBP_HARQ_OUT_TYPE_ENUM
{
    UCOM_NV_BBP_HARQ_OUT_NOT_SUPPORT       = 0,                                /* ��֧��HARQ���� */                                                           /* ���н�����DPCH */
    UCOM_NV_BBP_HARQ_OUT_IN_DDR            = 1,                                /* HARQ���Ƶ�DDR */                                                             /* ���д���RACH */
    UCOM_NV_BBP_HARQ_OUT_IN_CHIP           = 2,                                /* HARQ���Ƶ�Ƭ���ڴ� */
    UCOM_NV_BBP_HARQ_OUT_BUTT
};
typedef VOS_UINT16 UCOM_NV_BBP_HARQ_OUT_TYPE_ENUM_UINT16;

/*****************************************************************************
 ö����    :UCOM_NV_32K_TYPE_ENUM_UINT16
 Э����  :
 ASN.1���� :
 ö��˵��  :32Kʱ������
*****************************************************************************/
enum UCOM_NV_32K_TYPE_ENUM
{
    UCOM_NV_32K_TYPE_32000              = 0,                                    /* 32kʱ�Ӹ���32000 */                                                           /* ���н�����DPCH */
    UCOM_NV_32K_TYPE_32764              = 1,                                    /* 32kʱ�Ӹ���32764 */                                                           /* ���д���RACH */
    UCOM_NV_32K_TYPE_32768              = 2,                                    /* 32kʱ�Ӹ���32768 */
    UCOM_NV_32K_TYPE_BUTT
};
typedef VOS_UINT16 UCOM_NV_32K_TYPE_ENUM_UINT16;

/*****************************************************************************
 ö����    :UCOM_NV_DRX_CTRL_ENUM
 Э����  :
 ASN.1���� :
 ö��˵��  :0��ʾ������˯�ߣ�1��ʾ����˯��
*****************************************************************************/
enum UCOM_NV_DRX_CTRL_ENUM
{
    UCOM_NV_DRX_CTRL_DISABLE                = 0,                                /* ������˯�� */                                                           /* ���н�����DPCH */
    UCOM_NV_DRX_CTRL_ENABLE                 = 1,                                /* ����˯�� */                                                             /* ���д���RACH */
    UCOM_NV_DRX_CTRL_BUTT
};
typedef VOS_UINT16 UCOM_NV_DRX_CTRL_ENUM_UINT16;


/*****************************************************************************
  6 STRUCT
*****************************************************************************/
/*****************************************************************************
*                                                                            *
*                           ����������Ϣ�ṹ                                 *
*                                                                            *
******************************************************************************/
/* xiongjiangjiang Begine */
/*****************************************************************************
 �ṹ��    : UCOM_NV_NV_ITEM_XO_DEFINE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    UCOM_NV_XO_TYPE_ENUM_UINT16             enXoDefine;
}UCOM_NV_NV_ITEM_XO_DEFINE_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_PHY_AUTO_INIT_FLAG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : PHY�Ƿ��ϵ��Զ���ʼ��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwPhyAutoInitFlag;
}UCOM_NV_PHY_AUTO_INIT_FLAG_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_NV_ITEM_XO_DEFINE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��ʱ�����Ͷ���
*****************************************************************************/
typedef struct
{
    UCOM_NV_SINGLE_XO_TYPE_ENUM_UINT16      enSingleXoType;                     /* ��ʱ���Ƿ�ʹ��,0:��֧�֣�1:��tcxo��2:��dcxo */
    UCOM_NV_32K_TYPE_ENUM_UINT16            en32kType;                          /* 0:32000,1:32764��2:32768*/

}UCOM_NV_SINGLE_XO_DEFINE_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_AFC_K_VALUE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��ʱ��Kֵ����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwKValue;                          /* ��ʾBBP AFCÿ������λ��hz����Ĭ��Ϊ4 */
    VOS_UINT16                              uhwReserve;                         /* ���� */

}UCOM_NV_W_AFC_K_VALUE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_RFIC_TEMP_COMP_WEIGH_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : rf reg12 �¶�����NV_RFIC_TEMP_COMP_WEIGTH
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwNvRficTempCompWeigh;
}UCOM_NV_RFIC_TEMP_COMP_WEIGH_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_XO_INIT_FREQUENCY_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :2.2��ʾ��ͨ����ĳ�ʼƵƫ���¶�
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwInitFrequency;                       /* ��ͨ����ĳ�ʼƵƫ */
    VOS_INT16                           shwInitTemperature;                     /* ��ͨ����ĳ�ʼ�¶� */
}UCOM_NV_XO_INIT_FREQUENCY_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_DYNAMIC_FREQUENCY_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :2.2��ʾƽ̨�ϴ�AFC����ֵ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwDymamicFrequency;                    /* ƽ̨�ϴ�AFC����ֵ */
    VOS_INT16                           shwDymamicTemperature;                  /* ƽ̨�ϴ�AFC���¶� */
}UCOM_NV_DYNAMIC_FREQUENCY_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_WG_TX_TEMP_DEFINE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :7.3 3G��2G���з��书������¶ȱ仯��Χ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwTxTempDefine[UCOM_NV_W_TX_PA_TEMP_NUM];
}UCOM_NV_WG_TX_TEMP_DEFINE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_TEMP_SENCOR_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :for UCOM_NV_PA_TEMP_SENSOR_STRU
                UCOM_NV_XO_TEMP_SENSOR_STRU
                UCOM_NV_USIM_BATT_TEMP_SENSOR_STRU
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwPaTempTemp;                          /* �¶�:0.1�� */
    VOS_UINT16                          uhwPaTempVol;                           /* �����������ѹ */
}UCOM_NV_TEMP_SENCOR_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_PA_TEMP_SENSOR_TABLE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :7.1 PA���¶ȼ���
*****************************************************************************/
typedef struct
{
    UCOM_NV_TEMP_SENCOR_STRU            astPaTempSensor[UCOM_NV_PA_TEMP_SENSOR_NUM];
}UCOM_NV_PA_TEMP_SENSOR_TABLE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_XO_TEMP_SENSOR_TABLE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :7.1 ��ͨ����ĳ�(��)�µ�ѹ-�¶ȱ�
*****************************************************************************/
typedef struct
{
    UCOM_NV_TEMP_SENCOR_STRU            astXoTempSensor[UCOM_NV_XO_TEMP_COMP_NUM];
}UCOM_NV_XO_TEMP_SENSOR_TABLE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_XO_LOW_TEMP_SENSOR_TABLE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :7.1 ��ͨ����ĵ��µ�ѹ-�¶ȱ�
*****************************************************************************/
typedef struct
{
    UCOM_NV_TEMP_SENCOR_STRU            astXoLowTempSensor[UCOM_NV_XO_TEMP_COMP_NUM];
}UCOM_NV_XO_LOW_TEMP_SENSOR_TABLE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_BATT_TEMP_SENSOR_TABLE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :7.1 ��ص��¶ȼ���
*****************************************************************************/
typedef struct
{
    UCOM_NV_TEMP_SENCOR_STRU            astBattTempSensor[UCOM_NV_BATT_TEMP_SENSOR_NUM];
}UCOM_NV_BATT_TEMP_SENSOR_TABLE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_PRODUCT_TYPE_FOR_LOG_DIRECTORY
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��Ʒ����NV����ͬ��Ʒ��Log����·����һ��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwProductType;                         /* ��Ʒ���� */
    VOS_UINT16                          uhwReserve;                             /* ���� */
}UCOM_NV_PRODUCT_TYPE_FOR_LOG_DIRECTORY;

/*****************************************************************************
 �ṹ��    : UCOM_NV_XO_LOW_TEMP_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : XO���¼���������NV,�������Կ������·�л�����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwLowTempSupport;                      /* Ӳ���Ƿ�֧�ֵ��¼�⣬0-��֧�֣�1-֧�� */
    VOS_INT16                           shwSwitchDeltaTemp;                     /* ���µ�·��ԭ�е�·���л�����Ϊ(У׼�¶�+��ֵ)��
                                                                                   �������л������¶�ʱʹ�õ��µ�·��Ĭ��Ϊ0��
                                                                                   ���л�����ΪУ׼�¶�(���µ�·)����λ0.1�� */
    VOS_UINT16                          uhwTempDeltaThreshold;                  /* ������·У׼ֵ��ƫ�����ޣ�Ĭ��Ϊ10����λ0.1�� */
    VOS_UINT16                          uhwReserve;                             /* ���� */
}UCOM_NV_XO_LOW_TEMP_CTRL_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_XO_INIT_LOW_TEMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : У׼ʱ�����µ�·�ļ���¶ȣ����ݻָ���
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwInitLowTemp;                         /* У׼ʱ�����µ�·�ļ���¶ȣ���λ0.1�� */
    VOS_UINT16                          uhwReserve;                             /* ���� */
}UCOM_NV_XO_INIT_LOW_TEMP_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_WG_IQ_REV_CONTROL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : IQ�ӷ�����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwRxAIRevSel;                          /* Rx A I·�ӷ� */
    VOS_UINT16                          uhwRxAQRevSel;                          /* Rx A Q·�ӷ� */
    VOS_UINT16                          uhwRxBIRevSel;                          /* Rx B I·�ӷ� */
    VOS_UINT16                          uhwRxBQRevSel;                          /* Rx B Q·�ӷ� */
    VOS_UINT16                          uhwTxIRevSel;                           /* Tx I·�ӷ� */
    VOS_UINT16                          uhwTxQRevSel;                           /* Tx Q·�ӷ� */
}UCOM_NV_WG_IQ_REV_CONTROL_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_DCXO_TEMP_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����DCXO����ʽ�� 4��ϵ�����¶ȵ������Сֵ
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          auwMantissaDefault[UCOM_DCXO_POLY_COEFF_NUM];  /* ���δ��a0,a1,a2,a3��β�� */
    VOS_UINT16                          auhwExponentDefault[UCOM_DCXO_POLY_COEFF_NUM]; /* ���δ��a0,a1,a2,a3��ָ�� */
    /* �ر�˵��:shwTmax/shwTminʵ�����Ǻ��������,��ϵ��������һ�𲻺���.��Ϊ������,����DSP�ڲ�
       ֻʹ��pstAfcContext->stDcxoPara.shwSampleTempMax/shwSampleTempMin */
    VOS_INT16                           shwTmax;                                /* �����¶����ֵ */
    VOS_INT16                           shwTmin;                                /* �����¶���Сֵ */
}UCOM_NV_DCXO_TEMP_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_DCXO_AFC_VS_TEMP_VALUE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ���һ��DCXO���¶�-Ƶ��(ʵ��ΪAFC����ֵ)����
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwTemp;                                /* �¶� */
    VOS_INT16                           shwFreqPpm;                              /* �����¶��¶�Ӧ�����Ƶƫ */
}UCOM_NV_DCXO_AFC_VS_TEMP_VALUE_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_DCXO_TEMP_READ_PERIOD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DCXO��ȡ�¶ȵ�����,����IDLE̬��DCH̬
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwIdlePeriod;                          /* IDLE̬�¶�ȡ���� */
    VOS_UINT16                          uhwDchPeriod;                           /* IDLE̬�¶�ȡ���� */
}UCOM_NV_DCXO_TEMP_READ_PERIOD_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_DCXO_TEMP_COMP_THRESHOLD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DCXO����ʽϵ����������
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          auwLowMantissa[UCOM_DCXO_POLY_COEFF_NUM];
    VOS_UINT16                          auhwLowExponent[UCOM_DCXO_POLY_COEFF_NUM];
    VOS_UINT32                          auwHighMantissa[UCOM_DCXO_POLY_COEFF_NUM];
    VOS_UINT16                          auhwHighExponent[UCOM_DCXO_POLY_COEFF_NUM];
}UCOM_NV_DCXO_TEMP_COMP_THRESHOLD_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_DCXO_FREQ_VS_TEMP_ARRAY_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ���DCXO���¶�-Ƶ��(ʵ��ΪAFC����ֵ)��������
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwValidNum;                             /* ��������Ч���� */
    VOS_INT16                           shwTmax;                                /* �����¶����ֵ */
    VOS_INT16                           shwTmin;                                /* �����¶���Сֵ */
    UCOM_NV_DCXO_AFC_VS_TEMP_VALUE_STRU astAfcTempValue[UCOM_DCXO_TEMP_AFC_MAX_NUM]; /* �������� */
}UCOM_NV_DCXO_FREQ_VS_TEMP_ARRAY_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_DCXO_SAMPLE_UPDATE_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DCXO�������²�������
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwWcdmaPeriod;                          /* W DCXO����д��NV���ڣ���λ֡,Ĭ��30000 */
    VOS_UINT32                          uwGsmPeriod;                            /* G DCXO����д��NV���ڣ���λ֡,Ĭ��65000 */
    VOS_UINT16                          uhwUpdateLowThr;                        /* ��������������,Ĭ��644,��0.6ppm*2^30/10^6 */
    VOS_UINT16                          uhwUpdateHighThr;                       /* ��������������,Ĭ��2684,��2.5ppm*2^30/10^6 */
}UCOM_NV_DCXO_SAMPLE_UPDATE_PARA_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_TAS_GPIO_CTRL_WORD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwTasM2PowerCtrlWord;                   /* Tas TxBlankingʱM0˥��M2���ʵĿ����� */
}UCOM_NV_TAS_GPIO_CTRL_WORD_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_SAR_BACKOFF_TEST_MODE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��SAR����ģʽ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwSarBackoffTestModeFlg;               /* ��SAR����ģʽ */
}UCOM_NV_SAR_BACKOFF_TEST_MODE_STRU;


/*****************************************************************************
 ö����    : UCOM_NV_WG_DCOFFSET_THRESHOLD_STRU
 Э����  :
 ö��˵��  : DC offset��ֱ��У׼����
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwDciLimit;                            /* I·��ֱ������,��λmV */
    VOS_INT16                           shwDcqLimit;                            /* Q·��ֱ������,��λmV */
}UCOM_NV_WG_DCOFFSET_THRESHOLD_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_DCXO_CTRIM_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DCXO C1ֵ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwDcxoCTrim;                           /*Range:[0,255]*/
}UCOM_NV_DCXO_CTRIM_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_DCXO_C2_FIX_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DCXO C2У׼ֵ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwDcxoC2fix;                           /*Range:[0,7]*/
}UCOM_NV_DCXO_C2_FIX_STRU;
/*****************************************************************************
 �ṹ��    : UCOM_NV_TCXO_AFC_SLOPE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : UCOM_NV_TCXO_AFC_SLOPE_STRU
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwAfcSlope;                             /* TCXO AFC??,??? */
}UCOM_NV_TCXO_AFC_SLOPE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_DCXO_SEARCH_AFC_OFFSET_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ashwSearchAfc2��ashwSearchAfcDelta2���ɵڶ���������У׼����
             ashwSearchAfc3��ashwSearchAfcDelta3���ɵ�����������У׼����
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwSearchAfc2[UCOM_NV_DCXO_SEARCH_AFC_OFFSET_SAMPLE_NUM];      /* �ڶ�������AFCֵ */
    VOS_INT16                           ashwSearchAfcDelta2[UCOM_NV_DCXO_SEARCH_AFC_OFFSET_SAMPLE_NUM]; /* �ڶ�������AFCƫ��ֵ */
    VOS_INT16                           ashwSearchAfc3[UCOM_NV_DCXO_SEARCH_AFC_OFFSET_SAMPLE_NUM];      /* ����������AFCֵ */
    VOS_INT16                           ashwSearchAfcDelta3[UCOM_NV_DCXO_SEARCH_AFC_OFFSET_SAMPLE_NUM]; /* ����������AFCƫ��ֵ */
}UCOM_NV_DCXO_SEARCH_AFC_OFFSET_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_BUCK_VOLT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : BUCK��ѹֵ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwBuck1Volt;                           /* buck1��ѹֵ,��λmV */
    VOS_UINT16                          uhwBuck2Volt;                           /* buck2��ѹֵ,��λmV */
}UCOM_NV_BUCK_VOLT_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_RFIC_SSI_WAIT_TIME_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : BUCK��ѹֵ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwRficSsiWaitTime;
}UCOM_NV_RFIC_SSI_WAIT_TIME_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_LINEAR_PA_GAIN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����PA������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwNumber;
    VOS_INT16                           ashwGain[UCOM_NV_GSM_LINEAR_PA_GAIN_NUM];
}UCOM_NV_GSM_LINEAR_PA_GAIN_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_EDGE_LINEAR_PA_GAIN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����PA������
*****************************************************************************/
/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_LINEAR_PA_GAIN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����PA������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwNumber;
    VOS_INT16                           ashwGain[UCOM_NV_GSM_LINEAR_PA_GAIN_NUM];
}UCOM_NV_EDGE_LINEAR_PA_GAIN_STRU;



/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_TX_PCL_PA_GAIN_INDEX_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����PA����������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                           auhwPaGainIndex[UCOM_NV_G_PCL_NUM];     /* 32�����ʵȼ���Ӧ��PA�������� */
}UCOM_NV_GSM_TX_PCL_PA_GAIN_INDEX_STRU;



/*****************************************************************************
 �ṹ��    : UCOM_NV_EDGE_TX_PCL_PA_GAIN_INDEX_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����PA����������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                           auhwPaGainIndex[UCOM_NV_G_PCL_NUM];     /* 32�����ʵȼ���Ӧ��PA�������� */
}UCOM_NV_EDGE_TX_PCL_PA_GAIN_INDEX_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_TX_REF_CHAN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwValidChanNum;                                /* ��ЧƵ����� */
    VOS_UINT16                          auhwTxChan[UCOM_NV_G_TX_REF_CHAN_NUM_MAX];      /* �ο�Ƶ���б� */
}UCOM_NV_TX_CAL_CHAN_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RAMP_INDEX_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwRampIndex[UCOM_NV_G_PCL_NUM];
}UCOM_NV_GSM_RAMP_INDEX_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_EDGE_RAMP_INDEX_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwRampIndex[UCOM_NV_G_PCL_NUM];
}UCOM_NV_EDGE_RAMP_INDEX_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RAMP_COEFF_STRU
 Э����  :
 �ṹ˵��  : GSM/EDGE���������±�NV�����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwRampUp[UCOM_NV_G_RAMP_COEF_NUM];    /* ���±� */
    VOS_UINT16                          auhwRampDown[UCOM_NV_G_RAMP_COEF_NUM];  /* ���±� */
}UCOM_NV_GSM_RAMP_COEFF_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RAMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GSM����ϵ���ṹ
*****************************************************************************/
typedef struct
{
    UCOM_NV_GSM_RAMP_COEFF_STRU         astRampCoeff[UCOM_NV_G_RAMP_PWR_LEVEL_NUM];     /* [������10dBm,20dBm����Ϊ3������] */
}UCOM_NV_GSM_RAMP_STRU;



/*****************************************************************************
 �ṹ��    : UCOM_NV_EDGE_RAMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : EDGE����ϵ���ṹ
*****************************************************************************/
typedef struct
{
    UCOM_NV_GSM_RAMP_COEFF_STRU         astRampCoeff[UCOM_NV_G_RAMP_PWR_LEVEL_NUM];     /* [������10dBm,20dBm����Ϊ3������] */
}UCOM_NV_EDGE_RAMP_STRU;



/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_PA_TABLE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    /* ע���ѹ�ͷ��书�ʵĶ�Ӧ��ϵ */
    VOS_UINT16                          auhwTxPower[UCOM_NV_G_TX_PWR_CONT_NUM];         /* ��ҪУ���ķ��书�� */
    VOS_UINT16                          auhwContVolt[UCOM_NV_G_TX_PWR_CONT_NUM];        /* ��ҪУ���ķ��书�ʶ�Ӧ�Ŀ��Ƶ�ѹ */
}UCOM_NV_GSM_PA_TABLE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_PA_TABLE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/

/* ����RF��8PSKͬ��ʹ�õ�ѹ�ֿ��� */
typedef struct
{
    VOS_UINT16                          auhwContVolt[UCOM_NV_G_TX_8PSK_PWR_CONT_NUM];   /* ��ҪУ���ķ��书�ʶ�Ӧ�Ŀ��Ƶ�ѹ */
    VOS_UINT16                          auhwTxPower[UCOM_NV_G_TX_8PSK_PWR_CONT_NUM];    /* ��ҪУ���ķ��书�� */
}UCOM_NV_EDGE_PA_TABLE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_PA_TABLE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/

typedef struct
{
    VOS_UINT16                          uhwGsmMaxTxVolt;
    VOS_UINT16                          uhwGsmMaxTxPower;
}UCOM_NV_GSM_MAX_TX_VOLT_POWER;


/*****************************************************************************
 �ṹ��    : UCOM_NV_G_TIMING_CTRL_CTRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwTimingCtrl;
}UCOM_NV_G_TIMING_CTRL_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_G_RAMP_POINTS_CTRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ���µ����ṹ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwRampPoints;                          /* ���µ��� */
}UCOM_NV_G_RAMP_POINTS_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_G_PREMOD_SYMBOL_CTRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : Ԥ���Ʒ��Žṹ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwPreModSymbol;                        /* Ԥ���Ʒ��� */
}UCOM_NV_G_PREMOD_SYMBOL_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_G_TX_BURST_OFFSET_CTRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : burset offset�ṹ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwTxBurstOffset;                       /* GSM burst offset */
}UCOM_NV_G_TX_BURST_OFFSET_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_G_TX_PA_LENGTH_CTRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : PA��������ѹ�ĳ��Ƚṹ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwTxPaLength;                          /* PA��������ѹ�ĳ��ȣ���λΪQb */
}UCOM_NV_G_TX_PA_LENGTH_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_G_PA_PRECHG_VOLT_CTRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : PA��������ѹ�ĳ��Ƚṹ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwPaPrechgVolt;                        /*Range:[0,1023]*//* У׼���Ԥ���ѹ */
}UCOM_NV_G_PA_PRECHG_VOLT_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_G_PA_FACTORY_PRECHARGE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwInit;
    VOS_INT16                           shwDelta;
}UCOM_NV_G_PA_FACTORY_PRECHARGE_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_RX_IP2_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :I��Qͨ��ֱ����ΪNV����ͨ�õ�I��Qͨ��ƫ��
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwIReg;                                /* I·�Ĵ���ȡֵ��ƴ�ӷ�ʽ = SN[0]+DATA[6:0] */
    VOS_INT16                           shwQReg;                                /* Q·�Ĵ���ȡֵ��ƴ�ӷ�ʽ = SN[0]+DATA[6:0] */
}UCOM_NV_RX_IP2_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RX_IP2_CAL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :5.2 ÿ��BAND�ڸ��е�Ƶ���£���I��Q·�ĵ�·��������
*****************************************************************************/
typedef struct
{
    UCOM_NV_RX_IP2_STRU                 astRxIp2Cal[3];
}UCOM_NV_GSM_RX_IP2_CAL_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RX_AGC_FREQ_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :5.4 ��AGC������ͳһ��Ƶ������Ƶ�㲻ͬ�����������仯
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwRxAgcFreqComp[UCOM_NV_G_RX_CHAN_COMP_NUM];  /*Rang:[-64,64]*//* һ��Ƶ����16��Ƶ�� */
}UCOM_NV_GSM_RX_AGC_FREQ_COMP_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_EDGE_TX_APC_RF_ATTEN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :6.1 RFоƬ�Ի����źŵ�˥������������RFоƬ�Ĵ���
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwEdgeTxApcRfAtten[UCOM_NV_G_TX_ATTEN_NUM];
}UCOM_NV_EDGE_TX_APC_RF_ATTEN_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_EDGE_TX_APC_DBB_ATTEN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :6.1 DBBоƬ�Ի����źŵĲ�����
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwEdgeTxApcDbbAtten[UCOM_NV_G_TX_ATTEN_NUM];
}UCOM_NV_EDGE_TX_APC_DBB_ATTEN_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_PA_VBIAS_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :6.3 �ڲ�ͬ���ʵȼ��£���ΪPA�����ѹ(����ƫ�õ�ѹ)�����½�������͵�ѹ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwPaVbias[UCOM_NV_G_PCL_NUM];     /* 32��DA�任ǰ��ֵ */
}UCOM_NV_GSM_PA_VBIAS_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_EDGE_PA_VBIAS_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :6.3 �ڲ�ͬ���ʵȼ��£���ΪPA�����ѹ(����ƫ�õ�ѹ)�����½�������͵�ѹ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwPaVbias[UCOM_NV_G_PCL_NUM];     /* 32��DA�任ǰ��ֵ */
}UCOM_NV_EDGE_PA_VBIAS_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_PA_VBIAS_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :6.3 �ڲ�ͬ���ʵȼ��£���ΪPA�����ѹ(����ƫ�õ�ѹ)�½���������PA����仯�Ĵ�С��
*****************************************************************************/
typedef struct
{
    VOS_INT16                           auhwPaVccVbiasComp[UCOM_NV_G_PCL_NUM];  /* 32�����ʲ���ֵ */
}UCOM_NV_GSM_PA_VCC_VBIAS_COMP_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_EDGE_PA_VBIAS_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :6.3 �ڲ�ͬ���ʵȼ��£���ΪPA�����ѹ(����ƫ�õ�ѹ)�½���������PA����仯�Ĵ�С��
*****************************************************************************/
typedef struct
{
    VOS_INT16                           auhwPaVccVbiasComp[UCOM_NV_G_PCL_NUM];  /* 32�����ʲ���ֵ */
}UCOM_NV_EDGE_PA_VCC_VBIAS_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_TX_TEMP_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GMSK(����PA) TX������¶ȱ仯�Ĳ���
*****************************************************************************/
typedef struct
{
    /* �¶ȷ�Χ��ȡֵȡ����UCOM_NV_WG_TX_TEMP_DEFINE_STRU */
    VOS_INT16                           ashwGsmTxTempComp[UCOM_NV_G_TEMP_LEVEL_NUM];   /*Range:[-100,100]*/
}UCOM_NV_GSM_TX_TEMP_COMP_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_EDGE_TX_TEMP_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :7.7 8PSK TX������¶ȱ仯�Ĳ���
*****************************************************************************/
typedef struct
{
    /* �¶ȷ�Χ��ȡֵȡ����UCOM_NV_WG_TX_TEMP_DEFINE_STRU */
    VOS_INT16                           ashwEdgeTxTempComp[UCOM_NV_G_TEMP_LEVEL_NUM];   /*Range:[-100,100]*/
}UCOM_NV_EDGE_TX_TEMP_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RX_CAL_CHAN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :��ҪУ׼��GSM��Ƶ�����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwValidCalChanNum;                     /*Range:[0,16]*/
    VOS_UINT16                          auhwGsmRxCalChan[UCOM_NV_G_RX_CHAN_COMP_NUM];
}UCOM_NV_GSM_RX_CAL_CHAN_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RX_AGC_GAIN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :5.3 AGCÿ��״̬������ֵ���ܹ��ֳ�8��
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwRxAgcGain[UCOM_NV_G_CHAN_GAIN_MAX_NUM];
}UCOM_NV_GSM_RX_AGC_GAIN_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_ EDGE_TX_TEMP_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��ʾÿ����RF Gain��Ӧ���¶Ȳ���ֵ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwTempComp10th[UCOM_NV_EDGE_TX_TEMP_COMP_NUM];      /* ��ʾĳһ��RF Gain��16�������¶��µ��¶Ȳ���ֵ����λΪ0.1dB */
}UCOM_NV_EDGE_TEMP_COMP_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_EDGE_TX_RF_GAIN_TEMP_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��ʾ15��RF Gain��Ӧ���¶Ȳ���ֵ
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwValidCount;
    UCOM_NV_EDGE_TEMP_COMP_STRU         astTempComp[UCOM_NV_EDGE_TX_RF_GAIN_CTRL_NUM];      /* ��ʾ15��RF Gain��16�������¶��µ��¶Ȳ���ֵ */
}UCOM_NV_EDGE_RF_GAIN_TEMP_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_PA_VCC_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : �ڲ�ͬ���ʵȼ��£�GSM��Ӧ��VCC��ѹ������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwGsmPaVcc[UCOM_NV_G_PCL_NUM];        /* 32��DA�任ǰ��ֵ */
}UCOM_NV_GSM_PA_VCC_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_EDGE_PA_VCC_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : �ڲ�ͬ���ʵȼ��£�EDGE��Ӧ��VCC��ѹ������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwEdgePaVcc[UCOM_NV_G_PCL_NUM];       /* 32��DA�任ǰ��ֵ */
}UCOM_NV_EDGE_PA_VCC_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_CLOSE_PA_VCC_CONTROL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : close vcc control
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwClosePaVccMipiCmdFrame;              /* �ر�PaVcc��mipiָ��֡ */
    VOS_UINT16                          uhwClosePaVccMipiDataFrame;             /* �ر�PaVcc��Mipi����֡ */
}UCOM_NV_GSM_CLOSE_PA_VCC_CONTROL_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_DEV_AVOID_GSM_SLOT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GPS����GSMʱ϶
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwPowerThreshold;                      /* �������ޣ����ڸ�����ʱ��������ģʽ����λΪ0.1dbm */
    VOS_UINT16                          uhwBandMask;                            /* ���ڱ��õ�Ƶ�����룬BIT0/1/2/3��Ӧ850/900/1800/1900M */
    VOS_UINT32                          uwIoMask;                               /* ���ڱ��õĹܽ� */
}UCOM_NV_DEV_AVOID_GSM_SLOT_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_REDUCE_CURRENT_MIPI_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��������(MIPI)
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwReduceCurrentEn;                     /* ��������ʹ�� */
    VOS_UINT16                          uhwCurrentLimitAddr;                    /* ����������Ӧ��PMU��ַ */
    VOS_UINT16                          uhwDefaultCurrentValue;                 /* ȱʡʱ�ĵ���ֵ(��һ��ʱ϶) */
    VOS_UINT16                          uhwLimitCurrentValue;                   /* ����ʱ������ֵ(�ǵ�һ��ʱ϶) */
}UCOM_NV_GSM_REDUCE_CURRENT_MIPI_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_REDUCE_CURRENT_GPIO_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��������(GPIO)
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwReduceCurrentEn;                     /* ��������ʹ�� */
    VOS_UINT32                          uwIoMask;                               /* ��������ʹ�õĹܽ� */
}UCOM_NV_GSM_REDUCE_CURRENT_GPIO_STRU;



/*****************************************************************************
 �ṹ��    : UCOM_GSM_TX_APC_CAL_TEMP
 Э����  :
 ASN.1���� :
 �ṹ˵��  : Gsm��APCУ׼�¶�
*****************************************************************************/
typedef struct
{
    VOS_INT16                               shwGsmTxApcCalTemp;                 /*Range:[-300,1350]*/
}UCOM_GSM_TX_APC_CAL_TEMP_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_EDGE_TX_APC_CAL_TEMP
 Э����  :
 ASN.1���� :
 �ṹ˵��  : Edge��APCУ׼�¶�
*****************************************************************************/
typedef struct
{
    VOS_INT16                               shwEdgeTxApcCalTemp;                /*Range:[-300,1350]*/
}UCOM_EDGE_TX_APC_CAL_TEMP_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_START_BYPASS_THRESHOLD
 Э����  :
 ASN.1���� :
 �ṹ˵��  : Gģ��Bypass����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwGsmStartBypassThreshold;
}UCOM_NV_GSM_START_BYPASS_THRESHOLD_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_TX_POWER
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��ҪУ���ķ��书��
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwGsmTxPower[UCOM_NV_G_TX_PWR_CONT_NUM];  /*Range:[-400,400]*//* ��ҪУ���ķ��书�� */
}UCOM_NV_GSM_TX_POWER_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_TX_POWER
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��ҪУ���ķ��书�ʶ�Ӧ�Ŀ��Ƶ�ѹ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwGsmContVolt[UCOM_NV_G_TX_PWR_CONT_NUM]; /*Range:[0,1023]*//* ��ҪУ���ķ��书�ʶ�Ӧ�Ŀ��Ƶ�ѹ */
}UCOM_NV_GSM_CONT_VOLT_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_TX_POWER
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��ͬƵ��ķ��书�ʵĲ���ֵ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwGsmTxFreqComp[UCOM_NV_G_TX_CHAN_COMP_NUM];  /*Range:[-100,100]*//* [Ƶ��][��ͬƵ��ķ��书�ʵĲ���ֵ] ����λ0.1dBm*/
}UCOM_NV_GSM_TX_FREQ_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_EDGE_TX_FREQ_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : EdgeУ׼���书�ʵĲ���ֵ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwGsmTxFreqComp[UCOM_NV_G_TX_CHAN_COMP_NUM];  /*Range:[-100,100]*//* [Ƶ��][��ͬƵ��ķ��书�ʵĲ���ֵ] ����λ0.1dBm*/
}UCOM_NV_EDGE_TX_FREQ_COMP_STRU;



/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_LINEAR_PA_TX_APC_DBB_ATTEN
 Э����  :
 ASN.1���� :
 �ṹ˵��  : gsm linear pa apc dbb atten
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwGsmLinearPaTxApcDbbAtten[UCOM_NV_G_TX_ATTEN_NUM];   /*Range:[-40,10]*//* gsm linear pa apc dbb atten */
}UCOM_NV_GSM_LINEAR_PA_TX_APC_DBB_ATTEN_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_TX_RF_ATTEN
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RF˥��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwGsmTxRfAtten;   /* RF˥�� */
}UCOM_NV_GSM_TX_RF_ATTEN_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_TX_POWER_LEVEL
 Э����  :
 ASN.1���� :
 �ṹ˵��  : 4Ƶ�ι��ʵȼ���dBm��ӳ���
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwGsmTxPowerLevel[UCOM_NV_G_PCL_NUM]; /* 4Ƶ�ι��ʵȼ���dBm��ӳ��� */
}UCOM_NV_GSM_TX_POWER_LEVEL_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_MAX_POWER_REDUCTION
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GSM����书�ʻ���
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwGsmMaxPowerReduction[UCOM_NV_G_TX_SLOT_MAX_NUM];
}UCOM_NV_GSM_MAX_POWER_REDUCTION_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_WIRELESS_MAX_POWER
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GSM��������书��
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwGsmWirelessMaxPower[UCOM_NV_G_TX_SLOT_MAX_NUM]; /* ���� *//* 4Ƶ��GMSK�տڷ���ʱ�Ĺ���˥�� */
}UCOM_NV_GSM_WIRELESS_MAX_POWER_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_SAR_BACK_OFF_POWER
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GSM�¸�ʱ϶SAR����ֵ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwGsmSarBackoffPower[UCOM_NV_SAR_BACKOF_NUM];
}UCOM_NV_GSM_SAR_BACK_OFF_POWER_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_EDGE_TX_PA_GAIN
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��ͳPA������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwEdgeTxPaGain;                        /* ��ͳPA������ */
}UCOM_NV_EDGE_TX_PA_GAIN_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_LINEAR_PA_APC_RF_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GMSK(����PA)��APC RF������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwGsmLinearPaApcRfCtrl[UCOM_NV_G_TX_ATTEN_NUM];    /* apc rf ctrl */
}UCOM_NV_GSM_LINEAR_PA_APC_RF_CTRL_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_EDGE_TX_APC_RF_CTRL
 Э����  :
 ASN.1���� :
 �ṹ˵��  : EDGE��APC RF������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwEdgeTxApcRfCtrl[UCOM_NV_G_TX_ATTEN_NUM];    /* apc rf ctrl */
}UCOM_NV_EDGE_TX_APC_RF_CTRL_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_LINEAR_PA_RF_GAIN_STATE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GMSK(����PA)��APC DBB˥��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwGsmLinearPaRfGainStateIndex[UCOM_NV_G_TX_ATTEN_NUM]; /* rf gain ���� */
}UCOM_NV_GSM_LINEAR_PA_RF_GAIN_STATE_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_LINEAR_PA_NONLINEAR_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GMSK(����PA)��APC DBB˥��
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwComp[UCOM_NV_G_PCL_NUM];
}UCOM_NV_GSM_LINEAR_PA_NONLINEAR_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_EDGE_LINEAR_PA_NONLINEAR_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : EDGE(����PA)��APC DBB˥��
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwComp[UCOM_NV_G_PCL_NUM];
}UCOM_NV_EDGE_LINEAR_PA_NONLINEAR_COMP_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_EDGE_TX_RF_GAIN_STATE_INDEX
 Э����  :
 ASN.1���� :
 �ṹ˵��  : EDGE��APC DBB˥��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwEdgeTxRfGainStateIndex[UCOM_NV_G_TX_ATTEN_NUM]; /* rf gain ���� */
}UCOM_NV_EDGE_TX_RF_GAIN_STATE_INDEX_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_G_RSSI_ARITHMETIC_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : Gģͨ���̶�����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwRssiArithmeticPara;
}UCOM_NV_G_RSSI_ARITHMETIC_PARA_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_G_RX_PLL_ADVANCE_TIMING_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : rx pll��ǰ��ʱ��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwRxPllAdvanceTiming;
}UCOM_NV_G_RX_PLL_ADVANCE_TIMING_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_AFC_FE_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/

typedef struct
{
    VOS_UINT16                          uhwAfcFeDelayFn;                        /* FE�ӳ�֡�� */
    VOS_UINT16                          uhwAfcFePowerDis;                       /*  */
    VOS_UINT16                          uhwAfcFeDchFcut0;                       /*  */
    VOS_UINT16                          uhwAfcFeDchFcut1;                       /*  */
}UCOM_NV_GSM_AFC_FE_PARA_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_G_ADJ_CHAN_INTERFERE_EN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��Ƶ����ʹ�ܱ�־
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwAdjChanInterfereEn;                  /* ��Ƶ����ʹ�� */
}UCOM_NV_G_ADJ_CHAN_INTERFERE_EN_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_G_LS_DCR_EN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ls dcrʹ�ܱ�־
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwLsDcrEn;                             /* ls dcrʹ�� */
}UCOM_NV_G_LS_DCR_EN_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_SRB_STUB_FOR_GCF_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ������Ƶ�������⣬GCF����ʱ�������SRB���ؽ��д�׮
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwGsmSrbStubForGcfEn;                   /* ������Ƶ�������⣬GCF����ʱ�������SRB���ؽ��д�׮ */
}UCOM_NV_GSM_SRB_STUB_FOR_GCF_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_G_LINEAR_PA_ENABLE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : LinearPAʹ�ܱ�־
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwLinearPaEnable;                      /* linear Paʹ�� */
}UCOM_NV_G_LINEAR_PA_ENABLE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_LINEAR_PA_GAIN_WORD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����PA�����������
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          auwWord[UCOM_NV_GSM_LINEAR_PA_GAIN_NUM];
}UCOM_NV_GSM_LINEAR_PA_GAIN_WORD_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_G_APT_ENABLE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : LinearPAʹ�ܱ�־
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwGsmAptEnable;                        /* 2G APTʹ�ܱ�־ */
}UCOM_NV_G_APT_ENABLE_STRU;



/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_SPUR_ACPR_OPT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GSM SPUR ACPR�Ż�
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwGsmSpurAcprOpt;                      /* 2G GSM SPUR �Ż� */
}UCOM_NV_GSM_SPUR_ACPR_OPT_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_G_BY_PASS_GPIO_MASK_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : Bypass��ͨʱ����GPIO�ڵ�bitλ
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwBypassGpioMask;                       /* Bypass��ͨʱ����GPIO�ڵ�bitλ */
}UCOM_NV_G_BY_PASS_GPIO_MASK_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_G_PA_VCC_MIPI_CMD_FRAME_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��PaVcc��mipiָ��֡
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwOpenPaVccMipiCmdFrame;               /* ��PaVcc��mipiָ��֡ */
}UCOM_NV_G_PA_VCC_MIPI_CMD_FRAME_STRU;



/*****************************************************************************
 ö����    : UCOM_NV_GSM_RX_AGC_CTRL_STRU
 Э����  :
 ö��˵��  : 5.3G����AGC���������
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          aunRxAgcCtrl[UCOM_NV_G_AGC_LEVEL_MAX_NUM];
}UCOM_NV_GSM_RX_AGC_CTRL_STRU;


/*****************************************************************************
 ö����    : UCOM_NV_GSM_AGC_SWITCH_THRESHOLD_STRU
 Э����  :
 ö��˵��  : AGC�����л�����
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwIncDelay;                                /* �л����� */
    VOS_INT16                           ashwDec[UCOM_NV_G_GAIN_THRESHOLD_MAX_NUM];  /* �л����� */
}UCOM_NV_GSM_AGC_SWITCH_THRESHOLD_STRU;


/*****************************************************************************
 ö����    : UCOM_NV_GSM_AGC_FASTMEAS_THRESHOLD_STRU
 Э����  :
 ö��˵��  : ���ٲ���AGC�����л�����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwInitAgc;                                 /* ���ٲ�����ʼ��λ */
    VOS_INT16                           ashwDec[UCOM_NV_G_GAIN_THRESHOLD_MAX_NUM];  /* �л����� */
}UCOM_NV_GSM_AGC_FASTMEAS_THRESHOLD_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_ACPR_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwTempThreshold;                       /* �¶����ޣ���λΪ�� */
    VOS_INT16                           shwPowerComp;                           /* ���ʲ�������λΪ0.1dbm */
}UCOM_NV_GSM_ACPR_CONFIG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_EDGE_RF_TX_BIAS_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwBiasHighTemp;                       /* �¶����ޣ���λΪ�� */
    VOS_INT16                           shwBiasRoomTemp;                           /* ���ʲ�������λΪ0.1dbm */
}UCOM_NV_EDGE_RF_TX_BIAS_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RX_DCR_CHAN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :DCR ��ҪУ׼��GSM��Ƶ�����
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uhwValidDcrChanNum;
    VOS_UINT16                          auhwGsmRxCalChan[ UCOM_G_RX_GAIN0_DCR_CHAN_NUM ];
}UCOM_NV_GSM_RX_DCR_CHAN_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RX_DC_OFFSET_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GSM DC Offsetֵ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwInitDcoci;                           /* ��ʼֵ,RFIC����ֵΪ0x80��Ӧ��I·DCֵ */
    VOS_INT16                           shwInitDcocq;                           /* ��ʼֵ,RFIC����ֵΪ0x80��Ӧ��Q·DCֵ */
    VOS_INT16                           shwRfDci;                               /* У׼��,RFIC I·DC����ֵ */
    VOS_INT16                           shwRfDcq;                               /* У׼��,RFIC Q·DC����ֵ */
    VOS_INT16                           shwRemainDcoci;                         /* У׼��,I·����DCֵ */
    VOS_INT16                           shwRemainDcocq;                         /* У׼��,Q·����DCֵ */
}UCOM_NV_GSM_DC_OFFSET_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RX_DC_OFFSET_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GSM DC Offsetֵ
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwValidCount;
    UCOM_NV_GSM_DC_OFFSET_STRU          astGain0DcOffset[ UCOM_G_RX_GAIN0_DCR_CHAN_NUM ];
}UCOM_NV_GSM_RX_DC_OFFSET_GAIN0_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RX_DC_OFFSET_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GSM DC Offsetֵ
*****************************************************************************/
typedef struct
{
    UCOM_NV_GSM_DC_OFFSET_STRU           astGain0[UCOM_G_RX_GAIN0_DCR_CHAN_NUM ];             /* ��ƵGain0��λ��DCRУ׼��� */
    UCOM_NV_GSM_DC_OFFSET_STRU           astOtherGain[UCOM_G_RX_OTHER_GAIN_DCR_CHAN_NUM];  /*��Ƶ������λDCRУ׼���:UCOM_NV_G_AGC_LEVEL_MAX_NUM -1 */
    UCOM_NV_GSM_DC_OFFSET_STRU           astCrossBandGain0[UCOM_G_RX_GAIN0_DCR_CHAN_NUM];     /* ��ƵGain0��λ��DCRУ׼��� */
    UCOM_NV_GSM_DC_OFFSET_STRU           astCrossBandOtherGain[UCOM_G_RX_OTHER_GAIN_DCR_CHAN_NUM]; /*��Ƶ������λDCRУ׼���:UCOM_NV_G_AGC_LEVEL_MAX_NUM -1 */
}UCOM_NV_GSM_RX_DC_OFFSET_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RF_GPIO_MASK_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RF ���ƽṹ
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwGsmAntMask;                           /* ��ֵ��ʾW��BAND����Gģ��BAND��ʶ */
    VOS_UINT32                          uwPaEnMask;                             /* RF���ڵ�ͨ�� */
    VOS_UINT32                          uwPaBandMask;                           /* ����1�Ŀ���ֵ */
    VOS_UINT32                          uwPaModeMask;                           /* ����2�Ŀ���ֵ */
}UCOM_NV_GSM_RF_GPIO_MASK_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_DSDA_POWER_LIMIT_STRU
 �ṹ˵��  : ˫�����书������NV�ṹ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                      uhwPowerLmtEnable;                          /* ���ƹ��ʿ��� */
    VOS_UINT16                      auhwPowerLmtLow[UCOM_NV_G_HIGH_LOW_BUTT];   /* ���ƹ�����Сֵ����λ0.1dBm */
    VOS_UINT16                      auhwPowerLmtHigh[UCOM_NV_G_HIGH_LOW_BUTT];  /* ���ƹ�����ֵ̬����λ0.1dBm */
    VOS_UINT16                      auhwPowerLmtMax[UCOM_NV_G_HIGH_LOW_BUTT];   /* ���ƹ������ֵ����λ0.1dBm */
}UCOM_NV_GSM_DSDA_POWER_LIMIT_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RAMP_DAC_REV_STRU
 �ṹ˵��  : ˫�����书������NV�ṹ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                      uhwGsmRampDacRev;                           /* gsm����dac�Ƿ񽻲�,0:������,1:���� */
}UCOM_NV_GSM_RAMP_DAC_REV_STRU;


/*****************************************************************************
 ö����    : UCOM_NV_G_ANT_TUNER_CODE_STRU
 Э����  :
 ö��˵��  : ���ߵ�гGģĬ��ֵ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwTxCode;                          /* ���ߵ�гTxĬ��ֵ */
    VOS_UINT16                              uhwReserve1;
    VOS_UINT16                              uhwRxCode;                          /* ���ߵ�гRxĬ��ֵ */
    VOS_UINT16                              uhwReserve2;
}UCOM_NV_G_ANT_TUNER_DEFULT_CODE_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_WG_ANT_SWITCH_MIPI_USID_CHANGE_STRU
 �ṹ˵��  : ���ڵ����ּ����߿���USID��ͬʱ���޸����߿���USID��MIPIָ��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwValidNum;                        /* ָ����Ч���� */
    VOS_UINT16                              uhwReserve;
    VOS_UINT16                              uhwCmdFrame[9];                     /* mipi�������� */
    VOS_UINT16                              uhwDataFrame[9];                    /* mipi�������� */
} UCOM_NV_WG_ANT_SWITCH_MIPI_USID_CHANGE_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_MIPI_WR_FORMAT_STRU
 �ṹ˵��  : MIPI�Ŀ��ƽṹ��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwCmdFrame;                        /* mipi�������� */
    VOS_UINT16                              uhwDataFrame;                       /* mipi����ֵ */
}UCOM_NV_MIPI_WR_FORMAT_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_TUNER_MIPI_IDLE_REG_STRU
 Э����  :
 �ṹ˵��  : WG����,����tunerΪIDLE̬��͹���̬�Ŀ�����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwValidNum;
    VOS_UINT16                              auhwCmdFrame[UCOM_NV_TUNER_MIPI_IDLE_CMD_MAX_NUM];
    VOS_UINT16                              auhwDataFrame[UCOM_NV_TUNER_MIPI_IDLE_CMD_MAX_NUM];
}UCOM_NV_TUNER_MIPI_IDLE_REG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_TUNER_MIPI_COMM_INIT_REG_STRU
 Э����  :
 �ṹ˵��  : WG����,tuner�Ĺ�����ʼ�������֣�����һЩ�Ĵ���ֻ��Ҫģʽ��������һ��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwValidNum;
    VOS_UINT16                              auhwCmdFrame[UCOM_NV_TUNER_MIPI_COMM_INIT_REG_NUM];
    VOS_UINT16                              auhwDataFrame[UCOM_NV_TUNER_MIPI_COMM_INIT_REG_NUM];
}UCOM_NV_TUNER_MIPI_COMM_INIT_REG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_WG_ANT_TUNER_CTRL_INFO_STRU
 �ṹ˵��  : ���ߵ�г�Ŀ��ƽṹ��,MIPI��tuner,���Ǽ��ݶ����ͺţ��ṩ���6��������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwAntTunerCtrl;                    /* Ӳ���Ƿ�֧�����ߵ�г��0��֧�֣�1֧�� */
    VOS_UINT16                              uhwAntTunerCtrlMode;                /* ���ߵ�г��ͨ��MIPI���ƻ���GPIO,0��ʾGPIO,1��ʾMIPI */
    UCOM_NV_TUNER_MIPI_COMM_INIT_REG_STRU   stTunerCommReg;                     /* tuner�Ĺ�����ʼ�������֣�����һЩ�Ĵ���ֻ��Ҫģʽ��������һ�� */
    UCOM_NV_TUNER_MIPI_IDLE_REG_STRU        stTunerIdleReg;                     /* ����tunerΪIDLE̬��͹���̬�Ŀ����� */
} UCOM_NV_WG_ANT_TUNER_CTRL_INFO_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RF_DIV_BAND_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : �Ƿ�֧�ַּ�
*****************************************************************************/
typedef struct
{
    VOS_UINT32          uwWBand;
    VOS_UINT32          uwWbandExtRsv;
}UCOM_NV_W_RF_DIV_BAND_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_RF_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RF ���ƽṹ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwBand;                                /* ��ֵ��ʾW��BAND����Gģ��BAND��ʶ */
    VOS_UINT16                          uhwRfChannel;                           /* RF���ڵ�ͨ�� */
    VOS_UINT32                          uwAntSwitch;                        /* ����1�Ŀ���ֵ */
    VOS_UINT32                          uwOtherSwitch;                          /* �������߿���ֵ */
    VOS_UINT32                          uwPaControlWord;                        /* WģPAʹ�� */
}UCOM_NV_RF_CONFIG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_BAND_RF_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :2.1��ʾ֧�ֵ�3G��2GƵ�Ρ�3G�ּ�֧�������ÿ��Ƶ����RF
            ͨ����Ӧ��ϵ���߿����л�ѡ��DBB��3GPA�Ŀ���
*****************************************************************************/
typedef struct
{
    UCOM_NV_RF_CONFIG_STRU              stRxMainRfBandCofig;                    /* ������2G��3G������Ƶ�� */

    UCOM_NV_RF_CONFIG_STRU              stRxDvtyRfBandCofig;                    /* ������2G��3G������Ƶ�� */

    UCOM_NV_RF_CONFIG_STRU              stTxRfBandCofig;                        /* ������2G��3G������Ƶ�� */
}UCOM_NV_W_BAND_RF_CONFIG_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_WG_RF_BAND_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :2.1��ʾ֧�ֵ�3G��2GƵ�Ρ�3G�ּ�֧�������ÿ��Ƶ����RF
            ͨ����Ӧ��ϵ���߿����л�ѡ��DBB��3GPA�Ŀ���
*****************************************************************************/
typedef struct
{
    UCOM_NV_RF_CONFIG_STRU              astGsmRxRfBandConfig[UCOM_NV_G_BAND_NUMBER];        /* ������2G RX ����Ƶ�� */

    UCOM_NV_RF_CONFIG_STRU              astGsmTxRfBandConfig[UCOM_NV_G_BAND_NUMBER];        /* ������2G TX Ƶ�� */

    UCOM_NV_W_BAND_RF_CONFIG_STRU       astWcdmaRfBandConfig[UCOM_NV_W_TOTAL_BAND_NUM];     /* ������3G Ƶ�� */
}UCOM_NV_WG_RF_BAND_CONFIG_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_RF_INIT_INFO_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RF��ʼ�����
*****************************************************************************/
typedef struct
{
    VOS_UINT16          uhwRfAddr;
    VOS_UINT16          uhwRfAddrValue;
}UCOM_NV_RF_INIT_INFO_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_RF_INIT_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RF��ʼ�����
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              uwRfCount;
    UCOM_NV_RF_INIT_INFO_STRU               stConfigInfo[UCOM_NV_RFABB_INIT_REG_NUM];
}UCOM_NV_RF_INIT_CONFIG_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_ABB_INIT_INFO_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RF��ʼ�����
*****************************************************************************/
typedef struct
{
    VOS_UINT16          uhwAbbAddr;
    VOS_UINT16          uhwAbbValue;
}UCOM_NV_ABB_INIT_INFO_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_ABB_INIT_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ABB��ʼ�����
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              uwABBCount;
    UCOM_NV_ABB_INIT_INFO_STRU              stABBConfigInfo[UCOM_NV_RFABB_INIT_REG_NUM];
}UCOM_NV_ABB_INIT_CONFIG_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_PHY_SW_CFG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ���ǰ�˲����Ե�NV�������ʱ���������
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          stDrxTSysclk;
    VOS_UINT16                          uhwWcdmaIp2DataWidth;       /* W IP2��λ��,0:12bit,1:14bit */
    VOS_UINT16                          uhwReservedWord;            /* ���������Ժ�������չ */
    VOS_UINT32                          uwReservedWords[6];         /* ���������Ժ�������չ */
} UCOM_NV_PHY_SW_CFG_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_WG_MMMB_PA_SEL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : MIPI����NV��,PA����ģʽ
*****************************************************************************/
typedef struct
{
    VOS_UINT32          uwWBand;
    VOS_UINT32          uwWbandExtRsv;
    VOS_UINT32          uwGeBand;
}UCOM_NV_WG_MMMB_PA_SEL_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_ANT_SWITCH_CONTROL_MODE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : MIPI����NV��,���߿���ģʽ
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwWcdmaBandMainAnt;                    /* [0]-BAND1;[1]-BAND2;�Դ����� */
    VOS_UINT32                          uwWcdmaBandDvtyAnt;                    /* [0]-BAND1;[1]-BAND2;�Դ����� */
    VOS_UINT32                          uwWbandExtRsv;                        /* [0]-GSM450;[1]-GSM480;... */
    VOS_UINT32                          uwWbandExtRsv2;                        /* [0]-GSM450;[1]-GSM480;... */
    VOS_UINT32                          uwGsmBandRxAnt;                        /* [0]-GSM450;[1]-GSM480;... */
    VOS_UINT32                          uwGsmBandTxAnt;                        /* [0]-GSM450;[1]-GSM480;... */
}UCOM_NV_ANT_SWITCH_CONTROL_MODE_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_WG_DRX_RESUME_TIME_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : WG DRX ˯�߻���ABB��RF�������ȶ�������ָ�ʱ��
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwAbbPwrRsmTime;                        /* ABB AD/DA���ֲ��ֵ�Դ�ȶ�ʱ��,��λus */
    VOS_UINT32                          uwRfPwrRsmTime;                         /* RF ģ�����Դ�ȶ�ʱ��,��λus */
    VOS_UINT32                          uwAntSwitchPwrRsmTime;                  /* ���߿��ص�Դ�ȶ�ʱ��,��λus */
    VOS_UINT32                          uwAbbWpllRsmTime;                       /* ABB WPLL�ȶ�ʱ��,��λus */
    VOS_UINT32                          uwAbbGpllRsmTime;                       /* ABB GPLL�ȶ�ʱ�� ,��λus*/
    VOS_UINT32                          uwBbpPllRsmTime;                        /* SOC BBP PLL�ȶ�ʱ��,��λus */
    VOS_UINT32                          uwPaStarRsmTime;                            /* �����ֶ� */
    VOS_UINT32                          uwSysProtectTime;                       /* ϵͳ�ָ�����ʱ�� */

    VOS_UINT32                          uwTcxoRsmTime;                          /* TCXO�ȶ�ʱ��,��λus */
    VOS_UINT32                          uwDcxoRsmTime;                          /* DCXO�ȶ�ʱ��,��λus */
    VOS_UINT32                          uwSlowToMcpuRsmTime;                    /* ��SLOW��MCPU�ϵ�ָ�ʱ��,��λus */
    VOS_UINT32                          uwWphyRsmTime;                          /* W����㻽�ѻָ�ʱ��,��λus */
    VOS_UINT32                          uwGphyRsmTime;                          /* G����㻽�ѻָ�ʱ��,��λus */
    VOS_UINT32                          uwTaskSwitchTime;                       /* ����ϵͳ�����л�ʱ��,��λus */
    VOS_UINT32                          uwPaPwrRsmTime;                         /* PA��Դ�ȶ�ʱ��,��λus */
}UCOM_NV_WG_DRX_RESUME_TIME_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_SUPPORT_RATMODE_MASK_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : modem֧�ֵ�����ģʽ��Ϣ
             bit0:�Ƿ�֧��GSM;
             bit1:�Ƿ�֧��WCDMA;
             bit2:�Ƿ�֧��LTE;
             bit3:�Ƿ�֧��TDS;
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwSupportRatMask;                      /* Modem֧�ֵ�����mode��Ϣ */
}UCOM_NV_SUPPORT_RATMODE_MASK_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_PA_DEFAULT_VOLT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : PAĬ�ϵ�ѹֵ,��ѹ��λ:1mV
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwWcdmaPaVolt;                         /* WCDMA PAĬ�ϵ�ѹ */
    VOS_UINT16                          uhwGsmPaVolt;                           /* GSM PAĬ�ϵ�ѹ */
}UCOM_NV_PA_DEFAULT_VOLT_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_WG_ABB_PLL_STABLE_TIME_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : PLL�ȶ�ʱ��,�ȶ�ʱ�䵥λ:1us
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwWcdmaPllStableTime;                  /* WCDMA PLL�ȶ�ʱ�� */
    VOS_UINT16                          uhwGsmPllStableTime;                    /* GSM PLL�ȶ�ʱ�� */
}UCOM_NV_WG_ABB_PLL_STABLE_TIME_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_RCM_PARA_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RCM����NV��
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              uwTimingCalThld;                    /* ʱ��У׼���� */
    VOS_UINT16                              uhwReserved1;
    VOS_UINT16                              uhwReserved2;
    VOS_UINT16                              uhwReserved3;
    VOS_UINT16                              uhwReserved4;
    VOS_UINT16                              uhwReserved5;
}UCOM_NV_RCM_PARA_CONFIG_STRU;

/*****************************************************************************
�ṹ��    : UCOM_NV_RCM_RF_SHARE_CFG_STRU
�ṹ˵��  : UCOM_NV_RCM_RF_SHARE_CFG_STRU��Ӧ��NV�ṹ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usSupportFlag;      /*Range:[0,1]*//* �����Ƿ�֧�ֱ�� */
    VOS_UINT16                          usGSMRFID;          /* GSM����ģʽRFID��Ϣ */
    VOS_UINT16                          usWCDMARFID;        /* WCDMA����ģʽRFID��Ϣ */
    VOS_UINT16                          usTDSRFID;          /* TD-SCDMA����ģʽRFID��Ϣ */
    VOS_UINT16                          usLTERFID;          /* LTE����ģʽRFID��Ϣ */
    VOS_UINT16                          usCDMARFID;         /* CMDA����ģʽRFID��Ϣ */
    VOS_UINT16                          usEVDORFID;         /* CDMA EVDO����ģʽRFID��Ϣ */
    VOS_UINT16                          usReserved;
} UCOM_NV_RCM_RF_SHARE_CFG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_TAS_FUNC_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RCM����NV��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwTasFuncEnable;                       /* TAS�����Ƿ���Ч */
}UCOM_NV_TAS_FUNC_CTRL_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_RCM_TAS_TABLE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RCM����NV��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                  uhwTasChoiceData[UCOM_NV_RCM_TAS_TABLE_NUM];    /* TAS�л������ */
    VOS_UINT32                  uwTasScoreData[UCOM_NV_RCM_TAS_TABLE_NUM];      /* TAS״̬�Ʒֱ� */
}UCOM_NV_RCM_TAS_TABLE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_WG_MIPI_PA_OFF_WORD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : MIPI PA OFF������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwValidNumber;
    UCOM_NV_MIPI_WR_FORMAT_STRU         stMipiCtrlWord[UCOM_NV_MAX_MMMBPA_CMD_NUMBER];
}UCOM_NV_WG_MIPI_PA_OFF_WORD_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_WG_MIPI_PA_INIT_WORD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : MIPI PA ON������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwValidNumber;
    UCOM_NV_MIPI_WR_FORMAT_STRU         stMipiCtrlWord[UCOM_NV_MAX_MMMBPA_CMD_NUMBER];
}UCOM_NV_WG_MIPI_PA_INIT_WORD_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GUPHY_FUNC_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : v7r1c50 �͹��Ŀ��ƽṹ16λ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                  CsOnlyAntCtrl           :1;                     /* CS ONLY�طּ����� */
    VOS_UINT16                  ScAbbCtrl               :1;                     /* SC ABB���� */
    VOS_UINT16                  AbbCtrl                 :1;                     /* CS ONLY abb���� */
    VOS_UINT16                  RficRegCtrl             :1;                     /* CS ONLY RF���Ĵ������� */
    VOS_UINT16                  RficVolCtrl             :1;                     /* CS ONLY RF����ѹ���� */
    VOS_UINT16                  GudspPowerDownCtrl      :1;                     /* GU ��ģ�µ���� */
    VOS_UINT16                  SimpleSlotIntCtrl       :1;                     /* W ����ʱ϶���� */
    VOS_UINT16                  LoopRfLowpowerCtrl      :1;                     /* ��������RF�͹��Ŀ��� 1���� 0������Ĭ�ϲ����� */

    VOS_UINT16                  LoopRxAnt2Ctrl          :1;                     /* ��������rx��̬�ּ����� 1���� 0������Ĭ�ϲ����� */
    VOS_UINT16                  PsR99RxAnt2Ctrl         :1;                     /* ps r99 rx�طּ����� DCM����*/
    VOS_UINT16                  PsRxAnt2Ctrl            :1;                     /* ps R99��DPA rx�طּ�����Ϊ1�൱�ڶ�̬�ּ���ش���ȫ���ر� */
    VOS_UINT16                  PsVoltLPCtrl            :1;                     /* PS ��ѹ�͹������Դ������λ, 1�� 0���򿪣�Ĭ�ϴ� */
    VOS_UINT16                  PsCsAntCtrl             :1;                     /* PS CS�����¹طּ����� */
    VOS_UINT16                  reserved                :1;
    VOS_UINT16                  DpaOpenIpc              :1;                     /* dpaҵ����E5776��860��Ʒ��̬��IPC�жϿ��ؿ��ƣ�Ĭ�ϲ��� */
    VOS_UINT16                  GphyCsInterferennceCtrl :1;                     /* GSM CSͬƵ���ŵ��������ܷ�������:1-��ʾ�򿪸ù���,�����ʾ�ر� */
}UCOM_NV_GUPHY_FUNC_CTRL_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_LP_RFIC_FUNC_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : v7r1c50 �͹���RFIC���ƽṹ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          stRegThd;
    VOS_UINT16                          stRegOpt;
    VOS_UINT16                          stRegDefault;
    VOS_UINT16                          uhwReserved;
}UCOM_NV_LP_RFIC_FUNC_CTRL_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_WG_TEMPPROTECT_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwTempTypeId;                          /* 0-13 */
    VOS_UINT16                          uhwCloseAnt2Flag;                       /* �±��Ƿ񿪹طּ� */
    VOS_INT16                           shwCloseAnt2TempThresh;                 /* ���¹رշּ����� */
    VOS_INT16                           shwOpenAnt2TempThresh;                  /* ���´򿪷ּ����� */
    VOS_UINT16                          uhwMaxPowLimitFlag;                     /* �±��Ƿ���������书�� */
    VOS_INT16                           shwMaxPowLimitAlarmThresh;              /* �±���������书��,�������� */
    VOS_INT16                           shwMaxPowLimitResumeThresh;             /* �±���������书��,�ָ����� */
    VOS_INT16                           shwWMaxPowLimitValue;                   /* �±�����W����书�� */
    VOS_INT16                           shwGMaxPowLimitValue;                   /* �±�����G����书�� */
}UCOM_NV_WG_TEMPPROTECT_CTRL_STRU;

/* xiongjiangjiang Edn */

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RF_RX_BIAS_DELTA_GAIN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RF RX DELTA GAIN
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwTxChanDelay;
}UCOM_NV_W_RF_TX_CHAN_DELAY_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_ANT_PERFORM_TEST_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwAntPerformanceTest;
}UCOM_NV_W_ANT_PERFORM_TEST_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_CQI_ANT2_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/

typedef struct
{
    VOS_UINT16                          uhwCQICtrlFlag;
    VOS_UINT16                          uhwCQIThresh1;                          /* CQI������ */
    VOS_UINT16                          uhwCQIThresh2;                          /* CQI������ */
    VOS_UINT16                          uhwCQITime1;                            /* CQI���ڸ����޹طּ��ӳ�ʱ�� */
    VOS_UINT16                          uhwCQITime2;                            /* CQI���ڵ����޿��ּ��ӳ�ʱ�� */
}UCOM_NV_W_CQI_ANT2_CTRL_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_UL_RF_GATE0_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              uwUlRfGate0;
}UCOM_NV_W_UL_RF_GATE0_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_UL_RF_GATE1_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              uwUlRfGate1;
}UCOM_NV_W_UL_RF_GATE1_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_PA_INIT_DELAY_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwPaInitDelay;
}UCOM_NV_W_PA_INIT_DELAY_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_PA_OFF_DELAY_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwPaOffDelay;
}UCOM_NV_W_PA_OFF_DELAY_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_INIT_DELAY_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwTxInitDelay;
}UCOM_NV_W_TX_INIT_DELAY_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_OFF_DELAY_STRUS
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwTxOffDelay;
}UCOM_NV_W_TX_OFF_DELAY_STRUS;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_IDLE_ONE_DELAY_STRUS
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwTxIdleOnDelay;
}UCOM_NV_W_TX_IDLE_ONE_DELAY_STRUS;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_IDLE_OFF_DELAY_STRUS
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwTxIdleOffDelay;
}UCOM_NV_W_TX_IDLE_OFF_DELAY_STRUS;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_ABB_INIT_DELAY_STRUS
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwTxAbbInitDelay;
}UCOM_NV_W_TX_ABB_INIT_DELAY_STRUS;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_ABB_OFF_DELAY_STRUS
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwTxAbbOffDelay;
}UCOM_NV_W_TX_ABB_OFF_DELAY_STRUS;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_GAIN_CTRL_TIMING_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          shwTxGainOpenTime;                      /* ��ǰ������RF�����chip�� */
}UCOM_NV_W_TX_GAIN_CTRL_TIMING_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_DRX_CS_PERIOD_MEAS_CLASS_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : Ӱ��С���������ڵĲ����ȼ�����
*****************************************************************************/

typedef struct
{
    VOS_UINT16                          uhwClass1Factor;                        /* ������������������������ */
    VOS_UINT16                          uhwClass2Factor;                        /* �����������׼����ֻ�б�Ƶ����Ƶ */
    VOS_UINT16                          uhwClass3Factor;                        /* ֻ����С������ */
    VOS_UINT16                          uhwRsv;
}UCOM_NV_W_DRX_CS_PERIOD_MEAS_CLASS_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_DRX_MEAS_CORR_LENTH_MEAS_CALSS_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : Ӱ�������س��ȵĲ����ȼ�����
*****************************************************************************/

typedef struct
{
    VOS_UINT16                          uhwClass1Factor;                        /* ������������������������ */
    VOS_UINT16                          uhwClass2Factor;                        /* �����������׼����ֻ�б�Ƶ����Ƶ */
    VOS_UINT16                          uhwClass3Factor;                        /* ֻ����С������ */
    VOS_UINT16                          uhwRsv;
}UCOM_NV_W_DRX_MEAS_CORR_LENTH_MEAS_CALSS_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_DRX_STRONG_CELL_CTRL_INFO_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ǿ����������Ϣ
*****************************************************************************/

typedef struct
{
    VOS_UINT16                          uhwIntraStrongCellNum;                  /* ��Ƶǿ�������� */
    VOS_UINT16                          uhwIntraMeasReserveCellNum;             /* ÿ�α�Ƶ����������ǿС������ */
    VOS_UINT16                          uhwInterStrongCellNum;                  /* ��Ƶǿ�������� */
    VOS_UINT16                          uhwInterMeasReserveCellNum;             /* ÿ����Ƶ����������ǿС������ */
}UCOM_NV_W_DRX_STRONG_CELL_CTRL_INFO_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_DRX_CTRL_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/

typedef struct
{
    VOS_UINT16                          uhwDrxMaxCsPeriodLenth;                 /* DRX̬������С���������� */
    VOS_UINT16                          uhwDrxMinMeasCorrLenth;                 /* DRX̬����С�Ĳ�����س��� */
    VOS_UINT16                          uhwDrxMaxMeasCorrLenth;                 /* DRX̬�����Ĳ�����س��� */
    VOS_UINT16                          uhwDrxMaxCsStep1Lenth;                  /* DRX̬������С������step1���� */
    VOS_UINT16                          uhwDrxMinCsStep1Lenth;                  /* DRX̬����С��С������step1���� */
    VOS_UINT16                          uhwRsv;
    UCOM_NV_W_DRX_CS_PERIOD_MEAS_CLASS_STRU         stDrxCsPeriodMeasClass;         /* Ӱ��С���������ڵĲ����ȼ����� */
    UCOM_NV_W_DRX_MEAS_CORR_LENTH_MEAS_CALSS_STRU   stDrxMeasCorrLenthMeasClass;    /* Ӱ�������س��ȵĲ����ȼ����� */
    UCOM_NV_W_DRX_STRONG_CELL_CTRL_INFO_STRU        stDrxStrongCellCtrlInfo;        /* ǿ����������Ϣ */
}UCOM_NV_W_DRX_CTRL_PARA_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_CQI_CORRECT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwCqiCorrectEnable;                     /* CQI��̬����ʹ�ܿ���,0 �رգ�1 �� */
    VOS_UINT32                          uwSblerHighThreshold;                   /* SBLER �߿�������,��λ0.01 */
    VOS_UINT32                          uwSblerLowThreshold;                    /* SBLER �Ϳ�������,��λ0.01 */
    VOS_UINT32                          uwScheduleRateThreshold;                /* �����ʿ�������,��λ0.01 */
}UCOM_NV_W_CQI_CORRECT_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_PSCH_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/

typedef struct
{
    VOS_UINT16                          uhwPschLen;                             /* PSCH��������ɳ��� */
    VOS_UINT16                          uhwPschThd;                             /* PSCH�������������� */
}UCOM_NV_W_PSCH_PARA_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TOTOLPC_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwOpenTotolpcFlg;                  /* �Ƿ�����Tot Olpc�㷨��־��Ĭ��ֵ1 */
    VOS_UINT16                              uhwOutageProbability;               /* Totolpc�㷨�еĲ�����Ĭ��ֵ15*/
    VOS_UINT16                              uhwSirErrorStep;                    /* Totolpc�㷨�еĲ�����Ĭ��ֵ1*/
    VOS_UINT16                              uhwCorrectionFactor;                /* Totolpc�㷨�еĲ�����Ĭ��ֵ10*/
    VOS_UINT16                              uhwSirOutageOffset;                 /* Totolpc�㷨�еĲ�����Ĭ��ֵ0*/
    VOS_INT16                               shwOutageIncrementThresUp;          /*TOT OLPC�㷨�еĲ���OutageIncrementThresholdUp��Ĭ��ֵ26*/
    VOS_INT16                               shwOutageIncrementThresDown;        /*TOT OLPC�㷨�еĲ���OutageIncrementThresholdDown��Ĭ��ֵ-19*/
    VOS_INT16                               shwOutagetargetStepUp;              /*TOT OLPC�㷨�еĲ���OutagetargetStepUp��Ĭ��ֵ10*/
    VOS_INT16                               shwOutagetargetStepDown;            /*TOT OLPC�㷨�еĲ���OutagetargetStepDown��Ĭ��ֵ-10*/
    VOS_INT16                               shwReserve;                             /*����λ��Ĭ��ֵ0*/
} UCOM_NV_W_TOTOLPC_STRU;

/*****************************************************************************
 ö����    : UCOM_NV_W_CPC_DRX_STRU
 Э����  :
 ö��˵��  :CPC DRX��Ŀʹ�õ�NV�ṹ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwRfWorkMode;                          /* RF����͹���״̬ʱ������Idle̬���ǽ���StandBy̬*/
    VOS_UINT16                          uhwCpcDrxCtrlFlag;                      /* ����CPC DRX��ع��ܿ��صı�־*/
}UCOM_NV_W_CPC_DRX_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_IP2_CAL_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :IP2У׼����,�����ּ�����ͬһ���ṹ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwIp2TxRefPower;                  /* У׼ʱ����ͨ���Ĺ��ʣ���λΪ0.1dbm */
    VOS_INT16                           shwReserved;                       /* �ݲ�ʹ�ã����� */
}UCOM_NV_W_RX_IP2_CAL_PARA_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_IQ_MISMATCH_CAL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :TX IQ MISMATCHУ׼��ʼ���ʺ�����
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwTxIqMismatch2RefPower;           /* У׼ʱ����ͨ���Ĺ��ʣ���λΪ0.1dbm */
    VOS_INT16                           shwAmpCorrThreshold;                /* У׼��IMD2�����ޣ���λdb */
    VOS_INT16                           shwDcCorrThreshold;                 /* У׼��IMD2�����ޣ���λdb */
}UCOM_NV_W_TX_IQ_MISMATCH_CAL_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RSSI_ARITHMETIC_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwRssiArithmeticPara;
}UCOM_NV_W_RSSI_ARITHMETIC_PARA_STRU;



/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_PA_APT_ENABLE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwWBand;                      /* bitλ��1����֧��APT */
    VOS_UINT32                          uwWBandExtRsv;                /* bitλ��1����֧��APT */
}UCOM_NV_W_TX_PA_APT_ENABLE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_EEIC_EN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwEEICEn;
}UCOM_NV_W_EEIC_EN_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_IPS_FLG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwIpsFlg;
}UCOM_NV_W_IPS_FLG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_SPUR_REMOVE_ALG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : г�������㷨
*****************************************************************************/
typedef struct
{
    UCOM_NV_WCDMA_SPUR_TYPE_ENUM_UINT16 enSpurType;                             /* г�������� */
    VOS_UINT16                          uhwMainRemoveEnable;                    /* ����ʹ�� */
    VOS_UINT16                          uhwDivRemoveEnable;                     /* �ּ�ʹ�� */
    VOS_INT16                           shwRssiThreshold;                       /* ����г�������㷨��rssi���� */
    VOS_UINT16                          uhwFilterCoeff;                         /* �˲����� */
}UCOM_NV_W_RX_SPUR_REMOVE_ALG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RF_M_VALUE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              auhwRfMValue[2];                    /* 0: usRfScMDaValue 1:usRfDcMDaValue */
}UCOM_NV_W_RF_M_VALUE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_LOWPOWER_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : W�͹����������������Լ�����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwAllocToUseExtraMpUnit;       /* ����ʹ��10~19��Ԫ,��Χ [0,1] ,�Ƽ� 0 */
    VOS_UINT16                          uhwAllocToUseExtraMpUnitInCPC;  /* CPC ����ʹ��10~15��Ԫ,��Χ [0,1],�Ƽ� 1 */
    VOS_UINT16                          uhwIntraFMSRUsing5msPerFrEn;    /* ��Ƶ5ms����, ��Χ [0,1]���Ƽ� 1 */

    /* �ر� EEIC */
    VOS_UINT16                          uhwThrptUppLmtPerCrNMThd;       /* ��Χ0~2000,����1(100Kbps),�Ƽ� 130 */
    VOS_UINT16                          uhwThrptUppLmtPerCrNonMimoEn;   /* ��Χ[0,1],�Ƽ� 1 */

    /* �رշּ� */
    VOS_UINT16                          uhwCorrCoefAccFrm;              /* �Ƚ�ͳ��֡������λ10֡����Χ0~1024,�Ƽ� 10 */
    VOS_UINT32                          uwCorrCoefShutDownThd;          /* �ر����ޣ�Ϊԭֵƽ����Ŵ�10000��,��Χ0~1000000,Ĭ�� 400, */
    VOS_UINT16                          uhwAntRssiShutDownThd;          /* �ر����ޣ���λ1dBm����Χ0~100���Ƽ�20 �Ƽ� 10 */
    VOS_UINT16                          uhwCorrCoefCalEn;               /* ��Χ[0,1],�Ƽ� 1 */
    VOS_UINT16                          uhwAntRssiCmprEn;               /* ��Χ[0,1],�Ƽ� 1 */
    VOS_UINT16                          uhwAntRssiCmprAccFrm;           /* ��Χ0~1024, �Ƽ� 10 */
    VOS_UINT16                          uhwCorrCoefReCalDelayFrm;       /* ��Χ0~1024, �Ƽ� 10 */
    VOS_UINT16                          uhwAntRssiReOpenDelayFrm;       /* ��Χ0~1024, �Ƽ� 10 */

    /* Wd��̬�ŵ���ʱ϶���� */
    VOS_UINT16                          uhwWdCalPerSlotEn;              /* ��Χ [0,1],    �Ƽ� 1 */
    VOS_UINT16                          uhwWdCalPerSlotThd;             /* ��Χ0~511,   �Ƽ� 251 */

}UCOM_NV_W_LOWPOWER_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_PA_ENABLE_SELECT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : w pa en 4��ѡ��
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwLineSel[UCOM_NV_WCDMA_PA_EN_LINE_NUM];
}UCOM_NV_W_PA_ENABLE_SELECT_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_HSUPA_MAX_POWER_TEST_MODE_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : HSUPA����书�ʲ���ģʽ����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwEnableFlag;
    VOS_UINT16                          auhwMinSetEtfci[UCOM_NV_HSUPA_ETFCI_TABLE_MAX_NUM];
}UCOM_NV_W_HSUPA_MAX_POWER_TEST_MODE_CTRL_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_HDET_TIMING_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ���ʼ����ʹ�õ�NV��ṹ
*****************************************************************************/
typedef struct
{
    VOS_INT16                              shwPaStableTiming;                   /* ���书�ʱ仯��RF��PA���ȶ�ʱ�䣬��λΪchip*/
    VOS_INT16                              shwPdHkadcChanSelTiming;             /*��Ȩ��Ч������HKADCͨ��������ʱ�̼������λΪchip*/
    VOS_INT16                              shwPdStartInterval;                  /* ABB��bypassΪ�͵�����start��ABB��ʼת������ʱ��������λΪchip*/
    VOS_INT16                              shwPdInterval;                       /* ���ι��ʼ��֮���ʱ��������λΪchip*/
    VOS_INT16                              shwPdsampleTiming;                   /* HKADC�����źŴ���ʱ�䣬��λΪchip*/
    VOS_INT16                              shwDcOffsetSampleNum;                /*WHKADC����ÿ��ʱ϶����dc offset���Ĵ���*/
    VOS_INT16                              shwPdSampleNum;                      /*W����ÿ��ʱ϶����PD���Ĵ���*/
} UCOM_NV_W_HDET_TIMING_CONFIG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_TEMP_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��ʾÿ��RF Gain��Ӧ���¶Ȳ���ֵ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwTempComp[UCOM_NV_W_TX_TEMP_COMP_NUM];       /* ��ʾĳһ��RF Gain��16�������¶��µ��¶Ȳ���ֵ����λΪ0.1dB */
}UCOM_NV_W_TX_TEMP_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_RF_GAIN_TEMP_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��ʾ15��RF Gain��Ӧ���¶Ȳ���ֵ
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwValidCount;                                   /* ��Ч�ĵ�λ�� */
    UCOM_NV_W_TX_TEMP_COMP_STRU         astTempComp[UCOM_NV_W_TX_RF_GAIN_CTRL_NUM];     /* ��ʾ15��RF Gain��16�������¶��µ��¶Ȳ���ֵ */
}UCOM_NV_W_TX_RF_GAIN_TEMP_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_VOICE_APC_SIG_ENABLE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwVoiceApcSigEnable;               /* ��ʾ������ģʽ���Ƿ񼤻�Voiceģʽ��APC�� */
}UCOM_NV_W_VOICE_APC_SIG_ENABLE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_VOICE_APC_CAL_ENABLE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwVoiceApcCalEnable;               /* ��ʾ��У׼ģʽ���Ƿ�У׼Voiceģʽ��APC�� */
}UCOM_NV_W_VOICE_APC_CAL_ENABLE_STRU;

/*****************************************************************************
 ö����    : UCOM_NV_W_RX_AGC_GAIN_VALID_COUNT_STRU
 Э����  :
 ö��˵��  : AGC��λ������NV�����BLOCK�ͷ�BLOCK
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwAgcGainNoBlockNum;                   /* ��Blockģʽ��AGC������ */
    VOS_UINT16                          uhwAgcGainBlockNum;                     /* Blockģʽ��AGC������ */
}UCOM_NV_W_RX_AGC_GAIN_VALID_COUNT_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_RF_GAIN_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : rf gain ctrl ��λ��
*****************************************************************************/
typedef struct
{
    VOS_UINT32          uwValidCount;
    VOS_UINT16          auhwRfGainCtrl[UCOM_W_MAX_RF_GAIN_CTRL_NUM];
}UCOM_NV_W_TX_RF_GAIN_CTRL_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_RF_BIAS_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : rf BIAS ��λ��
*****************************************************************************/
typedef struct
{
    VOS_UINT32          uwValidCount;
    VOS_UINT16          auhwRfBias[UCOM_W_MAX_RF_BIAS_NUM];
}UCOM_NV_W_TX_RF_BIAS_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_BB_GAIN_VS_ATTEN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : BBÿ����λ��Ӧ��˥��ֵ
*****************************************************************************/
typedef struct
{
    VOS_UINT16          uhwBbGainCtrl;
    VOS_INT16           shwBbAtten10th;
}UCOM_NV_W_BB_GAIN_VS_ATTEN_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_BB_GAIN_TABLE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : BB�ĵ�λ��
*****************************************************************************/
typedef struct
{
    VOS_UINT32                             uwValidCount;
    UCOM_NV_W_BB_GAIN_VS_ATTEN_STRU        astBbGain[UCOM_W_MAX_RF_BB_GAIN_NUM];
}UCOM_NV_W_BB_GAIN_TABLE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_ECIOR_CTRL_STRU
 �ṹ˵��  : ec/ior�Ŀ��ƽṹ��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwCqiLoadSwitchThreshold;          /* CQI�л����ޣ�Ĭ������Ϊ15;*/
    VOS_UINT16                          uhwLoadRateThreshold1;              /* ����������1��Ĭ������Ϊ6;*/
    VOS_UINT16                          uhwLoadRateThreshold2;              /* ����������2��Ĭ������Ϊ10; */
} UCOM_NV_W_ECIOR_CTRL_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_ANT_TUNER_CTRL_WORD_STRU
 �ṹ˵��  : פ�����ǰ���������
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              uwForWardWord;                      /* פ�����ǰ������ */
    VOS_UINT32                              uwReverseWord;                      /* פ����ⷴ������ */
} UCOM_NV_ANT_TUNER_CTRL_WORD_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_ANT_TUNER_CTRL_PARA_STRU
 �ṹ˵��  : ���ߵ�г�Ŀ��ƽṹ��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwCodeSearchStep;                  /* ��гʱ������������ */
    VOS_UINT16                              uhwBypassMaxCode;                   /* Bypassʱ��������֣���RF1108Ϊ0x40 */
    VOS_UINT16                              uhwBypassMinCode;                   /* Bypassʱ����С���֣���RF1108Ϊ0x5F */
    VOS_UINT16                              uhwUpperCode;                       /* ���ߵ�г�������ޣ���RF1108Ϊ0 */
    VOS_UINT16                              uhwLowerCode;                       /* ���ߵ�г�������ޣ���RF1108Ϊ31 */
    VOS_UINT16                              auhwReserve[3];                     /* ��ȷ�����ָ�ʽ�ʹ�С���ȱ��� */
} UCOM_NV_W_ANT_TUNER_CODE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_ANT_TUNER_CTRL_PARA_STRU
 �ṹ˵��  : ���ߵ�г�Ŀ��ƽṹ��
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              uwBandSupport;                      /* ��ӦbitΪ1��ʾ���band֧�ֶ�̬���ߵ�г,����֧�� */
    VOS_UINT32                              uwBandExten;                        /* �Ժ�band ID���ܳ���32 */
    VOS_UINT16                              uhwActiveTime;                      /* ���ߵ�г������ǰ֡ͷ�������������д򿪺�WBBPÿ����֡ͷ��ǰcpu_tx_sw_active_time�������ã���λΪchip */
    VOS_UINT16                              uhwSampleTime;                      /* ���ߵ�гƽ��������,Ĭ������Ϊ4 */
    VOS_UINT16                              uhwDelayFrame;                      /* ���һ�ֵ�г��ĵȴ�ʱ�䣬��λ֡ */
    VOS_UINT16                              uhwEchoLossThreshold;               /* ���ߵ�г�ز��������,����0.1dBm */
    UCOM_NV_ANT_TUNER_CTRL_WORD_STRU        stCtrlWord;                         /* פ�����ǰ��������� */
    UCOM_NV_W_ANT_TUNER_CODE_STRU           stAntTunerCode;                     /* ���ߵ�г������Ϣ */
} UCOM_NV_W_ANT_TUNER_CTRL_PARA_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RF_VCO_REG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RF VCO REG
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwRegAddress;
    VOS_UINT16                          uhwRegValue;
}UCOM_NV_W_RF_VCO_REG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RF_VCO_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RF VCO CONFIG
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwValidCounter;
    UCOM_NV_W_RF_VCO_REG_STRU           astRegConfig[UCOM_NV_MAX_RF_VCO_CONFIG_NUM];
}UCOM_NV_W_RF_VCO_CONFIG_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_RF_TX_BIAS_REG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RF TX BIAS
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwRegAddress;
    VOS_UINT16                          uhwRegValue;
}UCOM_NV_W_RF_TX_BIAS_REG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RF_TX_BIAS_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RF TX BIAS
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwValidCounter;
    UCOM_NV_W_RF_TX_BIAS_REG_STRU       astBias[UCOM_NV_W_TX_RF_BIAS_NUM];
}UCOM_NV_W_RF_TX_BIAS_CONFIG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_RFIC_BIAS_CFG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RF TX BIAS
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwRfRxBiasAddress;                                     /* TX BIAS��ַ */
}UCOM_NV_W_RX_RFIC_BIAS_CFG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RF_RX_BIAS_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RF RX BIAS
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwNoBlockStateBias[UCOM_NV_W_AGC_GAIN_NOBLK_STEP_NUM]; /* no block bias��NV�� */
}UCOM_NV_W_RF_RX_BIAS_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RF_RX_BIAS_DELTA_GAIN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RF RX DELTA GAIN
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwNoBlockStateDeltaGain[UCOM_NV_W_ANT_NUM][UCOM_NV_W_AGC_GAIN_NOBLK_STEP_NUM]; /* no block delta gain��NV�� */
}UCOM_NV_W_RF_RX_BIAS_DELTA_GAIN_STRU;

/*****************************************************************************
 ö����    : UCOM_NV_W_RX_AGC_SWITCH_VOICE_MODE_STRU
 Э����  :
 ö��˵��  : VOICEģʽ�µ�AGC��λ�л����޵�NV�ֻ������BLOCK״̬��
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwNoBlockAgcThresholdInc[UCOM_NV_W_AGC_GAIN_NOBLK_THRESHOLD_NUM];           /* NoBlock��ʽ�µ�λ���� */
    VOS_INT16                           ashwNoBlockAgcThresholdDec[UCOM_NV_W_AGC_GAIN_NOBLK_THRESHOLD_NUM];           /* NoBlock��ʽ�µ�λ���� */
}UCOM_NV_W_RX_AGC_SWITCH_VOICE_MODE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_WG_MMMBPA_CMD_ADDRESS_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : mmmb pa �Ĵ�����ַ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwValidNumber;
    VOS_UINT16                          auhwCmdAddress[UCOM_NV_MAX_MMMBPA_CMD_NUMBER];
}UCOM_NV_WG_MMMBPA_CMD_ADDRESS_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_WG_MIPI_ANT_CMD_ADDRESS_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : mipi ant �Ĵ�����ַ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwValidNumber;
    VOS_UINT16                          auhwCmdAddress[UCOM_NV_MAX_MIPI_ANT_CMD_NUMBER];
}UCOM_NV_WG_MIPI_ANT_CMD_ADDRESS_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_HDET_HKADC_CHAN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwSeperatePaHdetChannel;           /* ����PA HDETͨ�� */
    VOS_UINT16                          uhwReserved;               /*��δʹ�ã����� */
}UCOM_NV_W_HDET_HKADC_CHAN_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_DPA_IQ_REDUCTION_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DPA���ֻ���
*****************************************************************************/

typedef struct
{
    VOS_INT16                           ashwDpaIqReduction[UCOM_NV_W_TX_DPA_IQ_REDUCTION_NUM];
}UCOM_NV_W_TX_DPA_IQ_REDUCTION_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_SCUPA_IQ_REDUCTION_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : SC-UPA���ֻ���
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwScUpaIqReduction[UCOM_NV_W_TX_SCUPA_IQ_REDUCTION_NUM];
}UCOM_NV_W_TX_SCUPA_IQ_REDUCTION_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_DPA_MPR_STRU_HI6361
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DPA���ʻ���
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwDpaMpr[UCOM_NV_W_TX_DPA_MPR_NUM];
}UCOM_NV_W_TX_DPA_MPR_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_SCUPA_MPR_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DPA���ʻ���
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwScUpaMpr[UCOM_NV_W_TX_SCUPA_MPR_NUM];
}UCOM_NV_W_TX_SCUPA_MPR_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_DCUPA_MPR_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DPA���ʻ���
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwDcUpaMpr[UCOM_NV_W_TX_DCUPA_MPR_NUM];
}UCOM_NV_W_TX_DCUPA_MPR_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_HKADC_SSI_WAIT_TIME_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwHkadcSsiWaitTime;
}UCOM_NV_W_HKADC_SSI_WAIT_TIME_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_DRX_LTE_EVALUATE_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : LTE�����������޲����ṹ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwLteEvaluateServCellReportCorr;       /* Lte����������ʱ����С�������ϱ�����ϵ��Ĭ��6����Χ0��30 */
    VOS_INT16                           shwLteEvaluateServCellRscpThres;        /* Lte���������о��ķ���С��RSCP����ֵ���ޣ���λ0.125db��Ĭ��-640����Χ-1040��-320 */
    VOS_UINT16                          uhwLteEvaluateServCellDeltaThres;       /* Lte���������о��ķ���С��rscp�仯ֵ���ޣ���λ0.125db��Ĭ��160����Χ0��480 */
}UCOM_NV_W_DRX_LTE_EVALUATE_PARA_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_VOLT_LOWPOWER_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��ѹ�͹��Ŀ���NV
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwLowVoltDeltaPower;                   /* ��ѹ����书�ʲ�ֵ����,Ĭ��2dBm,,��Χ0~24dBm */
    VOS_UINT16                          uhwDataFrameThreshold;                  /* ��������֡��������,Ĭ��50,��λ10msOr2ms */
    VOS_UINT16                          uhwNoDataFrameThreshold;                /* ����������֡��������,Ĭ��80,��λ10ms */
    VOS_INT16                           shwLowRssiThreshold;                    /* ��ѹRSSI����,Ĭ��-95dBm */
    VOS_INT16                           shwHighRssiThreshold;                   /* ��ѹRSSI����,Ĭ��-85dBm */
    VOS_UINT16                          uhwTxPowerCntThreshold;                 /* ��ѹ���书��ͳ�Ƹ�������,Ĭ��8,��λ10ms */
    VOS_UINT16                          uhwHsupaRemainPowerCntThreshold;        /* ��ѹHSUPAʣ�๦�ʲ���ͳ�Ƹ�������,Ĭ��8,��λ10ms */
    VOS_UINT16                          uhwR99RemainPowerCntThreshold;          /* ��ѹR99ʣ�๦�ʲ���ͳ�Ƹ�������,Ĭ��8,��λ10ms */
    VOS_UINT16                          uhwForceConfigLowPowerThreshold;        /* ǿ�ƽ�ѹ��ʱ����,Ĭ��100,��λ10ms */
}UCOM_NV_VOLT_LOWPOWER_CTRL_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_ANT2_OFF_EVA_THRESH_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����2�رյ��������޲����ṹ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwTimeRxNoDataDpa;                     /* 80��160��320��640��1000��λms��Ĭ��160ms */
    VOS_UINT16                          uhwTimeRxNoDataR99Turbo;                /* 80��160��320��640��1000��λms��Ĭ��160ms */
    VOS_UINT16                          uhwTimeRxNoDataR99Vtb;                  /* 80��160��320��640��1000��λms��Ĭ��160ms */
}UCOM_NV_W_ANT2_OFF_EVA_THRESH_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_RX_CAL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :��ҪУ׼��WCDMA��Ƶ�����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwValidCalChanNum;
    VOS_UINT16                          auhwRxCalChan[UCOM_WCDMA_UARFCN_NUM];        /* _H2ASN_Replace PHY_UINT16_ARRAY2_16 auhwRxCalChan[UCOM_WCDMA_BAND_NUM][UCOM_NV_W_UARFCN_NUM]; */ /* RXƵ�����䣬3��Ƶ�Σ�ÿ��Ƶ��16��UARFCN */
}UCOM_NV_WCDMA_RX_CAL_CHAN_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_IP2_CAL_CHAN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :3.3��Ҫ����IP2У׼��Ƶ��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwHighFreq;
    VOS_UINT16                          uhwMidFreq;
    VOS_UINT16                          uhwLowFreq;
}UCOM_NV_W_RX_IP2_CAL_CHAN_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_IP2_CAL_AT1_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :����RXͨ��ÿ��BAND�ڸ��е�Ƶ��ּ��رպʹ���������£���I��Q·�ĵ�·��������
*****************************************************************************/
typedef struct
{
    UCOM_NV_RX_IP2_STRU                 stRxIp2OffsetHDivyOn;                   /* ��Ƶ��ּ����� */
    UCOM_NV_RX_IP2_STRU                 stRxIp2OffsetHDivyOff;                  /* ��Ƶ��ּ��ر� */
    UCOM_NV_RX_IP2_STRU                 stRxIp2OffsetMDivyOn;                   /* ��Ƶ��ּ����� */
    UCOM_NV_RX_IP2_STRU                 stRxIp2OffsetMDivyOff;                  /* ��Ƶ��ּ��ر� */
    UCOM_NV_RX_IP2_STRU                 stRxIp2OffsetLDivyOn;                   /* ��Ƶ��ּ����� */
    UCOM_NV_RX_IP2_STRU                 stRxIp2OffsetLDivyOff;                  /* ��Ƶ��ּ��ر� */
}UCOM_NV_W_RX_IP2_CAL_AT1_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_IP2_CAL_AT2_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :�ּ�RXͨ��ÿ��BAND�ڸ��е�Ƶ���£���I��Q·�ĵ�·��������
*****************************************************************************/
typedef struct
{
    UCOM_NV_RX_IP2_STRU                 stRxIp2OffsetH;
    UCOM_NV_RX_IP2_STRU                 stRxIp2OffsetM;
    UCOM_NV_RX_IP2_STRU                 stRxIp2OffsetL;
}UCOM_NV_W_RX_IP2_CAL_AT2_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_IP2_THRESHOLD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :IP2У׼����,�����ּ�����ͬһ���ṹ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwIp2StopThreshold;                    /* ֹͣ���� */
    VOS_INT16                           shwIp2FailThreshold;                    /* ʧ������ */
}UCOM_NV_W_RX_IP2_THRESHOLD_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_IP2_CAL_ENABLE_AT2_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                                  uhwRxIp2CalEnableAt2;           /* 0��ʾ�����ּ�����IP2У׼��1��ʾ������ */
}UCOM_NV_W_RX_IP2_CAL_ENABLE_AT2_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_AGC_FREQ_COMP_ANT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :3.5 AGC������ͳһ��Ƶ������Ƶ�㲻ͬ�����������仯
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwRxAgcFreqComp[UCOM_WCDMA_UARFCN_NUM];
}UCOM_NV_W_RX_AGC_FREQ_COMP_ANT_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_AGC_GAIN_ANY_CARRIER_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC GainУ׼ֵ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwRxAgcGainNoBlock[UCOM_NV_W_AGC_GAIN_NOBLK_STEP_NUM];
    VOS_INT16                           ashwRxAgcGainBlock[UCOM_NV_W_AGC_GAIN_BLK_STEP_NUM];
}UCOM_NV_W_RX_AGC_GAIN_ANY_CARRIER_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_AGC_GAIN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC GainУ׼ֵ
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_RX_AGC_GAIN_ANY_CARRIER_STRU            astAgcGain[UCOM_NV_DC_SC_MODE_BUTT];    /* AGC Gain,���������ز� */
}UCOM_NV_W_RX_AGC_GAIN_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_AGC_GAIN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC GainУ׼ֵ
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_RX_AGC_GAIN_STRU            astRxAgcGainAnt[UCOM_NV_W_ANT_NUM];    /* AGC Gain,���������ز� */
}UCOM_NV_W_RX_AGC_GAIN_DANT_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_AGC_GAIN_PRE_ANY_CARRIER_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC Gain Predefinedֵ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwRxAgcGainPreNoBlock[UCOM_NV_W_AGC_GAIN_NOBLK_STEP_NUM];
    VOS_INT16                           ashwRxAgcGainPreBlock[UCOM_NV_W_AGC_GAIN_BLK_STEP_NUM];
}UCOM_NV_W_RX_AGC_GAIN_PRE_ANY_CARRIER_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_AGC_GAIN_PRE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC Gain Predefinedֵ
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_RX_AGC_GAIN_PRE_ANY_CARRIER_STRU
                                        astRxAgcGainPreCarrier[UCOM_NV_DC_SC_MODE_BUTT];         /* AGC Gain Preֵ,���������ز� */
}UCOM_NV_W_RX_AGC_GAIN_PRE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_AGC_GAIN_PRE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC Gain Predefinedֵ
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_RX_AGC_GAIN_PRE_STRU
                                        astRxAgcGainPreAnt[UCOM_NV_W_ANT_NUM];         /* AGC Gain Preֵ,���������ز� */
}UCOM_NV_W_RX_AGC_GAIN_PRE_DANT_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_AGC_FRONT_END_GAIN_PRE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC Front End Predefinedֵ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwRxFrontEndGainPre[UCOM_NV_DC_SC_MODE_BUTT];   /* Front End Predefined */
}UCOM_NV_W_RX_AGC_FRONT_END_GAIN_PRE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_AGC_FRONT_END_GAIN_PRE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC Front End Predefinedֵ
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_RX_AGC_FRONT_END_GAIN_PRE_STRU         astRxFrontEndGainPre[UCOM_NV_W_ANT_NUM];   /* Front End Predefined */
}UCOM_NV_W_RX_AGC_FRONT_END_GAIN_PRE_DANT_STRU;


/*****************************************************************************
 ö����    : RX_AGC_GAIN_SWITCH_THRESHOLD_STRU
 Э����  :
 ö��˵��  : AGC��λ�л����޵�NV�����BLOCK�ͷ�BLOCK
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwNoBlockAgcThresholdInc[UCOM_NV_W_AGC_GAIN_NOBLK_THRESHOLD_NUM];           /* NoBlock��ʽ�µ�λ���� */
    VOS_INT16                           ashwNoBlockAgcThresholdDec[UCOM_NV_W_AGC_GAIN_NOBLK_THRESHOLD_NUM];           /* NoBlock��ʽ�µ�λ���� */
    VOS_INT16                           ashwBlockAgcThresholdInc[UCOM_NV_W_AGC_GAIN_BLK_THRESHOLD_NUM];             /* Block��ʽ�µ�λ���� */
    VOS_INT16                           ashwBlockAgcThresholdDec[UCOM_NV_W_AGC_GAIN_BLK_THRESHOLD_NUM];             /* Block��ʽ�µ�λ���� */
}UCOM_NV_W_RX_AGC_GAIN_SWITCH_THRESHOLD_STRU;

/*****************************************************************************
 ö����    : UCOM_NV_W_RX_AGC_GAIN_PREDEFINED_ANYCARRIER_STRU
 Э����  :
 ö��˵��  : AGC��λ�л����޵�NV�����BLOCK�ͷ�BLOCK
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_RX_AGC_GAIN_SWITCH_THRESHOLD_STRU      astRxAgcGainSwitchThreshold[UCOM_NV_DC_SC_MODE_BUTT];
}UCOM_NV_W_RX_AGC_GAIN_SWITCH_THRESHOLD_DCARR_STRU;


/*****************************************************************************
 ö����    : UCOM_NV_W_RX_AGC_CTRL_STRU
 Э����  :
 ö��˵��  : AGC�����ֵ�NV�����BLOCK�ͷ�BLOCK
*****************************************************************************/
typedef struct
{
    VOS_UINT32                      unAgcCtrlNoBlock[UCOM_NV_W_AGC_GAIN_NOBLK_STEP_NUM];                   /* ��Blockģʽ��AGC������ */
    VOS_UINT32                      unAgcCtrlBlock[UCOM_NV_W_AGC_GAIN_BLK_STEP_NUM];                     /* Blockģʽ��AGC������ */
}UCOM_NV_W_RX_AGC_CTRL_STRU;

/*****************************************************************************
 ö����    : UCOM_NV_W_RX_AGC_CTRL_STRU
 Э����  :
 ö��˵��  : AGC�����ֵ�NV�����BLOCK�ͷ�BLOCK
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_RX_AGC_CTRL_STRU  astRxAgcCtrl[UCOM_NV_DC_SC_MODE_BUTT];
}UCOM_NV_W_RX_AGC_CTRL_DCARR_STRU;



/*****************************************************************************
 ö����    : UCOM_NV_W_DCOFFSET_STRU
 Э����  :
 ö��˵��  : DC offset�Ľṹ������
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwDci;                                 /* I·��ֱ��ֵ */
    VOS_INT16                           shwDcq;                                 /* Q·��ֱ��ֵ */
}UCOM_NV_W_DCOFFSET_STRU;


/*****************************************************************************
 ö����    : UCOM_NV_W_DCOFFSET_ANYCARRIER_STRU
 Э����  :
 ö��˵��  : DC offset�Ľṹ������
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_DCOFFSET_STRU             astNoBlockDcOffset[UCOM_NV_W_AGC_GAIN_BLK_STEP_NUM];       /* blockģʽ�¸���λ��DC offset */
    UCOM_NV_W_DCOFFSET_STRU             astBlockDcOffset[UCOM_NV_W_AGC_GAIN_NOBLK_STEP_NUM];         /* ��blockģʽ�¸���λ��DC offset */
}UCOM_NV_W_DCOFFSET_ANYCARRIER_STRU;


/*****************************************************************************
 ö����    : W_DCOFFSET_ANT_STRU
 Э����  :
 ö��˵��  : DC offset�Ľṹ������
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_DCOFFSET_ANYCARRIER_STRU              astAnyCarrierDcOffset[UCOM_NV_DC_SC_MODE_BUTT];   /* SC\DC�ز�ģʽ�µ�DCֵ */
}UCOM_NV_W_DCOFFSET_ANT_STRU;

/*****************************************************************************
 ö����    : UCOM_NV_W_DCOFFSET_ANT_STRU
 Э����  :
 ö��˵��  : DC offset�Ľṹ������
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_DCOFFSET_ANT_STRU              astDcOffsetAnt[UCOM_NV_W_ANT_NUM];
}UCOM_NV_W_DCOFFSET_DANT_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_FEM_CHAN_CONNECT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : A/Bͨ���Ե�ѡ��,ǰ��Ch0/CH1ͨ��ѡ��
*****************************************************************************/
typedef struct
{
    UCOM_NV_CHAN_CONNECT_ENUM_UINT16    enRfConnect;                            /* RF~RFIC֮�������:0:����������RF_A��1:����������RF_B */
    UCOM_NV_CHAN_CONNECT_ENUM_UINT16    enRfAbbConnect;                         /* RFIC��ABB֮�������,Ӳ������,����Ҫ������� */
    UCOM_NV_CHAN_CONNECT_ENUM_UINT16    enAbbBbpConnect;                        /* ABB��BBP COM1֮�������:0:����������ABB_A��1:����������ABB_B */
    VOS_UINT16                          uhwChanSwitch;                          /* ����ÿ��bandѡ��ͨ��0����1,ĿǰV9R1��Ĭ������ͨ����ѡ��0,����ͨ����ѡ��1. */

}UCOM_NV_FEM_CHAN_CONNECT_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_WG_MIPI_ANT_CTRL_WORD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : mipi ant �Ĵ���������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwCtrlWord[UCOM_NV_MAX_MIPI_ANT_CMD_NUMBER];
}UCOM_NV_WG_MIPI_ANT_CTRL_WORD_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_TX_CAL_CHAN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :��ҪУ׼��WCDMA��Ƶ�����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwValidCalChanNum;
    VOS_UINT16                          auhwTxCalChan[UCOM_WCDMA_UARFCN_NUM];        /* _H2ASN_Replace PHY_UINT16_ARRAY2_16 auhwRxCalChan[UCOM_WCDMA_BAND_NUM][UCOM_NV_W_UARFCN_NUM]; */ /* RXƵ�����䣬3��Ƶ�Σ�ÿ��Ƶ��16��UARFCN */
}UCOM_NV_WCDMA_TX_CAL_CHAN_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_TX_WIRED_MAX_POWER_RACH_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                                   shwTxWiredMaxPowerRach;                             /* ����Ƶ�Σ����н�����DPCH�����RACHʱUE�����������书�ʣ���λ0.1dbm;��0��ΪRACH,��1��ΪDPCH, */
}UCOM_NV_WCDMA_TX_WIRED_MAX_POWER_RACH_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_TX_WIRED_MAX_POWER_DPCH_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                                   shwTxWiredMaxPowerDpch;                             /* ����Ƶ�Σ����н�����DPCH�����RACHʱUE�����������书�ʣ���λ0.1dbm;��0��ΪRACH,��1��ΪDPCH, */
}UCOM_NV_WCDMA_TX_WIRED_MAX_POWER_DPCH_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_TX_WIRED_MAX_POWER_TEMP_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                                   ashwTxWiredMaxPowerTempComp[UCOM_NV_W_TEMP_NUM];    /* ����书�ʲ������棬��λ0.1dbm;3��Ƶ�Σ�5��Ԥ�ȶ�����¶ȵ�:-20,0,20,40,60,��6�������ڶ��룬��ʹ�� */
}UCOM_NV_WCDMA_TX_WIRED_MAX_POWER_TEMP_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_TX_MIN_POWER_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                                   shwTxMinPower;                                      /* UE�������С���书�ʣ���λ0.1dbm;3��Ƶ�Σ�5��Ԥ�ȶ�����¶ȵ�:-20,0,20,40,60,��6�������ڶ��룬��ʹ�� */
}UCOM_NV_WCDMA_TX_MIN_POWER_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_TX_MIN_POWER_TEMP_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                                   ashwTxMinPowerTempComp[UCOM_NV_W_TEMP_NUM];         /* ��С���书���¶Ȳ��� */
}UCOM_NV_WCDMA_TX_MIN_POWER_TEMP_COMP_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_HDET_VGA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwTxHdetVga;                                                   /* ��ʾPD��ǰ��˥�� ��VGAֵ*/
}UCOM_NV_W_TX_HDET_VGA_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_HDET_DCOFFSET_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwTxHdetDcOffset;                                              /* ��ʾDCOFFSET */
}UCOM_NV_W_TX_HDET_DCOFFSET_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_HDET_POWER_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwTxHdetContPower[UCOM_NV_W_TX_HDET_PV_NUM];                  /* ������ģʽ�£����Թ��ʺ͵�ѹ��ϵ�Ĺ��ʲ��Ե� */
}UCOM_NV_W_TX_HDET_POWER_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_HDET_HKADC_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwTxHdetVolt[UCOM_NV_W_TX_HDET_PV_NUM];                       /* ������ģʽ�£����Թ��ʺ͵�ѹ��ϵʱ��ѹ����ֵ */
}UCOM_NV_W_TX_HDET_HKADC_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_HDET_FREQ_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwTxHdetFreqComp[UCOM_WCDMA_UARFCN_NUM];                       /* ��ͬƵ��Թ�������Ӱ�첻ͬ��Ƶ�ʲ���ֵ */
}UCOM_NV_W_TX_HDET_FREQ_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_HDET_TEMP_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwTxHdetTempComp[UCOM_NV_W_TEMP_NUM];  /* ��ͬ�¶ȶԹ�������Ӱ�첻ͬ���¶Ȳ���ֵ.���ָ��е��ŵ�,˳��Ϊ�иߵ� */
}UCOM_NV_W_TX_HDET_TEMP_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_HDET_START_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwTxHdetStart;                                                 /* TX ���书�ʳ�����ֵʱ��BBP�Զ��������ʼ�� */
}UCOM_NV_W_TX_HDET_START_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_HDET_STOPT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwTxHdetStop;                                                  /* TX ���书��С�ڸ�ֵʱ��BBP�Զ�ֹͣ���ʼ�� */
}UCOM_NV_W_TX_HDET_STOPT_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_TX_WIRE_MAXPOWER_RACH_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                                   shwTxWirelessMaxPowerRach;                          /* ���� *//* �տڷ��书��:_UCOM_TX_PWR_CTRL_SWITCH */
}UCOM_NV_WCDMA_TX_WIRE_MAXPOWER_RACH_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_TX_WIRE_MAXPOWER_DPCH_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                                   shwTxWirelessMaxPowerDpch;                          /* ���� *//* �տڷ��书��:_UCOM_TX_PWR_CTRL_SWITCH */
}UCOM_NV_WCDMA_TX_WIRE_MAXPOWER_DPCH_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_TX_WIRELESS_POWER_TEMP_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                                   ashwTxWirelessPowerTempComp[UCOM_NV_W_TEMP_NUM];    /* �տڹ������¶Ȳ��� */
}UCOM_NV_WCDMA_TX_WIRELESS_POWER_TEMP_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_GAIN_COMP_VS_PA_CHAN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/

typedef struct
{
    VOS_UINT16                          uhwHighFreq;                            /* �����жϸ�Ƶ�������Ƶ�� */
    VOS_UINT16                          uhwLowFreq;                             /* �����жϵ�Ƶ�������Ƶ�� */
}UCOM_NV_W_TX_GAIN_COMP_VS_PA_CHAN_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_GAIN_COMP_VS_PA_CH_STRU
 Э����  :
 �ṹ˵��  : W TX PA�����л��㲹��������ֽ��
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwValidNum;                             /* ��ʾ����Ƶ�㼸����Ч */
    VOS_UINT16                          auhwFreqChan[UCOM_NV_W_PA_GAIN_SWITCH_COMP_CHAN_NUM];
}UCOM_NV_W_TX_GAIN_COMP_VS_PA_CH_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_PA_GAIN_SWITCH_COMP_STRU
 Э����  :
 �ṹ˵��  : W TX PA�����л�ʱ���ʲ���ֵ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwH2MComp;                             /* PA����Ӹ��е��е����޲���,��λ0.1db */
    VOS_INT16                           shwM2HComp;                             /* PA��������е��ߵ����޲���,��λ0.1db */
    VOS_INT16                           shwM2LComp;                             /* PA��������е��͵����޲���,��λ0.1db */
    VOS_INT16                           shwL2MComp;                             /* PA����ӵ��е��е����޲���,��λ0.1db */
}UCOM_NV_W_PA_GAIN_SWITCH_COMP_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_PA_GAIN_SWITCH_COMP_STRU
 Э����  :
 �ṹ˵��  : W TX 4��ʱ϶��PA�����л�ʱ���ʲ���ֵ
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_PA_GAIN_SWITCH_COMP_STRU  astSlotComp[UCOM_NV_W_PA_SWITCH_COMP_SLOT];
}UCOM_NV_W_TX_PA_GAIN_SWITCH_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_APC_TEMP_STRU
 Э����  :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                                   shwTxApcTemp;                                       /* ����У׼ʱ���¶�ֵ:��������ŵ���,ÿ��BAND�ĸ��е�PA����ģʽ��У׼ʱ����¶�ֵ,�б�ʾ���е� */
}UCOM_NV_W_TX_APC_TEMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_PA_GAIN_SWITH_THRESHOLD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/

typedef struct
{
    VOS_INT16                           shwPaGainThresH2M;                      /* PA�Ӹ����浽��������л����� */
    VOS_INT16                           shwPaGainThresM2H;                      /* PA�������浽��������л����� */
    VOS_INT16                           shwPaGainThresM2L;                      /* PA�������浽��������л����� */
    VOS_INT16                           shwPaGainThresL2M;                      /* PA�ӵ����浽��������л����� */
}UCOM_NV_W_PA_GAIN_SWITH_THRESHOLD_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RF_PA_GAIN_CTRL_WORD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/

typedef struct
{
    VOS_UINT32                          uwRfPaCtrlHighMode;                     /* PA������ģʽ������ */
    VOS_UINT32                          uwRfPaCtrlMediumMode;                   /* PA������ģʽ������ */
    VOS_UINT32                          uwRfPaCtrlLowMode;                      /* PA������ģʽ������ */
}UCOM_NV_W_RF_PA_GAIN_CTRL_WORD_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_PA_GAIN_SWITH_TIMING_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/

typedef struct
{
    VOS_INT16                           shwPaGainSwitchH2M;                     /* PA��������浽�������л�ʱ�� */
    VOS_INT16                           shwPaGainSwitchM2H;                     /* PA���������浽�������л�ʱ�� */
    VOS_INT16                           shwPaGainSwitchM2L;                     /* PA���������浽�������л�ʱ�� */
    VOS_INT16                           shwPaGainSwitchL2M;                     /* PA��������浽�������л�ʱ�� */
}UCOM_NV_W_PA_GAIN_SWITH_TIMING_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_TX_IQ_MISMATCH_DCR_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :2.3 ÿ��NV��Ŀ��ʾ����IQ mismatch��DC offset
            ��������ʱ�����˲������ø�DBB����TXͨ������Ԥ����
            ���ֲ�����ͨ����IQ mismatch�Ͳ���DC��
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwAmplitude;                           /* ��ֵУ������ */
    VOS_INT16                           shwPhase;                               /* ��λУ������ */
    VOS_INT16                           shwDCI;                                 /* ֱ��У��ʵ�� */
    VOS_INT16                           shwDCQ;                                 /* ֱ��У���鲿 */
}UCOM_NV_TX_IQ_MISMATCH_DCR_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_PA_GAIN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��ʾRFIC��DBB��˥��������£����е�3�����������ֵ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwPaGain[UCOM_NV_W_TX_PA_MODE_NUM];           /* ��VOICEģʽ�£���ʾRFIC��DBB��˥��������£����е�3�����������ֵ����λΪ0.1dB */
}UCOM_NV_W_TX_PA_GAIN_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_PA_GAIN_VOICE_MODE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��ʾVOICEģʽ�£�RFIC��DBB��˥��������£����е�3�����������ֵ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwPaGain[UCOM_NV_W_TX_PA_MODE_NUM];           /* ��ʾVOICEģʽ�£�RFIC��DBB��˥��������£����е�3�����������ֵ����λΪ0.1dB */
}UCOM_NV_W_TX_PA_GAIN_VOICE_MODE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_PHASE_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :4.2 PAģʽ�Ӹ������л��������桢�������л��������桢�������л���
                �����桢�������л���������ʱ������TX��PA��Ի���IQ�źŲ�����λ
                ��ת��
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwPaH2M;
    VOS_INT16                           shwPaM2H;
    VOS_INT16                           shwPaM2L;
    VOS_INT16                           shwPaL2M;

}UCOM_NV_W_TX_PHASE_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_PHASE_COMP_TIMING_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                                  uhwTxPhaseCompTiming;
}UCOM_NV_W_TX_PHASE_COMP_TIMING_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_GAIN_FREQCOMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                                   ashwTxGainFreqComp[UCOM_NV_W_TX_FREQ_COMP_NUM];     /* _H2ASN_Replace PHY_UINT16_ARRAY2_16 ashwHigh[W_BAND_NUM][W_UARFCN_NUM];*/ /* TX������Ƶ�ʲ���ֵ */
}UCOM_NV_W_TX_GAIN_FREQCOMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_GAIN_TEMP_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :7.4 PA���ڸ��е�����ģʽ�£�Ƶ���ڸߡ��С����ŵ��£�TX���书��������¶ȱ仯�Ĳ���
*****************************************************************************/
typedef struct
{
    /* �¶ȷ�Χ��ȡֵȡ����UCOM_NV_WG_TX_TEMP_DEFINE_STRU */
    VOS_INT16                           ashwTxGainTempComp[UCOM_NV_W_TX_PA_TEMP_NUM];
}UCOM_NV_W_TX_GAIN_TEMP_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_HSDPCCH_DELTA_GAIN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwTpcAlgo1UlPowGain;
    VOS_INT16                           shwTpcAlgo1HsDpaPowMode;
    VOS_INT16                           shwTpcAlgo2UlPowGain;
    VOS_INT16                           shwTpcAlgo2HsDpaPowMode;
}UCOM_NV_W_HSDPCCH_DELTA_GAIN_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_VBIAS_TIMING_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT16                                  uhwTxVbiasTiming;              /*��ʾPA VBIAS�л������ʱ϶�߽����ǰ��*/
}UCOM_NV_W_TX_VBIAS_TIMING_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_SAR_BACKOFF_POWER_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                                   ashwWcdmaSarBackoffPower[UCOM_NV_SAR_BACKOF_NUM];
}UCOM_NV_W_SAR_BACKOFF_POWER_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_APC_RFIC_CTRL_GAIN_STRU
 Э����  :
 �ṹ˵��  : APC table��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                                  auhwApcRficCtrlGain[UCOM_NV_W_APC_ATTEN_NUM];

}UCOM_NV_W_APC_RFIC_CTRL_GAIN_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_APC_DBB_ATTEN_GAIN_STRU
 Э����  :
 �ṹ˵��  : APC table��
*****************************************************************************/
typedef struct
{
    VOS_INT16                                   ashwApcDbbAttenGain[UCOM_NV_W_APC_ATTEN_NUM];

}UCOM_NV_W_APC_DBB_ATTEN_GAIN_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_APC_GAIN_STATE_INDEX_STRU
 Э����  :
 �ṹ˵��  : APC table��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                                  auhwRfGainStateIndexGain[UCOM_NV_W_APC_ATTEN_NUM];

}UCOM_NV_W_APC_GAIN_STATE_INDEX_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_APC_RFIC_CTRL_GAIN_VOICE_MODE_STRU
 Э����  :
 �ṹ˵��  : APC table��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                                  auhwApcRficCtrlGainVoiceMode[UCOM_NV_W_APC_ATTEN_NUM];

}UCOM_NV_W_APC_RFIC_CTRL_GAIN_VOICE_MODE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_APC_DBB_ATTEN_GAIN_MODE_STRU
 Э����  :
 �ṹ˵��  : APC table��
*****************************************************************************/
typedef struct
{
    VOS_INT16                                   ashwApcDbbAttenGainVoiceMode[UCOM_NV_W_APC_ATTEN_NUM];

}UCOM_NV_W_APC_DBB_ATTEN_GAIN_VOICE_MODE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_APC_STATE_INDEX_GAIN_VOICE_MODE_STRU
 Э����  :
 �ṹ˵��  : APC table��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                                  auhwRfGainStateIndexGainVoiceMode[UCOM_NV_W_APC_ATTEN_NUM];

}UCOM_NV_W_APC_STATE_INDEX_GAIN_VOICE_MODE_STRU;



/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_PA_APT_STRU
 Э����  :
 �ṹ˵��  : APT���书�ʵĽṹ������
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwPower10th;                           /* ÿ����λ��APT���书�� */

    VOS_UINT16                          uhwPaVcc;                               /* ÿ����λ��APT��ѹ������ */
    VOS_UINT16                          uhwPaVbias;                             /* ÿ����λ��MmmbPaVbias��ѹ������ */
    VOS_UINT16                          uhwPaVbias2;                            /* ÿ����λ��MmmbPaVbias2 */
    VOS_UINT16                          uhwPaVbias3;                            /* ÿ����λ��MmmbPaVbias3 */
}UCOM_NV_W_TX_PA_APT_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_PA_APT_TABLE_STRU
 Э����  :
 �ṹ˵��  : APT���书�ʵĽṹ������
*****************************************************************************/
typedef struct
{
    UCOM_NV_POWER_STEP_ENUM_UINT16      enAptStepMode;
    VOS_UINT16                          auhwValidCount[UCOM_NV_PA_GAIN_MAX_NUM];
    UCOM_NV_W_TX_PA_APT_STRU            astAptTable[UCOM_NV_APT_TABLE_MAX_LEN];
}UCOM_NV_W_TX_PA_APT_TABLE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_MIPI_PA_TIMING_CFG_STRU
 Э����  :
 �ṹ˵��  : PA�Ŀ�����Ϣ��ǰ��ʱ϶ͷ��Чʱ�䣬��λchip
*****************************************************************************/
typedef struct
{
    VOS_UINT16              uhwPaVccActiveTime;
    VOS_UINT16              uhwPaBias1ActiveTime;
    VOS_UINT16              uhwPaBias2ActiveTime;
    VOS_UINT16              uhwPaBias3ActiveTime;
    VOS_UINT16              uhwPaBiasTrigActiveTime;
    VOS_UINT16              uhwPaBiasTrigAgainActiveTime;
}UCOM_NV_W_MIPI_APT_TIMING_CFG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_MIPI_APT_CMD_FRAME_STRU
 Э����  :
 �ṹ˵��  : ��ӦAPT����PA Vcc Vbias�Ŀ���ָ��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwPaVccCmd;                                /* PA Vcc�Ŀ���ָ�� */
    VOS_UINT16                          uhwReseved;
    VOS_UINT16                          uhwPaBiasNum;                               /* PA Vbias�Ŀ���ָ����� */
    VOS_UINT16                          auhwPaVbiasCmd[UCOM_NV_W_TX_PA_VBIAS_NUM];  /* ����PA Vbias�Ŀ���ָ�� */
}UCOM_NV_W_MIPI_APT_CMD_FRAME_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_PA_APT_CFG_STRU
 Э����  :
 �ṹ˵��  : APT����PA������Ϣ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwAptCtrlMask;                         /* ��ӦUCOM_NV_APT_MASK_BIT_ENUM_UINT16 */
    VOS_UINT16                          uhwAptChannelSelect;                    /* ��ӦUCOM_NV_APT_CHANNEL_DEFINE_ENUM_UINT16 */
}UCOM_NV_W_TX_PA_APT_CFG_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_MIPI_APT_PA_TRIGGER_STRU
 Э����  :
 �ṹ˵��  : Mipi PA trigger��mipi����ָ��
*****************************************************************************/
typedef struct
{
    UCOM_NV_MIPI_WR_FORMAT_STRU         stPaTrigger;
    UCOM_NV_MIPI_WR_FORMAT_STRU         stPaTriggerAgian;
}UCOM_NV_W_MIPI_APT_PA_TRIGGER_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_ANT_TUNER_BAND_PARA_STRU
 Э����  :
 �ṹ˵��  : ���ߵ�гBAND���ƽṹ������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwAntTunerCode;                   /* ��ǰBAND���ߵ�гĬ��ֵ */
    VOS_UINT16                              uhwReserve;
    VOS_UINT16                              uhwAntTunerStart;                  /* ��ǰBANDפ�������������,BBPδ�ṩ�ӿڣ��ݺ�PD������һ�� */
    VOS_INT16                               shwAntTunerComp;                   /* �����ʲ���������0.1dbm */
}UCOM_NV_W_ANT_TUNER_BAND_PARA_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TUNER_MIPI_CMD_FRAME_STRU
 Э����  :
 �ṹ˵��  : Tuner Wģ�̬ʱ������֡�����֧��10��, uhwNormalNum��ʾ��ǰ�ͺ�
             tuner����Ҫ���õķ���չ�Ĵ���������uhwExtendedNum��ʾ��ǰ�ͺ�tuner
             ����Ҫ���õ���չ�Ĵ�����������չ���õļĴ����϶��������ģ�������֮
             ��ӦС�ڵ���10������չ���õļĴ�����Ҫд�����������չ���õļĴ�
             ��ֻ��Ҫд��ַ�ȿɡ�
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwNormalNum;
    VOS_UINT16                              uhwExtenedNum;
    VOS_UINT16                              auhwCmdFrame[UCOM_NV_W_TUNER_MIPI_CMD_MAX_NUM];
}UCOM_NV_W_TUNER_MIPI_CMD_FRAME_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TUNER_MIPI_DATA_FRAME_STRU
 Э����  :
 �ṹ˵��  : tunerĬ���������ݣ����֧��10��,��ӦCmdFrame,������ʽͬCmdFrame
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              auhwDataFrame[UCOM_NV_W_TUNER_MIPI_DATA_MAX_NUM];
}UCOM_NV_W_TUNER_MIPI_DATA_FRAME_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_TUNER_MIPI_CMD_FRAME_STRU
 Э����  :
 �ṹ˵��  : Tuner������֡�����֧��6��,uhwNormalNum��ʾ��ǰ�ͺ�
             tuner����Ҫ���õķ���չ�Ĵ���������uhwExtendedNum��ʾ��ǰ�ͺ�tuner
             ����Ҫ���õ���չ�Ĵ�����������չ���õļĴ����϶��������ģ�������֮
             ��ӦС�ڵ���10������չ���õļĴ�����Ҫд�����������չ���õļĴ�
             ��ֻ��Ҫд��ַ�ȿɡ�
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwNormalNum;
    VOS_UINT16                              uhwExtenedNum;
    VOS_UINT16                              auhwCmdFrame[UCOM_NV_GSM_TUNER_MIPI_CMD_MAX_NUM];
}UCOM_NV_GSM_TUNER_MIPI_CMD_FRAME_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_TUNER_MIPI_DATA_FRAME_STRU
 Э����  :
 �ṹ˵��  : tunerĬ���������ݣ����֧��6��,��ӦCmdFrame,������ʽͬCmdFrame
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              auhwDataFrame[UCOM_NV_GSM_TUNER_MIPI_DATA_MAX_NUM];
}UCOM_NV_GSM_TUNER_MIPI_DATA_FRAME_STRU;

/*****************************************************************************
 ö����    : UCOM_NV_W_TUNER_MIPI_DATA_GROUP_STRU
 Э����  :
 ö��˵��  : W��������,���֧������״̬��ÿ��״̬֧��10�������֣���ӦCmdFrame,
             ������ʽͬCmdFrame
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_TUNER_MIPI_DATA_FRAME_STRU         astDataFrame[UCOM_NV_TUNER_HANDLE_STATUS_NUM];
}UCOM_NV_W_TUNER_MIPI_DATA_GROUP_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_TUNER_MIPI_DATA_TX_STRU
 Э����  :
 �ṹ˵��  : GģTxĬ����������,���֧��6������Ч������UCOM_NV_TUNER_CMD_ADDR
             uhwValidNum��������Band������ʵ������ȡ
*****************************************************************************/
typedef struct
{
    UCOM_NV_GSM_TUNER_MIPI_DATA_FRAME_STRU         astDataFrame[UCOM_NV_TUNER_HANDLE_STATUS_NUM];
}UCOM_NV_GSM_TUNER_MIPI_DATA_TX_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_TUNER_MIPI_DATA_RX_STRU
 Э����  :
 �ṹ˵��  : GģRxĬ����������,���֧��6������Ч������UCOM_NV_TUNER_CMD_ADDR
             uhwValidNum��������Band������ʵ������ȡ
*****************************************************************************/
typedef struct
{
    UCOM_NV_GSM_TUNER_MIPI_DATA_FRAME_STRU         astDataFrame[UCOM_NV_TUNER_HANDLE_STATUS_NUM];
}UCOM_NV_GSM_TUNER_MIPI_DATA_RX_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_WG_MMMBPA_GAIN_CTRL_WORD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : mmmb pa �Ĵ���������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwCtrlWord[UCOM_NV_MAX_MMMBPA_CMD_NUMBER];
}UCOM_NV_WG_MMMBPA_GAIN_CTRL_WORD_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_HDET_SCUPA_CM_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : SC-UPA��CMֵ����
*****************************************************************************/

typedef struct
{
    VOS_INT16                           ashwScUpaPdComp[UCOM_NV_W_TX_HDET_SCUPA_CM_COMP_NUM];
}UCOM_NV_W_TX_HDET_SCUPA_CM_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_HDET_DPA_CM_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DPA��CMֵ����
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwDpaPdComp[UCOM_NV_W_TX_HDET_DPA_CM_COMP_NUM];
}UCOM_NV_W_TX_HDET_DPA_CM_COMP_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_APT_CM_SCUPA_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : SC-UPAҵ���APTģʽscupa����
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwAptCmScupaComp[UCOM_NV_W_TX_APT_SCUPA_CM_COMP_NUM];
}UCOM_NV_W_TX_APT_CM_SCUPA_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_APT_CM_DPA_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : SC-UPAҵ���APTģʽdpa����
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwAptCmDpaComp[UCOM_NV_W_TX_APT_DPA_CM_COMP_NUM];
}UCOM_NV_W_TX_APT_CM_DPA_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_APT_TEMP_COMP_STRU_HI6361
 Э����  :
 ASN.1���� :
 �ṹ˵��  : APTƵ�ʲ���
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwAptTempComp[UCOM_NV_W_APT_FREQ_COMP_NUM][UCOM_NV_W_APT_TEMP_COMP_NUM];                                /* ��ֵ��ʾW��BAND����Gģ��BAND��ʶ */
}UCOM_NV_W_APT_TEMP_COMP_STRU;

/*****************************************************************************
 ö����    : UCOM_NV_W_APT_COMP_STRU
 Э����  :
 ö��˵��  : APT��ѹ�����Ľṹ������
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwAptComp[UCOM_NV_APT_TABLE_MAX_LEN];       /* ÿ����λ��APT���� */
}UCOM_NV_W_APT_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_PA_NONLINEAR_STRU_HI6361
 Э����  :
 ASN.1���� :
 �ṹ˵��  : PA�����Բ���
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwPower;
    VOS_INT16                           shwNonLinearComp;
}UCOM_NV_W_PA_NONLINEAR_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_PA_NONLINEAR_COMP_STRU_HI6361
 Э����  :
 ASN.1���� :
 �ṹ˵��  : PA�����Բ���
*****************************************************************************/
typedef struct
{
    UCOM_NV_POWER_STEP_ENUM_UINT16      enPowerStepMode;
    VOS_UINT16                          auhwValidCount[UCOM_NV_PA_GAIN_MAX_NUM];
    UCOM_NV_W_PA_NONLINEAR_STRU         astNonLinear[UCOM_NV_W_PA_NONLINEAR_NUM];
}UCOM_NV_W_PA_NONLINEAR_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_LOW_VOLT_SWITCH_THRESHOLD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/

typedef struct
{
    VOS_INT16                           shwStartPower;                          /* ��ѹ����,Ĭ��16dBm,��Χ0~22dBm */
    VOS_INT16                           shwStopPower;                           /* ��ѹ����,Ĭ��18dBm,��Χ0~22dBm */
}UCOM_NV_W_TX_LOW_VOLT_SWITCH_THRESHOLD_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_MAIL_BOX_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : W��������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwWcdmaMailBoxFlag;                 /* W���䷽����1:���䷽����Ч��0:��Ч */
    VOS_UINT16                          uhwReserved;                /* �����ֽ� */
}UCOM_NV_W_MAIL_BOX_CONFIG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_LOW_VOLT_SWITCH_THRESHOLD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/

typedef struct
{
    VOS_UINT16                          uhwSlaveSampleNum;                      /* ��ģ�ּ�ģʽ�л��Ĳ�������,Ĭ��Ϊ1 */
    VOS_UINT16                          uhwDrxIntraSampleNum;                   /* DRX��Ƶ�ּ�ģʽ�л��Ĳ�������,Ĭ��Ϊ1 */
    VOS_UINT16                          uhwDrxInterSampleNum;                   /* DRX��Ƶ�ּ�ģʽ�л��Ĳ�������,Ĭ��Ϊ1 */
    VOS_UINT16                          uhwFachIntraSampleNum;                  /* FACH��Ƶ�ּ�ģʽ�л��Ĳ�������,Ĭ��Ϊ2 */
    VOS_UINT16                          uhwFachInterSampleNum;                  /* FACH��Ƶ�ּ�ģʽ�л��Ĳ�������,Ĭ��Ϊ1 */
    VOS_UINT16                          uhwDchIntraSampleNum;                   /* DCH��Ƶ�ּ�ģʽ�л��Ĳ�������,Ĭ��Ϊ10 */
    VOS_UINT16                          uhwDchInterSampleNum;                   /* DCH��Ƶ�ּ�ģʽ�л��Ĳ�������,Ĭ��Ϊ1 */
    VOS_INT16                           shwMain2ScndThreshold;                  /* ���������з���ּ������ޣ�TX_MAIN_RSCP - TX_SCND_RSCP <= ���ޣ��л�������ּ���-48(-6dB,1/8dB����) */
    VOS_INT16                           shwScnd2MainThreshold;                  /* ���������з���ּ������ޣ�TX_MAIN_RSCP - TX_SCND_RSCP > ���ޣ��л�������ּ���-16(-2dB,1/8dB����) */
    VOS_INT16                           shwMeasValidThreshold;                  /* ����ֵ��Ч���ޣ�-960(-120dB,1/8dB����) */
    VOS_INT16                           uhwMeasNonEqualThreshold;               /* ����ֵ��Ч���ޣ�|TX_MAIN_RSCP - TX_SCND_RSCP| > ���ޣ�˵������������������������,24(3dB,1/8dB����) */
    VOS_UINT16                          uhwEvaTxEnable;                         /* ��������ּ�ʹ�ܵı�ǣ�1��ʾʹ�ܡ�0��ʾ��ʹ�� */
}UCOM_NV_W_TX_DIV_MODE_EVALUATE_PARA_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_MAIN_ANT_ESTIMATE_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����������NV����
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwRssiThreshold;                       /* ����˫���߲�����RSSI����(��λΪ0.125dbm) */
    VOS_INT16                           shwRscpThreshold;                       /* ����˫���߲�����RSCP����(��λΪ0.125dbm) */
    VOS_UINT16                          uhwEstimateTime;                        /* ����ʱ��(��λΪ1ms) */
    VOS_UINT16                          uhwReserved;                            /* ���ֽڶ��� */
}UCOM_NV_W_MAIN_ANT_ESTIMATE_PARA_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_DUAL_ANT_COMPARE_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ˫���߱Ƚ�״̬NV����
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwRscpThreshold[3];                    /* �����׶������л���RSCP����(��λΪ0.125dbm) */
    VOS_UINT16                          uhwCompareTime[3];                      /* �����׶ε�˫���߱Ƚ�ʱ��(��λΪ1ms) */
}UCOM_NV_W_DUAL_ANT_COMPARE_PARA_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_ANT_PROTECT_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ���߱���״̬NV����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwFrozenTime;                          /* ��������������״̬�Ķ���ʱ��(��λΪ1ms) */
}UCOM_NV_W_ANT_PROTECT_PARA_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_BLIND_STATE_ONE_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ä�л��׶�һ����NV����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwStateOneTime;                    /* �׶�һ�Ƚ�ʱ�� */
    VOS_INT16                               shwWorstRscpValue;                  /* ���RSCP�ź�����ֵ */
    VOS_INT16                               shwWorseRscpValue;                  /* �ϲ�RSCP�ź�����ֵ */
    VOS_UINT16                              uhwDeltaRscpValue;                  /* ���յ����ź�ǿ���½��о����� */
}UCOM_NV_W_BLIND_STATE_ONE_PARA_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_BLIND_STATE_TWO_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ä�л��׶ζ�����NV����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwStateTwoTime;                    /* �׶ζ��Ƚ�ʱ�� */
    VOS_UINT16                              uhwReserved;                        /* �����ֶ� */
    VOS_UINT16                              auhwFrozenTime[4];                   /* �����л����ᱣ��ʱ�� */
}UCOM_NV_W_BLIND_STATE_TWO_PARA_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TAS_CTRL_WORD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ���߽���������
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              uwWcdmaAntPassThroughCtrlWord;      /* ����ֱͨʱ��GPIO������ */
    VOS_UINT32                              uwWcdmaAntSwapCtrlWord;             /* ���߽���ʱ��GPIO������ */
}UCOM_NV_W_TAS_CTRL_WORD_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TAS_NONBLIND_MEAS_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : TAS���в����Ŀ��Ʋ���
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwAlpha;                           /* alpha�˲����� */
    UCOM_NV_W_ANT_PROTECT_PARA_STRU         stAntProtect;                       /* ���߱����׶β��� */
    UCOM_NV_W_MAIN_ANT_ESTIMATE_PARA_STRU   stAntEstimate;                      /* �������������� */
    UCOM_NV_W_DUAL_ANT_COMPARE_PARA_STRU    stAntCompare;                       /* ˫���߱Ƚϲ��� */
}UCOM_NV_W_TAS_NONBLIND_MEAS_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TAS_BLIND_MEAS_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : TASä�в����Ŀ��Ʋ���
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwStateOneTime;                    /* �׶�һ�Ƚ�ʱ�� */
    VOS_INT16                               shwWorstRscpValue;                  /* ���RSCP�ź�����ֵ */
    VOS_INT16                               shwWorseRscpValue;                  /* �ϲ�RSCP�ź�����ֵ */
    VOS_UINT16                              uhwDeltaRscpValue;                  /* ���յ����ź�ǿ���½��о����� */
    VOS_UINT16                              uhwStateTwoTime;                    /* �׶ζ��Ƚ�ʱ�� */
    VOS_UINT16                              uhwDeltaRscpValuetest;                  /* �����ֶ� */
    VOS_UINT16                              auhwFrozenTime[4];                  /* �����л����ᱣ��ʱ�� */
}UCOM_NV_W_TAS_BLIND_MEAS_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TAS_PHY_STATE_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : TAS�����״̬�ϱ���������ֵ
*****************************************************************************/
typedef struct
{
    VOS_INT16                               shwGoodRscpThres;                   /* ���ں��ź�RSCP����ֵ(��λΪ0.125dbm) */
    VOS_INT16                               shwPoorRscpThres;                   /* ���ڲ��ź�RSCP����ֵ(��λΪ0.125dbm) */
    VOS_UINT16                              uhwSFailNum;                        /* S׼������ʧ�ܴ��� */
    VOS_UINT16                              uhwSPassNum;                        /* S׼�������ɹ����� */
    VOS_UINT16                              uhwRachFailNum;                     /* �漴��������ʧ�ܴ��� */
    VOS_UINT16                              uhwReserved;                        /* �����ֶ� */
}UCOM_NV_W_TAS_PHY_STATE_PARA_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TAS_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : TAS�㷨���Ʋ���
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_TAS_PHY_STATE_PARA_STRU       stTasPhyStatePara;                  /* �����״̬�ϱ��������� */
    UCOM_NV_W_TAS_NONBLIND_MEAS_STRU        stTasNotBlindCtrl;                  /* TAS���в����Ŀ��Ʋ��� */
    UCOM_NV_W_TAS_BLIND_MEAS_STRU           stTasBlindCtrl;                     /* TASä�в����Ŀ��Ʋ���*/
}UCOM_NV_W_TAS_CTRL_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TAS_RF_CTRL_STRU
 Э����  :
 ASN.1���� : auwBandBlindSwitchMap�����ÿ��band�Ƿ�ʹ��TASä���㷨����bitmap��
             auwBandBlindSwitchMap[0]bit0����band1��bit1����band2���Դ����ơ�
             auwBandBlindSwitchMap[1]bit0����band33��bit1����band34���Դ����ơ�
             bitλΪ1�������bandʹ��ä���㷨������֮��
 �ṹ˵��  : TAS��Ƶ��ؿ��Ʋ���
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              auwBandBlindSwitchMap[2];           /* BAND�Ƿ�����ä�� */
    UCOM_NV_W_TAS_CTRL_WORD_STRU            stTasCtrlWord;                      /* �����л������� */
}UCOM_NV_W_TAS_RF_CTRL_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_HARQ_OUT_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : HARQ��������NV�ṹ
*****************************************************************************/
typedef struct
{
    UCOM_NV_BBP_HARQ_OUT_TYPE_ENUM_UINT16   enHarqOutType;                      /* HARQ�������� */
    VOS_UINT16                              uwReserve;
}UCOM_NV_HARQ_OUT_CONFIG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_DRX_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : WCDMA����ģDRX����
*****************************************************************************/
typedef struct
{
    UCOM_NV_DRX_CTRL_ENUM_UINT16           enMasterDrxEnableFlag;               /* ��ģDRX���Ʊ�־ */
    UCOM_NV_DRX_CTRL_ENUM_UINT16           enSlaveDrxEnableFlag;                /* ��ģDRX���Ʊ�־ */
}UCOM_NV_W_DRX_CTRL_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_GCF_INIT_GAIN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ˫���߲����Ŀ��Ʋ���
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwGsmRssiAgcSwitch;                /* GSM RSSI����AGC��ʼ���濪�� */
    VOS_UINT16                              uhwGsmRssiAgcGain;                  /* GSM RSSI AGC��ʼ��λ */
}UCOM_NV_GSM_GCF_INIT_GAIN_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_VIRTUAL_BAND_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GSM ����Ƶ��ʹ�ܱ�־���ٽ�Ƶ��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                           uhwGsmVirtualBand;                     /* 0-��֧������Ƶ�η���; 1-�ɵ�����Ƶ�η�����2-�µ�����Ƶ�η��� */
    VOS_UINT16                           uhwGsmFreqBound;                       /* B3L��B3HƵ��ŷֽ�� */
}UCOM_NV_GSM_VIRTUAL_BAND_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_TX_CTUNE_LUT_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GSM����Ctune����Lut����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                           uhwGsmTxCtuneLutCtrl;
}UCOM_NV_GSM_TX_CTUNE_LUT_CTRL_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_EXT_STRONG_NCELL_THRESHOLD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GSM����������ǿ�����ĵ�ƽ����
*****************************************************************************/
typedef struct
{
    VOS_INT16                            shwGsmExtStrongNcellThresh;            /* GSM����������ǿ�����ĵ�ƽ���� */
}UCOM_NV_GSM_EXT_STRONG_NCELL_THRESHOLD_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_SSC_CONFIG_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GSM SSC NV ��������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                            uhwGsmSscSupportFlag;                /* GSM SSC���ؿ��� */
    VOS_UINT16                            uhwBlackThreshold;                   /* ������С����õ���ֵ */
    VOS_UINT16                            uhwC2Threshold;                      /* ����C2ֵ���ڷ���С����ֵ */
    VOS_UINT16                            uhwC1Threshold;                      /* ����С��C1��ֵ */
    VOS_UINT16                            uhwRxlevAThreshold;                  /* ����С�����յ�ƽ��ֵ */
    VOS_UINT16                            uhwReserved;
}UCOM_NV_GSM_SSC_CONFIG_PARA_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_TX_CTUNE_LUT_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : WCDMA����Ctune����Lut����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                           uhwWcdmaTxCtuneLutCtrl;
}UCOM_NV_WCDMA_TX_CTUNE_LUT_CTRL_STRU;
/*****************************************************************************
 �ṹ��    : UCOM_NV_CHANNEL_WBBP_GAP_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RFIC����NV��,WBBP Gap����ͨ�����ò���,��ӦWBBP�ӿ�˵����"��ͨ������"
*****************************************************************************/
typedef struct
{
    VOS_UINT16          uhwT1ForIdlePch;                                         /* idlepch̬T1�ӳ�����,��λchip */
    VOS_UINT16          uhwT2ForIdlePch;                                         /* idlepch̬T2�ӳ�����,��λchip */
    VOS_UINT16          uhwT3ForIdlePch;                                         /* idlepch̬T3�ӳ�����,��λchip */
    VOS_UINT16          uhwT4ForIdlePch;                                         /* idlepch̬T4�ӳ�����,��λchip */
    VOS_UINT16          uhwT1ForFach;                                            /* FACH̬T1�ӳ�����,��λchip */
    VOS_UINT16          uhwT2ForFach;                                            /* FACH̬T2�ӳ�����,��λchip */
    VOS_UINT16          uhwT3ForFach;                                            /* FACH̬T3�ӳ�����,��λchip */
    VOS_UINT16          uhwT4ForFach;                                            /* FACH̬T4�ӳ�����,��λchip */
    VOS_UINT16          uhwT1ForDch;                                             /* DCH̬T1�ӳ�����,��λchip */
    VOS_UINT16          uhwT2ForDch;                                             /* DCH̬T2�ӳ�����,��λchip */
    VOS_UINT16          uhwT3ForDch;                                             /* DCH̬T3�ӳ�����,��λchip */
    VOS_UINT16          uhwT4ForDch;                                             /* DCH̬T4�ӳ�����,��λchip */

}UCOM_NV_CHANNEL_WBBP_GAP_CONFIG_STRU;



/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_CHANNEL_SWITCH_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RFIC����NV��,ͨ����������
*****************************************************************************/
typedef struct
{
    VOS_UINT16          uhwRfSignalSwitch;                                      /* RF�źŽ��� */
    VOS_UINT16          uhwMipiSignalSwitch;                                    /* MIPI�źŽ��� */
    VOS_UINT16          uhwAbbTxSignalSwitch;                                   /* ABB TX�źŽ��� */
    VOS_UINT16          uhwAbbRxSignalSwitch;                                   /* ABB RX�źŽ��� */
    VOS_UINT16          uhwPmuSignalSwitch;                                     /* PMU�źŽ��� */
    VOS_UINT16          uhwAptSignalSwitch;                                     /* APT�źŽ��� */
}UCOM_NV_CHANNEL_SWITCH_CONFIG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_CHANNEL_UNBIND_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RFIC����NV��,ͨ��BAND��������
*****************************************************************************/
typedef struct
{
    VOS_UINT16          uhwMipiUnbindEn;                                         /* MIPI�ǰ�ʹ�� */
    VOS_UINT16          uhwMipiCh0Select;                                        /* MIPIͨ��0ѡ�� */
    VOS_UINT16          uhwMipiCh1Select;                                        /* MIPIͨ��1ѡ�� */
    VOS_UINT16          uhwAfcCh0Select;                                         /* AFCͨ��0ѡ�� */
    VOS_UINT16          uhwAfcCh1Select;                                         /* AFCͨ��1ѡ�� */
    VOS_UINT16          uhwAptCh0Select;                                         /* APTͨ��0ѡ�� */
    VOS_UINT16          uhwAptCh1Select;                                         /* APTͨ��1ѡ�� */
    VOS_UINT16          uhwPmuCh0Select;                                         /* PMUͨ��0ѡ�� */
    VOS_UINT16          uhwPmuCh1Select;                                         /* PMUͨ��1ѡ�� */
    VOS_UINT16          uhwAbbTxCh0Select;                                       /* ABB TXͨ��0ѡ��,6363ʹ�� */
    VOS_UINT16          uhwAbbTxCh1Select;                                       /* ABB TXͨ��1ѡ�� 6363ʹ��*/

}UCOM_NV_CHANNEL_UNBIND_CONFIG_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_MIPI_NOTCH_ADDRESS_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : mipi NOTCH �Ĵ�����ַ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwNotchMipiNum;                                     /* Nothc Mipi�����ָ�����uhwNotchControlMode=2����3ʱ��Ч */
    VOS_UINT16                              auhwNotchMipiCmd[UCOM_NV_MAX_MIPI_ANT_CMD_NUMBER];   /* Nothc MipiCmd��uhwNotchControlMode=2����3ʱ��Ч */
}UCOM_NV_GSM_MIPI_NOTCH_ADDRESS_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_MIPI_NOTCH_CTRL_WORD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : mipi NOTCH �Ĵ���������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              auhwNotchMipiData[UCOM_NV_MAX_MIPI_ANT_CMD_NUMBER];     /* Nothc MipiData��uhwNotchControlMode=2����3ʱ��Ч */
}UCOM_NV_GSM_MIPI_NOTCH_CTRL_WORD_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_NOTCH_POWER_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :  NOTCH POWER COMP
*****************************************************************************/
typedef struct
{
    VOS_INT16                               shwNotchPowerThreshold;             /* Notch���书�ʴ��ڸ�ֵʱ�����з��书�ʲ��� */
    VOS_INT16                               shwNotchPowerComp;                  /* Notch���书�ʲ���ֵ */
}UCOM_NV_GSM_NOTCH_POWER_COMP_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_NOTCH_CHAN_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ���߿����˲���ͨ���Ŀ���
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwNotchSupportFlag;                /* DCS1800 TX NOTCH����֧�ֱ�־��1��ʾ֧�֣�0��ʾ��֧�� */
    VOS_UINT16                              uhwNotchControlMode;                /* NOTCH���Ʒ�ʽ:1��ʾGPIOģʽ��2��ʾMipi��ʽ��3��ʾGPIO+MIPI��Ϸ�ʽ */
    VOS_UINT32                              uwNotchGpioValue;                   /* Nothc GPIO����ֵ��uhwNotchControlMode=1����3ʱ��Ч */
    VOS_UINT32                              uwNotchGpioDefaultValue;            /* �߿�Ĭ��ֵ*/
    UCOM_NV_GSM_MIPI_NOTCH_ADDRESS_STRU     stNotchMipiCmd;                     /* ����NOTCHͨ��MIPI�ӿڿ��Ƶ�ַ */
    UCOM_NV_GSM_MIPI_NOTCH_CTRL_WORD_STRU   stNotchMipiCtrlWord;                /* ����NOTCHͨ��MIPI�ӿڿ����� */
    UCOM_NV_GSM_NOTCH_POWER_COMP_STRU       stNotchPowerComp;                   /* Notch���书�ʲ��� */
}UCOM_NV_GSM_NOTCH_CHAN_CTRL_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_SYS_MODEM_DFS_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DFS����NV��,��̬��Ƶ����,ֻ�޸ĺ���V7R2��V9R1
*****************************************************************************/
typedef struct
{
    VOS_UINT32          uwDdrFreq;                                        /* DDRƵ������(��λKHz)  */
    VOS_UINT32          uwCcpuFreq;                                       /* CCPUƵ������(��λKHz) */
    VOS_UINT32          uwBusFreq;                                        /* ����Ƶ������(��λKHz) */

}UCOM_NV_SYS_MODEM_DFS_CONFIG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_MODEM_DFS_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DFS����NV��,ֻ�޸ĺ���V7R2��V9R1
*****************************************************************************/
typedef struct
{
    UCOM_NV_SYS_MODEM_DFS_CONFIG_STRU          stCsCfg;                                          /* ����ģʽ��Profile����ֵ */
    UCOM_NV_SYS_MODEM_DFS_CONFIG_STRU          stDrxCfg;                                         /* ����ģʽ��Profile����ֵ */
    UCOM_NV_SYS_MODEM_DFS_CONFIG_STRU          stFachCfg;                                        /* FACH̬��Profile����ֵ */
    UCOM_NV_SYS_MODEM_DFS_CONFIG_STRU          stHspaCfg;                                        /* HSPA����ҵ��ģʽ��Profile����ֵ */
    UCOM_NV_SYS_MODEM_DFS_CONFIG_STRU          stR99PsCfg;                                       /* R99����ҵ��ģʽ��Profile����ֵ */
    UCOM_NV_SYS_MODEM_DFS_CONFIG_STRU          stSlaveWorkCfg;                                   /* ��ģ����״̬��Profile����ֵ */
    UCOM_NV_SYS_MODEM_DFS_CONFIG_STRU          stSlaveSleepCfg;                                  /* ��ģ˯��״̬��Profile����ֵ */
    UCOM_NV_SYS_MODEM_DFS_CONFIG_STRU          stMinCfg;                                         /* ��С��Profile����ֵ */

}UCOM_NV_W_MODEM_DFS_CONFIG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_CS_INTRA_STEP23_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��Ƶ������С����������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwCsStep23SlotNum;                 /* DRX̬��Ƶ������С������step23��ʱ϶ͷ��������ʼֵΪ1 */
    VOS_UINT16                              uhwCsStep23Period;                  /* DRX̬��Ƶ������С���������ڣ���ʼֵΪ3072֡����30.72s */
}UCOM_NV_W_CS_INTRA_STEP23_PARA_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_QPC_REGDEFAULT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : QPC NV��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                      uhwDefaultCloseTime;                 /* Ĭ�Ϲر�ʱ��     Ĭ��80(��λ ֡)��0����QPCδʹ�� */
    VOS_UINT16                      uhwDefaultGuardTime;                 /* Ĭ�ϱ�������ʱ�� Ĭ��20(��λ ֡) */
    VOS_UINT16                      uhwDefaultOpenTime;                 /* Ĭ�����ݴ���ʱ�� Ĭ��40(��λ ֡) */

    VOS_UINT16                      uhwReserve;
}UCOM_NV_QPC_REGDEFAULT_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_G_MODEM_DFS_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DFS����NV��,ֻ�޸ĺ���V7R2��V9R1
*****************************************************************************/
typedef struct
{
    UCOM_NV_SYS_MODEM_DFS_CONFIG_STRU          stCsCfg;                                          /* ����ҵ��ģʽ��Profile����ֵ */
    UCOM_NV_SYS_MODEM_DFS_CONFIG_STRU          stPsCfg;                                          /* ����ҵ��ģʽ��Profile����ֵ */
    UCOM_NV_SYS_MODEM_DFS_CONFIG_STRU          stDrxCfg;                                         /* ����ģʽ��Profile����ֵ */
    UCOM_NV_SYS_MODEM_DFS_CONFIG_STRU          stTuningCfg;                                      /* tuning dch״̬��Profile����ֵ */
    UCOM_NV_SYS_MODEM_DFS_CONFIG_STRU          stSearchingCfg;                                   /* ����ģʽ������ֵ */
    UCOM_NV_SYS_MODEM_DFS_CONFIG_STRU          stSlaveWorkCfg;                                   /* ��ģ����״̬��Profile����ֵ */
    UCOM_NV_SYS_MODEM_DFS_CONFIG_STRU          stSlaveSleepCfg;                                  /* ��ģ˯��״̬��Profile����ֵ */
    UCOM_NV_SYS_MODEM_DFS_CONFIG_STRU          stMinCfg;                                         /* ��С��Profile����ֵ */

}UCOM_NV_G_MODEM_DFS_CONFIG_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_TX_ANT_SWITCH_GPIO_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : TX ANT SWITCH����չ������rf band configһ��ʹ�ã������߿�����ֵ��ʱ����Ч��
*****************************************************************************/
typedef struct
{
    VOS_UINT32                                  uwGpio;                         /* ��Ӧǰ���߿� */
    VOS_UINT32                                  uwResvered;
}UCOM_NV_GSM_TX_ANT_SWITCH_GPIO_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_PHASE_ERROR_STANDARD_MODE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : CMUʹ��standardģʽ����gmsk phase errorʱ����Ҫ���ô�NV��Ϊ1��
*****************************************************************************/
typedef struct
{
    VOS_UINT16          uhwMode;                                                /* CMUʹ��standardģʽ����gmsk phase errorʱ����Ҫ���ô�NV��Ϊ1 */
}UCOM_NV_GSM_PHASE_ERROR_STANDARD_MODE_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RF_INTERFERE_CONTROL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����TDS/LTE�����߿���,Ŀ���Ǳ���B39��B3H�ĸ���
*****************************************************************************/
typedef struct
{
    VOS_UINT16                                  uhwFuncOn;                      /* 0-��ʹ�ܣ�1-ʹ�� */
    VOS_UINT32                                  uwGpioMask;                     /* �߿���� */
    VOS_UINT32                                  uwGpioRxValue;                  /* �ر�TDS/LTE������߿� */
    VOS_UINT32                                  uwGpioDefaultValue;             /* TDS/LTE������߿�Ĭ��ֵ */
}UCOM_NV_GSM_RF_INTERFERE_CONTROL_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_PA_MIPI_CMD_FRAME_STRU
 Э����  :
 �ṹ˵��  : PA������֡�����֧��8��,uhwNormalNum��ʾ��ǰ�ͺ�
             PA����Ҫ���õķ���չ�Ĵ���������uhwExtendedNum��ʾ��ǰ�ͺ�PA
             ����Ҫ���õ���չ�Ĵ�����������չ���õļĴ����϶��������ģ�������֮
             ��ӦС�ڵ���8������չ���õļĴ�����Ҫд�����������չ���õļĴ�
             ��ֻ��Ҫд��ַ�ȿɡ�
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwNormalNum;
    VOS_UINT16                              uhwExtenedNum;
    VOS_UINT16                              auhwCmdFrame[UCOM_NV_PA_MIPI_CMD_MAX_NUM];
}UCOM_NV_PA_MIPI_CMD_FRAME_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_PA_MIPI_DATA_FRAME_STRU
 Э����  :
 �ṹ˵��  : PAĬ���������ݣ����֧��8��,��ӦCmdFrame,������ʽͬCmdFrame
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              auhwDataFrame[UCOM_NV_PA_MIPI_DATA_MAX_NUM];
}UCOM_NV_PA_MIPI_DATA_FRAME_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_DSDS_PS_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : V8R1 DSDS����NV���������DSDSģʽ��GSM����������RCM����RF��Դʱ��������ռ����
*****************************************************************************/
typedef struct
{
    VOS_UINT32                                  uwPsPrmptPeriod;                /* PS���޳��������ռͳ�����ڣ���λ32Kϵͳʱ��CLK������Ĭ��ֵ:0x1fffffff */
    VOS_UINT32                                  uwPsPrmptTimeThd;               /* PS���޳����񵥴α���ռʱ�����ޣ���λ32Kϵͳʱ��CLK������Ĭ��ֵ:0x1fffffff */
    VOS_UINT32                                  uwPsTotalPrmptTimeThd;          /* PS���޳������������ۼƱ���ռʱ�����ޣ���λ32Kϵͳʱ��CLK������Ĭ��ֵ:0x1fffffff */
    VOS_UINT32                                  uwReserved1;                    /* ����1 */
    VOS_UINT16                                  uhwReserved2;                   /* ����2 */
    VOS_UINT16                                  uhwReserved3;                   /* ����3 */
}UCOM_NV_GSM_DSDS_PS_CONFIG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_PHY_MODE_DSDS_FLAG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : V8R1 DSDS����NV��,�������������Ϊ0��˫���������������DSDA��DSDS
*****************************************************************************/
typedef struct
{
    VOS_UINT16                                 uhwGsmDsdsFlag;                  /* ������������Ϊ0��˫�������� 0:����DSDA,1:����DSDS */
    VOS_UINT16                                 uhwWcdmaDsdsFlag;                /* ������������Ϊ0��˫�������� 0:����DSDA,1:����DSDS */
    VOS_UINT16                                 uhwRsvDsdsFlag;                  /* ���� */
}UCOM_NV_PHY_MODE_DSDS_FLAG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_ANT_SHARE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ������ʹ�ܱ�־
*****************************************************************************/
typedef struct
{
    VOS_UINT16                                  uhwAntShareEn;                  /* 0-��֧��; 1-֧�� */
}UCOM_NV_ANT_SHARE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_CLOSE_ANT_MIPI_CTRL_WORD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : �ر�����Mipi������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                                  uhwCloseAntEn;                  /* �ر�����ʹ�� */
    UCOM_NV_WG_MIPI_ANT_CMD_ADDRESS_STRU        stCloseAntMipiAddress;          /* Mipi���Ƶ�ַ */
    UCOM_NV_WG_MIPI_ANT_CTRL_WORD_STRU          stCloseAntMipiCtrlWord;         /* Mipi������ */
}UCOM_NV_GSM_CLOSE_ANT_MIPI_CTRL_WORD_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_CLOSE_ANT_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : �ر����߿��ص��߿����ú�MIPI����
*****************************************************************************/
typedef struct
{
    UCOM_NV_RF_CONFIG_STRU                      stGsmCloseAntRfConfig;          /* �ر������߿����� */
    UCOM_NV_GSM_CLOSE_ANT_MIPI_CTRL_WORD_STRU   stGsmCloseAntMipiCtrlWord;      /* �ر�����Mipi������ */
}UCOM_NV_GSM_CLOSE_ANT_CONFIG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_VIRTUAL_BAND_ANT_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����Ƶ�ε����߿�������
*****************************************************************************/
typedef struct
{
    UCOM_NV_RF_CONFIG_STRU                      stGsmVirtualBandRfConfig;       /* ����Ƶ�ε����߿������� */
}UCOM_NV_GSM_VIRTUAL_BAND_ANT_CONFIG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_PHY_MODE_DSDS_FLAG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : V8R1 DSDS����NV��,���е��������˲�ʹ��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                                 uhwGsmTxLpfEn;                   /* ���е��������˲�ʹ�� 0:����ʹ��,1:����ʹ�� */
    VOS_UINT16                                 uhwRsv;                          /* ���� */
}UCOM_NV_GSM_TX_LPF_EN_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_TAS_CTRL_WORD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GSM˫�����л�GPIO������
*****************************************************************************/
typedef struct
{
    VOS_UINT32                           uwGsmAntThroughCtrlWord;               /* �����ߵ�GPIO������ */
    VOS_UINT32                           uwGsmAntSwapCtrlWord;                  /* �����ߵ�GPIO������ */
    VOS_UINT32                           uwGsmDualAntClearMask;                 /* ���߿���������� */
}UCOM_NV_GSM_TAS_CTRL_WORD_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_PRI_ANT_ESTIMATE_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ˫�����л����������������׶β���
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwGsmAntEstimatePeriodNum;         /* ͳ�����ڸ��� */
    VOS_INT16                               shwGsmAntEstimatePowerCmpThreshold; /* �����о����� */
}UCOM_NV_GSM_PRI_ANT_ESTIMATE_PARA_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_DUAL_ANT_COMPARE_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ˫�����л��������������ȽϽ׶β���
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              uwGsmAntCompareCollectTime;         /* �ɼ�ʱ�� */
    VOS_UINT16                              uhwGsmAntCompareFirstPeriodNum;     /* ״̬1��ͳ�����ڸ��� */
    VOS_UINT16                              uhwGsmAntCompareSecondPeriodNum;    /* ״̬2��ͳ�����ڸ��� */
    VOS_UINT16                              uhwGsmAntCompareThirdPeriodNum;     /* ״̬3��ͳ�����ڸ��� */
    VOS_INT16                               shwGsmAntCompareFirstPowerCmpThreshold;  /* ״̬1�������о����� */
    VOS_INT16                               shwGsmAntCompareSecondPowerCmpThreshold; /* ״̬2�������о����� */
    VOS_INT16                               shwGsmAntCompareThirdPowerCmpThreshold;  /* ״̬3�������о����� */
}UCOM_NV_GSM_DUAL_ANT_COMPARE_PARA_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_DUAL_ANT_CS_DCH_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : CS_DCH˫�����л�����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwGsmDualAntAlphaPara;             /* ˫�����л�ƽ���˲�ϵ�� */
    VOS_UINT16                              uhwRsv;
    UCOM_NV_GSM_PRI_ANT_ESTIMATE_PARA_STRU  stGsmPriAntEstimatePara;            /* ˫�����л����������������׶β��� */
    UCOM_NV_GSM_DUAL_ANT_COMPARE_PARA_STRU  stGsmDualAntComparePara;            /* ˫�����л��������������ȽϽ׶β��� */
    VOS_UINT32                              uwGsmAntHandleDelayPara;            /* ˫�����л���ĳ��Ͳ��� */
}UCOM_NV_GSM_DUAL_ANT_CS_DCH_PARA_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_DUAL_ANT_ACCESS_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ACCESS̬˫�����л�����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwRaCntThreshold;                  /* RA�������� */
    VOS_UINT16                              uhwRsv;
}UCOM_NV_GSM_DUAL_ANT_ACCESS_PARA_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_DUAL_ANT_IDLE_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : IDLE̬˫�����л�����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwC1FailCntThreshold;              /* C1_fail�¼��о��������� */
    VOS_UINT16                              uhwC1PassCntThreshold;              /* C1_pass�¼��о��������� */
}UCOM_NV_GSM_DUAL_ANT_IDLE_PARA_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_TAS_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ˫�����л�����
*****************************************************************************/
typedef struct
{
    VOS_INT16                               shwSignalPoorThreshold;             /* �ϱ�RCM�ź�POOR���� */
    VOS_INT16                               shwSignalGoodThreshold;             /* �ϱ�RCM�ź�GOOD���� */
    UCOM_NV_GSM_DUAL_ANT_CS_DCH_PARA_STRU   stGsmDualAntCsDchPara;              /* ˫�����л�CSDCH���� */
    UCOM_NV_GSM_DUAL_ANT_ACCESS_PARA_STRU   stGsmDualAntAccessPara;             /* ˫�����л�ACCESS���� */
    UCOM_NV_GSM_DUAL_ANT_IDLE_PARA_STRU     stGsmDualAntIdlePara;               /* ˫�����л�IDLE���� */
}UCOM_NV_GSM_TAS_PARA_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_PCH_DUMMY_DETECT_FLAG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : V8R1 dummy_pch�����ƽṹ��flag=0ʱ ������dummyPch��� =1ʱ������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwGsmPchDummyDetectFlag;           /* dummy_pch��⿪����־λ */

}UCOM_NV_GSM_PCH_DUMMY_DETECT_FLAG_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_DRX_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GSM����ģDRX����
*****************************************************************************/
typedef struct
{
    UCOM_NV_DRX_CTRL_ENUM_UINT16       enMasterDrxEnableFlag;               /* ��ģ����˯�� */
    UCOM_NV_DRX_CTRL_ENUM_UINT16       enSlaveDrxEnableFlag;                /* ��ģ����˯�� */
}UCOM_NV_GSM_DRX_CTRL_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_MIPI_PA_ENABLE_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : TX PA CTRL
*****************************************************************************/
typedef struct
{
    UCOM_NV_WG_MMMBPA_CMD_ADDRESS_STRU          stGsmMipiPaEnAddress;           /* mipi pa ʹ�ܿ��Ƶ�ַ */
    UCOM_NV_WG_MMMBPA_GAIN_CTRL_WORD_STRU       stGsmMipiPaEnCtrlWord;          /* mipi pa ʹ�ܿ����� */
}UCOM_NV_GSM_MIPI_PA_ENABLE_CTRL_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_RF_RX_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :2.1��ʾ֧�ֵ�3G��2GƵ�Ρ�3G�ּ�֧�������ÿ��Ƶ����RF
            ͨ����Ӧ��ϵ���߿����л�ѡ��DBB��3GPA�Ŀ���
*****************************************************************************/
typedef struct
{

    VOS_UINT16                          uhwRfSsiChannel;                    /* RFICѡ��*/

    VOS_UINT16                          uhwRfOutPortGroup;                     /* RFIC������ּ�ͨ��ѡ��*/

    VOS_UINT16                          uhwRfMainPort;                          /* RFIC����������ڶ˿�ѡ��*/

    VOS_UINT16                          uhwAbbChannel;                      /* ABBͨ��ѡ�� */

    VOS_UINT16                          uhwAbbMainPath;                         /* ABBͨ���ڣ����ּ�·��ѡ��*/

    VOS_UINT16                          uhwMixerSel;                        /* Mixerѡ��ͨ��ѡgroup��ʵ��*/

    VOS_UINT16                          uhwPllSel;                          /* PLLѡ�� */

    VOS_UINT16                          uhwReserved;

}UCOM_NV_RF_RX_CONFIG_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_RF_TX_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :2.1��ʾ֧�ֵ�3G��2GƵ�Ρ�3G�ּ�֧�������ÿ��Ƶ����RF
            ͨ����Ӧ��ϵ���߿����л�ѡ��DBB��3GPA�Ŀ���
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwAbbChannel;                      /* ABBͨ��ѡ�� */

    VOS_UINT16                          uhwRfSsiChannel;                    /* RFICѡ��*/

    VOS_UINT16                          uhwFbPin;                           /* RFIC��Tx�󶨣�FB Band pin,0:FB1,1:FB2 */

    VOS_UINT16                          uhwReserved;
}UCOM_NV_RF_TX_CONFIG_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_RF_TRX_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :2.1��ʾ֧�ֵ�3G��2GƵ�Ρ�3G�ּ�֧�������ÿ��Ƶ����RF
            ͨ����Ӧ��ϵ���߿����л�ѡ��DBB��3GPA�Ŀ���
*****************************************************************************/
typedef struct
{
    UCOM_NV_RF_RX_CONFIG_STRU           stRfRxConfig;

    UCOM_NV_RF_TX_CONFIG_STRU           stRfTxConfig;

}UCOM_NV_RF_TRX_CONFIG_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RX_IQ_MISMATCH_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : GSM�������У�����ӣ���λУ������
             ��������ʱ�����˲������ø�DBB����RXͨ������Ԥ�������ֲ�����ͨ��
             ��IQ mismatch��
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwAmplitude;                           /* ���У�����ӣ�+-511 */
    VOS_INT16                           shwPhase;                               /* ��λУ�����ӣ�+-1023 */
}UCOM_NV_GSM_RX_IQ_MISMATCH_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_HD3_HD5_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :���һ�����HD3/HD5У׼ֵ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwBr;                                  /* HD3У׼ֵʵ�� */
    VOS_INT16                           shwBi;                                  /* HD3У׼ֵ�鲿 */
    VOS_INT16                           shwCr;                                  /* HD5У׼ֵʵ�� */
    VOS_INT16                           shwCi;                                  /* HD5У׼ֵ�鲿 */
}UCOM_NV_GSM_HD3_HD5_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_HD3_HD5_PCL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :���һ��Ƶ���HD3/HD5У׼ֵ
*****************************************************************************/
typedef struct
{
    /* �ֱ���Max_PCL��Max_PCL+1��Max_PCL+2�������ʵȼ���HD3/HD5У׼��� */
    UCOM_NV_GSM_HD3_HD5_STRU            astPclHd3Hd5[UCOM_NV_GSM_TX_HD35_PCL_NUM];
}UCOM_NV_GSM_HD3_HD5_PCL_STRU;



/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_TX_HD3_HD5_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :���һ��Ƶ�ε�HD3/HD5У׼ֵ
            Br = 1/(A^2) ��(AΪ�����źŵĸ����ֵ)���㷨���ж��㻯��ʽ���£�
            ��������źŵ�RMSֵΪ282mv�������ֵA = 282*sqrt(2)mv
            ����HD3��Br =1/(A^2)=2^11/((0.282*��2)^2)=12877
            ����HD5��Cr =1/(A^4)=2^8/((0.282*��2))^4)=10121
*****************************************************************************/
typedef struct
{

    VOS_UINT16                          auhwArfcn[UCOM_NV_GSM_TX_HD35_ARFCN_NUM];           /* �źŵ��и�����Ƶ��,����Ƶ�� */
    VOS_UINT16                          uhwReserved;
    UCOM_NV_GSM_HD3_HD5_PCL_STRU        astChannelHd3Hd5[UCOM_NV_GSM_TX_HD35_ARFCN_NUM];    /* �ֱ��ŵ͡��С�������Ƶ���У׼��� */

}UCOM_NV_GSM_TX_HD3_HD5_STRU;





/*****************************************************************************
 �ṹ��    : UCOM_NV_TX_IQ_SELF_CAL_6362_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :Tx ��У׼NV
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwTxLoLeakageDciFixed;                 /*У׼Lo Leakageʱ�����õ�I·ֱ��ֵ*/

    VOS_UINT16                          uhwTxIqMismatchCalCntMax;               /*IQ Mismatch���У׼����*/

    VOS_UINT32                          uwTxLoLeakageCorrErrThrd;               /*У׼Lo Leakageʱ���ʧ������*/

    VOS_UINT32                          uwTxIqMismatchIrStopThrd;               /*IQ MismatchУ׼ֹͣ����*/

    VOS_UINT32                          uwTxIqMismatchIrFailThrd;               /*IQ MismatchУ׼ʧ������*/

}UCOM_NV_TX_IQ_SELF_CAL_6362_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_HD35_FIX_DATA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :���һ��Ƶ�ε�HD3/HD5У׼ֵ
            Br = 1/(A^2) ��(AΪ�����źŵĸ����ֵ)���㷨���ж��㻯��ʽ���£�
            ��������źŵ�RMSֵΪ282mv�������ֵA = 282*sqrt(2)mv
            ����HD3��Br =1/(A^2)=2^11/((0.282*��2)^2)=12877
            ����HD5��Cr =1/(A^4)=2^8/((0.282*��2))^4)=10121
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwHd3FixedBrValue;                     /* Ĭ��ֵ10877 ����˵�����ṹ��ע�� */
    VOS_INT16                           shwHd5FixedCrValue;                     /* Ĭ��ֵ12877 ����˵�����ṹ��ע�� */
    VOS_UINT32                          uwHd3JudgeThd;                          /* Ĭ��ֵ1 �㷨˵�������  */
    VOS_UINT32                          uwHd5JudgeThd;                          /* Ĭ��ֵ3725 �㷨˵������� */

}UCOM_NV_GSM_HD35_FIX_DATA_STRU;



/*****************************************************************************
 �ṹ��    : UCOM_NV_RF_VERSION_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :RF�汾��NV��
*****************************************************************************/
typedef struct
{

    VOS_UINT32                          uwRfVersion;                            /* 0:RF6361;1:RF6362 */
}UCOM_NV_RF_VERSION_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_RF_CTRL_PORT_SEL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RFIC����NV��,ͨ��BAND��������
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwAfcPortSelect    :4;                                    /* AFC�˿�ѡ�� */
    VOS_UINT32                          uwAptPortSelect    :4;                                    /* APT�˿�ѡ�� */
    VOS_UINT32                          uwRampPortSelect   :4;                                    /* PMU�˿�ѡ�� */
    VOS_UINT32                          uwReserved         :20;                                    /* ���� */
}UCOM_NV_RF_CTRL_PORT_SEL_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_OPTIMIZE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : Gģ�Ż��ṹ��ר��̬�����Ż����ƽṹ��flag=0ʱ ������Ĭ��ʹ��ԭ�з�����flag=1ʱ������
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwGsmDchFastSrchFlag   :1;              /* ר��̬�����Ż�������־λ lag=0ʱ ������Ĭ��ʹ��ԭ�з�����flag=1ʱ���� */
    VOS_UINT32                          uwGsmBchFast101Flag    :1;              /* ����״̬�¿���101�ı�־λ */
    VOS_UINT32                          uwGsmCellFastSrchFlag  :1;              /* ���������Ż� */
    VOS_UINT32                          uwGsmBchPageRptFlag    :1;              /* ����̬Ѱ����Ϣ�Ƿ��ϱ�GAS�Ŀ���;1-�������ϱ�;0-�⵽������Ϣ�ϱ� */
    VOS_UINT32                          uwReserved2            :28;
}UCOM_NV_GSM_OPTIMIZE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_FEATURE_XPASS_EN_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : XPASS��������ʹ��NV��0Ϊ�رգ�1Ϊ��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                         uhwXpassEnFlag;                          /* XPASS��������ʹ��NV��0Ϊ�رգ�1Ϊ�� */
    VOS_UINT16                         uhwReserve;
}UCOM_NV_GSM_FEATURE_XPASS_EN_STRU;

/*****************************************************************************
  6 UNION
*****************************************************************************/


/*****************************************************************************
  7 Extern Global Variable
*****************************************************************************/


/*****************************************************************************
  8 Fuction Extern
*****************************************************************************/


/*****************************************************************************
  9 OTHERS
*****************************************************************************/







#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif



#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif


#endif /* end of PhyNvDefine.h */


