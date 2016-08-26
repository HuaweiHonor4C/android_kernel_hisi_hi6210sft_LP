#ifndef __ABBINTERFACE_H__ 
#define __ABBINTERFACE_H__ 


/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/



#include "wg_type_define.h"




#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
  2 �궨��
*****************************************************************************/
/********************************** ABB�Ĵ�����ַ ***************************/

/********************************* �汾�Ĵ��� *******************************/
#define HAL_ABB_WG_VERSION_LTE_ADDR     ( 0x80 )                                /* version�Ĵ��� */

/********************************* ģʽ�Ĵ��� *******************************/
#define HAL_ABB_WG_RX_2G_DIG_1_ADDR     ( 0x81 )                                /* RX 2g ģʽ���üĴ���1�����߿ؾ����Ƿ������� */
#define HAL_ABB_WG_RX_2G_DIG_2_ADDR     ( 0x82 )                                /* RX 2g ģʽ���üĴ���2�����߿ؾ����Ƿ������� */
#define HAL_ABB_WG_TX_2G_DIG_1_ADDR     ( 0x83 )                                /* TX 2g ģʽ���üĴ���1�����߿ؾ����Ƿ������� */
#define HAL_ABB_WG_TX_2G_DIG_2_ADDR     ( 0x84 )                                /* TX 2g ģʽ���üĴ���2�����߿ؾ����Ƿ������� */
#define HAL_ABB_WG_RX_3G_DIG_1_ADDR     ( 0x85 )                                /* RX 3g ģʽ���üĴ���1�����߿ؾ����Ƿ������� */
#define HAL_ABB_WG_RX_3G_DIG_2_ADDR     ( 0x86 )                                /* RX 3g ģʽ���üĴ���2���߿ؾ����Ƿ������� */
#define HAL_ABB_WG_TX_3G_DIG_1_ADDR     ( 0x87 )                                /* TX 3g ģʽ���üĴ���1�����߿ؾ����Ƿ������� */
#define HAL_ABB_WG_TX_3G_DIG_2_ADDR     ( 0x88 )                                /* TX 3g ģʽ���üĴ���2�����߿ؾ����Ƿ������� */
#define HAL_ABB_WG_RX_4G_DIG_1_ADDR     ( 0x89 )                                /* RX 4G ģʽ���üĴ���1�����߿ؾ����Ƿ������� */
#define HAL_ABB_WG_RX_4G_DIG_2_ADDR     ( 0x8A )                                /* RX 4G ģʽ���üĴ���2�������߿ؾ����Ƿ������� */
#define HAL_ABB_WG_TX_4G_DIG_1_ADDR     ( 0x8B )                                /* TX 4g ģʽ���üĴ���1�����߿ؾ����Ƿ������� */
#define HAL_ABB_WG_TX_4G_DIG_2_ADDR     ( 0x8C )                                /* TX 4g ģʽ���üĴ���2�����߿ؾ����Ƿ������� */
#define HAL_ABB_WG_RX_IDLE_DIG_1_ADDR   ( 0x8D )                                /* RX idle ģʽ���üĴ���1�����߿ؾ����Ƿ������� */
#define HAL_ABB_WG_RX_IDLE_DIG_2_ADDR   ( 0x8E )                                /* RX idle ģʽ���üĴ���2�����߿ؾ����Ƿ������� */
#define HAL_ABB_WG_TX_IDLE_DIG_1_ADDR   ( 0x8F )                                /* TX idle ģʽ���üĴ���1�����߿ؾ����Ƿ������� */
#define HAL_ABB_WG_TX_IDLE_DIG_2_ADDR   ( 0x90 )                                /* TX idle ģʽ���üĴ���2�����߿ؾ����Ƿ������� */
#define HAL_ABB_WG_TESTMODE_ADDR        ( 0x91 )                                /* �����üĴ��� */
#define HAL_ABB_WG_AD_OUT_CFG_ADDR      ( 0x92 )                                /* �������ݿ��ƼĴ��� */
#define HAL_ABB_WG_DA_IN_CFG_ADDR       ( 0x93 )                                /* �������ݿ��ƼĴ��� */
#define HAL_ABB_WG_RX_DELAY_ADDR        ( 0x94 )                                /* rxʱ��delayѡ�� */
#define HAL_ABB_WG_LINE_CTRL_SEL_ADDR   ( 0x95 )                                /* LTE�߿�ѡ�� */
#define HAL_ABB_WG_TX_I_OFFSET_ADDR     ( 0x96 )                                /* TX Iͨ��offset */
#define HAL_ABB_WG_TX_Q_OFFSET_ADDR     ( 0x97 )                                /* TX Qͨ��offset */
#define HAL_ABB_WG_RXA_BLOCKING_ADDR    ( 0x98 )                                /* rxa blocking_output */
#define HAL_ABB_WG_RXB_BLOCKING_ADDR    ( 0x99 )                                /* rxb blocking_output */
#define HAL_ABB_WG_RX_2G_ANA_ADDR       ( 0x9A )                                /* RX Mode���ƼĴ����������߿��߼��������reg_analog_wr00 */
#define HAL_ABB_WG_TX_2G_ANA_ADDR       ( 0x9B )                                /* TX Mode���ƼĴ����������߿��߼��������reg_analog_wr01 */
#define HAL_ABB_WG_RX_3G_ANA_ADDR       ( 0x9C )                                /* RX Mode���ƼĴ����������߿��߼��������reg_analog_wr00 */
#define HAL_ABB_WG_TX_3G_ANA_ADDR       ( 0x9D )                                /* TX Mode���ƼĴ����������߿��߼��������reg_analog_wr01 */
#define HAL_ABB_WG_RX_4G_ANA_ADDR       ( 0x9E )                                /* RX Mode���ƼĴ����������߿��߼��������reg_analog_wr00 */
#define HAL_ABB_WG_TX_4G_ANA_ADDR       ( 0x9F )                                /* TX Mode���ƼĴ����������߿��߼��������reg_analog_wr01 */
#define HAL_ABB_WG_RX_IDLE_ANA_ADDR     ( 0xA0 )                                /* RX Mode���ƼĴ����������߿��߼��������reg_analog_wr00 */
#define HAL_ABB_WG_TX_IDLE_ANA_ADDR     ( 0xA1 )                                /* TX Mode���ƼĴ����������߿��߼��������reg_analog_wr01 */

