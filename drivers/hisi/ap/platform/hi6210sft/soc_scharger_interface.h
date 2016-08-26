

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_SCHARGER_INTERFACE_H__
#define __SOC_SCHARGER_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/2) SHEET_NAME
 ****************************************************************************/
/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_SCHARGER_a_UNION */
#define SOC_SCHARGER_a_ADDR(base)                     ((base) + (0x0000))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_SCHARGER_b_UNION */
#define SOC_SCHARGER_b_ADDR(base)                     ((base) + (0x0000))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_SCHARGER_c_UNION */
#define SOC_SCHARGER_c_ADDR(base)                     ((base) + (0x0000))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_SCHARGER_d_UNION */
#define SOC_SCHARGER_d_ADDR(base)                     ((base) + (0x0000))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_SCHARGER_e_UNION */
#define SOC_SCHARGER_e_ADDR(base)                     ((base) + (0x0000))



/****************************************************************************
                     (2/2) register_define
 ****************************************************************************/
/* �Ĵ���˵����оƬ�汾�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_CHIP_VERSION_UNION */
#define SOC_SCHARGER_CHIP_VERSION_ADDR(base)          ((base) + (0x00))

/* �Ĵ���˵����״̬0�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_STATUS0_UNION */
#define SOC_SCHARGER_STATUS0_ADDR(base)               ((base) + (0x01))

/* �Ĵ���˵����״̬1�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_STATUS1_UNION */
#define SOC_SCHARGER_STATUS1_ADDR(base)               ((base) + (0x02))

/* �Ĵ���˵����״̬2�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_STATUS2_UNION */
#define SOC_SCHARGER_STATUS2_ADDR(base)               ((base) + (0x03))

/* �Ĵ���˵����״̬3�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_STATUS3_UNION */
#define SOC_SCHARGER_STATUS3_ADDR(base)               ((base) + (0x04))

/* �Ĵ���˵����״̬4�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_STATUS4_UNION */
#define SOC_SCHARGER_STATUS4_ADDR(base)               ((base) + (0x05))

/* �Ĵ���˵����״̬5�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_STATUS5_UNION */
#define SOC_SCHARGER_STATUS5_ADDR(base)               ((base) + (0x06))

/* �Ĵ���˵�����ж�0�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_IRQ0_UNION */
#define SOC_SCHARGER_IRQ0_ADDR(base)                  ((base) + (0x07))

/* �Ĵ���˵�����ж�1�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_IRQ1_UNION */
#define SOC_SCHARGER_IRQ1_ADDR(base)                  ((base) + (0x08))

/* �Ĵ���˵�����ж�2�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_IRQ2_UNION */
#define SOC_SCHARGER_IRQ2_ADDR(base)                  ((base) + (0x09))

/* �Ĵ���˵�����ж�3�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_IRQ3_UNION */
#define SOC_SCHARGER_IRQ3_ADDR(base)                  ((base) + (0x0A))

/* �Ĵ���˵�����ж�4�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_IRQ4_UNION */
#define SOC_SCHARGER_IRQ4_ADDR(base)                  ((base) + (0x0B))

/* �Ĵ���˵�����ж�����0�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_IRQM0_UNION */
#define SOC_SCHARGER_IRQM0_ADDR(base)                 ((base) + (0x0C))

/* �Ĵ���˵�����ж�����1�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_IRQM1_UNION */
#define SOC_SCHARGER_IRQM1_ADDR(base)                 ((base) + (0x0D))

/* �Ĵ���˵�����ж�����2�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_IRQM2_UNION */
#define SOC_SCHARGER_IRQM2_ADDR(base)                 ((base) + (0x0E))

/* �Ĵ���˵�����ж�����3�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_IRQM3_UNION */
#define SOC_SCHARGER_IRQM3_ADDR(base)                 ((base) + (0x0F))

/* �Ĵ���˵�����ж�����4�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_IRQM4_UNION */
#define SOC_SCHARGER_IRQM4_ADDR(base)                 ((base) + (0x10))

/* �Ĵ���˵�������ؿ���0�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_ONFF0_UNION */
#define SOC_SCHARGER_ONFF0_ADDR(base)                 ((base) + (0x11))

/* �Ĵ���˵�������ؿ���1�Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_ONFF1_UNION */
#define SOC_SCHARGER_ONFF1_ADDR(base)                 ((base) + (0x12))

/* �Ĵ���˵�����¶ȱ����Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_REF_REG_UNION */
#define SOC_SCHARGER_REF_REG_ADDR(base)               ((base) + (0x13))

/* �Ĵ���˵������ع�ѹ��ѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_SCHARGER_VBAT_OV_SEL_UNION */
#define SOC_SCHARGER_VBAT_OV_SEL_ADDR(base)           ((base) + (0x14))

/* �Ĵ���˵����WLED_REG0���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_WLED_REG0_UNION */
#define SOC_SCHARGER_WLED_REG0_ADDR(base)             ((base) + (0x15))

/* �Ĵ���˵����WLED_REG1���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_WLED_REG1_UNION */
#define SOC_SCHARGER_WLED_REG1_ADDR(base)             ((base) + (0x16))

/* �Ĵ���˵����WLED_REG2���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_WLED_REG2_UNION */
#define SOC_SCHARGER_WLED_REG2_ADDR(base)             ((base) + (0x17))

/* �Ĵ���˵����WLED_REG3���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_WLED_REG3_UNION */
#define SOC_SCHARGER_WLED_REG3_ADDR(base)             ((base) + (0x18))

/* �Ĵ���˵����WLED_REG4���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_WLED_REG4_UNION */
#define SOC_SCHARGER_WLED_REG4_ADDR(base)             ((base) + (0x19))

/* �Ĵ���˵����WLED_REG5���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_WLED_REG5_UNION */
#define SOC_SCHARGER_WLED_REG5_ADDR(base)             ((base) + (0x1A))

/* �Ĵ���˵����WLED_REG6���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_WLED_REG6_UNION */
#define SOC_SCHARGER_WLED_REG6_ADDR(base)             ((base) + (0x1B))

/* �Ĵ���˵����WLED_REG7���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_WLED_REG7_UNION */
#define SOC_SCHARGER_WLED_REG7_ADDR(base)             ((base) + (0x1C))

/* �Ĵ���˵����WLED_REG8���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_WLED_REG8_UNION */
#define SOC_SCHARGER_WLED_REG8_ADDR(base)             ((base) + (0x1D))

/* �Ĵ���˵����WLED_REG9���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_WLED_REG9_UNION */
#define SOC_SCHARGER_WLED_REG9_ADDR(base)             ((base) + (0x1E))

/* �Ĵ���˵����LCD_BOOST_REG0���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_BOOST_REG0_UNION */
#define SOC_SCHARGER_LCD_BOOST_REG0_ADDR(base)        ((base) + (0x1F))

/* �Ĵ���˵����LCD_BOOST_REG1���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_BOOST_REG1_UNION */
#define SOC_SCHARGER_LCD_BOOST_REG1_ADDR(base)        ((base) + (0x20))

/* �Ĵ���˵����LCD_BOOST_REG2���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_BOOST_REG2_UNION */
#define SOC_SCHARGER_LCD_BOOST_REG2_ADDR(base)        ((base) + (0x21))

/* �Ĵ���˵����LCD_BOOST_REG3���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_BOOST_REG3_UNION */
#define SOC_SCHARGER_LCD_BOOST_REG3_ADDR(base)        ((base) + (0x22))

/* �Ĵ���˵����LCD_BOOST_REG4���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_BOOST_REG4_UNION */
#define SOC_SCHARGER_LCD_BOOST_REG4_ADDR(base)        ((base) + (0x23))

/* �Ĵ���˵����LCD_BOOST_REG5���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_BOOST_REG5_UNION */
#define SOC_SCHARGER_LCD_BOOST_REG5_ADDR(base)        ((base) + (0x24))

/* �Ĵ���˵����LCD_BOOST_REG6���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_BOOST_REG6_UNION */
#define SOC_SCHARGER_LCD_BOOST_REG6_ADDR(base)        ((base) + (0x25))

/* �Ĵ���˵����LCD_BOOST_REG7���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_BOOST_REG7_UNION */
#define SOC_SCHARGER_LCD_BOOST_REG7_ADDR(base)        ((base) + (0x26))

/* �Ĵ���˵����LCD_BOOST_REG8���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_BOOST_REG8_UNION */
#define SOC_SCHARGER_LCD_BOOST_REG8_ADDR(base)        ((base) + (0x27))

/* �Ĵ���˵����LCD_BOOST_REG9���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_BOOST_REG9_UNION */
#define SOC_SCHARGER_LCD_BOOST_REG9_ADDR(base)        ((base) + (0x28))

/* �Ĵ���˵����LCD_BOOST_REG10���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_BOOST_REG10_UNION */
#define SOC_SCHARGER_LCD_BOOST_REG10_ADDR(base)       ((base) + (0x29))

/* �Ĵ���˵����LCD_BOOST_REG11���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_BOOST_REG11_UNION */
#define SOC_SCHARGER_LCD_BOOST_REG11_ADDR(base)       ((base) + (0x2A))

/* �Ĵ���˵����LCD_BOOST_REG12���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_BOOST_REG12_UNION */
#define SOC_SCHARGER_LCD_BOOST_REG12_ADDR(base)       ((base) + (0x2B))

/* �Ĵ���˵����LCD_BOOST_REG13���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_BOOST_REG13_UNION */
#define SOC_SCHARGER_LCD_BOOST_REG13_ADDR(base)       ((base) + (0x2C))

/* �Ĵ���˵����LCD_BOOST_REG14���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_BOOST_REG14_UNION */
#define SOC_SCHARGER_LCD_BOOST_REG14_ADDR(base)       ((base) + (0x2D))

/* �Ĵ���˵����LCD_NCP_REG0���ڼĴ�����.
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_NCP_REG0_UNION */
#define SOC_SCHARGER_LCD_NCP_REG0_ADDR(base)          ((base) + (0x2E))

/* �Ĵ���˵����LCD_NCP_REG1���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_NCP_REG1_UNION */
#define SOC_SCHARGER_LCD_NCP_REG1_ADDR(base)          ((base) + (0x2F))

/* �Ĵ���˵����LCD_NCP_REG2���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_NCP_REG2_UNION */
#define SOC_SCHARGER_LCD_NCP_REG2_ADDR(base)          ((base) + (0x30))

/* �Ĵ���˵����LCD_NCP_REG3���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_NCP_REG3_UNION */
#define SOC_SCHARGER_LCD_NCP_REG3_ADDR(base)          ((base) + (0x31))

/* �Ĵ���˵����LCD_NCP_REG4���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_NCP_REG4_UNION */
#define SOC_SCHARGER_LCD_NCP_REG4_ADDR(base)          ((base) + (0x32))

/* �Ĵ���˵����LCD_NCP_REG5���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_NCP_REG5_UNION */
#define SOC_SCHARGER_LCD_NCP_REG5_ADDR(base)          ((base) + (0x33))

/* �Ĵ���˵����LCD_LDO_REG0���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LCD_LDO_REG0_UNION */
#define SOC_SCHARGER_LCD_LDO_REG0_ADDR(base)          ((base) + (0x34))

/* �Ĵ���˵����LDO_REG0���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_LDO_REG0_UNION */
#define SOC_SCHARGER_LDO_REG0_ADDR(base)              ((base) + (0x35))

/* �Ĵ���˵����BUCK_REG0���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_BUCK_REG0_UNION */
#define SOC_SCHARGER_BUCK_REG0_ADDR(base)             ((base) + (0x36))

/* �Ĵ���˵����BUCK_REG1���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_BUCK_REG1_UNION */
#define SOC_SCHARGER_BUCK_REG1_ADDR(base)             ((base) + (0x37))

/* �Ĵ���˵����BUCK_REG2���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_BUCK_REG2_UNION */
#define SOC_SCHARGER_BUCK_REG2_ADDR(base)             ((base) + (0x38))

/* �Ĵ���˵����BUCK_REG3���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_BUCK_REG3_UNION */
#define SOC_SCHARGER_BUCK_REG3_ADDR(base)             ((base) + (0x39))

/* �Ĵ���˵����BUCK_REG4���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_BUCK_REG4_UNION */
#define SOC_SCHARGER_BUCK_REG4_ADDR(base)             ((base) + (0x3A))

/* �Ĵ���˵����BUCK_REG5���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_BUCK_REG5_UNION */
#define SOC_SCHARGER_BUCK_REG5_ADDR(base)             ((base) + (0x3B))

/* �Ĵ���˵����BUCK_REG6���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_BUCK_REG6_UNION */
#define SOC_SCHARGER_BUCK_REG6_ADDR(base)             ((base) + (0x3C))

/* �Ĵ���˵����OTG_REG0���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_OTG_REG0_UNION */
#define SOC_SCHARGER_OTG_REG0_ADDR(base)              ((base) + (0x3D))

/* �Ĵ���˵����OTG_REG1���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_OTG_REG1_UNION */
#define SOC_SCHARGER_OTG_REG1_ADDR(base)              ((base) + (0x3E))

/* �Ĵ���˵����OTG_REG2���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_OTG_REG2_UNION */
#define SOC_SCHARGER_OTG_REG2_ADDR(base)              ((base) + (0x3F))

/* �Ĵ���˵����OTG_REG3���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_OTG_REG3_UNION */
#define SOC_SCHARGER_OTG_REG3_ADDR(base)              ((base) + (0x40))

/* �Ĵ���˵����OTG_REG4���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_OTG_REG4_UNION */
#define SOC_SCHARGER_OTG_REG4_ADDR(base)              ((base) + (0x41))

/* �Ĵ���˵����OTG_REG5���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_OTG_REG5_UNION */
#define SOC_SCHARGER_OTG_REG5_ADDR(base)              ((base) + (0x42))

/* �Ĵ���˵����OTG_REG6���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_OTG_REG6_UNION */
#define SOC_SCHARGER_OTG_REG6_ADDR(base)              ((base) + (0x43))

/* �Ĵ���˵����OTG_REG7���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_OTG_REG7_UNION */
#define SOC_SCHARGER_OTG_REG7_ADDR(base)              ((base) + (0x44))

/* �Ĵ���˵����OTG_REG8���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_OTG_REG8_UNION */
#define SOC_SCHARGER_OTG_REG8_ADDR(base)              ((base) + (0x45))

/* �Ĵ���˵����OTG_REG9���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_OTG_REG9_UNION */
#define SOC_SCHARGER_OTG_REG9_ADDR(base)              ((base) + (0x46))

/* �Ĵ���˵����OTG_REG10���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_OTG_REG10_UNION */
#define SOC_SCHARGER_OTG_REG10_ADDR(base)             ((base) + (0x47))

/* �Ĵ���˵����CHG_REG0���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_CHG_REG0_UNION */
#define SOC_SCHARGER_CHG_REG0_ADDR(base)              ((base) + (0x48))

/* �Ĵ���˵����CHG_REG1���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_CHG_REG1_UNION */
#define SOC_SCHARGER_CHG_REG1_ADDR(base)              ((base) + (0x49))

/* �Ĵ���˵����CHG_REG2���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_CHG_REG2_UNION */
#define SOC_SCHARGER_CHG_REG2_ADDR(base)              ((base) + (0x4A))

/* �Ĵ���˵����CHG_REG3���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_CHG_REG3_UNION */
#define SOC_SCHARGER_CHG_REG3_ADDR(base)              ((base) + (0x4B))

/* �Ĵ���˵����CHG_REG4���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_CHG_REG4_UNION */
#define SOC_SCHARGER_CHG_REG4_ADDR(base)              ((base) + (0x4C))

/* �Ĵ���˵����CHG_REG5���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_CHG_REG5_UNION */
#define SOC_SCHARGER_CHG_REG5_ADDR(base)              ((base) + (0x4D))

/* �Ĵ���˵����CHG_REG6���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_CHG_REG6_UNION */
#define SOC_SCHARGER_CHG_REG6_ADDR(base)              ((base) + (0x4E))

/* �Ĵ���˵����CHG_REG7���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_CHG_REG7_UNION */
#define SOC_SCHARGER_CHG_REG7_ADDR(base)              ((base) + (0x4F))

/* �Ĵ���˵����CHG_REG8���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_CHG_REG8_UNION */
#define SOC_SCHARGER_CHG_REG8_ADDR(base)              ((base) + (0x50))

/* �Ĵ���˵����CHG_REG9���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_CHG_REG9_UNION */
#define SOC_SCHARGER_CHG_REG9_ADDR(base)              ((base) + (0x51))

/* �Ĵ���˵����CHG_REG10���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_CHG_REG10_UNION */
#define SOC_SCHARGER_CHG_REG10_ADDR(base)             ((base) + (0x52))

/* �Ĵ���˵����CHG_REG11���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_CHG_REG11_UNION */
#define SOC_SCHARGER_CHG_REG11_ADDR(base)             ((base) + (0x53))

/* �Ĵ���˵����PSEL_REG0���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_PSEL_REG0_UNION */
#define SOC_SCHARGER_PSEL_REG0_ADDR(base)             ((base) + (0x54))

/* �Ĵ���˵����FLASH_BST_REG0���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_BST_REG0_UNION */
#define SOC_SCHARGER_FLASH_BST_REG0_ADDR(base)        ((base) + (0x55))

/* �Ĵ���˵����FLASH_BST_REG1���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_BST_REG1_UNION */
#define SOC_SCHARGER_FLASH_BST_REG1_ADDR(base)        ((base) + (0x56))

/* �Ĵ���˵����FLASH_BST_REG2���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_BST_REG2_UNION */
#define SOC_SCHARGER_FLASH_BST_REG2_ADDR(base)        ((base) + (0x57))

/* �Ĵ���˵����FLASH_BST_REG3���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_BST_REG3_UNION */
#define SOC_SCHARGER_FLASH_BST_REG3_ADDR(base)        ((base) + (0x58))

/* �Ĵ���˵����FLASH_BST_REG4���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_BST_REG4_UNION */
#define SOC_SCHARGER_FLASH_BST_REG4_ADDR(base)        ((base) + (0x59))

/* �Ĵ���˵����FLASH_BST_REG5���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_BST_REG5_UNION */
#define SOC_SCHARGER_FLASH_BST_REG5_ADDR(base)        ((base) + (0x5A))

/* �Ĵ���˵����FLASH_BST_REG6���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_BST_REG6_UNION */
#define SOC_SCHARGER_FLASH_BST_REG6_ADDR(base)        ((base) + (0x5B))

/* �Ĵ���˵����FLASH_BST_REG7���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_BST_REG7_UNION */
#define SOC_SCHARGER_FLASH_BST_REG7_ADDR(base)        ((base) + (0x5C))

/* �Ĵ���˵����FLASH_BST_REG8���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_BST_REG8_UNION */
#define SOC_SCHARGER_FLASH_BST_REG8_ADDR(base)        ((base) + (0x5D))

/* �Ĵ���˵����FLASH_BST_REG9���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_BST_REG9_UNION */
#define SOC_SCHARGER_FLASH_BST_REG9_ADDR(base)        ((base) + (0x5E))

/* �Ĵ���˵����FLASH_BST_REG10���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_BST_REG10_UNION */
#define SOC_SCHARGER_FLASH_BST_REG10_ADDR(base)       ((base) + (0x5F))

/* �Ĵ���˵����FLASH_BST_REG11���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_BST_REG11_UNION */
#define SOC_SCHARGER_FLASH_BST_REG11_ADDR(base)       ((base) + (0x60))

/* �Ĵ���˵����FLASH_LED_REG0���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_LED_REG0_UNION */
#define SOC_SCHARGER_FLASH_LED_REG0_ADDR(base)        ((base) + (0x61))

/* �Ĵ���˵����FLASH_LED_REG1���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_LED_REG1_UNION */
#define SOC_SCHARGER_FLASH_LED_REG1_ADDR(base)        ((base) + (0x62))

/* �Ĵ���˵����SYS���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_SYS_REG_UNION */
#define SOC_SCHARGER_SYS_REG_ADDR(base)               ((base) + (0x63))

/* �Ĵ���˵����FLASH_LED_REG2���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_LED_REG2_UNION */
#define SOC_SCHARGER_FLASH_LED_REG2_ADDR(base)        ((base) + (0x64))

/* �Ĵ���˵����FLASH_LED_REG3���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_LED_REG3_UNION */
#define SOC_SCHARGER_FLASH_LED_REG3_ADDR(base)        ((base) + (0x65))

/* �Ĵ���˵����FLASH_LED_REG4���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_LED_REG4_UNION */
#define SOC_SCHARGER_FLASH_LED_REG4_ADDR(base)        ((base) + (0x66))

/* �Ĵ���˵����FLASH_LED_REG5���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_LED_REG5_UNION */
#define SOC_SCHARGER_FLASH_LED_REG5_ADDR(base)        ((base) + (0x67))

/* �Ĵ���˵����FLASH_LED_REG6���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_LED_REG6_UNION */
#define SOC_SCHARGER_FLASH_LED_REG6_ADDR(base)        ((base) + (0x68))

/* �Ĵ���˵����FLASH_LED_REG7���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_FLASH_LED_REG7_UNION */
#define SOC_SCHARGER_FLASH_LED_REG7_ADDR(base)        ((base) + (0x69))

/* �Ĵ���˵����CTRL_REG���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_CTRL_REG_UNION */
#define SOC_SCHARGER_CTRL_REG_ADDR(base)              ((base) + (0x6A))

/* �Ĵ���˵����SYS_SET_REG���ڼĴ�����
   λ����UNION�ṹ:  SOC_SCHARGER_SYS_SET_REG_UNION */
#define SOC_SCHARGER_SYS_SET_REG_ADDR(base)           ((base) + (0x6B))





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
                     (1/2) SHEET_NAME
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_a_UNION
 �ṹ˵��  : a �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x0000�����:16
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  f_5 : 12; /* bit[0-11]:  */
        unsigned short  f_4 : 1;  /* bit[12]  :  */
        unsigned short  f_3 : 1;  /* bit[13]  :  */
        unsigned short  f_2 : 1;  /* bit[14]  :  */
        unsigned short  f_1 : 1;  /* bit[15]  :  */
    } reg;
} SOC_SCHARGER_a_UNION;
#endif
#define SOC_SCHARGER_a_f_5_START  (0)
#define SOC_SCHARGER_a_f_5_END    (11)
#define SOC_SCHARGER_a_f_4_START  (12)
#define SOC_SCHARGER_a_f_4_END    (12)
#define SOC_SCHARGER_a_f_3_START  (13)
#define SOC_SCHARGER_a_f_3_END    (13)
#define SOC_SCHARGER_a_f_2_START  (14)
#define SOC_SCHARGER_a_f_2_END    (14)
#define SOC_SCHARGER_a_f_1_START  (15)
#define SOC_SCHARGER_a_f_1_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_b_UNION
 �ṹ˵��  : b �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x0000�����:16
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  f_10 : 12; /* bit[0-11]:  */
        unsigned short  f_9  : 1;  /* bit[12]  :  */
        unsigned short  f_8  : 1;  /* bit[13]  :  */
        unsigned short  f_7  : 1;  /* bit[14]  :  */
        unsigned short  f_6  : 1;  /* bit[15]  :  */
    } reg;
} SOC_SCHARGER_b_UNION;
#endif
#define SOC_SCHARGER_b_f_10_START  (0)
#define SOC_SCHARGER_b_f_10_END    (11)
#define SOC_SCHARGER_b_f_9_START   (12)
#define SOC_SCHARGER_b_f_9_END     (12)
#define SOC_SCHARGER_b_f_8_START   (13)
#define SOC_SCHARGER_b_f_8_END     (13)
#define SOC_SCHARGER_b_f_7_START   (14)
#define SOC_SCHARGER_b_f_7_END     (14)
#define SOC_SCHARGER_b_f_6_START   (15)
#define SOC_SCHARGER_b_f_6_END     (15)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_c_UNION
 �ṹ˵��  : c �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x0000�����:16
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  f_15 : 12; /* bit[0-11]:  */
        unsigned short  f_14 : 1;  /* bit[12]  :  */
        unsigned short  f_13 : 1;  /* bit[13]  :  */
        unsigned short  f_12 : 1;  /* bit[14]  :  */
        unsigned short  f_11 : 1;  /* bit[15]  :  */
    } reg;
} SOC_SCHARGER_c_UNION;
#endif
#define SOC_SCHARGER_c_f_15_START  (0)
#define SOC_SCHARGER_c_f_15_END    (11)
#define SOC_SCHARGER_c_f_14_START  (12)
#define SOC_SCHARGER_c_f_14_END    (12)
#define SOC_SCHARGER_c_f_13_START  (13)
#define SOC_SCHARGER_c_f_13_END    (13)
#define SOC_SCHARGER_c_f_12_START  (14)
#define SOC_SCHARGER_c_f_12_END    (14)
#define SOC_SCHARGER_c_f_11_START  (15)
#define SOC_SCHARGER_c_f_11_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_d_UNION
 �ṹ˵��  : d �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x0000�����:16
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  f_20 : 12; /* bit[0-11]:  */
        unsigned short  f_19 : 1;  /* bit[12]  :  */
        unsigned short  f_18 : 1;  /* bit[13]  :  */
        unsigned short  f_17 : 1;  /* bit[14]  :  */
        unsigned short  f_16 : 1;  /* bit[15]  :  */
    } reg;
} SOC_SCHARGER_d_UNION;
#endif
#define SOC_SCHARGER_d_f_20_START  (0)
#define SOC_SCHARGER_d_f_20_END    (11)
#define SOC_SCHARGER_d_f_19_START  (12)
#define SOC_SCHARGER_d_f_19_END    (12)
#define SOC_SCHARGER_d_f_18_START  (13)
#define SOC_SCHARGER_d_f_18_END    (13)
#define SOC_SCHARGER_d_f_17_START  (14)
#define SOC_SCHARGER_d_f_17_END    (14)
#define SOC_SCHARGER_d_f_16_START  (15)
#define SOC_SCHARGER_d_f_16_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_e_UNION
 �ṹ˵��  : e �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x0000�����:16
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  f_25 : 12; /* bit[0-11]:  */
        unsigned short  f_24 : 1;  /* bit[12]  :  */
        unsigned short  f_23 : 1;  /* bit[13]  :  */
        unsigned short  f_22 : 1;  /* bit[14]  :  */
        unsigned short  f_21 : 1;  /* bit[15]  :  */
    } reg;
} SOC_SCHARGER_e_UNION;
#endif
#define SOC_SCHARGER_e_f_25_START  (0)
#define SOC_SCHARGER_e_f_25_END    (11)
#define SOC_SCHARGER_e_f_24_START  (12)
#define SOC_SCHARGER_e_f_24_END    (12)
#define SOC_SCHARGER_e_f_23_START  (13)
#define SOC_SCHARGER_e_f_23_END    (13)
#define SOC_SCHARGER_e_f_22_START  (14)
#define SOC_SCHARGER_e_f_22_END    (14)
#define SOC_SCHARGER_e_f_21_START  (15)
#define SOC_SCHARGER_e_f_21_END    (15)




