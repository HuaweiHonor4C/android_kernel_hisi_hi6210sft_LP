/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : AtDeviceCmd.h
  �� �� ��   : ����
  ��    ��   : f62575
  ��������   : 2012��1��2��
  ����޸�   :
  ��������   : AtDeviceCmd.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2012��1��2��
    ��    ��   : f62575
    �޸�����   : �����ļ�

******************************************************************************/
#ifndef _ATDEVICECMD_H_
#define _ATDEVICECMD_H_

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "v_typdef.h"
/* Added by f62575 for B050 Project, 2012-2-3, begin   */
#include "ATCmdProc.h"
/* Added by f62575 for B050 Project, 2012-2-3, end */

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/
/*����ʹ�õļ��ܽṹ*/
/* Added by f62575 for SMALL IMAGE, 2012-1-3, begin */

/* WIFI KEY�ַ������ȣ���NVIMģ��Ipcom_parameters_handle.h�ļ��� NV_WLKEY_LEN ����һ�� */
#define AT_NV_WLKEY_LEN                 (27)

/* ��Ȩģʽ�ַ������ȣ���NVIMģ��Ipcom_parameters_handle.h�ļ��� NV_WLAUTHMODE_LEN ����һ�� */
#define AT_NV_WLAUTHMODE_LEN            (16)

/* ����ģʽ�ַ������ȣ���NVIMģ��Ipcom_parameters_handle.h�ļ��� NV_ENCRYPTIONMODES_LEN ����һ�� */
#define AT_NV_ENCRYPTIONMODES_LEN       (5)

/* WPA�������ַ������ȣ���NVIMģ��Ipcom_parameters_handle.h�ļ��� NV_WLWPAPSK_LEN ����һ�� */
#define AT_NV_WLWPAPSK_LEN              (65)

/* NV��50012�����ݽṹnv_wifisec_type WIFI KEY��������ݳ��� */
#define AT_NV_WIFISEC_OTHERDATA_LEN     (72)

/* �����֧�ֵ�WIFI KEY���� */
#define AT_WIWEP_CARD_WIFI_KEY_TOTAL    (4)

/* Add by z60575 for multi_ssid, 2012-9-5 begin */
/* ��λ��֧�ֵ�WIFI KEY���� */
#define AT_WIWEP_TOOLS_WIFI_KEY_TOTAL   (16)
/* Add by z60575 for multi_ssid, 2012-9-5 end */

/* PHYNUM�������������MAC������ų��� */
#define AT_PHYNUM_MAC_LEN               (12)

/* PHYNUM�������������MAC���������^WIFIGLOBAL����ƥ����Ҫ���ӵ�ð�Ÿ��� */
#define AT_PHYNUM_MAC_COLON_NUM         (5)

#define AT_TSELRF_PATH_TOTAL            (4)

#define AT_WIFIGLOBAL_MAC_LEN_BETWEEN_COLONS   (2)                             /* MAC��ַ��ð��֮����ַ�����*/

/* Added by f62575 for SMALL IMAGE, 2012-1-3, end   */

#if(FEATURE_ON == FEATURE_UE_MODE_TDS)
#define AT_TDS_SCALIB_STR (VOS_UINT8 *)"(\"CACHE\",\"USE\",\"SAVE\",\"GET\",\"READ\",\"INI\",\"BEGIN\",\"END\",\"SET\",\"\"),(\"APCOFFSETFLAG\",\"APCOFFSET\",\"APC\",\"APCFREQ\",\"AGC\",\"AGCFREQ\",\"\"),(1,5,6),(@pram)"
#define AT_TDS_SCALIB_TEST_STR "(CACHE,USE,SAVE,GET,READ,INI,BEGIN,END,SET),(APCOFFSETFLAG,APCOFFSET,APC,APCFREQ,AGC,AGCFREQ),(1,5,6),(DATA)"
#endif

#define BAND_WIDTH_NUMS 6

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
/*****************************************************************************
 ö����    : AT_TBAT_OPERATION_TYPE_ENUM
 �ṹ˵��  : ^TBAT�Ĳ�����Ŀ
             AT_TBAT_BATTERY_ANALOG_VOLTAGE         ���ģ���ѹ
             AT_TBAT_BATTERY_DIGITAL_VOLTAGE        ������ֵ�ѹ
             AT_TBAT_BATTERY_VOLUME                 ��ص���
  1.��    ��   : 2012��01��02��
    ��    ��   : f62575
    �޸�����   : ����
*****************************************************************************/
enum AT_TBAT_OPERATION_TYPE_ENUM
{
    AT_TBAT_BATTERY_ANALOG_VOLTAGE      = 0,
    AT_TBAT_BATTERY_DIGITAL_VOLTAGE     = 1,
    AT_TBAT_BATTERY_VOLUME              = 2,
    AT_TBAT_OPERATION_TYPE_BUTT
};
typedef VOS_UINT32  AT_TBAT_OPERATION_TYPE_ENUM_UINT32;

/*****************************************************************************
 ö����    : AT_TBAT_OPERATION_DIRECTION_ENUM
 �ṹ˵��  : ^TBAT�Ĳ��Է���
            AT_TBAT_READ_FROM_UUT   �ӵ����(UUT)��ȡ
            AT_TBAT_SET_TO_UUT      ���õ������(UUT)
  1.��    ��   : 2012��01��02��
    ��    ��   : f62575
    �޸�����   : ����
*****************************************************************************/
enum AT_TBAT_OPERATION_DIRECTION_ENUM
{
    AT_TBAT_READ_FROM_UUT,
    AT_TBAT_SET_TO_UUT,
    AT_TBAT_OPERATION_DIRECTION_BUTT
};
typedef VOS_UINT32  AT_TBAT_OPERATION_DIRECTION_ENUM_UINT32;

/*****************************************************************************
 ö����    : AT_TSELRF_PATH_ENUM
 �ṹ˵��  : ^TSELRF����Ƶͨ·���
             AT_TSELRF_PATH_GSM       GSMͨ·������EDGE/GPRS/EGSM�ȵ�ȫ����
             AT_TSELRF_PATH_WCDMA_PRI WCDMA����
             AT_TSELRF_PATH_WCDMA_DIV WCDMA�ּ�
             AT_TSELRF_PATH_WIFI      WiFiͨ·
  1.��    ��   : 2012��01��02��
    ��    ��   : f62575
    �޸�����   : ����
*****************************************************************************/
enum AT_TSELRF_PATH_ENUM
{
    AT_TSELRF_PATH_GSM                  = 1,
    AT_TSELRF_PATH_WCDMA_PRI            = 2,
    AT_TSELRF_PATH_WCDMA_DIV            = 3,
    AT_TSELRF_PATH_TD					= 6,
    AT_TSELRF_PATH_WIFI                 = 7,
    AT_TSELRF_PATH_BUTT
};
typedef VOS_UINT32  AT_TSELRF_PATH_ENUM_UINT32;

/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/

/* ���� g_stATDislogPwd �е� DIAG�ڵ�״̬Ҫ���뱸��NV�б�; �����벻�ñ���
   �ʽ� g_stATDislogPwd �е��������, ��ʹ�����е� DIAG ��״̬;
   ���¶���NV��������������  */
extern VOS_INT8                         g_acATOpwordPwd[AT_OPWORD_PWD_LEN+1];
/* Added by f62575 for B050 Project, 2012-2-3, end   */


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
 �ṹ��    : AT_TBAT_BATTERY_ADC_INFO_STRU
 �ṹ˵��  : ^TBAT�������õ��У׼���������ݽṹ

  1.��    ��   : 2012��01��02��
    ��    ��   : f62575
    �޸�����   : ����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usMinAdc;
    VOS_UINT16                          usMaxAdc;
}AT_TBAT_BATTERY_ADC_INFO_STRU;

