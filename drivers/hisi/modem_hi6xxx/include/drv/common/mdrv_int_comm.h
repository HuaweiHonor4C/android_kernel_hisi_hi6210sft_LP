#ifndef __MDRV_INT_COMMON_H__
#define __MDRV_INT_COMMON_H__
#ifdef __cplusplus
extern "C"
{
#endif

/*�ж����͡�*/
typedef enum tagBSP_INT_TYPE_E
{
    BSP_INT_TYPE_RTC = 0,
    BSP_INT_TYPE_WDT,
    BSP_INT_TYPE_USBOTG,
    BSP_INT_TYPE_UICC,
    BSP_INT_TYPE_IPF_C,
    BSP_INT_TYPE_IPF_A,
    BSP_INT_TYPE_SOCP_A,
    BSP_INT_TYPE_SOCP_C,
    BSP_INT_TYPE_CICOM_UL,
    BSP_INT_TYPE_CICOM_DL,
    BSP_INT_TYPE_CICOM1_UL,
    BSP_INT_TYPE_CICOM1_DL,
    BSP_INT_TYPE_HDLC_DEF,
    BSP_INT_TYPE_HDLC_FRM,
    BSP_INT_TYPE_GBBP,
    BSP_INT_TYPE_GBBP_AWAKE,
    BSP_INT_TYPE_GBBP_DSP,
    BSP_INT_TYPE_GBBP_AWAKE_DSP,
    BSP_INT_TYPE_GBBP1,
    BSP_INT_TYPE_GBBP1_AWAKE,
    BSP_INT_TYPE_GBBP1_DSP,
    BSP_INT_TYPE_GBBP1_AWAKE_DSP,
    BSP_INT_TYPE_WBBP_0MS,
    BSP_INT_TYPE_WBBP_AWAKE,
    BSP_INT_TYPE_WBBP_SWITCH,
    BSP_INT_TYPE_WBBP1_0MS,
    BSP_INT_TYPE_WBBP_SEARCH,
    BSP_INT_TYPE_WBBP_RAKE,
    BSP_INT_TYPE_WBBP_DECODE,
    BSP_INT_TYPE_WBBP_TIME,
    BSP_INT_TYPE_WBBP1_TIME,
    BSP_INT_TYPE_WBBP_MULTI_SEARCH,
    BSP_INT_TYPE_WBBP_BBPMST,
    BSP_INT_TYPE_TBBP_AWAKE,
    BSP_INT_TYPE_LBBP_AWAKE,
    BSP_INT_TYPE_UPACC_DSP,
    BSP_INT_TYPE_INT_OSRTC,
    BSP_INT_TYPE_INT_SMIM,
    BSP_INT_TYPE_INT_ZSP_DOG,
    BSP_INT_TYPE_INT_HIFI_DOG,
    BSP_INT_TYPE_INT12_G2,
    BSP_INT_TYPE_ODTOA_INT12,
    BSP_INT_TYPE_CTU_INT_W,
    BSP_INT_TYPE_CTU_INT_G,
    BSP_INT_TYPE_CTU_INT_LTE,
    BSP_INT_TYPE_CTU_INT_TDS,
    BSP_INT_TYPE_UPACC_INTR,
    BSP_INT_TYPE_GBBP_GSML_RESERVED_INTR,
    BSP_INT_TYPE_LTE_CIPHER,
    BSP_INT_TYPE_LTE_APP_ARM_PUB,
    BSP_INT_TYPE_LTE_ARM_POSITIONS,
    BSP_INT_TYPE_LTE_DL_DMA,
    BSP_INT_TYPE_LTE_ARM_POSITION,
    BSP_INT_TYPE_LTE_ARM_DL_DMA,
    BSP_INT_TYPE_LTE_ARM_CLK_SWITCH,
    BSP_INT_TYPE_LTE_ARM_WAKEUP,
    BSP_INT_TYPE_LTE_PUB,
    BSP_INT_TYPE_TDS_STU_ARM1,
    BSP_INT_TYPE_TDS_DRX_ARM1,
    BSP_INT_TYPE_TDS_DRX_ARM2,
    BSP_INT_TYPE_BBE16_GPIO1,
    BSP_INT_TYPE_G2_INT_BBP_TO_CPU_32K,
    BSP_INT_TYPE_G2_INT_BBP_TO_CPU,
    BSP_INT_TYPE_G2_INT_BBP_TO_DSP_32K,
    BSP_INT_TYPE_G2_INT_BBP_TO_DSP,
    BSP_INT_TYPE_GBBP_GSML_NODRX_INTR,
    BSP_INT_TYPE_WBBP_CARD2_0MS_INTR,
    BSP_INT_TYPE_WBBP_SEARCH_INTR,
    BSP_INT_TYPE_WBBP_RAKE_INTR,
    BSP_INT_TYPE_WBBP_DECODE_INTR,
    BSP_INT_TYPE_WBBP_CARD1_TIME_INTR,
    BSP_INT_TYPE_WBBP_CARD2_TIME_INTR,
    BSP_INT_TYPE_WBBP_MULTI_SEARCH_INTR,
    BSP_INT_TYPE_BBPMASTER,
    BSP_INT_TYPE_CBBP_INTR01,         /*CDMA1x��CDMA EVDO˯��/�����ж�(32K)*/
    BSP_INT_TYPE_CBBP_INTR02,         /*CDMA1x��CDMA EVDO�л��ж�(imiʱ��)*/
    BSP_INT_TYPE_CBBP_INTR04,         /*CDMA1x��CDMA EVDO��ʱ�ж�*/
    BSP_INI_TYPE_COMM_32K_INT,        /*����DSDS��32K������ʱ��������������õ����ڲ����ж�*/
BSP_INT_TYPE_BUTTOM
} BSP_INT_TYPE_E;

/*****************************************************************************
	 *  �� �� ��  : mdrv_int_enable
	 *  ��������  :  ���������ж�ΪVIC���жϺţ��ӿ��ڲ�����vic�Ľӿ�ʹ�ܣ�
        *                             ���������ж�ΪGIC���жϺţ��ӿ��ڲ�����gic�Ľӿ�ʹ�ܣ�
	 *  �������  :
	 *
	 *  �������  : ��
	 *  �� �� ֵ  :  0	       �����ɹ���
        *                           ����	����ʧ�ܡ�
     	 *
	 ******************************************************************************/
int  mdrv_int_enable(int ulLev);

/*****************************************************************************
	 *  �� �� ��  : mdrv_int_enable
	 *  ��������  :  ���������ж�ΪVIC���жϺţ��ӿ��ڲ�����vic�Ľӿ�ȥʹ�ܣ�
        *                             ���������ж�ΪGIC���жϺţ��ӿ��ڲ�����gic�Ľӿ�ȥʹ�ܣ�
	 *  �������  :
	 *
	 *  �������  : ��
	 *  �� �� ֵ  :  0	       �����ɹ���
        *                           ����	����ʧ�ܡ�
     	 *
	 ******************************************************************************/
int mdrv_int_disable(int ulLev);

/*****************************************************************************
	 *  �� �� ��  : mdrv_int_connect
	 *  ��������  :  ���������ж�ΪVIC���жϺţ��ӿ��ڲ�����vic�Ľӿڹ��жϴ�������
        *                             ���������ж�ΪGIC���жϺţ��ӿ��ڲ�����gic�Ľӿڹ��жϴ�������
	 *  �������  :
	 *
	 *  �������  : ��
	 *  �� �� ֵ  :  0	       �����ɹ���
        *                           ����	����ʧ�ܡ�
     	 *
	 ******************************************************************************/
int mdrv_int_connect(int level, VOIDFUNCPTR routine, unsigned int parameter);

/*****************************************************************************
	 *  �� �� ��  : mdrv_int_get_num
	 *  ��������  :  �жϺŲ�ѯ��
	 *  �������  : enIntType: ��Ҫ��ѯ���ж�����
	 *
	 *  �������  : ��
	 *  �� �� ֵ  :  �жϺ�
        *
     	 *
	 ******************************************************************************/
int mdrv_int_get_num (BSP_INT_TYPE_E enIntType);

#ifdef __cplusplus
}
#endif

#endif