/***************************** ���ƼĴ��� ***************************/
#define HAL_ABB_WG_REG_ANALOG_WR02_ADDR ( 0xA2 )                                /* Power Down���ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR03_ADDR ( 0xA3 )                                /* ADC���Կ��ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR04_ADDR ( 0xA4 )                                /* Other���ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR05_ADDR ( 0xA5 )                                /* ADC��һ������������tuning�Ĵ��� */
#define HAL_ABB_WG_REG_ANALOG_WR06_ADDR ( 0xA6 )                                /* ADC�ڶ�������������tuning�Ĵ��� */
#define HAL_ABB_WG_REG_ANALOG_WR07_ADDR ( 0xA7 )                                /* ADC����������������tuning�Ĵ��� */
#define HAL_ABB_WG_REG_ANALOG_WR08_ADDR ( 0xA8 )                                /* DAC Tuning���ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR09_ADDR ( 0xA9 )                                /* DAC Tuning���ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR10_ADDR ( 0xAA )                                /* DAC Tuning���ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR11_ADDR ( 0xAB )                                /* ʱ��ģʽ���ƼĴ���    */
#define HAL_ABB_WG_REG_ANALOG_WR12_ADDR ( 0xAC )                                /* PLLV1���ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR13_ADDR ( 0xAD )                                /* VCO1�������ƿ��ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR14_ADDR ( 0xAE )                                /* PLLV1���ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR15_ADDR ( 0xAF )                                /* PLLV2���ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR16_ADDR ( 0xB0 )                                /* VCO2�������ƿ��ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR17_ADDR ( 0xB1 )                                /* PLLV2���ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR18_ADDR ( 0xB2 )                                /* AUX�������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR19_ADDR ( 0xB3 )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR20_ADDR ( 0xB4 )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR21_ADDR ( 0xB5 )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR22_ADDR ( 0xB6 )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR23_ADDR ( 0xB7 )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR24_ADDR ( 0xB8 )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR25_ADDR ( 0xB9 )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR26_ADDR ( 0xBA )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR27_ADDR ( 0xBB )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR28_ADDR ( 0xBC )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR29_ADDR ( 0xBD )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR30_ADDR ( 0xBE )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR31_ADDR ( 0xBF )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR32_ADDR ( 0xC0 )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR33_ADDR ( 0xC1 )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR34_ADDR ( 0xC2 )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR35_ADDR ( 0xC3 )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR36_ADDR ( 0xC4 )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR37_ADDR ( 0xC5 )                                /* �������ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_WR38_ADDR ( 0xC6 )                                /* ��ģ��ƽ���ƼĴ��� */

/******************************* �������ݿ��ƼĴ��� *****************************/
#define HAL_ABB_WG_REG_ANALOG_RO0_ADDR  ( 0xD0 )                                /* �������ݿ��ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_RO1_ADDR  ( 0xD1 )                                /* �������ݿ��ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_RO2_ADDR  ( 0xD2 )                                /* �������ݿ��ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_RO3_ADDR  ( 0xD3 )                                /* �������ݿ��ƼĴ��� */
#define HAL_ABB_WG_REG_ANALOG_RO4_ADDR  ( 0xD4 )                                /* �������ݿ��ƼĴ��� */

/******************************* ���ֵ��ԼĴ��� *****************************/
#define HAL_ABB_WG_REG_DEBUG_DIG0_ADDR  ( 0xD5 )                                /* ���ֵ��ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_DIG1_ADDR  ( 0xD6 )                                /* ���ֵ��ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_DIG2_ADDR  ( 0xD7 )                                /* ���ֵ��ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_DIG3_ADDR  ( 0xD8 )                                /* ���ֵ��ԼĴ��� */

/******************************* ģ����ԼĴ��� *****************************/
#define HAL_ABB_WG_REG_DEBUG_ANA0_ADDR  ( 0xD9 )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA1_ADDR  ( 0xDA )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA2_ADDR  ( 0xDB )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA3_ADDR  ( 0xDC )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA4_ADDR  ( 0xDD )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA5_ADDR  ( 0xDE )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA6_ADDR  ( 0xDF )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA7_ADDR  ( 0xE0 )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA8_ADDR  ( 0xE1 )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA9_ADDR  ( 0xE2 )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA10_ADDR ( 0xE3 )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA11_ADDR ( 0xE4 )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA12_ADDR ( 0xE5 )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA13_ADDR ( 0xE6 )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA14_ADDR ( 0xE7 )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA15_ADDR ( 0xE8 )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA16_ADDR ( 0xE9 )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA17_ADDR ( 0xEA )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA18_ADDR ( 0xEB )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA19_ADDR ( 0xEC )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA20_ADDR ( 0xED )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ANA21_ADDR ( 0xEE )                                /* ģ����ԼĴ��� */
#define HAL_ABB_WG_REG_DEBUG_ARO0_ADDR  ( 0xEF )                                /* ģ�����ֻ���Ĵ��� */
#define HAL_ABB_REG_ABB_MODE_ADDR       ( 0xf0 )                                /* ABB˫ģ���ָʾ�Ĵ��� */

