

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "BSP.h"
#include "../ipf/ipf_driver.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  2 ��������
*****************************************************************************/

/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/
/*****************************************************************************
* �� �� ��  : mdrv_ipf_register_ops
*
* ��������  : ע��ops������Ŀǰ����������/�������ݴ�����жϻص�������ADQ��
*             �жϵ���Ӧ����
*
* �������  : struct mdrv_ipf_ops *ops  ��Ӧ�Ļص�������
* �������  :
*
* �� �� ֵ  : IPF_SUCCESS ���óɹ�
*             IPF_ERROR ����ʧ��
* ����˵��  :
*
*****************************************************************************/
int mdrv_ipf_register_ops(struct mdrv_ipf_ops *ops)
{
	BSP_IPF_RegisterWakeupDlCb(ops->rx_complete_cb);
	BSP_IPF_RegisterAdqEmptyDlCb(ops->adq_empty_cb);

	return 0;
}

/*****************************************************************************
* �� �� ��  : mdrv_ipf_config_ulbd
*
* ��������  : ������������
*
* �������  : unsigned int u32Num     ��Ҫ���õ�BD��Ŀ
*             IPF_CONFIG_ULPARAM_S* pstUlPara ���ò����ṹ������ָ��
* �������  :
*
* �� �� ֵ  : IPF_SUCCESS ���óɹ�
*             IPF_ERROR ����ʧ��
* ����˵��  :
*
*****************************************************************************/
int mdrv_ipf_config_ulbd(unsigned int u32Num, IPF_CONFIG_ULPARAM_S* pstUlPara)
{
    return BSP_IPF_ConfigUpFilter(u32Num, pstUlPara);
}

/*****************************************************************************
* �� �� ��  : mdrv_ipf_get_ulbd_num
*
* ��������  : ��ȡ����BDQ�п��е�BD��
*
* �������  :
* �������  :
*
* �� �� ֵ  : ���е�BD��Ŀ����ΧΪ0~BD_DESC_SIZE
*
* ����˵��  :
*
*****************************************************************************/
unsigned int mdrv_ipf_get_ulbd_num(void)
{
    return BSP_IPF_GetUlBDNum();
}

/*****************************************************************************
* �� �� ��  : mdrv_ipf_get_uldesc_num
*
* ��������  : ��ȡ���п������õİ���
*
* �������  : void
* �������  :
*
* �� �� ֵ  : ������ɶ�ͷ�����Ŀ��ϴ��İ���
*
* ����˵��  :
*
*****************************************************************************/
unsigned int mdrv_ipf_get_uldesc_num(void)
{
    return BSP_IPF_GetUlDescNum();
}

/*****************************************************************************
* �� �� ��  : mdrv_ipf_get_ulrd_num
*
* ��������  : ��ȡ����RD��Ŀ
*
* �������  : void
* �������  :
*
* �� �� ֵ  : ����Rd��Ŀ
*
* ����˵��  :
*
*****************************************************************************/
unsigned int mdrv_ipf_get_ulrd_num (void)
{
    return BSP_IPF_GetUlRdNum();
}

/*****************************************************************************
* �� �� ��  : mdrv_ipf_get_dlrd
*
* ��������  : ��ȡ����RD
*
* �������  : unsigned int* pu32Num  ���Է��ص�����RD��Ŀ
*             IPF_RD_DESC_S *pstRd  RD�������ṹ���׵�ַ
* �������  :
*
* �� �� ֵ  : ʵ�ʷ��ص�RD��Ŀ
*
* ����˵��  :
*
*****************************************************************************/
void mdrv_ipf_get_dlrd (unsigned int  * pu32Num, IPF_RD_DESC_S *pstRd)
{
    return BSP_IPF_GetDlRd(pu32Num, pstRd);
}

/*****************************************************************************
* �� �� ��  : mdrv_ipf_get_dlrd_num
*
* ��������  : ��ȡ����RD��Ŀ
*
* �������  : void
* �������  :
*
* �� �� ֵ  : ����Rd��Ŀ
*
* ����˵��  :
*
*****************************************************************************/
unsigned int mdrv_ipf_get_dlrd_num (void)
{
    return BSP_IPF_GetDlRdNum();
}

/*****************************************************************************
* �� �� ��  : mdrv_ipf_config_dlad
*
* ��������  : �����е�AD�����µ��ڴ滺����
*
* �������  : IPF_AD_TYPE_E eAdType   AD���кţ�0���̰����У���1���������У�
*             unsigned int u32AdNum    ��Ҫ���õĵ�AD��Ŀ
*             IPF_AD_DESC_S *pstAdDesc ����ռ��Ӧ�����ݽṹ�׵�ַ
* �������  :
*
* �� �� ֵ  : IPF_SUCCESS ���óɹ�
*             IPF_INVALID_PARA ���������Ч
*
* ����˵��  :
*
*****************************************************************************/
int mdrv_ipf_config_dlad(IPF_AD_TYPE_E eAdType, unsigned int u32AdNum, IPF_AD_DESC_S * pstAdDesc)
{
    return BSP_IPF_ConfigDlAd(eAdType, u32AdNum, pstAdDesc);
}

/*****************************************************************************
* �� �� ��  : mdrv_ipf_get_dlad_num
*
* ��������  : ��ȡ���У�A�ˣ����У�ָ��Ļ������Ѿ���ʹ�ã�AD��Ŀ
*
* �������  : unsigned int* pu32AD0Num  ���ؿ��е�AD0����Ŀ
*             unsigned int* pu32AD1Num  ���ؿ��е�AD1����Ŀ
* �������  :
*
* �� �� ֵ  : IPF_SUCCESS ���óɹ�
*             IPF_INVALID_PARA ���������Ч
* ����˵��  :
*
*****************************************************************************/
int mdrv_ipf_get_dlad_num (unsigned int* pu32AD0Num, unsigned int* pu32AD1Num)
{
    return BSP_IPF_GetDlAdNum(pu32AD0Num, pu32AD1Num);
}

/*****************************************************************************
* �� �� ��  : mdrv_ipf_reinit_dlreg
*
* ��������  : CCore������λ�ָ�ʱ������IPF�Ĵ���
*
* �������  : void
* �������  :
*
* �� �� ֵ  :
*
* ����˵��  :
*
*****************************************************************************/
void mdrv_ipf_reinit_dlreg(void)
{
    return BSP_IPF_DlRegReInit();
}

/*****************************************************************************
* �� �� ��  : mdrv_ipf_get_used_dlad
*
* ��������  : ��ȡδ��ʹ�õ�����AD�Ա�ADS�ͷ�
*
* �������  : IPF_AD_TYPE_E eAdType  AD���ͣ�0���̰����У���1���������У�
*             unsigned int * pu32AdNum    AD��Ŀ
*             IPF_AD_DESC_S * pstAdDesc ��Ҫ�ͷŵ�AD�����׵�ַ
* �������  :
*
* �� �� ֵ  : IPF_SUCCESS����������
*             IPF_ERROR��ʧ�ܷ��أ��ȴ���ʱIPFͨ��ʼ��BUSY
*             IPF_INVALID_PARA����γ���
* ����˵��  : ADS��ccore������λ��������Ҫ���øú������ͷŷ��ص�AD�����������ڴ�й¶
*
*****************************************************************************/
int mdrv_ipf_get_used_dlad(IPF_AD_TYPE_E eAdType, unsigned int * pu32AdNum, IPF_AD_DESC_S * pstAdDesc)
{
    return BSP_IPF_GetUsedDlAd(eAdType, pu32AdNum, pstAdDesc);
}


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif



