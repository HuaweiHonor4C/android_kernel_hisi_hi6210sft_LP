/******************************************************************************

                 ��Ȩ���� (C), 2001-2013, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : soc_pastar_interface.h
  �� �� ��   : ����
  ��    ��   : Excel2Code
  ��������   : 2013-04-08 19:04:14
  ����޸�   :
  ��������   : �ӿ�ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2013��4��8��
    ��    ��   : wwx168173
    �޸�����   : �ӡ�HI6561 PA Star nManager�Ĵ�������_PASTAR.xml���Զ�����

******************************************************************************/

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_PASTAR_INTERFACE_H__
#define __SOC_PASTAR_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/1) LTE_PMU
 ****************************************************************************/
/* �Ĵ���˵�����汾�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_VERSION_UNION */
#define SOC_PASTAR_VERSION_ADDR(base)                 ((base) + (0x20))

/* �Ĵ���˵����״̬��־1�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_STATUS1_UNION */
#define SOC_PASTAR_STATUS1_ADDR(base)                 ((base) + (0x21))

/* �Ĵ���˵�����������ƼĴ���1��
   λ����UNION�ṹ:  SOC_PASTAR_PERIPH_CTRL1_UNION */
#define SOC_PASTAR_PERIPH_CTRL1_ADDR(base)            ((base) + (0x22))

/* �Ĵ���˵�������ؿ���1�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_ONOFF1_UNION */
#define SOC_PASTAR_ONOFF1_ADDR(base)                  ((base) + (0x23))

/* �Ĵ���˵�������ؿ���2�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_ONOFF2_UNION */
#define SOC_PASTAR_ONOFF2_ADDR(base)                  ((base) + (0x24))

/* �Ĵ���˵����BUCK2��ѹ���ڼĴ�����
   λ����UNION�ṹ:  SOC_PASTAR_SET_BUCK2_UNION */
#define SOC_PASTAR_SET_BUCK2_ADDR(base)               ((base) + (0x26))

/* �Ĵ���˵����BUCK1��ѹ���ڼĴ�����
   λ����UNION�ṹ:  SOC_PASTAR_SET_BUCK1_UNION */
#define SOC_PASTAR_SET_BUCK1_ADDR(base)               ((base) + (0x27))

/* �Ĵ���˵����BUCK0��ѹ���ڼĴ�����
   λ����UNION�ṹ:  SOC_PASTAR_SET_BUCK0_UNION */
#define SOC_PASTAR_SET_BUCK0_ADDR(base)               ((base) + (0x28))

/* �Ĵ���˵����BUCK0����1�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_BUCK0_ADJ1_UNION */
#define SOC_PASTAR_BUCK0_ADJ1_ADDR(base)              ((base) + (0x29))

/* �Ĵ���˵����BUCK0����2�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_BUCK0_ADJ2_UNION */
#define SOC_PASTAR_BUCK0_ADJ2_ADDR(base)              ((base) + (0x2A))

/* �Ĵ���˵����BUCK0����3�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_BUCK0_ADJ3_UNION */
#define SOC_PASTAR_BUCK0_ADJ3_ADDR(base)              ((base) + (0x2B))

/* �Ĵ���˵����BUCK0����4�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_BUCK0_ADJ4_UNION */
#define SOC_PASTAR_BUCK0_ADJ4_ADDR(base)              ((base) + (0x2C))

/* �Ĵ���˵����BUCK0����5�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_BUCK0_ADJ5_UNION */
#define SOC_PASTAR_BUCK0_ADJ5_ADDR(base)              ((base) + (0x2D))

/* �Ĵ���˵����BUCK1����1�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_BUCK1_ADJ1_UNION */
#define SOC_PASTAR_BUCK1_ADJ1_ADDR(base)              ((base) + (0x30))

/* �Ĵ���˵����BUCK1����2�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_BUCK1_ADJ2_UNION */
#define SOC_PASTAR_BUCK1_ADJ2_ADDR(base)              ((base) + (0x31))

/* �Ĵ���˵����BUCK1����3�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_BUCK1_ADJ3_UNION */
#define SOC_PASTAR_BUCK1_ADJ3_ADDR(base)              ((base) + (0x32))

/* �Ĵ���˵����BUCK2����1�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_BUCK2_ADJ1_UNION */
#define SOC_PASTAR_BUCK2_ADJ1_ADDR(base)              ((base) + (0x36))

/* �Ĵ���˵����BUCK2����2�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_BUCK2_ADJ2_UNION */
#define SOC_PASTAR_BUCK2_ADJ2_ADDR(base)              ((base) + (0x37))

/* �Ĵ���˵����BUCK2����3�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_BUCK2_ADJ3_UNION */
#define SOC_PASTAR_BUCK2_ADJ3_ADDR(base)              ((base) + (0x38))

/* �Ĵ���˵����'BUCK2����4�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_BUCK2_ADJ4_UNION */
#define SOC_PASTAR_BUCK2_ADJ4_ADDR(base)              ((base) + (0x39))

/* �Ĵ���˵����BUCKƵ�ʿ���1�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_BUCK_CTRL1_UNION */
#define SOC_PASTAR_BUCK_CTRL1_ADDR(base)              ((base) + (0x45))

/* �Ĵ���˵����BUCK��Ƶ����2�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_BUCK_CTRL2_UNION */
#define SOC_PASTAR_BUCK_CTRL2_ADDR(base)              ((base) + (0x46))

/* �Ĵ���˵����LDO1��ѹ���ڼĴ�����
   λ����UNION�ṹ:  SOC_PASTAR_SET_LDO1_UNION */
#define SOC_PASTAR_SET_LDO1_ADDR(base)                ((base) + (0x48))

/* �Ĵ���˵����LDO2��ѹ���ڼĴ�����
   λ����UNION�ṹ:  SOC_PASTAR_SET_LDO2_UNION */
#define SOC_PASTAR_SET_LDO2_ADDR(base)                ((base) + (0x49))

/* �Ĵ���˵����LDO���ƼĴ�����
   λ����UNION�ṹ:  SOC_PASTAR_SET_LDO_CTRL_UNION */
#define SOC_PASTAR_SET_LDO_CTRL_ADDR(base)            ((base) + (0x4A))

/* �Ĵ���˵����PA_AMPLIFIER�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_PA_AMP_CTRL_UNION */
#define SOC_PASTAR_PA_AMP_CTRL_ADDR(base)             ((base) + (0x4B))

/* �Ĵ���˵����CLASSAB����1�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_CLASSAB_CTRL_UNION */
#define SOC_PASTAR_CLASSAB_CTRL_ADDR(base)            ((base) + (0x4C))

/* �Ĵ���˵����ILIM_CTRL����1�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_ILIM_CTRL1_UNION */
#define SOC_PASTAR_ILIM_CTRL1_ADDR(base)              ((base) + (0x4E))

/* �Ĵ���˵����ILIM_CTRL����1�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_ILIM_CTRL2_UNION */
#define SOC_PASTAR_ILIM_CTRL2_ADDR(base)              ((base) + (0x4F))

/* �Ĵ���˵����BANDGAP���ƼĴ�����
   λ����UNION�ṹ:  SOC_PASTAR_BANDGAP_UNION */
#define SOC_PASTAR_BANDGAP_ADDR(base)                 ((base) + (0x55))

/* �Ĵ���˵����PMUģ�ⲿ������Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_ANA_IN_UNION */
#define SOC_PASTAR_ANA_IN_ADDR(base)                  ((base) + (0x56))

/* �Ĵ���˵��������1�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_RESERVED1_UNION */
#define SOC_PASTAR_RESERVED1_ADDR(base)               ((base) + (0x57))

/* �Ĵ���˵��������2�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_RESERVED2_UNION */
#define SOC_PASTAR_RESERVED2_ADDR(base)               ((base) + (0x58))

/* �Ĵ���˵��������0�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_RESERVED0_UNION */
#define SOC_PASTAR_RESERVED0_ADDR(base)               ((base) + (0x59))

/* �Ĵ���˵����OTP���üĴ�����
   λ����UNION�ṹ:  SOC_PASTAR_SET_OTP_UNION */