/*****************************************************************************
 �ṹ��    : AT_WIFISEC_WIWEP_INFO_STRU
 �ṹ˵��  : WIWEP�����������: WIFI KEY�����ݽṹ
             ucwlKeys������Ϊ�ַ����ͣ����ַ���������'\0'��Ϊ���ݽ���
  1.��    ��   : 2012��01��02��
    ��    ��   : f62575
    �޸�����   : ����
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           aucwlKeys[AT_NV_WLKEY_LEN];
}AT_WIFISEC_WIWEP_INFO_STRU;

/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/

VOS_UINT32 AT_SetTbatPara(VOS_UINT8 ucIndex);

VOS_UINT32 AT_QryTbatPara(VOS_UINT8 ucIndex);

VOS_UINT32 AT_SetPstandbyPara(VOS_UINT8 ucIndex);

VOS_UINT32 AT_SetWiwepPara(VOS_UINT8 ucIndex);

VOS_UINT32 AT_QryWiwepPara(VOS_UINT8 ucIndex);

VOS_UINT32 AT_TestWiwepPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_SetCmdlenPara(VOS_UINT8 ucIndex);

VOS_UINT32 AT_QryCmdlenPara(VOS_UINT8 ucIndex);

VOS_UINT32 AT_UpdateMacPara(
    VOS_UINT8                           aucMac[],
    VOS_UINT16                          usMacLength
);

VOS_UINT32 AT_SetTmodeAutoPowerOff(VOS_UINT8 ucIndex);

VOS_UINT32 AT_SetTseLrfPara(VOS_UINT8 ucIndex);

VOS_UINT32 AT_QryTseLrfPara(VOS_UINT8 ucIndex);

VOS_UINT32 AT_GetPhynumMac(VOS_UINT8 aucMac[]);

/* Added by f62575 for B050 Project, 2012-2-3, Begin   */
VOS_UINT32 AT_ExistSpecificPort(VOS_UINT8 ucPortType);

VOS_UINT32 AT_OpenDiagPort(VOS_VOID);
VOS_UINT32 AT_CloseDiagPort(VOS_VOID);
VOS_UINT32 AT_CheckSetPortRight(
    VOS_UINT8                           aucOldRewindPortStyle[],
    VOS_UINT8                           aucNewRewindPortStyle[]
);
/* Added by f62575 for B050 Project, 2012-2-3, end   */

VOS_UINT32 AT_TestHsicCmdPara(VOS_UINT8 ucIndex);

#if(FEATURE_ON == FEATURE_UE_MODE_TDS)
VOS_UINT32 At_TestTdsScalibPara(VOS_UINT8 ucIndex);
#endif

VOS_UINT32 AT_TestSimlockUnlockPara( VOS_UINT8 ucIndex );

/* Added by d00212987, 2013/06/29, begin */
VOS_UINT32 AT_SetNVReadPara(VOS_UINT8 ucClientId);
VOS_UINT32 AT_SetNVWritePara(VOS_UINT8 ucClientId);
/* Added by d00212987, 2013/06/29, end */

VOS_UINT32 AT_QryFPllStatusPara(VOS_UINT8 ucIndex);
VOS_VOID At_RfPllStatusCnfProc(PHY_AT_RF_PLL_STATUS_CNF_STRU *pstMsg);

VOS_UINT32 AT_QryFpowdetTPara(VOS_UINT8 ucIndex);
VOS_VOID At_RfFpowdetTCnfProc(PHY_AT_POWER_DET_CNF_STRU *pstMsg);

VOS_UINT32 AT_SetNvwrSecCtrlPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_RcvMtaNvwrSecCtrlSetCnf( VOS_VOID *pMsg );
VOS_UINT32 AT_QryNvwrSecCtrlPara(VOS_UINT8 ucIndex);
VOS_BOOL AT_IsNVWRAllowedNvId(VOS_UINT16 usNvId);




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

#endif /* end of AtDeviceCmd.h */
