#ifndef __MDRV_MISC_COMMON_H__
#define __MDRV_MISC_COMMON_H__
#ifdef __cplusplus
extern "C"
{
#endif

/*IP���͡�*/
typedef enum tagBSP_IP_TYPE_E
{
    BSP_IP_TYPE_SOCP = 0x0,
    BSP_IP_TYPE_CICOM0,
    BSP_IP_TYPE_CICOM1,
    BSP_IP_TYPE_HDLC,
    BSP_IP_TYPE_BBPMASTER,
    BSP_IP_TYPE_ZSP_ITCM,
    BSP_IP_TYPE_ZSP_DTCM,
    BSP_IP_TYPE_AHB,
    BSP_IP_TYPE_WBBP,
    BSP_IP_TYPE_WBBP_DRX,
    BSP_IP_TYPE_GBBP,
    BSP_IP_TYPE_GBBP_DRX,
    BSP_IP_TYPE_GBBP1,
    BSP_IP_TYPE_GBBP1_DRX,
    BSP_IP_TYPE_ZSPDMA,
    BSP_IP_TYPE_SYSCTRL,
    BSP_IP_TYPE_CTU,
    BSP_IP_TYPE_TDSSYS,
    BSP_IP_TYPE_ZSPDHI,
    BSP_IP_TYPE_BBPDMA,
    BSP_IP_TYPE_BBPDBG,
    BSP_IP_TYPE_BBPSRC,

    BSP_IP_TYPE_BUTTOM
}BSP_IP_TYPE_E;

/*�Ƿ�֧��ģ��*/
typedef enum tagBSP_MODULE_SUPPORT_E
{
    BSP_MODULE_SUPPORT     = 0,
    BSP_MODULE_UNSUPPORT   = 1,
    BSP_MODULE_SUPPORT_BUTTOM
}BSP_MODULE_SUPPORT_E;

typedef enum tagESP_MODULE_TYPE_E
{
	BSP_MODULE_TYPE_SD  = 0x0,
	BSP_MODULE_TYPE_CHARGE ,
	BSP_MODULE_TYPE_WIFI ,
	BSP_MODULE_TYPE_OLED ,
	BSP_MODULE_TYPE_HIFI,
	BSP_MODULE_TYPE_POWER_ON_OFF,
	BSP_MODULE_TYPE_HSIC,
	BSP_MODULE_TYPE_HSIC_NCM,
	BSP_MODULE_TYPE_LOCALFLASH,
	BSP_MODULE_TYPE_BOTTOM
}BSP_MODULE_TYPE_E;

/*****************************************************************************
	 *  �� �� ��  : mdrv_misc_get_ip_baseaddr
	 *  ��������  :  IP��ַ��ѯ��
	 *  �������  :
	 *
	 *  �������  : ��
	 *  �� �� ֵ  : null
   *         
	 ******************************************************************************/
void* mdrv_misc_get_ip_baseaddr(BSP_IP_TYPE_E enIPType);

/*****************************************************************************
	 *  �� �� ��  : bsp_misc_support_check
	 *  ��������  : ��ѯĳģ���Ƿ�֧�֡�
	 *  �������  :
	 *
	 *  �������  : ��
	 *  �� �� ֵ  :  0	       �����ɹ���
        *                           ����	����ʧ�ܡ�
     	 *
	 ******************************************************************************/
BSP_MODULE_SUPPORT_E mdrv_misc_support_check (BSP_MODULE_TYPE_E module_type);

#ifdef __cplusplus
}
#endif
#endif