/****************************************************************************
                     (2/2) register_define
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_CHIP_VERSION_UNION
 �ṹ˵��  : CHIP_VERSION �Ĵ����ṹ���塣��ַƫ����:0x00����ֵ:0x20�����:8
 �Ĵ���˵��: оƬ�汾�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  version_id_v : 8;  /* bit[0-7]: �汾�Ĵ�������ʾ�汾ΪV200�� */
    } reg;
} SOC_SCHARGER_CHIP_VERSION_UNION;
#endif
#define SOC_SCHARGER_CHIP_VERSION_version_id_v_START  (0)
#define SOC_SCHARGER_CHIP_VERSION_version_id_v_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_STATUS0_UNION
 �ṹ˵��  : STATUS0 �Ĵ����ṹ���塣��ַƫ����:0x01����ֵ:0x10�����:8
 �Ĵ���˵��: ״̬0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  to_happened       : 1;  /* bit[0]  : flash_ledģ��timeout���ܴ���ָʾ�źţ�
                                                            0:timeout ����û�д���
                                                            1:timeout ���ܴ��� */
        unsigned char  wt_happened       : 1;  /* bit[1]  : flash_ledģ��watchdog timer���ܴ���ָʾ�źţ�
                                                            0:watchdog timer ����û�д���
                                                            1:watchdog timer ���ܴ��� */
        unsigned char  buck_dpm_stat_2d  : 1;  /* bit[2]  : �ϱ�buck�Ƿ����DPMģʽ
                                                            0:no DPM
                                                            1:VINDPM */
        unsigned char  buck_vsys_stat_2d : 1;  /* bit[3]  : ����buck����Ƿ�����С��ѹ
                                                            0:Not in VSYSMIN regulation (BAT>VSYSMIN),
                                                            1:In VSYSMIN regulation (BAT<VSYSMIN) */
        unsigned char  wdt_time_out_n    : 1;  /* bit[4]  : 0: watchdog timer �����SOC�ڹ涨ʱ����û��watchdog timer�Ĵ�����
                                                            1: watchdog timer ����û�д��� ��watchdog timer������ */
        unsigned char  chg_chgstate      : 2;  /* bit[5-6]: ���״̬��¼�Ĵ���
                                                            00: Not Charging
                                                            01: Pre-charge
                                                            10: Fast-charg
                                                            11: Charge Termination Done */
        unsigned char  otg_on            : 1;  /* bit[7]  : boost״ָ̬ʾ��
                                                            0��OTG�ر�
                                                            1��OTG���� */
    } reg;
} SOC_SCHARGER_STATUS0_UNION;
#endif
#define SOC_SCHARGER_STATUS0_to_happened_START        (0)
#define SOC_SCHARGER_STATUS0_to_happened_END          (0)
#define SOC_SCHARGER_STATUS0_wt_happened_START        (1)
#define SOC_SCHARGER_STATUS0_wt_happened_END          (1)
#define SOC_SCHARGER_STATUS0_buck_dpm_stat_2d_START   (2)
#define SOC_SCHARGER_STATUS0_buck_dpm_stat_2d_END     (2)
#define SOC_SCHARGER_STATUS0_buck_vsys_stat_2d_START  (3)
#define SOC_SCHARGER_STATUS0_buck_vsys_stat_2d_END    (3)
#define SOC_SCHARGER_STATUS0_wdt_time_out_n_START     (4)
#define SOC_SCHARGER_STATUS0_wdt_time_out_n_END       (4)
#define SOC_SCHARGER_STATUS0_chg_chgstate_START       (5)
#define SOC_SCHARGER_STATUS0_chg_chgstate_END         (6)
#define SOC_SCHARGER_STATUS0_otg_on_START             (7)
#define SOC_SCHARGER_STATUS0_otg_on_END               (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_STATUS1_UNION
 �ṹ˵��  : STATUS1 �Ĵ����ṹ���塣��ַƫ����:0x02����ֵ:0x00�����:8
 �Ĵ���˵��: ״̬1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otmp_150_r          : 1;  /* bit[0]: 0���¶�û�г���150��
                                                            1���¶ȳ���150�� */
        unsigned char  otmp_jstp_r         : 1;  /* bit[1]: 0���¶�û����thsd_tstp_set�Ĵ������õ��¶�
                                                            1:�¶ȳ���thsd_tstp_set�Ĵ������õ��¶� */
        unsigned char  otmp_jreg_r         : 1;  /* bit[2]: 0���¶�û����thsd_treg_set�Ĵ������õ��¶�
                                                            1:�¶ȳ���thsd_treg_set�Ĵ������õ��¶� */
        unsigned char  vbus_ovp_6p5v_r     : 1;  /* bit[3]: 0:vbus<6.5v
                                                            1:vbus>6.5v */
        unsigned char  vbus_uvp_3p5v_r     : 1;  /* bit[4]: 0:vbus>3.5v
                                                            1:vbus<3.5v */
        unsigned char  fast_chg_fault_r    : 1;  /* bit[5]: ��ؿ�����ϼ���źţ�����ȫ��ʱ��ʱ��
                                                            1����ʱ��δ������
                                                            0��������� */
        unsigned char  pre_chg_fault_r     : 1;  /* bit[6]: ����س����ϼ���źţ���VBAT����2.8V/3.0V/3.1V/3.2V��
                                                            1����ص�ѹ����
                                                            0��������� */
        unsigned char  trickle_chg_fault_r : 1;  /* bit[7]: ����س����ϼ���źţ���VBAT����2V��
                                                            1����ص�ѹ����
                                                            0��������� */
    } reg;
} SOC_SCHARGER_STATUS1_UNION;
#endif
#define SOC_SCHARGER_STATUS1_otmp_150_r_START           (0)
#define SOC_SCHARGER_STATUS1_otmp_150_r_END             (0)
#define SOC_SCHARGER_STATUS1_otmp_jstp_r_START          (1)
#define SOC_SCHARGER_STATUS1_otmp_jstp_r_END            (1)
#define SOC_SCHARGER_STATUS1_otmp_jreg_r_START          (2)
#define SOC_SCHARGER_STATUS1_otmp_jreg_r_END            (2)
#define SOC_SCHARGER_STATUS1_vbus_ovp_6p5v_r_START      (3)
#define SOC_SCHARGER_STATUS1_vbus_ovp_6p5v_r_END        (3)
#define SOC_SCHARGER_STATUS1_vbus_uvp_3p5v_r_START      (4)
#define SOC_SCHARGER_STATUS1_vbus_uvp_3p5v_r_END        (4)
#define SOC_SCHARGER_STATUS1_fast_chg_fault_r_START     (5)
#define SOC_SCHARGER_STATUS1_fast_chg_fault_r_END       (5)
#define SOC_SCHARGER_STATUS1_pre_chg_fault_r_START      (6)
#define SOC_SCHARGER_STATUS1_pre_chg_fault_r_END        (6)
#define SOC_SCHARGER_STATUS1_trickle_chg_fault_r_START  (7)
#define SOC_SCHARGER_STATUS1_trickle_chg_fault_r_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_STATUS2_UNION
 �ṹ˵��  : STATUS2 �Ĵ����ṹ���塣��ַƫ����:0x03����ֵ:0x00�����:8
 �Ĵ���˵��: ״̬2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  wled_scp_r      : 1;  /* bit[0]: 0:wled û�з�����·
                                                        1:wled ������· */
        unsigned char  wled_ocp_r      : 1;  /* bit[1]: 0:wled û�з�������
                                                        1:wled �������� */
        unsigned char  wled_uvp_r      : 1;  /* bit[2]: 0:wled boostû�з������Ƿѹ
                                                        1:wled boost�������Ƿѹ */
        unsigned char  wled_ovp_4p5v_r : 1;  /* bit[3]: 0:wled vifbû�з�����ѹ4p5v
                                                        1:wled vifb ������ѹ4p5v */
        unsigned char  wled_ovp_38v_r  : 1;  /* bit[4]: 0:wled voutû�з�����ѹ38v
                                                        1:wled vout ������ѹ38v */
        unsigned char  buck_scp_r      : 1;  /* bit[5]: 0:buckû�з�����·
                                                        1:buck������· */
        unsigned char  chg_rechg_r     : 1;  /* bit[6]: ���³��״̬�Ĵ�����
                                                        1�����³��
                                                        0�������³�� */
        unsigned char  reserved        : 1;  /* bit[7]: ������ */
    } reg;
} SOC_SCHARGER_STATUS2_UNION;
#endif
#define SOC_SCHARGER_STATUS2_wled_scp_r_START       (0)
#define SOC_SCHARGER_STATUS2_wled_scp_r_END         (0)
#define SOC_SCHARGER_STATUS2_wled_ocp_r_START       (1)
#define SOC_SCHARGER_STATUS2_wled_ocp_r_END         (1)
#define SOC_SCHARGER_STATUS2_wled_uvp_r_START       (2)
#define SOC_SCHARGER_STATUS2_wled_uvp_r_END         (2)
#define SOC_SCHARGER_STATUS2_wled_ovp_4p5v_r_START  (3)
#define SOC_SCHARGER_STATUS2_wled_ovp_4p5v_r_END    (3)
#define SOC_SCHARGER_STATUS2_wled_ovp_38v_r_START   (4)
#define SOC_SCHARGER_STATUS2_wled_ovp_38v_r_END     (4)
#define SOC_SCHARGER_STATUS2_buck_scp_r_START       (5)
#define SOC_SCHARGER_STATUS2_buck_scp_r_END         (5)
#define SOC_SCHARGER_STATUS2_chg_rechg_r_START      (6)
#define SOC_SCHARGER_STATUS2_chg_rechg_r_END        (6)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_STATUS3_UNION
 �ṹ˵��  : STATUS3 �Ĵ����ṹ���塣��ַƫ����:0x04����ֵ:0x00�����:8
 �Ĵ���˵��: ״̬3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_bst_uvp_r   : 1;  /* bit[0]  : 0��FLASH BOOST û�з���Ƿѹ
                                                            1��FLASH BOOST ����Ƿѹ */
        unsigned char  flash_bst_ovp_r   : 1;  /* bit[1]  : 0��FLASH BOOST û�з�����ѹ
                                                            1��FLASH BOOST ������ѹ */
        unsigned char  flash_bst_scp_r   : 1;  /* bit[2]  : 0��FLASH BOOST û�з�����·
                                                            1��FLASH BOOST ������· */
        unsigned char  reserved_0        : 1;  /* bit[3]  : �������������á� */
        unsigned char  flash_led_open_r  : 1;  /* bit[4]  : 0:LED��û�п�·
                                                            1:LED�ƿ�· */
        unsigned char  flash_led_short_r : 1;  /* bit[5]  : 0��LED��û�ж�·
                                                            1��LED�ƶ�· */
        unsigned char  reserved_1        : 2;  /* bit[6-7]: ������ */
    } reg;
} SOC_SCHARGER_STATUS3_UNION;
#endif
#define SOC_SCHARGER_STATUS3_flash_bst_uvp_r_START    (0)
#define SOC_SCHARGER_STATUS3_flash_bst_uvp_r_END      (0)
#define SOC_SCHARGER_STATUS3_flash_bst_ovp_r_START    (1)
#define SOC_SCHARGER_STATUS3_flash_bst_ovp_r_END      (1)
#define SOC_SCHARGER_STATUS3_flash_bst_scp_r_START    (2)
#define SOC_SCHARGER_STATUS3_flash_bst_scp_r_END      (2)
#define SOC_SCHARGER_STATUS3_flash_led_open_r_START   (4)
#define SOC_SCHARGER_STATUS3_flash_led_open_r_END     (4)
#define SOC_SCHARGER_STATUS3_flash_led_short_r_START  (5)
#define SOC_SCHARGER_STATUS3_flash_led_short_r_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_STATUS4_UNION
 �ṹ˵��  : STATUS4 �Ĵ����ṹ���塣��ַƫ����:0x05����ֵ:0x00�����:8
 �Ĵ���˵��: ״̬4�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ldo2_200ma_ocp_r : 1;  /* bit[0]: 0��ldo2_200ma û�з�������
                                                         1��ldo2_200ma �������� */
        unsigned char  ldo1_200ma_ocp_r : 1;  /* bit[1]: 0��ldo1_200ma û�з�������
                                                         1��ldo1_200ma �������� */
        unsigned char  lcd_ldo_ocp_r    : 1;  /* bit[2]: 0��lcd_ldo û�з�������
                                                         1��lcd_ldo �������� */
        unsigned char  lcd_ncp_scp_r    : 1;  /* bit[3]: 0��lcd_ncp û�з�����·
                                                         1��lcd_ncp ������· */
        unsigned char  lcd_bst_uvp_r    : 1;  /* bit[4]: 0��lcd_bst û�з���Ƿѹ
                                                         1��lcd_bst ����Ƿѹ */
        unsigned char  lcd_bst_ovp_r    : 1;  /* bit[5]: 0��lcd_bst û�з�����ѹ
                                                         1��lcd_bst ������ѹ */
        unsigned char  lcd_bst_scp_r    : 1;  /* bit[6]: 0��lcd_bst û�з�����·
                                                         1��lcd_bst ������· */
        unsigned char  lcd_bst_ocp_r    : 1;  /* bit[7]: 0��lcd_bst û�з�������
                                                         1��lcd_bst �������� */
    } reg;
} SOC_SCHARGER_STATUS4_UNION;
#endif
#define SOC_SCHARGER_STATUS4_ldo2_200ma_ocp_r_START  (0)
#define SOC_SCHARGER_STATUS4_ldo2_200ma_ocp_r_END    (0)
#define SOC_SCHARGER_STATUS4_ldo1_200ma_ocp_r_START  (1)
#define SOC_SCHARGER_STATUS4_ldo1_200ma_ocp_r_END    (1)
#define SOC_SCHARGER_STATUS4_lcd_ldo_ocp_r_START     (2)
#define SOC_SCHARGER_STATUS4_lcd_ldo_ocp_r_END       (2)
#define SOC_SCHARGER_STATUS4_lcd_ncp_scp_r_START     (3)
#define SOC_SCHARGER_STATUS4_lcd_ncp_scp_r_END       (3)
#define SOC_SCHARGER_STATUS4_lcd_bst_uvp_r_START     (4)
#define SOC_SCHARGER_STATUS4_lcd_bst_uvp_r_END       (4)
#define SOC_SCHARGER_STATUS4_lcd_bst_ovp_r_START     (5)
#define SOC_SCHARGER_STATUS4_lcd_bst_ovp_r_END       (5)
#define SOC_SCHARGER_STATUS4_lcd_bst_scp_r_START     (6)
#define SOC_SCHARGER_STATUS4_lcd_bst_scp_r_END       (6)
#define SOC_SCHARGER_STATUS4_lcd_bst_ocp_r_START     (7)
#define SOC_SCHARGER_STATUS4_lcd_bst_ocp_r_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_STATUS5_UNION
 �ṹ˵��  : STATUS5 �Ĵ����ṹ���塣��ַƫ����:0x06����ֵ:0x00�����:8
 �Ĵ���˵��: ״̬5�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otg_ovp_5p3v_r : 1;  /* bit[0]: 0:otg boost û�з�����ѹ5.3v
                                                       1:otg boost ������ѹ5.3v */
        unsigned char  otg_uvp_r      : 1;  /* bit[1]: 0:otg boost û�з������Ƿѹ
                                                       1:otg boost �������Ƿѹ */
        unsigned char  otg_ocp_r      : 1;  /* bit[2]: 0:otg û�з�������
                                                       1:otg �������� */
        unsigned char  otg_scp_r      : 1;  /* bit[3]: 0:otg û�з�����·
                                                       1:otg ������· */
        unsigned char  bat_ltmp_r     : 1;  /* bit[4]: 0:���û�з������¹���
                                                       1:��ص��¹��� */
        unsigned char  bat_htmp_r     : 1;  /* bit[5]: 0:���û�з������¹���
                                                       1:��ظ��¹��� */
        unsigned char  vbat_ovp_r     : 1;  /* bit[6]: 0:charger IC ���û�з�����ѹ
                                                       1:charger IC ��ط�����ѹ */
        unsigned char  otg_vbat_ok    : 1;  /* bit[7]: 0:VBAT��ѹ����
                                                       1��VBAT��ѹOK */
    } reg;
} SOC_SCHARGER_STATUS5_UNION;
#endif
#define SOC_SCHARGER_STATUS5_otg_ovp_5p3v_r_START  (0)
#define SOC_SCHARGER_STATUS5_otg_ovp_5p3v_r_END    (0)
#define SOC_SCHARGER_STATUS5_otg_uvp_r_START       (1)
#define SOC_SCHARGER_STATUS5_otg_uvp_r_END         (1)
#define SOC_SCHARGER_STATUS5_otg_ocp_r_START       (2)
#define SOC_SCHARGER_STATUS5_otg_ocp_r_END         (2)
#define SOC_SCHARGER_STATUS5_otg_scp_r_START       (3)
#define SOC_SCHARGER_STATUS5_otg_scp_r_END         (3)
#define SOC_SCHARGER_STATUS5_bat_ltmp_r_START      (4)
#define SOC_SCHARGER_STATUS5_bat_ltmp_r_END        (4)
#define SOC_SCHARGER_STATUS5_bat_htmp_r_START      (5)
#define SOC_SCHARGER_STATUS5_bat_htmp_r_END        (5)
#define SOC_SCHARGER_STATUS5_vbat_ovp_r_START      (6)
#define SOC_SCHARGER_STATUS5_vbat_ovp_r_END        (6)
#define SOC_SCHARGER_STATUS5_otg_vbat_ok_START     (7)
#define SOC_SCHARGER_STATUS5_otg_vbat_ok_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_IRQ0_UNION
 �ṹ˵��  : IRQ0 �Ĵ����ṹ���塣��ַƫ����:0x07����ֵ:0x00�����:8
 �Ĵ���˵��: �ж�0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otmp_150_r          : 1;  /* bit[0]: 0���¶�û�г���150��
                                                            1���¶ȳ���150�� */
        unsigned char  otmp_jstp_r         : 1;  /* bit[1]: 0���¶�û����thsd_tstp_set�Ĵ������õ��¶�
                                                            1:�¶ȳ���thsd_tstp_set�Ĵ������õ��¶� */
        unsigned char  otmp_jreg_r         : 1;  /* bit[2]: 0���¶�û����thsd_treg_set�Ĵ������õ��¶�
                                                            1:�¶ȳ���thsd_treg_set�Ĵ������õ��¶� */
        unsigned char  vbus_ovp_6p5v_r     : 1;  /* bit[3]: 0:vbus<6.5v
                                                            1:vbus>6.5v */
        unsigned char  vbus_uvp_3p5v_r     : 1;  /* bit[4]: 0:vbus>3.5v
                                                            1:vbus<3.5v */
        unsigned char  fast_chg_fault_r    : 1;  /* bit[5]: ��ؿ�����ϼ���źţ�����ȫ��ʱ��ʱ��
                                                            1����ʱ��δ������
                                                            0��������� */
        unsigned char  pre_chg_fault_r     : 1;  /* bit[6]: ����س����ϼ���źţ���VBAT����2.8V/3.0V/3.1V/3.2V��
                                                            1����ص�ѹ����
                                                            0��������� */
        unsigned char  trickle_chg_fault_r : 1;  /* bit[7]: ����س����ϼ���źţ���VBAT����2V��
                                                            1����ص�ѹ����
                                                            0��������� */
    } reg;
} SOC_SCHARGER_IRQ0_UNION;
#endif
#define SOC_SCHARGER_IRQ0_otmp_150_r_START           (0)
#define SOC_SCHARGER_IRQ0_otmp_150_r_END             (0)
#define SOC_SCHARGER_IRQ0_otmp_jstp_r_START          (1)
#define SOC_SCHARGER_IRQ0_otmp_jstp_r_END            (1)
#define SOC_SCHARGER_IRQ0_otmp_jreg_r_START          (2)
#define SOC_SCHARGER_IRQ0_otmp_jreg_r_END            (2)
#define SOC_SCHARGER_IRQ0_vbus_ovp_6p5v_r_START      (3)
#define SOC_SCHARGER_IRQ0_vbus_ovp_6p5v_r_END        (3)
#define SOC_SCHARGER_IRQ0_vbus_uvp_3p5v_r_START      (4)
#define SOC_SCHARGER_IRQ0_vbus_uvp_3p5v_r_END        (4)
#define SOC_SCHARGER_IRQ0_fast_chg_fault_r_START     (5)
#define SOC_SCHARGER_IRQ0_fast_chg_fault_r_END       (5)
#define SOC_SCHARGER_IRQ0_pre_chg_fault_r_START      (6)
#define SOC_SCHARGER_IRQ0_pre_chg_fault_r_END        (6)
#define SOC_SCHARGER_IRQ0_trickle_chg_fault_r_START  (7)
#define SOC_SCHARGER_IRQ0_trickle_chg_fault_r_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_IRQ1_UNION
 �ṹ˵��  : IRQ1 �Ĵ����ṹ���塣��ַƫ����:0x08����ֵ:0x00�����:8
 �Ĵ���˵��: �ж�1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  wled_scp_r        : 1;  /* bit[0]: 0:wled û�з�����·
                                                          1:wled ������· */
        unsigned char  wled_ocp_r        : 1;  /* bit[1]: 0:wled û�з�������
                                                          1:wled �������� */
        unsigned char  wled_uvp_r        : 1;  /* bit[2]: 0:wled boostû�з������Ƿѹ
                                                          1:wled boost�������Ƿѹ */
        unsigned char  wled_ovp_4p5v_r   : 1;  /* bit[3]: 0:wled vifbû�з�����ѹ4p5v
                                                          1:wled vifb ������ѹ4p5v */
        unsigned char  wled_ovp_38v_r    : 1;  /* bit[4]: 0:wled voutû�з�����ѹ38v
                                                          1:wled vout ������ѹ38v */
        unsigned char  buck_scp_r        : 1;  /* bit[5]: 0:buckû�з�����·
                                                          1:buck������· */
        unsigned char  chg_rechg_r       : 1;  /* bit[6]: ���³��״̬�Ĵ�����
                                                          1�����³��
                                                          0�������³�� */
        unsigned char  chg_charge_done_r : 1;  /* bit[7]: 0:���״̬��¼�Ĵ����У�û�� Charge Termination Done �������ֹ��
                                                          1:���״̬��¼�Ĵ����У����� Charge Termination Done �������ֹ�� */
    } reg;
} SOC_SCHARGER_IRQ1_UNION;
#endif
#define SOC_SCHARGER_IRQ1_wled_scp_r_START         (0)
#define SOC_SCHARGER_IRQ1_wled_scp_r_END           (0)
#define SOC_SCHARGER_IRQ1_wled_ocp_r_START         (1)
#define SOC_SCHARGER_IRQ1_wled_ocp_r_END           (1)
#define SOC_SCHARGER_IRQ1_wled_uvp_r_START         (2)
#define SOC_SCHARGER_IRQ1_wled_uvp_r_END           (2)
#define SOC_SCHARGER_IRQ1_wled_ovp_4p5v_r_START    (3)
#define SOC_SCHARGER_IRQ1_wled_ovp_4p5v_r_END      (3)
#define SOC_SCHARGER_IRQ1_wled_ovp_38v_r_START     (4)
#define SOC_SCHARGER_IRQ1_wled_ovp_38v_r_END       (4)
#define SOC_SCHARGER_IRQ1_buck_scp_r_START         (5)
#define SOC_SCHARGER_IRQ1_buck_scp_r_END           (5)
#define SOC_SCHARGER_IRQ1_chg_rechg_r_START        (6)
#define SOC_SCHARGER_IRQ1_chg_rechg_r_END          (6)
#define SOC_SCHARGER_IRQ1_chg_charge_done_r_START  (7)
#define SOC_SCHARGER_IRQ1_chg_charge_done_r_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_IRQ2_UNION
 �ṹ˵��  : IRQ2 �Ĵ����ṹ���塣��ַƫ����:0x09����ֵ:0x00�����:8
 �Ĵ���˵��: �ж�2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_bst_uvp_r   : 1;  /* bit[0]  : 0��FLASH BOOST û�з���Ƿѹ
                                                            1��FLASH BOOST ����Ƿѹ */
        unsigned char  flash_bst_ovp_r   : 1;  /* bit[1]  : 0��FLASH BOOST û�з�����ѹ
                                                            1��FLASH BOOST ������ѹ */
        unsigned char  flash_bst_scp_r   : 1;  /* bit[2]  : 0��FLASH BOOST û�з�����·
                                                            1��FLASH BOOST ������· */
        unsigned char  reserved_0        : 1;  /* bit[3]  : �������������á� */
        unsigned char  flash_led_open_r  : 1;  /* bit[4]  : 0:LED��û�п�·
                                                            1:LED�ƿ�· */
        unsigned char  flash_led_short_r : 1;  /* bit[5]  : 0��LED��û�ж�·
                                                            1��LED�ƶ�· */
        unsigned char  reserved_1        : 2;  /* bit[6-7]: ������ */
    } reg;
} SOC_SCHARGER_IRQ2_UNION;
#endif
#define SOC_SCHARGER_IRQ2_flash_bst_uvp_r_START    (0)
#define SOC_SCHARGER_IRQ2_flash_bst_uvp_r_END      (0)
#define SOC_SCHARGER_IRQ2_flash_bst_ovp_r_START    (1)
#define SOC_SCHARGER_IRQ2_flash_bst_ovp_r_END      (1)
#define SOC_SCHARGER_IRQ2_flash_bst_scp_r_START    (2)
#define SOC_SCHARGER_IRQ2_flash_bst_scp_r_END      (2)
#define SOC_SCHARGER_IRQ2_flash_led_open_r_START   (4)
#define SOC_SCHARGER_IRQ2_flash_led_open_r_END     (4)
#define SOC_SCHARGER_IRQ2_flash_led_short_r_START  (5)
#define SOC_SCHARGER_IRQ2_flash_led_short_r_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_IRQ3_UNION
 �ṹ˵��  : IRQ3 �Ĵ����ṹ���塣��ַƫ����:0x0A����ֵ:0x00�����:8
 �Ĵ���˵��: �ж�3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ldo2_200ma_ocp_r : 1;  /* bit[0]: 0��ldo2_200ma û�з�������
                                                         1��ldo2_200ma �������� */
        unsigned char  ldo1_200ma_ocp_r : 1;  /* bit[1]: 0��ldo1_200ma û�з�������
                                                         1��ldo1_200ma �������� */
        unsigned char  lcd_ldo_ocp_r    : 1;  /* bit[2]: 0��lcd_ldo û�з�������
                                                         1��lcd_ldo �������� */
        unsigned char  lcd_ncp_scp_r    : 1;  /* bit[3]: 0��lcd_ncp û�з�����·
                                                         1��lcd_ncp ������· */
        unsigned char  lcd_bst_uvp_r    : 1;  /* bit[4]: 0��lcd_bst û�з���Ƿѹ
                                                         1��lcd_bst ����Ƿѹ */
        unsigned char  lcd_bst_ovp_r    : 1;  /* bit[5]: 0��lcd_bst û�з�����ѹ
                                                         1��lcd_bst ������ѹ */
        unsigned char  lcd_bst_scp_r    : 1;  /* bit[6]: 0��lcd_bst û�з�����·
                                                         1��lcd_bst ������· */
        unsigned char  lcd_bst_ocp_r    : 1;  /* bit[7]: 0��lcd_bst û�з�������
                                                         1��lcd_bst �������� */
    } reg;
} SOC_SCHARGER_IRQ3_UNION;
#endif
#define SOC_SCHARGER_IRQ3_ldo2_200ma_ocp_r_START  (0)
#define SOC_SCHARGER_IRQ3_ldo2_200ma_ocp_r_END    (0)
#define SOC_SCHARGER_IRQ3_ldo1_200ma_ocp_r_START  (1)
#define SOC_SCHARGER_IRQ3_ldo1_200ma_ocp_r_END    (1)
#define SOC_SCHARGER_IRQ3_lcd_ldo_ocp_r_START     (2)
#define SOC_SCHARGER_IRQ3_lcd_ldo_ocp_r_END       (2)
#define SOC_SCHARGER_IRQ3_lcd_ncp_scp_r_START     (3)
#define SOC_SCHARGER_IRQ3_lcd_ncp_scp_r_END       (3)
#define SOC_SCHARGER_IRQ3_lcd_bst_uvp_r_START     (4)
#define SOC_SCHARGER_IRQ3_lcd_bst_uvp_r_END       (4)
#define SOC_SCHARGER_IRQ3_lcd_bst_ovp_r_START     (5)
#define SOC_SCHARGER_IRQ3_lcd_bst_ovp_r_END       (5)
#define SOC_SCHARGER_IRQ3_lcd_bst_scp_r_START     (6)
#define SOC_SCHARGER_IRQ3_lcd_bst_scp_r_END       (6)
#define SOC_SCHARGER_IRQ3_lcd_bst_ocp_r_START     (7)
#define SOC_SCHARGER_IRQ3_lcd_bst_ocp_r_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_IRQ4_UNION
 �ṹ˵��  : IRQ4 �Ĵ����ṹ���塣��ַƫ����:0x0B����ֵ:0x00�����:8
 �Ĵ���˵��: �ж�4�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otg_ovp_5p3v_r : 1;  /* bit[0]: 0:otg boost û�з�����ѹ5.3v
                                                       1:otg boost ������ѹ5.3v */
        unsigned char  otg_uvp_r      : 1;  /* bit[1]: 0:otg boost û�з������Ƿѹ
                                                       1:otg boost �������Ƿѹ */
        unsigned char  otg_ocp_r      : 1;  /* bit[2]: 0:otg û�з�������
                                                       1:otg �������� */
        unsigned char  otg_scp_r      : 1;  /* bit[3]: 0:otg û�з�����·
                                                       1:otg ������· */
        unsigned char  bat_ltmp_r     : 1;  /* bit[4]: 0:���û�з������¹���
                                                       1:��ص��¹��� */
        unsigned char  bat_htmp_r     : 1;  /* bit[5]: 0:���û�з������¹���
                                                       1:��ظ��¹��� */
        unsigned char  vbat_ovp_r     : 1;  /* bit[6]: 0:charger IC ���û�з�����ѹ
                                                       1:charger IC ��ط�����ѹ */
        unsigned char  otg_vbat_ok_f  : 1;  /* bit[7]: 0��VBAT��ѹOK
                                                       1��VBAT��ѹ���� */
    } reg;
} SOC_SCHARGER_IRQ4_UNION;
#endif
#define SOC_SCHARGER_IRQ4_otg_ovp_5p3v_r_START  (0)
#define SOC_SCHARGER_IRQ4_otg_ovp_5p3v_r_END    (0)
#define SOC_SCHARGER_IRQ4_otg_uvp_r_START       (1)
#define SOC_SCHARGER_IRQ4_otg_uvp_r_END         (1)
#define SOC_SCHARGER_IRQ4_otg_ocp_r_START       (2)
#define SOC_SCHARGER_IRQ4_otg_ocp_r_END         (2)
#define SOC_SCHARGER_IRQ4_otg_scp_r_START       (3)
#define SOC_SCHARGER_IRQ4_otg_scp_r_END         (3)
#define SOC_SCHARGER_IRQ4_bat_ltmp_r_START      (4)
#define SOC_SCHARGER_IRQ4_bat_ltmp_r_END        (4)
#define SOC_SCHARGER_IRQ4_bat_htmp_r_START      (5)
#define SOC_SCHARGER_IRQ4_bat_htmp_r_END        (5)
#define SOC_SCHARGER_IRQ4_vbat_ovp_r_START      (6)
#define SOC_SCHARGER_IRQ4_vbat_ovp_r_END        (6)
#define SOC_SCHARGER_IRQ4_otg_vbat_ok_f_START   (7)
#define SOC_SCHARGER_IRQ4_otg_vbat_ok_f_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_IRQM0_UNION
 �ṹ˵��  : IRQM0 �Ĵ����ṹ���塣��ַƫ����:0x0C����ֵ:0x00�����:8
 �Ĵ���˵��: �ж�����0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otmp_150_rm          : 1;  /* bit[0]: 0:ʹ�ܸ��жϣ�
                                                             1:���θ��жϣ� */
        unsigned char  otmp_jstp_rm         : 1;  /* bit[1]: 0:ʹ�ܸ��жϣ�
                                                             1:���θ��жϣ� */
        unsigned char  otmp_jreg_rm         : 1;  /* bit[2]: 0:ʹ�ܸ��жϣ�
                                                             1:���θ��жϣ� */
        unsigned char  vbus_ovp_6p5v_rm     : 1;  /* bit[3]: 0:ʹ�ܸ��жϣ�
                                                             1:���θ��жϣ� */
        unsigned char  vbus_uvp_3p5v_rm     : 1;  /* bit[4]: 0:ʹ�ܸ��жϣ�
                                                             1:���θ��жϣ� */
        unsigned char  fast_chg_fault_rm    : 1;  /* bit[5]: 0:ʹ�ܸ��жϣ�
                                                             1:���θ��жϣ� */
        unsigned char  pre_chg_fault_rm     : 1;  /* bit[6]: 0:ʹ�ܸ��жϣ�
                                                             1:���θ��жϣ� */
        unsigned char  trickle_chg_fault_rm : 1;  /* bit[7]: 0:ʹ�ܸ��жϣ�
                                                             1:���θ��жϣ� */
    } reg;
} SOC_SCHARGER_IRQM0_UNION;
#endif
#define SOC_SCHARGER_IRQM0_otmp_150_rm_START           (0)
#define SOC_SCHARGER_IRQM0_otmp_150_rm_END             (0)
#define SOC_SCHARGER_IRQM0_otmp_jstp_rm_START          (1)
#define SOC_SCHARGER_IRQM0_otmp_jstp_rm_END            (1)
#define SOC_SCHARGER_IRQM0_otmp_jreg_rm_START          (2)
#define SOC_SCHARGER_IRQM0_otmp_jreg_rm_END            (2)
#define SOC_SCHARGER_IRQM0_vbus_ovp_6p5v_rm_START      (3)
#define SOC_SCHARGER_IRQM0_vbus_ovp_6p5v_rm_END        (3)
#define SOC_SCHARGER_IRQM0_vbus_uvp_3p5v_rm_START      (4)
#define SOC_SCHARGER_IRQM0_vbus_uvp_3p5v_rm_END        (4)
#define SOC_SCHARGER_IRQM0_fast_chg_fault_rm_START     (5)
#define SOC_SCHARGER_IRQM0_fast_chg_fault_rm_END       (5)
#define SOC_SCHARGER_IRQM0_pre_chg_fault_rm_START      (6)
#define SOC_SCHARGER_IRQM0_pre_chg_fault_rm_END        (6)
#define SOC_SCHARGER_IRQM0_trickle_chg_fault_rm_START  (7)
#define SOC_SCHARGER_IRQM0_trickle_chg_fault_rm_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_IRQM1_UNION
 �ṹ˵��  : IRQM1 �Ĵ����ṹ���塣��ַƫ����:0x0D����ֵ:0x00�����:8
 �Ĵ���˵��: �ж�����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  wled_scp_rm        : 1;  /* bit[0]: 0:ʹ�ܸ��жϣ�
                                                           1:���θ��жϣ� */
        unsigned char  wled_ocp_rm        : 1;  /* bit[1]: 0:ʹ�ܸ��жϣ�
                                                           1:���θ��жϣ� */
        unsigned char  wled_uvp_rm        : 1;  /* bit[2]: 0:ʹ�ܸ��жϣ�
                                                           1:���θ��жϣ� */
        unsigned char  wled_ovp_4p5v_rm   : 1;  /* bit[3]: 0:ʹ�ܸ��жϣ�
                                                           1:���θ��жϣ� */
        unsigned char  wled_ovp_38v_rm    : 1;  /* bit[4]: 0:ʹ�ܸ��жϣ�
                                                           1:���θ��жϣ� */
        unsigned char  buck_scp_rm        : 1;  /* bit[5]: 0:ʹ�ܸ��жϣ�
                                                           1:���θ��жϣ� */
        unsigned char  chg_rechg_rm       : 1;  /* bit[6]: 0:ʹ�ܸ��жϣ�
                                                           1:���θ��жϣ� */
        unsigned char  chg_charge_done_rm : 1;  /* bit[7]: 0:ʹ�ܸ��жϣ�
                                                           1:���θ��жϣ� */
    } reg;
} SOC_SCHARGER_IRQM1_UNION;
#endif
#define SOC_SCHARGER_IRQM1_wled_scp_rm_START         (0)
#define SOC_SCHARGER_IRQM1_wled_scp_rm_END           (0)
#define SOC_SCHARGER_IRQM1_wled_ocp_rm_START         (1)
#define SOC_SCHARGER_IRQM1_wled_ocp_rm_END           (1)
#define SOC_SCHARGER_IRQM1_wled_uvp_rm_START         (2)
#define SOC_SCHARGER_IRQM1_wled_uvp_rm_END           (2)
#define SOC_SCHARGER_IRQM1_wled_ovp_4p5v_rm_START    (3)
#define SOC_SCHARGER_IRQM1_wled_ovp_4p5v_rm_END      (3)
#define SOC_SCHARGER_IRQM1_wled_ovp_38v_rm_START     (4)
#define SOC_SCHARGER_IRQM1_wled_ovp_38v_rm_END       (4)
#define SOC_SCHARGER_IRQM1_buck_scp_rm_START         (5)
#define SOC_SCHARGER_IRQM1_buck_scp_rm_END           (5)
#define SOC_SCHARGER_IRQM1_chg_rechg_rm_START        (6)
#define SOC_SCHARGER_IRQM1_chg_rechg_rm_END          (6)
#define SOC_SCHARGER_IRQM1_chg_charge_done_rm_START  (7)
#define SOC_SCHARGER_IRQM1_chg_charge_done_rm_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_IRQM2_UNION
 �ṹ˵��  : IRQM2 �Ĵ����ṹ���塣��ַƫ����:0x0E����ֵ:0x00�����:8
 �Ĵ���˵��: �ж�����2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_bst_uvp_rm   : 1;  /* bit[0]  : 0:ʹ�ܸ��жϣ�
                                                             1:���θ��жϣ� */
        unsigned char  flash_bst_ovp_rm   : 1;  /* bit[1]  : 0:ʹ�ܸ��жϣ�
                                                             1:���θ��жϣ� */
        unsigned char  flash_bst_scp_rm   : 1;  /* bit[2]  : 0:ʹ�ܸ��жϣ�
                                                             1:���θ��жϣ� */
        unsigned char  reserved_0         : 1;  /* bit[3]  : �������������á� */
        unsigned char  flash_led_open_rm  : 1;  /* bit[4]  : 0:ʹ�ܸ��жϣ�
                                                             1:���θ��жϣ� */
        unsigned char  flash_led_short_rm : 1;  /* bit[5]  : 0:ʹ�ܸ��жϣ�
                                                             1:���θ��жϣ� */
        unsigned char  reserved_1         : 2;  /* bit[6-7]: ������ */
    } reg;
} SOC_SCHARGER_IRQM2_UNION;
#endif
#define SOC_SCHARGER_IRQM2_flash_bst_uvp_rm_START    (0)
#define SOC_SCHARGER_IRQM2_flash_bst_uvp_rm_END      (0)
#define SOC_SCHARGER_IRQM2_flash_bst_ovp_rm_START    (1)
#define SOC_SCHARGER_IRQM2_flash_bst_ovp_rm_END      (1)
#define SOC_SCHARGER_IRQM2_flash_bst_scp_rm_START    (2)
#define SOC_SCHARGER_IRQM2_flash_bst_scp_rm_END      (2)
#define SOC_SCHARGER_IRQM2_flash_led_open_rm_START   (4)
#define SOC_SCHARGER_IRQM2_flash_led_open_rm_END     (4)
#define SOC_SCHARGER_IRQM2_flash_led_short_rm_START  (5)
#define SOC_SCHARGER_IRQM2_flash_led_short_rm_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_IRQM3_UNION
 �ṹ˵��  : IRQM3 �Ĵ����ṹ���塣��ַƫ����:0x0F����ֵ:0x00�����:8
 �Ĵ���˵��: �ж�����3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ldo2_200ma_ocp_rm : 1;  /* bit[0]: 0:ʹ�ܸ��жϣ�
                                                          1:���θ��жϣ� */
        unsigned char  ldo1_200ma_ocp_rm : 1;  /* bit[1]: 0:ʹ�ܸ��жϣ�
                                                          1:���θ��жϣ� */
        unsigned char  lcd_ldo_ocp_rm    : 1;  /* bit[2]: 0:ʹ�ܸ��жϣ�
                                                          1:���θ��жϣ� */
        unsigned char  lcd_ncp_scp_rm    : 1;  /* bit[3]: 0:ʹ�ܸ��жϣ�
                                                          1:���θ��жϣ� */
        unsigned char  lcd_bst_uvp_rm    : 1;  /* bit[4]: 0:ʹ�ܸ��жϣ�
                                                          1:���θ��жϣ� */
        unsigned char  lcd_bst_ovp_rm    : 1;  /* bit[5]: 0:ʹ�ܸ��жϣ�
                                                          1:���θ��жϣ� */
        unsigned char  lcd_bst_scp_rm    : 1;  /* bit[6]: 0:ʹ�ܸ��жϣ�
                                                          1:���θ��жϣ� */
        unsigned char  lcd_bst_ocp_rm    : 1;  /* bit[7]: 0:ʹ�ܸ��жϣ�
                                                          1:���θ��жϣ� */
    } reg;
} SOC_SCHARGER_IRQM3_UNION;
#endif
#define SOC_SCHARGER_IRQM3_ldo2_200ma_ocp_rm_START  (0)
#define SOC_SCHARGER_IRQM3_ldo2_200ma_ocp_rm_END    (0)
#define SOC_SCHARGER_IRQM3_ldo1_200ma_ocp_rm_START  (1)
#define SOC_SCHARGER_IRQM3_ldo1_200ma_ocp_rm_END    (1)
#define SOC_SCHARGER_IRQM3_lcd_ldo_ocp_rm_START     (2)
#define SOC_SCHARGER_IRQM3_lcd_ldo_ocp_rm_END       (2)
#define SOC_SCHARGER_IRQM3_lcd_ncp_scp_rm_START     (3)
#define SOC_SCHARGER_IRQM3_lcd_ncp_scp_rm_END       (3)
#define SOC_SCHARGER_IRQM3_lcd_bst_uvp_rm_START     (4)
#define SOC_SCHARGER_IRQM3_lcd_bst_uvp_rm_END       (4)
#define SOC_SCHARGER_IRQM3_lcd_bst_ovp_rm_START     (5)
#define SOC_SCHARGER_IRQM3_lcd_bst_ovp_rm_END       (5)
#define SOC_SCHARGER_IRQM3_lcd_bst_scp_rm_START     (6)
#define SOC_SCHARGER_IRQM3_lcd_bst_scp_rm_END       (6)
#define SOC_SCHARGER_IRQM3_lcd_bst_ocp_rm_START     (7)
#define SOC_SCHARGER_IRQM3_lcd_bst_ocp_rm_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_IRQM4_UNION
 �ṹ˵��  : IRQM4 �Ĵ����ṹ���塣��ַƫ����:0x10����ֵ:0x00�����:8
 �Ĵ���˵��: �ж�����4�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otg_ovp_5p3v_rm : 1;  /* bit[0]: 0:ʹ�ܸ��жϣ�
                                                        1:���θ��жϣ� */
        unsigned char  otg_uvp_rm      : 1;  /* bit[1]: 0:ʹ�ܸ��жϣ�
                                                        1:���θ��жϣ� */
        unsigned char  otg_ocp_rm      : 1;  /* bit[2]: 0:ʹ�ܸ��жϣ�
                                                        1:���θ��жϣ� */
        unsigned char  otg_scp_rm      : 1;  /* bit[3]: 0:ʹ�ܸ��жϣ�
                                                        1:���θ��жϣ� */
        unsigned char  bat_ltmp_rm     : 1;  /* bit[4]: 0:ʹ�ܸ��жϣ�
                                                        1:���θ��жϣ� */
        unsigned char  bat_htmp_rm     : 1;  /* bit[5]: 0:ʹ�ܸ��жϣ�
                                                        1:���θ��жϣ� */
        unsigned char  vbat_ovp_rm     : 1;  /* bit[6]: 0:ʹ�ܸ��жϣ�
                                                        1:���θ��жϣ� */
        unsigned char  otg_vbat_ok_fm  : 1;  /* bit[7]: 0��ʹ�ܸ��жϣ�
                                                        1�����θ��жϣ� */
    } reg;
} SOC_SCHARGER_IRQM4_UNION;
#endif
#define SOC_SCHARGER_IRQM4_otg_ovp_5p3v_rm_START  (0)
#define SOC_SCHARGER_IRQM4_otg_ovp_5p3v_rm_END    (0)
#define SOC_SCHARGER_IRQM4_otg_uvp_rm_START       (1)
#define SOC_SCHARGER_IRQM4_otg_uvp_rm_END         (1)
#define SOC_SCHARGER_IRQM4_otg_ocp_rm_START       (2)
#define SOC_SCHARGER_IRQM4_otg_ocp_rm_END         (2)
#define SOC_SCHARGER_IRQM4_otg_scp_rm_START       (3)
#define SOC_SCHARGER_IRQM4_otg_scp_rm_END         (3)
#define SOC_SCHARGER_IRQM4_bat_ltmp_rm_START      (4)
#define SOC_SCHARGER_IRQM4_bat_ltmp_rm_END        (4)
#define SOC_SCHARGER_IRQM4_bat_htmp_rm_START      (5)
#define SOC_SCHARGER_IRQM4_bat_htmp_rm_END        (5)
#define SOC_SCHARGER_IRQM4_vbat_ovp_rm_START      (6)
#define SOC_SCHARGER_IRQM4_vbat_ovp_rm_END        (6)
#define SOC_SCHARGER_IRQM4_otg_vbat_ok_fm_START   (7)
#define SOC_SCHARGER_IRQM4_otg_vbat_ok_fm_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_ONFF0_UNION
 �ṹ˵��  : ONFF0 �Ĵ����ṹ���塣��ַƫ����:0x11����ֵ:0x00�����:8
 �Ĵ���˵��: ���ؿ���0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_ncp_en_int     : 1;  /* bit[0]  : 0:�ر�lcd_ncp
                                                             1:����lcd_ncp */
        unsigned char  lcd_ldo_en_int     : 1;  /* bit[1]  : 0:�ر�lcd_ldo
                                                             1:����lcd_ldo */
        unsigned char  lcd_bst_en_int     : 1;  /* bit[2]  : 0:�ر�lcd boost
                                                             1:����lcd boost */
        unsigned char  flash_bst_en_int   : 1;  /* bit[3]  : 0:�ر�flash boost
                                                             1:����flash boost */
        unsigned char  flash_led_flash_en : 1;  /* bit[4]  : 0:�ر�flash_led��flashģʽ
                                                             1:����flash_led��flashģʽ */
        unsigned char  flash_led_torch_en : 1;  /* bit[5]  : 0:�ر�flash_led��torchģʽ
                                                             1:����flash_led��torchģʽ */
        unsigned char  reserved           : 2;  /* bit[6-7]: ������ */
    } reg;
} SOC_SCHARGER_ONFF0_UNION;
#endif
#define SOC_SCHARGER_ONFF0_lcd_ncp_en_int_START      (0)
#define SOC_SCHARGER_ONFF0_lcd_ncp_en_int_END        (0)
#define SOC_SCHARGER_ONFF0_lcd_ldo_en_int_START      (1)
#define SOC_SCHARGER_ONFF0_lcd_ldo_en_int_END        (1)
#define SOC_SCHARGER_ONFF0_lcd_bst_en_int_START      (2)
#define SOC_SCHARGER_ONFF0_lcd_bst_en_int_END        (2)
#define SOC_SCHARGER_ONFF0_flash_bst_en_int_START    (3)
#define SOC_SCHARGER_ONFF0_flash_bst_en_int_END      (3)
#define SOC_SCHARGER_ONFF0_flash_led_flash_en_START  (4)
#define SOC_SCHARGER_ONFF0_flash_led_flash_en_END    (4)
#define SOC_SCHARGER_ONFF0_flash_led_torch_en_START  (5)
#define SOC_SCHARGER_ONFF0_flash_led_torch_en_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_ONFF1_UNION
 �ṹ˵��  : ONFF1 �Ĵ����ṹ���塣��ַƫ����:0x12����ֵ:0x00�����:8
 �Ĵ���˵��: ���ؿ���1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ldo2_200ma_en_int : 1;  /* bit[0]  : 0:�ر�ldo2_200ma(ע���üĴ��������ϵ�POR��λ�źŸ�λ,������λ�ź�soft_rst_n���ⲿӲ��RESET��λ�Ŀ���)
                                                            1:����ldo2_200ma */
        unsigned char  ldo1_200ma_en_int : 1;  /* bit[1]  : 0:�ر�ldo1_200ma
                                                            1:����ldo1_200ma */
        unsigned char  wled_en_int       : 1;  /* bit[2]  : 0:�ر�wled
                                                            1:����wled */
        unsigned char  otg_en_int        : 1;  /* bit[3]  : 0:�ر�otg
                                                            1:����otg  */
        unsigned char  chg_en_int        : 1;  /* bit[4]  : 0:�ر�charge
                                                            1:����charge  */
        unsigned char  reserved          : 3;  /* bit[5-7]: ���� */
    } reg;
} SOC_SCHARGER_ONFF1_UNION;
#endif
#define SOC_SCHARGER_ONFF1_ldo2_200ma_en_int_START  (0)
#define SOC_SCHARGER_ONFF1_ldo2_200ma_en_int_END    (0)
#define SOC_SCHARGER_ONFF1_ldo1_200ma_en_int_START  (1)
#define SOC_SCHARGER_ONFF1_ldo1_200ma_en_int_END    (1)
#define SOC_SCHARGER_ONFF1_wled_en_int_START        (2)
#define SOC_SCHARGER_ONFF1_wled_en_int_END          (2)
#define SOC_SCHARGER_ONFF1_otg_en_int_START         (3)
#define SOC_SCHARGER_ONFF1_otg_en_int_END           (3)
#define SOC_SCHARGER_ONFF1_chg_en_int_START         (4)
#define SOC_SCHARGER_ONFF1_chg_en_int_END           (4)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_REF_REG_UNION
 �ṹ˵��  : REF_REG �Ĵ����ṹ���塣��ַƫ����:0x13����ֵ:0x04�����:8
 �Ĵ���˵��: �¶ȱ����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  thsd_tstp_set : 1;  /* bit[0]  : �¶ȱ���ģ�鱨���¶����á�
                                                        0��120�棻
                                                        1��140�棻
                                                        Ĭ������Ϊ120�档 */
        unsigned char  thsd_treg_set : 2;  /* bit[1-2]: �¶ȱ���ģ�鱨���¶����á�
                                                        00��60�棻
                                                        01��80�棻
                                                        10��100�棻
                                                        11��120�棻
                                                        Ĭ������Ϊ100�档 */
        unsigned char  reserved      : 5;  /* bit[3-7]: ���� */
    } reg;
} SOC_SCHARGER_REF_REG_UNION;
#endif
#define SOC_SCHARGER_REF_REG_thsd_tstp_set_START  (0)
#define SOC_SCHARGER_REF_REG_thsd_tstp_set_END    (0)
#define SOC_SCHARGER_REF_REG_thsd_treg_set_START  (1)
#define SOC_SCHARGER_REF_REG_thsd_treg_set_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_VBAT_OV_SEL_UNION
 �ṹ˵��  : VBAT_OV_SEL �Ĵ����ṹ���塣��ַƫ����:0x14����ֵ:0x01�����:8
 �Ĵ���˵��: ��ع�ѹ��ѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vbat_ov_sel : 1;  /* bit[0]  : ��ع�ѹ��ѡ��
                                                      1����ع�ѹ��Ϊ1.04*VBAT
                                                      0:��ع�ѹ��Ϊ1.06*VBAT */
        unsigned char  reserved    : 7;  /* bit[1-7]: ���� */
    } reg;
} SOC_SCHARGER_VBAT_OV_SEL_UNION;
#endif
#define SOC_SCHARGER_VBAT_OV_SEL_vbat_ov_sel_START  (0)
#define SOC_SCHARGER_VBAT_OV_SEL_vbat_ov_sel_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_WLED_REG0_UNION
 �ṹ˵��  : WLED_REG0 �Ĵ����ṹ���塣��ַƫ����:0x15����ֵ:0x7D�����:8
 �Ĵ���˵��: WLED_REG0���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  wled_bst_ovp_en  : 1;  /* bit[0]  : boost ovpʹ�ܣ�
                                                           1: ʹ��
                                                           0: �ر� */
        unsigned char  wled_bst_en_pfm  : 1;  /* bit[1]  : boost pfmʹ�ܣ� 
                                                           0: �ر�pfm
                                                           1: ʹ��pfm */
        unsigned char  wled_bst_en_clp  : 1;  /* bit[2]  : boost EAǯλ��·���ߵ�һ��ʹ�ܣ�
                                                           0: �ر�ǯλ��·
                                                           1: ʹ��ǯλ��· */
        unsigned char  wled_bst_slop    : 1;  /* bit[3]  : boost б�²���ʹ�ܣ�
                                                           0: �ر�б�²���
                                                           1: ʹ��б�²��� */
        unsigned char  wled_bst_ocp_en  : 1;  /* bit[4]  : boost ocpʹ�ܣ�
                                                           0: �ر�
                                                           1: ʹ�� */
        unsigned char  wled_bst_scp     : 1;  /* bit[5]  : boost scp����ѡ��
                                                           0: ��·��ϵͳ���Զ��رգ����ϱ���
                                                           1: ��·��ϵͳ�Զ��ر� */
        unsigned char  wled_ifb_uvp_sel : 2;  /* bit[6-7]: ifb�˵�uvp��⵵λѡ��
                                                           00: 
                                                           01: 
                                                           10:
                                                           11:  */
    } reg;
} SOC_SCHARGER_WLED_REG0_UNION;
#endif
#define SOC_SCHARGER_WLED_REG0_wled_bst_ovp_en_START   (0)
#define SOC_SCHARGER_WLED_REG0_wled_bst_ovp_en_END     (0)
#define SOC_SCHARGER_WLED_REG0_wled_bst_en_pfm_START   (1)
#define SOC_SCHARGER_WLED_REG0_wled_bst_en_pfm_END     (1)
#define SOC_SCHARGER_WLED_REG0_wled_bst_en_clp_START   (2)
#define SOC_SCHARGER_WLED_REG0_wled_bst_en_clp_END     (2)
#define SOC_SCHARGER_WLED_REG0_wled_bst_slop_START     (3)
#define SOC_SCHARGER_WLED_REG0_wled_bst_slop_END       (3)
#define SOC_SCHARGER_WLED_REG0_wled_bst_ocp_en_START   (4)
#define SOC_SCHARGER_WLED_REG0_wled_bst_ocp_en_END     (4)
#define SOC_SCHARGER_WLED_REG0_wled_bst_scp_START      (5)
#define SOC_SCHARGER_WLED_REG0_wled_bst_scp_END        (5)
#define SOC_SCHARGER_WLED_REG0_wled_ifb_uvp_sel_START  (6)
#define SOC_SCHARGER_WLED_REG0_wled_ifb_uvp_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_WLED_REG1_UNION
 �ṹ˵��  : WLED_REG1 �Ĵ����ṹ���塣��ַƫ����:0x16����ֵ:0xD9�����:8
 �Ĵ���˵��: WLED_REG1���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  wled_bst_clp_l    : 2;  /* bit[0-1]: boost EA���ǯλֵ��VRAMPֱ����ƽֵ��ʧ��
                                                            00: 1.4V
                                                            01: 1.6V
                                                            10: 1.8V
                                                            11: 2V */
        unsigned char  wled_bst_gm       : 3;  /* bit[2-4]: boost EA��gm�����趨(gm=2/R)
                                                            000: 90k��
                                                            001: 80k��
                                                            010: 70k��
                                                            011: 60k��
                                                            100: 40k��
                                                            101: 30k��
                                                            110: 20k��
                                                            111: 10k�� */
        unsigned char  wled_bst_lmos_ocp : 2;  /* bit[5-6]: boost �Ͷ�MOS������ֵ(A)
                                                            00: 
                                                            01: 
                                                            10: 
                                                            11:  */
        unsigned char  wled_bst_ocp      : 1;  /* bit[7]  : boost OCP����ѡ��
                                                            1: �������Զ��ر�boost
                                                            0: �������Զ��ر�boost */
    } reg;
} SOC_SCHARGER_WLED_REG1_UNION;
#endif
#define SOC_SCHARGER_WLED_REG1_wled_bst_clp_l_START     (0)
#define SOC_SCHARGER_WLED_REG1_wled_bst_clp_l_END       (1)
#define SOC_SCHARGER_WLED_REG1_wled_bst_gm_START        (2)
#define SOC_SCHARGER_WLED_REG1_wled_bst_gm_END          (4)
#define SOC_SCHARGER_WLED_REG1_wled_bst_lmos_ocp_START  (5)
#define SOC_SCHARGER_WLED_REG1_wled_bst_lmos_ocp_END    (6)
#define SOC_SCHARGER_WLED_REG1_wled_bst_ocp_START       (7)
#define SOC_SCHARGER_WLED_REG1_wled_bst_ocp_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_WLED_REG2_UNION
 �ṹ˵��  : WLED_REG2 �Ĵ����ṹ���塣��ַƫ����:0x17����ֵ:0x6A�����:8
 �Ĵ���˵��: WLED_REG2���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  wled_bst_drv     : 6;  /* bit[0-5]: boost �¹�����ǿ�ȣ�
                                                           00: 10ns
                                                           01: 20ns
                                                           10: 30ns
                                                           11: 40ns */
        unsigned char  wled_bst_scp_sel : 2;  /* bit[6-7]: boost scp�ļ�⵵λѡ��
                                                           00��
                                                           01��
                                                           10��
                                                           11�� */
    } reg;
} SOC_SCHARGER_WLED_REG2_UNION;
#endif
#define SOC_SCHARGER_WLED_REG2_wled_bst_drv_START      (0)
#define SOC_SCHARGER_WLED_REG2_wled_bst_drv_END        (5)
#define SOC_SCHARGER_WLED_REG2_wled_bst_scp_sel_START  (6)
#define SOC_SCHARGER_WLED_REG2_wled_bst_scp_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_WLED_REG3_UNION
 �ṹ˵��  : WLED_REG3 �Ĵ����ṹ���塣��ַƫ����:0x18����ֵ:0x9A�����:8
 �Ĵ���˵��: WLED_REG3���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  wled_bst_osc : 8;  /* bit[0-7]: ����Ƶ�ʣ�MHz����б���� */
    } reg;
} SOC_SCHARGER_WLED_REG3_UNION;
#endif
#define SOC_SCHARGER_WLED_REG3_wled_bst_osc_START  (0)
#define SOC_SCHARGER_WLED_REG3_wled_bst_osc_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_WLED_REG4_UNION
 �ṹ˵��  : WLED_REG4 �Ĵ����ṹ���塣��ַƫ����:0x19����ֵ:0x9F�����:8
 �Ĵ���˵��: WLED_REG4���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  wled_ifb_prot_en : 4;  /* bit[0-3]: IFB��ovp��uvp����ʹ��
                                                           wled_ifb_prot_en<0>��uvpʹ��
                                                           wled_ifb_prot_en<1>��ovp�ĵ͵�ѹʹ��
                                                           wled_ifb_prot_en<2>��ovp���е�ѹʹ��
                                                           wled_ifb_prot_en<3>��ovp�ĸߵ�ѹʹ�� */
        unsigned char  wled_bst_rf      : 2;  /* bit[4-5]: ��е���ת��ѹ�迹
                                                           00: 12.5k����
                                                           01: 10k����
                                                           10: 7.5k����
                                                           11: 5k���� */
        unsigned char  wled_bst_ckmin   : 2;  /* bit[6-7]: NMOS��С��ͨʱ��
                                                           00: 160ns
                                                           01: 120ns
                                                           10: 80ns
                                                           11: 40ns */
    } reg;
} SOC_SCHARGER_WLED_REG4_UNION;
#endif
#define SOC_SCHARGER_WLED_REG4_wled_ifb_prot_en_START  (0)
#define SOC_SCHARGER_WLED_REG4_wled_ifb_prot_en_END    (3)
#define SOC_SCHARGER_WLED_REG4_wled_bst_rf_START       (4)
#define SOC_SCHARGER_WLED_REG4_wled_bst_rf_END         (5)
#define SOC_SCHARGER_WLED_REG4_wled_bst_ckmin_START    (6)
#define SOC_SCHARGER_WLED_REG4_wled_bst_ckmin_END      (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_WLED_REG5_UNION
 �ṹ˵��  : WLED_REG5 �Ĵ����ṹ���塣��ַƫ����:0x1A����ֵ:0x83�����:8
 �Ĵ���˵��: WLED_REG5���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  wled_resv1 : 8;  /* bit[0-7]: wled_resv1<1:0>Ϊwled_driver��en���ƼĴ�������ĳ·ifb���ã���Ҫ����·��en�ź��õ͡�
                                                     wled_resv1<0>��Ӧifb1��wled_resv1<1>��Ӧifb2.
                                                     00����·ifb1��ifb2���رա�
                                                     01��ifb2�رգ�ifb1����
                                                     10��ifb2������ifb1�ر�
                                                     11����·������
                                                     wled_resv1<5:2>Ϊcurrent sense�ĵ�λѡ�� 
                                                     wled_resv1<6>Ϊosc_comp����
                                                     wled_resv1<7>Ϊboost ��scp��ʹ�� */
    } reg;
} SOC_SCHARGER_WLED_REG5_UNION;
#endif
#define SOC_SCHARGER_WLED_REG5_wled_resv1_START  (0)
#define SOC_SCHARGER_WLED_REG5_wled_resv1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_WLED_REG6_UNION
 �ṹ˵��  : WLED_REG6 �Ĵ����ṹ���塣��ַƫ����:0x1B����ֵ:0x2B�����:8
 �Ĵ���˵��: WLED_REG6���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  wled_resv2 : 8;  /* bit[0-7]: wled_resv2<3:0>ΪICS��trim��λ wled_resv2<5:4>ΪIFB_OVPH�ĵ�λ���� */
    } reg;
} SOC_SCHARGER_WLED_REG6_UNION;
#endif
#define SOC_SCHARGER_WLED_REG6_wled_resv2_START  (0)
#define SOC_SCHARGER_WLED_REG6_wled_resv2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_WLED_REG7_UNION
 �ṹ˵��  : WLED_REG7 �Ĵ����ṹ���塣��ַƫ����:0x1C����ֵ:0x6C�����:8
 �Ĵ���˵��: WLED_REG7���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  wled_resv3 : 8;  /* bit[0-7]: wled_resv3<7:0>Ϊб�²����ĵ��� */
    } reg;
} SOC_SCHARGER_WLED_REG7_UNION;
#endif
#define SOC_SCHARGER_WLED_REG7_wled_resv3_START  (0)
#define SOC_SCHARGER_WLED_REG7_wled_resv3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_WLED_REG8_UNION
 �ṹ˵��  : WLED_REG8 �Ĵ����ṹ���塣��ַƫ����:0x1D����ֵ:0x6D�����:8
 �Ĵ���˵��: WLED_REG8���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  wled_resv4 : 8;  /* bit[0-7]: wled_resv4<0>ΪIFB��UVP�ر�����λ��0Ϊ���Σ�
                                                     wled_resv4<2>Ϊboost��ovp�ر�����λ��0Ϊ����
                                                     wled_resv4<3>Ϊboost��ovpȥ��������λ��0Ϊ���Σ�
                                                     wled_resv4<4>ΪIFB��ovpȥ��ʱ�����λ
                                                     wled_resv4<5>ΪIFB_OVP_LG������λ,0Ϊ���Σ�
                                                     wled_resv4<6>ΪIFB��OVPȥ��ʱ������λ��0Ϊ���Σ�
                                                     wled_resv4<7>Ϊboost��ovpȥ��ʱ�����λ */
    } reg;
} SOC_SCHARGER_WLED_REG8_UNION;
#endif
#define SOC_SCHARGER_WLED_REG8_wled_resv4_START  (0)
#define SOC_SCHARGER_WLED_REG8_wled_resv4_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_WLED_REG9_UNION
 �ṹ˵��  : WLED_REG9 �Ĵ����ṹ���塣��ַƫ����:0x1E����ֵ:0x1F�����:8
 �Ĵ���˵��: WLED_REG9���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  wled_driver_trim_test : 6;  /* bit[0-5]: �Ĵ������Ƶľ����޵���step��1mv */
        unsigned char  wled_ovp_sel          : 2;  /* bit[6-7]: wled��ѹ��ѡ��
                                                                00:38v
                                                                01:39v
                                                                10:40v
                                                                11:41v */
    } reg;
} SOC_SCHARGER_WLED_REG9_UNION;
#endif
#define SOC_SCHARGER_WLED_REG9_wled_driver_trim_test_START  (0)
#define SOC_SCHARGER_WLED_REG9_wled_driver_trim_test_END    (5)
#define SOC_SCHARGER_WLED_REG9_wled_ovp_sel_START           (6)
#define SOC_SCHARGER_WLED_REG9_wled_ovp_sel_END             (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_BOOST_REG0_UNION
 �ṹ˵��  : LCD_BOOST_REG0 �Ĵ����ṹ���塣��ַƫ����:0x1F����ֵ:0x2F�����:8
 �Ĵ���˵��: LCD_BOOST_REG0���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_bst_en_uvp : 1;  /* bit[0]  : en_uvp
                                                         1: ʹ��Ƿѹ��·
                                                         0: �رչ�ѹ��·�����ϱ��� */
        unsigned char  lcd_bst_en_scp : 1;  /* bit[1]  : 1: ʹ�ܶ�·ϵͳ�Զ��ر�
                                                         0: �رն�·ϵͳ�Զ��رգ����ϱ��� */
        unsigned char  lcd_bst_en_ovp : 1;  /* bit[2]  : 1: ʹ�ܹ�ѹ��·
                                                         0: �رչ�ѹ��·�����ϱ��� */
        unsigned char  lcd_bst_en_ocp : 1;  /* bit[3]  : 1: ʹ�ܹ�����·���ƣ������ϱ�
                                                         0: ʹ�ܹ�����·���ƣ����ϱ� */
        unsigned char  lcd_bst_rcom   : 3;  /* bit[4-6]: ����·��������
                                                         000: 520k��
                                                         001: 440k��
                                                         010: 360k��
                                                         011: 280k��
                                                         100:200k��
                                                         101:160k��
                                                         110:120k��
                                                         111:80k�� */
        unsigned char  reserved       : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SCHARGER_LCD_BOOST_REG0_UNION;
