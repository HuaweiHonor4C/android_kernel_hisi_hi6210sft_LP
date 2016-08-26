/******************************************************************************

                  ��Ȩ���� (C), 2001-2013, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : AtTypeDef.h
  �� �� ��   : ����
  ��    ��   :
  ��������   : 2013��4��28��
  ����޸�   :
  ��������   : AT������ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2013��4��28��
    ��    ��   :
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __ATTPYEDEF_H__
#define __ATTPYEDEF_H__

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "vos.h"
#include "om.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/
#ifndef __AT_DISABLE_OM__
#define AT_INFO_LOG(String)            PS_LOG(WUEPS_PID_AT, 0, PS_PRINT_INFO, String)
#define AT_NORM_LOG(String)            PS_LOG(WUEPS_PID_AT, 0, PS_PRINT_NORMAL, String)
#define AT_NORM_LOG1(String,Para1)     PS_LOG1(WUEPS_PID_AT, 0, PS_PRINT_NORMAL, String, (TAF_INT32)Para1)
#define AT_WARN_LOG(String)            PS_LOG(WUEPS_PID_AT, 0, PS_PRINT_WARNING, String)
    /* Added by f62575 for AT Project 2011-10-04,  Begin */
#define AT_WARN_LOG1(String,Para1)     PS_LOG1(WUEPS_PID_AT, 0, PS_PRINT_WARNING, String, (TAF_INT32)Para1)
    /* Added by f62575 for AT Project 2011-10-04,  End */
#define AT_ERR_LOG(String)             PS_LOG(WUEPS_PID_AT, 0, PS_PRINT_ERROR, String)
#define AT_ERR_LOG1(String, Para1)     PS_LOG1(WUEPS_PID_AT, 0, PS_PRINT_ERROR, String, (VOS_INT32)Para1)
#define AT_LOG1(String, Para1)         PS_LOG1(WUEPS_PID_AT, 0, PS_PRINT_INFO, String, (TAF_INT32)Para1)
#else
#define AT_INFO_LOG(String)
#define AT_NORM_LOG(String)
#define AT_WARN_LOG(String)
#define AT_ERR_LOG(String)
#define AT_LOG1(String, Para1)
#endif

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
/*================================USER TYPE Begin================================*/

enum AT_USER_TYPE_ENUM
{
    AT_USBCOM_USER                      = 0,
    AT_COM_USER                         = 3,
    AT_MODEM_USER                       = 4,
    AT_IPCCOM_USER                      = 6,
    AT_NDIS_USER                        = 7,
    AT_CTR_USER                         = 8,
    AT_APP_USER                         = 9,
    AT_SOCK_USER                        = 10,
    AT_APP_SOCK_USER                    = 11,
    AT_UART_USER                        = 12,
    AT_HSIC1_USER                       = 13,
    AT_HSIC2_USER                       = 14,
    AT_HSIC3_USER                       = 15,

    /* Added by L47619 for V7R1C50 A-GPS Project, 2012/06/28, begin */
    AT_HSIC4_USER                       = 16,
    /* Added by L47619 for V7R1C50 A-GPS Project, 2012/06/28, end */

    /* Added by L60609 for MUX��2012-08-03,  Begin */
    AT_MUX1_USER                        = 17,
    AT_MUX2_USER                        = 18,
    AT_MUX3_USER                        = 19,
    AT_MUX4_USER                        = 20,
    AT_MUX5_USER                        = 21,
    AT_MUX6_USER                        = 22,
    AT_MUX7_USER                        = 23,
    AT_MUX8_USER                        = 24,
    /* Added by L60609 for MUX��2012-08-03,  End */

    AT_HSUART_USER                      = 25,

    AT_BUTT_USER                        = 0xff
};
typedef VOS_UINT8 AT_USER_TYPE;

/*================================USER TYPE End================================*/

typedef VOS_UINT8 AT_MODE_TYPE;
#define AT_CMD_MODE                     (0)
#define AT_DATA_MODE                    (1)
#define AT_ONLINE_CMD_MODE              (2)

typedef VOS_UINT8 AT_IND_MODE_TYPE;
#define AT_IND_MODE                     (0)
#define AT_NO_IND_MODE                  (1)

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

#endif /* end of AtTypeDef.h */