#define SOC_PASTAR_SET_OTP_ADDR(base)                 ((base) + (0x5A))

/* �Ĵ���˵����OTP�����źżĴ�����
   λ����UNION�ṹ:  SOC_PASTAR_OTP_CTRL_UNION */
#define SOC_PASTAR_OTP_CTRL_ADDR(base)                ((base) + (0x5B))

/* �Ĵ���˵����OTPд��ֵ�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_OTP_PDIN_UNION */
#define SOC_PASTAR_OTP_PDIN_ADDR(base)                ((base) + (0x5C))

/* �Ĵ���˵����OTP����ֵ0�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_OTP_PDOB0_UNION */
#define SOC_PASTAR_OTP_PDOB0_ADDR(base)               ((base) + (0x5D))

/* �Ĵ���˵����OTP����ֵ1�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_OTP_PDOB1_UNION */
#define SOC_PASTAR_OTP_PDOB1_ADDR(base)               ((base) + (0x5E))

/* �Ĵ���˵����OTP����ֵ2�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_OTP_PDOB2_UNION */
#define SOC_PASTAR_OTP_PDOB2_ADDR(base)               ((base) + (0x5F))

/* �Ĵ���˵����OTP����ֵ3�Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_OTP_PDOB3_UNION */
#define SOC_PASTAR_OTP_PDOB3_ADDR(base)               ((base) + (0x60))

/* �Ĵ���˵�������µ���Ϣ����Ĵ�����
   λ����UNION�ṹ:  SOC_PASTAR_NO_PWR_REG_RO_UNION */
#define SOC_PASTAR_NO_PWR_REG_RO_ADDR(base)           ((base) + (0x6A))





/*****************************************************************************
  3 ö�ٶ���
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
  7 UNION����
*****************************************************************************/

/****************************************************************************
                     (1/1) LTE_PMU
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_PASTAR_VERSION_UNION
 �ṹ˵��  : VERSION �Ĵ����ṹ���塣��ַƫ����:0x20����ֵ:0x10�����:8
 �Ĵ���˵��: �汾�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  version : 8;  /* bit[0-7]: �汾�Ĵ�������ʾ�汾ΪV100�� */
    } reg;
} SOC_PASTAR_VERSION_UNION;
#endif
#define SOC_PASTAR_VERSION_version_START  (0)
#define SOC_PASTAR_VERSION_version_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_STATUS1_UNION
 �ṹ˵��  : STATUS1 �Ĵ����ṹ���塣��ַƫ����:0x21����ֵ:0x00�����:8
 �Ĵ���˵��: ״̬��־1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp_ldo1    : 1;  /* bit[0]: 0��LDO1��������أ�
                                                    1: LDO1������� ��  */
        unsigned char  ocp_ldo2    : 1;  /* bit[1]: 0��LDO2��������أ�
                                                    1: LDO2������ء�  */
        unsigned char  ocp_buck0   : 1;  /* bit[2]: 0��BUCK0��������أ�
                                                    1: BUCK0������ء�  */
        unsigned char  ocp_buck1   : 1;  /* bit[3]: 0��BUCK1��������أ�
                                                    1: BUCK1������ء�  */
        unsigned char  ocp_buck2   : 1;  /* bit[4]: 0��BUCK2��������أ�
                                                    1: BUCK2������ء�  */
        unsigned char  otmp150_d3r : 1;  /* bit[5]: 0: �¶�û�г���150�㣻
                                                    1�� �¶ȳ���150�� 3ms �� */
        unsigned char  otmp125_d3r : 1;  /* bit[6]: 0: �¶�û�г���125�㣻
                                                    1�� �¶ȳ���125�� 3ms �� */
        unsigned char  vdd_en_flag : 1;  /* bit[7]: VDD_EN flag�ź�  */
    } reg;
} SOC_PASTAR_STATUS1_UNION;
#endif
#define SOC_PASTAR_STATUS1_ocp_ldo1_START     (0)
#define SOC_PASTAR_STATUS1_ocp_ldo1_END       (0)
#define SOC_PASTAR_STATUS1_ocp_ldo2_START     (1)
#define SOC_PASTAR_STATUS1_ocp_ldo2_END       (1)
#define SOC_PASTAR_STATUS1_ocp_buck0_START    (2)
#define SOC_PASTAR_STATUS1_ocp_buck0_END      (2)
#define SOC_PASTAR_STATUS1_ocp_buck1_START    (3)
#define SOC_PASTAR_STATUS1_ocp_buck1_END      (3)
#define SOC_PASTAR_STATUS1_ocp_buck2_START    (4)
#define SOC_PASTAR_STATUS1_ocp_buck2_END      (4)
#define SOC_PASTAR_STATUS1_otmp150_d3r_START  (5)
#define SOC_PASTAR_STATUS1_otmp150_d3r_END    (5)
#define SOC_PASTAR_STATUS1_otmp125_d3r_START  (6)
#define SOC_PASTAR_STATUS1_otmp125_d3r_END    (6)
#define SOC_PASTAR_STATUS1_vdd_en_flag_START  (7)
#define SOC_PASTAR_STATUS1_vdd_en_flag_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_PERIPH_CTRL1_UNION
 �ṹ˵��  : PERIPH_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x22����ֵ:0x23�����:8
 �Ĵ���˵��: �������ƼĴ���1��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp_auto_off         : 1;  /* bit[0]  : 0����֧��OCPģ�飨LDO|BUCK���Զ��رգ�
                                                               1��֧��OCPģ�飨LDO|BUCK���Զ��رգ�  */
        unsigned char  otmp_off_ctrl        : 1;  /* bit[1]  : 0�����£�150�棩���ػ���
                                                               1������(150��)�ػ��� */
        unsigned char  ocp_deb_sel          : 2;  /* bit[2-3]: ocpȥ��ʱ�䣺
                                                               00��500us
                                                               01��1ms
                                                               10��2ms
                                                               11��4ms */
        unsigned char  en_buck_ocp_debounce : 1;  /* bit[4]  : 0��BUCK OCP�����ز�ȥ��
                                                               1��BUCK OCP������ȥ���� */
        unsigned char  en_ldo_ocp_debounce  : 1;  /* bit[5]  : 0��LDO OCP�����ز�ȥ��
                                                               1��LDO OCP������ȥ���� */
        unsigned char  reserved             : 2;  /* bit[6-7]: ���� */
    } reg;
} SOC_PASTAR_PERIPH_CTRL1_UNION;
#endif
#define SOC_PASTAR_PERIPH_CTRL1_ocp_auto_off_START          (0)
#define SOC_PASTAR_PERIPH_CTRL1_ocp_auto_off_END            (0)
#define SOC_PASTAR_PERIPH_CTRL1_otmp_off_ctrl_START         (1)
#define SOC_PASTAR_PERIPH_CTRL1_otmp_off_ctrl_END           (1)
#define SOC_PASTAR_PERIPH_CTRL1_ocp_deb_sel_START           (2)
#define SOC_PASTAR_PERIPH_CTRL1_ocp_deb_sel_END             (3)
#define SOC_PASTAR_PERIPH_CTRL1_en_buck_ocp_debounce_START  (4)
#define SOC_PASTAR_PERIPH_CTRL1_en_buck_ocp_debounce_END    (4)
#define SOC_PASTAR_PERIPH_CTRL1_en_ldo_ocp_debounce_START   (5)
#define SOC_PASTAR_PERIPH_CTRL1_en_ldo_ocp_debounce_END     (5)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_ONOFF1_UNION
 �ṹ˵��  : ONOFF1 �Ĵ����ṹ���塣��ַƫ����:0x23����ֵ:0x00�����:8
 �Ĵ���˵��: ���ؿ���1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  reserved_0   : 1;  /* bit[0]  : ������ */
        unsigned char  en_buck0_int : 1;  /* bit[1]  : 0���ر�BUCK0��
                                                       1: ����BUCK0��  */
        unsigned char  reserved_1   : 1;  /* bit[2]  : ������ */
        unsigned char  en_buck1_int : 1;  /* bit[3]  : 0���ر�BUCK1��
                                                       1: ����BUCK1��  */
        unsigned char  reserved_2   : 1;  /* bit[4]  : ������ */
        unsigned char  en_buck2_int : 1;  /* bit[5]  : 0���ر�BUCK2�� 
                                                       1������BUCK2 �� */
        unsigned char  reserved_3   : 2;  /* bit[6-7]: ����  */
    } reg;
} SOC_PASTAR_ONOFF1_UNION;
#endif
#define SOC_PASTAR_ONOFF1_en_buck0_int_START  (1)
#define SOC_PASTAR_ONOFF1_en_buck0_int_END    (1)
#define SOC_PASTAR_ONOFF1_en_buck1_int_START  (3)
#define SOC_PASTAR_ONOFF1_en_buck1_int_END    (3)
#define SOC_PASTAR_ONOFF1_en_buck2_int_START  (5)
#define SOC_PASTAR_ONOFF1_en_buck2_int_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_ONOFF2_UNION
 �ṹ˵��  : ONOFF2 �Ĵ����ṹ���塣��ַƫ����:0x24����ֵ:0x00�����:8
 �Ĵ���˵��: ���ؿ���2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  en_eco_ldo1_int : 1;  /* bit[0]  : 0��LDO1����ģʽ�����
                                                          1��LDO1����ģʽ�����  */
        unsigned char  en_ldo1_int     : 1;  /* bit[1]  : 0���ر�LDO1�� 
                                                          1:����LDO1 ��  */
        unsigned char  en_eco_ldo2_int : 1;  /* bit[2]  : 0��LDO2����ģʽ�����
                                                          1��LDO2����ģʽ�����  */
        unsigned char  en_ldo2_int     : 1;  /* bit[3]  : 0���ر�LDO2��
                                                          1:����LDO2��  */
        unsigned char  reserved        : 4;  /* bit[4-7]: ���� */
    } reg;
} SOC_PASTAR_ONOFF2_UNION;
#endif
#define SOC_PASTAR_ONOFF2_en_eco_ldo1_int_START  (0)
#define SOC_PASTAR_ONOFF2_en_eco_ldo1_int_END    (0)
#define SOC_PASTAR_ONOFF2_en_ldo1_int_START      (1)
#define SOC_PASTAR_ONOFF2_en_ldo1_int_END        (1)
#define SOC_PASTAR_ONOFF2_en_eco_ldo2_int_START  (2)
#define SOC_PASTAR_ONOFF2_en_eco_ldo2_int_END    (2)
#define SOC_PASTAR_ONOFF2_en_ldo2_int_START      (3)
#define SOC_PASTAR_ONOFF2_en_ldo2_int_END        (3)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_SET_BUCK2_UNION
 �ṹ˵��  : SET_BUCK2 �Ĵ����ṹ���塣��ַƫ����:0x26����ֵ:0x1E�����:8
 �Ĵ���˵��: BUCK2��ѹ���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_buck2        : 4;  /* bit[0-3]: BUCK2 ��ѹ���ڡ�
                                                            0x0: 1.00 V;
                                                            0x1: 1.10 V;
                                                            0x2: 1.15 V;
                                                            0x3: 1.20 V; 
                                                            0x4: 1.25 V;
                                                            0x5: 1.30 V; 
                                                            0x6: 1.35 V;
                                                            0x7: 1.40 V;
                                                            0x8: 1.45 V;
                                                            0x9: 1.50 V;
                                                            0xA: 1.55 V;
                                                            0xB: 1.60 V;
                                                            0xC: 1.70 V;
                                                            0xD: 1.75 V;
                                                            0xE:1.80 V; 
                                                            0xF: 1.85 V; */
        unsigned char  buck2_mod_sel_int : 2;  /* bit[4-5]: BUCK2��ģʽѡ��
                                                            00�������л�
                                                            X1��PWM;
                                                            10��PFM; */
        unsigned char  reserved          : 2;  /* bit[6-7]: ������ */
    } reg;
} SOC_PASTAR_SET_BUCK2_UNION;
#endif
#define SOC_PASTAR_SET_BUCK2_vset_buck2_START         (0)
#define SOC_PASTAR_SET_BUCK2_vset_buck2_END           (3)
#define SOC_PASTAR_SET_BUCK2_buck2_mod_sel_int_START  (4)
#define SOC_PASTAR_SET_BUCK2_buck2_mod_sel_int_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_SET_BUCK1_UNION
 �ṹ˵��  : SET_BUCK1 �Ĵ����ṹ���塣��ַƫ����:0x27����ֵ:0x18�����:8
 �Ĵ���˵��: BUCK1��ѹ���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_buck1        : 4;  /* bit[0-3]: BUCK1 ��ѹ���ڡ�
                                                            0x0: 1.50 V ��
                                                            0x1: 1.60 V ��
                                                            0x2: 1.70 V ��
                                                            0x3: 1.80 V �� 
                                                            0x4: 1.85 V ��
                                                            0x5: 1.90 V �� 
                                                            0x6: 2.00 V ��
                                                            0x7: 2.10 V ��
                                                            0x8: 2.20V ��
                                                            0x9: 2.25 V;
                                                            0xA: 2.30 V;
                                                            0xB: 2.35 V;
                                                            0xC: 2.50 V;
                                                            0xD: 2.80 V;
                                                            0xE: 2.85 V; 
                                                            0xF: 3.20 V; */
        unsigned char  buck1_mod_sel_int : 2;  /* bit[4-5]: BUCK1��ģʽѡ��
                                                            00�������л�
                                                            X1��PWM;
                                                            10��PFM; */
        unsigned char  reserved          : 2;  /* bit[6-7]: ������ */
    } reg;
} SOC_PASTAR_SET_BUCK1_UNION;
#endif
#define SOC_PASTAR_SET_BUCK1_vset_buck1_START         (0)
#define SOC_PASTAR_SET_BUCK1_vset_buck1_END           (3)
#define SOC_PASTAR_SET_BUCK1_buck1_mod_sel_int_START  (4)
#define SOC_PASTAR_SET_BUCK1_buck1_mod_sel_int_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_SET_BUCK0_UNION
 �ṹ˵��  : SET_BUCK0 �Ĵ����ṹ���塣��ַƫ����:0x28����ֵ:0x23�����:8
 �Ĵ���˵��: BUCK0��ѹ���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_buck0         : 4;  /* bit[0-3]: BUCK0 ��ѹ���ڡ�
                                                             0x0: 0.90 V;
                                                             0x1: 1.10 V;
                                                             0x2: 1.30 V;
                                                             0x3: 1.50 V; 
                                                             0x4: 1.70 V;
                                                             0x5: 1.90 V; 
                                                             0x6: 2.10 V;
                                                             0x7: 2.30 V;
                                                             0x8: 2.50 V;
                                                             0x9: 2.70 V;
                                                             0xA: 2.90 V;
                                                             0xB: 3.10 V;
                                                             0xC: 3.30 V;
                                                             0xD: 3.50 V;
                                                             0xE: 3.70 V; 
                                                             0xF: 3.90 V; */
        unsigned char  pdm_sel            : 1;  /* bit[4]  : ʹ��APT�����źš�
                                                             0��APT������Ч��
                                                             1��APT������Ч�� */
        unsigned char  buck0_mode_sel_int : 2;  /* bit[5-6]: BUCK0����ģʽѡ�� 
                                                             00:pwm��pfm�Զ��л���
                                                             01��������pwmģʽ��
                                                             10��������pfmģʽ�� 
                                                             Ĭ������ΪPWMģʽ�� */
        unsigned char  reserved           : 1;  /* bit[7]  : ������ */
    } reg;
} SOC_PASTAR_SET_BUCK0_UNION;
#endif
#define SOC_PASTAR_SET_BUCK0_vset_buck0_START          (0)
#define SOC_PASTAR_SET_BUCK0_vset_buck0_END            (3)
#define SOC_PASTAR_SET_BUCK0_pdm_sel_START             (4)
#define SOC_PASTAR_SET_BUCK0_pdm_sel_END               (4)
#define SOC_PASTAR_SET_BUCK0_buck0_mode_sel_int_START  (5)
#define SOC_PASTAR_SET_BUCK0_buck0_mode_sel_int_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_BUCK0_ADJ1_UNION
 �ṹ˵��  : BUCK0_ADJ1 �Ĵ����ṹ���塣��ַƫ����:0x29����ֵ:0xF6�����:8
 �Ĵ���˵��: BUCK0����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck0_comp_adj : 8;  /* bit[0-7]: BUCK0�ȶ��͵��ڼĴ���
                                                          <7>: ����PFM����ģʽ��еķ�ֵ������
                                                         0�����ӷ�ֵ����
                                                         1��Ĭ��ֵ
                                                         
                                                          
                                                         <6��0>�����ڵ���EA�Ŀ絼�������ĵ��� */
    } reg;
} SOC_PASTAR_BUCK0_ADJ1_UNION;
#endif
#define SOC_PASTAR_BUCK0_ADJ1_buck0_comp_adj_START  (0)
#define SOC_PASTAR_BUCK0_ADJ1_buck0_comp_adj_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_BUCK0_ADJ2_UNION
 �ṹ˵��  : BUCK0_ADJ2 �Ĵ����ṹ���塣��ַƫ����:0x2A����ֵ:0x69�����:8
 �Ĵ���˵��: BUCK0����2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  sg0_sel       : 2;  /* bit[0-1]: б�²��������� */
        unsigned char  sc0_sel       : 2;  /* bit[2-3]: б�²���������� */
        unsigned char  shortn_buck0  : 1;  /* bit[4]  : buck0�Ķ�·���������ź�
                                                        0���ж�·����
                                                        1���޶�·���� */
        unsigned char  ccm0_ctr      : 1;  /* bit[5]  : buck0��ǿ������ģʽ����
                                                        1��ǿ������ģʽ���ܹر�
                                                        0��ǿ������ģʽ���ܿ��� */
        unsigned char  buck0_dt_sel  : 1;  /* bit[6]  : BUCK0����ʱ�����
                                                        0����������ʱ��
                                                        1����С����ʱ�� */
        unsigned char  clampen_buck0 : 1;  /* bit[7]  : VZ��λ���ܿ���
                                                        0���ر���λ����
                                                        1��������λ���� */
    } reg;
} SOC_PASTAR_BUCK0_ADJ2_UNION;
#endif
#define SOC_PASTAR_BUCK0_ADJ2_sg0_sel_START        (0)
#define SOC_PASTAR_BUCK0_ADJ2_sg0_sel_END          (1)
#define SOC_PASTAR_BUCK0_ADJ2_sc0_sel_START        (2)
#define SOC_PASTAR_BUCK0_ADJ2_sc0_sel_END          (3)
#define SOC_PASTAR_BUCK0_ADJ2_shortn_buck0_START   (4)
#define SOC_PASTAR_BUCK0_ADJ2_shortn_buck0_END     (4)
#define SOC_PASTAR_BUCK0_ADJ2_ccm0_ctr_START       (5)
#define SOC_PASTAR_BUCK0_ADJ2_ccm0_ctr_END         (5)
#define SOC_PASTAR_BUCK0_ADJ2_buck0_dt_sel_START   (6)
#define SOC_PASTAR_BUCK0_ADJ2_buck0_dt_sel_END     (6)
#define SOC_PASTAR_BUCK0_ADJ2_clampen_buck0_START  (7)
#define SOC_PASTAR_BUCK0_ADJ2_clampen_buck0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_BUCK0_ADJ3_UNION
 �ṹ˵��  : BUCK0_ADJ3 �Ĵ����ṹ���塣��ַƫ����:0x2B����ֵ:0x20�����:8
 �Ĵ���˵��: BUCK0����3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp0_shield   : 1;  /* bit[0]  : BUCK0����������������;
                                                        0���й�����������;
                                                        1���޹�����������; */
        unsigned char  ocp0_3a_p     : 1;  /* bit[1]  : BUCK0����������;
                                                        0�����������;
                                                        1�����������; */
        unsigned char  buck0_hyctrl  : 1;  /* bit[2]  : APT����ʱ������3.8V�ĳ���
                                                        0��Ĭ��
                                                        1���Ӵ���� */
        unsigned char  ramp_sel      : 1;  /* bit[3]  : б�²��������ޣ�
                                                        0��Ĭ�ϣ���б�£�
                                                        1���ر�б�¡� */
        unsigned char  ton_sel       : 2;  /* bit[4-5]: ton,min��ʱ����ڣ�
                                                        00��5ns��
                                                        01��15ns��
                                                        10��25ns default��
                                                        11��35ns�� */
        unsigned char  buck0_dmd_sel : 2;  /* bit[6-7]: BUCK0 dmdֵ����@5Vin,3.8Vo
                                                        00:350mA;
                                                        10>350mA;
                                                        01<11<0mA; */
    } reg;
} SOC_PASTAR_BUCK0_ADJ3_UNION;
#endif
#define SOC_PASTAR_BUCK0_ADJ3_ocp0_shield_START    (0)
#define SOC_PASTAR_BUCK0_ADJ3_ocp0_shield_END      (0)
#define SOC_PASTAR_BUCK0_ADJ3_ocp0_3a_p_START      (1)
#define SOC_PASTAR_BUCK0_ADJ3_ocp0_3a_p_END        (1)
#define SOC_PASTAR_BUCK0_ADJ3_buck0_hyctrl_START   (2)
#define SOC_PASTAR_BUCK0_ADJ3_buck0_hyctrl_END     (2)
#define SOC_PASTAR_BUCK0_ADJ3_ramp_sel_START       (3)
#define SOC_PASTAR_BUCK0_ADJ3_ramp_sel_END         (3)
#define SOC_PASTAR_BUCK0_ADJ3_ton_sel_START        (4)
#define SOC_PASTAR_BUCK0_ADJ3_ton_sel_END          (5)
#define SOC_PASTAR_BUCK0_ADJ3_buck0_dmd_sel_START  (6)
#define SOC_PASTAR_BUCK0_ADJ3_buck0_dmd_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_BUCK0_ADJ4_UNION
 �ṹ˵��  : BUCK0_ADJ4 �Ĵ����ṹ���塣��ַƫ����:0x2C����ֵ:0x3A�����:8
 �Ĵ���˵��: BUCK0����4�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck0_reserv : 8;  /* bit[0-7]: <7:6>:����APT����ʱ����ο���ѹ��RC����
                                                       00��Ĭ��
                                                       <5>:��������delayֵcs_sel
                                                       1��Ĭ��
                                                       0���Ӵ�delay
                                                       <4>:APT����ʱ�������ֿ�device_sel
                                                       1��Ĭ�ϣ����ֿ�
                                                       0���ֿ�
                                                       <3>:PMOS��������ʱ�����PR
                                                       1:Ĭ��
                                                       0���Ӵ�����ʱ��
                                                       <2>:PMOS�����½�ʱ�����PF
                                                       0:Ĭ��
                                                       1���Ӵ��½�ʱ��
                                                       <1>:NMOS��������ʱ�����NR
                                                       1:Ĭ��
                                                       0���Ӵ�����ʱ��
                                                       <0>:NMOS�����½�ʱ�����NF
                                                       0:Ĭ��
                                                       1���Ӵ��½�ʱ�� */
    } reg;
} SOC_PASTAR_BUCK0_ADJ4_UNION;
#endif
#define SOC_PASTAR_BUCK0_ADJ4_buck0_reserv_START  (0)
#define SOC_PASTAR_BUCK0_ADJ4_buck0_reserv_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_BUCK0_ADJ5_UNION
 �ṹ˵��  : BUCK0_ADJ5 �Ĵ����ṹ���塣��ַƫ����:0x2D����ֵ:0x82�����:8
 �Ĵ���˵��: BUCK0����5�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck0_reserv2 : 7;  /* bit[0-6]: <6>:���ùر�DMD���ܡ�
                                                        0��Ĭ�ϣ����رգ�
                                                        1���رա�
                                                        <5:4>:����sense�ܴ��ĵ���CSC_SEL
                                                        00default 0pF
                                                        <3:2>:����isns���ĵ���CCC_SEL
                                                        00default 0pF
                                                        <1:0>:����EA����Թܴ��ĵ���EACAP_SEL
                                                        00default 1.8pF */
        unsigned char  en_vodet      : 1;  /* bit[7]  : vo��⹦�ܣ�
                                                        0x����vo��⣻
                                                        1��Ĭ�ϣ���vo��⣻ */
    } reg;
} SOC_PASTAR_BUCK0_ADJ5_UNION;
#endif
#define SOC_PASTAR_BUCK0_ADJ5_buck0_reserv2_START  (0)
#define SOC_PASTAR_BUCK0_ADJ5_buck0_reserv2_END    (6)
#define SOC_PASTAR_BUCK0_ADJ5_en_vodet_START       (7)
#define SOC_PASTAR_BUCK0_ADJ5_en_vodet_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_BUCK1_ADJ1_UNION
 �ṹ˵��  : BUCK1_ADJ1 �Ĵ����ṹ���塣��ַƫ����:0x30����ֵ:0x00�����:8
 �Ĵ���˵��: BUCK1����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck1_comp_adj : 8;  /* bit[0-7]: BUCK1�ȶ��͵��ڼĴ���
                                                          <7>: ��������GATE_DRV
                                                         1������
                                                         0����ǿ
                                                         <6��5>: ����EA�ڲ���·�������ݵĴ�С
                                                         00:3pF 01:0pF 10��4pF 11:1pF
                                                         <4��0>�����ڵ���EA�Ŀ絼�������ĵ��� */
    } reg;
} SOC_PASTAR_BUCK1_ADJ1_UNION;
#endif
#define SOC_PASTAR_BUCK1_ADJ1_buck1_comp_adj_START  (0)
#define SOC_PASTAR_BUCK1_ADJ1_buck1_comp_adj_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_BUCK1_ADJ2_UNION
 �ṹ˵��  : BUCK1_ADJ2 �Ĵ����ṹ���塣��ַƫ����:0x31����ֵ:0x29�����:8
 �Ĵ���˵��: BUCK1����2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck1_sg_sel  : 2;  /* bit[0-1]: б�²��������� */
        unsigned char  buck1_sc_sel  : 2;  /* bit[2-3]: б�²���������� */
        unsigned char  buck1_shortn  : 1;  /* bit[4]  : buck1�Ķ�·���������ź�
                                                        0���ж�·����
                                                        1���޶�·���� */
        unsigned char  buck1_ccm_ctr : 1;  /* bit[5]  : buck1��ǿ������ģʽ����
                                                        0��ǿ������ģʽ���ܿ���
                                                        1��ǿ������ģʽ���ܹر� */
        unsigned char  buck1_dt_sel  : 1;  /* bit[6]  : BUCK1����ʱ�����
                                                        0��Ĭ��
                                                        1����С����ʱ�� */
        unsigned char  buck1_clampen : 1;  /* bit[7]  : VZ��λ���ܿ���
                                                        0���ر���λ����
                                                        1��������λ���� */
    } reg;
} SOC_PASTAR_BUCK1_ADJ2_UNION;
#endif
#define SOC_PASTAR_BUCK1_ADJ2_buck1_sg_sel_START   (0)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_sg_sel_END     (1)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_sc_sel_START   (2)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_sc_sel_END     (3)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_shortn_START   (4)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_shortn_END     (4)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_ccm_ctr_START  (5)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_ccm_ctr_END    (5)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_dt_sel_START   (6)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_dt_sel_END     (6)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_clampen_START  (7)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_clampen_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_BUCK1_ADJ3_UNION
 �ṹ˵��  : BUCK1_ADJ3 �Ĵ����ṹ���塣��ַƫ����:0x32����ֵ:0x00�����:8
 �Ĵ���˵��: BUCK1����3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck1_ocp_shield : 1;  /* bit[0]  : BUCK1����������������
                                                           0���й�����������
                                                           1���޹����������� */
        unsigned char  buck1_nmos_shut  : 1;  /* bit[1]  : �ر�NMOS�� */
        unsigned char  buck1_dmd_sel    : 2;  /* bit[2-3]: ����DMD�ļ�����ֵ */
        unsigned char  buck1_reserv     : 3;  /* bit[4-6]: ����sensor��·
                                                           buck1_reserv<0> ���Ʋ������ʱ��
                                                           buck1_reserv<1> ���Ʋ�����·��·����
                                                           buck1_reserv<2> ����isn���� */
        unsigned char  reserved         : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_PASTAR_BUCK1_ADJ3_UNION;
#endif
#define SOC_PASTAR_BUCK1_ADJ3_buck1_ocp_shield_START  (0)
#define SOC_PASTAR_BUCK1_ADJ3_buck1_ocp_shield_END    (0)
#define SOC_PASTAR_BUCK1_ADJ3_buck1_nmos_shut_START   (1)
#define SOC_PASTAR_BUCK1_ADJ3_buck1_nmos_shut_END     (1)
#define SOC_PASTAR_BUCK1_ADJ3_buck1_dmd_sel_START     (2)
#define SOC_PASTAR_BUCK1_ADJ3_buck1_dmd_sel_END       (3)
#define SOC_PASTAR_BUCK1_ADJ3_buck1_reserv_START      (4)
#define SOC_PASTAR_BUCK1_ADJ3_buck1_reserv_END        (6)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_BUCK2_ADJ1_UNION
 �ṹ˵��  : BUCK2_ADJ1 �Ĵ����ṹ���塣��ַƫ����:0x36����ֵ:0x00�����:8
 �Ĵ���˵��: BUCK2����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck2_comp_adj : 8;  /* bit[0-7]: BUCK2�ȶ��͵��ڼĴ���
                                                          <7>: ����EA����ߵ�λ��λ��
                                                         1��1.8V
                                                         0��2.6V
                                                         <6>: ����PFM�����ıȽ�����ƫֵ����
                                                         1��1uA;
                                                         0��0.5uA
                                                         <5>: ����PFM����ģʽ��еķ�ֵ������
                                                         0�����ӷ�ֵ����
                                                         1��Ĭ��ֵ
                                                         <4��0>�����ڵ���EA�Ŀ絼�������ĵ��� */
    } reg;
} SOC_PASTAR_BUCK2_ADJ1_UNION;
#endif
#define SOC_PASTAR_BUCK2_ADJ1_buck2_comp_adj_START  (0)
#define SOC_PASTAR_BUCK2_ADJ1_buck2_comp_adj_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_BUCK2_ADJ2_UNION
 �ṹ˵��  : BUCK2_ADJ2 �Ĵ����ṹ���塣��ַƫ����:0x37����ֵ:0x29�����:8
 �Ĵ���˵��: BUCK2����2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck2_sg_sel  : 2;  /* bit[0-1]: б�²��������� */
        unsigned char  buck2_sc_sel  : 2;  /* bit[2-3]: б�²���������� */
        unsigned char  buck2_shortn  : 1;  /* bit[4]  : buck2�Ķ�·���������ź�
                                                        0���ж�·����
                                                        1���޶�·���� */
        unsigned char  buck2_ccm_ctr : 1;  /* bit[5]  : buck2��ǿ������ģʽ����
                                                        0��ǿ������ģʽ���ܿ���
                                                        1��ǿ������ģʽ���ܹر� */
        unsigned char  buck2_dt_sel  : 1;  /* bit[6]  : BUCK2����ʱ�����
                                                        0��Ĭ��
                                                        1����С����ʱ�� */
        unsigned char  buck2_clampen : 1;  /* bit[7]  : VZ��λ���ܿ���
                                                        0���ر���λ����
                                                        1��������λ���� */
    } reg;
} SOC_PASTAR_BUCK2_ADJ2_UNION;
#endif
#define SOC_PASTAR_BUCK2_ADJ2_buck2_sg_sel_START   (0)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_sg_sel_END     (1)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_sc_sel_START   (2)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_sc_sel_END     (3)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_shortn_START   (4)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_shortn_END     (4)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_ccm_ctr_START  (5)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_ccm_ctr_END    (5)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_dt_sel_START   (6)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_dt_sel_END     (6)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_clampen_START  (7)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_clampen_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_BUCK2_ADJ3_UNION
 �ṹ˵��  : BUCK2_ADJ3 �Ĵ����ṹ���塣��ַƫ����:0x38����ֵ:0x00�����:8
 �Ĵ���˵��: BUCK2����3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck2_ocp_shield : 1;  /* bit[0]  : BUCK2����������������
                                                           0���й�����������
                                                           1���޹����������� */
        unsigned char  buck2_nmos_shut  : 1;  /* bit[1]  : �ر�NMOS�� */
        unsigned char  buck2_dmd_sel    : 2;  /* bit[2-3]: ����DMD�ļ�����ֵ */
        unsigned char  buck2_reserv     : 3;  /* bit[4-6]: ����sensor��·
                                                           buck1_reserv<0> ���Ʋ������ʱ��
                                                           buck1_reserv<1> ���Ʋ�����·��·����
                                                           buck1_reserv<2> ����isn���� */
        unsigned char  reserved         : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_PASTAR_BUCK2_ADJ3_UNION;
#endif
#define SOC_PASTAR_BUCK2_ADJ3_buck2_ocp_shield_START  (0)
#define SOC_PASTAR_BUCK2_ADJ3_buck2_ocp_shield_END    (0)
#define SOC_PASTAR_BUCK2_ADJ3_buck2_nmos_shut_START   (1)
#define SOC_PASTAR_BUCK2_ADJ3_buck2_nmos_shut_END     (1)
#define SOC_PASTAR_BUCK2_ADJ3_buck2_dmd_sel_START     (2)
#define SOC_PASTAR_BUCK2_ADJ3_buck2_dmd_sel_END       (3)
#define SOC_PASTAR_BUCK2_ADJ3_buck2_reserv_START      (4)
#define SOC_PASTAR_BUCK2_ADJ3_buck2_reserv_END        (6)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_BUCK2_ADJ4_UNION
 �ṹ˵��  : BUCK2_ADJ4 �Ĵ����ṹ���塣��ַƫ����:0x39����ֵ:0x00�����:8
 �Ĵ���˵��: 'BUCK2����4�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck2_slope_gen : 2;  /* bit[0-1]: ����б�²����� */
        unsigned char  reserved        : 6;  /* bit[2-7]: ���� */
    } reg;
} SOC_PASTAR_BUCK2_ADJ4_UNION;
#endif
#define SOC_PASTAR_BUCK2_ADJ4_buck2_slope_gen_START  (0)
#define SOC_PASTAR_BUCK2_ADJ4_buck2_slope_gen_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_BUCK_CTRL1_UNION
 �ṹ˵��  : BUCK_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x45����ֵ:0x08�����:8
 �Ĵ���˵��: BUCKƵ�ʿ���1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck_osc_f : 5;  /* bit[0-4]: ����buckƵ��,Ĭ��Ƶ��Ϊ2MHz */
        unsigned char  reserved   : 3;  /* bit[5-7]: ���� */
    } reg;
} SOC_PASTAR_BUCK_CTRL1_UNION;
#endif
#define SOC_PASTAR_BUCK_CTRL1_buck_osc_f_START  (0)
#define SOC_PASTAR_BUCK_CTRL1_buck_osc_f_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_BUCK_CTRL2_UNION
 �ṹ˵��  : BUCK_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0x46����ֵ:0x00�����:8
 �Ĵ���˵��: BUCK��Ƶ����2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck_osc_random : 8;  /* bit[0-7]: buck��Ƶ���� */
    } reg;
} SOC_PASTAR_BUCK_CTRL2_UNION;
#endif
#define SOC_PASTAR_BUCK_CTRL2_buck_osc_random_START  (0)
#define SOC_PASTAR_BUCK_CTRL2_buck_osc_random_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_SET_LDO1_UNION
 �ṹ˵��  : SET_LDO1 �Ĵ����ṹ���塣��ַƫ����:0x48����ֵ:0x08�����:8
 �Ĵ���˵��: LDO1��ѹ���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo1 : 4;  /* bit[0-3]: LDO1 ��ѹ���ڡ� 
                                                    0x0: 1.50 V;
                                                    0x1: 1.60 V;
                                                    0x2: 1.70 V;
                                                    0x3: 1.80 V; 
                                                    0x4: 2.20 V;
                                                    0x5: 2.50 V; 
                                                    0x6: 2.60 V;
                                                    0x7: 2.70 V;
                                                    0x8: 2.80 V;
                                                    0x9: 2.90 V;
                                                    0xA: 3.00 V;
                                                    0xB: 3.10 V;
                                                    0xC: 3.20 V;
                                                    0xD: 3.30 V;
                                                    0xE: 3.40 V; 
                                                    0xF: 3.50 V;  */
        unsigned char  reserved  : 4;  /* bit[4-7]: ������ */
    } reg;
} SOC_PASTAR_SET_LDO1_UNION;
#endif
#define SOC_PASTAR_SET_LDO1_vset_ldo1_START  (0)
#define SOC_PASTAR_SET_LDO1_vset_ldo1_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_SET_LDO2_UNION
 �ṹ˵��  : SET_LDO2 �Ĵ����ṹ���塣��ַƫ����:0x49����ֵ:0x0D�����:8
 �Ĵ���˵��: LDO2��ѹ���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo2 : 4;  /* bit[0-3]: LDO2 ��ѹ���ڡ� 
                                                    0x0: 1.50 V;
                                                    0x1: 1.60 V;
                                                    0x2: 1.70 V;
                                                    0x3: 1.80 V; 
                                                    0x4: 2.20 V;
                                                    0x5: 2.50 V; 
                                                    0x6: 2.60 V;
                                                    0x7: 2.70 V;
                                                    0x8: 2.80 V;
                                                    0x9: 2.90 V;
                                                    0xA: 3.00 V;
                                                    0xB: 3.10 V;
                                                    0xC: 3.20 V;
                                                    0xD: 3.30 V;
                                                    0xE: 3.40 V; 
                                                    0xF: 3.50 V;
                                                      */
        unsigned char  reserved  : 4;  /* bit[4-7]: ������ */
    } reg;
} SOC_PASTAR_SET_LDO2_UNION;
#endif
#define SOC_PASTAR_SET_LDO2_vset_ldo2_START  (0)
#define SOC_PASTAR_SET_LDO2_vset_ldo2_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_SET_LDO_CTRL_UNION
 �ṹ˵��  : SET_LDO_CTRL �Ĵ����ṹ���塣��ַƫ����:0x4A����ֵ:0x01�����:8
 �Ĵ���˵��: LDO���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vs_delay_ldo_int    : 2;  /* bit[0-1]: 00:ECO-NORMAL�л�ʱ�佻��0us
                                                              01:ECO-NORMAL�л�ʱ�佻��30us
                                                              10:ECO-NORMAL�л�ʱ�佻��60us
                                                              11:ECO-NORMAL�л�ʱ�佻��90us */
        unsigned char  vs_en_ldo_delay_int : 2;  /* bit[2-3]: 00:�ӹرյ�NORMAL�л�ʱen_ldo��delayʱ���ѡ:
                                                              00:90us;
                                                              01:120us;
                                                              10:150us;
                                                              11:180us; */
        unsigned char  vs_ldo              : 3;  /* bit[4-6]: 300mA LDO �����ѹ΢���ź�  */
        unsigned char  reserved            : 1;  /* bit[7]  : ������ */
    } reg;
} SOC_PASTAR_SET_LDO_CTRL_UNION;
#endif
#define SOC_PASTAR_SET_LDO_CTRL_vs_delay_ldo_int_START     (0)
#define SOC_PASTAR_SET_LDO_CTRL_vs_delay_ldo_int_END       (1)
#define SOC_PASTAR_SET_LDO_CTRL_vs_en_ldo_delay_int_START  (2)
#define SOC_PASTAR_SET_LDO_CTRL_vs_en_ldo_delay_int_END    (3)
#define SOC_PASTAR_SET_LDO_CTRL_vs_ldo_START               (4)
#define SOC_PASTAR_SET_LDO_CTRL_vs_ldo_END                 (6)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_PA_AMP_CTRL_UNION
 �ṹ˵��  : PA_AMP_CTRL �Ĵ����ṹ���塣��ַƫ����:0x4B����ֵ:0x10�����:8
 �Ĵ���˵��: PA_AMPLIFIER�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  reg_cap    : 4;  /* bit[0-3]: 0000������������˵ĵ���ֵΪ0fp 0001������������˵ĵ���ֵΪ50fp 0011������������˵ĵ���ֵΪ100fp 0111������������˵ĵ���ֵΪ150fp 1111������������˵ĵ���ֵΪ200fp 
                                                     
                                                       */
        unsigned char  set_ib_amp : 1;  /* bit[4]  : 0:IB_AMP=0.25uA in APT mode 1:IB_AMP=0.50uA in APT mode */
        unsigned char  reserved   : 3;  /* bit[5-7]: ������ */
    } reg;
} SOC_PASTAR_PA_AMP_CTRL_UNION;
#endif
#define SOC_PASTAR_PA_AMP_CTRL_reg_cap_START     (0)
#define SOC_PASTAR_PA_AMP_CTRL_reg_cap_END       (3)
#define SOC_PASTAR_PA_AMP_CTRL_set_ib_amp_START  (4)
#define SOC_PASTAR_PA_AMP_CTRL_set_ib_amp_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_CLASSAB_CTRL_UNION
 �ṹ˵��  : CLASSAB_CTRL �Ĵ����ṹ���塣��ַƫ����:0x4C����ֵ:0x03�����:8
 �Ĵ���˵��: CLASSAB����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ibd      : 3;  /* bit[0-2]: 011������3u
                                                   101������2u 
                                                   110������1u
                                                   001������5u
                                                   010������4u */
        unsigned char  reserved : 5;  /* bit[3-7]: ������ */
    } reg;
} SOC_PASTAR_CLASSAB_CTRL_UNION;
#endif
#define SOC_PASTAR_CLASSAB_CTRL_ibd_START       (0)
#define SOC_PASTAR_CLASSAB_CTRL_ibd_END         (2)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_ILIM_CTRL1_UNION
 �ṹ˵��  : ILIM_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x4E����ֵ:0x00�����:8
 �Ĵ���˵��: ILIM_CTRL����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lit_cur_set  : 3;  /* bit[0-2]: 000��ѡ��500mA��λ;
                                                       001��ѡ��300mA��λ(����ATE TRIM);
                                                       010��ѡ��200mA��λ(����ATE TRIM);
                                                       011��ѡ��������λ;
                                                       100��ѡ��1800mA��λ;
                                                       101��ѡ��1500mA��λ;
                                                       110��ѡ��1200mA��λ;
                                                       111��ѡ��900mA��λ ; 
                                                       
                                                         */
        unsigned char  clim_op_isel : 1;  /* bit[3]  : 0:�˷�ƫ�õ���ѡ��2.5uA;
                                                       1���˷�ƫ�õ���ѡ��1.5uA; */
        unsigned char  pro_mode     : 1;  /* bit[4]  : 0:�������������ģʽ; 
                                                       1:�رմ��������ģʽ; */
        unsigned char  reserved     : 3;  /* bit[5-7]: ������ */
    } reg;
} SOC_PASTAR_ILIM_CTRL1_UNION;
#endif
#define SOC_PASTAR_ILIM_CTRL1_lit_cur_set_START   (0)
#define SOC_PASTAR_ILIM_CTRL1_lit_cur_set_END     (2)
#define SOC_PASTAR_ILIM_CTRL1_clim_op_isel_START  (3)
#define SOC_PASTAR_ILIM_CTRL1_clim_op_isel_END    (3)
#define SOC_PASTAR_ILIM_CTRL1_pro_mode_START      (4)
#define SOC_PASTAR_ILIM_CTRL1_pro_mode_END        (4)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_ILIM_CTRL2_UNION
 �ṹ˵��  : ILIM_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0x4F����ֵ:0x00�����:8
 �Ĵ���˵��: ILIM_CTRL����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  clim_vos : 4;  /* bit[0-3]: ��������trim�ź�;
                                                   
                                                     */
        unsigned char  clim_ctl : 4;  /* bit[4-7]: ��������trim�ź�; */
    } reg;
} SOC_PASTAR_ILIM_CTRL2_UNION;
#endif
#define SOC_PASTAR_ILIM_CTRL2_clim_vos_START  (0)
#define SOC_PASTAR_ILIM_CTRL2_clim_vos_END    (3)
#define SOC_PASTAR_ILIM_CTRL2_clim_ctl_START  (4)
#define SOC_PASTAR_ILIM_CTRL2_clim_ctl_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_BANDGAP_UNION
 �ṹ˵��  : BANDGAP �Ĵ����ṹ���塣��ַƫ����:0x55����ֵ:0x04�����:8
 �Ĵ���˵��: BANDGAP���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  test_bg  : 2;  /* bit[0-1]: TEST_BG<1>:
                                                   1:��ʾcurrent switch��
                                                   0����ʾcurrent switch��
                                                   TEST_BG<0>��
                                                   1����ʾ�������ģʽ
                                                   0����ʾ��������ģʽ
                                                   
                                                     */
        unsigned char  en_tmp   : 1;  /* bit[2]  : 0:THSD���±���ģ��ر�
                                                   1:THSD���±���ģ�鿪�� */
        unsigned char  reserved : 5;  /* bit[3-7]: ������ */
    } reg;
} SOC_PASTAR_BANDGAP_UNION;
#endif
#define SOC_PASTAR_BANDGAP_test_bg_START   (0)
#define SOC_PASTAR_BANDGAP_test_bg_END     (1)
#define SOC_PASTAR_BANDGAP_en_tmp_START    (2)
#define SOC_PASTAR_BANDGAP_en_tmp_END      (2)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_ANA_IN_UNION
 �ṹ˵��  : ANA_IN �Ĵ����ṹ���塣��ַƫ����:0x56����ֵ:0x00�����:8
 �Ĵ���˵��: PMUģ�ⲿ������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ana_in_2d : 8;  /* bit[0-7]: PMUģ�ⲿ�����룬8bits��ͨ���Ĵ�������������ʹ�á� */
    } reg;
} SOC_PASTAR_ANA_IN_UNION;
#endif
#define SOC_PASTAR_ANA_IN_ana_in_2d_START  (0)
#define SOC_PASTAR_ANA_IN_ana_in_2d_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_RESERVED1_UNION
 �ṹ˵��  : RESERVED1 �Ĵ����ṹ���塣��ַƫ����:0x57����ֵ:0x00�����:8
 �Ĵ���˵��: ����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  reserved  : 8;  /* bit[0-7]: �����ü�����δ���� */
    } reg;
} SOC_PASTAR_RESERVED1_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_RESERVED2_UNION
 �ṹ˵��  : RESERVED2 �Ĵ����ṹ���塣��ַƫ����:0x58����ֵ:0x00�����:8
 �Ĵ���˵��: ����2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  reserved  : 8;  /* bit[0-7]: �����ü�����δ���� */
    } reg;
} SOC_PASTAR_RESERVED2_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_RESERVED0_UNION
 �ṹ˵��  : RESERVED0 �Ĵ����ṹ���塣��ַƫ����:0x59����ֵ:0x00�����:8
 �Ĵ���˵��: ����0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  reserved  : 8;  /* bit[0-7]: �����ü�����δ���� */
    } reg;
} SOC_PASTAR_RESERVED0_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_SET_OTP_UNION
 �ṹ˵��  : SET_OTP �Ĵ����ṹ���塣��ַƫ����:0x5A����ֵ:0x00�����:8
 �Ĵ���˵��: OTP���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otp_por_pulse  : 1;  /* bit[0]  : 0�����������壻
                                                         1����otp_read_mask=1ʱ������һ��31000ns�ĸߵ�ƽ���塣 */
        unsigned char  otp_read_mask  : 1;  /* bit[1]  : 0����otp_por�źſ���OTP�Ķ�������
                                                         1:��otp_por_pulse�źſ���OTP�Ķ������� */
        unsigned char  otp_pwe_pulse  : 1;  /* bit[2]  : 0�����������壻
                                                         1����otp_write_mask=1ʱ������һ��310us�ĸߵ�ƽ���塣 */
        unsigned char  otp_write_mask : 1;  /* bit[3]  : 0:��otp_pwe�źſ���OTP��д������
                                                         1:��otp_pwe_pulse�źſ���OTP��д������ */
        unsigned char  reserved       : 4;  /* bit[4-7]: ������ */
    } reg;
} SOC_PASTAR_SET_OTP_UNION;
#endif
#define SOC_PASTAR_SET_OTP_otp_por_pulse_START   (0)
#define SOC_PASTAR_SET_OTP_otp_por_pulse_END     (0)
#define SOC_PASTAR_SET_OTP_otp_read_mask_START   (1)
#define SOC_PASTAR_SET_OTP_otp_read_mask_END     (1)
#define SOC_PASTAR_SET_OTP_otp_pwe_pulse_START   (2)
#define SOC_PASTAR_SET_OTP_otp_pwe_pulse_END     (2)
#define SOC_PASTAR_SET_OTP_otp_write_mask_START  (3)
#define SOC_PASTAR_SET_OTP_otp_write_mask_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_OTP_CTRL_UNION
 �ṹ˵��  : OTP_CTRL �Ĵ����ṹ���塣��ַƫ����:0x5B����ֵ:0x00�����:8
 �Ĵ���˵��: OTP�����źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otp_pwe_int : 1;  /* bit[0]  : OTPд�����źš� */
        unsigned char  otp_por_int : 1;  /* bit[1]  : OTP�������źš� */
        unsigned char  otp_pa      : 2;  /* bit[2-3]: OTP�ĵ�ַ�źš� */
        unsigned char  otp_ptm     : 2;  /* bit[4-5]: ����ģʽʹ���źš� */
        unsigned char  otp_pprog   : 1;  /* bit[6]  : ���ģʽʹ���źš� */
        unsigned char  reserved    : 1;  /* bit[7]  : ������ */
    } reg;
} SOC_PASTAR_OTP_CTRL_UNION;
#endif
#define SOC_PASTAR_OTP_CTRL_otp_pwe_int_START  (0)
#define SOC_PASTAR_OTP_CTRL_otp_pwe_int_END    (0)
#define SOC_PASTAR_OTP_CTRL_otp_por_int_START  (1)
#define SOC_PASTAR_OTP_CTRL_otp_por_int_END    (1)
#define SOC_PASTAR_OTP_CTRL_otp_pa_START       (2)
#define SOC_PASTAR_OTP_CTRL_otp_pa_END         (3)
#define SOC_PASTAR_OTP_CTRL_otp_ptm_START      (4)
#define SOC_PASTAR_OTP_CTRL_otp_ptm_END        (5)
#define SOC_PASTAR_OTP_CTRL_otp_pprog_START    (6)
#define SOC_PASTAR_OTP_CTRL_otp_pprog_END      (6)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_OTP_PDIN_UNION
 �ṹ˵��  : OTP_PDIN �Ĵ����ṹ���塣��ַƫ����:0x5C����ֵ:0x00�����:8
 �Ĵ���˵��: OTPд��ֵ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otp_pdin : 8;  /* bit[0-7]: OTP������ֵ�Ĵ����� */
    } reg;
} SOC_PASTAR_OTP_PDIN_UNION;
#endif
#define SOC_PASTAR_OTP_PDIN_otp_pdin_START  (0)
#define SOC_PASTAR_OTP_PDIN_otp_pdin_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_OTP_PDOB0_UNION
 �ṹ˵��  : OTP_PDOB0 �Ĵ����ṹ���塣��ַƫ����:0x5D����ֵ:0x00�����:8
 �Ĵ���˵��: OTP����ֵ0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otp_pdob0 : 8;  /* bit[0-7]: OTP_PDOB[7:0]�� */
    } reg;
} SOC_PASTAR_OTP_PDOB0_UNION;
#endif
#define SOC_PASTAR_OTP_PDOB0_otp_pdob0_START  (0)
#define SOC_PASTAR_OTP_PDOB0_otp_pdob0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_OTP_PDOB1_UNION
 �ṹ˵��  : OTP_PDOB1 �Ĵ����ṹ���塣��ַƫ����:0x5E����ֵ:0x00�����:8
 �Ĵ���˵��: OTP����ֵ1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otp_pdob1 : 8;  /* bit[0-7]: OTP_PDOB[15:8]�� */
    } reg;
} SOC_PASTAR_OTP_PDOB1_UNION;
#endif
#define SOC_PASTAR_OTP_PDOB1_otp_pdob1_START  (0)
#define SOC_PASTAR_OTP_PDOB1_otp_pdob1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_OTP_PDOB2_UNION
 �ṹ˵��  : OTP_PDOB2 �Ĵ����ṹ���塣��ַƫ����:0x5F����ֵ:0x00�����:8
 �Ĵ���˵��: OTP����ֵ2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otp_pdob2 : 8;  /* bit[0-7]: OTP_PDOB[23:16]�� */
    } reg;
} SOC_PASTAR_OTP_PDOB2_UNION;
#endif
#define SOC_PASTAR_OTP_PDOB2_otp_pdob2_START  (0)
#define SOC_PASTAR_OTP_PDOB2_otp_pdob2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_OTP_PDOB3_UNION
 �ṹ˵��  : OTP_PDOB3 �Ĵ����ṹ���塣��ַƫ����:0x60����ֵ:0x00�����:8
 �Ĵ���˵��: OTP����ֵ3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otp_pdob3 : 8;  /* bit[0-7]: OTP_PDOB[31:24]�� */
    } reg;
} SOC_PASTAR_OTP_PDOB3_UNION;
#endif
#define SOC_PASTAR_OTP_PDOB3_otp_pdob3_START  (0)
#define SOC_PASTAR_OTP_PDOB3_otp_pdob3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PASTAR_NO_PWR_REG_RO_UNION
 �ṹ˵��  : NO_PWR_REG_RO �Ĵ����ṹ���塣��ַƫ����:0x6A����ֵ:0x80�����:8
 �Ĵ���˵��: ���µ���Ϣ����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp_ldo1_masked  : 1;  /* bit[0]: 0: LDO1û�й�����
                                                         1��LDO1������ */
        unsigned char  ocp_ldo2_masked  : 1;  /* bit[1]: 0: LDO2û�й�����
                                                         1��LDO2������ */
        unsigned char  ocp_buck0_masked : 1;  /* bit[2]: 0: buck0û�й�����
                                                         1��buck0������ */
        unsigned char  ocp_buck1_masked : 1;  /* bit[3]: 0: buck1û�й�����
                                                         1��buck1������ */
        unsigned char  ocp_buck2_masked : 1;  /* bit[4]: 0: buck2û�й�����
                                                         1��buck2������ */
        unsigned char  otmp150_d3r      : 1;  /* bit[5]: 0: �¶�û�г���150�㣻
                                                         1�� �¶ȳ���150�� 3ms �� */
        unsigned char  otmp125_d3r      : 1;  /* bit[6]: 0: �¶�û�г���125�㣻
                                                         1�� �¶ȳ���125�� 3ms �� */
        unsigned char  vdd_en_flag      : 1;  /* bit[7]: VDD_EN flag�ź�  */
    } reg;
} SOC_PASTAR_NO_PWR_REG_RO_UNION;
#endif
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_ldo1_masked_START   (0)
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_ldo1_masked_END     (0)
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_ldo2_masked_START   (1)
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_ldo2_masked_END     (1)
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_buck0_masked_START  (2)
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_buck0_masked_END    (2)
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_buck1_masked_START  (3)
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_buck1_masked_END    (3)
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_buck2_masked_START  (4)
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_buck2_masked_END    (4)
#define SOC_PASTAR_NO_PWR_REG_RO_otmp150_d3r_START       (5)
#define SOC_PASTAR_NO_PWR_REG_RO_otmp150_d3r_END         (5)
#define SOC_PASTAR_NO_PWR_REG_RO_otmp125_d3r_START       (6)
#define SOC_PASTAR_NO_PWR_REG_RO_otmp125_d3r_END         (6)
#define SOC_PASTAR_NO_PWR_REG_RO_vdd_en_flag_START       (7)
#define SOC_PASTAR_NO_PWR_REG_RO_vdd_en_flag_END         (7)






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

#endif /* end of soc_pastar_interface.h */