/******************************* HKADC��ַ ************************************/
#define HAL_ABB_HKADC_REG_WR1_ADDR      ( 0x0 )
#define HAL_ABB_HKADC_REG_WR2_ADDR      ( 0x1 )
#define HAL_ABB_HKADC_REG_WR3_ADDR      ( 0x2 )

#define HAL_ABB_HKADC_REG_RO2_ADDR      ( 0x5 )
#define HAL_ABB_HKADC_REG_RO3_ADDR      ( 0x6 )



/*****************************************************************************
  3 ö�ٶ���
******************************************************************************/

/*****************************************************************************
 ö����    :
 Э����  :
 ASN.1���� :
 ö��˵��  :
*****************************************************************************/


/*****************************************************************************
 ö����    :
 Э����  :
 ASN.1���� :
 ö��˵��  :
*****************************************************************************/





/*****************************************************************************
  4 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  6 STRUCT����
*****************************************************************************/

/*****************************************************************************
 �ṹ��    :
 �ṹ˵��  :
*****************************************************************************/


/*****************************************************************************
 �ṹ��    :
 Э����  :
 �ṹ˵��  :
*****************************************************************************/



/*****************************************************************************
  7 UNION����
*****************************************************************************/

/*****************************************************************************
 ������    : HAL_ABB_WG_RXA_BLOCKING_UNION
 ����˵��  : WG_RXA_BLOCKING�Ĵ���
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      coeff               : 5;                /* rxa blocking result = power * 2^coeff */
        PHY_UINT16                      power               : 3;
        PHY_UINT16                      reserved            : 8;
    }stReg;
}HAL_ABB_WG_RXA_BLOCKING_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_RXB_BLOCKING_UNION
 ����˵��  : WG_RXB_BLOCKING�Ĵ���
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      coeff               : 5;                /* rxb blocking result = power * 2^coeff */
        PHY_UINT16                      power               : 3;
        PHY_UINT16                      reserved            : 8;
    }stReg;
}HAL_ABB_WG_RXB_BLOCKING_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_AD_OUT_CFG_UNION
 ����˵��  : �������ݿ��ƼĴ���
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      rx_sync_polarity    : 1;                /* 1'b0��rx_sync����Ч  1'b1��rx_sync����Ч */
        PHY_UINT16                      rx_i_first          : 1;                /* 1'b0��Q·������ǰ��I·�����ں� 1'b1��I·������ǰ��Q·�����ں� */
        PHY_UINT16                      rxbit_weight        : 1;                /* 1'b0�������ż 1'b1����ż���� */
        PHY_UINT16                      reserved0           : 1;                /* reserved */
        PHY_UINT16                      rx_dout_limit       : 1;                /* Rx ���������DBB���ݽ��жԳ��޷����� 0�������жԳ��޷� 1�����жԳ��޷� */
        PHY_UINT16                      rx_clk_inv          : 1;                /* rx_clk���������� 1'b0��rx_clk bypass��� 1'b1��rx_clk������� */
        PHY_UINT16                      rx_clk_delay_bp     : 1;                /* 1'b0��rx_clk ���delay ��bypass 1'b1��rx_clk ���delay bypass */
        PHY_UINT16                      reserved1           : 9;                /* reserved */
    }stReg;
}HAL_ABB_WG_AD_OUT_CFG_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_DA_IN_CFG_UNION
 ����˵��  : �������ݿ��ƼĴ���
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      tx_sync_polarity    : 1;                /* 1'b0��tx_sync����Ч  1'b1��tx_sync����Ч */
        PHY_UINT16                      tx_i_first          : 1;                /* 1'b0��Q·������ǰ��I·�����ں� 1'b1��I·������ǰ��Q·�����ں� */
        PHY_UINT16                      txbit_weight        : 1;                /* 1'b0�������ż 1'b1����ż���� */
        PHY_UINT16                      Reserved1           : 1;                /* reserved */
        PHY_UINT16                      tx_din_limit        : 1;                /* 'Tx ����DBB�������ݽ��жԳ��޷����� 0�������жԳ��޷� 1�����жԳ��޷� */
        PHY_UINT16                      Reserved2           : 11;               /* reserved */
    }stReg;
}HAL_ABB_WG_DA_IN_CFG_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_TX_I_OFFSET_UNION
 ����˵��  : TX Iͨ��offset
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      tx_i_offset         : 8;                /* tx_iͨ��dc offset���� */
        PHY_UINT16                      Reserved            : 8;                /* reserved */
    }stReg;
}HAL_ABB_WG_TX_I_OFFSET_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_TX_Q_OFFSET_UNION
 ����˵��  : TX Qͨ��offset
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      tx_q_offset         : 8;                /* tx_qͨ��dc offset���� */
        PHY_UINT16                      Reserved            : 8;                /* reserved */
    }stReg;
}HAL_ABB_WG_TX_Q_OFFSET_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_REG_ANALOG_WR02_UNION
 ����˵��  : Power Down���ƼĴ���
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      AUXDAC2_PD          : 1;                /* AUXDAC2 Power Down���ƣ����߿ؿ��� 0:Power On 1:Power Down��Ĭ�ϣ�*/
        PHY_UINT16                      AUXDAC1_PD          : 1;                /* AUXDAC1 Power Down���ƣ����߿ؿ��� 0:Power On 1:Power Down��Ĭ�ϣ� */
        PHY_UINT16                      PLL624_PD           : 1;                /* G PLLV2 Power Down���� 0:Power On 1:Power Down��Ĭ�ϣ� */
        PHY_UINT16                      PLL6144_PD          : 1;                /* W/L PLLV1 Power Down���� 0:Power On��Ĭ�ϣ� 1:Power Down */
        PHY_UINT16                      BIAS_PD             : 1;                /* BIAS Power Down���� 0:Power On 1:Power Down��Ĭ�ϣ� */
        PHY_UINT16                      REF_PD              : 1;                /* Reference Voltage Power Down 0:Power On 1:Power Down��Ĭ�ϣ� */
        PHY_UINT16                      FS                  : 1;                /* Fast start up mode 0:fast start up disable��Ĭ�ϣ� 1:fast start up enable */
        PHY_UINT16                      reserved            : 9;                /* reserved */
    }stReg;
}HAL_ABB_WG_REG_ANALOG_WR02_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_REG_ANALOG_WR03_UNION
 ����˵��  : ADC���Կ��ƼĴ���
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      Reserved            : 3;                /* Reserved */
        PHY_UINT16                      TX_CLKD_CTRL        : 1;                /* TX ����ʱ����ѡ�� 0: ���� 1: ���أ�Ĭ�ϣ� */
        PHY_UINT16                      CLK_61D44M_PD       : 1;                /* CLK_61D44M Power Down���� 0:Power On 1:Power Down��Ĭ�ϣ�*/
        PHY_UINT16                      CLK_52M_PD          : 1;                /* CLK_52M Power Down���� 0:Power On 1:Power Down��Ĭ�ϣ� */
        PHY_UINT16                      RX_CLK2D_CTRL       : 1;                /* ADC�����ؿ��ƣ�0: ���� 1: ���أ�Ĭ�ϣ� */
        PHY_UINT16                      ORDER_CTRL          : 1;                /* ADC�������ƣ�0: 3�ף�Ĭ�ϣ�1: 2�� */
        PHY_UINT16                      reserved            : 8;                /* reserved */
    }stReg;
}HAL_ABB_WG_REG_ANALOG_WR03_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_REG_ANALOG_WR38_UNION
 ����˵��  : ��ģ��ƽ���ƼĴ���
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      Reserved            : 3;                /* Reserved */
        PHY_UINT16                      OFFSET_CAL_DAC_EN   : 1;                /* TX adc offset calibration enable output 1 enable; 0 disable��Ĭ�ϣ�*/
        PHY_UINT16                      SARADC_REF_RANGE    : 1;                /* 0 the sar ref range is 2.5V��Ĭ�ϣ� 1 the sar ref range is 1.65v*/
        PHY_UINT16                      TX_CM_CON_MODE      : 2;                /* sink rf current value                              '00  28uA  gsm(low gain)                                01  32uA  gsm(high gain)                                10  48uA  wcdma                                  11   0     pwr down the wg circuits��Ĭ�ϣ� */
        PHY_UINT16                      RX_ADC_CM_CON_EN    : 1;                /* RX_ADC_CM_CON_ENʹ�ܿ��� 0:������ģ��ƽ��Ч��Ĭ�ϣ�1:������ģ��ƽ��Ч */
        PHY_UINT16                      reserved            : 8;                /* reserved */
    }stReg;
}HAL_ABB_WG_REG_ANALOG_WR38_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_REG_ANALOG_WR04_UNION
 ����˵��  : 'Other���ƼĴ���
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      EN_CAL              : 1;                /* Calibration enable��Ĭ��Ϊ0������������Calibration���� */
        PHY_UINT16                      CAL_PD              : 1;                /* CAL Power Down����0:Power On 1:Power Down��Ĭ�ϣ� */
        PHY_UINT16                      TX_AUTO_TUNE        : 1;                /* TX ADC�Զ�tuning���� 0���ֶ�tuning��tuningѡ��TX_TUNE1,TX_TUNE2,TX_TUNE3��ֵ��Ĭ�ϣ� 1���Զ�tuning��TXͨ����calibrationֵΪCAL_VALUE*/
        PHY_UINT16                      RX_AUTO_TUNE        : 1;                /* RX ADC�Զ�tuning����0���ֶ�tuning��tuningѡ��RX_TUNE1,RX_TUNE2,RX_TUNE3��ֵ��Ĭ�ϣ�1���Զ�tuning��RXͨ����calibrationֵΪCAL_VALUE */
        PHY_UINT16                      reserved            : 12;               /* reserved */
    }stReg;
}HAL_ABB_WG_REG_ANALOG_WR04_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_RX_3G_DIG_1_UNION
 ����˵��  : 'RX 3g ģʽ���üĴ���1�����߿ؾ����Ƿ�������
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      rx_comp_bp          : 1;                /* RXͨ�������˲���bypass���ƣ�0����bypass��Ĭ�ϣ�1��bypass */
        PHY_UINT16                      rx_comp_sel         : 1;                /* RX�����˲���ѡ��0��2G/4G�����˲���1��3G�����˲��� */
        PHY_UINT16                      rx_hb_bp            : 1;                /* RXͨ������˲�����bypass�ź�0����bypass����˲���,rxͨ�����data rate ΪRX CIC rate/2(Ĭ�ϣ�1��bypass����˲���,rxͨ�����data rate ΪRX CIC rate */
        PHY_UINT16                      rx_rate             : 2;                /* RX ���ʿ��ƣ�'RX CIC�˲���������ʿ��ƣ�    2G��     3G_SC��     4G��   3G_DC
                                                                                    0 2.167MHz,15.36MHz, 61.44MHz, 30.72MHz��Ĭ�ϣ�
                                                                                    1 --------,--------, 30.72MHz, 15.36MHz
                                                                                    2 --------,---------,15.36MHz,----------
                                                                                    3  ------ ,---------, 7.68MHz,----------*/

        PHY_UINT16                      rx_mode_dig         : 2;                /* RXģʽ���ƣ�00��2G 01��3G��Ĭ�ϣ�10��4G 11��3G_DC */
        PHY_UINT16                      reserved            : 9;                /* reserved */
    }stReg;
}HAL_ABB_WG_RX_3G_DIG_1_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_TX_2G_DIG_1_UNION
 ����˵��  : TX 2g ģʽ���üĴ���1�����߿ؾ����Ƿ�������
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      tx_pd               : 1;                /*  */
        PHY_UINT16                      tx_comp_bp          : 1;                /*  */
        PHY_UINT16                      tx_hb_bp            : 1;                /*  */
        PHY_UINT16                      tx_rate             : 3;                /* */

        PHY_UINT16                      tx_mode_dig         : 2;                /*  */
        PHY_UINT16                      reserved            : 8;                /* reserved */
    }stReg;
}HAL_ABB_WG_TX_2G_DIG_1_UNION;