#endif
#define SOC_SCHARGER_LCD_BOOST_REG0_lcd_bst_en_uvp_START  (0)
#define SOC_SCHARGER_LCD_BOOST_REG0_lcd_bst_en_uvp_END    (0)
#define SOC_SCHARGER_LCD_BOOST_REG0_lcd_bst_en_scp_START  (1)
#define SOC_SCHARGER_LCD_BOOST_REG0_lcd_bst_en_scp_END    (1)
#define SOC_SCHARGER_LCD_BOOST_REG0_lcd_bst_en_ovp_START  (2)
#define SOC_SCHARGER_LCD_BOOST_REG0_lcd_bst_en_ovp_END    (2)
#define SOC_SCHARGER_LCD_BOOST_REG0_lcd_bst_en_ocp_START  (3)
#define SOC_SCHARGER_LCD_BOOST_REG0_lcd_bst_en_ocp_END    (3)
#define SOC_SCHARGER_LCD_BOOST_REG0_lcd_bst_rcom_START    (4)
#define SOC_SCHARGER_LCD_BOOST_REG0_lcd_bst_rcom_END      (6)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_BOOST_REG1_UNION
 �ṹ˵��  : LCD_BOOST_REG1 �Ĵ����ṹ���塣��ַƫ����:0x20����ֵ:0x4E�����:8
 �Ĵ���˵��: LCD_BOOST_REG1���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_bst_ckmin     : 2;  /* bit[0-1]: NMOS��С��ͨʱ��
                                                            00: 160ns
                                                            01: 120ns
                                                            10: 80ns
                                                            11: 40ns */
        unsigned char  lcd_bst_en_clp_os : 1;  /* bit[2]  : 1: ʹ��ǯλ��·ʧ����ѹ
                                                            0: �ر�ǯλ��·ʧ����ѹ */
        unsigned char  lcd_bst_en_slop   : 1;  /* bit[3]  : 1: ʹ��б�²���
                                                            0: �ر�б�²��� */
        unsigned char  lcd_bst_en_pfm    : 1;  /* bit[4]  : 1: ʹ�������ѹ��ʽ��PFMģʽ
                                                            0: �ر������ѹ��ʽ��PFMģʽ */
        unsigned char  lcd_bst_en_nring  : 1;  /* bit[5]  : ���� */
        unsigned char  lcd_bst_en_dmd    : 1;  /* bit[6]  : 1: ʹ�ܹ�����
                                                            0: �رչ����� */
        unsigned char  reserved          : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SCHARGER_LCD_BOOST_REG1_UNION;
#endif
#define SOC_SCHARGER_LCD_BOOST_REG1_lcd_bst_ckmin_START      (0)
#define SOC_SCHARGER_LCD_BOOST_REG1_lcd_bst_ckmin_END        (1)
#define SOC_SCHARGER_LCD_BOOST_REG1_lcd_bst_en_clp_os_START  (2)
#define SOC_SCHARGER_LCD_BOOST_REG1_lcd_bst_en_clp_os_END    (2)
#define SOC_SCHARGER_LCD_BOOST_REG1_lcd_bst_en_slop_START    (3)
#define SOC_SCHARGER_LCD_BOOST_REG1_lcd_bst_en_slop_END      (3)
#define SOC_SCHARGER_LCD_BOOST_REG1_lcd_bst_en_pfm_START     (4)
#define SOC_SCHARGER_LCD_BOOST_REG1_lcd_bst_en_pfm_END       (4)
#define SOC_SCHARGER_LCD_BOOST_REG1_lcd_bst_en_nring_START   (5)
#define SOC_SCHARGER_LCD_BOOST_REG1_lcd_bst_en_nring_END     (5)
#define SOC_SCHARGER_LCD_BOOST_REG1_lcd_bst_en_dmd_START     (6)
#define SOC_SCHARGER_LCD_BOOST_REG1_lcd_bst_en_dmd_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_BOOST_REG2_UNION
 �ṹ˵��  : LCD_BOOST_REG2 �Ĵ����ṹ���塣��ַƫ����:0x21����ֵ:0x1A�����:8
 �Ĵ���˵��: LCD_BOOST_REG2���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_bst_ri : 2;  /* bit[0-1]: ��е���ת��ѹ�迹
                                                     00: 0.75����ʵ��120k����
                                                     01: 0.625����ʵ��100k����
                                                     10: 0.5����ʵ��80k����
                                                     11: 0.375����ʵ��60k���� */
        unsigned char  lcd_bst_gm : 4;  /* bit[2-5]: EA��gm�����趨(gm=2/R)
                                                     000: 90k��
                                                     001: 80k��
                                                     010: 70k��
                                                     011: 60k��
                                                     100: 40k��
                                                     101: 30k��
                                                     110: 20k��
                                                     111: 10k��
                                                     ��λ���� */
        unsigned char  reserved   : 2;  /* bit[6-7]: ���� */
    } reg;
} SOC_SCHARGER_LCD_BOOST_REG2_UNION;
#endif
#define SOC_SCHARGER_LCD_BOOST_REG2_lcd_bst_ri_START  (0)
#define SOC_SCHARGER_LCD_BOOST_REG2_lcd_bst_ri_END    (1)
#define SOC_SCHARGER_LCD_BOOST_REG2_lcd_bst_gm_START  (2)
#define SOC_SCHARGER_LCD_BOOST_REG2_lcd_bst_gm_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_BOOST_REG3_UNION
 �ṹ˵��  : LCD_BOOST_REG3 �Ĵ����ṹ���塣��ַƫ����:0x22����ֵ:0x83�����:8
 �Ĵ���˵��: LCD_BOOST_REG3���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_bst_clp     : 3;  /* bit[0-2]: EA���ǯλֵ��VRAMPֱ����ƽֵ��ʧ��
                                                          000: 8mV
                                                          001: 12mV
                                                          010: 16mV
                                                          011: 20mV
                                                          100: 24mV
                                                          101: 28mV
                                                          110: 32mV
                                                          111: 36mV */
        unsigned char  lcd_bst_sel_scp : 1;  /* bit[3]  : 1: 2ms��VOUT����0.85BAT���ϱ���·
                                                          0: 1ms��VOUT����0.85BAT���ϱ���· */
        unsigned char  lcd_bst_ccom2   : 2;  /* bit[4-5]: EA����˲�����
                                                          00: 0.65pF��
                                                          01: 1.3pF��
                                                          10: 1.95pF��
                                                          11: 3.9pF�� */
        unsigned char  lcd_bst_ccom1   : 2;  /* bit[6-7]: ����·��������
                                                          00: 20pF
                                                          01: 40pF
                                                          10: 60pF
                                                          11: 80pF */
    } reg;
} SOC_SCHARGER_LCD_BOOST_REG3_UNION;
#endif
#define SOC_SCHARGER_LCD_BOOST_REG3_lcd_bst_clp_START      (0)
#define SOC_SCHARGER_LCD_BOOST_REG3_lcd_bst_clp_END        (2)
#define SOC_SCHARGER_LCD_BOOST_REG3_lcd_bst_sel_scp_START  (3)
#define SOC_SCHARGER_LCD_BOOST_REG3_lcd_bst_sel_scp_END    (3)
#define SOC_SCHARGER_LCD_BOOST_REG3_lcd_bst_ccom2_START    (4)
#define SOC_SCHARGER_LCD_BOOST_REG3_lcd_bst_ccom2_END      (5)
#define SOC_SCHARGER_LCD_BOOST_REG3_lcd_bst_ccom1_START    (6)
#define SOC_SCHARGER_LCD_BOOST_REG3_lcd_bst_ccom1_END      (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_BOOST_REG4_UNION
 �ṹ˵��  : LCD_BOOST_REG4 �Ĵ����ṹ���塣��ַƫ����:0x23����ֵ:0x95�����:8
 �Ĵ���˵��: LCD_BOOST_REG4���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_bst_psn     : 2;  /* bit[0-1]: PMOSդ�ص�ѹ�½�б��
                                                          ���� */
        unsigned char  lcd_bst_psp     : 2;  /* bit[2-3]: PMOSդ�ص�ѹ����б��
                                                          ���� */
        unsigned char  lcd_bst_sel_ocp : 2;  /* bit[4-5]: NMOS����ֵ
                                                          00: 0.8A
                                                          01: 1.2A
                                                          10: 1.6A
                                                          11: 2.0A */
        unsigned char  lcd_bst_slop    : 2;  /* bit[6-7]: б�²���б�ʵ��ڣ����ݵ��ڣ�
                                                          00: 1.2pF��
                                                          01: 1.6pF��
                                                          10: 2.4pF��
                                                          11: 5.1pF�� */
    } reg;
} SOC_SCHARGER_LCD_BOOST_REG4_UNION;
#endif
#define SOC_SCHARGER_LCD_BOOST_REG4_lcd_bst_psn_START      (0)
#define SOC_SCHARGER_LCD_BOOST_REG4_lcd_bst_psn_END        (1)
#define SOC_SCHARGER_LCD_BOOST_REG4_lcd_bst_psp_START      (2)
#define SOC_SCHARGER_LCD_BOOST_REG4_lcd_bst_psp_END        (3)
#define SOC_SCHARGER_LCD_BOOST_REG4_lcd_bst_sel_ocp_START  (4)
#define SOC_SCHARGER_LCD_BOOST_REG4_lcd_bst_sel_ocp_END    (5)
#define SOC_SCHARGER_LCD_BOOST_REG4_lcd_bst_slop_START     (6)
#define SOC_SCHARGER_LCD_BOOST_REG4_lcd_bst_slop_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_BOOST_REG5_UNION
 �ṹ˵��  : LCD_BOOST_REG5 �Ĵ����ṹ���塣��ַƫ����:0x24����ֵ:0x55�����:8
 �Ĵ���˵��: LCD_BOOST_REG5���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_bst_dt_nm : 2;  /* bit[0-1]: NMOS�رպ���PMOS����ʱ
                                                        00: 0
                                                        01: 2ns
                                                        10: 4ns
                                                        11: 6ns */
        unsigned char  lcd_bst_dt_pm : 2;  /* bit[2-3]: PMOS�رպ���NMOS����ʱ
                                                        00: 0
                                                        01: 2ns
                                                        10: 4ns
                                                        11: 6ns */
        unsigned char  lcd_bst_nsn   : 2;  /* bit[4-5]: NMOSդ�ص�ѹ�½�б��
                                                        00: 20ns
                                                        01: 10ns
                                                        10: 5ns
                                                        11: 3ns */
        unsigned char  lcd_bst_nsp   : 2;  /* bit[6-7]: NMOSդ�ص�ѹ����б��
                                                        00: 20ns
                                                        01: 10ns
                                                        10: 5ns
                                                        11: 3ns */
    } reg;
} SOC_SCHARGER_LCD_BOOST_REG5_UNION;
#endif
#define SOC_SCHARGER_LCD_BOOST_REG5_lcd_bst_dt_nm_START  (0)
#define SOC_SCHARGER_LCD_BOOST_REG5_lcd_bst_dt_nm_END    (1)
#define SOC_SCHARGER_LCD_BOOST_REG5_lcd_bst_dt_pm_START  (2)
#define SOC_SCHARGER_LCD_BOOST_REG5_lcd_bst_dt_pm_END    (3)
#define SOC_SCHARGER_LCD_BOOST_REG5_lcd_bst_nsn_START    (4)
#define SOC_SCHARGER_LCD_BOOST_REG5_lcd_bst_nsn_END      (5)
#define SOC_SCHARGER_LCD_BOOST_REG5_lcd_bst_nsp_START    (6)
#define SOC_SCHARGER_LCD_BOOST_REG5_lcd_bst_nsp_END      (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_BOOST_REG6_UNION
 �ṹ˵��  : LCD_BOOST_REG6 �Ĵ����ṹ���塣��ַƫ����:0x25����ֵ:0x53�����:8
 �Ĵ���˵��: LCD_BOOST_REG6���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_bst_vdrop : 3;  /* bit[0-2]: LCD_BST��LDO��NCP Dropout��ѹ
                                                        000��0
                                                        001��200mV
                                                        010��250mV
                                                        011��300mV
                                                        100��350mV
                                                        101��400mV
                                                        110��450mV
                                                        111��500mV
                                                        ��λ���� */
        unsigned char  lcd_bst_osc   : 4;  /* bit[3-6]: ����Ƶ�ʣ�MHz��
                                                        0000: 2.991
                                                        0001: 2.852
                                                        0010: 2.712
                                                        0011: 2.568
                                                        0100: 2.423
                                                        0101: 2.274
                                                        0110: 2.122
                                                        0111: 1.968
                                                        1000: 1.813
                                                        1001: 1.654
                                                        1010: 1.492
                                                        1011: 1.325
                                                        1100: 1.155
                                                        1101: 0.981
                                                        1110: 0.802
                                                        1111: 0.617 */
        unsigned char  reserved      : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SCHARGER_LCD_BOOST_REG6_UNION;
#endif
#define SOC_SCHARGER_LCD_BOOST_REG6_lcd_bst_vdrop_START  (0)
#define SOC_SCHARGER_LCD_BOOST_REG6_lcd_bst_vdrop_END    (2)
#define SOC_SCHARGER_LCD_BOOST_REG6_lcd_bst_osc_START    (3)
#define SOC_SCHARGER_LCD_BOOST_REG6_lcd_bst_osc_END      (6)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_BOOST_REG7_UNION
 �ṹ˵��  : LCD_BOOST_REG7 �Ĵ����ṹ���塣��ַƫ����:0x26����ֵ:0x0E�����:8
 �Ĵ���˵��: LCD_BOOST_REG7���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_bst_vo : 5;  /* bit[0-4]: �����ѹ����LCD_LDO��LCD_NCP��Ӧ���ټ���Dropout��ѹ����LCD_BSTʵ�������ѹ��
                                                     00000:4V
                                                     00001:4.1V
                                                     00010:4.2V
                                                     00011:4.3V
                                                     00100:4.4V
                                                     00101:4.5V
                                                     00110:4.6V
                                                     00111:4.7V
                                                     01000:4.8V
                                                     01001:4.9V
                                                     01010:5.0V
                                                     01011:5.1V
                                                     01100:5.2V
                                                     01101:5.3V
                                                     01110:5.4V
                                                     01111:5.5V
                                                     10000:5.6V
                                                     10001:5.7V
                                                     10010:5.8V
                                                     10011:5.9V
                                                     10100~11111:6V */
        unsigned char  reserved   : 3;  /* bit[5-7]: ���� */
    } reg;
} SOC_SCHARGER_LCD_BOOST_REG7_UNION;
#endif
#define SOC_SCHARGER_LCD_BOOST_REG7_lcd_bst_vo_START  (0)
#define SOC_SCHARGER_LCD_BOOST_REG7_lcd_bst_vo_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_BOOST_REG8_UNION
 �ṹ˵��  : LCD_BOOST_REG8 �Ĵ����ṹ���塣��ַƫ����:0x27����ֵ:0x09�����:8
 �Ĵ���˵��: LCD_BOOST_REG8���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_bst_dmd_ofs : 8;  /* bit[0-7]: DMDʧ��
                                                          0000: 234mA
                                                          0001: 208mA
                                                          0010: 182mA
                                                          0011: 156mA
                                                          0100: 130mA
                                                          0101: 104mA
                                                          0110: 78mA
                                                          0111: 52mA
                                                          1000: 26mA
                                                          1001:0
                                                          1010: -26mA
                                                          1011: -52mA
                                                          1100: -104mA
                                                          1101: -156mA
                                                          1110: -260mA
                                                          1111: -364mA
                                                          ��4bit���� */
    } reg;
} SOC_SCHARGER_LCD_BOOST_REG8_UNION;
#endif
#define SOC_SCHARGER_LCD_BOOST_REG8_lcd_bst_dmd_ofs_START  (0)
#define SOC_SCHARGER_LCD_BOOST_REG8_lcd_bst_dmd_ofs_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_BOOST_REG9_UNION
 �ṹ˵��  : LCD_BOOST_REG9 �Ĵ����ṹ���塣��ַƫ����:0x28����ֵ:0x55�����:8
 �Ĵ���˵��: LCD_BOOST_REG9���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_bst_rsv1 : 8;  /* bit[0-7]: Ԥ���Ĵ��� */
    } reg;
} SOC_SCHARGER_LCD_BOOST_REG9_UNION;
#endif
#define SOC_SCHARGER_LCD_BOOST_REG9_lcd_bst_rsv1_START  (0)
#define SOC_SCHARGER_LCD_BOOST_REG9_lcd_bst_rsv1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_BOOST_REG10_UNION
 �ṹ˵��  : LCD_BOOST_REG10 �Ĵ����ṹ���塣��ַƫ����:0x29����ֵ:0x55�����:8
 �Ĵ���˵��: LCD_BOOST_REG10���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_bst_rsv2 : 8;  /* bit[0-7]: Ԥ���Ĵ��� */
    } reg;
} SOC_SCHARGER_LCD_BOOST_REG10_UNION;
#endif
#define SOC_SCHARGER_LCD_BOOST_REG10_lcd_bst_rsv2_START  (0)
#define SOC_SCHARGER_LCD_BOOST_REG10_lcd_bst_rsv2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_BOOST_REG11_UNION
 �ṹ˵��  : LCD_BOOST_REG11 �Ĵ����ṹ���塣��ַƫ����:0x2A����ֵ:0x00�����:8
 �Ĵ���˵��: LCD_BOOST_REG11���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_bst_rsv3 : 8;  /* bit[0-7]: lcd_bst_rsv3<7:3>:Ԥ���Ĵ���;
                                                       lcd_bst_rsv3<2>:1������lcd_bst_en����
                                                        0��lcd_bst_en������Ч;
                                                       lcd_bst_rsv3<1>:1: PMOSǿ�йر�;
                                                        0: PMOS�����˼Ĵ�������;
                                                       lcd_bst_rsv3<0>:1: PMOSǿ��ֱͨ�������ڲ���·�ر�
                                                        0: PMOS�����˼Ĵ������� */
    } reg;
} SOC_SCHARGER_LCD_BOOST_REG11_UNION;
#endif
#define SOC_SCHARGER_LCD_BOOST_REG11_lcd_bst_rsv3_START  (0)
#define SOC_SCHARGER_LCD_BOOST_REG11_lcd_bst_rsv3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_BOOST_REG12_UNION
 �ṹ˵��  : LCD_BOOST_REG12 �Ĵ����ṹ���塣��ַƫ����:0x2B����ֵ:0x00�����:8
 �Ĵ���˵��: LCD_BOOST_REG12���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_bst_rsv4 : 8;  /* bit[0-7]: Ԥ���Ĵ��� */
    } reg;
} SOC_SCHARGER_LCD_BOOST_REG12_UNION;
#endif
#define SOC_SCHARGER_LCD_BOOST_REG12_lcd_bst_rsv4_START  (0)
#define SOC_SCHARGER_LCD_BOOST_REG12_lcd_bst_rsv4_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_BOOST_REG13_UNION
 �ṹ˵��  : LCD_BOOST_REG13 �Ĵ����ṹ���塣��ַƫ����:0x2C����ֵ:0x00�����:8
 �Ĵ���˵��: LCD_BOOST_REG13���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_bst_rsv5 : 8;  /* bit[0-7]: Ԥ���Ĵ��� */
    } reg;
} SOC_SCHARGER_LCD_BOOST_REG13_UNION;
#endif
#define SOC_SCHARGER_LCD_BOOST_REG13_lcd_bst_rsv5_START  (0)
#define SOC_SCHARGER_LCD_BOOST_REG13_lcd_bst_rsv5_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_BOOST_REG14_UNION
 �ṹ˵��  : LCD_BOOST_REG14 �Ĵ����ṹ���塣��ַƫ����:0x2D����ֵ:0x00�����:8
 �Ĵ���˵��: LCD_BOOST_REG14���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_bst_rsv6 : 8;  /* bit[0-7]: Ԥ���Ĵ��� */
    } reg;
} SOC_SCHARGER_LCD_BOOST_REG14_UNION;
#endif
#define SOC_SCHARGER_LCD_BOOST_REG14_lcd_bst_rsv6_START  (0)
#define SOC_SCHARGER_LCD_BOOST_REG14_lcd_bst_rsv6_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_NCP_REG0_UNION
 �ṹ˵��  : LCD_NCP_REG0 �Ĵ����ṹ���塣��ַƫ����:0x2E����ֵ:0x3A�����:8
 �Ĵ���˵��: LCD_NCP_REG0���ڼĴ�����.
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_ncp_bwl_set : 2;  /* bit[0-1]: ncp��reglation�Ĵ�������źţ�
                                                          00��������С
                                                          11:�������
                                                          ������֮ */
        unsigned char  lcd_ncp_vset    : 5;  /* bit[2-6]: LCD BIAS��ncp�������ѹ�����ź�
                                                          00000:-4V
                                                          00001:-4.1V
                                                          00010:-4.2V
                                                          00011:-4.3V
                                                          00100:-4.4V
                                                          00101:-4.5V
                                                          00110:-4.6V
                                                          00111:-4.7V
                                                          01000:-4.8V
                                                          01001:-4.9V
                                                          01010:-5.0V
                                                          01011:-5.1V
                                                          01100:-5.2V
                                                          01101:-5.3V
                                                          01110:-5.4V
                                                          01111:-5.5V
                                                          10000:-5.6V
                                                          10001:-5.7V
                                                          10010:-5.8V
                                                          10011:-5.9V
                                                          10100~11111:-6V */
        unsigned char  reserved        : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SCHARGER_LCD_NCP_REG0_UNION;
#endif
#define SOC_SCHARGER_LCD_NCP_REG0_lcd_ncp_bwl_set_START  (0)
#define SOC_SCHARGER_LCD_NCP_REG0_lcd_ncp_bwl_set_END    (1)
#define SOC_SCHARGER_LCD_NCP_REG0_lcd_ncp_vset_START     (2)
#define SOC_SCHARGER_LCD_NCP_REG0_lcd_ncp_vset_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_NCP_REG1_UNION
 �ṹ˵��  : LCD_NCP_REG1 �Ĵ����ṹ���塣��ַƫ����:0x2F����ֵ:0xB8�����:8
 �Ĵ���˵��: LCD_NCP_REG1���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_ncp_regop_clamp : 1;  /* bit[0]  : reglation��EA�ڲ������ѹ�Ƿ���λ
                                                              0: ����λ
                                                              1: ��λ */
        unsigned char  lcd_ncp_regop_c     : 1;  /* bit[1]  : reglation��EA�ڲ����ݴ�С����
                                                              0: 1.23pF
                                                              1: 0.615pF */
        unsigned char  lcd_ncp_trm_sel     : 1;  /* bit[2]  : �����ѹ��ѡ��Ĵ���΢������otp trm
                                                              0��Ĭ��ѡ��otp trm
                                                              1��ѡ��Ĵ���΢�� */
        unsigned char  lcd_ncp_dtset       : 2;  /* bit[3-4]: NCP����ʱ������ź�
                                                              00: �
                                                              11����̣�3.3V 28n��
                                                              ������֮ */
        unsigned char  lcd_ncp_clk_ctr     : 3;  /* bit[5-7]: ncp�й���Ƶ�ʵ����źţ�fly������С���ʱ�����ŵ�ʱ�䣩
                                                              000: 0.932us
                                                              001��1.012us
                                                              010��1.109us
                                                              011��1.23us
                                                              100��1.385us
                                                              101: 1.591us
                                                              110��1.875us
                                                              111: 2.31us */
    } reg;
} SOC_SCHARGER_LCD_NCP_REG1_UNION;
#endif
#define SOC_SCHARGER_LCD_NCP_REG1_lcd_ncp_regop_clamp_START  (0)
#define SOC_SCHARGER_LCD_NCP_REG1_lcd_ncp_regop_clamp_END    (0)
#define SOC_SCHARGER_LCD_NCP_REG1_lcd_ncp_regop_c_START      (1)
#define SOC_SCHARGER_LCD_NCP_REG1_lcd_ncp_regop_c_END        (1)
#define SOC_SCHARGER_LCD_NCP_REG1_lcd_ncp_trm_sel_START      (2)
#define SOC_SCHARGER_LCD_NCP_REG1_lcd_ncp_trm_sel_END        (2)
#define SOC_SCHARGER_LCD_NCP_REG1_lcd_ncp_dtset_START        (3)
#define SOC_SCHARGER_LCD_NCP_REG1_lcd_ncp_dtset_END          (4)
#define SOC_SCHARGER_LCD_NCP_REG1_lcd_ncp_clk_ctr_START      (5)
#define SOC_SCHARGER_LCD_NCP_REG1_lcd_ncp_clk_ctr_END        (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_NCP_REG2_UNION
 �ṹ˵��  : LCD_NCP_REG2 �Ĵ����ṹ���塣��ַƫ����:0x30����ֵ:0x00�����:8
 �Ĵ���˵��: LCD_NCP_REG2���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_ncp_trim_bak : 5;  /* bit[0-4]: �Ĵ���trim�����ѹ
                                                           00000��Ĭ�Ͼ�ȷ�����ѹ
                                                           00001��-0.26%
                                                           00010��-0.57%
                                                           00011��-0.86%
                                                           00100��-1.19%
                                                           00101��-1.48%
                                                           00110��-1.79%
                                                           00111��-2.08%
                                                           01000��-2.44%
                                                           01001��-2.73%
                                                           01010��-3.04%
                                                           01011: -3.33%
                                                           01100: -3.67%
                                                           01101: -3.96%
                                                           01110: -4.27%
                                                           01111: -4.56%
                                                           10000��0.4%
                                                           10001��0.7%
                                                           10010��1.0%
                                                           10011��1.3%
                                                           10100��1.6%
                                                           10101��1.9%
                                                           10110��2.2%
                                                           10111��2.5%
                                                           11000��2.9%
                                                           11001��3.2%
                                                           11010: 3.5%
                                                           11011: 3.8%
                                                           11100: 4.1%
                                                           11101: 4.4%
                                                           11110: 4.7%
                                                           11111: 5.0% */
        unsigned char  lcd_ncp_reg_p    : 2;  /* bit[5-6]: ����reglation����������
                                                           00: ��������Ϊ5u
                                                           01����������Ϊ6u
                                                           10����������Ϊ7u
                                                           11: ��������Ϊ8u */
        unsigned char  lcd_ncp_reg_c    : 1;  /* bit[7]  : reglation��EA�ⲿ�������ݵ���
                                                           0�������Ӳ�������
                                                           1�����Ӳ������� */
    } reg;
} SOC_SCHARGER_LCD_NCP_REG2_UNION;
#endif
#define SOC_SCHARGER_LCD_NCP_REG2_lcd_ncp_trim_bak_START  (0)
#define SOC_SCHARGER_LCD_NCP_REG2_lcd_ncp_trim_bak_END    (4)
#define SOC_SCHARGER_LCD_NCP_REG2_lcd_ncp_reg_p_START     (5)
#define SOC_SCHARGER_LCD_NCP_REG2_lcd_ncp_reg_p_END       (6)
#define SOC_SCHARGER_LCD_NCP_REG2_lcd_ncp_reg_c_START     (7)
#define SOC_SCHARGER_LCD_NCP_REG2_lcd_ncp_reg_c_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_NCP_REG3_UNION
 �ṹ˵��  : LCD_NCP_REG3 �Ĵ����ṹ���塣��ַƫ����:0x31����ֵ:0x04�����:8
 �Ĵ���˵��: LCD_NCP_REG3���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_ncp_rap_vx   : 1;  /* bit[0]  : 0: ����VX��������б���ź�
                                                           1: ֻ����ǰ�����ݲ���б���� */
        unsigned char  lcd_ncp_rap_set  : 2;  /* bit[1-2]: ����VFB2���Ʋ��Ĵ�С
                                                           00:�Ʋ����
                                                           11:�Ʋ���С
                                                           ������֮ */
        unsigned char  lcd_ncp_reg_n    : 3;  /* bit[3-5]: ����reglatiop������µ���ֵ�Ĵ�С
                                                           000:5k
                                                           001:4k
                                                           010:3k
                                                           011:2k
                                                           100:6k
                                                           101:7k
                                                           111:8k */
        unsigned char  lcd_ncp_vcmp_sel : 1;  /* bit[6]  : reglation�Ƿ�ʹ��
                                                           0��Ĭ��ʹ��
                                                           1����ʹ�� */
        unsigned char  reserved         : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SCHARGER_LCD_NCP_REG3_UNION;
#endif
#define SOC_SCHARGER_LCD_NCP_REG3_lcd_ncp_rap_vx_START    (0)
#define SOC_SCHARGER_LCD_NCP_REG3_lcd_ncp_rap_vx_END      (0)
#define SOC_SCHARGER_LCD_NCP_REG3_lcd_ncp_rap_set_START   (1)
#define SOC_SCHARGER_LCD_NCP_REG3_lcd_ncp_rap_set_END     (2)
#define SOC_SCHARGER_LCD_NCP_REG3_lcd_ncp_reg_n_START     (3)
#define SOC_SCHARGER_LCD_NCP_REG3_lcd_ncp_reg_n_END       (5)
#define SOC_SCHARGER_LCD_NCP_REG3_lcd_ncp_vcmp_sel_START  (6)
#define SOC_SCHARGER_LCD_NCP_REG3_lcd_ncp_vcmp_sel_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_NCP_REG4_UNION
 �ṹ˵��  : LCD_NCP_REG4 �Ĵ����ṹ���塣��ַƫ����:0x32����ֵ:0x00�����:8
 �Ĵ���˵��: LCD_NCP_REG4���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_ncp_vl1_disclamp : 1;  /* bit[0]  : Ϊ0ʱ��Ĭ����λ���������ѹ����5.4Vʱ������Ϊ1������λVL1 */
        unsigned char  lcd_ncp_vh1_disclamp : 1;  /* bit[1]  : Ϊ0ʱ��Ĭ����λ���������ѹ����5.4Vʱ������Ϊ1������λVH1 */
        unsigned char  lcd_ncp_g3dr_set     : 2;  /* bit[2-3]: �������NMOS�ܵ���������
                                                               00��Ĭ��m=70
                                                               01��m=50
                                                               10��m=35
                                                               11��m=20 */
        unsigned char  reserved             : 4;  /* bit[4-7]: ���� */
    } reg;
} SOC_SCHARGER_LCD_NCP_REG4_UNION;
#endif
#define SOC_SCHARGER_LCD_NCP_REG4_lcd_ncp_vl1_disclamp_START  (0)
#define SOC_SCHARGER_LCD_NCP_REG4_lcd_ncp_vl1_disclamp_END    (0)
#define SOC_SCHARGER_LCD_NCP_REG4_lcd_ncp_vh1_disclamp_START  (1)
#define SOC_SCHARGER_LCD_NCP_REG4_lcd_ncp_vh1_disclamp_END    (1)
#define SOC_SCHARGER_LCD_NCP_REG4_lcd_ncp_g3dr_set_START      (2)
#define SOC_SCHARGER_LCD_NCP_REG4_lcd_ncp_g3dr_set_END        (3)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_NCP_REG5_UNION
 �ṹ˵��  : LCD_NCP_REG5 �Ĵ����ṹ���塣��ַƫ����:0x33����ֵ:0x00�����:8
 �Ĵ���˵��: LCD_NCP_REG5���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_ncp_resved : 8;  /* bit[0-7]: 7:1λΪ�����Ĵ�������0λ���ڹ���PMOS�ĸ�����Ĭ��ֵΪ0��0��m=40��1��m=20�� */
    } reg;
} SOC_SCHARGER_LCD_NCP_REG5_UNION;
#endif
#define SOC_SCHARGER_LCD_NCP_REG5_lcd_ncp_resved_START  (0)
#define SOC_SCHARGER_LCD_NCP_REG5_lcd_ncp_resved_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LCD_LDO_REG0_UNION
 �ṹ˵��  : LCD_LDO_REG0 �Ĵ����ṹ���塣��ַƫ����:0x34����ֵ:0x0E�����:8
 �Ĵ���˵��: LCD_LDO_REG0���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lcd_ldo_vset : 5;  /* bit[0-4]: LCD BIAS��LDO�������ѹ�����ź�
                                                       00000:4V
                                                       00001:4.1V
                                                       00010:4.2V
                                                       00011:4.3V
                                                       00100:4.4V
                                                       00101:4.5V
                                                       00110:4.6V
                                                       00111:4.7V
                                                       01000:4.8V
                                                       01001:4.9V
                                                       01010:5.0V
                                                       01011:5.1V
                                                       01100:5.2V
                                                       01101:5.3V
                                                       01110:5.4V
                                                       01111:5.5V
                                                       10000:5.6V
                                                       10001:5.7V
                                                       10010:5.8V
                                                       10011:5.9V
                                                       10100~11111:6V */
        unsigned char  reserved     : 3;  /* bit[5-7]: ���� */
    } reg;
} SOC_SCHARGER_LCD_LDO_REG0_UNION;
#endif
#define SOC_SCHARGER_LCD_LDO_REG0_lcd_ldo_vset_START  (0)
#define SOC_SCHARGER_LCD_LDO_REG0_lcd_ldo_vset_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_LDO_REG0_UNION
 �ṹ˵��  : LDO_REG0 �Ĵ����ṹ���塣��ַƫ����:0x35����ֵ:0x3D�����:8
 �Ĵ���˵��: LDO_REG0���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ldo2_200ma_vset : 4;  /* bit[0-3]: 200mA��LDO2�������ѹ�����ź�
                                                          0000:1.5V
                                                          0001:1.6V
                                                          0010:1.7V
                                                          0011:1.8V
                                                          0100:1.9V
                                                          0101:2.0V
                                                          0110:2.2V
                                                          0111:2.4V
                                                          1000:2.6V
                                                          1001:2.7V
                                                          1010:2.8V
                                                          1011:2.9V
                                                          1100:3.0V
                                                          1101:3.1V
                                                          1110:3.2V
                                                          1111:3.3V */
        unsigned char  ldo1_200ma_vset : 4;  /* bit[4-7]: 200mA��LDO1�������ѹ�����ź�
                                                          0000:1.5V
                                                          0001:1.6V
                                                          0010:1.7V
                                                          0011:1.8V
                                                          0100:1.9V
                                                          0101:2.0V
                                                          0110:2.2V
                                                          0111:2.4V
                                                          1000:2.6V
                                                          1001:2.7V
                                                          1010:2.8V
                                                          1011:2.9V
                                                          1100:3.0V
                                                          1101:3.1V
                                                          1110:3.2V
                                                          1111:3.3V */
    } reg;
} SOC_SCHARGER_LDO_REG0_UNION;
#endif
#define SOC_SCHARGER_LDO_REG0_ldo2_200ma_vset_START  (0)
#define SOC_SCHARGER_LDO_REG0_ldo2_200ma_vset_END    (3)
#define SOC_SCHARGER_LDO_REG0_ldo1_200ma_vset_START  (4)
#define SOC_SCHARGER_LDO_REG0_ldo1_200ma_vset_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_BUCK_REG0_UNION
 �ṹ˵��  : BUCK_REG0 �Ĵ����ṹ���塣��ַƫ����:0x36����ֵ:0xFF�����:8
 �Ĵ���˵��: BUCK_REG0���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck_max_ontime  : 2;  /* bit[0-1]: ���ͨʱ��ѡ��
                                                           00:6.2us
                                                           01:5.4us
                                                           10:4.8us
                                                           11:4us */
        unsigned char  buck_c2_sel      : 2;  /* bit[2-3]: ���͵�·RC����ֵѡ��
                                                           00:5pF
                                                           01:10pF
                                                           10:15pF
                                                           11:20pF */
        unsigned char  buck_c1_sel      : 2;  /* bit[4-5]: ���͵�·��ֱ����ѡ��
                                                           00:10pF
                                                           01:20pF
                                                           10:30pF
                                                           11:40pF */
        unsigned char  buck_max_offtime : 2;  /* bit[6-7]: ���ض�ʱ��ѡ��
                                                           00:6.2us
                                                           01:5.4us
                                                           10:4.8us
                                                           11:4us */
    } reg;
} SOC_SCHARGER_BUCK_REG0_UNION;
#endif
#define SOC_SCHARGER_BUCK_REG0_buck_max_ontime_START   (0)
#define SOC_SCHARGER_BUCK_REG0_buck_max_ontime_END     (1)
#define SOC_SCHARGER_BUCK_REG0_buck_c2_sel_START       (2)
#define SOC_SCHARGER_BUCK_REG0_buck_c2_sel_END         (3)
#define SOC_SCHARGER_BUCK_REG0_buck_c1_sel_START       (4)
#define SOC_SCHARGER_BUCK_REG0_buck_c1_sel_END         (5)
#define SOC_SCHARGER_BUCK_REG0_buck_max_offtime_START  (6)
#define SOC_SCHARGER_BUCK_REG0_buck_max_offtime_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_BUCK_REG1_UNION
 �ṹ˵��  : BUCK_REG1 �Ĵ����ṹ���塣��ַƫ����:0x37����ֵ:0xF7�����:8
 �Ĵ���˵��: BUCK_REG1���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck_hmos_fall_ramp : 2;  /* bit[0-1]: �Ϲ��½�����������ѡ��
                                                              00��36ns
                                                              01:18ns
                                                              10:12ns
                                                              11:9ns */
        unsigned char  buck_hmos_rise_ramp : 2;  /* bit[2-3]: �Ϲ���������������ѡ��
                                                              00��50ns
                                                              01:25ns
                                                              10:17ns
                                                              11:12.5ns */
        unsigned char  buck_min_offtime    : 2;  /* bit[4-5]: ��С�ض�ʱ��ѡ��
                                                              00:180ns
                                                              01:160ns
                                                              10:140ns
                                                              11:120ns */
        unsigned char  buck_min_ontime     : 2;  /* bit[6-7]: ��С��ͨʱ��ѡ��
                                                              00:155ns
                                                              01:120ns
                                                              10:110ns
                                                              11:75ns */
    } reg;
} SOC_SCHARGER_BUCK_REG1_UNION;
#endif
#define SOC_SCHARGER_BUCK_REG1_buck_hmos_fall_ramp_START  (0)
#define SOC_SCHARGER_BUCK_REG1_buck_hmos_fall_ramp_END    (1)
#define SOC_SCHARGER_BUCK_REG1_buck_hmos_rise_ramp_START  (2)
#define SOC_SCHARGER_BUCK_REG1_buck_hmos_rise_ramp_END    (3)
#define SOC_SCHARGER_BUCK_REG1_buck_min_offtime_START     (4)
#define SOC_SCHARGER_BUCK_REG1_buck_min_offtime_END       (5)
#define SOC_SCHARGER_BUCK_REG1_buck_min_ontime_START      (6)
#define SOC_SCHARGER_BUCK_REG1_buck_min_ontime_END        (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_BUCK_REG2_UNION
 �ṹ˵��  : BUCK_REG2 �Ĵ����ṹ���塣��ַƫ����:0x38����ֵ:0xF1�����:8
 �Ĵ���˵��: BUCK_REG2���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck_en_dmd               : 1;  /* bit[0]  : ѡ���Ƿ�ʹ��DMD����
                                                                    0����ʹ��
                                                                    1��ʹ�� */
        unsigned char  buck_dt_lx_rise_delay_sel : 1;  /* bit[1]  : lx���������������ӳ�5ns
                                                                    0���������ӳ�
                                                                    1�������ӳ� */
        unsigned char  buck_dt_lx_fall_sel       : 1;  /* bit[2]  : lx�½�������������ʽѡ��
                                                                    0��������ʱ��
                                                                    1��������ʱ�� */
        unsigned char  buck_dt_lx_rise_sel       : 1;  /* bit[3]  : lx����������������ʽѡ��
                                                                    0��������ʱ��
                                                                    1��������ʱ�� */
        unsigned char  buck_lmos_fall_ramp       : 2;  /* bit[4-5]: �¹��½�����������ѡ��
                                                                    00��40ns
                                                                    01:20ns
                                                                    10:10ns
                                                                    11:5ns */
        unsigned char  buck_lmos_rise_ramp       : 2;  /* bit[6-7]: �¹���������������ѡ��
                                                                    00��40ns
                                                                    01:20ns
                                                                    10:10ns
                                                                    11:5ns */
    } reg;
} SOC_SCHARGER_BUCK_REG2_UNION;
#endif
#define SOC_SCHARGER_BUCK_REG2_buck_en_dmd_START                (0)
#define SOC_SCHARGER_BUCK_REG2_buck_en_dmd_END                  (0)
#define SOC_SCHARGER_BUCK_REG2_buck_dt_lx_rise_delay_sel_START  (1)
#define SOC_SCHARGER_BUCK_REG2_buck_dt_lx_rise_delay_sel_END    (1)
#define SOC_SCHARGER_BUCK_REG2_buck_dt_lx_fall_sel_START        (2)
#define SOC_SCHARGER_BUCK_REG2_buck_dt_lx_fall_sel_END          (2)
#define SOC_SCHARGER_BUCK_REG2_buck_dt_lx_rise_sel_START        (3)
#define SOC_SCHARGER_BUCK_REG2_buck_dt_lx_rise_sel_END          (3)
#define SOC_SCHARGER_BUCK_REG2_buck_lmos_fall_ramp_START        (4)
#define SOC_SCHARGER_BUCK_REG2_buck_lmos_fall_ramp_END          (5)
#define SOC_SCHARGER_BUCK_REG2_buck_lmos_rise_ramp_START        (6)
#define SOC_SCHARGER_BUCK_REG2_buck_lmos_rise_ramp_END          (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_BUCK_REG3_UNION
 �ṹ˵��  : BUCK_REG3 �Ĵ����ṹ���塣��ַƫ����:0x39����ֵ:0x11�����:8
 �Ĵ���˵��: BUCK_REG3���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck_sysmin_sel : 2;  /* bit[0-1]: Vsys��С�����ѹѡ��
                                                          00:3.55V
                                                          01:3.65V
                                                          10:3.75V
                                                          11:3.85V */
        unsigned char  buck_dmd_offset : 3;  /* bit[2-4]: DMD��ѡ��
                                                          00��-250mA
                                                          01��-190mA
                                                          10:-130mA
                                                          11:-60mA
                                                          100��30mA
                                                          101:70mA
                                                          110:120mA
                                                          111:174mA */
        unsigned char  reserved        : 3;  /* bit[5-7]: ���� */
    } reg;
} SOC_SCHARGER_BUCK_REG3_UNION;
#endif
#define SOC_SCHARGER_BUCK_REG3_buck_sysmin_sel_START  (0)
#define SOC_SCHARGER_BUCK_REG3_buck_sysmin_sel_END    (1)
#define SOC_SCHARGER_BUCK_REG3_buck_dmd_offset_START  (2)
#define SOC_SCHARGER_BUCK_REG3_buck_dmd_offset_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_BUCK_REG4_UNION
 �ṹ˵��  : BUCK_REG4 �Ĵ����ṹ���塣��ַƫ����:0x3A����ֵ:0x26�����:8
 �Ĵ���˵��: BUCK_REG4���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck_dpm_sel     : 4;  /* bit[0-3]: DPM�����ѹ�趨
                                                           0000:3.88V
                                                           0001:3.96V
                                                           0010:4.04V
                                                           0011:4.12V
                                                           0100:4.20V
                                                           0101:4.28V
                                                           0110:4.36V
                                                           0111:4.44V
                                                           1000:4.52V
                                                           1001:4.60V
                                                           1010:4.68V
                                                           1011:4.76V
                                                           1100:4.84V
                                                           1101:4.92V
                                                           1110:5.00V
                                                           1111:5.08V */
        unsigned char  buck_int_lim_sel : 4;  /* bit[4-7]: ƽ���������趨����
                                                           0000:100mA
                                                           0001:150mA
                                                           0010:500mA
                                                           0011:900mA
                                                           0100:1A
                                                           0101:1.2A
                                                           0110:1.5A
                                                           0111:1.6A
                                                           1000:1.8A
                                                           1001:2.0A
                                                           1010:2.2A
                                                           1011:2.5A */
    } reg;
} SOC_SCHARGER_BUCK_REG4_UNION;
#endif
#define SOC_SCHARGER_BUCK_REG4_buck_dpm_sel_START      (0)
#define SOC_SCHARGER_BUCK_REG4_buck_dpm_sel_END        (3)
#define SOC_SCHARGER_BUCK_REG4_buck_int_lim_sel_START  (4)
#define SOC_SCHARGER_BUCK_REG4_buck_int_lim_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_BUCK_REG5_UNION
 �ṹ˵��  : BUCK_REG5 �Ĵ����ṹ���塣��ַƫ����:0x3B����ֵ:0x00�����:8
 �Ĵ���˵��: BUCK_REG5���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck_reserve : 8;  /* bit[0-7]: buck_reserve<5:0>ΪԤ���Ĵ���
                                                       buck_reserve<6>:�ϵ��ʼ̬���ε�·�ر��ź�
                                                       0��ʹ�ܳ�ʼ̬���ε�·(default)
                                                       1:�رճ�ʼ̬���ε�·.
                                                       Buck_reserve<7>:���ģʽѡ��
                                                       0��IRģʽ��default)
                                                       1��GAPģʽ. */
    } reg;
} SOC_SCHARGER_BUCK_REG5_UNION;
#endif
#define SOC_SCHARGER_BUCK_REG5_buck_reserve_START  (0)
#define SOC_SCHARGER_BUCK_REG5_buck_reserve_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_BUCK_REG6_UNION
 �ṹ˵��  : BUCK_REG6 �Ĵ����ṹ���塣��ַƫ����:0x3C����ֵ:0x20�����:8
 �Ĵ���˵��: BUCK_REG6���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck_ocp_off : 1;  /* bit[0]  : �ر�OCP����
                                                       0�����ر�
                                                       1���ر� */
        unsigned char  buck_ocp_sel : 2;  /* bit[1-2]: OCP��ѡ��
                                                       00:2.8
                                                       01:3.4
                                                       10:4
                                                       11:4.6 */
        unsigned char  buck_gap_sel : 3;  /* bit[3-5]: buck 150mv gap ������
                                                       �����䡣 */
        unsigned char  reserved     : 2;  /* bit[6-7]: ���� */
    } reg;
} SOC_SCHARGER_BUCK_REG6_UNION;
#endif
#define SOC_SCHARGER_BUCK_REG6_buck_ocp_off_START  (0)
#define SOC_SCHARGER_BUCK_REG6_buck_ocp_off_END    (0)
#define SOC_SCHARGER_BUCK_REG6_buck_ocp_sel_START  (1)
#define SOC_SCHARGER_BUCK_REG6_buck_ocp_sel_END    (2)
#define SOC_SCHARGER_BUCK_REG6_buck_gap_sel_START  (3)
#define SOC_SCHARGER_BUCK_REG6_buck_gap_sel_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_OTG_REG0_UNION
 �ṹ˵��  : OTG_REG0 �Ĵ����ṹ���塣��ַƫ����:0x3D����ֵ:0x75�����:8
 �Ĵ���˵��: OTG_REG0���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otg_uvp_en       : 1;  /* bit[0]: otg boost uvpʹ�ܣ�
                                                         0: �ر�Ƿѹ��·�����ϱ���
                                                         1: ʹ��Ƿѹ��·���ϱ��� */
        unsigned char  otg_scp_time     : 1;  /* bit[1]: otg boost scpʱ��ѡ��
                                                         0: 1ms��VOUT����0.85BAT���ϱ���·
                                                         1: 2ms��VOUT����0.85BAT���ϱ���· */
        unsigned char  otg_scp_en       : 1;  /* bit[2]: otg boost scp����ѡ��
                                                         0: ��·��ϵͳ���Զ��رգ����ϱ���
                                                         1: ��·��ϵͳ�Զ��ر� */
        unsigned char  otg_ocp_sys      : 1;  /* bit[3]: boost OCP����ѡ��
                                                         0: �������ϱ�
                                                         1: �������ϱ� */
        unsigned char  otg_ocp_en       : 1;  /* bit[4]: boost OCP����ѡ��
                                                         0: ����������
                                                         1: ���������� */
        unsigned char  otg_lim_set      : 1;  /* bit[5]: boostƽ������ѡ��
                                                         0:500mA
                                                         1:1A */
        unsigned char  otg_lim_en       : 1;  /* bit[6]: boost ƽ������ģ��ʹ�ܣ�
                                                         0: �ر�ƽ������ģ��
                                                         1: ʹ��ƽ������ģ�� */
        unsigned char  otg_force_en_int : 1;  /* bit[7]: 0: �ر�otg_force_en
                                                         1: ����otg_force_en */
    } reg;
} SOC_SCHARGER_OTG_REG0_UNION;
#endif
#define SOC_SCHARGER_OTG_REG0_otg_uvp_en_START        (0)
#define SOC_SCHARGER_OTG_REG0_otg_uvp_en_END          (0)
#define SOC_SCHARGER_OTG_REG0_otg_scp_time_START      (1)
#define SOC_SCHARGER_OTG_REG0_otg_scp_time_END        (1)
#define SOC_SCHARGER_OTG_REG0_otg_scp_en_START        (2)
#define SOC_SCHARGER_OTG_REG0_otg_scp_en_END          (2)
#define SOC_SCHARGER_OTG_REG0_otg_ocp_sys_START       (3)
#define SOC_SCHARGER_OTG_REG0_otg_ocp_sys_END         (3)
#define SOC_SCHARGER_OTG_REG0_otg_ocp_en_START        (4)
#define SOC_SCHARGER_OTG_REG0_otg_ocp_en_END          (4)
#define SOC_SCHARGER_OTG_REG0_otg_lim_set_START       (5)
#define SOC_SCHARGER_OTG_REG0_otg_lim_set_END         (5)
#define SOC_SCHARGER_OTG_REG0_otg_lim_en_START        (6)
#define SOC_SCHARGER_OTG_REG0_otg_lim_en_END          (6)
#define SOC_SCHARGER_OTG_REG0_otg_force_en_int_START  (7)
#define SOC_SCHARGER_OTG_REG0_otg_force_en_int_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_OTG_REG1_UNION
 �ṹ˵��  : OTG_REG1 �Ĵ����ṹ���塣��ַƫ����:0x3E����ֵ:0x19�����:8
 �Ĵ���˵��: OTG_REG1���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otg_ovp_set_t : 2;  /* bit[0-1]: boost ovpȥ��ʱ��ѡ��
                                                        00: 0
                                                        01: 1ms
                                                        10: 2ms
                                                        11: 4ms */
        unsigned char  otg_skip_set  : 1;  /* bit[2]  : skip������Pmos�Ŀ���״̬��
                                                        0: PMOS�ر�
                                                        1: PMOS���� */
        unsigned char  otg_ovp_en    : 1;  /* bit[3]  : boost ovpʹ�ܣ�
                                                        0: �رչ�ѹ��·�����ϱ���
                                                        1: ʹ�ܹ�ѹ��·���ϱ��� */
        unsigned char  otg_uvp_set_t : 2;  /* bit[4-5]: boost uvpȥ��ʱ��ѡ��
                                                        00: 0
                                                        01: 1ms
                                                        10: 2ms
                                                        11: 4ms */
        unsigned char  reserved      : 2;  /* bit[6-7]: ���� */
    } reg;
} SOC_SCHARGER_OTG_REG1_UNION;
#endif
#define SOC_SCHARGER_OTG_REG1_otg_ovp_set_t_START  (0)
#define SOC_SCHARGER_OTG_REG1_otg_ovp_set_t_END    (1)
#define SOC_SCHARGER_OTG_REG1_otg_skip_set_START   (2)
#define SOC_SCHARGER_OTG_REG1_otg_skip_set_END     (2)
#define SOC_SCHARGER_OTG_REG1_otg_ovp_en_START     (3)
#define SOC_SCHARGER_OTG_REG1_otg_ovp_en_END       (3)
#define SOC_SCHARGER_OTG_REG1_otg_uvp_set_t_START  (4)
#define SOC_SCHARGER_OTG_REG1_otg_uvp_set_t_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_OTG_REG2_UNION
 �ṹ˵��  : OTG_REG2 �Ĵ����ṹ���塣��ַƫ����:0x3F����ֵ:0xE5�����:8
 �Ĵ���˵��: OTG_REG2���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otg_clp_l_iav_en : 1;  /* bit[0]  : boost EA_iavǯλ��·���ͣ�ʹ�ܣ�
                                                           0: �ر�ǯλ��·
                                                           1: ʹ��ǯλ��· */
        unsigned char  otg_clp_h_iav_en : 1;  /* bit[1]  : boost EA_iavǯλ��·���ߣ�ʹ�ܣ�
                                                           0: �ر�ǯλ��·
                                                           1: ʹ��ǯλ��· */
        unsigned char  otg_clp_l_en     : 1;  /* bit[2]  : boost EAǯλ��·���ͣ�ʹ�ܣ�
                                                           0: �ر�ǯλ��·
                                                           1: ʹ��ǯλ��· */
        unsigned char  otg_clp_h_en     : 1;  /* bit[3]  : boost EAǯλ��·���ߣ�ʹ�ܣ�
                                                           0: �ر�ǯλ��·
                                                           1: ʹ��ǯλ��· */
        unsigned char  otg_slop_set     : 2;  /* bit[4-5]: boost б�²�������ѡ��
                                                           00: 1.5p
                                                           01: 2p
                                                           10: 2.5p
                                                           11: 3p */
        unsigned char  otg_slop_en      : 1;  /* bit[6]  : boost б�²���ʹ�ܣ�
                                                           0: �ر�б�²���
                                                           1: ʹ��б�²��� */
        unsigned char  otg_dmd          : 1;  /* bit[7]  : boost dmdʹ�ܣ�
                                                           0: �رչ�����
                                                           1: ʹ�ܹ����� */
    } reg;
} SOC_SCHARGER_OTG_REG2_UNION;
#endif
#define SOC_SCHARGER_OTG_REG2_otg_clp_l_iav_en_START  (0)
#define SOC_SCHARGER_OTG_REG2_otg_clp_l_iav_en_END    (0)
#define SOC_SCHARGER_OTG_REG2_otg_clp_h_iav_en_START  (1)
#define SOC_SCHARGER_OTG_REG2_otg_clp_h_iav_en_END    (1)
#define SOC_SCHARGER_OTG_REG2_otg_clp_l_en_START      (2)
#define SOC_SCHARGER_OTG_REG2_otg_clp_l_en_END        (2)
#define SOC_SCHARGER_OTG_REG2_otg_clp_h_en_START      (3)
#define SOC_SCHARGER_OTG_REG2_otg_clp_h_en_END        (3)
#define SOC_SCHARGER_OTG_REG2_otg_slop_set_START      (4)
#define SOC_SCHARGER_OTG_REG2_otg_slop_set_END        (5)
#define SOC_SCHARGER_OTG_REG2_otg_slop_en_START       (6)
#define SOC_SCHARGER_OTG_REG2_otg_slop_en_END         (6)
#define SOC_SCHARGER_OTG_REG2_otg_dmd_START           (7)
#define SOC_SCHARGER_OTG_REG2_otg_dmd_END             (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_OTG_REG3_UNION
 �ṹ˵��  : OTG_REG3 �Ĵ����ṹ���塣��ַƫ����:0x40����ֵ:0x8B�����:8
 �Ĵ���˵��: OTG_REG3���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otg_gm        : 3;  /* bit[0-2]: boost EA��gm�����趨(gm=2/R)
                                                        000: 90k��
                                                        001: 80k��
                                                        010: 70k��
                                                        011: 60k��
                                                        100: 40k��
                                                        101: 30k��
                                                        110: 20k��
                                                        111: 10k�� */
        unsigned char  otg_iav_t_set : 2;  /* bit[3-4]: boost iav���������ã�
                                                        00: 40ns
                                                        01: 30ns
                                                        10: 20ns
                                                        11: 15ns */
        unsigned char  reseved       : 1;  /* bit[5]  : ����,�������á� */
        unsigned char  reserved      : 1;  /* bit[6]  : �������������á� */
        unsigned char  otg_pfm_v_en  : 1;  /* bit[7]  : boost pfm_vʹ�ܣ� 0: �ر�pfm
                                                        1: ʹ��pfm */
    } reg;
} SOC_SCHARGER_OTG_REG3_UNION;
#endif
#define SOC_SCHARGER_OTG_REG3_otg_gm_START         (0)
#define SOC_SCHARGER_OTG_REG3_otg_gm_END           (2)
#define SOC_SCHARGER_OTG_REG3_otg_iav_t_set_START  (3)
#define SOC_SCHARGER_OTG_REG3_otg_iav_t_set_END    (4)
#define SOC_SCHARGER_OTG_REG3_reseved_START        (5)
#define SOC_SCHARGER_OTG_REG3_reseved_END          (5)
#define SOC_SCHARGER_OTG_REG3_otg_pfm_v_en_START   (7)
#define SOC_SCHARGER_OTG_REG3_otg_pfm_v_en_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_OTG_REG4_UNION
 �ṹ˵��  : OTG_REG4 �Ĵ����ṹ���塣��ַƫ����:0x41����ֵ:0x65�����:8
 �Ĵ���˵��: OTG_REG4���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otg_ccom2_cmp : 2;  /* bit[0-1]: boost EA����˲����ݣ���ֵ����ģ��
                                                        00: 0.8pF
                                                        01: 1.1pF
                                                        10: 1.4pF
                                                        11: 1.7pF */
        unsigned char  otg_ccom1_cmp : 2;  /* bit[2-3]: boost ����·�������ݣ���ֵ����ģ��
                                                        00: 35pF
                                                        01: 40pF
                                                        10: 45pF
                                                        11: 50pF */
        unsigned char  otg_rcom_cmp  : 2;  /* bit[4-5]: boost ����·�������裨��ֵ����ģ��
                                                        00: 320k��
                                                        01: 280k��
                                                        10: 240k��
                                                        11: 200k�� */
        unsigned char  otg_clp_l_set : 1;  /* bit[6]  : boost EA���ǯλֵ��VRAMPֱ����ƽֵ��ʧ��
                                                        0��27mv
                                                        1��40mv */
        unsigned char  reserved      : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SCHARGER_OTG_REG4_UNION;
#endif
#define SOC_SCHARGER_OTG_REG4_otg_ccom2_cmp_START  (0)
#define SOC_SCHARGER_OTG_REG4_otg_ccom2_cmp_END    (1)
#define SOC_SCHARGER_OTG_REG4_otg_ccom1_cmp_START  (2)
#define SOC_SCHARGER_OTG_REG4_otg_ccom1_cmp_END    (3)
#define SOC_SCHARGER_OTG_REG4_otg_rcom_cmp_START   (4)
#define SOC_SCHARGER_OTG_REG4_otg_rcom_cmp_END     (5)
#define SOC_SCHARGER_OTG_REG4_otg_clp_l_set_START  (6)
#define SOC_SCHARGER_OTG_REG4_otg_clp_l_set_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_OTG_REG5_UNION
 �ṹ˵��  : OTG_REG5 �Ĵ����ṹ���塣��ַƫ����:0x42����ֵ:0x28�����:8
 �Ĵ���˵��: OTG_REG5���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otg_ccom_iav  : 2;  /* bit[0-1]: boost ������·���ݲ���
                                                        00: 20p
                                                        01: 25p
                                                        10: 30p
                                                        11: 35p */
        unsigned char  otg_rcom2_iav : 2;  /* bit[2-3]: boost ������·���貹��
                                                        00: 620k��
                                                        01: 580k��
                                                        10: 440k��
                                                        11: 300k�� */
        unsigned char  otg_rcom1_iav : 2;  /* bit[4-5]: boost ������·���貹��
                                                        00: 1.2M��
                                                        01: 1.6M��
                                                        10: 2.0M��
                                                        11: 2.4M�� */
        unsigned char  reserved      : 2;  /* bit[6-7]: ���� */
    } reg;
} SOC_SCHARGER_OTG_REG5_UNION;
#endif
#define SOC_SCHARGER_OTG_REG5_otg_ccom_iav_START   (0)
#define SOC_SCHARGER_OTG_REG5_otg_ccom_iav_END     (1)
#define SOC_SCHARGER_OTG_REG5_otg_rcom2_iav_START  (2)
#define SOC_SCHARGER_OTG_REG5_otg_rcom2_iav_END    (3)
#define SOC_SCHARGER_OTG_REG5_otg_rcom1_iav_START  (4)
#define SOC_SCHARGER_OTG_REG5_otg_rcom1_iav_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_OTG_REG6_UNION
 �ṹ˵��  : OTG_REG6 �Ĵ����ṹ���塣��ַƫ����:0x43����ֵ:0x86�����:8
 �Ĵ���˵��: OTG_REG6���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otg_lmos_ocp  : 2;  /* bit[0-1]: boost �Ͷ�MOS������ֵ(A)
                                                        00: 1.5
                                                        01: 1.8
                                                        10: 2.5
                                                        11: 2.7 */
        unsigned char  otg_osc_ckmax : 2;  /* bit[2-3]: �����ŵ������uA��
                                                        00: 13
                                                        01: 14
                                                        10: 15 
                                                        11: 16  */
        unsigned char  otg_osc       : 4;  /* bit[4-7]: ����Ƶ�ʣ�MHz��
                                                        0000: 2.01
                                                        0001: 1.98
                                                        0010: 1.94
                                                        0011: 1.90
                                                        0100: 1.86
                                                        0101: 1.81
                                                        0110: 1.74
                                                        0111: 1.65
                                                        1000: 1.54
                                                        1001: 1.41
                                                        1010: 1.27
                                                        1011: 1.11
                                                        1100: 0.92
                                                        1101: 0.73
                                                        1110: 0.50
                                                        1111: 0.31 */
    } reg;
} SOC_SCHARGER_OTG_REG6_UNION;
#endif
#define SOC_SCHARGER_OTG_REG6_otg_lmos_ocp_START   (0)
#define SOC_SCHARGER_OTG_REG6_otg_lmos_ocp_END     (1)
#define SOC_SCHARGER_OTG_REG6_otg_osc_ckmax_START  (2)
#define SOC_SCHARGER_OTG_REG6_otg_osc_ckmax_END    (3)
#define SOC_SCHARGER_OTG_REG6_otg_osc_START        (4)
#define SOC_SCHARGER_OTG_REG6_otg_osc_END          (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_OTG_REG7_UNION
 �ṹ˵��  : OTG_REG7 �Ĵ����ṹ���塣��ַƫ����:0x44����ֵ:0xA9�����:8
 �Ĵ���˵��: OTG_REG7���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otg_dmd_ofs : 4;  /* bit[0-3]: boost DMDʧ����ѹ����
                                                      0000: 20mV (300mA)
                                                      0001: 16mV (240mA)
                                                      0010: 14mV (210mA)
                                                      0011: 12mV (180mA)
                                                      0100: 10mV (150mA)
                                                      0101: 8mV (120mA)
                                                      0110: 6mV (90mA)
                                                      0111: 4mV (60mA)
                                                      1000: 2mV (30mA)
                                                      1001:0
                                                      1010: -16mV (-180mA).
                                                      1011: -32mV (-360mA).
                                                      1100: -48mV (-540mA).
                                                      1101: -64mV (-720mA)..
                                                      1110: -128mV (-900mA).
                                                      1111: -256mV (-1080mA) */
        unsigned char  otg_rf      : 2;  /* bit[4-5]: ��е���ת��ѹ�迹
                                                      00: 0.5����ʵ��100k����
                                                      01: 0.4����ʵ��80k����
                                                      10: 0.3����ʵ��60k����
                                                      11: 0.2����ʵ��40k���� */
        unsigned char  otg_ckmin   : 2;  /* bit[6-7]: NMOS��С��ͨʱ��
                                                      00: 40ns
                                                      01: 30ns
                                                      10: 20ns
                                                      11: 15ns */
    } reg;
} SOC_SCHARGER_OTG_REG7_UNION;
#endif
#define SOC_SCHARGER_OTG_REG7_otg_dmd_ofs_START  (0)
#define SOC_SCHARGER_OTG_REG7_otg_dmd_ofs_END    (3)
#define SOC_SCHARGER_OTG_REG7_otg_rf_START       (4)
#define SOC_SCHARGER_OTG_REG7_otg_rf_END         (5)
#define SOC_SCHARGER_OTG_REG7_otg_ckmin_START    (6)
#define SOC_SCHARGER_OTG_REG7_otg_ckmin_END      (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_OTG_REG8_UNION
 �ṹ˵��  : OTG_REG8 �Ĵ����ṹ���塣��ַƫ����:0x45����ֵ:0x81�����:8
 �Ĵ���˵��: OTG_REG8���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otg_vo        : 2;  /* bit[0-1]: OTG�����ѹ΢��
                                                        00: 
                                                        01: 
                                                        10: 
                                                        11:  */
        unsigned char  otg_vbat_time : 2;  /* bit[2-3]: OTG������ص�ѹȥ��ʱ�䣨ms��
                                                        00: 16
                                                        01: 32
                                                        10: 64
                                                        11: 128 */
        unsigned char  otg_vbat      : 4;  /* bit[4-7]: OTG������ص�ѹ(V) 0000: 2.8
                                                        0001: 2.9
                                                        0010: 3.0
                                                        0011: 3.1
                                                        0100: 3.2
                                                        0101: 3.3
                                                        0110: 3.4
                                                        0111: 3.5
                                                        1000: 3.6
                                                        1001: 3.7
                                                        1010-1111: 3.8 */
    } reg;
} SOC_SCHARGER_OTG_REG8_UNION;
#endif
#define SOC_SCHARGER_OTG_REG8_otg_vo_START         (0)
#define SOC_SCHARGER_OTG_REG8_otg_vo_END           (1)
#define SOC_SCHARGER_OTG_REG8_otg_vbat_time_START  (2)
#define SOC_SCHARGER_OTG_REG8_otg_vbat_time_END    (3)
#define SOC_SCHARGER_OTG_REG8_otg_vbat_START       (4)
#define SOC_SCHARGER_OTG_REG8_otg_vbat_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_OTG_REG9_UNION
 �ṹ˵��  : OTG_REG9 �Ĵ����ṹ���塣��ַƫ����:0x46����ֵ:0x05�����:8
 �Ĵ���˵��: OTG_REG9���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otg_delay2 : 2;  /* bit[0-1]: OTG�ڲ���ʱ����
                                                     00: 
                                                     01: 
                                                     10: 
                                                     11:  */
        unsigned char  otg_delay1 : 2;  /* bit[2-3]: OTG�ڲ���ʱ����
                                                     00: 
                                                     01: 
                                                     10: 
                                                     11:  */
        unsigned char  reserved   : 4;  /* bit[4-7]: ���� */
    } reg;
} SOC_SCHARGER_OTG_REG9_UNION;
#endif
#define SOC_SCHARGER_OTG_REG9_otg_delay2_START  (0)
#define SOC_SCHARGER_OTG_REG9_otg_delay2_END    (1)
#define SOC_SCHARGER_OTG_REG9_otg_delay1_START  (2)
#define SOC_SCHARGER_OTG_REG9_otg_delay1_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_OTG_REG10_UNION
 �ṹ˵��  : OTG_REG10 �Ĵ����ṹ���塣��ַƫ����:0x47����ֵ:0x00�����:8
 �Ĵ���˵��: OTG_REG10���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otg_resved : 8;  /* bit[0-7]: Ԥ���Ĵ��� */
    } reg;
} SOC_SCHARGER_OTG_REG10_UNION;
#endif
#define SOC_SCHARGER_OTG_REG10_otg_resved_START  (0)
#define SOC_SCHARGER_OTG_REG10_otg_resved_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_CHG_REG0_UNION
 �ṹ˵��  : CHG_REG0 �Ĵ����ṹ���塣��ַƫ����:0x48����ֵ:0x14�����:8
 �Ĵ���˵��: CHG_REG0���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  chg_pre_vchg : 2;  /* bit[0-1]: Ԥ����ѹ��ֵ��С����λ
                                                       00: 2.8V
                                                       01: 3.0V
                                                       10: 3.1V
                                                       11: 3.2V */
        unsigned char  chg_pre_ichg : 2;  /* bit[2-3]: Ԥ��������С����λ
                                                       00: 100mA
                                                       01: 200mA
                                                       10: 300mA
                                                       11: 400mA */
        unsigned char  batfet_ctrl  : 1;  /* bit[4]  : ���ܿ��ƼĴ���
                                                       �üĴ��������ܵ�pwr_rst_n��λ��soft_rst_n��λ��en_bst_in��λ�⣬���ܵ�ģ���͸���������һ���ź�dc_rst_n��λ��
                                                       0���ر�batfet;
                                                       1����batfet; */
        unsigned char  reserved     : 3;  /* bit[5-7]: ������ */
    } reg;
} SOC_SCHARGER_CHG_REG0_UNION;
#endif
#define SOC_SCHARGER_CHG_REG0_chg_pre_vchg_START  (0)
#define SOC_SCHARGER_CHG_REG0_chg_pre_vchg_END    (1)
#define SOC_SCHARGER_CHG_REG0_chg_pre_ichg_START  (2)
#define SOC_SCHARGER_CHG_REG0_chg_pre_ichg_END    (3)
#define SOC_SCHARGER_CHG_REG0_batfet_ctrl_START   (4)
#define SOC_SCHARGER_CHG_REG0_batfet_ctrl_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_CHG_REG1_UNION
 �ṹ˵��  : CHG_REG1 �Ĵ����ṹ���塣��ַƫ����:0x49����ֵ:0x13�����:8
 �Ĵ���˵��: CHG_REG1���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  chg_fast_ichg : 5;  /* bit[0-4]: ���������С����λ
                                                        00000: 100mA
                                                        00001: 200mA
                                                        00010: 300mA
                                                        00011: 400mA
                                                        00100: 500mA
                                                        00101: 600mA
                                                        00110: 700mA
                                                        00111: 800mA
                                                        01000: 900mA
                                                        01001: 1000mA
                                                        01010: 1100mA
                                                        01011: 1200mA
                                                        01100: 1300mA
                                                        01101: 1400mA
                                                        01110: 1500mA
                                                        01111: 1600mA
                                                        10000: 1700mA
                                                        10001: 1800mA
                                                        10010: 1900mA
                                                        10011: 2000mA
                                                        10100: 2000mA
                                                         �� ��
                                                        11111: 2000mA */
        unsigned char  reserved      : 3;  /* bit[5-7]: ������ */
    } reg;
} SOC_SCHARGER_CHG_REG1_UNION;
#endif
#define SOC_SCHARGER_CHG_REG1_chg_fast_ichg_START  (0)
#define SOC_SCHARGER_CHG_REG1_chg_fast_ichg_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_CHG_REG2_UNION
 �ṹ˵��  : CHG_REG2 �Ĵ����ṹ���塣��ַƫ����:0x4A����ֵ:0x22�����:8
 �Ĵ���˵��: CHG_REG2���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  chg_term_ichg : 2;  /* bit[0-1]: ��ֹ��������ֵ����λ
                                                        00: 50mA
                                                        01: 100mA
                                                        10: 150mA
                                                        11: 200mA */
        unsigned char  chg_fast_vchg : 4;  /* bit[2-5]: ������ɵ�ѹ��ֵ��С����λ
                                                        0000: 3.8V
                                                        0001: 3.85V
                                                        0010: 3.9V
                                                        0011: 3.95V
                                                        0100: 4V
                                                        0101: 4.05V
                                                        0110: 4.1V
                                                        0111: 4.15V
                                                        1000��4.2
                                                        1001: 4.25
                                                        1010: 4.3
                                                        1011:4.35
                                                        1100:4.4
                                                        1101:4.45
                                                        1110:4.5
                                                        1111:4.55 */
        unsigned char  reserved      : 2;  /* bit[6-7]: ������ */
    } reg;
} SOC_SCHARGER_CHG_REG2_UNION;
#endif
#define SOC_SCHARGER_CHG_REG2_chg_term_ichg_START  (0)
#define SOC_SCHARGER_CHG_REG2_chg_term_ichg_END    (1)
#define SOC_SCHARGER_CHG_REG2_chg_fast_vchg_START  (2)
#define SOC_SCHARGER_CHG_REG2_chg_fast_vchg_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_CHG_REG3_UNION
 �ṹ˵��  : CHG_REG3 �Ĵ����ṹ���塣��ַƫ����:0x4B����ֵ:0x18�����:8
 �Ĵ���˵��: CHG_REG3���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  chg_prechg_timer : 2;  /* bit[0-1]: Ԥ����ʱ�������ӣ�
                                                           00: 30min
                                                           01: 45min
                                                           10: 60min
                                                           11: 75min */
        unsigned char  chg_rechg_time   : 2;  /* bit[2-3]: ���³��ģʽȥ��ʱ������λ
                                                           00: 0.1s
                                                           01: 1s
                                                           10: 2s
                                                           11: 4s */
        unsigned char  chg_vrechg_hys   : 3;  /* bit[4-6]: ���³����͵�ѹ����λ
                                                           000: 50mV
                                                           001: 100mV
                                                           010: 150mV
                                                           011: 200mV
                                                           100: 250mV
                                                           101: 300mV
                                                           110: 350mV
                                                           111: 400mV */
        unsigned char  reserved         : 1;  /* bit[7]  :  */
    } reg;
} SOC_SCHARGER_CHG_REG3_UNION;
#endif
#define SOC_SCHARGER_CHG_REG3_chg_prechg_timer_START  (0)
#define SOC_SCHARGER_CHG_REG3_chg_prechg_timer_END    (1)
#define SOC_SCHARGER_CHG_REG3_chg_rechg_time_START    (2)
#define SOC_SCHARGER_CHG_REG3_chg_rechg_time_END      (3)
#define SOC_SCHARGER_CHG_REG3_chg_vrechg_hys_START    (4)
#define SOC_SCHARGER_CHG_REG3_chg_vrechg_hys_END      (6)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_CHG_REG4_UNION
 �ṹ˵��  : CHG_REG4 �Ĵ����ṹ���塣��ַƫ����:0x4C����ֵ:0x47�����:8
 �Ĵ���˵��: CHG_REG4���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  chg_vbatir_adj         : 4;  /* bit[0-3]: IR�����ѹ����λ
                                                                 0000: 10mV
                                                                 0001: 20mV
                                                                 0010: 30mV
                                                                 0011: 40mV
                                                                 0100: 50mV
                                                                 0101: 60mV
                                                                 0110: 70mV
                                                                 0111: 80mV
                                                                 1000: 90mV
                                                                 1001: 100mV
                                                                 1010: 110mV
                                                                 1011: 120mV
                                                                 1100: 130mV
                                                                 1101: 140mV
                                                                 1110: 150mV
                                                                 1111: 160mV */
        unsigned char  chg_fastchg_safe_timer : 2;  /* bit[4-5]: ��䰲ȫ��ʱ����Сʱ��
                                                                 00: 5 h
                                                                 01: 8 h
                                                                 10: 12 h
                                                                 11: 20 h */
        unsigned char  chg_termination_ctrl   : 1;  /* bit[6]  : ��ֹ������λ
                                                                 0: Disabled
                                                                 1: Enabled */
        unsigned char  reserved               : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SCHARGER_CHG_REG4_UNION;
#endif
#define SOC_SCHARGER_CHG_REG4_chg_vbatir_adj_START          (0)
#define SOC_SCHARGER_CHG_REG4_chg_vbatir_adj_END            (3)
#define SOC_SCHARGER_CHG_REG4_chg_fastchg_safe_timer_START  (4)
#define SOC_SCHARGER_CHG_REG4_chg_fastchg_safe_timer_END    (5)
#define SOC_SCHARGER_CHG_REG4_chg_termination_ctrl_START    (6)
#define SOC_SCHARGER_CHG_REG4_chg_termination_ctrl_END      (6)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_CHG_REG5_UNION
 �ṹ˵��  : CHG_REG5 �Ĵ����ṹ���塣��ַƫ����:0x4D����ֵ:0x2A�����:8
 �Ĵ���˵��: CHG_REG5���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  chg_hot_hsys  : 2;  /* bit[0-1]: ��ع��ȼ��Ļ����¶ȵ���
                                                        00��1%
                                                        01��2%
                                                        10��3%
                                                        11��4% */
        unsigned char  chg_cold_hsys : 2;  /* bit[2-3]: ��ع�����Ļ����¶ȵ���
                                                        00��1%
                                                        01��2%
                                                        10��3%
                                                        11��4% */
        unsigned char  chg_smhys_adj : 3;  /* bit[4-6]: BATFET forward voltage����λ
                                                        000: 11.35mV
                                                        001: 22.7mV
                                                        010: 34.05mV
                                                        011: 45.4mV
                                                        100: 56.75mV
                                                        101: 68.1mV
                                                        110: 79.45mV
                                                        111: 90.8mV */
        unsigned char  reserved      : 1;  /* bit[7]  : ������ */
    } reg;
} SOC_SCHARGER_CHG_REG5_UNION;
#endif
#define SOC_SCHARGER_CHG_REG5_chg_hot_hsys_START   (0)
#define SOC_SCHARGER_CHG_REG5_chg_hot_hsys_END     (1)
#define SOC_SCHARGER_CHG_REG5_chg_cold_hsys_START  (2)
#define SOC_SCHARGER_CHG_REG5_chg_cold_hsys_END    (3)
#define SOC_SCHARGER_CHG_REG5_chg_smhys_adj_START  (4)
#define SOC_SCHARGER_CHG_REG5_chg_smhys_adj_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_CHG_REG6_UNION
 �ṹ˵��  : CHG_REG6 �Ĵ����ṹ���塣��ַƫ����:0x4E����ֵ:0x00�����:8
 �Ĵ���˵��: CHG_REG6���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  therm_state        : 1;  /* bit[0]  : ϵͳ�ȵ���״̬��¼�Ĵ���
                                                             0��Normal 
                                                             1��In Thermal Regulation */
        unsigned char  wled_ovp_ifb_state : 2;  /* bit[1-2]: ��Vifb>4.5V,�ϱ���ѹʱ�����Բ�ѯIFB1��IFB2��������һ·
                                                             ��ѹ��
                                                             00: ����
                                                             01: IFB1��ѹ 
                                                             10:IFB2��ѹ 
                                                             11����·����ѹ */
        unsigned char  buck_ok            : 1;  /* bit[3]  : ����buck�Ƿ�����
                                                             0:û������
                                                             1:���� */
        unsigned char  reserved           : 4;  /* bit[4-7]: ���� */
    } reg;
} SOC_SCHARGER_CHG_REG6_UNION;
#endif
#define SOC_SCHARGER_CHG_REG6_therm_state_START         (0)
#define SOC_SCHARGER_CHG_REG6_therm_state_END           (0)
#define SOC_SCHARGER_CHG_REG6_wled_ovp_ifb_state_START  (1)
#define SOC_SCHARGER_CHG_REG6_wled_ovp_ifb_state_END    (2)
#define SOC_SCHARGER_CHG_REG6_buck_ok_START             (3)
#define SOC_SCHARGER_CHG_REG6_buck_ok_END               (3)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_CHG_REG7_UNION
 �ṹ˵��  : CHG_REG7 �Ĵ����ṹ���塣��ַƫ����:0x4F����ֵ:0x03�����:8
 �Ĵ���˵��: CHG_REG7���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  chg_clk_ctl1 : 1;  /* bit[0]  : ����ʱ��ʹ��
                                                       0���ضϼ�ʱ��
                                                       1����ʱ������ */
        unsigned char  ts_ctrl      : 1;  /* bit[1]  : ���Ƶ���¶ȼ��ģ�飺
                                                       1������
                                                       0���ر� */
        unsigned char  reserved     : 6;  /* bit[2-7]: ���� */
    } reg;
} SOC_SCHARGER_CHG_REG7_UNION;
#endif
#define SOC_SCHARGER_CHG_REG7_chg_clk_ctl1_START  (0)
#define SOC_SCHARGER_CHG_REG7_chg_clk_ctl1_END    (0)
#define SOC_SCHARGER_CHG_REG7_ts_ctrl_START       (1)
#define SOC_SCHARGER_CHG_REG7_ts_ctrl_END         (1)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_CHG_REG8_UNION
 �ṹ˵��  : CHG_REG8 �Ĵ����ṹ���塣��ַƫ����:0x50����ֵ:0x00�����:8
 �Ĵ���˵��: CHG_REG8���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  chg_resvi1_2d : 8;  /* bit[0-7]: Ԥ���Ĵ��� */
    } reg;
} SOC_SCHARGER_CHG_REG8_UNION;
#endif
#define SOC_SCHARGER_CHG_REG8_chg_resvi1_2d_START  (0)
#define SOC_SCHARGER_CHG_REG8_chg_resvi1_2d_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_CHG_REG9_UNION
 �ṹ˵��  : CHG_REG9 �Ĵ����ṹ���塣��ַƫ����:0x51����ֵ:0x00�����:8
 �Ĵ���˵��: CHG_REG9���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  chg_resvi2_2d : 8;  /* bit[0-7]: Ԥ���Ĵ��� */
    } reg;
} SOC_SCHARGER_CHG_REG9_UNION;
#endif
#define SOC_SCHARGER_CHG_REG9_chg_resvi2_2d_START  (0)
#define SOC_SCHARGER_CHG_REG9_chg_resvi2_2d_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_CHG_REG10_UNION
 �ṹ˵��  : CHG_REG10 �Ĵ����ṹ���塣��ַƫ����:0x52����ֵ:0x00�����:8
 �Ĵ���˵��: CHG_REG10���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  chg_resvo1 : 8;  /* bit[0-7]: Ԥ���Ĵ���
                                                     chg_resvo1<0>Ϊϵͳ��ز���λ�����ƼĴ�������SOC��⵽��ز���λ��SOC��chg_resvo1<0>д��1��������Ϊ��0����
                                                     chg_resvo1<0>=��1����ز���λ��
                                                     chg_resvo1<0>=��0�������λ�� */
    } reg;
} SOC_SCHARGER_CHG_REG10_UNION;
#endif
#define SOC_SCHARGER_CHG_REG10_chg_resvo1_START  (0)
#define SOC_SCHARGER_CHG_REG10_chg_resvo1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_CHG_REG11_UNION
 �ṹ˵��  : CHG_REG11 �Ĵ����ṹ���塣��ַƫ����:0x53����ֵ:0x00�����:8
 �Ĵ���˵��: CHG_REG11���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  chg_resvo2 : 8;  /* bit[0-7]: Ԥ���Ĵ��� */
    } reg;
} SOC_SCHARGER_CHG_REG11_UNION;
#endif
#define SOC_SCHARGER_CHG_REG11_chg_resvo2_START  (0)
#define SOC_SCHARGER_CHG_REG11_chg_resvo2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_PSEL_REG0_UNION
 �ṹ˵��  : PSEL_REG0 �Ĵ����ṹ���塣��ַƫ����:0x54����ֵ:0x09�����:8
 �Ĵ���˵��: PSEL_REG0���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vbus_ovp_uptime : 2;  /* bit[0-1]: vbus��ѹ������ȥ��ʱ������λ
                                                          00: 0ms
                                                          01: 1ms
                                                          10: 2ms
                                                          11: 4ms */
        unsigned char  regn_lv_sel     : 2;  /* bit[2-3]: ��ѹREGN�����ѹѡ��λ
                                                          00:3.1V
                                                          01:3.2V
                                                          10:3.3V
                                                          11:3.4V */
        unsigned char  reserved        : 4;  /* bit[4-7]: ���� */
    } reg;
} SOC_SCHARGER_PSEL_REG0_UNION;
#endif
#define SOC_SCHARGER_PSEL_REG0_vbus_ovp_uptime_START  (0)
#define SOC_SCHARGER_PSEL_REG0_vbus_ovp_uptime_END    (1)
#define SOC_SCHARGER_PSEL_REG0_regn_lv_sel_START      (2)
#define SOC_SCHARGER_PSEL_REG0_regn_lv_sel_END        (3)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_BST_REG0_UNION
 �ṹ˵��  : FLASH_BST_REG0 �Ĵ����ṹ���塣��ַƫ����:0x55����ֵ:0x00�����:8
 �Ĵ���˵��: FLASH_BST_REG0���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  reserved_0       : 5;  /* bit[0-4]: �������������á� */
        unsigned char  flash_bst_pm_cut : 1;  /* bit[5]  : 1: PMOSǿ�йر�
                                                           0: PMOS�����˼Ĵ������� */
        unsigned char  flash_bst_pm_th  : 1;  /* bit[6]  : 1: PMOSǿ��ֱͨ�������ڲ���·�ر�
                                                           0: PMOS�����˼Ĵ������� */
        unsigned char  reserved_1       : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SCHARGER_FLASH_BST_REG0_UNION;
#endif
#define SOC_SCHARGER_FLASH_BST_REG0_flash_bst_pm_cut_START  (5)
#define SOC_SCHARGER_FLASH_BST_REG0_flash_bst_pm_cut_END    (5)
#define SOC_SCHARGER_FLASH_BST_REG0_flash_bst_pm_th_START   (6)
#define SOC_SCHARGER_FLASH_BST_REG0_flash_bst_pm_th_END     (6)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_BST_REG1_UNION
 �ṹ˵��  : FLASH_BST_REG1 �Ĵ����ṹ���塣��ַƫ����:0x56����ֵ:0x1E�����:8
 �Ĵ���˵��: FLASH_BST_REG1���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_bst_sel_scp : 1;  /* bit[0]  : 1: 2ms��VOUT����0.85BAT���ϱ���·
                                                            0: 1ms��VOUT����0.85BAT���ϱ���· */
        unsigned char  flash_bst_en_uvp  : 1;  /* bit[1]  : en_uvp 
                                                            1: ʹ��Ƿѹ��·
                                                            0: �رչ�ѹ��·�����ϱ��� */
        unsigned char  flash_bst_en_scp  : 1;  /* bit[2]  : 1: ʹ�ܶ�·ϵͳ�Զ��ر�
                                                            0: �رն�·ϵͳ�Զ��رգ����ϱ��� */
        unsigned char  flash_bst_en_ovp  : 1;  /* bit[3]  : 1: ʹ�ܹ�ѹ��·
                                                            0: �رչ�ѹ��·�����ϱ��� */
        unsigned char  flash_bst_en_ocp  : 1;  /* bit[4]  : 1: ʹ�ܹ�����·���ƣ������ϱ�
                                                            0: ʹ�ܹ�����·���ƣ����ϱ� */
        unsigned char  reserved_0        : 1;  /* bit[5]  : �������������á� */
        unsigned char  reserved_1        : 2;  /* bit[6-7]: ���� */
    } reg;
} SOC_SCHARGER_FLASH_BST_REG1_UNION;
#endif
#define SOC_SCHARGER_FLASH_BST_REG1_flash_bst_sel_scp_START  (0)
#define SOC_SCHARGER_FLASH_BST_REG1_flash_bst_sel_scp_END    (0)
#define SOC_SCHARGER_FLASH_BST_REG1_flash_bst_en_uvp_START   (1)
#define SOC_SCHARGER_FLASH_BST_REG1_flash_bst_en_uvp_END     (1)
#define SOC_SCHARGER_FLASH_BST_REG1_flash_bst_en_scp_START   (2)
#define SOC_SCHARGER_FLASH_BST_REG1_flash_bst_en_scp_END     (2)
#define SOC_SCHARGER_FLASH_BST_REG1_flash_bst_en_ovp_START   (3)
#define SOC_SCHARGER_FLASH_BST_REG1_flash_bst_en_ovp_END     (3)
#define SOC_SCHARGER_FLASH_BST_REG1_flash_bst_en_ocp_START   (4)
#define SOC_SCHARGER_FLASH_BST_REG1_flash_bst_en_ocp_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_BST_REG2_UNION
 �ṹ˵��  : FLASH_BST_REG2 �Ĵ����ṹ���塣��ַƫ����:0x57����ֵ:0x07�����:8
 �Ĵ���˵��: FLASH_BST_REG2���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_bst_en_dmd    : 1;  /* bit[0]  : 1: ʹ�ܹ�����
                                                              0: �رչ����� */
        unsigned char  flash_bst_en_slop   : 1;  /* bit[1]  : 1: ʹ��б�²���
                                                              0: �ر�б�²��� */
        unsigned char  flash_bst_en_clp_os : 1;  /* bit[2]  : 1: ʹ��ǯλ��·ʧ����ѹ
                                                              0: �ر�ǯλ��·ʧ����ѹ */
        unsigned char  flash_bst_en_nring  : 1;  /* bit[3]  : 1: ʹ�ܷ�����
                                                              0: �رն����� */
        unsigned char  flash_bst_en_pfm    : 1;  /* bit[4]  : 1: ʹ�������ѹ��ʽ��PFMģʽ
                                                              0: �ر������ѹ��ʽ��PFMģʽ */
        unsigned char  flash_bst_drv_mode  : 1;  /* bit[5]  : 1: ��ͳ�������ģʽ
                                                              0: ��С����ģʽ */
        unsigned char  reserved            : 2;  /* bit[6-7]: ���� */
    } reg;
} SOC_SCHARGER_FLASH_BST_REG2_UNION;
#endif
#define SOC_SCHARGER_FLASH_BST_REG2_flash_bst_en_dmd_START     (0)
#define SOC_SCHARGER_FLASH_BST_REG2_flash_bst_en_dmd_END       (0)
#define SOC_SCHARGER_FLASH_BST_REG2_flash_bst_en_slop_START    (1)
#define SOC_SCHARGER_FLASH_BST_REG2_flash_bst_en_slop_END      (1)
#define SOC_SCHARGER_FLASH_BST_REG2_flash_bst_en_clp_os_START  (2)
#define SOC_SCHARGER_FLASH_BST_REG2_flash_bst_en_clp_os_END    (2)
#define SOC_SCHARGER_FLASH_BST_REG2_flash_bst_en_nring_START   (3)
#define SOC_SCHARGER_FLASH_BST_REG2_flash_bst_en_nring_END     (3)
#define SOC_SCHARGER_FLASH_BST_REG2_flash_bst_en_pfm_START     (4)
#define SOC_SCHARGER_FLASH_BST_REG2_flash_bst_en_pfm_END       (4)
#define SOC_SCHARGER_FLASH_BST_REG2_flash_bst_drv_mode_START   (5)
#define SOC_SCHARGER_FLASH_BST_REG2_flash_bst_drv_mode_END     (5)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_BST_REG3_UNION
 �ṹ˵��  : FLASH_BST_REG3 �Ĵ����ṹ���塣��ַƫ����:0x58����ֵ:0x6B�����:8
 �Ĵ���˵��: FLASH_BST_REG3���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_bst_clp   : 3;  /* bit[0-2]: EA���ǯλֵ��VRAMPֱ����ƽֵ��ʧ��
                                                          000: 8mV
                                                          001: 12mV
                                                          010: 16mV
                                                          011: 20mV
                                                          100: 24mV
                                                          101: 28mV
                                                          110: 32mV
                                                          111: 36mV */
        unsigned char  flash_bst_itail : 1;  /* bit[3]  : EA�������̬��������
                                                          1:5.5uA
                                                          0:2.5uA */
        unsigned char  flash_bst_gm    : 3;  /* bit[4-6]: EA��gm�����趨(gm=2/R)��
                                                          000: 90k����
                                                          001: 80k����
                                                          010: 70k����
                                                          011: 60k����
                                                          100: 40k����
                                                          101: 30k����
                                                          110: 20k����
                                                          111: 10k���� */
        unsigned char  reserved        : 1;  /* bit[7]  : �������������á� */
    } reg;
} SOC_SCHARGER_FLASH_BST_REG3_UNION;
#endif
#define SOC_SCHARGER_FLASH_BST_REG3_flash_bst_clp_START    (0)
#define SOC_SCHARGER_FLASH_BST_REG3_flash_bst_clp_END      (2)
#define SOC_SCHARGER_FLASH_BST_REG3_flash_bst_itail_START  (3)
#define SOC_SCHARGER_FLASH_BST_REG3_flash_bst_itail_END    (3)
#define SOC_SCHARGER_FLASH_BST_REG3_flash_bst_gm_START     (4)
#define SOC_SCHARGER_FLASH_BST_REG3_flash_bst_gm_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_BST_REG4_UNION
 �ṹ˵��  : FLASH_BST_REG4 �Ĵ����ṹ���塣��ַƫ����:0x59����ֵ:0x28�����:8
 �Ĵ���˵��: FLASH_BST_REG4���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_bst_ccom2 : 2;  /* bit[0-1]: EA����˲����ݡ�
                                                          00: 0.65pF��
                                                          01: 1.3pF��
                                                          10: 1.95pF��
                                                          11: 3.9pF�� */
        unsigned char  flash_bst_ccom1 : 2;  /* bit[2-3]: ����·�������ݡ�
                                                          00: 20pF��
                                                          01: 40pF��
                                                          10: 60pF��
                                                          11: 80pF�� */
        unsigned char  flash_bst_rcom  : 3;  /* bit[4-6]: ����·��������
                                                          000: 520k��
                                                          001: 440k��
                                                          010: 360k��
                                                          011: 280k��
                                                          100:200k��
                                                          101:160k��
                                                          110:120k��
                                                          111:80k�� */
        unsigned char  reserved        : 1;  /* bit[7]  : �������������á� */
    } reg;
} SOC_SCHARGER_FLASH_BST_REG4_UNION;
#endif
#define SOC_SCHARGER_FLASH_BST_REG4_flash_bst_ccom2_START  (0)
#define SOC_SCHARGER_FLASH_BST_REG4_flash_bst_ccom2_END    (1)
#define SOC_SCHARGER_FLASH_BST_REG4_flash_bst_ccom1_START  (2)
#define SOC_SCHARGER_FLASH_BST_REG4_flash_bst_ccom1_END    (3)
#define SOC_SCHARGER_FLASH_BST_REG4_flash_bst_rcom_START   (4)
#define SOC_SCHARGER_FLASH_BST_REG4_flash_bst_rcom_END     (6)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_BST_REG5_UNION
 �ṹ˵��  : FLASH_BST_REG5 �Ĵ����ṹ���塣��ַƫ����:0x5A����ֵ:0x0A�����:8
 �Ĵ���˵��: FLASH_BST_REG5���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_bst_slop : 2;  /* bit[0-1]: б�²���б�ʵ��ڣ����ݵ��ڣ���
                                                         00: 1.2pF��
                                                         01: 1.6pF��
                                                         10: 2.4pF��
                                                         11: 5.1pF�� */
        unsigned char  flash_bst_ri   : 2;  /* bit[2-3]: ��е���ת��ѹ�迹
                                                         00: 0.75����ʵ��120k����
                                                         01: 0.625����ʵ��100k����
                                                         10: 0.5����ʵ��80k����
                                                         11: 0.375����ʵ��60k���� */
        unsigned char  reserved       : 4;  /* bit[4-7]: �������������á� */
    } reg;
} SOC_SCHARGER_FLASH_BST_REG5_UNION;
#endif
#define SOC_SCHARGER_FLASH_BST_REG5_flash_bst_slop_START  (0)
#define SOC_SCHARGER_FLASH_BST_REG5_flash_bst_slop_END    (1)
#define SOC_SCHARGER_FLASH_BST_REG5_flash_bst_ri_START    (2)
#define SOC_SCHARGER_FLASH_BST_REG5_flash_bst_ri_END      (3)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_BST_REG6_UNION
 �ṹ˵��  : FLASH_BST_REG6 �Ĵ����ṹ���塣��ַƫ����:0x5B����ֵ:0x55�����:8
 �Ĵ���˵��: FLASH_BST_REG6���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_bst_nsn : 2;  /* bit[0-1]: NMOSդ�ص�ѹ�½�б��
                                                        00: 67ns
                                                        01: 35ns
                                                        10: 25ns
                                                        11: 11ns */
        unsigned char  flash_bst_nsp : 2;  /* bit[2-3]: NMOSդ�ص�ѹ����б��
                                                        00: 50ns
                                                        01: 33ns
                                                        10: 23ns
                                                        11: 11ns */
        unsigned char  flash_bst_psn : 2;  /* bit[4-5]: PMOSդ�ص�ѹ�½�б��
                                                        00:10ns
                                                        01: 6ns
                                                        10: 4ns
                                                        11:3ns */
        unsigned char  flash_bst_psp : 2;  /* bit[6-7]: PMOSդ�ص�ѹ����б��
                                                        00: 10ns
                                                        01: 6ns
                                                        10: 4ns
                                                        11: 2ns */
    } reg;
} SOC_SCHARGER_FLASH_BST_REG6_UNION;
#endif
#define SOC_SCHARGER_FLASH_BST_REG6_flash_bst_nsn_START  (0)
#define SOC_SCHARGER_FLASH_BST_REG6_flash_bst_nsn_END    (1)
#define SOC_SCHARGER_FLASH_BST_REG6_flash_bst_nsp_START  (2)
#define SOC_SCHARGER_FLASH_BST_REG6_flash_bst_nsp_END    (3)
#define SOC_SCHARGER_FLASH_BST_REG6_flash_bst_psn_START  (4)
#define SOC_SCHARGER_FLASH_BST_REG6_flash_bst_psn_END    (5)
#define SOC_SCHARGER_FLASH_BST_REG6_flash_bst_psp_START  (6)
#define SOC_SCHARGER_FLASH_BST_REG6_flash_bst_psp_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_BST_REG7_UNION
 �ṹ˵��  : FLASH_BST_REG7 �Ĵ����ṹ���塣��ַƫ����:0x5C����ֵ:0x10�����:8
 �Ĵ���˵��: FLASH_BST_REG7���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_bst_dt_nm : 2;  /* bit[0-1]: NMOS�رպ���PMOS����ʱ
                                                          00: 0
                                                          01: 2ns
                                                          10: 4ns
                                                          11: 6ns */
        unsigned char  flash_bst_dt_pm : 2;  /* bit[2-3]: PMOS�رպ���NMOS����ʱ
                                                          00: 0
                                                          01: 2ns
                                                          10: 4ns
                                                          11: 6ns */
        unsigned char  flash_bst_lxde  : 2;  /* bit[4-5]: �ж�����PMOS��LX�жϵ�·�����Ĵ���
                                                          LXDE<1>������
                                                          LXDE<0>
                                                          1������DMD�ض��߼�
                                                          0���ر�DMD�ض��߼�����DMD֮����©�磩 */
        unsigned char  reserved        : 2;  /* bit[6-7]: �������������á� */
    } reg;
} SOC_SCHARGER_FLASH_BST_REG7_UNION;
#endif
#define SOC_SCHARGER_FLASH_BST_REG7_flash_bst_dt_nm_START  (0)
#define SOC_SCHARGER_FLASH_BST_REG7_flash_bst_dt_nm_END    (1)
#define SOC_SCHARGER_FLASH_BST_REG7_flash_bst_dt_pm_START  (2)
#define SOC_SCHARGER_FLASH_BST_REG7_flash_bst_dt_pm_END    (3)
#define SOC_SCHARGER_FLASH_BST_REG7_flash_bst_lxde_START   (4)
#define SOC_SCHARGER_FLASH_BST_REG7_flash_bst_lxde_END     (5)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_BST_REG8_UNION
 �ṹ˵��  : FLASH_BST_REG8 �Ĵ����ṹ���塣��ַƫ����:0x5D����ֵ:0x16�����:8
 �Ĵ���˵��: FLASH_BST_REG8���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_bst_ckmin : 2;  /* bit[0-1]: NMOS��С��ͨʱ��
                                                          00: 160ns
                                                          01: 120ns
                                                          10: 80ns
                                                          11: 40ns */
        unsigned char  flash_bst_osc   : 4;  /* bit[2-5]: ����Ƶ�ʣ�MHz��
                                                          0000: 2.991
                                                          0001: 2.852
                                                          0010: 2.712
                                                          0011: 2.568
                                                          0100: 2.423
                                                          0101: 2.274
                                                          0110: 2.122
                                                          0111: 1.968
                                                          1000: 1.813
                                                          1001: 1.654
                                                          1010: 1.492
                                                          1011: 1.325
                                                          1100: 1.155
                                                          1101: 0.981
                                                          1110: 0.802
                                                          1111: 0.617 */
        unsigned char  reserved        : 2;  /* bit[6-7]: �������������á� */
    } reg;
} SOC_SCHARGER_FLASH_BST_REG8_UNION;
#endif
#define SOC_SCHARGER_FLASH_BST_REG8_flash_bst_ckmin_START  (0)
#define SOC_SCHARGER_FLASH_BST_REG8_flash_bst_ckmin_END    (1)
#define SOC_SCHARGER_FLASH_BST_REG8_flash_bst_osc_START    (2)
#define SOC_SCHARGER_FLASH_BST_REG8_flash_bst_osc_END      (5)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_BST_REG9_UNION
 �ṹ˵��  : FLASH_BST_REG9 �Ĵ����ṹ���塣��ַƫ����:0x5E����ֵ:0x0D�����:8
 �Ĵ���˵��: FLASH_BST_REG9���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_bst_sel_ocp : 2;  /* bit[0-1]: NMOS����ֵ��
                                                            00: 3.4A��
                                                            01: 4.4A��
                                                            10: 5.4A��
                                                            11: 6.4A�� */
        unsigned char  flash_bst_start   : 3;  /* bit[2-4]: PMOSֱͨʱդ�������ƣ�Ӱ������ʱ��Ͷ�·��������
                                                            000: 0.5uA��
                                                            001: 0.75uA��
                                                            010: 1uA��
                                                            011: 1.25uA��
                                                            100: 1.5uA��
                                                            101: 1.75uA��
                                                            110: 2uA��
                                                            111: 2.5uA�� */
        unsigned char  reserved          : 3;  /* bit[5-7]: �������������á� */
    } reg;
} SOC_SCHARGER_FLASH_BST_REG9_UNION;
#endif
#define SOC_SCHARGER_FLASH_BST_REG9_flash_bst_sel_ocp_START  (0)
#define SOC_SCHARGER_FLASH_BST_REG9_flash_bst_sel_ocp_END    (1)
#define SOC_SCHARGER_FLASH_BST_REG9_flash_bst_start_START    (2)
#define SOC_SCHARGER_FLASH_BST_REG9_flash_bst_start_END      (4)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_BST_REG10_UNION
 �ṹ˵��  : FLASH_BST_REG10 �Ĵ����ṹ���塣��ַƫ����:0x5F����ֵ:0x05�����:8
 �Ĵ���˵��: FLASH_BST_REG10���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_bst_vo       : 5;  /* bit[0-4]: �����ѹ
                                                             00000: 5.5V
                                                             00001: 5.4V
                                                             00010: 5.3V
                                                             00011: 5.2V
                                                             00100: 5.1V
                                                             00101��5V
                                                             00110��4.9V
                                                             00111��4.8V
                                                             01000��4.7V
                                                             01001��4.6V
                                                             01010��4.5V
                                                             01011��4.4V
                                                             01100��4.3V
                                                             01101��4.2V
                                                             01110��4.1V
                                                             01111��4.0V
                                                             10000��3.9V
                                                             10001��3.8V
                                                             10010��3.7V
                                                             10011��3.6V
                                                             10100��3.5V
                                                             10101��3.4V
                                                             10110��3.3V
                                                             10111��3.2V
                                                             ʣ����벻ʹ�ã����������ã��򱣳ֵ�ǰ��ѹ��λ */
        unsigned char  flash_bst_dmd_isel : 1;  /* bit[5]  : DMDƫ�õ���ѡ��0��2uA�̶�������1��(vout-vin)/r�������� */
        unsigned char  reserved           : 2;  /* bit[6-7]: �������������� */
    } reg;
} SOC_SCHARGER_FLASH_BST_REG10_UNION;
#endif
#define SOC_SCHARGER_FLASH_BST_REG10_flash_bst_vo_START        (0)
#define SOC_SCHARGER_FLASH_BST_REG10_flash_bst_vo_END          (4)
#define SOC_SCHARGER_FLASH_BST_REG10_flash_bst_dmd_isel_START  (5)
#define SOC_SCHARGER_FLASH_BST_REG10_flash_bst_dmd_isel_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_BST_REG11_UNION
 �ṹ˵��  : FLASH_BST_REG11 �Ĵ����ṹ���塣��ַƫ����:0x60����ֵ:0x09�����:8
 �Ĵ���˵��: FLASH_BST_REG11���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_bst_dmd_ofs : 4;  /* bit[0-3]: DMDʧ��
                                                            0000: 20mV (300mA)
                                                            0001: 16mV (240mA)
                                                            0010: 14mV (210mA)
                                                            0011: 12mV (180mA)
                                                            0100: 10mV (150mA)
                                                            0101: 8mV (120mA)
                                                            0110: 6mV (90mA)
                                                            0111: 4mV (60mA)
                                                            1000: 2mV (30mA)
                                                            1001:0
                                                            1010: -16mV (-180mA).
                                                            1011: -32mV (-360mA).
                                                            1100: -48mV (-540mA).
                                                            1101: -64mV (-720mA)..
                                                            1110: -128mV (-900mA).
                                                            1111: -256mV (-1080mA). */
        unsigned char  reserved          : 4;  /* bit[4-7]: ���� */
    } reg;
} SOC_SCHARGER_FLASH_BST_REG11_UNION;
#endif
#define SOC_SCHARGER_FLASH_BST_REG11_flash_bst_dmd_ofs_START  (0)
#define SOC_SCHARGER_FLASH_BST_REG11_flash_bst_dmd_ofs_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_LED_REG0_UNION
 �ṹ˵��  : FLASH_LED_REG0 �Ĵ����ṹ���塣��ַƫ����:0x61����ֵ:0x00�����:8
 �Ĵ���˵��: FLASH_LED_REG0���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_led_trimstep_sel  : 2;  /* bit[0-1]: led����trim������λѡ��
                                                                  00:0.5mV/step��default��
                                                                  01/10:1mV/step
                                                                  11:2mV/step */
        unsigned char  flash_led_ledfault_vsel : 2;  /* bit[2-3]: led open����ѹ��λѡ��
                                                                  00:3.8V��default��
                                                                  01:3.7V
                                                                  10:3.6V
                                                                  11:3.5V */
        unsigned char  flash_led_ledfault_en   : 1;  /* bit[4]  : led open/short����ʹ�ܿ��ƣ�0������LED����·��⡣1���ر�LED����·��⡣ */
        unsigned char  reserved                : 3;  /* bit[5-7]: ���� */
    } reg;
} SOC_SCHARGER_FLASH_LED_REG0_UNION;
#endif
#define SOC_SCHARGER_FLASH_LED_REG0_flash_led_trimstep_sel_START   (0)
#define SOC_SCHARGER_FLASH_LED_REG0_flash_led_trimstep_sel_END     (1)
#define SOC_SCHARGER_FLASH_LED_REG0_flash_led_ledfault_vsel_START  (2)
#define SOC_SCHARGER_FLASH_LED_REG0_flash_led_ledfault_vsel_END    (3)
#define SOC_SCHARGER_FLASH_LED_REG0_flash_led_ledfault_en_START    (4)
#define SOC_SCHARGER_FLASH_LED_REG0_flash_led_ledfault_en_END      (4)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_LED_REG1_UNION
 �ṹ˵��  : FLASH_LED_REG1 �Ĵ����ṹ���塣��ַƫ����:0x62����ֵ:0x38�����:8
 �Ĵ���˵��: FLASH_LED_REG1���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_led_vbatdroop : 3;  /* bit[0-2]: ���õ�ص�ѹdroop��⵵λ
                                                              000 3.5
                                                              001 3.4
                                                              010 3.3
                                                              011 3.2
                                                              100 3.1
                                                              101 3.0
                                                              110 2.9
                                                              111 2.8 */
        unsigned char  flash_led_vbattorch : 4;  /* bit[3-6]: �趨vbat_torch�ż�ֵ��ѹ����3.2V~4.2V�ɵ�
                                                              0000 4.2
                                                              0001 4.1
                                                              0010 4.0
                                                              0011 3.9
                                                              0100 3.8
                                                              0101 3.7
                                                              0110 3.6
                                                              0111 3.5
                                                              1000 3.4
                                                              1001 3.3
                                                              1010 3.2
                                                              ���±��벻ʹ�ã����������ã����ѹ��λ���ֵ�ǰ��λ���䡣 */
        unsigned char  reserved            : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SCHARGER_FLASH_LED_REG1_UNION;
#endif
#define SOC_SCHARGER_FLASH_LED_REG1_flash_led_vbatdroop_START  (0)
#define SOC_SCHARGER_FLASH_LED_REG1_flash_led_vbatdroop_END    (2)
#define SOC_SCHARGER_FLASH_LED_REG1_flash_led_vbattorch_START  (3)
#define SOC_SCHARGER_FLASH_LED_REG1_flash_led_vbattorch_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_SYS_REG_UNION
 �ṹ˵��  : SYS_REG �Ĵ����ṹ���塣��ַƫ����:0x63����ֵ:0x00�����:8
 �Ĵ���˵��: SYS���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  sys_resv : 8;  /* bit[0-7]: �Ĵ���Ԥ�� */
    } reg;
} SOC_SCHARGER_SYS_REG_UNION;
#endif
#define SOC_SCHARGER_SYS_REG_sys_resv_START  (0)
#define SOC_SCHARGER_SYS_REG_sys_resv_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_LED_REG2_UNION
 �ṹ˵��  : FLASH_LED_REG2 �Ĵ����ṹ���塣��ַƫ����:0x64����ֵ:0x04�����:8
 �Ĵ���˵��: FLASH_LED_REG2���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_led_tbatdroop : 4;  /* bit[0-3]: ����batdroop�˲�ʱ�䵵λ
                                                              0000:2.5us
                                                              0001:5us
                                                              0010:10us
                                                              0011:20us
                                                              0100:40us
                                                              0101:80us
                                                              0110:160us
                                                              0111:320us
                                                              1000:640us
                                                              1001:800us
                                                              1010:1ms
                                                              1011:2ms
                                                              1100:4ms
                                                              1101:10ms
                                                              1110:20ms
                                                              1111:40ms */
        unsigned char  flash_led_tfault    : 3;  /* bit[4-6]: �趨flash_led open/short����˲�ʱ��
                                                              000:90us
                                                              001:360us
                                                              010:1ms
                                                              011:2ms
                                                              100:4ms
                                                              101:10ms
                                                              110:20ms
                                                              111:40ms */
        unsigned char  reserved            : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SCHARGER_FLASH_LED_REG2_UNION;
#endif
#define SOC_SCHARGER_FLASH_LED_REG2_flash_led_tbatdroop_START  (0)
#define SOC_SCHARGER_FLASH_LED_REG2_flash_led_tbatdroop_END    (3)
#define SOC_SCHARGER_FLASH_LED_REG2_flash_led_tfault_START     (4)
#define SOC_SCHARGER_FLASH_LED_REG2_flash_led_tfault_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_LED_REG3_UNION
 �ṹ˵��  : FLASH_LED_REG3 �Ĵ����ṹ���塣��ַƫ����:0x65����ֵ:0x27�����:8
 �Ĵ���˵��: FLASH_LED_REG3���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_led_tf             : 3;  /* bit[0-2]: ����ramp down��λ����ʱ��
                                                                   000:10us 
                                                                   001:8us
                                                                   010:6us
                                                                   011:4us
                                                                   100:2us
                                                                   101:1.5us
                                                                   110:1us
                                                                   111:0.5us */
        unsigned char  flash_led_tr             : 3;  /* bit[3-5]: ����ramp up��λ����ʱ��
                                                                   000:80us 
                                                                   001:50us
                                                                   010:40us
                                                                   011:20us
                                                                   100:10us
                                                                   101:5us
                                                                   110:2.5us
                                                                   111:1.5us */
        unsigned char  flash_led_mask_mask      : 1;  /* bit[6]  : 1�������ⲿӲ��TX_MASK�źţ�
                                                                   0���������ⲿӲ��TX_MASK�ź�  */
        unsigned char  flash_led_mask_once_down : 1;  /* bit[7]  : 1������vbatdrooph��TX_MASKʱ�����������½���Ŀ��ֵ��
                                                                   0������vbatdrooph��TX_MASKʱ��������ramp downģʽ�½���Ŀ��ֵ */
    } reg;
} SOC_SCHARGER_FLASH_LED_REG3_UNION;
#endif
#define SOC_SCHARGER_FLASH_LED_REG3_flash_led_tf_START              (0)
#define SOC_SCHARGER_FLASH_LED_REG3_flash_led_tf_END                (2)
#define SOC_SCHARGER_FLASH_LED_REG3_flash_led_tr_START              (3)
#define SOC_SCHARGER_FLASH_LED_REG3_flash_led_tr_END                (5)
#define SOC_SCHARGER_FLASH_LED_REG3_flash_led_mask_mask_START       (6)
#define SOC_SCHARGER_FLASH_LED_REG3_flash_led_mask_mask_END         (6)
#define SOC_SCHARGER_FLASH_LED_REG3_flash_led_mask_once_down_START  (7)
#define SOC_SCHARGER_FLASH_LED_REG3_flash_led_mask_once_down_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_LED_REG4_UNION
 �ṹ˵��  : FLASH_LED_REG4 �Ĵ����ṹ���塣��ַƫ����:0x66����ֵ:0x3D�����:8
 �Ĵ���˵��: FLASH_LED_REG4���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_led_itorch_set : 3;  /* bit[0-2]: ����torch mode������λ
                                                               000:50mA
                                                               001:100mA
                                                               010:150mA
                                                               011:200mA
                                                               100��250mA
                                                               101��300mA
                                                               110:350mA
                                                               111:400mA */
        unsigned char  flash_led_iflash_set : 4;  /* bit[3-6]: ����flash mode������λ
                                                               0000:125mA
                                                               0001:250mA
                                                               0010:375mA
                                                               0011:500mA
                                                               0100:625mA
                                                               0101:750mA
                                                               0110:875mA
                                                               0111:1000mA
                                                               1000:1125mA
                                                               1001:1250mA
                                                               1010:1375mA
                                                               1011:1500mA
                                                               1100~1111:1500mA */
        unsigned char  reserved             : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SCHARGER_FLASH_LED_REG4_UNION;
#endif
#define SOC_SCHARGER_FLASH_LED_REG4_flash_led_itorch_set_START  (0)
#define SOC_SCHARGER_FLASH_LED_REG4_flash_led_itorch_set_END    (2)
#define SOC_SCHARGER_FLASH_LED_REG4_flash_led_iflash_set_START  (3)
#define SOC_SCHARGER_FLASH_LED_REG4_flash_led_iflash_set_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_LED_REG5_UNION
 �ṹ˵��  : FLASH_LED_REG5 �Ĵ����ṹ���塣��ַƫ����:0x67����ֵ:0x03�����:8
 �Ĵ���˵��: FLASH_LED_REG5���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_led_isafe_set : 3;  /* bit[0-2]: ���ð�ȫ������λ
                                                              000:50mA
                                                              001:100mA
                                                              010:150mA
                                                              011:200mA
                                                              100:250mA
                                                              101:300mA
                                                              110:350mA
                                                              111:400mA */
        unsigned char  reserved            : 5;  /* bit[3-7]: ���� */
    } reg;
} SOC_SCHARGER_FLASH_LED_REG5_UNION;
#endif
#define SOC_SCHARGER_FLASH_LED_REG5_flash_led_isafe_set_START  (0)
#define SOC_SCHARGER_FLASH_LED_REG5_flash_led_isafe_set_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_LED_REG6_UNION
 �ṹ˵��  : FLASH_LED_REG6 �Ĵ����ṹ���塣��ַƫ����:0x68����ֵ:0x40�����:8
 �Ĵ���˵��: FLASH_LED_REG6���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_led_watchdog_timer : 4;  /* bit[0-3]: torchģʽ����ʱ������
                                                                   0000:flash_led_watchdog_timer���ܹر�
                                                                   0001:2s
                                                                   0010:4s
                                                                   0011:6s
                                                                   ��
                                                                   1111:30s
                                                                   ÿ��stepΪ2s */
        unsigned char  flash_led_timeout        : 2;  /* bit[4-5]: flashģʽ����ʱ������
                                                                   00:400ms
                                                                   01:600ms
                                                                   10:800ms
                                                                   11:1000ms */
        unsigned char  flash_led_tpwrsel        : 2;  /* bit[6-7]: �趨�����ڲ��ź�pwrsel_pre˫���˲�ʱ��
                                                                   00:4ms
                                                                   01:10ms
                                                                   10:20ms
                                                                   11:40ms */
    } reg;
} SOC_SCHARGER_FLASH_LED_REG6_UNION;
#endif
#define SOC_SCHARGER_FLASH_LED_REG6_flash_led_watchdog_timer_START  (0)
#define SOC_SCHARGER_FLASH_LED_REG6_flash_led_watchdog_timer_END    (3)
#define SOC_SCHARGER_FLASH_LED_REG6_flash_led_timeout_START         (4)
#define SOC_SCHARGER_FLASH_LED_REG6_flash_led_timeout_END           (5)
#define SOC_SCHARGER_FLASH_LED_REG6_flash_led_tpwrsel_START         (6)
#define SOC_SCHARGER_FLASH_LED_REG6_flash_led_tpwrsel_END           (7)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_FLASH_LED_REG7_UNION
 �ṹ˵��  : FLASH_LED_REG7 �Ĵ����ṹ���塣��ַƫ����:0x69����ֵ:0x0E�����:8
 �Ĵ���˵��: FLASH_LED_REG7���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_led_timeout_en     : 1;  /* bit[0]  : Flash_led����ʱ�����ù���ʹ��
                                                                   0���ر�timeout
                                                                   1������timeout */
        unsigned char  flash_led_open_autostop  : 1;  /* bit[1]  : 1��������flash_led_open_r�ź�
                                                                   0������flash_led_open_r�ź� */
        unsigned char  flash_led_short_autostop : 1;  /* bit[2]  : 1��������flash_led_short_r�ź�
                                                                   0������flash_led_short_r�ź� */
        unsigned char  flash_strobe_mask        : 1;  /* bit[3]  : 1���������ⲿӲ��STROBE�ź�
                                                                   0�������ⲿӲ��STROBE�ź� */
        unsigned char  reserved                 : 4;  /* bit[4-7]: ���� */
    } reg;
} SOC_SCHARGER_FLASH_LED_REG7_UNION;
#endif
#define SOC_SCHARGER_FLASH_LED_REG7_flash_led_timeout_en_START      (0)
#define SOC_SCHARGER_FLASH_LED_REG7_flash_led_timeout_en_END        (0)
#define SOC_SCHARGER_FLASH_LED_REG7_flash_led_open_autostop_START   (1)
#define SOC_SCHARGER_FLASH_LED_REG7_flash_led_open_autostop_END     (1)
#define SOC_SCHARGER_FLASH_LED_REG7_flash_led_short_autostop_START  (2)
#define SOC_SCHARGER_FLASH_LED_REG7_flash_led_short_autostop_END    (2)
#define SOC_SCHARGER_FLASH_LED_REG7_flash_strobe_mask_START         (3)
#define SOC_SCHARGER_FLASH_LED_REG7_flash_strobe_mask_END           (3)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_CTRL_REG_UNION
 �ṹ˵��  : CTRL_REG �Ĵ����ṹ���塣��ַƫ����:0x6A����ֵ:0x00�����:8
 �Ĵ���˵��: CTRL_REG���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  soft_rst_n       : 1;  /* bit[0]  : ���ƶ����мĴ����ĸ�λ(д1���Զ�����)
                                                           0������
                                                           1�����мĴ�����λ */
        unsigned char  wd_rst_n         : 1;  /* bit[1]  : д1�üĴ�����ϵͳwatchdog timer�������¼�ʱ(д1���Զ�����)
                                                           ���SoC������ʱ���ڲ��ԸüĴ���д��1����������λchg_en_int��watchdog_timer�Ĵ��� */
        unsigned char  flash_led_wd_rst : 1;  /* bit[2]  : torch watchdog timer��ʱ��0ʹ���ź�(д1���Զ�����)
                                                           0��normal��ʱ
                                                           1��torch watchdog timer ��ʱ���� */
        unsigned char  reserved         : 5;  /* bit[3-7]: ���� */
    } reg;
} SOC_SCHARGER_CTRL_REG_UNION;
#endif
#define SOC_SCHARGER_CTRL_REG_soft_rst_n_START        (0)
#define SOC_SCHARGER_CTRL_REG_soft_rst_n_END          (0)
#define SOC_SCHARGER_CTRL_REG_wd_rst_n_START          (1)
#define SOC_SCHARGER_CTRL_REG_wd_rst_n_END            (1)
#define SOC_SCHARGER_CTRL_REG_flash_led_wd_rst_START  (2)
#define SOC_SCHARGER_CTRL_REG_flash_led_wd_rst_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_SCHARGER_SYS_SET_REG_UNION
 �ṹ˵��  : SYS_SET_REG �Ĵ����ṹ���塣��ַƫ����:0x6B����ֵ:0x00�����:8
 �Ĵ���˵��: SYS_SET_REG���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  watchdog_timer : 2;  /* bit[0-1]: SOCÿ��һ��ʱ���V200����һ�μĴ���д���������û��д�����¼������������Defaultģʽ����λchg_en_int��watchdog_timer�Ĵ�����������������Hostģʽ��
                                                         ϵͳwatchdog_timerʱ�����ã�
                                                         00��ϵͳwatchdog_timer��������
                                                         01��10s
                                                         10:20s
                                                         11:40s  */
        unsigned char  reserved       : 6;  /* bit[2-7]: ���� */
    } reg;
} SOC_SCHARGER_SYS_SET_REG_UNION;
#endif
#define SOC_SCHARGER_SYS_SET_REG_watchdog_timer_START  (0)
#define SOC_SCHARGER_SYS_SET_REG_watchdog_timer_END    (1)






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

#endif /* end of soc_scharger_interface.h */
