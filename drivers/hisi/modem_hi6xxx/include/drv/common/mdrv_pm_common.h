#ifndef __MDRV_COMMON_PM_H__
#define __MDRV_COMMON_PM_H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "mdrv_om_common.h"
#if defined(CHIP_BB_HI6210)
#include "drv_tele_mntn.h"
#endif


struct mdrv_pm_profile
{
	unsigned int max_profile;
	unsigned int min_profile;
};
typedef enum tagPWC_COMM_MODEM_E
{
    PWC_COMM_MODEM_0 = 0,
    PWC_COMM_MODEM_1 = 1,
    PWC_COMM_MODEM_2 = 2,
    PWC_COMM_MODEM_BUTT
}PWC_COMM_MODEM_E;

typedef enum tagPWC_COMM_MODE_E
{
    PWC_COMM_MODE_GSM=0,
    PWC_COMM_MODE_WCDMA=1,
    PWC_COMM_MODE_LTE=2,
    PWC_COMM_MODE_TDS=3,
    PWC_COMM_MODE_CDMA=4,
    PWC_COMM_MODE_CDMA_RESERVED=5,
#if !defined(CHIP_BB_HI6210)
    PWC_COMM_MODE_LCIPHER=6,
#endif
    PWC_COMM_MODE_BUTT
}PWC_COMM_MODE_E;
/*ע��:ö������ʱ����PWC_COMM_MODEM_BUTT*PWC_COMM_MODE_BUTT > 32ʱ��Ҫ֪���ͶƱ����޸�ͶƱ����*/

enum PM_MOD_ID_ENUM
{
    PM_MOD_AP_OSA  =  OM_AP_OSA,
#if !defined(CHIP_BB_HI6210)
    PM_MOD_CP_OSA  =  OM_CP_OSA,
#else
    PM_MOD_CP_OSA  =  TELE_MNTN_OSA,
#endif
    PM_MOD_CP_MSP  =  OM_CP_MSP_SLEEP,
};

/*****************************************************************************
* �� �� ��  : mdrv_pm_log
*
* ��������  : ���������Ϣ��log��
*
* �������  : mod_id	ģ��id��ʹ��enum OM_FIELD_ID_ENUMö�����Ͷ����ֵ
*            data_len	������ݳ���
*            data 		�������
* �������  :
*
* �� �� ֵ  : 0��ִ�гɹ���1��ʧ��
*
* ����˵��  :
*
*****************************************************************************/
int mdrv_pm_log(int mod_id,  unsigned int data_len , void *data);

#ifdef __cplusplus
}
#endif
#endif