/*****************************************************************************
 ������    : HAL_ABB_WG_RX_3G_ANA_UNION
 ����˵��  : RX Mode���ƼĴ����������߿��߼��������reg_analog_wr00
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      DEM_EN              : 1;                /* ADC DEM Bypass���ƣ�0: Bypass1: ����������Ĭ�ϣ� */
        PHY_UINT16                      RX_MODE_CLK         : 2;                /* ģʽ���ƣ�00��4G01��3G��Ĭ�ϣ�10��3G_DC11��2G */
        PHY_UINT16                      RX_MODE_ANA         : 1;                /* ADC Mode ѡ��0: LTE1: 2G/3G��Ĭ�ϣ�*/
        PHY_UINT16                      RXB_Q_PD            : 1;                /* RXB_Q ADC Power Down����0:Power On1:Power Down��Ĭ�ϣ�(!RXB_Q_PD)|W_RXB_EN = 1ʱ����������ر� */
        PHY_UINT16                      RXB_I_PD            : 1;                /* RXB_I ADC Power Down����0:Power On1:Power Down��Ĭ�ϣ�(!RXB_I_PD)|W_RXB_EN = 1ʱ����������ر� */
        PHY_UINT16                      RXA_Q_PD            : 1;                /* RXA_Q ADC Power Down����0:Power On1:Power Down��Ĭ�ϣ�(!RXA_Q_PD)|W_RXA_EN = 1ʱ����������ر� */
        PHY_UINT16                      RXA_I_PD            : 1;                /* RXA_I ADC Power Down����0:Power On1:Power Down��Ĭ�ϣ�(!RXA_I_PD)|W_RXA_EN = 1ʱ����������ر� */
        PHY_UINT16                      reserved            : 8;                /* reserved */
    }stReg;
}HAL_ABB_WG_RX_3G_ANA_UNION;

/*****************************************************************************
 ������    : HAL_ABB_RX_IDLE_ANA_UNION
 ����˵��  : RX Mode���ƼĴ����������߿��߼��������reg_analog_wr00
*****************************************************************************/
typedef HAL_ABB_WG_RX_3G_ANA_UNION      HAL_ABB_RX_IDLE_ANA_UNION;

/*****************************************************************************
 ������    : HAL_ABB_WG_LINE_CTRL_SEL_UNION
 ����˵��  : LTE�߿�ѡ��
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      g_en_sel            : 1;                /* 0: tie to 0 1: from line control */
        PHY_UINT16                      w_en_sel            : 1;                /* 0: tie to 0 1: from line control */
        PHY_UINT16                      lte_en_sel          : 1;                /* 0: tie to 0 1: from line control */
        PHY_UINT16                      reserved            : 15;               /* reserved */
    }stReg;
}HAL_ABB_WG_LINE_CTRL_SEL_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_TX_2G_ANA_UNION
 ����˵��  : TX Mode���ƼĴ����������߿��߼��������reg_analog_wr01
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      TX_MODE_CLK         : 2;                /* "ģʽ���ƣ�00��4G01��3G10��--11��2G��Ĭ�ϣ�"*/
        PHY_UINT16                      TX_MODE_ANA         : 1;                /* Reserved */
        PHY_UINT16                      TX_Q_PD             : 1;                /* "TX_Q DAC Power Down����0:Power On1:Power Down��Ĭ�ϣ� */
        PHY_UINT16                      TX_I_PD             : 1;                /* "TX_I DAC Power Down����0:Power On1:Power Down��Ĭ�ϣ� */
        PHY_UINT16                      TX_DIV_MODE         : 2;                /* "TX Mode ʱ�ӿ��ƣ�00: 1��Ƶ��Ĭ�ϣ�01: 2��Ƶ10: 3��Ƶ11: 4��Ƶ" */
        PHY_UINT16                      FC                  : 1;
        PHY_UINT16                      reserved            : 8;                /* reserved */
    }stReg;
}HAL_ABB_WG_TX_2G_ANA_UNION;

/*****************************************************************************
 ������    : HAL_ABB_WG_REG_ANALOG_RO0_UNION
 ����˵��  : ��ȡУ׼�Ƿ����
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      CAL_CNT             : 5;
        PHY_UINT16                      CAL_DONE            : 1;
        PHY_UINT16                      LOCK2               : 1;
        PHY_UINT16                      LOCK1               : 1;
        PHY_UINT16                                          : 8;
    }stReg;
}HAL_ABB_WG_REG_ANALOG_RO0_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_TX_3G_DIG_1_UNION
 ����˵��  : 3G Tx Dig�Ĵ���
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      tx_pd               : 1;                /*  */
        PHY_UINT16                      tx_comp_bp          : 1;                /*  */
        PHY_UINT16                      tx_hb_bp            : 1;                /*  */
        PHY_UINT16                      tx_rate             : 3;                /* */
        PHY_UINT16                      tx_mode_dig         : 2;                /*  */
        PHY_UINT16                      reserved            : 8;                /* reserved */
    }stReg;
}HAL_ABB_WG_TX_3G_DIG_1_UNION;

/*****************************************************************************
 ������    : HAL_ABB_WG_TX_4G_DIG_1_UNION
 ����˵��  : 4G Tx Dig�Ĵ���
*****************************************************************************/
typedef HAL_ABB_WG_TX_3G_DIG_1_UNION    HAL_ABB_WG_TX_4G_DIG_1_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_TX_4G_DIG_1_UNION
 ����˵��  : Tx Idle Dig1�Ĵ���
*****************************************************************************/
typedef HAL_ABB_WG_TX_3G_DIG_1_UNION    HAL_ABB_TX_IDLE_DIG_1_UNION;



/*****************************************************************************
 ������    : HAL_ABB_WG_TX_3G_DIG_1_UNION
 ����˵��  : 3G Tx Dig�Ĵ���
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      TX_MODE_CLK         : 2;                /* "ģʽ���ƣ�00��4G01��3G10��--11��2G��Ĭ�ϣ�"*/
        PHY_UINT16                      TX_MODE_ANA         : 1;                /* Reserved */
        PHY_UINT16                      TX_Q_PD             : 1;                /* "TX_Q DAC Power Down����0:Power On1:Power Down��Ĭ�ϣ� */
        PHY_UINT16                      TX_I_PD             : 1;                /* "TX_I DAC Power Down����0:Power On1:Power Down��Ĭ�ϣ� */
        PHY_UINT16                      TX_DIV_MODE         : 2;                /* "TX Mode ʱ�ӿ��ƣ�00: 1��Ƶ��Ĭ�ϣ�01: 2��Ƶ10: 3��Ƶ11: 4��Ƶ" */
        PHY_UINT16                      FC                  : 1;                /* reserved */
        PHY_UINT16                                          : 8;
    }stReg;
}HAL_ABB_WG_TX_3G_ANA_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_TX_4G_DIG_1_UNION
 ����˵��  : 4G Tx Dig�Ĵ���
*****************************************************************************/
typedef HAL_ABB_WG_TX_3G_ANA_UNION      HAL_ABB_WG_TX_4G_ANA_UNION;


/*****************************************************************************
 ������    : HAL_ABB_TX_IDLE_ANA_UNION
 ����˵��  : Tx IDle Ana�Ĵ���
*****************************************************************************/
typedef HAL_ABB_WG_TX_3G_ANA_UNION HAL_ABB_TX_IDLE_ANA_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_TX_2G_DIG_2_UNION
 ����˵��  : 2G Tx Dig 2 �Ĵ���
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      dem_const           : 3;                /* TX DEM constϵ����Ĭ��Ϊ0��*/
        PHY_UINT16                      tx_ddr_sdr          : 1;                /* "1'b0��SDR 1'b1��DDR" */
        PHY_UINT16                      dem_prg_en          : 1;                /* "TX DEM��PRG���ƣ�0��DEM������PRG��Ĭ�ϣ�1��DEM����PRG" */
        PHY_UINT16                      dem_dwa_en          : 1;                /* "TX DEM��DWAģʽ���ƣ�0��DEM��ʹ��DWAģʽ��Ĭ�ϣ�1��DEMʹ��DWAģʽ " */
        PHY_UINT16                      lsb_dem_bp          : 1;                /* "LSB 'TX DEM��bypass��0��DEM�򿪣�Ĭ�ϣ�1��DEM bypass" */
        PHY_UINT16                      msb_dem_bp          : 1;                /* TX DEM��bypass��0��DEM�򿪣�Ĭ�ϣ�1��DEM bypass" */
    }stReg;
}HAL_ABB_WG_TX_2G_DIG_2_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_TX_3G_DIG_2_UNION
 ����˵��  : 3G Tx Dig 2 �Ĵ���
*****************************************************************************/
typedef HAL_ABB_WG_TX_2G_DIG_2_UNION    HAL_ABB_WG_TX_3G_DIG_2_UNION;

/*****************************************************************************
 ������    : HAL_ABB_WG_TX_4G_DIG_2_UNION
 ����˵��  : 4G Tx Dig 2 �Ĵ���
*****************************************************************************/
typedef HAL_ABB_WG_TX_2G_DIG_2_UNION    HAL_ABB_WG_TX_4G_DIG_2_UNION;


/*****************************************************************************
 ������    : HAL_ABB_TX_IDLE_DIG_2_UNION
 ����˵��  : Tx Idle Dig 2 �Ĵ���
*****************************************************************************/
typedef HAL_ABB_WG_TX_2G_DIG_2_UNION    HAL_ABB_TX_IDLE_DIG_2_UNION;



/*****************************************************************************
 ������    : HAL_ABB_WG_RX_4G_DIG_1_UNION
 ����˵��  : 4G Rx Dig 1 �Ĵ���
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      rx_comp_bp          : 1;                /* TX DEM constϵ����Ĭ��Ϊ0��*/
        PHY_UINT16                      rx_comp_sel         : 1;                /* "1'b0��SDR 1'b1��DDR" */
        PHY_UINT16                      rx_hb_bp            : 1;                /* "TX DEM��PRG���ƣ�0��DEM������PRG��Ĭ�ϣ�1��DEM����PRG" */
        PHY_UINT16                      rx_rate             : 2;                /* "TX DEM��DWAģʽ���ƣ�0��DEM��ʹ��DWAģʽ��Ĭ�ϣ�1��DEMʹ��DWAģʽ " */
        PHY_UINT16                      rx_mode_dig         : 2;                /* "LSB 'TX DEM��bypass��0��DEM�򿪣�Ĭ�ϣ�1��DEM bypass" */
    }stReg;
}HAL_ABB_WG_RX_4G_DIG_1_UNION;



/*****************************************************************************
 ������    : HAL_ABB_REG_ANALOG_WR18_UNION
 ����˵��  : REG_ANALOG_WR18�Ĵ���
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                                          : 2;
        PHY_UINT16                      IB_AUXVCM           : 2;                /*  "AUXDAC��������:00:4u 01:5u 10:6u 11:7u" */
        PHY_UINT16                      IB_AUXVBP           : 2;                /* "AUXDAC��������:00:4u 01:5u 10:6u 11:7u" */
        PHY_UINT16                      IB_AUXI2V           : 2;                /* "AUXDAC��������:00:4u 01:5u 10:6u 11:7u */
    }stReg;
}HAL_ABB_REG_ANALOG_WR18_UNION;



/*****************************************************************************
 ������    : HAL_ABB_REG_ANALOG_WR37_UNION
 ����˵��  : REG_ANALOG_WR37�Ĵ���
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      ADJ26               : 3;
        PHY_UINT16                                          : 1;
        PHY_UINT16                      ADJ25               : 3;
        PHY_UINT16                                          : 1;
    }stReg;
}HAL_ABB_REG_ANALOG_WR37_UNION;



/*****************************************************************************
 ������    : HAL_ABB_WG_REG_DEBUG_ANA6_UNION
 ����˵��  : ģ����� �Ĵ���6
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      TCXO_RSVD           : 7;                /* TX DEM constϵ����Ĭ��Ϊ0��*/
        PHY_UINT16                      HLOD_BG             : 1;                /* "1'b0��SDR 1'b1��DDR" */
    }stReg;
}HAL_ABB_WG_REG_DEBUG_ANA6_UNION;

/*****************************************************************************
 ������    : HAL_ABB_WG_REG_DEBUG_ANA15_UNION
 ����˵��  : ģ����� �Ĵ���15
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      CLKGEN_DELAY        : 8;                /* TX DEM constϵ����Ĭ��Ϊ0��*/
    }stReg;
}HAL_ABB_WG_REG_DEBUG_ANA15_UNION;

/*****************************************************************************
 ������    : HAL_ABB_WG_REG_DEBUG_ANA20_UNION
 ����˵��  : ģ����� �Ĵ���20
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      Reserved            : 4;                /* TX DEM constϵ����Ĭ��Ϊ0��*/
        PHY_UINT16                      EXT_BG_EN           : 1;                /* TX DEM constϵ����Ĭ��Ϊ0��*/
        PHY_UINT16                      CAP_MULT            : 2;                /* TX DEM constϵ����Ĭ��Ϊ0��*/
        PHY_UINT16                      CAP_SEL             : 1;                /* TX DEM constϵ����Ĭ��Ϊ0��*/
    }stReg;
}HAL_ABB_WG_REG_DEBUG_ANA20_UNION;



/*****************************************************************************
 ������    : HAL_ABB_TESTMODE_UNION
 ����˵��  : TESTMODE�Ĵ���
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      rx_code_sel         : 1;                /*  "RXģ�����ģʽ�±���ѡ��*/
        PHY_UINT16                      rx_chnl_sel         : 2;                /*"RXģ�����ģʽ��ͨ��ѡ��*/
        PHY_UINT16                      test_mode           : 3;                /*  "����ģʽ���ƣ�*/
        PHY_UINT16                      sw_rst              : 1;                /*  "���õ���λ�źţ�0�������������λ��Ĭ�ϣ�1�����������λ" */
        PHY_UINT16                      pad_ds              : 1;
        PHY_UINT16                                          : 8;
    }stReg;
}HAL_ABB_TESTMODE_UNION;



