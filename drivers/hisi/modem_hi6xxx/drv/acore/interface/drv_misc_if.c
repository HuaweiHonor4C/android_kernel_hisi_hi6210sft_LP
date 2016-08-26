/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : drv_if_misc.c
  �� �� ��   : ����
  ��    ��   : ��ׯ�� 59026
  ��������   : 2012��9��20��
  ����޸�   :
  ��������   : ��NAS�����ӿ�ʵ��
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2012��9��20��
    ��    ��   : ��ׯ�� 59026
    �޸�����   : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "BSP.h"
#include <linux/hisi/drv_misc_if.h>
#include <linux/gpio.h>
#include <linux/module.h>


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif



/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/

/*****************************************************************************
* �� �� ��  : BSP_WDT_HardwareFeed
*
* ��������  : ���ÿ��Ź������Ĵ�����ι����
*
* �������  : wdtId  ���Ź�ID
*
* �������  : ��
*
* �� �� ֵ  : OK& ERROR
*
* �޸ļ�¼ :  2009��3��5��  v1.00  wangxuesong  ����
*****************************************************************************/
BSP_S32 BSP_WDT_HardwareFeed(BSP_U8 wdtId)
{
    return BSP_OK;
}



unsigned int  platform_have_bbp(void)
{
#if 0 /*y00145322*/
#if defined(BOARD_ASIC)
    return 0;   /* V9R1��Ƭ�����ڸò���,����0,��Э��ջ */
#else
    static int request_flag = 0;
    int ret = 0;
    int have_bbp_gpio;
	
    //ret = get_hw_config_int("bbp/have_bbp_gpio", &have_bbp_gpio, NULL);
    if (false == ret) {
        printk("have_bbp_gpio value not found !\n");
        have_bbp_gpio = GPIO_0_0;
    } 

    if (request_flag == 0) {
        ret = gpio_request(have_bbp_gpio, "have_bbp");
        if (ret) {
            printk("%s: platform have bbp gpio_request failed\n", __func__);
            goto ERR;
        }

        ret = gpio_direction_input(have_bbp_gpio);
        if(ret) {
            printk("%s: platform have bbp set direction err\n", __func__);
            goto ERR;
        }

        request_flag = 1;
    }
    
    ret = gpio_get_value(have_bbp_gpio);

    /*����ȷ��:1:��Э��ջ 0:����   */
    if ( PLATFORM_NO_BBP != ret )
    {
        return 0;
    }

ERR:
    return DRV_NOT_START_UMTS;
#endif
#endif
    return 0;
}



void BSP_TRACE(BSP_LOG_LEVEL_E enLogLevel, BSP_U32 enLogModule, const char *fmt, ...)
{
    return;
}

int device_event_report(void *data, int len)
{
    return 0;
}

EXPORT_SYMBOL(platform_have_bbp);
EXPORT_SYMBOL(BSP_TRACE);
EXPORT_SYMBOL(device_event_report);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif




