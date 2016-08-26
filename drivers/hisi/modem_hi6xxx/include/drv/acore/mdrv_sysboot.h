#ifndef __MDRV_ACORE_SYSBOOT_H__
#define __MDRV_ACORE_SYSBOOT_H__

#ifdef __cplusplus
extern "C"
{
#endif

#include <mdrv_sysboot_commmon.h>

typedef enum DRV_SHUTDOWN_REASON_tag_s
{
	DRV_SHUTDOWN_POWER_KEY,             /* ���� Power ���ػ�          */
	DRV_SHUTDOWN_BATTERY_ERROR,         /* ����쳣                   */
	DRV_SHUTDOWN_LOW_BATTERY,           /* ��ص�����                 */
	DRV_SHUTDOWN_TEMPERATURE_PROTECT,   /* ���±����ػ�               */
	DRV_SHUTDOWN_CHARGE_REMOVE,         /* �ػ����ģʽ�£��γ������ */
	DRV_SHUTDOWN_UPDATE,                /* �ػ�����������ģʽ         */
	DRV_SHUTDOWN_RESET,                 /* ϵͳ��λ                 */
	DRV_SHUTDOWN_BUTT
}DRV_SHUTDOWN_REASON_E;

/*****************************************************************************
* �� �� ��  : mdrv_sysboot_shutdown
*
* ��������  : Modem��ϵͳ�ػ��ӿ�
*
* �������  :
* �������  :
*
* �� �� ֵ  :
*
* ����˵��  :
*            1 PS/TAF�ϲ�ֻ���ע���¹ػ�������
*            2 ���ڰ����ػ����͵�ػ����ػ����ʱ�γ�������ػ���MBB��������ĳ�����ʹ�õ����ڲ��ӿڣ�
*              ��Ҫ����mdrv_sysboot_shutdown�ӿڡ�
*
*****************************************************************************/
void mdrv_sysboot_shutdown(void);

/*****************************************************************************
* �� �� ��  : mdrv_sysboot_restart
*
* ��������  : ��λModem��ϵͳ
*
* �������  :
* �������  :
*
* �� �� ֵ  :
*
* ����˵��  :
*            1 ��phone��̬�£��ú���ʵ�ֶ�Modem��ϵͳ��C�ˣ��ĵ�����λ��MBB��̬�£����Ƕ�ȫϵͳ��λ��
*            2 ccore��acore�����Ե��ã����ս��һ�£��ڲ�����ʵ���в��죻
*            3 �쳣����£������Ҫ����modemʱ����ʹ��system_error�ӿڣ��Ͻ�ֱ�ӵ��øýӿڡ�
*
*****************************************************************************/
void mdrv_sysboot_restart(void);

/*****************************************************************************
* �� �� ��  : mdrv_set_modem_state
*
* ��������  : ����Modem״̬��Ready����Off��
*
* �������  : unsigned int state  Modem״̬��MODEM_NOT_READY(0), MODEM_READY(1)
* �������  :
*
* �� �� ֵ  : 0�����óɹ���1�����ò��ɹ�
*
* ����˵��  :1 tafͨ���ýӿ�����Modem״̬��
*            2 ͬʱ���ڶ��Modemʱ���ϲ����������Modem״̬��ȷ�Ϻ��ٵ��øýӿ�����Modem״̬���ϲ���øýӿ�����MODEM_READY
*            ǰ��Ӧ�ò��ȡ����״̬ΪModem Off��
*
*****************************************************************************/
int  mdrv_set_modem_state(unsigned int state);

/*****************************************************************************
* �� �� ��  : mdrv_sysboot_register_reset_notify
*
* ��������  : ��resetģ��ע��֪ͨmodem C�� reset������֪ͨ����
*
* �������  : const char *pname   �ϲ����ע������֣��9���ַ�������������������������洢
*             pdrv_reset_cbfun pcbfun  �ص�����ָ��
*             int userdata      �ϲ�������ݣ��ڵ��ûص�����ʱ����Ϊ��δ���ע����
*             int priolevel  �ص������������ȼ����ο�emum DRV_RESET_CALLCBFUN_PRIO���壬ֵԽС���ȼ�Խ��
* �������  :
*
* �� �� ֵ  : 0��ע��ɹ���1��ע�᲻�ɹ�
*
* ����˵��  :
*
*****************************************************************************/
typedef int (*pdrv_reset_cbfun)(DRV_RESET_CB_MOMENT_E enparam, int userdata);
int mdrv_sysboot_register_reset_notify(const char *pname, pdrv_reset_cbfun pcbfun, int userdata, int priolevel);

/*****************************************************************************
 �� �� ��  : hifireset_regcbfunc
 ��������  : �ṩ�ϲ�Ӧ�ó���ע��HIFI������λ�Ļص��ӿں�����
 �������  : pname���ϲ����ע������֣�ע�ⲻ�����������9���ַ���������洢��
             pcbfun���ص�����ָ�롣
             puserdata:�ϲ�������ݣ��ڵ��ûص�����ʱ����Ϊ��δ����û���
             priolevel: �ص������������ȼ���0-49
 �������  : �ޡ�
 �� �� ֵ  : 0:  �����ɹ���
             -1������ʧ�ܡ�
*****************************************************************************/
extern int hifireset_regcbfunc(const char *pname, pdrv_reset_cbfun pcbfun, int userdata, int priolevel);
#define DRV_HIFIRESET_REGCBFUNC(pname,pcbfun, userdata, priolevel)\
                hifireset_regcbfunc(pname,pcbfun, userdata, priolevel)

#ifdef __cplusplus
}
#endif
#endif