/*****************************************************************************
 ������    : HAL_ABB_TESTMODE_UNION
 ����˵��  : TESTMODE�Ĵ���
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      rxa_pd              : 1;                /*  "RXģ�����ģʽ�±���ѡ��*/
        PHY_UINT16                      rxb_pd              : 1;                /*"RXģ�����ģʽ��ͨ��ѡ��*/
        PHY_UINT16                      gain_sel            : 2;                /*  "����ģʽ���ƣ�*/
        PHY_UINT16                      rx_ddr_sdr          : 1;                /*  "���õ���λ�źţ�0�������������λ��Ĭ�ϣ�1�����������λ" */
        PHY_UINT16                      Reserved            : 3;
        PHY_UINT16                                          : 8;
    }stReg;
}HAL_ABB_WG_RX_4G_DIG_2_UNION;

/*****************************************************************************
 ������    : HAL_ABB_REG_ABB_MODE_UNION
 ����˵��  : ABB˫ģ���ָʾ�Ĵ���
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      rx_sel              : 2;                /* rx */
        PHY_UINT16                      tx_sel              : 2;                /* tx */
        PHY_UINT16                      reserved1           : 12;               /* reserved */
    }stReg;
}HAL_ABB_REG_ABB_MODE_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_RX_2G_ANA_UNION
 ����˵��  : ģ����� �Ĵ���6
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      DEM_MOD_B0          : 1;                /* RX DEM Mode Selection,bit 0 */
        PHY_UINT16                      RX_MODE_CLK         : 2;                /* ģʽ���� 00:4G;01:3G;10:3G_DC;11:2G(Ĭ��) */
        PHY_UINT16                      DEM_MOD_B1          : 1;                /* RX DEM Mode Selection,bit 1 */
        PHY_UINT16                      RXB_Q_PD            : 1;                /* RXB_Q ADC Power Down���� */
        PHY_UINT16                      RXB_I_PD            : 1;                /* RXB_I ADC Power Down���� */
        PHY_UINT16                      RXA_Q_PD            : 1;                /* RXA_Q ADC Power Down���� */
        PHY_UINT16                      RXA_I_PD            : 1;                /* RXA_I ADC Power Down���� */
        PHY_UINT16                      reserved1           : 8;                /* ���� */
    }stReg;
}HAL_ABB_WG_RX_2G_ANA_UNION;



/*****************************************************************************
 ������    : HAL_ABB_WG_REG_DEBUG_ANA10_UNION
 ����˵��  : ģ����� �Ĵ���6
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      DAC_DUM_B1          : 1;                /* RX����sub_DAC Dummy��Ԫ����,DAC2 */
        PHY_UINT16                      DAC_DUM_B2          : 1;                /* RX����sub_DAC Dummy��Ԫ����,DAC3 */
        PHY_UINT16                      ADC_PUP_CTRL0       : 1;                /* ADC�е�һ�����������ݸ�λ���� */
        PHY_UINT16                      ADC_PUP_CTRL1       : 1;                /* ADC�еڶ������������ݸ�λ���� */
        PHY_UINT16                      ADC_PUP_CTRL2       : 1;                /* ADC�е��������������ݸ�λ���� */
        PHY_UINT16                      ADC_PUP_CTRL3       : 1;                /* ADC��CKGENģ��Powerup���� */
        PHY_UINT16                      ADC_PUP_CTRL4       : 1;                /* ADC��OPģ��Powerup���� */
        PHY_UINT16                      ADC_PUP_CTRL5       : 1;                /* ADC��DACģ��Powerup���� */
        PHY_UINT16                      reserved1           : 8;                /* ���� */
    }stReg;
}HAL_ABB_WG_REG_DEBUG_ANA10_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_REG_DEBUG_ANA15_V220_UNION
 ����˵��  : ģ����� �Ĵ���6
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      Reserved            : 2;                /* ���� */
        PHY_UINT16                      QT_DELAY            : 2;                /* ������ʱ���ӳټĴ��� */
        PHY_UINT16                      DAC3_DELAY          : 2;                /* DAC3ʱ���ӳټĴ��� */
        PHY_UINT16                      DAC12_DELAY         : 2;                /* DAC1��DAC2ʱ���ӳټĴ��� */
        PHY_UINT16                      reserved1           : 8;                /* ���� */
    }stReg;
}HAL_ABB_WG_REG_DEBUG_ANA15_V220_UNION;


/*****************************************************************************
 ������    : HAL_ABB_WG_REG_DEBUG_ANA7_UNION
 ����˵��  : ģ����� �Ĵ���6
*****************************************************************************/
typedef union
{
    PHY_UINT16                          uhwValue;

    struct
    {
        PHY_UINT16                      DRVBUF_CT           : 3;                /* L/W/G ����ADC ���Buffer�������ڿ��� */
        PHY_UINT16                      IREF_CTRL           : 3;                /* �����ο��������� */
        PHY_UINT16                      reserved1           : 10;               /* ���� */
    }stReg;
}HAL_ABB_WG_REG_DEBUG_ANA7_UNION;








/*****************************************************************************
  8 OTHERS����
*****************************************************************************/


/*****************************************************************************
  9 ȫ�ֱ�������
*****************************************************************************/




/*****************************************************************************
  10 ��������
*****************************************************************************/











#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif


#endif /*  */
