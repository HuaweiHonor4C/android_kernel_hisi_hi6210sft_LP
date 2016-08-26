

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_SMART_INTERFACE_H__
#define __SOC_SMART_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/2) PMU_CTRL
 ****************************************************************************/
/* �Ĵ���˵�����汾�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_VERSION_UNION */
#define SOC_SMART_VERSION_ADDR(base)                  ((base) + (0x000))

/* �Ĵ���˵����״̬��־1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_STATUS1_UNION */
#define SOC_SMART_STATUS1_ADDR(base)                  ((base) + (0x001))

/* �Ĵ���˵����״̬��־2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_STATUS2_UNION */
#define SOC_SMART_STATUS2_ADDR(base)                  ((base) + (0x002))

/* �Ĵ���˵�����ж�1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_IRQ1_UNION */
#define SOC_SMART_IRQ1_ADDR(base)                     ((base) + (0x003))

/* �Ĵ���˵�����ж�2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_IRQ2_UNION */
#define SOC_SMART_IRQ2_ADDR(base)                     ((base) + (0x004))

/* �Ĵ���˵�����ж�3�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_IRQ3_UNION */
#define SOC_SMART_IRQ3_ADDR(base)                     ((base) + (0x005))

/* �Ĵ���˵�������ؼ��жϼĴ�����
   λ����UNION�ṹ:  SOC_SMART_COUL_IRQ_UNION */
#define SOC_SMART_COUL_IRQ_ADDR(base)                 ((base) + (0x006))

/* �Ĵ���˵�����ж�����1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_IRQ1_MASK_UNION */
#define SOC_SMART_IRQ1_MASK_ADDR(base)                ((base) + (0x007))

/* �Ĵ���˵�����ж�����2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_IRQ2_MASK_UNION */
#define SOC_SMART_IRQ2_MASK_ADDR(base)                ((base) + (0x008))

/* �Ĵ���˵�����ж�����3�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_IRQ3_MASK_UNION */
#define SOC_SMART_IRQ3_MASK_ADDR(base)                ((base) + (0x009))

/* �Ĵ���˵�������ؼ��ж����μĴ�����
   λ����UNION�ṹ:  SOC_SMART_COUL_IRQ_MASK_UNION */
#define SOC_SMART_COUL_IRQ_MASK_ADDR(base)            ((base) + (0x00A))

/* �Ĵ���˵������·������¼1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_SCP_BUCK_RECORD1_UNION */
#define SOC_SMART_SCP_BUCK_RECORD1_ADDR(base)         ((base) + (0x00B))

/* �Ĵ���˵��������������¼1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OCP_BUCK_RECORD1_UNION */
#define SOC_SMART_OCP_BUCK_RECORD1_ADDR(base)         ((base) + (0x00C))

/* �Ĵ���˵��������������¼2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OCP_LDO1_8_RECORD2_UNION */
#define SOC_SMART_OCP_LDO1_8_RECORD2_ADDR(base)       ((base) + (0x00D))

/* �Ĵ���˵��������������¼3�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OCP_LDO16_9_RECORD3_UNION */
#define SOC_SMART_OCP_LDO16_9_RECORD3_ADDR(base)      ((base) + (0x00E))

/* �Ĵ���˵��������������¼4�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OCP_LDO22_17_RECORD4_UNION */
#define SOC_SMART_OCP_LDO22_17_RECORD4_ADDR(base)     ((base) + (0x00F))

/* �Ĵ���˵��������������¼5�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OCP_CLASSD_LVS2_RECORD5_UNION */
#define SOC_SMART_OCP_CLASSD_LVS2_RECORD5_ADDR(base)  ((base) + (0x010))

/* �Ĵ���˵����OCPȥ��������0�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OCP_DEB0_UNION */
#define SOC_SMART_OCP_DEB0_ADDR(base)                 ((base) + (0x01A))

/* �Ĵ���˵����OCPȥ��������1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OCP_DEB1_UNION */
#define SOC_SMART_OCP_DEB1_ADDR(base)                 ((base) + (0x01B))

/* �Ĵ���˵�������ؿ���8�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ONOFF8_UNION */
#define SOC_SMART_ONOFF8_ADDR(base)                   ((base) + (0x01C))

/* �Ĵ���˵����BUCK1-4�����Ͷ�·����ģʽ���ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_OCP_SCP_MOD_CTRL1_UNION */
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ADDR(base)        ((base) + (0x01D))

/* �Ĵ���˵����LDO1-4��������ģʽ���ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_OCP_MOD_CTRL3_UNION */
#define SOC_SMART_OCP_MOD_CTRL3_ADDR(base)            ((base) + (0x01E))

/* �Ĵ���˵����LDO5-8��������ģʽ���ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_OCP_MOD_CTRL4_UNION */
#define SOC_SMART_OCP_MOD_CTRL4_ADDR(base)            ((base) + (0x01F))

/* �Ĵ���˵����LDO9-12��������ģʽ���ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_OCP_MOD_CTRL5_UNION */
#define SOC_SMART_OCP_MOD_CTRL5_ADDR(base)            ((base) + (0x020))

/* �Ĵ���˵����LDO13-16��������ģʽ���ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_OCP_MOD_CTRL6_UNION */
#define SOC_SMART_OCP_MOD_CTRL6_ADDR(base)            ((base) + (0x021))

/* �Ĵ���˵����LDO17-20��������ģʽ���ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_OCP_MOD_CTRL7_UNION */
#define SOC_SMART_OCP_MOD_CTRL7_ADDR(base)            ((base) + (0x022))

/* �Ĵ���˵����LDO21-ldo23��������ģʽ���ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_OCP_MOD_CTRL8_UNION */
#define SOC_SMART_OCP_MOD_CTRL8_ADDR(base)            ((base) + (0x023))

/* �Ĵ���˵����LVS2��������ģʽ���ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_OCP_MOD_CTRL9_UNION */
#define SOC_SMART_OCP_MOD_CTRL9_ADDR(base)            ((base) + (0x024))

/* �Ĵ���˵����CLASSD��������ģʽ���ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_OCP_MOD_CTRL11_UNION */
#define SOC_SMART_OCP_MOD_CTRL11_ADDR(base)           ((base) + (0x025))

/* �Ĵ���˵������Դģ��ʹ��1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ENABLE1_BUCK_UNION */
#define SOC_SMART_ENABLE1_BUCK_ADDR(base)             ((base) + (0x026))

/* �Ĵ���˵������Դģ��ر�1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_DISABLE1_BUCK_UNION */
#define SOC_SMART_DISABLE1_BUCK_ADDR(base)            ((base) + (0x027))

/* �Ĵ���˵������Դģ�鿪��״̬1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ONOFF_STATUS1_BUCK_UNION */
#define SOC_SMART_ONOFF_STATUS1_BUCK_ADDR(base)       ((base) + (0x028))

/* �Ĵ���˵������Դģ��ʹ��2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ENABLE2_LDO1_8_UNION */
#define SOC_SMART_ENABLE2_LDO1_8_ADDR(base)           ((base) + (0x029))

/* �Ĵ���˵������Դģ��ر�2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_DISABLE2_LDO1_8_UNION */
#define SOC_SMART_DISABLE2_LDO1_8_ADDR(base)          ((base) + (0x02A))

/* �Ĵ���˵������Դģ�鿪��״̬2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ONOFF_STATUS2_LDO1_8_UNION */
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_ADDR(base)     ((base) + (0x02B))

/* �Ĵ���˵������Դģ��ʹ��3�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ENABLE3_LDO9_16_UNION */
#define SOC_SMART_ENABLE3_LDO9_16_ADDR(base)          ((base) + (0x02C))

/* �Ĵ���˵������Դģ��ر�3�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_DISABLE3_LDO9_16_UNION */
#define SOC_SMART_DISABLE3_LDO9_16_ADDR(base)         ((base) + (0x02D))

/* �Ĵ���˵������Դģ�鿪��״̬3�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ONOFF_STATUS3_LDO9_16_UNION */
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_ADDR(base)    ((base) + (0x02E))

/* �Ĵ���˵������Դģ��ʹ��4�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ENABLE4_LDO17_22_UNION */
#define SOC_SMART_ENABLE4_LDO17_22_ADDR(base)         ((base) + (0x02F))

/* �Ĵ���˵������Դģ��ر�4�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_DISABLE4_LDO17_22_UNION */
#define SOC_SMART_DISABLE4_LDO17_22_ADDR(base)        ((base) + (0x030))

/* �Ĵ���˵������Դģ�鿪��״̬4�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ONOFF_STATUS4_LDO17_22_UNION */
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_ADDR(base)   ((base) + (0x031))

/* �Ĵ���˵������Դģ��ʹ��5�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ENABLE5_LVS2_UNION */
#define SOC_SMART_ENABLE5_LVS2_ADDR(base)             ((base) + (0x032))

/* �Ĵ���˵������Դģ��ر�5�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_DISABLE5_LVS2_UNION */
#define SOC_SMART_DISABLE5_LVS2_ADDR(base)            ((base) + (0x033))

/* �Ĵ���˵������Դģ�鿪��״̬5�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ONOFF_STATUS5_LVS2_UNION */
#define SOC_SMART_ONOFF_STATUS5_LVS2_ADDR(base)       ((base) + (0x034))

/* �Ĵ���˵������Դģ��ʹ��6�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ENABLE6_XO_CLK_UNION */
#define SOC_SMART_ENABLE6_XO_CLK_ADDR(base)           ((base) + (0x035))

/* �Ĵ���˵������Դģ��ر�6�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_DISABLE6_XO_CLK_UNION */
#define SOC_SMART_DISABLE6_XO_CLK_ADDR(base)          ((base) + (0x036))

/* �Ĵ���˵������Դģ�鿪��״̬6�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ONOFF_STATUS6_XO_CLK_UNION */
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_ADDR(base)     ((base) + (0x037))

/* �Ĵ���˵������Դģ���Ƿ����PMU����ECOģʽ����1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ECO_MOD_CFG1_UNION */
#define SOC_SMART_ECO_MOD_CFG1_ADDR(base)             ((base) + (0x038))

/* �Ĵ���˵������Դģ���Ƿ����PMU����ECOģʽ����2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ECO_MOD_CFG2_UNION */
#define SOC_SMART_ECO_MOD_CFG2_ADDR(base)             ((base) + (0x039))

/* �Ĵ���˵������Դģ���Ƿ����PMU����ECOģʽ����3�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ECO_MOD_CFG3_UNION */
#define SOC_SMART_ECO_MOD_CFG3_ADDR(base)             ((base) + (0x03A))

/* �Ĵ���˵������Դģ���Ƿ����PMU����ECOģʽ����4�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ECO_MOD_CFG4_UNION */
#define SOC_SMART_ECO_MOD_CFG4_ADDR(base)             ((base) + (0x03B))

/* �Ĵ���˵������Դģ���Ƿ�ǿ�ƽ���ECOģʽ����5�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ECO_MOD_CFG5_UNION */
#define SOC_SMART_ECO_MOD_CFG5_ADDR(base)             ((base) + (0x03C))

/* �Ĵ���˵������Դģ���Ƿ�ǿ�ƽ���ECOģʽ����6�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ECO_MOD_CFG6_UNION */
#define SOC_SMART_ECO_MOD_CFG6_ADDR(base)             ((base) + (0x03D))

/* �Ĵ���˵������Դģ���Ƿ�ǿ�ƽ���ECOģʽ����7�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ECO_MOD_CFG7_UNION */
#define SOC_SMART_ECO_MOD_CFG7_ADDR(base)             ((base) + (0x03E))

/* �Ĵ���˵������Դģ���Ƿ�ǿ�ƽ���ECOģʽ����8�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ECO_MOD_CFG8_UNION */
#define SOC_SMART_ECO_MOD_CFG8_ADDR(base)             ((base) + (0x03F))

/* �Ĵ���˵������PERI_ENӲ�ߺ�ECO������ص������źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_PERI_EN_MARK_UNION */
#define SOC_SMART_PERI_EN_MARK_ADDR(base)             ((base) + (0x040))

/* �Ĵ���˵����BUCK2����0�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK2_REG0_UNION */
#define SOC_SMART_BUCK2_REG0_ADDR(base)               ((base) + (0x049))

/* �Ĵ���˵����BUCK2����1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK2_REG1_UNION */
#define SOC_SMART_BUCK2_REG1_ADDR(base)               ((base) + (0x04A))

/* �Ĵ���˵����BUCK2����2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK2_REG2_UNION */
#define SOC_SMART_BUCK2_REG2_ADDR(base)               ((base) + (0x04B))

/* �Ĵ���˵����BUCK2����3�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK2_REG3_UNION */
#define SOC_SMART_BUCK2_REG3_ADDR(base)               ((base) + (0x04C))

/* �Ĵ���˵����BUCK2����4�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK2_REG4_UNION */
#define SOC_SMART_BUCK2_REG4_ADDR(base)               ((base) + (0x04D))

/* �Ĵ���˵����BUCK2����5�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK2_REG5_UNION */
#define SOC_SMART_BUCK2_REG5_ADDR(base)               ((base) + (0x04E))

/* �Ĵ���˵����BUCK2����6�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK2_REG6_UNION */
#define SOC_SMART_BUCK2_REG6_ADDR(base)               ((base) + (0x04F))

/* �Ĵ���˵����BUCK2����7�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK2_REG7_UNION */
#define SOC_SMART_BUCK2_REG7_ADDR(base)               ((base) + (0x050))

/* �Ĵ���˵����BUCK3����0�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK3_REG0_UNION */
#define SOC_SMART_BUCK3_REG0_ADDR(base)               ((base) + (0x051))

/* �Ĵ���˵����BUCK3����1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK3_REG1_UNION */
#define SOC_SMART_BUCK3_REG1_ADDR(base)               ((base) + (0x052))

/* �Ĵ���˵����BUCK3����2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK3_REG2_UNION */
#define SOC_SMART_BUCK3_REG2_ADDR(base)               ((base) + (0x053))

/* �Ĵ���˵����BUCK3����3�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK3_REG3_UNION */
#define SOC_SMART_BUCK3_REG3_ADDR(base)               ((base) + (0x054))

/* �Ĵ���˵����BUCK3����4�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK3_REG4_UNION */
#define SOC_SMART_BUCK3_REG4_ADDR(base)               ((base) + (0x055))

/* �Ĵ���˵����BUCK3����5�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK3_REG5_UNION */
#define SOC_SMART_BUCK3_REG5_ADDR(base)               ((base) + (0x056))

/* �Ĵ���˵����BUCK3����6�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK3_REG6_UNION */
#define SOC_SMART_BUCK3_REG6_ADDR(base)               ((base) + (0x057))

/* �Ĵ���˵����BUCK3����7�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK3_REG7_UNION */
#define SOC_SMART_BUCK3_REG7_ADDR(base)               ((base) + (0x058))

/* �Ĵ���˵����BUCK4����0�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK4_REG0_UNION */
#define SOC_SMART_BUCK4_REG0_ADDR(base)               ((base) + (0x059))

/* �Ĵ���˵����BUCK4����1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK4_REG1_UNION */
#define SOC_SMART_BUCK4_REG1_ADDR(base)               ((base) + (0x05A))

/* �Ĵ���˵����BUCK4����2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK4_REG2_UNION */
#define SOC_SMART_BUCK4_REG2_ADDR(base)               ((base) + (0x05B))

/* �Ĵ���˵����BUCK4����3�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK4_REG3_UNION */
#define SOC_SMART_BUCK4_REG3_ADDR(base)               ((base) + (0x05C))

/* �Ĵ���˵����BUCK4����4�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK4_REG4_UNION */
#define SOC_SMART_BUCK4_REG4_ADDR(base)               ((base) + (0x05D))

/* �Ĵ���˵����BUCK4����5�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK4_REG5_UNION */
#define SOC_SMART_BUCK4_REG5_ADDR(base)               ((base) + (0x05E))

/* �Ĵ���˵����BUCK4����6�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK4_REG6_UNION */
#define SOC_SMART_BUCK4_REG6_ADDR(base)               ((base) + (0x05F))

/* �Ĵ���˵����BUCK4����7�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK4_REG7_UNION */
#define SOC_SMART_BUCK4_REG7_ADDR(base)               ((base) + (0x060))

/* �Ĵ���˵����BUCKԤ��0�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK_RESERVE0_UNION */
#define SOC_SMART_BUCK_RESERVE0_ADDR(base)            ((base) + (0x061))

/* �Ĵ���˵����BUCKԤ��1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK_RESERVE1_UNION */
#define SOC_SMART_BUCK_RESERVE1_ADDR(base)            ((base) + (0x062))

/* �Ĵ���˵����CLK_TOP����0�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLK_TOP0_UNION */
#define SOC_SMART_CLK_TOP0_ADDR(base)                 ((base) + (0x063))

/* �Ĵ���˵����CLK_TOP����1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLK_TOP1_UNION */
#define SOC_SMART_CLK_TOP1_ADDR(base)                 ((base) + (0x064))

/* �Ĵ���˵����CLK_TOP����3�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLK_TOP3_UNION */
#define SOC_SMART_CLK_TOP3_ADDR(base)                 ((base) + (0x066))

/* �Ĵ���˵����CLK_TOP����4�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLK_TOP4_UNION */
#define SOC_SMART_CLK_TOP4_ADDR(base)                 ((base) + (0x067))

/* �Ĵ���˵����CLK_TOP����5�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLK_TOP5_UNION */
#define SOC_SMART_CLK_TOP5_ADDR(base)                 ((base) + (0x068))

/* �Ĵ���˵����CLASS_D����1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLASSD_CTRL1_UNION */
#define SOC_SMART_CLASSD_CTRL1_ADDR(base)             ((base) + (0x069))

/* �Ĵ���˵����CLASS_D����2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLASSD_CTRL2_UNION */
#define SOC_SMART_CLASSD_CTRL2_ADDR(base)             ((base) + (0x06A))

/* �Ĵ���˵����CLASS_D����3�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLASSD_CTRL3_UNION */
#define SOC_SMART_CLASSD_CTRL3_ADDR(base)             ((base) + (0x06B))

/* �Ĵ���˵����BUCK2��ѹ���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_VSET_BUCK2_ADJ_UNION */
#define SOC_SMART_VSET_BUCK2_ADJ_ADDR(base)           ((base) + (0x06D))

/* �Ĵ���˵����BUCK3��ѹ���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_VSET_BUCK3_ADJ_UNION */
#define SOC_SMART_VSET_BUCK3_ADJ_ADDR(base)           ((base) + (0x06E))

/* �Ĵ���˵����BUCK4��ѹ����0�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_VSET_BUCK4_ADJ0_UNION */
#define SOC_SMART_VSET_BUCK4_ADJ0_ADDR(base)          ((base) + (0x06F))

/* �Ĵ���˵����BUCK4��ѹ����1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_VSET_BUCK4_ADJ1_UNION */
#define SOC_SMART_VSET_BUCK4_ADJ1_ADDR(base)          ((base) + (0x070))

/* �Ĵ���˵����LDO1���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO1_REG_ADJ_UNION */
#define SOC_SMART_LDO1_REG_ADJ_ADDR(base)             ((base) + (0x071))

/* �Ĵ���˵����LDO2���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO2_REG_ADJ_UNION */
#define SOC_SMART_LDO2_REG_ADJ_ADDR(base)             ((base) + (0x072))

/* �Ĵ���˵����LDO3����0�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_LDO3_REG_ADJ0_UNION */
#define SOC_SMART_LDO3_REG_ADJ0_ADDR(base)            ((base) + (0x073))

/* �Ĵ���˵����LDO3����1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_LDO3_REG_ADJ1_UNION */
#define SOC_SMART_LDO3_REG_ADJ1_ADDR(base)            ((base) + (0x074))

/* �Ĵ���˵����LDO4���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO4_REG_ADJ_UNION */
#define SOC_SMART_LDO4_REG_ADJ_ADDR(base)             ((base) + (0x075))

/* �Ĵ���˵����LDO5���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO5_REG_ADJ_UNION */
#define SOC_SMART_LDO5_REG_ADJ_ADDR(base)             ((base) + (0x076))

/* �Ĵ���˵����LDO6���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO6_REG_ADJ_UNION */
#define SOC_SMART_LDO6_REG_ADJ_ADDR(base)             ((base) + (0x077))

/* �Ĵ���˵����LDO7���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO7_REG_ADJ_UNION */
#define SOC_SMART_LDO7_REG_ADJ_ADDR(base)             ((base) + (0x078))

/* �Ĵ���˵����LDO8���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO8_REG_ADJ_UNION */
#define SOC_SMART_LDO8_REG_ADJ_ADDR(base)             ((base) + (0x079))

/* �Ĵ���˵����LDO9���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO9_REG_ADJ_UNION */
#define SOC_SMART_LDO9_REG_ADJ_ADDR(base)             ((base) + (0x07A))

/* �Ĵ���˵����LDO10���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO10_REG_ADJ_UNION */
#define SOC_SMART_LDO10_REG_ADJ_ADDR(base)            ((base) + (0x07B))

/* �Ĵ���˵����LDO11���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO11_REG_ADJ_UNION */
#define SOC_SMART_LDO11_REG_ADJ_ADDR(base)            ((base) + (0x07C))

/* �Ĵ���˵����LDO12���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO12_REG_ADJ_UNION */
#define SOC_SMART_LDO12_REG_ADJ_ADDR(base)            ((base) + (0x07D))

/* �Ĵ���˵����LDO13���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO13_REG_ADJ_UNION */
#define SOC_SMART_LDO13_REG_ADJ_ADDR(base)            ((base) + (0x07E))

/* �Ĵ���˵����LDO14���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO14_REG_ADJ_UNION */
#define SOC_SMART_LDO14_REG_ADJ_ADDR(base)            ((base) + (0x07F))

/* �Ĵ���˵����LDO15���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO15_REG_ADJ_UNION */
#define SOC_SMART_LDO15_REG_ADJ_ADDR(base)            ((base) + (0x080))

/* �Ĵ���˵����LDO16���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO16_REG_ADJ_UNION */
#define SOC_SMART_LDO16_REG_ADJ_ADDR(base)            ((base) + (0x081))

/* �Ĵ���˵����LDO17���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO17_REG_ADJ_UNION */
#define SOC_SMART_LDO17_REG_ADJ_ADDR(base)            ((base) + (0x082))

/* �Ĵ���˵����LDO18���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO18_REG_ADJ_UNION */
#define SOC_SMART_LDO18_REG_ADJ_ADDR(base)            ((base) + (0x083))

/* �Ĵ���˵����LDO19���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO19_REG_ADJ_UNION */
#define SOC_SMART_LDO19_REG_ADJ_ADDR(base)            ((base) + (0x084))

/* �Ĵ���˵����LDO20���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO20_REG_ADJ_UNION */
#define SOC_SMART_LDO20_REG_ADJ_ADDR(base)            ((base) + (0x085))

/* �Ĵ���˵����LDO21���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO21_REG_ADJ_UNION */
#define SOC_SMART_LDO21_REG_ADJ_ADDR(base)            ((base) + (0x086))

/* �Ĵ���˵����LDO22���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO22_REG_ADJ_UNION */
#define SOC_SMART_LDO22_REG_ADJ_ADDR(base)            ((base) + (0x087))

/* �Ĵ���˵����PMUA���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_PMUA_REG_ADJ_UNION */
#define SOC_SMART_PMUA_REG_ADJ_ADDR(base)             ((base) + (0x088))

/* �Ĵ���˵����LVS����1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_LVS_ADJ1_UNION */
#define SOC_SMART_LVS_ADJ1_ADDR(base)                 ((base) + (0x089))

/* �Ĵ���˵����BANDGAP��THSD����1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BANDGAP_THSD_ADJ1_UNION */
#define SOC_SMART_BANDGAP_THSD_ADJ1_ADDR(base)        ((base) + (0x08A))

/* �Ĵ���˵����BANDGAP��THSD����2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BANDGAP_THSD_ADJ2_UNION */
#define SOC_SMART_BANDGAP_THSD_ADJ2_ADDR(base)        ((base) + (0x08B))

/* �Ĵ���˵����DR��˸ģʽ����1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_DR_FLA_CTRL1_UNION */
#define SOC_SMART_DR_FLA_CTRL1_ADDR(base)             ((base) + (0x08C))

/* �Ĵ���˵����DR��˸ģʽ����2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_DR_FLA_CTRL2_UNION */
#define SOC_SMART_DR_FLA_CTRL2_ADDR(base)             ((base) + (0x08D))

/* �Ĵ���˵����DR��˸ģʽ���ڵ���0�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_FLASH_PERIOD_DR12_UNION */
#define SOC_SMART_FLASH_PERIOD_DR12_ADDR(base)        ((base) + (0x08E))

/* �Ĵ���˵����DR��˸ģʽ����ʱ�����0�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_FLASH_ON_DR12_UNION */
#define SOC_SMART_FLASH_ON_DR12_ADDR(base)            ((base) + (0x08F))

/* �Ĵ���˵����DR��˸ģʽ���ڵ���1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_FLASH_PERIOD_DR345_UNION */
#define SOC_SMART_FLASH_PERIOD_DR345_ADDR(base)       ((base) + (0x090))

/* �Ĵ���˵����DR��˸ģʽ����ʱ�����1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_FLASH_ON_DR345_UNION */
#define SOC_SMART_FLASH_ON_DR345_ADDR(base)           ((base) + (0x091))

/* �Ĵ���˵����DR��ģʽѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_DR_MODE_SEL_UNION */
#define SOC_SMART_DR_MODE_SEL_ADDR(base)              ((base) + (0x092))

/* �Ĵ���˵����DR1/2����ģʽ���ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_DR_BRE_CTRL_UNION */
#define SOC_SMART_DR_BRE_CTRL_ADDR(base)              ((base) + (0x093))

/* �Ĵ���˵����DR1��DR2��������ʱ�����üĴ�����
   λ����UNION�ṹ:  SOC_SMART_DR12_TIM_CONF0_UNION */
#define SOC_SMART_DR12_TIM_CONF0_ADDR(base)           ((base) + (0x094))

/* �Ĵ���˵����DR1��DR2��������ʱ�����üĴ�����
   λ����UNION�ṹ:  SOC_SMART_DR12_TIM_CONF1_UNION */
#define SOC_SMART_DR12_TIM_CONF1_ADDR(base)           ((base) + (0x095))

/* �Ĵ���˵����DR1����ѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_DR1_ISET_UNION */
#define SOC_SMART_DR1_ISET_ADDR(base)                 ((base) + (0x096))

/* �Ĵ���˵����DR2����ѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_DR2_ISET_UNION */
#define SOC_SMART_DR2_ISET_ADDR(base)                 ((base) + (0x097))

/* �Ĵ���˵����DR3/4/5���ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_DR_LED_CTRL_UNION */
#define SOC_SMART_DR_LED_CTRL_ADDR(base)              ((base) + (0x098))

/* �Ĵ���˵����DR3/4/5������ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_DR_OUT_CTRL_UNION */
#define SOC_SMART_DR_OUT_CTRL_ADDR(base)              ((base) + (0x099))

/* �Ĵ���˵����DR3����ѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_DR3_ISET_UNION */
#define SOC_SMART_DR3_ISET_ADDR(base)                 ((base) + (0x09A))

/* �Ĵ���˵����DR3������ʱ���üĴ�����
   λ����UNION�ṹ:  SOC_SMART_DR3_START_DEL_UNION */
#define SOC_SMART_DR3_START_DEL_ADDR(base)            ((base) + (0x09B))

/* �Ĵ���˵����DR4����ѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_DR4_ISET_UNION */
#define SOC_SMART_DR4_ISET_ADDR(base)                 ((base) + (0x09C))

/* �Ĵ���˵����DR4������ʱ���üĴ�����
   λ����UNION�ṹ:  SOC_SMART_DR4_START_DEL_UNION */
#define SOC_SMART_DR4_START_DEL_ADDR(base)            ((base) + (0x09D))

/* �Ĵ���˵����DR5����ѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_DR5_ISET_UNION */
#define SOC_SMART_DR5_ISET_ADDR(base)                 ((base) + (0x09E))

/* �Ĵ���˵����DR5������ʱ���üĴ�����
   λ����UNION�ṹ:  SOC_SMART_DR5_START_DEL_UNION */
#define SOC_SMART_DR5_START_DEL_ADDR(base)            ((base) + (0x09F))


/* �Ĵ���˵����DR3��������ʱ�����üĴ�����
   λ����UNION�ṹ:  SOC_SMART_DR3_TIM_CONF0_UNION */
#define SOC_SMART_DR3_TIM_CONF0_ADDR(base)            ((base) + (0x0A0))

/* �Ĵ���˵����DR3��������ʱ�����üĴ�����
   λ����UNION�ṹ:  SOC_SMART_DR3_TIM_CONF1_UNION */
#define SOC_SMART_DR3_TIM_CONF1_ADDR(base)            ((base) + (0x0A1))

/* �Ĵ���˵����OTP����1�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_OTP_CTRL1_UNION */
#define SOC_SMART_OTP_CTRL1_ADDR(base)                ((base) + (0x0A2))

/* �Ĵ���˵����OTP����2�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_OTP_CTRL2_UNION */
#define SOC_SMART_OTP_CTRL2_ADDR(base)                ((base) + (0x0A3))

/* �Ĵ���˵����OTPд��ֵ�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OTP_PDIN_UNION */
#define SOC_SMART_OTP_PDIN_ADDR(base)                 ((base) + (0x0A4))

/* �Ĵ���˵����ģ��ROԤ���Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ANA_IN_UNION */
#define SOC_SMART_ANA_IN_ADDR(base)                   ((base) + (0x0B6))

/* �Ĵ���˵��������0�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RESERVED0_UNION */
#define SOC_SMART_RESERVED0_ADDR(base)                ((base) + (0x0B7))

/* �Ĵ���˵��������1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RESERVED1_UNION */
#define SOC_SMART_RESERVED1_ADDR(base)                ((base) + (0x0B8))

/* �Ĵ���˵��������2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RESERVED2_UNION */
#define SOC_SMART_RESERVED2_ADDR(base)                ((base) + (0x0B9))

/* �Ĵ���˵����DAC���ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_DAC_CTRL_UNION */
#define SOC_SMART_DAC_CTRL_ADDR(base)                 ((base) + (0x0BA))

/* �Ĵ���˵����BUCK01����0�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK01_CTRL0_UNION */
#define SOC_SMART_BUCK01_CTRL0_ADDR(base)             ((base) + (0x0D7))

/* �Ĵ���˵����BUCK01����1�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK01_CTRL1_UNION */
#define SOC_SMART_BUCK01_CTRL1_ADDR(base)             ((base) + (0x0D8))

/* �Ĵ���˵����BUCK01����2�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK01_CTRL2_UNION */
#define SOC_SMART_BUCK01_CTRL2_ADDR(base)             ((base) + (0xD9))

/* �Ĵ���˵����BUCK01����3�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK01_CTRL3_UNION */
#define SOC_SMART_BUCK01_CTRL3_ADDR(base)             ((base) + (0xDA))

/* �Ĵ���˵����BUCK01����4�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK01_CTRL4_UNION */
#define SOC_SMART_BUCK01_CTRL4_ADDR(base)             ((base) + (0x0DB))

/* �Ĵ���˵����BUCK0����0�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK0_CTRL0_UNION */
#define SOC_SMART_BUCK0_CTRL0_ADDR(base)              ((base) + (0x0DC))

/* �Ĵ���˵����BUCK0����1�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK0_CTRL1_UNION */
#define SOC_SMART_BUCK0_CTRL1_ADDR(base)              ((base) + (0x0DD))

/* �Ĵ���˵����BUCK0����2�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK0_CTRL2_UNION */
#define SOC_SMART_BUCK0_CTRL2_ADDR(base)              ((base) + (0x0DE))

/* �Ĵ���˵����BUCK0����3�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK0_CTRL3_UNION */
#define SOC_SMART_BUCK0_CTRL3_ADDR(base)              ((base) + (0x0DF))

/* �Ĵ���˵����BUCK0����4�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK0_CTRL4_UNION */
#define SOC_SMART_BUCK0_CTRL4_ADDR(base)              ((base) + (0x0E0))

/* �Ĵ���˵����BUCK0����5�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK0_CTRL5_UNION */
#define SOC_SMART_BUCK0_CTRL5_ADDR(base)              ((base) + (0x0E1))

/* �Ĵ���˵����BUCK0����6�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK0_CTRL6_UNION */
#define SOC_SMART_BUCK0_CTRL6_ADDR(base)              ((base) + (0x0E2))

/* �Ĵ���˵����BUCK0����7�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK0_CTRL7_UNION */
#define SOC_SMART_BUCK0_CTRL7_ADDR(base)              ((base) + (0x0E3))

/* �Ĵ���˵����BUCK0����8�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK0_CTRL8_UNION */
#define SOC_SMART_BUCK0_CTRL8_ADDR(base)              ((base) + (0x0E4))

/* �Ĵ���˵����BUCK0����9�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK0_CTRL9_UNION */
#define SOC_SMART_BUCK0_CTRL9_ADDR(base)              ((base) + (0x0E5))

/* �Ĵ���˵����BUCK0����10�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK0_CTRL10_UNION */
#define SOC_SMART_BUCK0_CTRL10_ADDR(base)             ((base) + (0x0E6))

/* �Ĵ���˵����BUCK1����0�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK1_CTRL0_UNION */
#define SOC_SMART_BUCK1_CTRL0_ADDR(base)              ((base) + (0x0E7))

/* �Ĵ���˵����BUCK1����1�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK1_CTRL1_UNION */
#define SOC_SMART_BUCK1_CTRL1_ADDR(base)              ((base) + (0x0E8))

/* �Ĵ���˵����BUCK1����2�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK1_CTRL2_UNION */
#define SOC_SMART_BUCK1_CTRL2_ADDR(base)              ((base) + (0x0E9))

/* �Ĵ���˵����BUCK1����3�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK1_CTRL3_UNION */
#define SOC_SMART_BUCK1_CTRL3_ADDR(base)              ((base) + (0x0EA))

/* �Ĵ���˵����BUCK1����4�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK1_CTRL4_UNION */
#define SOC_SMART_BUCK1_CTRL4_ADDR(base)              ((base) + (0x0EB))

/* �Ĵ���˵����BUCK1����5�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK1_CTRL5_UNION */
#define SOC_SMART_BUCK1_CTRL5_ADDR(base)              ((base) + (0x0EC))

/* �Ĵ���˵����BUCK1����6�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK1_CTRL6_UNION */
#define SOC_SMART_BUCK1_CTRL6_ADDR(base)              ((base) + (0x0ED))

/* �Ĵ���˵����BUCK1����7�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK1_CTRL7_UNION */
#define SOC_SMART_BUCK1_CTRL7_ADDR(base)              ((base) + (0x0EF))

/* �Ĵ���˵����BUCK1����8�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK1_CTRL8_UNION */
#define SOC_SMART_BUCK1_CTRL8_ADDR(base)              ((base) + (0x0F0))

/* �Ĵ���˵����BUCK1����9�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK1_CTRL9_UNION */
#define SOC_SMART_BUCK1_CTRL9_ADDR(base)              ((base) + (0x0F1))

/* �Ĵ���˵����BUCK1����10�źżĴ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK1_CTRL10_UNION */
#define SOC_SMART_BUCK1_CTRL10_ADDR(base)             ((base) + (0x0F2))

/* �Ĵ���˵����LDO22�����Ƚ������üĴ�����
   λ����UNION�ṹ:  SOC_SMART_LDO22_OCP_VOS_UNION */
#define SOC_SMART_LDO22_OCP_VOS_ADDR(base)            ((base) + (0x0F3))

/* �Ĵ���˵����LDO_BUCK�����ѹ���üĴ�����
   λ����UNION�ṹ:  SOC_SMART_VSET_LDO_BUCK_UNION */
#define SOC_SMART_VSET_LDO_BUCK_ADDR(base)            ((base) + (0x0F4))

/* �Ĵ���˵����XO_LDO���ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_XO_LDO_CTRL_UNION */
#define SOC_SMART_XO_LDO_CTRL_ADDR(base)              ((base) + (0x0F5))

/* �Ĵ���˵����BUCKO1ģʽѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_BUCK01_MOD_CTRL_UNION */
#define SOC_SMART_BUCK01_MOD_CTRL_ADDR(base)          ((base) + (0x0F7))

/* �Ĵ���˵����sensorʱ�ӿ��ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_SENSOR_CLK_CTRL_UNION */
#define SOC_SMART_SENSOR_CLK_CTRL_ADDR(base)          ((base) + (0x0F9))

/* �Ĵ���˵����CK_19M2 pin�����ʱ�ӿ��ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_CK_19M2_CTRL_UNION */
#define SOC_SMART_CK_19M2_CTRL_ADDR(base)             ((base) + (0x0FA))

/* �Ĵ���˵����EXTBUCK����ģʽѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_EXTBUCK_MOD_SEL_UNION */
#define SOC_SMART_EXTBUCK_MOD_SEL_ADDR(base)          ((base) + (0x0FB))

/* �Ĵ���˵����XOʱ��������ο��ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_XO_WAVE_CTRL_UNION */
#define SOC_SMART_XO_WAVE_CTRL_ADDR(base)             ((base) + (0x0FD))



/****************************************************************************
                     (2/2) NP_PMU_CTRL
 ****************************************************************************/
/* �Ĵ���˵�����ж�1���µ��¼�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_IRQ1_RECORD_UNION */
#define SOC_SMART_NP_IRQ1_RECORD_ADDR(base)           ((base) + (0x011))

/* �Ĵ���˵�����ж�2���µ��¼�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_IRQ2_RECORD_UNION */
#define SOC_SMART_NP_IRQ2_RECORD_ADDR(base)           ((base) + (0x012))

/* �Ĵ���˵�����ж�3���µ��¼�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_IRQ3_RECORD_UNION */
#define SOC_SMART_NP_IRQ3_RECORD_ADDR(base)           ((base) + (0x013))

/* �Ĵ���˵������·�������µ��¼1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_SCP_RECORD1_UNION */
#define SOC_SMART_NP_SCP_RECORD1_ADDR(base)           ((base) + (0x014))

/* �Ĵ���˵���������������µ��¼1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_OCP_RECORD1_UNION */
#define SOC_SMART_NP_OCP_RECORD1_ADDR(base)           ((base) + (0x015))

/* �Ĵ���˵���������������µ��¼2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_OCP_RECORD2_UNION */
#define SOC_SMART_NP_OCP_RECORD2_ADDR(base)           ((base) + (0x016))

/* �Ĵ���˵���������������µ��¼3�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_OCP_RECORD3_UNION */
#define SOC_SMART_NP_OCP_RECORD3_ADDR(base)           ((base) + (0x017))

/* �Ĵ���˵���������������µ��¼4�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_OCP_RECORD4_UNION */
#define SOC_SMART_NP_OCP_RECORD4_ADDR(base)           ((base) + (0x018))

/* �Ĵ���˵���������������µ��¼5�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_OCP_RECORD5_UNION */
#define SOC_SMART_NP_OCP_RECORD5_ADDR(base)           ((base) + (0x019))

/* �Ĵ���˵����CLK_TOP����2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLK_TOP2_UNION */
#define SOC_SMART_CLK_TOP2_ADDR(base)                 ((base) + (0x065))

/* �Ĵ���˵����RTC��ǰʱ��bit[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTCDR0_UNION */
#define SOC_SMART_RTCDR0_ADDR(base)                   ((base) + (0x0A9))

/* �Ĵ���˵����RTC��ǰʱ��bit[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTCDR1_UNION */
#define SOC_SMART_RTCDR1_ADDR(base)                   ((base) + (0x0AA))

/* �Ĵ���˵����RTC��ǰʱ��bit[23:16]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTCDR2_UNION */
#define SOC_SMART_RTCDR2_ADDR(base)                   ((base) + (0x0AB))

/* �Ĵ���˵����RTC��ǰʱ��bit[31:24]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTCDR3_UNION */
#define SOC_SMART_RTCDR3_ADDR(base)                   ((base) + (0x0AC))

/* �Ĵ���˵����RTC�Ƚ�bit[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTCMR0_UNION */
#define SOC_SMART_RTCMR0_ADDR(base)                   ((base) + (0x0AD))

/* �Ĵ���˵����RTC�Ƚ�bit[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTCMR1_UNION */
#define SOC_SMART_RTCMR1_ADDR(base)                   ((base) + (0x0AE))

/* �Ĵ���˵����RTC�Ƚ�bit[23:16]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTCMR2_UNION */
#define SOC_SMART_RTCMR2_ADDR(base)                   ((base) + (0x0AF))

/* �Ĵ���˵����RTC�Ƚ�bit[31:24]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTCMR3_UNION */
#define SOC_SMART_RTCMR3_ADDR(base)                   ((base) + (0x0B0))

/* �Ĵ���˵����RTC����bit[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTCLR0_UNION */
#define SOC_SMART_RTCLR0_ADDR(base)                   ((base) + (0x0B1))

/* �Ĵ���˵����RTC����bit[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTCLR1_UNION */
#define SOC_SMART_RTCLR1_ADDR(base)                   ((base) + (0x0B2))

/* �Ĵ���˵����RTC����bit[23:16]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTCLR2_UNION */
#define SOC_SMART_RTCLR2_ADDR(base)                   ((base) + (0x0B3))

/* �Ĵ���˵����RTC����bit[31:24]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTCLR3_UNION */
#define SOC_SMART_RTCLR3_ADDR(base)                   ((base) + (0x0B4))

/* �Ĵ���˵����RTC���ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_RTCCTRL_UNION */
#define SOC_SMART_RTCCTRL_ADDR(base)                  ((base) + (0x0B5))

/* �Ĵ���˵����OTP����ֵ0�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OTP_PDOB0_UNION */
#define SOC_SMART_OTP_PDOB0_ADDR(base)                ((base) + (0x0A5))

/* �Ĵ���˵����OTP����ֵ1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OTP_PDOB1_UNION */
#define SOC_SMART_OTP_PDOB1_ADDR(base)                ((base) + (0x0A6))

/* �Ĵ���˵����OTP����ֵ2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OTP_PDOB2_UNION */
#define SOC_SMART_OTP_PDOB2_ADDR(base)                ((base) + (0x0A7))

/* �Ĵ���˵����OTP����ֵ3�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OTP_PDOB3_UNION */
#define SOC_SMART_OTP_PDOB3_ADDR(base)                ((base) + (0x0A8))

/* �Ĵ���˵����CRC_VALUE[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CRC_VALUE0_UNION */
#define SOC_SMART_CRC_VALUE0_ADDR(base)               ((base) + (0x0BB))

/* �Ĵ���˵����CRC_VALUE[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CRC_VALUE1_UNION */
#define SOC_SMART_CRC_VALUE1_ADDR(base)               ((base) + (0x0BC))

/* �Ĵ���˵����CRC_VALUE[20:16]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CRC_VALUE2_UNION */
#define SOC_SMART_CRC_VALUE2_ADDR(base)               ((base) + (0x0BD))

/* �Ĵ���˵�������µ����1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_REG_ADJ1_UNION */
#define SOC_SMART_NP_REG_ADJ1_ADDR(base)              ((base) + (0x0BE))

/* �Ĵ���˵�������µ����2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_REG_ADJ2_UNION */
#define SOC_SMART_NP_REG_ADJ2_ADDR(base)              ((base) + (0x0BF))

/* �Ĵ���˵�������õ�ط��µ���ڼĴ�����
   λ����UNION�ṹ:  SOC_SMART_NP_REG_CHG_UNION */
#define SOC_SMART_NP_REG_CHG_ADDR(base)               ((base) + (0x0C0))

/* �Ĵ���˵����rtc_adj[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTC_ADJ1_UNION */
#define SOC_SMART_RTC_ADJ1_ADDR(base)                 ((base) + (0x0C1))

/* �Ĵ���˵����rtc_adj[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTC_ADJ2_UNION */
#define SOC_SMART_RTC_ADJ2_ADDR(base)                 ((base) + (0x0C2))

/* �Ĵ���˵����XO_THRESOLD2[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_XO_THRESOLD1_UNION */
#define SOC_SMART_XO_THRESOLD1_ADDR(base)             ((base) + (0x0C3))

/* �Ĵ���˵����XO_THRESOLD2[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_XO_THRESOLD2_UNION */
#define SOC_SMART_XO_THRESOLD2_ADDR(base)             ((base) + (0x0C4))

/* �Ĵ���˵�������µ�ģ�Ᵽ��0�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_RSVED_ANA0_UNION */
#define SOC_SMART_NP_RSVED_ANA0_ADDR(base)            ((base) + (0x0C5))

/* �Ĵ���˵�������µ�ģ�Ᵽ��1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_RSVED_ANA1_UNION */
#define SOC_SMART_NP_RSVED_ANA1_ADDR(base)            ((base) + (0x0C6))

/* �Ĵ���˵�������µ籣��0�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_RSVED0_UNION */
#define SOC_SMART_NP_RSVED0_ADDR(base)                ((base) + (0x0C7))

/* �Ĵ���˵�������µ籣��1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_RSVED1_UNION */
#define SOC_SMART_NP_RSVED1_ADDR(base)                ((base) + (0x0C8))

/* �Ĵ���˵�������µ籣��2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_RSVED2_UNION */
#define SOC_SMART_NP_RSVED2_ADDR(base)                ((base) + (0x0C9))

/* �Ĵ���˵�������µ籣��3�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_RSVED3_UNION */
#define SOC_SMART_NP_RSVED3_ADDR(base)                ((base) + (0x0CA))

/* �Ĵ���˵�������µ籣��4�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_RSVED4_UNION */
#define SOC_SMART_NP_RSVED4_ADDR(base)                ((base) + (0x0CB))

/* �Ĵ���˵�������µ籣��5�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_RSVED5_UNION */
#define SOC_SMART_NP_RSVED5_ADDR(base)                ((base) + (0x0CC))

/* �Ĵ���˵�������µ籣��6�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_RSVED6_UNION */
#define SOC_SMART_NP_RSVED6_ADDR(base)                ((base) + (0x0CD))

/* �Ĵ���˵�������µ籣��7�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_NP_RSVED7_UNION */
#define SOC_SMART_NP_RSVED7_ADDR(base)                ((base) + (0x0CE))

/* �Ĵ���˵����RTC�ϵ�����[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTC_PWRUP_TIMER0_UNION */
#define SOC_SMART_RTC_PWRUP_TIMER0_ADDR(base)         ((base) + (0x0CF))

/* �Ĵ���˵����RTC�ϵ�����[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTC_PWRUP_TIMER1_UNION */
#define SOC_SMART_RTC_PWRUP_TIMER1_ADDR(base)         ((base) + (0x0D0))

/* �Ĵ���˵����RTC�ϵ�����[23:16]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTC_PWRUP_TIMER2_UNION */
#define SOC_SMART_RTC_PWRUP_TIMER2_ADDR(base)         ((base) + (0x0D1))

/* �Ĵ���˵����RTC�ϵ�����[31:24]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTC_PWRUP_TIMER3_UNION */
#define SOC_SMART_RTC_PWRUP_TIMER3_ADDR(base)         ((base) + (0x0D2))

/* �Ĵ���˵����RTC�µ�����[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTC_PWRDOWN_TIMER0_UNION */
#define SOC_SMART_RTC_PWRDOWN_TIMER0_ADDR(base)       ((base) + (0x0D3))

/* �Ĵ���˵����RTC�µ�����[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTC_PWRDOWN_TIMER1_UNION */
#define SOC_SMART_RTC_PWRDOWN_TIMER1_ADDR(base)       ((base) + (0x0D4))

/* �Ĵ���˵����RTC�µ�����[23:16]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTC_PWRDOWN_TIMER2_UNION */
#define SOC_SMART_RTC_PWRDOWN_TIMER2_ADDR(base)       ((base) + (0x0D5))

/* �Ĵ���˵����RTC�µ�����[31:24]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_RTC_PWRDOWN_TIMER3_UNION */
#define SOC_SMART_RTC_PWRDOWN_TIMER3_ADDR(base)       ((base) + (0x0D6))

/* �Ĵ���˵����XO_DIG_CLK_EN���������üĴ�����
   λ����UNION�ṹ:  SOC_SMART_NOPWR_RC_OFF_EN_UNION */
#define SOC_SMART_NOPWR_RC_OFF_EN_ADDR(base)          ((base) + (0x0EE))

/* �Ĵ���˵����XO_DIG_CLK���������üĴ�����
   λ����UNION�ṹ:  SOC_SMART_XO_DIG_CLK_UNION */
#define SOC_SMART_XO_DIG_CLK_ADDR(base)               ((base) + (0x0F6))

/* �Ĵ���˵����SMPL���ܿ��ؼĴ�����
   λ����UNION�ṹ:  SOC_SMART_SMPL_OPEN_EN_UNION */
#define SOC_SMART_SMPL_OPEN_EN_ADDR(base)             ((base) + (0x0F8))

/* �Ĵ���˵����PWR_HOLD_2D�˲����üĴ�����
   λ����UNION�ṹ:  SOC_SMART_PWR_HOLD_2D_DEB_UNION */
#define SOC_SMART_PWR_HOLD_2D_DEB_ADDR(base)          ((base) + (0x0FC))

/* �Ĵ���˵����19.2Mʱ��600��586��Ƶ�л�ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_SMART_CK19M2_600_586_EN_UNION */
#define SOC_SMART_CK19M2_600_586_EN_ADDR(base)        ((base) + (0x0FE))

/* �Ĵ���˵����SMPL���������ϵ��¼����üĴ�����
   λ����UNION�ṹ:  SOC_SMART_NP_SMPL_IRQ_UNION */
#define SOC_SMART_NP_SMPL_IRQ_ADDR(base)              ((base) + (0x0FF))

/* �Ĵ���˵����CLK_TOP����6�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLK_TOP6_UNION */
#define SOC_SMART_CLK_TOP6_ADDR(base)                 ((base) + (0x100))

/* �Ĵ���˵������ǰ����[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT_0_UNION */
#define SOC_SMART_CURRENT_0_ADDR(base)                ((base) + (0x14D))

/* �Ĵ���˵������ǰ����[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT_1_UNION */
#define SOC_SMART_CURRENT_1_ADDR(base)                ((base) + (0x14E))

/* �Ĵ���˵������ǰ��ѹ[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT_0_UNION */
#define SOC_SMART_V_OUT_0_ADDR(base)                  ((base) + (0x14F))

/* �Ĵ���˵������ǰ��ѹ[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT_1_UNION */
#define SOC_SMART_V_OUT_1_ADDR(base)                  ((base) + (0x150))

/* �Ĵ���˵�������ؼƿ��ƼĴ�����
   λ����UNION�ṹ:  SOC_SMART_CLJ_CTRL_REG_UNION */
#define SOC_SMART_CLJ_CTRL_REG_ADDR(base)             ((base) + (0x151))

/* �Ĵ���˵����ECO_REFLASH����ʱ��Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ECO_REFALSH_TIME_UNION */
#define SOC_SMART_ECO_REFALSH_TIME_ADDR(base)         ((base) + (0x152))

/* �Ĵ���˵����cl_out[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CL_OUT0_UNION */
#define SOC_SMART_CL_OUT0_ADDR(base)                  ((base) + (0x153))

/* �Ĵ���˵����cl_out[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CL_OUT1_UNION */
#define SOC_SMART_CL_OUT1_ADDR(base)                  ((base) + (0x154))

/* �Ĵ���˵����cl_out[23:16]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CL_OUT2_UNION */
#define SOC_SMART_CL_OUT2_ADDR(base)                  ((base) + (0x155))

/* �Ĵ���˵����cl_out[31:24]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CL_OUT3_UNION */
#define SOC_SMART_CL_OUT3_ADDR(base)                  ((base) + (0x156))

/* �Ĵ���˵����cl_in[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CL_IN0_UNION */
#define SOC_SMART_CL_IN0_ADDR(base)                   ((base) + (0x157))

/* �Ĵ���˵����cl_in[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CL_IN1_UNION */
#define SOC_SMART_CL_IN1_ADDR(base)                   ((base) + (0x158))

/* �Ĵ���˵����cl_in[23:16]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CL_IN2_UNION */
#define SOC_SMART_CL_IN2_ADDR(base)                   ((base) + (0x159))

/* �Ĵ���˵����cl_in[31:24]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CL_IN3_UNION */
#define SOC_SMART_CL_IN3_ADDR(base)                   ((base) + (0x15A))

/* �Ĵ���˵����chg_timer[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CHG_TIMER0_UNION */
#define SOC_SMART_CHG_TIMER0_ADDR(base)               ((base) + (0x15B))

/* �Ĵ���˵����chg_timer[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CHG_TIMER1_UNION */
#define SOC_SMART_CHG_TIMER1_ADDR(base)               ((base) + (0x15C))

/* �Ĵ���˵����chg_timer[23:16]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CHG_TIMER2_UNION */
#define SOC_SMART_CHG_TIMER2_ADDR(base)               ((base) + (0x15D))

/* �Ĵ���˵����chg_timer[31:24]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CHG_TIMER3_UNION */
#define SOC_SMART_CHG_TIMER3_ADDR(base)               ((base) + (0x15E))

/* �Ĵ���˵����load_timer[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_LOAD_TIMER0_UNION */
#define SOC_SMART_LOAD_TIMER0_ADDR(base)              ((base) + (0x15F))

/* �Ĵ���˵����load_timer[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_LOAD_TIMER1_UNION */
#define SOC_SMART_LOAD_TIMER1_ADDR(base)              ((base) + (0x160))

/* �Ĵ���˵����load_timer[23:16]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_LOAD_TIMER2_UNION */
#define SOC_SMART_LOAD_TIMER2_ADDR(base)              ((base) + (0x161))

/* �Ĵ���˵����load_timer[31:24]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_LOAD_TIMER3_UNION */
#define SOC_SMART_LOAD_TIMER3_ADDR(base)              ((base) + (0x162))

/* �Ĵ���˵����cl_int[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CL_INT0_UNION */
#define SOC_SMART_CL_INT0_ADDR(base)                  ((base) + (0x163))

/* �Ĵ���˵����cl_int[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CL_INT1_UNION */
#define SOC_SMART_CL_INT1_ADDR(base)                  ((base) + (0x164))

/* �Ĵ���˵����cl_int[23:16]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CL_INT2_UNION */
#define SOC_SMART_CL_INT2_ADDR(base)                  ((base) + (0x165))

/* �Ĵ���˵����cl_int[31:24]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CL_INT3_UNION */
#define SOC_SMART_CL_INT3_ADDR(base)                  ((base) + (0x166))

/* �Ĵ���˵����v_int[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_INT0_UNION */
#define SOC_SMART_V_INT0_ADDR(base)                   ((base) + (0x167))

/* �Ĵ���˵����v_int[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_INT1_UNION */
#define SOC_SMART_V_INT1_ADDR(base)                   ((base) + (0x168))

/* �Ĵ���˵����offset_current[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OFFSET_CURRENT0_UNION */
#define SOC_SMART_OFFSET_CURRENT0_ADDR(base)          ((base) + (0x169))

/* �Ĵ���˵����offset_current[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OFFSET_CURRENT1_UNION */
#define SOC_SMART_OFFSET_CURRENT1_ADDR(base)          ((base) + (0x16A))

/* �Ĵ���˵����offset_voltage[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OFFSET_VOLTAGE0_UNION */
#define SOC_SMART_OFFSET_VOLTAGE0_ADDR(base)          ((base) + (0x16B))

/* �Ĵ���˵����offset_voltage[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OFFSET_VOLTAGE1_UNION */
#define SOC_SMART_OFFSET_VOLTAGE1_ADDR(base)          ((base) + (0x16C))

/* �Ĵ���˵����v_ocv_data[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OCV_VOLTAGE0_UNION */
#define SOC_SMART_OCV_VOLTAGE0_ADDR(base)             ((base) + (0x16D))

/* �Ĵ���˵����v_ocv_data[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OCV_VOLTAGE1_UNION */
#define SOC_SMART_OCV_VOLTAGE1_ADDR(base)             ((base) + (0x16E))

/* �Ĵ���˵����i_ocv_data[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OCV_CURRENT0_UNION */
#define SOC_SMART_OCV_CURRENT0_ADDR(base)             ((base) + (0x16F))

/* �Ĵ���˵����i_ocv_data[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OCV_CURRENT1_UNION */
#define SOC_SMART_OCV_CURRENT1_ADDR(base)             ((base) + (0x170))

/* �Ĵ���˵����eco_out_clin[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ECO_OUT_CLIN_0_UNION */
#define SOC_SMART_ECO_OUT_CLIN_0_ADDR(base)           ((base) + (0x171))

/* �Ĵ���˵����eco_out_clin[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ECO_OUT_CLIN_1_UNION */
#define SOC_SMART_ECO_OUT_CLIN_1_ADDR(base)           ((base) + (0x172))

/* �Ĵ���˵����eco_out_clin[23:16]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ECO_OUT_CLIN_2_UNION */
#define SOC_SMART_ECO_OUT_CLIN_2_ADDR(base)           ((base) + (0x173))

/* �Ĵ���˵����eco_out_clin[31:24]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ECO_OUT_CLIN_3_UNION */
#define SOC_SMART_ECO_OUT_CLIN_3_ADDR(base)           ((base) + (0x174))

/* �Ĵ���˵����eco_out_clout[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ECO_OUT_CLOUT_0_UNION */
#define SOC_SMART_ECO_OUT_CLOUT_0_ADDR(base)          ((base) + (0x175))

/* �Ĵ���˵����eco_out_clout[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ECO_OUT_CLOUT_1_UNION */
#define SOC_SMART_ECO_OUT_CLOUT_1_ADDR(base)          ((base) + (0x176))

/* �Ĵ���˵����eco_out_clout[23:16]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ECO_OUT_CLOUT_2_UNION */
#define SOC_SMART_ECO_OUT_CLOUT_2_ADDR(base)          ((base) + (0x177))

/* �Ĵ���˵����eco_out_clout[31:24]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_ECO_OUT_CLOUT_3_UNION */
#define SOC_SMART_ECO_OUT_CLOUT_3_ADDR(base)          ((base) + (0x178))

/* �Ĵ���˵����v_out_pre0[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT0_PRE0_UNION */
#define SOC_SMART_V_OUT0_PRE0_ADDR(base)              ((base) + (0x179))

/* �Ĵ���˵����v_out_pre0[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT1_PRE0_UNION */
#define SOC_SMART_V_OUT1_PRE0_ADDR(base)              ((base) + (0x17A))

/* �Ĵ���˵����v_out_pre1[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT0_PRE1_UNION */
#define SOC_SMART_V_OUT0_PRE1_ADDR(base)              ((base) + (0x17B))

/* �Ĵ���˵����v_out_pre1[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT1_PRE1_UNION */
#define SOC_SMART_V_OUT1_PRE1_ADDR(base)              ((base) + (0x17C))

/* �Ĵ���˵����v_out_pre2[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT0_PRE2_UNION */
#define SOC_SMART_V_OUT0_PRE2_ADDR(base)              ((base) + (0x17D))

/* �Ĵ���˵����v_out_pre2[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT1_PRE2_UNION */
#define SOC_SMART_V_OUT1_PRE2_ADDR(base)              ((base) + (0x17E))

/* �Ĵ���˵����v_out_pre3[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT0_PRE3_UNION */
#define SOC_SMART_V_OUT0_PRE3_ADDR(base)              ((base) + (0x17F))

/* �Ĵ���˵����v_out_pre3[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT1_PRE3_UNION */
#define SOC_SMART_V_OUT1_PRE3_ADDR(base)              ((base) + (0x180))

/* �Ĵ���˵����v_out_pre4[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT0_PRE4_UNION */
#define SOC_SMART_V_OUT0_PRE4_ADDR(base)              ((base) + (0x181))

/* �Ĵ���˵����v_out_pre4[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT1_PRE4_UNION */
#define SOC_SMART_V_OUT1_PRE4_ADDR(base)              ((base) + (0x182))

/* �Ĵ���˵����v_out_pre5[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT0_PRE5_UNION */
#define SOC_SMART_V_OUT0_PRE5_ADDR(base)              ((base) + (0x183))

/* �Ĵ���˵����v_out_pre5[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT1_PRE5_UNION */
#define SOC_SMART_V_OUT1_PRE5_ADDR(base)              ((base) + (0x184))

/* �Ĵ���˵����v_out_pre6[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT0_PRE6_UNION */
#define SOC_SMART_V_OUT0_PRE6_ADDR(base)              ((base) + (0x185))

/* �Ĵ���˵����v_out_pre6[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT1_PRE6_UNION */
#define SOC_SMART_V_OUT1_PRE6_ADDR(base)              ((base) + (0x186))

/* �Ĵ���˵����v_out_pre7[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT0_PRE7_UNION */
#define SOC_SMART_V_OUT0_PRE7_ADDR(base)              ((base) + (0x187))

/* �Ĵ���˵����v_out_pre7[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT1_PRE7_UNION */
#define SOC_SMART_V_OUT1_PRE7_ADDR(base)              ((base) + (0x188))

/* �Ĵ���˵����v_out_pre8[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT0_PRE8_UNION */
#define SOC_SMART_V_OUT0_PRE8_ADDR(base)              ((base) + (0x189))

/* �Ĵ���˵����v_out_pre8[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT1_PRE8_UNION */
#define SOC_SMART_V_OUT1_PRE8_ADDR(base)              ((base) + (0x18A))

/* �Ĵ���˵����v_out_pre9[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT0_PRE9_UNION */
#define SOC_SMART_V_OUT0_PRE9_ADDR(base)              ((base) + (0x18B))

/* �Ĵ���˵����v_out_pre9[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_V_OUT1_PRE9_UNION */
#define SOC_SMART_V_OUT1_PRE9_ADDR(base)              ((base) + (0x18C))

/* �Ĵ���˵����current_pre0[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT0_PRE0_UNION */
#define SOC_SMART_CURRENT0_PRE0_ADDR(base)            ((base) + (0x18D))

/* �Ĵ���˵����current_pre0[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT1_PRE0_UNION */
#define SOC_SMART_CURRENT1_PRE0_ADDR(base)            ((base) + (0x18E))

/* �Ĵ���˵����current_pre1[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT0_PRE1_UNION */
#define SOC_SMART_CURRENT0_PRE1_ADDR(base)            ((base) + (0x18F))

/* �Ĵ���˵����current_pre1[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT1_PRE1_UNION */
#define SOC_SMART_CURRENT1_PRE1_ADDR(base)            ((base) + (0x190))

/* �Ĵ���˵����current_pre2[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT0_PRE2_UNION */
#define SOC_SMART_CURRENT0_PRE2_ADDR(base)            ((base) + (0x191))

/* �Ĵ���˵����current_pre2[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT1_PRE2_UNION */
#define SOC_SMART_CURRENT1_PRE2_ADDR(base)            ((base) + (0x192))

/* �Ĵ���˵����current_pre3[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT0_PRE3_UNION */
#define SOC_SMART_CURRENT0_PRE3_ADDR(base)            ((base) + (0x193))

/* �Ĵ���˵����current_pre3[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT1_PRE3_UNION */
#define SOC_SMART_CURRENT1_PRE3_ADDR(base)            ((base) + (0x194))

/* �Ĵ���˵����current_pre4[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT0_PRE4_UNION */
#define SOC_SMART_CURRENT0_PRE4_ADDR(base)            ((base) + (0x195))

/* �Ĵ���˵����current_pre4[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT1_PRE4_UNION */
#define SOC_SMART_CURRENT1_PRE4_ADDR(base)            ((base) + (0x196))

/* �Ĵ���˵����current_pre5[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT0_PRE5_UNION */
#define SOC_SMART_CURRENT0_PRE5_ADDR(base)            ((base) + (0x197))

/* �Ĵ���˵����current_pre5[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT1_PRE5_UNION */
#define SOC_SMART_CURRENT1_PRE5_ADDR(base)            ((base) + (0x198))

/* �Ĵ���˵����current_pre6[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT0_PRE6_UNION */
#define SOC_SMART_CURRENT0_PRE6_ADDR(base)            ((base) + (0x199))

/* �Ĵ���˵����current_pre6[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT1_PRE6_UNION */
#define SOC_SMART_CURRENT1_PRE6_ADDR(base)            ((base) + (0x19A))

/* �Ĵ���˵����current_pre7[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT0_PRE7_UNION */
#define SOC_SMART_CURRENT0_PRE7_ADDR(base)            ((base) + (0x19B))

/* �Ĵ���˵����current_pre7[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT1_PRE7_UNION */
#define SOC_SMART_CURRENT1_PRE7_ADDR(base)            ((base) + (0x19C))

/* �Ĵ���˵����current_pre8[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT0_PRE8_UNION */
#define SOC_SMART_CURRENT0_PRE8_ADDR(base)            ((base) + (0x19D))

/* �Ĵ���˵����current_pre8[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT1_PRE8_UNION */
#define SOC_SMART_CURRENT1_PRE8_ADDR(base)            ((base) + (0x19E))

/* �Ĵ���˵����current_pre9[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT0_PRE9_UNION */
#define SOC_SMART_CURRENT0_PRE9_ADDR(base)            ((base) + (0x19F))

/* �Ĵ���˵����current_pre9[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CURRENT1_PRE9_UNION */
#define SOC_SMART_CURRENT1_PRE9_ADDR(base)            ((base) + (0x1A0))

/* �Ĵ���˵��������ƫ�õ���[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OFFSET_CURRENT_MOD_0_UNION */
#define SOC_SMART_OFFSET_CURRENT_MOD_0_ADDR(base)     ((base) + (0x1A1))

/* �Ĵ���˵��������ƫ�õ���[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OFFSET_CURRENT_MOD_1_UNION */
#define SOC_SMART_OFFSET_CURRENT_MOD_1_ADDR(base)     ((base) + (0x1A2))

/* �Ĵ���˵������ѹƫ�õ���[7:0]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OFFSET_VOLTAGE_MOD_0_UNION */
#define SOC_SMART_OFFSET_VOLTAGE_MOD_0_ADDR(base)     ((base) + (0x1A3))

/* �Ĵ���˵������ѹƫ�õ���[15:8]�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_OFFSET_VOLTAGE_MOD_1_UNION */
#define SOC_SMART_OFFSET_VOLTAGE_MOD_1_ADDR(base)     ((base) + (0x1A4))

/* �Ĵ���˵�������ؼƱ���1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLJ_RESERVED1_UNION */
#define SOC_SMART_CLJ_RESERVED1_ADDR(base)            ((base) + (0x1A5))

/* �Ĵ���˵�������ؼƱ���2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLJ_RESERVED2_UNION */
#define SOC_SMART_CLJ_RESERVED2_ADDR(base)            ((base) + (0x1A6))

/* �Ĵ���˵�������ؼƱ���3�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLJ_RESERVED3_UNION */
#define SOC_SMART_CLJ_RESERVED3_ADDR(base)            ((base) + (0x1A7))

/* �Ĵ���˵�������ؼƱ���4�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLJ_RESERVED4_UNION */
#define SOC_SMART_CLJ_RESERVED4_ADDR(base)            ((base) + (0x1A8))

/* �Ĵ���˵�������ؼƱ���5�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLJ_RESERVED5_UNION */
#define SOC_SMART_CLJ_RESERVED5_ADDR(base)            ((base) + (0x1A9))

/* �Ĵ���˵�������ؼƱ���6�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLJ_RESERVED6_UNION */
#define SOC_SMART_CLJ_RESERVED6_ADDR(base)            ((base) + (0x1AA))

/* �Ĵ���˵�������ؼƱ���7�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLJ_RESERVED7_UNION */
#define SOC_SMART_CLJ_RESERVED7_ADDR(base)            ((base) + (0x1AB))

/* �Ĵ���˵����PMU��λ�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_PMU_SOFT_RST_UNION */
#define SOC_SMART_PMU_SOFT_RST_ADDR(base)             ((base) + (0x1AC))

/* �Ĵ���˵�������ؼ�DEBUGר��1�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLJ_DEBUG_UNION */
#define SOC_SMART_CLJ_DEBUG_ADDR(base)                ((base) + (0x1AD))

/* �Ĵ���˵�������ؼ�DEBUGר��2�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_CLJ_DEBUG_2_UNION */
#define SOC_SMART_CLJ_DEBUG_2_ADDR(base)              ((base) + (0x1AE))

/* �Ĵ���˵�������ؼ�DEBUGר��3�Ĵ�����
   λ����UNION�ṹ:  SOC_SMART_STATE_TEST_UNION */
#define SOC_SMART_STATE_TEST_ADDR(base)               ((base) + (0x1AF))





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
                     (1/2) PMU_CTRL
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_SMART_VERSION_UNION
 �ṹ˵��  : VERSION �Ĵ����ṹ���塣��ַƫ����:0x000����ֵ:0x10�����:8
 �Ĵ���˵��: �汾�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  chip_id : 8;  /* bit[0-7]: �汾�Ĵ�������ʾ�汾ΪV100�� */
    } reg;
} SOC_SMART_VERSION_UNION;
#endif
#define SOC_SMART_VERSION_chip_id_START  (0)
#define SOC_SMART_VERSION_chip_id_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_STATUS1_UNION
 �ṹ˵��  : STATUS1 �Ĵ����ṹ���塣��ַƫ����:0x001����ֵ:0x00�����:8
 �Ĵ���˵��: ״̬��־1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otmp_d1r           : 1;  /* bit[0]  : 0����ǰ�¶ȵ����趨��ֵ��Ĭ��125�棩��
                                                             1����ǰ�¶ȸ����趨��ֵ�� */
        unsigned char  otmp150_d1r        : 1;  /* bit[1]  : 0����ǰ�¶ȵ���150�棻
                                                             1����ǰ�¶ȸ���150�档 */
        unsigned char  vsys_uv_d3r        : 1;  /* bit[2]  : ��ǰvsys��ѹ��
                                                             0��vsys>3.0V��
                                                             1��vsys<3.0V�� */
        unsigned char  vsys_6p0_d200ur    : 1;  /* bit[3]  : ��ǰvsys��ѹ��
                                                             0��vsys<6.0V��
                                                             1��vsys>6.0V�� */
        unsigned char  pwron_d20r         : 1;  /* bit[4]  : 0��PWRON����ǰû�б����£�
                                                             1:PWRON����ǰ������(pwronΪpwron_n�ķ���)�� */
        unsigned char  vbat_vcoin_sel_ff2 : 1;  /* bit[5]  : VBAT��VCION�л��ź�
                                                             0��VCOIN��
                                                             1��VBAT�� */
        unsigned char  reserved           : 2;  /* bit[6-7]: ������ */
    } reg;
} SOC_SMART_STATUS1_UNION;
#endif
#define SOC_SMART_STATUS1_otmp_d1r_START            (0)
#define SOC_SMART_STATUS1_otmp_d1r_END              (0)
#define SOC_SMART_STATUS1_otmp150_d1r_START         (1)
#define SOC_SMART_STATUS1_otmp150_d1r_END           (1)
#define SOC_SMART_STATUS1_vsys_uv_d3r_START         (2)
#define SOC_SMART_STATUS1_vsys_uv_d3r_END           (2)
#define SOC_SMART_STATUS1_vsys_6p0_d200ur_START     (3)
#define SOC_SMART_STATUS1_vsys_6p0_d200ur_END       (3)
#define SOC_SMART_STATUS1_pwron_d20r_START          (4)
#define SOC_SMART_STATUS1_pwron_d20r_END            (4)
#define SOC_SMART_STATUS1_vbat_vcoin_sel_ff2_START  (5)
#define SOC_SMART_STATUS1_vbat_vcoin_sel_ff2_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SMART_STATUS2_UNION
 �ṹ˵��  : STATUS2 �Ĵ����ṹ���塣��ַƫ����:0x002����ֵ:0x00�����:8
 �Ĵ���˵��: ״̬��־2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vbus_det_3p6_d20r : 1;  /* bit[0]  : vbus_det_3p6��
                                                            0: û�в��룻
                                                            1�����롣 */
        unsigned char  dcxo_clk_sel      : 1;  /* bit[1]  : DCXOģʽ��ǰ����ʱ��Դ��
                                                            0��32K RC ��
                                                            1��19.2MHz/600 �� */
        unsigned char  tcxo_clk_sel      : 1;  /* bit[2]  : TCXOģʽ��ǰ����ʱ��Դ��
                                                            0��32K RC ��
                                                            1��32K Crystal OSC �� */
        unsigned char  xo_mode_a2d_ff2   : 1;  /* bit[3]  : оƬ��ǰ����ģʽ��
                                                            0��DCXO
                                                            1��TCXO */
        unsigned char  reserved          : 4;  /* bit[4-7]: ������ */
    } reg;
} SOC_SMART_STATUS2_UNION;
#endif
#define SOC_SMART_STATUS2_vbus_det_3p6_d20r_START  (0)
#define SOC_SMART_STATUS2_vbus_det_3p6_d20r_END    (0)
#define SOC_SMART_STATUS2_dcxo_clk_sel_START       (1)
#define SOC_SMART_STATUS2_dcxo_clk_sel_END         (1)
#define SOC_SMART_STATUS2_tcxo_clk_sel_START       (2)
#define SOC_SMART_STATUS2_tcxo_clk_sel_END         (2)
#define SOC_SMART_STATUS2_xo_mode_a2d_ff2_START    (3)
#define SOC_SMART_STATUS2_xo_mode_a2d_ff2_END      (3)


/*****************************************************************************
 �ṹ��    : SOC_SMART_IRQ1_UNION
 �ṹ˵��  : IRQ1 �Ĵ����ṹ���塣��ַƫ����:0x003����ֵ:0x00�����:8
 �Ĵ���˵��: �ж�1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otmp_d1r        : 1;  /* bit[0]: 0:�޴��жϣ�
                                                        1��otmp ���¶ȳ����趨��ֵ��Ĭ��125�ȣ��жϡ� */
        unsigned char  vsys_2p5_r      : 1;  /* bit[1]: 0:�޴��жϣ�
                                                        1:vsys��ѹ����2.5V�жϡ� */
        unsigned char  vsys_uv_d3r     : 1;  /* bit[2]: 0:�޴��жϣ�
                                                        1:vsys��ѹ����3.0V 3ms�жϡ�(Ĭ��3V�����µ�Ĵ���vsys_uv_adj�ɵ�) */
        unsigned char  vsys_6p0_d200ur : 1;  /* bit[3]: 0���޴��жϣ�
                                                        1:vsys����ѹ����6.0V 200us�жϡ� */
        unsigned char  pwron_d4sr      : 1;  /* bit[4]: 0:�޴��жϣ�
                                                        1:PWRON��������4s�ж�(���ж�ֻ����������ʱ���²��ϱ�) �� */
        unsigned char  pwron_d20f      : 1;  /* bit[5]: 0:�޴��жϣ�
                                                        1:PWRON�����ͷ�20ms�жϡ� */
        unsigned char  pwron_d20r      : 1;  /* bit[6]: 0:�޴��жϣ�
                                                        1:PWRON��������20ms�жϡ� */
        unsigned char  reserved        : 1;  /* bit[7]: ������ */
    } reg;
} SOC_SMART_IRQ1_UNION;
#endif
#define SOC_SMART_IRQ1_otmp_d1r_START         (0)
#define SOC_SMART_IRQ1_otmp_d1r_END           (0)
#define SOC_SMART_IRQ1_vsys_2p5_r_START       (1)
#define SOC_SMART_IRQ1_vsys_2p5_r_END         (1)
#define SOC_SMART_IRQ1_vsys_uv_d3r_START      (2)
#define SOC_SMART_IRQ1_vsys_uv_d3r_END        (2)
#define SOC_SMART_IRQ1_vsys_6p0_d200ur_START  (3)
#define SOC_SMART_IRQ1_vsys_6p0_d200ur_END    (3)
#define SOC_SMART_IRQ1_pwron_d4sr_START       (4)
#define SOC_SMART_IRQ1_pwron_d4sr_END         (4)
#define SOC_SMART_IRQ1_pwron_d20f_START       (5)
#define SOC_SMART_IRQ1_pwron_d20f_END         (5)
#define SOC_SMART_IRQ1_pwron_d20r_START       (6)
#define SOC_SMART_IRQ1_pwron_d20r_END         (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_IRQ2_UNION
 �ṹ˵��  : IRQ2 �Ĵ����ṹ���塣��ַƫ����:0x004����ֵ:0x00�����:8
 �Ĵ���˵��: �ж�2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vbus_det_3p6_d20f : 1;  /* bit[0]  : 0:�޴��жϣ�
                                                            1:vbus_det<3.6 V 20ms�жϡ� */
        unsigned char  vbus_det_3p6_d20r : 1;  /* bit[1]  : 0:�޴��жϣ�
                                                            1:vbus_det>3.6 V 20ms�жϡ� */
        unsigned char  ocp_scp_r         : 1;  /* bit[2]  : 0:�޴��жϣ�
                                                            1:��ʾ������һ��BUCK���������������߶�·����������CLASSD/LDO/LVS/��������������CPU��ѯ����Ҫȥ�鿴����Ĺ�������Ĵ����鿴����һ������������������д1����ж������� */
        unsigned char  reserved          : 5;  /* bit[3-7]: ������ */
    } reg;
} SOC_SMART_IRQ2_UNION;
#endif
#define SOC_SMART_IRQ2_vbus_det_3p6_d20f_START  (0)
#define SOC_SMART_IRQ2_vbus_det_3p6_d20f_END    (0)
#define SOC_SMART_IRQ2_vbus_det_3p6_d20r_START  (1)
#define SOC_SMART_IRQ2_vbus_det_3p6_d20r_END    (1)
#define SOC_SMART_IRQ2_ocp_scp_r_START          (2)
#define SOC_SMART_IRQ2_ocp_scp_r_END            (2)


/*****************************************************************************
 �ṹ��    : SOC_SMART_IRQ3_UNION
 �ṹ˵��  : IRQ3 �Ĵ����ṹ���塣��ַƫ����:0x005����ֵ:0x00�����:8
 �Ĵ���˵��: �ж�3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  tcxo_clk_sel_r : 1;  /* bit[0]  : 0���޴��жϣ�
                                                         1��32kRC�л���32K Crystal OSC ʱ�ӣ� */
        unsigned char  tcxo_clk_sel_f : 1;  /* bit[1]  : 0���޴��жϣ�
                                                         1��32K Crystal OSC �л���32kRCʱ�ӣ� */
        unsigned char  dcxo_clk_sel_r : 1;  /* bit[2]  : 0���޴��жϣ�
                                                         1��32K RC �л���19.2MHz/600 ʱ�ӣ� */
        unsigned char  dcxo_clk_sel_f : 1;  /* bit[3]  : 0���޴��жϣ�
                                                         1��19.2MHz/600 �л���32K RCʱ�ӣ� */
        unsigned char  alarm_on       : 1;  /* bit[4]  : ALARM_ON�жϣ�
                                                         0:�޴��жϣ�
                                                         1����RTCʱ����alarmʱ����ͬʱ,�ϱ��жϡ� */
        unsigned char  reserved       : 3;  /* bit[5-7]: ������ */
    } reg;
} SOC_SMART_IRQ3_UNION;
#endif
#define SOC_SMART_IRQ3_tcxo_clk_sel_r_START  (0)
#define SOC_SMART_IRQ3_tcxo_clk_sel_r_END    (0)
#define SOC_SMART_IRQ3_tcxo_clk_sel_f_START  (1)
#define SOC_SMART_IRQ3_tcxo_clk_sel_f_END    (1)
#define SOC_SMART_IRQ3_dcxo_clk_sel_r_START  (2)
#define SOC_SMART_IRQ3_dcxo_clk_sel_r_END    (2)
#define SOC_SMART_IRQ3_dcxo_clk_sel_f_START  (3)
#define SOC_SMART_IRQ3_dcxo_clk_sel_f_END    (3)
#define SOC_SMART_IRQ3_alarm_on_START        (4)
#define SOC_SMART_IRQ3_alarm_on_END          (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_COUL_IRQ_UNION
 �ṹ˵��  : COUL_IRQ �Ĵ����ṹ���塣��ַƫ����:0x006����ֵ:0x00�����:8
 �Ĵ���˵��: ���ؼ��жϼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  cl_int_i   : 1;  /* bit[0]  : cl_out>cl_intʱ�ϱ��жϡ�
                                                     0���޴��жϣ�
                                                     1���ϱ��жϡ� */
        unsigned char  cl_out_i   : 1;  /* bit[1]  : cl_out������81%�ϱ��жϡ�
                                                     0���޴��жϣ�
                                                     1���ϱ��жϡ� */
        unsigned char  cl_in_i    : 1;  /* bit[2]  : cl_in������81%�ϱ��жϡ�
                                                     0���޴��жϣ�
                                                     1���ϱ��жϡ� */
        unsigned char  vbat_int_i : 1;  /* bit[3]  : vbat��ѹ<�趨��vbat_intֵ��
                                                     0���޴��жϣ�
                                                     1���ϱ��жϡ� */
        unsigned char  reserved   : 4;  /* bit[4-7]:  */
    } reg;
} SOC_SMART_COUL_IRQ_UNION;
#endif
#define SOC_SMART_COUL_IRQ_cl_int_i_START    (0)
#define SOC_SMART_COUL_IRQ_cl_int_i_END      (0)
#define SOC_SMART_COUL_IRQ_cl_out_i_START    (1)
#define SOC_SMART_COUL_IRQ_cl_out_i_END      (1)
#define SOC_SMART_COUL_IRQ_cl_in_i_START     (2)
#define SOC_SMART_COUL_IRQ_cl_in_i_END       (2)
#define SOC_SMART_COUL_IRQ_vbat_int_i_START  (3)
#define SOC_SMART_COUL_IRQ_vbat_int_i_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_SMART_IRQ1_MASK_UNION
 �ṹ˵��  : IRQ1_MASK �Ĵ����ṹ���塣��ַƫ����:0x007����ֵ:0x00�����:8
 �Ĵ���˵��: �ж�����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otmp_d1r_mk        : 1;  /* bit[0]: 0:ʹ�ܸ��жϣ�
                                                           1�����θ��жϡ� */
        unsigned char  vsys_2p5_r_mk      : 1;  /* bit[1]: 0:ʹ�ܸ��жϣ�
                                                           1�����θ��жϡ� */
        unsigned char  vsys_uv_d3r_mk     : 1;  /* bit[2]: 0:ʹ�ܸ��жϣ�
                                                           1�����θ��жϡ� */
        unsigned char  vsys_6p0_d200ur_mk : 1;  /* bit[3]: 0:ʹ�ܸ��жϣ�
                                                           1�����θ��жϡ� */
        unsigned char  pwron_d4sr_mk      : 1;  /* bit[4]: 0:ʹ�ܸ��жϣ�
                                                           1�����θ��жϡ� */
        unsigned char  pwron_d20f_mk      : 1;  /* bit[5]: 0:ʹ�ܸ��жϣ�
                                                           1�����θ��жϡ� */
        unsigned char  pwron_d20r_mk      : 1;  /* bit[6]: 0:ʹ�ܸ��жϣ�
                                                           1�����θ��жϡ� */
        unsigned char  reserved           : 1;  /* bit[7]: ������ */
    } reg;
} SOC_SMART_IRQ1_MASK_UNION;
#endif
#define SOC_SMART_IRQ1_MASK_otmp_d1r_mk_START         (0)
#define SOC_SMART_IRQ1_MASK_otmp_d1r_mk_END           (0)
#define SOC_SMART_IRQ1_MASK_vsys_2p5_r_mk_START       (1)
#define SOC_SMART_IRQ1_MASK_vsys_2p5_r_mk_END         (1)
#define SOC_SMART_IRQ1_MASK_vsys_uv_d3r_mk_START      (2)
#define SOC_SMART_IRQ1_MASK_vsys_uv_d3r_mk_END        (2)
#define SOC_SMART_IRQ1_MASK_vsys_6p0_d200ur_mk_START  (3)
#define SOC_SMART_IRQ1_MASK_vsys_6p0_d200ur_mk_END    (3)
#define SOC_SMART_IRQ1_MASK_pwron_d4sr_mk_START       (4)
#define SOC_SMART_IRQ1_MASK_pwron_d4sr_mk_END         (4)
#define SOC_SMART_IRQ1_MASK_pwron_d20f_mk_START       (5)
#define SOC_SMART_IRQ1_MASK_pwron_d20f_mk_END         (5)
#define SOC_SMART_IRQ1_MASK_pwron_d20r_mk_START       (6)
#define SOC_SMART_IRQ1_MASK_pwron_d20r_mk_END         (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_IRQ2_MASK_UNION
 �ṹ˵��  : IRQ2_MASK �Ĵ����ṹ���塣��ַƫ����:0x008����ֵ:0x00�����:8
 �Ĵ���˵��: �ж�����2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vbus_det_3p6_d20f_mk : 1;  /* bit[0]  : 0:ʹ�ܸ��жϣ�
                                                               1�����θ��жϡ� */
        unsigned char  vbus_det_3p6_d20r_mk : 1;  /* bit[1]  : 0:ʹ�ܸ��жϣ�
                                                               1�����θ��жϡ� */
        unsigned char  ocp_scp_r_mk         : 1;  /* bit[2]  : 0:ʹ�ܸ��жϣ�
                                                               1�����θ��жϡ� */
        unsigned char  reserved             : 5;  /* bit[3-7]: ������ */
    } reg;
} SOC_SMART_IRQ2_MASK_UNION;
#endif
#define SOC_SMART_IRQ2_MASK_vbus_det_3p6_d20f_mk_START  (0)
#define SOC_SMART_IRQ2_MASK_vbus_det_3p6_d20f_mk_END    (0)
#define SOC_SMART_IRQ2_MASK_vbus_det_3p6_d20r_mk_START  (1)
#define SOC_SMART_IRQ2_MASK_vbus_det_3p6_d20r_mk_END    (1)
#define SOC_SMART_IRQ2_MASK_ocp_scp_r_mk_START          (2)
#define SOC_SMART_IRQ2_MASK_ocp_scp_r_mk_END            (2)


/*****************************************************************************
 �ṹ��    : SOC_SMART_IRQ3_MASK_UNION
 �ṹ˵��  : IRQ3_MASK �Ĵ����ṹ���塣��ַƫ����:0x009����ֵ:0x00�����:8
 �Ĵ���˵��: �ж�����3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  tcxo_clk_sel_r_mk : 1;  /* bit[0]  : 0:ʹ�ܸ��жϣ�
                                                            1�����θ��жϡ� */
        unsigned char  tcxo_clk_sel_f_mk : 1;  /* bit[1]  : 0:ʹ�ܸ��жϣ�
                                                            1�����θ��жϡ� */
        unsigned char  dcxo_clk_sel_r_mk : 1;  /* bit[2]  : 0:ʹ�ܸ��жϣ�
                                                            1�����θ��жϡ� */
        unsigned char  dcxo_clk_sel_f_mk : 1;  /* bit[3]  : 0:ʹ�ܸ��жϣ�
                                                            1�����θ��жϡ� */
        unsigned char  alarm_on_mk       : 1;  /* bit[4]  : ALARM_ON�жϣ�
                                                            0:ʹ�ܸ��жϣ�
                                                            1�����θ��жϡ� */
        unsigned char  reserved          : 3;  /* bit[5-7]: ������ */
    } reg;
} SOC_SMART_IRQ3_MASK_UNION;
#endif
#define SOC_SMART_IRQ3_MASK_tcxo_clk_sel_r_mk_START  (0)
#define SOC_SMART_IRQ3_MASK_tcxo_clk_sel_r_mk_END    (0)
#define SOC_SMART_IRQ3_MASK_tcxo_clk_sel_f_mk_START  (1)
#define SOC_SMART_IRQ3_MASK_tcxo_clk_sel_f_mk_END    (1)
#define SOC_SMART_IRQ3_MASK_dcxo_clk_sel_r_mk_START  (2)
#define SOC_SMART_IRQ3_MASK_dcxo_clk_sel_r_mk_END    (2)
#define SOC_SMART_IRQ3_MASK_dcxo_clk_sel_f_mk_START  (3)
#define SOC_SMART_IRQ3_MASK_dcxo_clk_sel_f_mk_END    (3)
#define SOC_SMART_IRQ3_MASK_alarm_on_mk_START        (4)
#define SOC_SMART_IRQ3_MASK_alarm_on_mk_END          (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_COUL_IRQ_MASK_UNION
 �ṹ˵��  : COUL_IRQ_MASK �Ĵ����ṹ���塣��ַƫ����:0x00A����ֵ:0x00�����:8
 �Ĵ���˵��: ���ؼ��ж����μĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  cl_int_i_mk   : 1;  /* bit[0]  : cl_int_i�ж�����λ��
                                                        0�������Σ�
                                                        1��cl_int_i�ж����Ρ� */
        unsigned char  cl_out_i_mk   : 1;  /* bit[1]  : cl_out_i�ж�����λ��
                                                        0�������Σ�
                                                        1��cl_out_i�ж����Ρ� */
        unsigned char  cl_in_i_mk    : 1;  /* bit[2]  : cl_in_i�ж�����λ��
                                                        0�������Σ�
                                                        1��cl_in_i�ж����Ρ� */
        unsigned char  vbat_int_i_mk : 1;  /* bit[3]  : vbat_int_i�ж�����λ��
                                                        0�������Σ�
                                                        1��vbat_int_i�ж����Ρ� */
        unsigned char  reserved      : 4;  /* bit[4-7]: ������ */
    } reg;
} SOC_SMART_COUL_IRQ_MASK_UNION;
#endif
#define SOC_SMART_COUL_IRQ_MASK_cl_int_i_mk_START    (0)
#define SOC_SMART_COUL_IRQ_MASK_cl_int_i_mk_END      (0)
#define SOC_SMART_COUL_IRQ_MASK_cl_out_i_mk_START    (1)
#define SOC_SMART_COUL_IRQ_MASK_cl_out_i_mk_END      (1)
#define SOC_SMART_COUL_IRQ_MASK_cl_in_i_mk_START     (2)
#define SOC_SMART_COUL_IRQ_MASK_cl_in_i_mk_END       (2)
#define SOC_SMART_COUL_IRQ_MASK_vbat_int_i_mk_START  (3)
#define SOC_SMART_COUL_IRQ_MASK_vbat_int_i_mk_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_SMART_SCP_BUCK_RECORD1_UNION
 �ṹ˵��  : SCP_BUCK_RECORD1 �Ĵ����ṹ���塣��ַƫ����:0x00B����ֵ:0x00�����:8
 �Ĵ���˵��: ��·������¼1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  scp_buck01 : 1;  /* bit[0]  : 0��BUCK01�������·��
                                                     1: BUCK01�����·�� */
        unsigned char  scp_buck2  : 1;  /* bit[1]  : 0��BUCK2�������·��
                                                     1: BUCK2�����·�� */
        unsigned char  scp_buck3  : 1;  /* bit[2]  : 0��BUCK3�������·��
                                                     1: BUCK3�����·�� */
        unsigned char  scp_buck4  : 1;  /* bit[3]  : 0��BUCK4�������·��
                                                     1: BUCK4�����·�� */
        unsigned char  reserved   : 4;  /* bit[4-7]: ������ */
    } reg;
} SOC_SMART_SCP_BUCK_RECORD1_UNION;
#endif
#define SOC_SMART_SCP_BUCK_RECORD1_scp_buck01_START  (0)
#define SOC_SMART_SCP_BUCK_RECORD1_scp_buck01_END    (0)
#define SOC_SMART_SCP_BUCK_RECORD1_scp_buck2_START   (1)
#define SOC_SMART_SCP_BUCK_RECORD1_scp_buck2_END     (1)
#define SOC_SMART_SCP_BUCK_RECORD1_scp_buck3_START   (2)
#define SOC_SMART_SCP_BUCK_RECORD1_scp_buck3_END     (2)
#define SOC_SMART_SCP_BUCK_RECORD1_scp_buck4_START   (3)
#define SOC_SMART_SCP_BUCK_RECORD1_scp_buck4_END     (3)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCP_BUCK_RECORD1_UNION
 �ṹ˵��  : OCP_BUCK_RECORD1 �Ĵ����ṹ���塣��ַƫ����:0x00C����ֵ:0x00�����:8
 �Ĵ���˵��: ����������¼1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp_buck1 : 1;  /* bit[0]  : 0��BUCK1��������أ�
                                                    1: BUCK1������ء� */
        unsigned char  ocp_buck2 : 1;  /* bit[1]  : 0��BUCK2��������أ�
                                                    1: BUCK2������ء� */
        unsigned char  ocp_buck3 : 1;  /* bit[2]  : 0��BUCK3��������أ�
                                                    1: BUCK3������ء� */
        unsigned char  ocp_buck4 : 1;  /* bit[3]  : 0��BUCK4��������أ�
                                                    1: BUCK4������ء� */
        unsigned char  ocp_buck0 : 1;  /* bit[4]  : 0��BUCK0��������أ�
                                                    1: BUCK0������ء� */
        unsigned char  reserved  : 3;  /* bit[5-7]: ������ */
    } reg;
} SOC_SMART_OCP_BUCK_RECORD1_UNION;
#endif
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck1_START  (0)
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck1_END    (0)
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck2_START  (1)
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck2_END    (1)
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck3_START  (2)
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck3_END    (2)
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck4_START  (3)
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck4_END    (3)
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck0_START  (4)
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck0_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCP_LDO1_8_RECORD2_UNION
 �ṹ˵��  : OCP_LDO1_8_RECORD2 �Ĵ����ṹ���塣��ַƫ����:0x00D����ֵ:0x00�����:8
 �Ĵ���˵��: ����������¼2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp_ldo1 : 1;  /* bit[0]: 0��LDO1��������أ�
                                                 1: LDO1������ء� */
        unsigned char  ocp_ldo2 : 1;  /* bit[1]: 0��LDO2��������أ�
                                                 1: LDO2������ء� */
        unsigned char  ocp_ldo3 : 1;  /* bit[2]: 0��LDO3��������أ�
                                                 1: LDO3������ء� */
        unsigned char  ocp_ldo4 : 1;  /* bit[3]: 0��LDO4��������أ�
                                                 1: LDO4������ء� */
        unsigned char  ocp_ldo5 : 1;  /* bit[4]: 0��LDO5��������أ�
                                                 1: LDO5������ء� */
        unsigned char  ocp_ldo6 : 1;  /* bit[5]: 0��LDO6��������أ�
                                                 1: LDO6������ء� */
        unsigned char  ocp_ldo7 : 1;  /* bit[6]: 0��LDO7��������أ�
                                                 1: LDO7������ء� */
        unsigned char  ocp_ldo8 : 1;  /* bit[7]: 0��LDO8��������أ�
                                                 1: LDO8������ء� */
    } reg;
} SOC_SMART_OCP_LDO1_8_RECORD2_UNION;
#endif
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo1_START  (0)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo1_END    (0)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo2_START  (1)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo2_END    (1)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo3_START  (2)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo3_END    (2)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo4_START  (3)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo4_END    (3)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo5_START  (4)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo5_END    (4)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo6_START  (5)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo6_END    (5)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo7_START  (6)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo7_END    (6)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo8_START  (7)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo8_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCP_LDO16_9_RECORD3_UNION
 �ṹ˵��  : OCP_LDO16_9_RECORD3 �Ĵ����ṹ���塣��ַƫ����:0x00E����ֵ:0x00�����:8
 �Ĵ���˵��: ����������¼3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp_ldo9  : 1;  /* bit[0]: 0��LDO9��������أ�
                                                  1: LDO9������ء� */
        unsigned char  ocp_ldo10 : 1;  /* bit[1]: 0��LDO10��������أ�
                                                  1: LDO10������ء� */
        unsigned char  ocp_ldo11 : 1;  /* bit[2]: 0��LDO11��������أ�
                                                  1: LDO11������ء� */
        unsigned char  ocp_ldo12 : 1;  /* bit[3]: 0��LDO12��������أ�
                                                  1: LDO12������ء� */
        unsigned char  ocp_ldo13 : 1;  /* bit[4]: 0��LDO13��������أ�
                                                  1: LDO13������ء� */
        unsigned char  ocp_ldo14 : 1;  /* bit[5]: 0��LDO14��������أ�
                                                  1: LDO14������ء� */
        unsigned char  ocp_ldo15 : 1;  /* bit[6]: 0��LDO15��������أ�
                                                  1: LDO15������ء� */
        unsigned char  ocp_ldo16 : 1;  /* bit[7]: 0��LDO16��������أ�
                                                  1: LDO16������ء� */
    } reg;
} SOC_SMART_OCP_LDO16_9_RECORD3_UNION;
#endif
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo9_START   (0)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo9_END     (0)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo10_START  (1)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo10_END    (1)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo11_START  (2)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo11_END    (2)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo12_START  (3)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo12_END    (3)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo13_START  (4)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo13_END    (4)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo14_START  (5)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo14_END    (5)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo15_START  (6)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo15_END    (6)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo16_START  (7)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo16_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCP_LDO22_17_RECORD4_UNION
 �ṹ˵��  : OCP_LDO22_17_RECORD4 �Ĵ����ṹ���塣��ַƫ����:0x00F����ֵ:0x00�����:8
 �Ĵ���˵��: ����������¼4�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp_ldo17 : 1;  /* bit[0]  : 0��LDO17��������أ�
                                                    1: LDO17������ء� */
        unsigned char  ocp_ldo18 : 1;  /* bit[1]  : 0��LDO18��������أ�
                                                    1: LDO18������ء� */
        unsigned char  ocp_ldo19 : 1;  /* bit[2]  : 0��LDO19��������أ�
                                                    1: LDO19������ء� */
        unsigned char  ocp_ldo20 : 1;  /* bit[3]  : 0��LDO20��������أ�
                                                    1: LDO20������ء� */
        unsigned char  ocp_ldo21 : 1;  /* bit[4]  : 0��LDO21��������أ�
                                                    1: LDO21������ء� */
        unsigned char  ocp_ldo22 : 1;  /* bit[5]  : 0��LDO22��������أ�
                                                    1: LDO22������ء� */
        unsigned char  reserved  : 2;  /* bit[6-7]: ������ */
    } reg;
} SOC_SMART_OCP_LDO22_17_RECORD4_UNION;
#endif
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo17_START  (0)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo17_END    (0)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo18_START  (1)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo18_END    (1)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo19_START  (2)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo19_END    (2)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo20_START  (3)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo20_END    (3)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo21_START  (4)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo21_END    (4)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo22_START  (5)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo22_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCP_CLASSD_LVS2_RECORD5_UNION
 �ṹ˵��  : OCP_CLASSD_LVS2_RECORD5 �Ĵ����ṹ���塣��ַƫ����:0x010����ֵ:0x00�����:8
 �Ĵ���˵��: ����������¼5�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp_lvs2   : 1;  /* bit[0]  : 0��LVS2��������أ�
                                                     1: LVS2������ء� */
        unsigned char  ocp_classd : 1;  /* bit[1]  : 0��CLASSD�����������
                                                     1: CLASSD��������� */
        unsigned char  scp_pmua   : 1;  /* bit[2]  : 0��PMUA�������·��
                                                     1: PMUA�������·�� */
        unsigned char  reserved   : 5;  /* bit[3-7]: ������ */
    } reg;
} SOC_SMART_OCP_CLASSD_LVS2_RECORD5_UNION;
#endif
#define SOC_SMART_OCP_CLASSD_LVS2_RECORD5_ocp_lvs2_START    (0)
#define SOC_SMART_OCP_CLASSD_LVS2_RECORD5_ocp_lvs2_END      (0)
#define SOC_SMART_OCP_CLASSD_LVS2_RECORD5_ocp_classd_START  (1)
#define SOC_SMART_OCP_CLASSD_LVS2_RECORD5_ocp_classd_END    (1)
#define SOC_SMART_OCP_CLASSD_LVS2_RECORD5_scp_pmua_START    (2)
#define SOC_SMART_OCP_CLASSD_LVS2_RECORD5_scp_pmua_END      (2)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCP_DEB0_UNION
 �ṹ˵��  : OCP_DEB0 �Ĵ����ṹ���塣��ַƫ����:0x01A����ֵ:0x00�����:8
 �Ĵ���˵��: OCPȥ��������0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  en_classd_ocp_deb : 1;  /* bit[0]  : 0��CLASSD OCP�����ز�ȥ����
                                                            1��CLASSD OCP������ȥ���� */
        unsigned char  ocp_buck_deb_sel  : 2;  /* bit[1-2]: BUCK ��ocpȥ��ʱ�䣺
                                                            00��500us��
                                                            01��1ms��
                                                            10��2ms��
                                                            11��4ms�� */
        unsigned char  en_buck_ocp_deb   : 1;  /* bit[3]  : 0��BUCK OCP�����ز�ȥ����
                                                            1��BUCK OCP������ȥ���� */
        unsigned char  scp_buck_deb_sel  : 2;  /* bit[4-5]: BUCK ��scpȥ��ʱ�䣺
                                                            00��500us��
                                                            01��1ms��
                                                            10��2ms��
                                                            11��4ms�� */
        unsigned char  en_buck_scp_deb   : 1;  /* bit[6]  : 0��BUCK SCP�����ز�ȥ����
                                                            1��BUCK SCP������ȥ����
                                                            ע��SCP��ʾ��·������ */
        unsigned char  reserved          : 1;  /* bit[7]  : ������ */
    } reg;
} SOC_SMART_OCP_DEB0_UNION;
#endif
#define SOC_SMART_OCP_DEB0_en_classd_ocp_deb_START  (0)
#define SOC_SMART_OCP_DEB0_en_classd_ocp_deb_END    (0)
#define SOC_SMART_OCP_DEB0_ocp_buck_deb_sel_START   (1)
#define SOC_SMART_OCP_DEB0_ocp_buck_deb_sel_END     (2)
#define SOC_SMART_OCP_DEB0_en_buck_ocp_deb_START    (3)
#define SOC_SMART_OCP_DEB0_en_buck_ocp_deb_END      (3)
#define SOC_SMART_OCP_DEB0_scp_buck_deb_sel_START   (4)
#define SOC_SMART_OCP_DEB0_scp_buck_deb_sel_END     (5)
#define SOC_SMART_OCP_DEB0_en_buck_scp_deb_START    (6)
#define SOC_SMART_OCP_DEB0_en_buck_scp_deb_END      (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCP_DEB1_UNION
 �ṹ˵��  : OCP_DEB1 �Ĵ����ṹ���塣��ַƫ����:0x01B����ֵ:0x7D�����:8
 �Ĵ���˵��: OCPȥ��������1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp_ldo_deb_sel    : 2;  /* bit[0-1]: ocpȥ��ʱ�䣺
                                                             00��500us��
                                                             01��1ms��
                                                             10��2ms��
                                                             11��4ms�� */
        unsigned char  en_ldo_ocp_deb     : 1;  /* bit[2]  : 0��LDO OCP�����ز�ȥ����
                                                             1��LDO OCP������ȥ���� */
        unsigned char  ocp_lvs_deb_sel    : 2;  /* bit[3-4]: LVS ��ocpȥ��ʱ�䣺
                                                             00��500us��
                                                             01��1ms��
                                                             10��2ms��
                                                             11��4ms�� */
        unsigned char  en_lvs_ocp_deb     : 1;  /* bit[5]  : 0��LVS OCP������ȥ����
                                                             1��LVS OCP����ȥ���� */
        unsigned char  ocp_classd_deb_sel : 2;  /* bit[6-7]: CLASSD��ocpȥ��ʱ�䣺��
                                                             00��500us��
                                                             01��1ms��
                                                             10��2ms��
                                                             11��4ms�� */
    } reg;
} SOC_SMART_OCP_DEB1_UNION;
#endif
#define SOC_SMART_OCP_DEB1_ocp_ldo_deb_sel_START     (0)
#define SOC_SMART_OCP_DEB1_ocp_ldo_deb_sel_END       (1)
#define SOC_SMART_OCP_DEB1_en_ldo_ocp_deb_START      (2)
#define SOC_SMART_OCP_DEB1_en_ldo_ocp_deb_END        (2)
#define SOC_SMART_OCP_DEB1_ocp_lvs_deb_sel_START     (3)
#define SOC_SMART_OCP_DEB1_ocp_lvs_deb_sel_END       (4)
#define SOC_SMART_OCP_DEB1_en_lvs_ocp_deb_START      (5)
#define SOC_SMART_OCP_DEB1_en_lvs_ocp_deb_END        (5)
#define SOC_SMART_OCP_DEB1_ocp_classd_deb_sel_START  (6)
#define SOC_SMART_OCP_DEB1_ocp_classd_deb_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ONOFF8_UNION
 �ṹ˵��  : ONOFF8 �Ĵ����ṹ���塣��ַƫ����:0x01C����ֵ:0x9F�����:8
 �Ĵ���˵��: ���ؿ���8�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vbus_det_3p6_ctrl : 1;  /* bit[0]: 0������vbus_det<3.6V��⣻
                                                          1:������vbus_det<3.6V��⡣ */
        unsigned char  vsys_2p5_ctrl     : 1;  /* bit[1]: 0������vsys< 2.5V��⣻
                                                          1:������vsys<2.5V��⡣ */
        unsigned char  vsys_uv_ctrl      : 1;  /* bit[2]: 0������vsys< 3.0V��⣻
                                                          1:������vsys<3.0V��⡣ */
        unsigned char  vsys_6p0_ctrl     : 1;  /* bit[3]: 0������vsys>6.0V��⣻
                                                          1:������vsys>6.0��⡣ */
        unsigned char  otmp150_ctrl      : 1;  /* bit[4]: 0�����£�150�棩���ػ���
                                                          1������(150��)�ػ��� */
        unsigned char  en_32kc           : 1;  /* bit[5]: 0���ر�CLK_32Cʱ�������
                                                          1��CLK_32C ʱ�����ʹ�ܡ� */
        unsigned char  en_32kb           : 1;  /* bit[6]: 0���ر�CLK_32B ʱ�������
                                                          1��CLK_32B ʱ�����ʹ�ܡ� */
        unsigned char  en_32ka           : 1;  /* bit[7]: 0���ر�CLK_32A ʱ�������
                                                          1��CLK_32A ʱ�����ʹ�ܡ� */
    } reg;
} SOC_SMART_ONOFF8_UNION;
#endif
#define SOC_SMART_ONOFF8_vbus_det_3p6_ctrl_START  (0)
#define SOC_SMART_ONOFF8_vbus_det_3p6_ctrl_END    (0)
#define SOC_SMART_ONOFF8_vsys_2p5_ctrl_START      (1)
#define SOC_SMART_ONOFF8_vsys_2p5_ctrl_END        (1)
#define SOC_SMART_ONOFF8_vsys_uv_ctrl_START       (2)
#define SOC_SMART_ONOFF8_vsys_uv_ctrl_END         (2)
#define SOC_SMART_ONOFF8_vsys_6p0_ctrl_START      (3)
#define SOC_SMART_ONOFF8_vsys_6p0_ctrl_END        (3)
#define SOC_SMART_ONOFF8_otmp150_ctrl_START       (4)
#define SOC_SMART_ONOFF8_otmp150_ctrl_END         (4)
#define SOC_SMART_ONOFF8_en_32kc_START            (5)
#define SOC_SMART_ONOFF8_en_32kc_END              (5)
#define SOC_SMART_ONOFF8_en_32kb_START            (6)
#define SOC_SMART_ONOFF8_en_32kb_END              (6)
#define SOC_SMART_ONOFF8_en_32ka_START            (7)
#define SOC_SMART_ONOFF8_en_32ka_END              (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCP_SCP_MOD_CTRL1_UNION
 �ṹ˵��  : OCP_SCP_MOD_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x01D����ֵ:0xFF�����:8
 �Ĵ���˵��: BUCK1-4�����Ͷ�·����ģʽ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp_scp_ctrl_buck01 : 1;  /* bit[0]: ocp_scp_off_buck01����Ϊ1ʱ��
                                                            ocp_scp_ctrl_buck01:
                                                            0:�����ڹ���ģʽ2��
                                                            1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_scp_off_buck01  : 1;  /* bit[1]: 0����������·��֧��BUCK01ģ���Զ��رգ�
                                                            1���������·��֧��BUCK01ģ���Զ��رա� */
        unsigned char  ocp_scp_ctrl_buck2  : 1;  /* bit[2]: ocp_scp_off_buck2����Ϊ1ʱ��
                                                            ocp_scp_ctrl_buck2:
                                                            0:�����ڹ���ģʽ2��
                                                            1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_scp_off_buck2   : 1;  /* bit[3]: 0���������·��֧��BUCK2ģ���Զ��رգ�
                                                            1���������·��֧��BUCK2ģ���Զ��رա� */
        unsigned char  ocp_scp_ctrl_buck3  : 1;  /* bit[4]: ocp_scp_off_buck3����Ϊ1ʱ��
                                                            ocp_scp_ctrl_buck3:
                                                            0:�����ڹ���ģʽ2��
                                                            1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_scp_off_buck3   : 1;  /* bit[5]: 0���������·��֧��BUCK3ģ���Զ��رգ�
                                                            1���������·��֧��BUCK3ģ���Զ��رա� */
        unsigned char  ocp_scp_ctrl_buck4  : 1;  /* bit[6]: ocp_scp_off_buck4����Ϊ1ʱ��
                                                            ocp_scp_ctrl_buck4:
                                                            0:�����ڹ���ģʽ2��
                                                            1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_scp_off_buck4   : 1;  /* bit[7]: 0���������·��֧��BUCK4ģ���Զ��رգ�
                                                            1���������·��֧��BUCK4ģ���Զ��رա� */
    } reg;
} SOC_SMART_OCP_SCP_MOD_CTRL1_UNION;
#endif
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_ctrl_buck01_START  (0)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_ctrl_buck01_END    (0)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_off_buck01_START   (1)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_off_buck01_END     (1)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_ctrl_buck2_START   (2)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_ctrl_buck2_END     (2)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_off_buck2_START    (3)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_off_buck2_END      (3)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_ctrl_buck3_START   (4)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_ctrl_buck3_END     (4)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_off_buck3_START    (5)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_off_buck3_END      (5)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_ctrl_buck4_START   (6)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_ctrl_buck4_END     (6)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_off_buck4_START    (7)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_off_buck4_END      (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCP_MOD_CTRL3_UNION
 �ṹ˵��  : OCP_MOD_CTRL3 �Ĵ����ṹ���塣��ַƫ����:0x01E����ֵ:0xFB�����:8
 �Ĵ���˵��: LDO1-4��������ģʽ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp_ctrl_ldo1 : 1;  /* bit[0]: ocp_off_ldo1����Ϊ1ʱ��
                                                      ocp_ctrl_ldo1:
                                                      0������ģʽΪģʽ2��
                                                      1������ģʽΪģʽ3�� */
        unsigned char  ocp_off_ldo1  : 1;  /* bit[1]: 0��������֧��LDO1ģ���Զ��رգ�
                                                      1��������֧��LDO1ģ���Զ��رա� */
        unsigned char  ocp_ctrl_ldo2 : 1;  /* bit[2]: ocp_off_ldo2����Ϊ1ʱ��
                                                      ocp_ctrl_ldo2:
                                                      0������ģʽΪģʽ2��
                                                      1������ģʽΪģʽ3�� */
        unsigned char  ocp_off_ldo2  : 1;  /* bit[3]: 0��������֧��LDO2ģ���Զ��رգ�
                                                      1��������֧��LDO2ģ���Զ��رա� */
        unsigned char  ocp_ctrl_ldo3 : 1;  /* bit[4]: ocp_off_ldo3����Ϊ1ʱ��
                                                      ocp_ctrl_ldo3:
                                                      0������ģʽΪģʽ2��
                                                      1������ģʽΪģʽ3�� */
        unsigned char  ocp_off_ldo3  : 1;  /* bit[5]: 0��������֧��LDO3ģ���Զ��رգ�
                                                      1��������֧��LDO3ģ���Զ��رա� */
        unsigned char  ocp_ctrl_ldo4 : 1;  /* bit[6]: ocp_off_ldo4����Ϊ1ʱ��
                                                      ocp_ctrl_ldo4:
                                                      0:�����ڹ���ģʽ2��
                                                      1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_off_ldo4  : 1;  /* bit[7]: 0��������֧��LDO4ģ���Զ��رգ�
                                                      1��������֧��LDO4ģ���Զ��رա� */
    } reg;
} SOC_SMART_OCP_MOD_CTRL3_UNION;
#endif
#define SOC_SMART_OCP_MOD_CTRL3_ocp_ctrl_ldo1_START  (0)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_ctrl_ldo1_END    (0)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_off_ldo1_START   (1)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_off_ldo1_END     (1)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_ctrl_ldo2_START  (2)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_ctrl_ldo2_END    (2)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_off_ldo2_START   (3)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_off_ldo2_END     (3)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_ctrl_ldo3_START  (4)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_ctrl_ldo3_END    (4)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_off_ldo3_START   (5)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_off_ldo3_END     (5)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_ctrl_ldo4_START  (6)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_ctrl_ldo4_END    (6)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_off_ldo4_START   (7)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_off_ldo4_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCP_MOD_CTRL4_UNION
 �ṹ˵��  : OCP_MOD_CTRL4 �Ĵ����ṹ���塣��ַƫ����:0x01F����ֵ:0xEF�����:8
 �Ĵ���˵��: LDO5-8��������ģʽ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp_ctrl_ldo5 : 1;  /* bit[0]: ocp_off_ldo5����Ϊ1ʱ��
                                                      ocp_ctrl_ldo5:
                                                      0:�����ڹ���ģʽ2��
                                                      1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_off_ldo5  : 1;  /* bit[1]: 0��������֧��LDO5ģ���Զ��رգ�
                                                      1��������֧��LDO5ģ���Զ��رա� */
        unsigned char  ocp_ctrl_ldo6 : 1;  /* bit[2]: ocp_off_ldo6����Ϊ1ʱ��
                                                      ocp_ctrl_ldo6:
                                                      0:�����ڹ���ģʽ2��
                                                      1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_off_ldo6  : 1;  /* bit[3]: 0��������֧��LDO6ģ���Զ��رգ�
                                                      1��������֧��LDO6ģ���Զ��رա� */
        unsigned char  ocp_ctrl_ldo7 : 1;  /* bit[4]: ocp_off_ldo7����Ϊ1ʱ��
                                                      ocp_ctrl_ldo7:
                                                      0:�����ڹ���ģʽ2��
                                                      1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_off_ldo7  : 1;  /* bit[5]: 0��������֧��LDO7ģ���Զ��رգ�
                                                      1��������֧��LDO7ģ���Զ��رա� */
        unsigned char  ocp_ctrl_ldo8 : 1;  /* bit[6]: ocp_off_ldo8����Ϊ1ʱ��
                                                      ocp_ctrl_ldo8:
                                                      0:�����ڹ���ģʽ2��
                                                      1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_off_ldo8  : 1;  /* bit[7]: 0��������֧��LDO8ģ���Զ��رգ�
                                                      1��������֧��LDO8ģ���Զ��رա� */
    } reg;
} SOC_SMART_OCP_MOD_CTRL4_UNION;
#endif
#define SOC_SMART_OCP_MOD_CTRL4_ocp_ctrl_ldo5_START  (0)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_ctrl_ldo5_END    (0)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_off_ldo5_START   (1)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_off_ldo5_END     (1)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_ctrl_ldo6_START  (2)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_ctrl_ldo6_END    (2)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_off_ldo6_START   (3)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_off_ldo6_END     (3)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_ctrl_ldo7_START  (4)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_ctrl_ldo7_END    (4)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_off_ldo7_START   (5)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_off_ldo7_END     (5)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_ctrl_ldo8_START  (6)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_ctrl_ldo8_END    (6)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_off_ldo8_START   (7)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_off_ldo8_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCP_MOD_CTRL5_UNION
 �ṹ˵��  : OCP_MOD_CTRL5 �Ĵ����ṹ���塣��ַƫ����:0x020����ֵ:0xEA�����:8
 �Ĵ���˵��: LDO9-12��������ģʽ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp_ctrl_ldo9  : 1;  /* bit[0]: ocp_off_ldo9����Ϊ1ʱ��
                                                       ocp_ctrl_ldo9:
                                                       0:�����ڹ���ģʽ2��
                                                       1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_off_ldo9   : 1;  /* bit[1]: 0��������֧��LDO9ģ���Զ��رգ�
                                                       1��������֧��LDO9ģ���Զ��رա� */
        unsigned char  ocp_ctrl_ldo10 : 1;  /* bit[2]: ocp_off_ldo10����Ϊ1ʱ��
                                                       ocp_ctrl_ldo10:
                                                       0:�����ڹ���ģʽ2��
                                                       1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_off_ldo10  : 1;  /* bit[3]: 0��������֧��LDO10ģ���Զ��رգ�
                                                       1��������֧��LDO10ģ���Զ��رա� */
        unsigned char  ocp_ctrl_ldo11 : 1;  /* bit[4]: ocp_off_ldo11����Ϊ1ʱ��
                                                       ocp_ctrl_ldo11:
                                                       0:�����ڹ���ģʽ2��
                                                       1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_off_ldo11  : 1;  /* bit[5]: 0��������֧��LDO11ģ���Զ��رգ�
                                                       1��������֧��LDO11ģ���Զ��رա� */
        unsigned char  ocp_ctrl_ldo12 : 1;  /* bit[6]: ocp_off_ldo12����Ϊ1ʱ��
                                                       ocp_ctrl_ldo12:
                                                       0:�����ڹ���ģʽ2��
                                                       1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_off_ldo12  : 1;  /* bit[7]: 0��������֧��LDO12ģ���Զ��رգ�
                                                       1��������֧��LDO12ģ���Զ��رա� */
    } reg;
} SOC_SMART_OCP_MOD_CTRL5_UNION;
#endif
#define SOC_SMART_OCP_MOD_CTRL5_ocp_ctrl_ldo9_START   (0)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_ctrl_ldo9_END     (0)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_off_ldo9_START    (1)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_off_ldo9_END      (1)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_ctrl_ldo10_START  (2)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_ctrl_ldo10_END    (2)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_off_ldo10_START   (3)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_off_ldo10_END     (3)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_ctrl_ldo11_START  (4)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_ctrl_ldo11_END    (4)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_off_ldo11_START   (5)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_off_ldo11_END     (5)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_ctrl_ldo12_START  (6)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_ctrl_ldo12_END    (6)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_off_ldo12_START   (7)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_off_ldo12_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCP_MOD_CTRL6_UNION
 �ṹ˵��  : OCP_MOD_CTRL6 �Ĵ����ṹ���塣��ַƫ����:0x021����ֵ:0xAA�����:8
 �Ĵ���˵��: LDO13-16��������ģʽ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp_ctrl_ldo13 : 1;  /* bit[0]: ocp_off_ldo13����Ϊ1ʱ��
                                                       ocp_ctrl_ldo13:
                                                       0:�����ڹ���ģʽ2��
                                                       1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_off_ldo13  : 1;  /* bit[1]: 0��������֧��LDO13ģ���Զ��رգ�
                                                       1��������֧��LDO13ģ���Զ��رա� */
        unsigned char  ocp_ctrl_ldo14 : 1;  /* bit[2]: ocp_off_ldo14����Ϊ1ʱ��
                                                       ocp_ctrl_ldo14:
                                                       0:�����ڹ���ģʽ2��
                                                       1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_off_ldo14  : 1;  /* bit[3]: 0��������֧��LDO14ģ���Զ��رգ�
                                                       1��������֧��LDO14ģ���Զ��رա� */
        unsigned char  ocp_ctrl_ldo15 : 1;  /* bit[4]: ocp_off_ldo15����Ϊ1ʱ��
                                                       ocp_ctrl_ldo15:
                                                       0:�����ڹ���ģʽ2��
                                                       1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_off_ldo15  : 1;  /* bit[5]: 0��������֧��LDO15ģ���Զ��رգ�
                                                       1��������֧��LDO15ģ���Զ��رա� */
        unsigned char  ocp_ctrl_ldo16 : 1;  /* bit[6]: ocp_off_ldo16����Ϊ1ʱ��
                                                       ocp_ctrl_ldo16:
                                                       0:�����ڹ���ģʽ2��
                                                       1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_off_ldo16  : 1;  /* bit[7]: 0��������֧��LDO16ģ���Զ��رգ�
                                                       1��������֧��LDO16ģ���Զ��رա� */
    } reg;
} SOC_SMART_OCP_MOD_CTRL6_UNION;
#endif
#define SOC_SMART_OCP_MOD_CTRL6_ocp_ctrl_ldo13_START  (0)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_ctrl_ldo13_END    (0)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_off_ldo13_START   (1)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_off_ldo13_END     (1)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_ctrl_ldo14_START  (2)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_ctrl_ldo14_END    (2)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_off_ldo14_START   (3)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_off_ldo14_END     (3)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_ctrl_ldo15_START  (4)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_ctrl_ldo15_END    (4)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_off_ldo15_START   (5)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_off_ldo15_END     (5)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_ctrl_ldo16_START  (6)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_ctrl_ldo16_END    (6)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_off_ldo16_START   (7)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_off_ldo16_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCP_MOD_CTRL7_UNION
 �ṹ˵��  : OCP_MOD_CTRL7 �Ĵ����ṹ���塣��ַƫ����:0x022����ֵ:0xBE�����:8
 �Ĵ���˵��: LDO17-20��������ģʽ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp_ctrl_ldo17 : 1;  /* bit[0]: ocp_off_ldo17����Ϊ1ʱ��
                                                       ocp_ctrl_ldo17:
                                                       0:�����ڹ���ģʽ2��
                                                       1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_off_ldo17  : 1;  /* bit[1]: 0��������֧��LDO17ģ���Զ��رգ�
                                                       1��������֧��LDO17ģ���Զ��رա� */
        unsigned char  ocp_ctrl_ldo18 : 1;  /* bit[2]: ocp_off_ldo18����Ϊ1ʱ��
                                                       ocp_ctrl_ldo18:
                                                       0:LDO1��LDO18�����ڹ���ģʽ2��
                                                       1:LDO1��LDO18�����ڹ���ģʽ3�� */
        unsigned char  ocp_off_ldo18  : 1;  /* bit[3]: 0��������֧��LDO1��LDO18ģ���Զ��رգ�
                                                       1��������֧��LDO1��LDO18ģ���Զ��رա� */
        unsigned char  ocp_ctrl_ldo19 : 1;  /* bit[4]: ocp_off_ldo19����Ϊ1ʱ��
                                                       ocp_ctrl_ldo19:
                                                       0:�����ڹ���ģʽ2��
                                                       1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_off_ldo19  : 1;  /* bit[5]: 0��������֧��LDO19ģ���Զ��رգ�
                                                       1��������֧��LDO19ģ���Զ��رա� */
        unsigned char  ocp_ctrl_ldo20 : 1;  /* bit[6]: ocp_off_ldo20����Ϊ1ʱ��
                                                       ocp_ctrl_ldo20:
                                                       0������ģʽΪģʽ2��
                                                       1������ģʽΪģʽ3�� */
        unsigned char  ocp_off_ldo20  : 1;  /* bit[7]: 0��������֧��LDO20ģ���Զ��رգ�
                                                       1��������֧��LDO20ģ���Զ��رա� */
    } reg;
} SOC_SMART_OCP_MOD_CTRL7_UNION;
#endif
#define SOC_SMART_OCP_MOD_CTRL7_ocp_ctrl_ldo17_START  (0)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_ctrl_ldo17_END    (0)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_off_ldo17_START   (1)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_off_ldo17_END     (1)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_ctrl_ldo18_START  (2)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_ctrl_ldo18_END    (2)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_off_ldo18_START   (3)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_off_ldo18_END     (3)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_ctrl_ldo19_START  (4)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_ctrl_ldo19_END    (4)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_off_ldo19_START   (5)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_off_ldo19_END     (5)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_ctrl_ldo20_START  (6)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_ctrl_ldo20_END    (6)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_off_ldo20_START   (7)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_off_ldo20_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCP_MOD_CTRL8_UNION
 �ṹ˵��  : OCP_MOD_CTRL8 �Ĵ����ṹ���塣��ַƫ����:0x023����ֵ:0x0A�����:8
 �Ĵ���˵��: LDO21-ldo23��������ģʽ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp_ctrl_ldo21 : 1;  /* bit[0]  : ocp_off_ldo21����Ϊ1ʱ��
                                                         ocp_ctrl_ldo21:
                                                         0������ģʽΪģʽ2��
                                                         1������ģʽΪģʽ3�� */
        unsigned char  ocp_off_ldo21  : 1;  /* bit[1]  : 0��������֧��LDO21ģ���Զ��رգ�
                                                         1��������֧��LDO21ģ���Զ��رա� */
        unsigned char  ocp_ctrl_ldo22 : 1;  /* bit[2]  : ocp_off_ldo22����Ϊ1ʱ��
                                                         ocp_ctrl_ldo22:
                                                         0:�����ڹ���ģʽ2��
                                                         1:�����ڹ���ģʽ3�� */
        unsigned char  ocp_off_ldo22  : 1;  /* bit[3]  : 0��������֧��LDO22ģ���Զ��رգ�
                                                         1��������֧��LDO22ģ���Զ��رա� */
        unsigned char  reserved       : 4;  /* bit[4-7]: ������ */
    } reg;
} SOC_SMART_OCP_MOD_CTRL8_UNION;
#endif
#define SOC_SMART_OCP_MOD_CTRL8_ocp_ctrl_ldo21_START  (0)
#define SOC_SMART_OCP_MOD_CTRL8_ocp_ctrl_ldo21_END    (0)
#define SOC_SMART_OCP_MOD_CTRL8_ocp_off_ldo21_START   (1)
#define SOC_SMART_OCP_MOD_CTRL8_ocp_off_ldo21_END     (1)
#define SOC_SMART_OCP_MOD_CTRL8_ocp_ctrl_ldo22_START  (2)
#define SOC_SMART_OCP_MOD_CTRL8_ocp_ctrl_ldo22_END    (2)
#define SOC_SMART_OCP_MOD_CTRL8_ocp_off_ldo22_START   (3)
#define SOC_SMART_OCP_MOD_CTRL8_ocp_off_ldo22_END     (3)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCP_MOD_CTRL9_UNION
 �ṹ˵��  : OCP_MOD_CTRL9 �Ĵ����ṹ���塣��ַƫ����:0x024����ֵ:0x02�����:8
 �Ĵ���˵��: LVS2��������ģʽ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp_ctrl_lvs2 : 1;  /* bit[0]  : ocp_off_lvs2����Ϊ1ʱ��
                                                        ocp_ctrl_lvs2:
                                                        0������ģʽΪģʽ2��
                                                        1������ģʽΪģʽ3�� */
        unsigned char  ocp_off_lvs2  : 1;  /* bit[1]  : 0��������֧��LVS2ģ���Զ��رգ�
                                                        1��������֧��LVS2ģ���Զ��رա� */
        unsigned char  reserved      : 6;  /* bit[2-7]: ������ */
    } reg;
} SOC_SMART_OCP_MOD_CTRL9_UNION;
#endif
#define SOC_SMART_OCP_MOD_CTRL9_ocp_ctrl_lvs2_START  (0)
#define SOC_SMART_OCP_MOD_CTRL9_ocp_ctrl_lvs2_END    (0)
#define SOC_SMART_OCP_MOD_CTRL9_ocp_off_lvs2_START   (1)
#define SOC_SMART_OCP_MOD_CTRL9_ocp_off_lvs2_END     (1)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCP_MOD_CTRL11_UNION
 �ṹ˵��  : OCP_MOD_CTRL11 �Ĵ����ṹ���塣��ַƫ����:0x025����ֵ:0x02�����:8
 �Ĵ���˵��: CLASSD��������ģʽ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ocp_ctrl_classd : 1;  /* bit[0]  : ocp_off_classd����Ϊ1ʱ��
                                                          ocp_ctrl_classd:
                                                          0������ģʽΪģʽ2��
                                                          1������ģʽΪģʽ3�� */
        unsigned char  ocp_off_classd  : 1;  /* bit[1]  : 0��������֧��CLASSDģ���Զ��رգ�
                                                          1��������֧��CLASSDģ���Զ��رա� */
        unsigned char  reserved        : 6;  /* bit[2-7]: ������ */
    } reg;
} SOC_SMART_OCP_MOD_CTRL11_UNION;
#endif
#define SOC_SMART_OCP_MOD_CTRL11_ocp_ctrl_classd_START  (0)
#define SOC_SMART_OCP_MOD_CTRL11_ocp_ctrl_classd_END    (0)
#define SOC_SMART_OCP_MOD_CTRL11_ocp_off_classd_START   (1)
#define SOC_SMART_OCP_MOD_CTRL11_ocp_off_classd_END     (1)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ENABLE1_BUCK_UNION
 �ṹ˵��  : ENABLE1_BUCK �Ĵ����ṹ���塣��ַƫ����:0x026����ֵ:0x00�����:8
 �Ĵ���˵��: ��Դģ��ʹ��1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  en_buck01_int  : 1;  /* bit[0]  : BUCK01����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_buck2_int   : 1;  /* bit[1]  : BUCK2����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_buck3_int   : 1;  /* bit[2]  : BUCK3����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_buck4_int   : 1;  /* bit[3]  : BUCK4����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_extbuck_int : 1;  /* bit[4]  : EXTBUCK����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  reserved       : 3;  /* bit[5-7]: ������ */
    } reg;
} SOC_SMART_ENABLE1_BUCK_UNION;
#endif
#define SOC_SMART_ENABLE1_BUCK_en_buck01_int_START   (0)
#define SOC_SMART_ENABLE1_BUCK_en_buck01_int_END     (0)
#define SOC_SMART_ENABLE1_BUCK_en_buck2_int_START    (1)
#define SOC_SMART_ENABLE1_BUCK_en_buck2_int_END      (1)
#define SOC_SMART_ENABLE1_BUCK_en_buck3_int_START    (2)
#define SOC_SMART_ENABLE1_BUCK_en_buck3_int_END      (2)
#define SOC_SMART_ENABLE1_BUCK_en_buck4_int_START    (3)
#define SOC_SMART_ENABLE1_BUCK_en_buck4_int_END      (3)
#define SOC_SMART_ENABLE1_BUCK_en_extbuck_int_START  (4)
#define SOC_SMART_ENABLE1_BUCK_en_extbuck_int_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DISABLE1_BUCK_UNION
 �ṹ˵��  : DISABLE1_BUCK �Ĵ����ṹ���塣��ַƫ����:0x027����ֵ:0x00�����:8
 �Ĵ���˵��: ��Դģ��ر�1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  dis_buck01_int  : 1;  /* bit[0]  : BUCK01���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_buck2_int   : 1;  /* bit[1]  : BUCK2���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_buck3_int   : 1;  /* bit[2]  : BUCK3���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_buck4_int   : 1;  /* bit[3]  : BUCK4���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_extbuck_int : 1;  /* bit[4]  : EXTBUCK���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  reserved        : 3;  /* bit[5-7]: ������ */
    } reg;
} SOC_SMART_DISABLE1_BUCK_UNION;
#endif
#define SOC_SMART_DISABLE1_BUCK_dis_buck01_int_START   (0)
#define SOC_SMART_DISABLE1_BUCK_dis_buck01_int_END     (0)
#define SOC_SMART_DISABLE1_BUCK_dis_buck2_int_START    (1)
#define SOC_SMART_DISABLE1_BUCK_dis_buck2_int_END      (1)
#define SOC_SMART_DISABLE1_BUCK_dis_buck3_int_START    (2)
#define SOC_SMART_DISABLE1_BUCK_dis_buck3_int_END      (2)
#define SOC_SMART_DISABLE1_BUCK_dis_buck4_int_START    (3)
#define SOC_SMART_DISABLE1_BUCK_dis_buck4_int_END      (3)
#define SOC_SMART_DISABLE1_BUCK_dis_extbuck_int_START  (4)
#define SOC_SMART_DISABLE1_BUCK_dis_extbuck_int_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ONOFF_STATUS1_BUCK_UNION
 �ṹ˵��  : ONOFF_STATUS1_BUCK �Ĵ����ṹ���塣��ַƫ����:0x028����ֵ:0x1F�����:8
 �Ĵ���˵��: ��Դģ�鿪��״̬1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  st_buck01_int  : 1;  /* bit[0]  : BUCK01����״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_buck2_int   : 1;  /* bit[1]  : BUCK2����״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_buck3_int   : 1;  /* bit[2]  : BUCK3����״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_buck4_int   : 1;  /* bit[3]  : BUCK4����״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_extbuck_int : 1;  /* bit[4]  : EXTBUCK����״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  reserved       : 3;  /* bit[5-7]: ������ */
    } reg;
} SOC_SMART_ONOFF_STATUS1_BUCK_UNION;
#endif
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_buck01_int_START   (0)
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_buck01_int_END     (0)
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_buck2_int_START    (1)
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_buck2_int_END      (1)
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_buck3_int_START    (2)
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_buck3_int_END      (2)
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_buck4_int_START    (3)
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_buck4_int_END      (3)
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_extbuck_int_START  (4)
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_extbuck_int_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ENABLE2_LDO1_8_UNION
 �ṹ˵��  : ENABLE2_LDO1_8 �Ĵ����ṹ���塣��ַƫ����:0x029����ֵ:0x00�����:8
 �Ĵ���˵��: ��Դģ��ʹ��2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  en_ldo1_int      : 1;  /* bit[0]: �������� */
        unsigned char  en_ldo2_int      : 1;  /* bit[1]: LDO2����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_ldo3_buck_int : 1;  /* bit[2]: BUCK��LDO3ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_ldo4_int      : 1;  /* bit[3]: LDO4����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_ldo5_int      : 1;  /* bit[4]: LDO5����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_ldo6_int      : 1;  /* bit[5]: LDO6����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_ldo7_int      : 1;  /* bit[6]: LDO7����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_ldo8_int      : 1;  /* bit[7]: LDO8����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
    } reg;
} SOC_SMART_ENABLE2_LDO1_8_UNION;
#endif
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo1_int_START       (0)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo1_int_END         (0)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo2_int_START       (1)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo2_int_END         (1)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo3_buck_int_START  (2)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo3_buck_int_END    (2)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo4_int_START       (3)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo4_int_END         (3)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo5_int_START       (4)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo5_int_END         (4)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo6_int_START       (5)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo6_int_END         (5)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo7_int_START       (6)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo7_int_END         (6)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo8_int_START       (7)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo8_int_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DISABLE2_LDO1_8_UNION
 �ṹ˵��  : DISABLE2_LDO1_8 �Ĵ����ṹ���塣��ַƫ����:0x02A����ֵ:0x00�����:8
 �Ĵ���˵��: ��Դģ��ر�2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  dis_ldo1_int      : 1;  /* bit[0]: �������� */
        unsigned char  dis_ldo2_int      : 1;  /* bit[1]: LDO2���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo3_buck_int : 1;  /* bit[2]: BUCK��LDO3��ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo4_int      : 1;  /* bit[3]: LDO4���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo5_int      : 1;  /* bit[4]: LDO5���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo6_int      : 1;  /* bit[5]: LDO6���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo7_int      : 1;  /* bit[6]: LDO7���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo8_int      : 1;  /* bit[7]: LDO8���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
    } reg;
} SOC_SMART_DISABLE2_LDO1_8_UNION;
#endif
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo1_int_START       (0)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo1_int_END         (0)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo2_int_START       (1)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo2_int_END         (1)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo3_buck_int_START  (2)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo3_buck_int_END    (2)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo4_int_START       (3)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo4_int_END         (3)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo5_int_START       (4)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo5_int_END         (4)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo6_int_START       (5)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo6_int_END         (5)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo7_int_START       (6)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo7_int_END         (6)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo8_int_START       (7)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo8_int_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ONOFF_STATUS2_LDO1_8_UNION
 �ṹ˵��  : ONOFF_STATUS2_LDO1_8 �Ĵ����ṹ���塣��ַƫ����:0x02B����ֵ:0x94�����:8
 �Ĵ���˵��: ��Դģ�鿪��״̬2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  st_ldo1_int      : 1;  /* bit[0]: �������� */
        unsigned char  st_ldo2_int      : 1;  /* bit[1]: LDO2����״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_ldo3_buck_int : 1;  /* bit[2]: BUCK��LDO3ʱ�ܿ���״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_ldo4_int      : 1;  /* bit[3]: LDO4����״̬(��֧�ּĴ�����ʽ����)��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_ldo5_int      : 1;  /* bit[4]: LDO5����״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_ldo6_int      : 1;  /* bit[5]: LDO6����״̬(��֧�ּĴ�����ʽ����)��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_ldo7_int      : 1;  /* bit[6]: LDO7����״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_ldo8_int      : 1;  /* bit[7]: LDO8����״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
    } reg;
} SOC_SMART_ONOFF_STATUS2_LDO1_8_UNION;
#endif
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo1_int_START       (0)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo1_int_END         (0)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo2_int_START       (1)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo2_int_END         (1)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo3_buck_int_START  (2)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo3_buck_int_END    (2)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo4_int_START       (3)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo4_int_END         (3)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo5_int_START       (4)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo5_int_END         (4)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo6_int_START       (5)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo6_int_END         (5)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo7_int_START       (6)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo7_int_END         (6)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo8_int_START       (7)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo8_int_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ENABLE3_LDO9_16_UNION
 �ṹ˵��  : ENABLE3_LDO9_16 �Ĵ����ṹ���塣��ַƫ����:0x02C����ֵ:0x00�����:8
 �Ĵ���˵��: ��Դģ��ʹ��3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  en_ldo9_int  : 1;  /* bit[0]: LDO9����ʹ�ܣ�
                                                     д1�������Զ����㡣 */
        unsigned char  en_ldo10_int : 1;  /* bit[1]: LDO10����ʹ�ܣ�
                                                     д1�������Զ����㡣 */
        unsigned char  en_ldo11_int : 1;  /* bit[2]: LDO11����ʹ�ܣ�
                                                     д1�������Զ����㡣 */
        unsigned char  en_ldo12_int : 1;  /* bit[3]: LDO12����ʹ�ܣ�
                                                     д1�������Զ����㡣 */
        unsigned char  en_ldo13_int : 1;  /* bit[4]: LDO13����ʹ�ܣ�
                                                     д1�������Զ����㡣 */
        unsigned char  en_ldo14_int : 1;  /* bit[5]: LDO14����ʹ�ܣ�
                                                     д1�������Զ����㡣 */
        unsigned char  en_ldo15_int : 1;  /* bit[6]: LDO15����ʹ�ܣ�
                                                     д1�������Զ����㡣 */
        unsigned char  en_ldo16_int : 1;  /* bit[7]: LDO16����ʹ�ܣ�
                                                     д1�������Զ����㡣 */
    } reg;
} SOC_SMART_ENABLE3_LDO9_16_UNION;
#endif
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo9_int_START   (0)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo9_int_END     (0)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo10_int_START  (1)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo10_int_END    (1)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo11_int_START  (2)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo11_int_END    (2)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo12_int_START  (3)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo12_int_END    (3)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo13_int_START  (4)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo13_int_END    (4)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo14_int_START  (5)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo14_int_END    (5)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo15_int_START  (6)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo15_int_END    (6)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo16_int_START  (7)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo16_int_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DISABLE3_LDO9_16_UNION
 �ṹ˵��  : DISABLE3_LDO9_16 �Ĵ����ṹ���塣��ַƫ����:0x02D����ֵ:0x00�����:8
 �Ĵ���˵��: ��Դģ��ر�3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  dis_ldo9_int  : 1;  /* bit[0]: LDO9���ؽ�ֹ��
                                                      д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo10_int : 1;  /* bit[1]: LDO10���ؽ�ֹ��
                                                      д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo11_int : 1;  /* bit[2]: LDO11���ؽ�ֹ��
                                                      д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo12_int : 1;  /* bit[3]: LDO12���ؽ�ֹ��
                                                      д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo13_int : 1;  /* bit[4]: LDO13���ؽ�ֹ��
                                                      д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo14_int : 1;  /* bit[5]: LDO14���ؽ�ֹ��
                                                      д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo15_int : 1;  /* bit[6]: LDO15���ؽ�ֹ��
                                                      д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo16_int : 1;  /* bit[7]: LDO16���ؽ�ֹ��
                                                      д1�رգ��Զ����㡣 */
    } reg;
} SOC_SMART_DISABLE3_LDO9_16_UNION;
#endif
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo9_int_START   (0)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo9_int_END     (0)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo10_int_START  (1)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo10_int_END    (1)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo11_int_START  (2)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo11_int_END    (2)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo12_int_START  (3)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo12_int_END    (3)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo13_int_START  (4)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo13_int_END    (4)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo14_int_START  (5)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo14_int_END    (5)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo15_int_START  (6)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo15_int_END    (6)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo16_int_START  (7)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo16_int_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ONOFF_STATUS3_LDO9_16_UNION
 �ṹ˵��  : ONOFF_STATUS3_LDO9_16 �Ĵ����ṹ���塣��ַƫ����:0x02E����ֵ:0x08�����:8
 �Ĵ���˵��: ��Դģ�鿪��״̬3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  st_ldo9_int  : 1;  /* bit[0]: LDO9����״̬��
                                                     0��ͨ���Ĵ����رգ�
                                                     1��ͨ���Ĵ��������� */
        unsigned char  st_ldo10_int : 1;  /* bit[1]: LDO10����״̬��
                                                     0��ͨ���Ĵ����رգ�
                                                     1��ͨ���Ĵ��������� */
        unsigned char  st_ldo11_int : 1;  /* bit[2]: LDO11����״̬��
                                                     0��ͨ���Ĵ����رգ�
                                                     1��ͨ���Ĵ��������� */
        unsigned char  st_ldo12_int : 1;  /* bit[3]: LDO12����״̬��
                                                     0��ͨ���Ĵ����رգ�
                                                     1��ͨ���Ĵ��������� */
        unsigned char  st_ldo13_int : 1;  /* bit[4]: LDO13����״̬��
                                                     0��ͨ���Ĵ����رգ�
                                                     1��ͨ���Ĵ��������� */
        unsigned char  st_ldo14_int : 1;  /* bit[5]: LDO14����״̬��
                                                     0��ͨ���Ĵ����رգ�
                                                     1��ͨ���Ĵ��������� */
        unsigned char  st_ldo15_int : 1;  /* bit[6]: LDO15����״̬��
                                                     0��ͨ���Ĵ����رգ�
                                                     1��ͨ���Ĵ��������� */
        unsigned char  st_ldo16_int : 1;  /* bit[7]: LDO16����״̬��
                                                     0��ͨ���Ĵ����رգ�
                                                     1��ͨ���Ĵ��������� */
    } reg;
} SOC_SMART_ONOFF_STATUS3_LDO9_16_UNION;
#endif
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo9_int_START   (0)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo9_int_END     (0)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo10_int_START  (1)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo10_int_END    (1)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo11_int_START  (2)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo11_int_END    (2)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo12_int_START  (3)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo12_int_END    (3)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo13_int_START  (4)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo13_int_END    (4)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo14_int_START  (5)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo14_int_END    (5)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo15_int_START  (6)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo15_int_END    (6)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo16_int_START  (7)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo16_int_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ENABLE4_LDO17_22_UNION
 �ṹ˵��  : ENABLE4_LDO17_22 �Ĵ����ṹ���塣��ַƫ����:0x02F����ֵ:0x00�����:8
 �Ĵ���˵��: ��Դģ��ʹ��4�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  en_ldo17_int     : 1;  /* bit[0]: LDO17����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_ldo18_int     : 1;  /* bit[1]: LDO1��LDO18����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_ldo19_int     : 1;  /* bit[2]: LDO19����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_ldo20_int     : 1;  /* bit[3]: LDO20����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_ldo21_int     : 1;  /* bit[4]: LDO21����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_ldo22_int     : 1;  /* bit[5]: LDO22����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_ldo3_batt_int : 1;  /* bit[6]: BATT��LDO3ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  reserved         : 1;  /* bit[7]: ������ */
    } reg;
} SOC_SMART_ENABLE4_LDO17_22_UNION;
#endif
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo17_int_START      (0)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo17_int_END        (0)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo18_int_START      (1)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo18_int_END        (1)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo19_int_START      (2)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo19_int_END        (2)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo20_int_START      (3)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo20_int_END        (3)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo21_int_START      (4)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo21_int_END        (4)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo22_int_START      (5)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo22_int_END        (5)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo3_batt_int_START  (6)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo3_batt_int_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DISABLE4_LDO17_22_UNION
 �ṹ˵��  : DISABLE4_LDO17_22 �Ĵ����ṹ���塣��ַƫ����:0x030����ֵ:0x00�����:8
 �Ĵ���˵��: ��Դģ��ر�4�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  dis_ldo17_int     : 1;  /* bit[0]: LDO17���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo18_int     : 1;  /* bit[1]: LDO1��LDO18���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo19_int     : 1;  /* bit[2]: LDO19���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo20_int     : 1;  /* bit[3]: LDO20���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo21_int     : 1;  /* bit[4]: LDO21���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo22_int     : 1;  /* bit[5]: LDO22���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_ldo3_batt_int : 1;  /* bit[6]: BATT��LDO3��ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  reserved          : 1;  /* bit[7]: ������ */
    } reg;
} SOC_SMART_DISABLE4_LDO17_22_UNION;
#endif
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo17_int_START      (0)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo17_int_END        (0)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo18_int_START      (1)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo18_int_END        (1)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo19_int_START      (2)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo19_int_END        (2)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo20_int_START      (3)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo20_int_END        (3)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo21_int_START      (4)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo21_int_END        (4)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo22_int_START      (5)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo22_int_END        (5)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo3_batt_int_START  (6)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo3_batt_int_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ONOFF_STATUS4_LDO17_22_UNION
 �ṹ˵��  : ONOFF_STATUS4_LDO17_22 �Ĵ����ṹ���塣��ַƫ����:0x031����ֵ:0x06�����:8
 �Ĵ���˵��: ��Դģ�鿪��״̬4�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  st_ldo17_int     : 1;  /* bit[0]: LDO17����״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_ldo18_int     : 1;  /* bit[1]: LDO1��LDO18����״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_ldo19_int     : 1;  /* bit[2]: LDO19����״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_ldo20_int     : 1;  /* bit[3]: LDO20����״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_ldo21_int     : 1;  /* bit[4]: LDO21����״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_ldo22_int     : 1;  /* bit[5]: LDO22����״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_ldo3_batt_int : 1;  /* bit[6]: BATT��LDO3����״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  reserved         : 1;  /* bit[7]: ������ */
    } reg;
} SOC_SMART_ONOFF_STATUS4_LDO17_22_UNION;
#endif
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo17_int_START      (0)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo17_int_END        (0)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo18_int_START      (1)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo18_int_END        (1)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo19_int_START      (2)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo19_int_END        (2)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo20_int_START      (3)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo20_int_END        (3)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo21_int_START      (4)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo21_int_END        (4)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo22_int_START      (5)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo22_int_END        (5)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo3_batt_int_START  (6)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo3_batt_int_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ENABLE5_LVS2_UNION
 �ṹ˵��  : ENABLE5_LVS2 �Ĵ����ṹ���塣��ַƫ����:0x032����ֵ:0x00�����:8
 �Ĵ���˵��: ��Դģ��ʹ��5�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  en_lvs2_int : 1;  /* bit[0]  : LVS2����ʹ�ܣ�
                                                      д1�������Զ����㡣 */
        unsigned char  reserved    : 7;  /* bit[1-7]: ������ */
    } reg;
} SOC_SMART_ENABLE5_LVS2_UNION;
#endif
#define SOC_SMART_ENABLE5_LVS2_en_lvs2_int_START  (0)
#define SOC_SMART_ENABLE5_LVS2_en_lvs2_int_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DISABLE5_LVS2_UNION
 �ṹ˵��  : DISABLE5_LVS2 �Ĵ����ṹ���塣��ַƫ����:0x033����ֵ:0x00�����:8
 �Ĵ���˵��: ��Դģ��ر�5�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  dis_lvs2_int : 1;  /* bit[0]  : LVS2���ؽ�ֹ��
                                                       д1�رգ��Զ����㡣 */
        unsigned char  reserved     : 7;  /* bit[1-7]: ������ */
    } reg;
} SOC_SMART_DISABLE5_LVS2_UNION;
#endif
#define SOC_SMART_DISABLE5_LVS2_dis_lvs2_int_START  (0)
#define SOC_SMART_DISABLE5_LVS2_dis_lvs2_int_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ONOFF_STATUS5_LVS2_UNION
 �ṹ˵��  : ONOFF_STATUS5_LVS2 �Ĵ����ṹ���塣��ַƫ����:0x034����ֵ:0x00�����:8
 �Ĵ���˵��: ��Դģ�鿪��״̬5�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  st_lvs2_int : 1;  /* bit[0]  : LVS2����״̬��
                                                      0��ͨ���Ĵ����رգ�
                                                      1��ͨ���Ĵ��������� */
        unsigned char  reserved    : 7;  /* bit[1-7]: ������ */
    } reg;
} SOC_SMART_ONOFF_STATUS5_LVS2_UNION;
#endif
#define SOC_SMART_ONOFF_STATUS5_LVS2_st_lvs2_int_START  (0)
#define SOC_SMART_ONOFF_STATUS5_LVS2_st_lvs2_int_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ENABLE6_XO_CLK_UNION
 �ṹ˵��  : ENABLE6_XO_CLK �Ĵ����ṹ���塣��ַƫ����:0x035����ֵ:0x00�����:8
 �Ĵ���˵��: ��Դģ��ʹ��6�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  en_xo_clk0_int : 1;  /* bit[0]  : BB buf����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_xo_clk1_int : 1;  /* bit[1]  : CONN buf����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_xo_clk2_int : 1;  /* bit[2]  : NFC buf����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_xo_clk3_int : 1;  /* bit[3]  : RF1 buf����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  en_xo_clk4_int : 1;  /* bit[4]  : RF2 buf����ʹ�ܣ�
                                                         д1�������Զ����㡣 */
        unsigned char  reserved       : 3;  /* bit[5-7]:  */
    } reg;
} SOC_SMART_ENABLE6_XO_CLK_UNION;
#endif
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk0_int_START  (0)
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk0_int_END    (0)
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk1_int_START  (1)
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk1_int_END    (1)
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk2_int_START  (2)
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk2_int_END    (2)
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk3_int_START  (3)
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk3_int_END    (3)
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk4_int_START  (4)
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk4_int_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DISABLE6_XO_CLK_UNION
 �ṹ˵��  : DISABLE6_XO_CLK �Ĵ����ṹ���塣��ַƫ����:0x036����ֵ:0x00�����:8
 �Ĵ���˵��: ��Դģ��ر�6�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  dis_xo_clk0_int : 1;  /* bit[0]  : BB buf���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_xo_clk1_int : 1;  /* bit[1]  : CONN buf���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_xo_clk2_int : 1;  /* bit[2]  : NFC buf���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_xo_clk3_int : 1;  /* bit[3]  : RF1 buf���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  dis_xo_clk4_int : 1;  /* bit[4]  : RF2 buf���ؽ�ֹ��
                                                          д1�رգ��Զ����㡣 */
        unsigned char  reserved        : 3;  /* bit[5-7]:  */
    } reg;
} SOC_SMART_DISABLE6_XO_CLK_UNION;
#endif
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk0_int_START  (0)
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk0_int_END    (0)
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk1_int_START  (1)
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk1_int_END    (1)
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk2_int_START  (2)
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk2_int_END    (2)
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk3_int_START  (3)
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk3_int_END    (3)
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk4_int_START  (4)
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk4_int_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ONOFF_STATUS6_XO_CLK_UNION
 �ṹ˵��  : ONOFF_STATUS6_XO_CLK �Ĵ����ṹ���塣��ַƫ����:0x037����ֵ:0x00�����:8
 �Ĵ���˵��: ��Դģ�鿪��״̬6�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  st_xo_clk0_int : 1;  /* bit[0]  : BB buf����״̬(��֧�ּĴ�����ʽ����)��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_xo_clk1_int : 1;  /* bit[1]  : CONN buf����״̬(��֧�ּĴ�����ʽ����)��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_xo_clk2_int : 1;  /* bit[2]  : NFC buf����״̬(��֧�ּĴ�����ʽ����)��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_xo_clk3_int : 1;  /* bit[3]  : RF1 buf����״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  st_xo_clk4_int : 1;  /* bit[4]  : RF2 buf����״̬��
                                                         0��ͨ���Ĵ����رգ�
                                                         1��ͨ���Ĵ��������� */
        unsigned char  reserved       : 3;  /* bit[5-7]:  */
    } reg;
} SOC_SMART_ONOFF_STATUS6_XO_CLK_UNION;
#endif
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk0_int_START  (0)
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk0_int_END    (0)
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk1_int_START  (1)
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk1_int_END    (1)
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk2_int_START  (2)
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk2_int_END    (2)
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk3_int_START  (3)
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk3_int_END    (3)
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk4_int_START  (4)
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk4_int_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ECO_MOD_CFG1_UNION
 �ṹ˵��  : ECO_MOD_CFG1 �Ĵ����ṹ���塣��ַƫ����:0x038����ֵ:0x07�����:8
 �Ĵ���˵��: ��Դģ���Ƿ����PMU����ECOģʽ����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  en_eco_buck2_int : 1;  /* bit[0]  : ����BUCK2�Ƿ���PMU����ECOģʽ:
                                                           0:�����棻
                                                           1�����档 */
        unsigned char  en_eco_buck3_int : 1;  /* bit[1]  : ����BUCK3�Ƿ���PMU����ECOģʽ:
                                                           0:�����棻
                                                           1�����档 */
        unsigned char  en_eco_buck4_int : 1;  /* bit[2]  : ����BUCK4�Ƿ���PMU����ECOģʽ:
                                                           0:�����棻
                                                           1�����档 */
        unsigned char  reserved         : 5;  /* bit[3-7]: ������ */
    } reg;
} SOC_SMART_ECO_MOD_CFG1_UNION;
#endif
#define SOC_SMART_ECO_MOD_CFG1_en_eco_buck2_int_START  (0)
#define SOC_SMART_ECO_MOD_CFG1_en_eco_buck2_int_END    (0)
#define SOC_SMART_ECO_MOD_CFG1_en_eco_buck3_int_START  (1)
#define SOC_SMART_ECO_MOD_CFG1_en_eco_buck3_int_END    (1)
#define SOC_SMART_ECO_MOD_CFG1_en_eco_buck4_int_START  (2)
#define SOC_SMART_ECO_MOD_CFG1_en_eco_buck4_int_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ECO_MOD_CFG2_UNION
 �ṹ˵��  : ECO_MOD_CFG2 �Ĵ����ṹ���塣��ַƫ����:0x039����ֵ:0xFF�����:8
 �Ĵ���˵��: ��Դģ���Ƿ����PMU����ECOģʽ����2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  en_eco_ldo1_int : 1;  /* bit[0]: ����LDO1�Ƿ���PMU����ECOģʽ:
                                                        0:�����棻
                                                        1�����档 */
        unsigned char  en_eco_ldo3_int : 1;  /* bit[1]: ����LDO3�Ƿ���PMU����ECOģʽ:
                                                        0:�����棻
                                                        1�����档 */
        unsigned char  en_eco_ldo4_int : 1;  /* bit[2]: ����LDO4�Ƿ���PMU����ECOģʽ:
                                                        0:�����棻
                                                        1�����档 */
        unsigned char  en_eco_ldo5_int : 1;  /* bit[3]: ����LDO5�Ƿ���PMU����ECOģʽ:
                                                        0:�����棻
                                                        1�����档 */
        unsigned char  en_eco_ldo6_int : 1;  /* bit[4]: ����LDO6�Ƿ���PMU����ECOģʽ:
                                                        0:�����棻
                                                        1�����档 */
        unsigned char  en_eco_ldo7_int : 1;  /* bit[5]: ����LDO7�Ƿ���PMU����ECOģʽ:
                                                        0:�����棻
                                                        1�����档 */
        unsigned char  en_eco_ldo8_int : 1;  /* bit[6]: ����LDO8�Ƿ���PMU����ECOģʽ:
                                                        0:�����棻
                                                        1�����档 */
        unsigned char  en_eco_ldo9_int : 1;  /* bit[7]: ����LDO9�Ƿ���PMU����ECOģʽ:
                                                        0:�����棻
                                                        1�����档 */
    } reg;
} SOC_SMART_ECO_MOD_CFG2_UNION;
#endif
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo1_int_START  (0)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo1_int_END    (0)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo3_int_START  (1)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo3_int_END    (1)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo4_int_START  (2)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo4_int_END    (2)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo5_int_START  (3)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo5_int_END    (3)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo6_int_START  (4)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo6_int_END    (4)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo7_int_START  (5)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo7_int_END    (5)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo8_int_START  (6)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo8_int_END    (6)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo9_int_START  (7)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo9_int_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ECO_MOD_CFG3_UNION
 �ṹ˵��  : ECO_MOD_CFG3 �Ĵ����ṹ���塣��ַƫ����:0x03A����ֵ:0x7F�����:8
 �Ĵ���˵��: ��Դģ���Ƿ����PMU����ECOģʽ����3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  en_eco_ldo10_int : 1;  /* bit[0]: ����LDO10�Ƿ���PMU����ECOģʽ:
                                                         0:�����棻
                                                         1�����档 */
        unsigned char  en_eco_ldo11_int : 1;  /* bit[1]: ����LDO11�Ƿ���PMU����ECOģʽ:
                                                         0:�����棻
                                                         1�����档 */
        unsigned char  en_eco_ldo12_int : 1;  /* bit[2]: ����LDO12�Ƿ���PMU����ECOģʽ:
                                                         0:�����棻
                                                         1�����档 */
        unsigned char  en_eco_ldo13_int : 1;  /* bit[3]: ����LDO13�Ƿ���PMU����ECOģʽ:
                                                         0:�����棻
                                                         1�����档 */
        unsigned char  en_eco_ldo15_int : 1;  /* bit[4]: ����LDO15�Ƿ���PMU����ECOģʽ:
                                                         0:�����棻
                                                         1�����档 */
        unsigned char  en_eco_ldo16_int : 1;  /* bit[5]: ����LDO16�Ƿ���PMU����ECOģʽ:
                                                         0:�����棻
                                                         1�����档 */
        unsigned char  en_eco_ldo18_int : 1;  /* bit[6]: ����LDO18�Ƿ���PMU����ECOģʽ:
                                                         0:�����棻
                                                         1�����档 */
        unsigned char  reserved         : 1;  /* bit[7]: ������ */
    } reg;
} SOC_SMART_ECO_MOD_CFG3_UNION;
#endif
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo10_int_START  (0)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo10_int_END    (0)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo11_int_START  (1)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo11_int_END    (1)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo12_int_START  (2)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo12_int_END    (2)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo13_int_START  (3)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo13_int_END    (3)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo15_int_START  (4)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo15_int_END    (4)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo16_int_START  (5)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo16_int_END    (5)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo18_int_START  (6)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo18_int_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ECO_MOD_CFG4_UNION
 �ṹ˵��  : ECO_MOD_CFG4 �Ĵ����ṹ���塣��ַƫ����:0x03B����ֵ:0x1F�����:8
 �Ĵ���˵��: ��Դģ���Ƿ����PMU����ECOģʽ����4�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  en_eco_ldo19_int   : 1;  /* bit[0]  : ����LDO19�Ƿ���PMU����ECOģʽ:
                                                             0:�����棻
                                                             1�����档 */
        unsigned char  en_eco_ldo21_int   : 1;  /* bit[1]  : ����LDO21�Ƿ���PMU����ECOģʽ:
                                                             0:�����棻
                                                             1�����档 */
        unsigned char  en_eco_pmua_int    : 1;  /* bit[2]  : ����PMUA�Ƿ���PMU����ECOģʽ:
                                                             0:�����棻
                                                             1�����档 */
        unsigned char  en_eco_ldo20_int   : 1;  /* bit[3]  : ����LDO20�Ƿ���PMU����ECOģʽ:
                                                             0:�����棻
                                                             1�����档 */
        unsigned char  en_eco_ldobuck_int : 1;  /* bit[4]  : ����LDOBUCK�Ƿ���PMU����ECOģʽ:
                                                             0:�����棻
                                                             1�����档 */
        unsigned char  reserved           : 3;  /* bit[5-7]: ������ */
    } reg;
} SOC_SMART_ECO_MOD_CFG4_UNION;
#endif
#define SOC_SMART_ECO_MOD_CFG4_en_eco_ldo19_int_START    (0)
#define SOC_SMART_ECO_MOD_CFG4_en_eco_ldo19_int_END      (0)
#define SOC_SMART_ECO_MOD_CFG4_en_eco_ldo21_int_START    (1)
#define SOC_SMART_ECO_MOD_CFG4_en_eco_ldo21_int_END      (1)
#define SOC_SMART_ECO_MOD_CFG4_en_eco_pmua_int_START     (2)
#define SOC_SMART_ECO_MOD_CFG4_en_eco_pmua_int_END       (2)
#define SOC_SMART_ECO_MOD_CFG4_en_eco_ldo20_int_START    (3)
#define SOC_SMART_ECO_MOD_CFG4_en_eco_ldo20_int_END      (3)
#define SOC_SMART_ECO_MOD_CFG4_en_eco_ldobuck_int_START  (4)
#define SOC_SMART_ECO_MOD_CFG4_en_eco_ldobuck_int_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ECO_MOD_CFG5_UNION
 �ṹ˵��  : ECO_MOD_CFG5 �Ĵ����ṹ���塣��ַƫ����:0x03C����ֵ:0x00�����:8
 �Ĵ���˵��: ��Դģ���Ƿ�ǿ�ƽ���ECOģʽ����5�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  force_eco_buck2_int : 1;  /* bit[0]  : �����Ƿ�ǿ��ʹBUCK2����ECOģʽ��
                                                              0:�����룻
                                                              1�����롣 */
        unsigned char  force_eco_buck3_int : 1;  /* bit[1]  : �����Ƿ�ǿ��ʹBUCK3����ECOģʽ��
                                                              0:�����룻
                                                              1�����롣 */
        unsigned char  force_eco_buck4_int : 1;  /* bit[2]  : �����Ƿ�ǿ��ʹBUCK4����ECOģʽ��
                                                              0:�����룻
                                                              1�����롣 */
        unsigned char  reserved            : 5;  /* bit[3-7]: ������ */
    } reg;
} SOC_SMART_ECO_MOD_CFG5_UNION;
#endif
#define SOC_SMART_ECO_MOD_CFG5_force_eco_buck2_int_START  (0)
#define SOC_SMART_ECO_MOD_CFG5_force_eco_buck2_int_END    (0)
#define SOC_SMART_ECO_MOD_CFG5_force_eco_buck3_int_START  (1)
#define SOC_SMART_ECO_MOD_CFG5_force_eco_buck3_int_END    (1)
#define SOC_SMART_ECO_MOD_CFG5_force_eco_buck4_int_START  (2)
#define SOC_SMART_ECO_MOD_CFG5_force_eco_buck4_int_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ECO_MOD_CFG6_UNION
 �ṹ˵��  : ECO_MOD_CFG6 �Ĵ����ṹ���塣��ַƫ����:0x03D����ֵ:0x00�����:8
 �Ĵ���˵��: ��Դģ���Ƿ�ǿ�ƽ���ECOģʽ����6�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  force_eco_ldo1_int : 1;  /* bit[0]: �����Ƿ�ǿ��ʹLDO1����ECOģʽ��
                                                           0:�����룻
                                                           1�����롣 */
        unsigned char  force_eco_ldo3_int : 1;  /* bit[1]: �����Ƿ�ǿ��ʹLDO3����ECOģʽ��
                                                           0:�����룻
                                                           1�����롣 */
        unsigned char  force_eco_ldo4_int : 1;  /* bit[2]: �����Ƿ�ǿ��ʹLDO4����ECOģʽ��
                                                           0:�����룻
                                                           1�����롣 */
        unsigned char  force_eco_ldo5_int : 1;  /* bit[3]: �����Ƿ�ǿ��ʹLDO5����ECOģʽ��
                                                           0:�����룻
                                                           1�����롣 */
        unsigned char  force_eco_ldo6_int : 1;  /* bit[4]: �����Ƿ�ǿ��ʹLDO6����ECOģʽ��
                                                           0:�����룻
                                                           1�����롣 */
        unsigned char  force_eco_ldo7_int : 1;  /* bit[5]: �����Ƿ�ǿ��ʹLDO7����ECOģʽ��
                                                           0:�����룻
                                                           1�����롣 */
        unsigned char  force_eco_ldo8_int : 1;  /* bit[6]: �����Ƿ�ǿ��ʹLDO8����ECOģʽ��
                                                           0:�����룻
                                                           1�����롣 */
        unsigned char  force_eco_ldo9_int : 1;  /* bit[7]: �����Ƿ�ǿ��ʹLDO9����ECOģʽ��
                                                           0:�����룻
                                                           1�����롣 */
    } reg;
} SOC_SMART_ECO_MOD_CFG6_UNION;
#endif
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo1_int_START  (0)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo1_int_END    (0)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo3_int_START  (1)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo3_int_END    (1)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo4_int_START  (2)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo4_int_END    (2)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo5_int_START  (3)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo5_int_END    (3)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo6_int_START  (4)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo6_int_END    (4)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo7_int_START  (5)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo7_int_END    (5)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo8_int_START  (6)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo8_int_END    (6)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo9_int_START  (7)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo9_int_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ECO_MOD_CFG7_UNION
 �ṹ˵��  : ECO_MOD_CFG7 �Ĵ����ṹ���塣��ַƫ����:0x03E����ֵ:0x00�����:8
 �Ĵ���˵��: ��Դģ���Ƿ�ǿ�ƽ���ECOģʽ����7�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  force_eco_ldo10_int : 1;  /* bit[0]: �����Ƿ�ǿ��ʹLDO10����ECOģʽ��
                                                            0:�����룻
                                                            1�����롣 */
        unsigned char  force_eco_ldo11_int : 1;  /* bit[1]: �����Ƿ�ǿ��ʹLDO11����ECOģʽ��
                                                            0:�����룻
                                                            1�����롣 */
        unsigned char  force_eco_ldo12_int : 1;  /* bit[2]: �����Ƿ�ǿ��ʹLDO12����ECOģʽ��
                                                            0:�����룻
                                                            1�����롣 */
        unsigned char  force_eco_ldo13_int : 1;  /* bit[3]: �����Ƿ�ǿ��ʹLDO13����ECOģʽ��
                                                            0:�����룻
                                                            1�����롣 */
        unsigned char  force_eco_ldo15_int : 1;  /* bit[4]: �����Ƿ�ǿ��ʹLDO15����ECOģʽ��
                                                            0:�����룻
                                                            1�����롣 */
        unsigned char  force_eco_ldo16_int : 1;  /* bit[5]: �����Ƿ�ǿ��ʹLDO16����ECOģʽ��
                                                            0:�����룻
                                                            1�����롣 */
        unsigned char  force_eco_ldo18_int : 1;  /* bit[6]: �����Ƿ�ǿ��ʹLDO18����ECOģʽ��
                                                            0:�����룻
                                                            1�����롣 */
        unsigned char  reserved            : 1;  /* bit[7]: ������ */
    } reg;
} SOC_SMART_ECO_MOD_CFG7_UNION;
#endif
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo10_int_START  (0)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo10_int_END    (0)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo11_int_START  (1)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo11_int_END    (1)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo12_int_START  (2)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo12_int_END    (2)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo13_int_START  (3)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo13_int_END    (3)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo15_int_START  (4)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo15_int_END    (4)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo16_int_START  (5)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo16_int_END    (5)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo18_int_START  (6)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo18_int_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ECO_MOD_CFG8_UNION
 �ṹ˵��  : ECO_MOD_CFG8 �Ĵ����ṹ���塣��ַƫ����:0x03F����ֵ:0x00�����:8
 �Ĵ���˵��: ��Դģ���Ƿ�ǿ�ƽ���ECOģʽ����8�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  force_eco_ldo19_int   : 1;  /* bit[0]  : �����Ƿ�ǿ��ʹLDO19����ECOģʽ��
                                                                0:�����룻
                                                                1�����롣 */
        unsigned char  force_eco_ldo21_int   : 1;  /* bit[1]  : �����Ƿ�ǿ��ʹLDO21����ECOģʽ��
                                                                0:�����룻
                                                                1�����롣 */
        unsigned char  force_eco_pmua_int    : 1;  /* bit[2]  : �����Ƿ�ǿ��ʹPMUA����ECOģʽ��
                                                                0:�����룻
                                                                1�����롣 */
        unsigned char  force_eco_ldo20_int   : 1;  /* bit[3]  : �����Ƿ�ǿ��ʹLDO20����ECOģʽ:
                                                                0:�����棻
                                                                1�����档 */
        unsigned char  force_eco_ldobuck_int : 1;  /* bit[4]  : �����Ƿ�ǿ��ʹldobuck����ECOģʽ:
                                                                0:�����棻
                                                                1�����档 */
        unsigned char  reserved              : 3;  /* bit[5-7]: ������ */
    } reg;
} SOC_SMART_ECO_MOD_CFG8_UNION;
#endif
#define SOC_SMART_ECO_MOD_CFG8_force_eco_ldo19_int_START    (0)
#define SOC_SMART_ECO_MOD_CFG8_force_eco_ldo19_int_END      (0)
#define SOC_SMART_ECO_MOD_CFG8_force_eco_ldo21_int_START    (1)
#define SOC_SMART_ECO_MOD_CFG8_force_eco_ldo21_int_END      (1)
#define SOC_SMART_ECO_MOD_CFG8_force_eco_pmua_int_START     (2)
#define SOC_SMART_ECO_MOD_CFG8_force_eco_pmua_int_END       (2)
#define SOC_SMART_ECO_MOD_CFG8_force_eco_ldo20_int_START    (3)
#define SOC_SMART_ECO_MOD_CFG8_force_eco_ldo20_int_END      (3)
#define SOC_SMART_ECO_MOD_CFG8_force_eco_ldobuck_int_START  (4)
#define SOC_SMART_ECO_MOD_CFG8_force_eco_ldobuck_int_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_PERI_EN_MARK_UNION
 �ṹ˵��  : PERI_EN_MARK �Ĵ����ṹ���塣��ַƫ����:0x040����ֵ:0x1F�����:8
 �Ĵ���˵��: ��PERI_ENӲ�ߺ�ECO������ص������źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  peri_en_ctrl_lvs2  : 1;  /* bit[0]  : LVS2�Ƿ���PERI_EN�������µ�:
                                                             0�����ܿأ�
                                                             1���ܿء� */
        unsigned char  peri_en_ctrl_ldo12 : 1;  /* bit[1]  : LDO12�Ƿ���PERI_EN�������µ�:
                                                             0�����ܿأ�
                                                             1���ܿء� */
        unsigned char  peri_en_ctrl_ldo18 : 1;  /* bit[2]  : LDO18�Ƿ���PERI_EN�������µ�:
                                                             0�����ܿأ�
                                                             1���ܿء� */
        unsigned char  peri_en_ctrl_ldo8  : 1;  /* bit[3]  : LDO8�Ƿ���PERI_EN�������µ�:
                                                             0�����ܿأ�
                                                             1���ܿء� */
        unsigned char  peri_en_ctrl_buck2 : 1;  /* bit[4]  : BUCK2�Ƿ���PERI_EN�������µ�:
                                                             0�����ܿأ�
                                                             1���ܿء� */
        unsigned char  reserved           : 3;  /* bit[5-7]: ���� */
    } reg;
} SOC_SMART_PERI_EN_MARK_UNION;
#endif
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_lvs2_START   (0)
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_lvs2_END     (0)
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_ldo12_START  (1)
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_ldo12_END    (1)
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_ldo18_START  (2)
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_ldo18_END    (2)
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_ldo8_START   (3)
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_ldo8_END     (3)
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_buck2_START  (4)
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_buck2_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK2_REG0_UNION
 �ṹ˵��  : BUCK2_REG0 �Ĵ����ṹ���塣��ַƫ����:0x049����ֵ:0x01�����:8
 �Ĵ���˵��: BUCK2����0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck2_nmos_switch : 1;  /* bit[0]  : buck2 sleep��normal�л�ʱNMOS�����л���ʽ����0����dmdͬʱ�л���1����dmd֮���л��� */
        unsigned char  reserved          : 7;  /* bit[1-7]: ���� */
    } reg;
} SOC_SMART_BUCK2_REG0_UNION;
#endif
#define SOC_SMART_BUCK2_REG0_buck2_nmos_switch_START  (0)
#define SOC_SMART_BUCK2_REG0_buck2_nmos_switch_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK2_REG1_UNION
 �ṹ˵��  : BUCK2_REG1 �Ĵ����ṹ���塣��ַƫ����:0x04A����ֵ:0x45�����:8
 �Ĵ���˵��: BUCK2����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck2_dbias     : 4;  /* bit[0-3]: buck2 <1:0>�Ƚ���ƫ�õ������ڣ�00~11����
                                                          buck2<3:2> �Ƚ�����ƫ�õ������ڣ�00~11���� */
        unsigned char  buck2_sleep_ng  : 1;  /* bit[4]  : buck2��sleep״̬ʱ���ڹر�NMOS power�ܡ�1��ǿ�ƹرգ�0����ǿ�ƹر� */
        unsigned char  buck2_sleep_dmd : 1;  /* bit[5]  : ������ģʽ��ǿ��NMOS�ܹرգ�0����ǿ�ƣ�1��ǿ�ƣ� */
        unsigned char  buck2_reg_r     : 2;  /* bit[6-7]: buck2�ڲ�regulator���裬���ڵ���regulator���� */
    } reg;
} SOC_SMART_BUCK2_REG1_UNION;
#endif
#define SOC_SMART_BUCK2_REG1_buck2_dbias_START      (0)
#define SOC_SMART_BUCK2_REG1_buck2_dbias_END        (3)
#define SOC_SMART_BUCK2_REG1_buck2_sleep_ng_START   (4)
#define SOC_SMART_BUCK2_REG1_buck2_sleep_ng_END     (4)
#define SOC_SMART_BUCK2_REG1_buck2_sleep_dmd_START  (5)
#define SOC_SMART_BUCK2_REG1_buck2_sleep_dmd_END    (5)
#define SOC_SMART_BUCK2_REG1_buck2_reg_r_START      (6)
#define SOC_SMART_BUCK2_REG1_buck2_reg_r_END        (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK2_REG2_UNION
 �ṹ˵��  : BUCK2_REG2 �Ĵ����ṹ���塣��ַƫ����:0x04B����ֵ:0x7D�����:8
 �Ĵ���˵��: BUCK2����2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck2_adj_rlx : 4;  /* bit[0-3]: buck2 LX�����˲��������
                                                        ��1111������ȫ�����룬0000������ȫ���룩 */
        unsigned char  buck2_adj_clx : 2;  /* bit[4-5]: buck2 LX�����˲����ݵ���
                                                        ��11������ȫ���룬00������ȫ�����룩 */
        unsigned char  buck2_ocp_sel : 2;  /* bit[6-7]: buck2 ocp�������00~11���� */
    } reg;
} SOC_SMART_BUCK2_REG2_UNION;
#endif
#define SOC_SMART_BUCK2_REG2_buck2_adj_rlx_START  (0)
#define SOC_SMART_BUCK2_REG2_buck2_adj_rlx_END    (3)
#define SOC_SMART_BUCK2_REG2_buck2_adj_clx_START  (4)
#define SOC_SMART_BUCK2_REG2_buck2_adj_clx_END    (5)
#define SOC_SMART_BUCK2_REG2_buck2_ocp_sel_START  (6)
#define SOC_SMART_BUCK2_REG2_buck2_ocp_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK2_REG3_UNION
 �ṹ˵��  : BUCK2_REG3 �Ĵ����ṹ���塣��ַƫ����:0x04C����ֵ:0x04�����:8
 �Ĵ���˵��: BUCK2����3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck2_dmd_sel   : 3;  /* bit[0-2]: buck2 dmd��ѡ��000~111���� */
        unsigned char  buck2_bias_reg  : 1;  /* bit[3]  : buck2�ڲ�regulator�������ڣ�0:0.5uA��1:1uA�� */
        unsigned char  buck2_en_reg    : 1;  /* bit[4]  : buck2�ڲ����ȵ�����ʹ���źš�0��ʹ�ܣ�1����ʹ�� */
        unsigned char  buck2_dmd_clamp : 1;  /* bit[5]  : dmdǶλʹ���źţ�0�����ϣ�1�������ϣ� */
        unsigned char  buck2_ocp_dis   : 1;  /* bit[6]  : buck2 �ڲ�ocp��·�����źš�0�������Σ�1������ */
        unsigned char  buck2_ocp_delay : 1;  /* bit[7]  : ocp����ʱ���ӳ�20ns�źţ�0�����ӳ���1���ӳ��� */
    } reg;
} SOC_SMART_BUCK2_REG3_UNION;
#endif
#define SOC_SMART_BUCK2_REG3_buck2_dmd_sel_START    (0)
#define SOC_SMART_BUCK2_REG3_buck2_dmd_sel_END      (2)
#define SOC_SMART_BUCK2_REG3_buck2_bias_reg_START   (3)
#define SOC_SMART_BUCK2_REG3_buck2_bias_reg_END     (3)
#define SOC_SMART_BUCK2_REG3_buck2_en_reg_START     (4)
#define SOC_SMART_BUCK2_REG3_buck2_en_reg_END       (4)
#define SOC_SMART_BUCK2_REG3_buck2_dmd_clamp_START  (5)
#define SOC_SMART_BUCK2_REG3_buck2_dmd_clamp_END    (5)
#define SOC_SMART_BUCK2_REG3_buck2_ocp_dis_START    (6)
#define SOC_SMART_BUCK2_REG3_buck2_ocp_dis_END      (6)
#define SOC_SMART_BUCK2_REG3_buck2_ocp_delay_START  (7)
#define SOC_SMART_BUCK2_REG3_buck2_ocp_delay_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK2_REG4_UNION
 �ṹ˵��  : BUCK2_REG4 �Ĵ����ṹ���塣��ַƫ����:0x04D����ֵ:0x0B�����:8
 �Ĵ���˵��: BUCK2����4�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck2_reg_dr      : 3;  /* bit[0-2]: buck2�ڲ�regulator���裬���ڵ���regulator�������ȷ�Χ */
        unsigned char  buck2_dt_sel      : 2;  /* bit[3-4]: buck2����ʱ����ڡ�(1���������ӳ٣�0�������ӳ�5ns��
                                                            <1>:����ʱ����ڣ�����NTP��PTN��
                                                            <0>:����PWM�ź��·�����NTP������ʱ����� */
        unsigned char  buck2_regop_clamp : 1;  /* bit[5]  : regulator Ƕλ��·ʹ�ܣ�1��ʹ�ܡ�0����ʹ�ܣ� */
        unsigned char  buck2_reg_ss      : 1;  /* bit[6]  : buck2������ʱ�ڲ�regulator״̬��
                                                            0������״̬��1����λ���淴�� */
        unsigned char  buck2_regop_c     : 1;  /* bit[7]  : buck2�ڲ�regulator OP������ݣ����ڵ���OP��slew-rate�� */
    } reg;
} SOC_SMART_BUCK2_REG4_UNION;
#endif
#define SOC_SMART_BUCK2_REG4_buck2_reg_dr_START       (0)
#define SOC_SMART_BUCK2_REG4_buck2_reg_dr_END         (2)
#define SOC_SMART_BUCK2_REG4_buck2_dt_sel_START       (3)
#define SOC_SMART_BUCK2_REG4_buck2_dt_sel_END         (4)
#define SOC_SMART_BUCK2_REG4_buck2_regop_clamp_START  (5)
#define SOC_SMART_BUCK2_REG4_buck2_regop_clamp_END    (5)
#define SOC_SMART_BUCK2_REG4_buck2_reg_ss_START       (6)
#define SOC_SMART_BUCK2_REG4_buck2_reg_ss_END         (6)
#define SOC_SMART_BUCK2_REG4_buck2_regop_c_START      (7)
#define SOC_SMART_BUCK2_REG4_buck2_regop_c_END        (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK2_REG5_UNION
 �ṹ˵��  : BUCK2_REG5 �Ĵ����ṹ���塣��ַƫ����:0x04E����ֵ:0x3C�����:8
 �Ĵ���˵��: BUCK2����5�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck2_ng_n_sel : 2;  /* bit[0-1]: buck2 N power��������ӦNMOS�����������ڣ�00~11�������������� */
        unsigned char  buck2_ng_p_sel : 2;  /* bit[2-3]: buck2 N power��������ӦPMOS�����������ڣ�00~11��С���������� */
        unsigned char  buck2_pg_n_sel : 2;  /* bit[4-5]: buck2 P power��������ӦNMOS�����������ڣ�00~11��С���������� */
        unsigned char  buck2_pg_p_sel : 2;  /* bit[6-7]: buck2 P power��������ӦPMOS�����������ڣ�00~11�������������� */
    } reg;
} SOC_SMART_BUCK2_REG5_UNION;
#endif
#define SOC_SMART_BUCK2_REG5_buck2_ng_n_sel_START  (0)
#define SOC_SMART_BUCK2_REG5_buck2_ng_n_sel_END    (1)
#define SOC_SMART_BUCK2_REG5_buck2_ng_p_sel_START  (2)
#define SOC_SMART_BUCK2_REG5_buck2_ng_p_sel_END    (3)
#define SOC_SMART_BUCK2_REG5_buck2_pg_n_sel_START  (4)
#define SOC_SMART_BUCK2_REG5_buck2_pg_n_sel_END    (5)
#define SOC_SMART_BUCK2_REG5_buck2_pg_p_sel_START  (6)
#define SOC_SMART_BUCK2_REG5_buck2_pg_p_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK2_REG6_UNION
 �ṹ˵��  : BUCK2_REG6 �Ĵ����ṹ���塣��ַƫ����:0x04F����ֵ:0x05�����:8
 �Ĵ���˵��: BUCK2����6�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck2_ocp_toff   : 2;  /* bit[0-1]: buck2����ocpʱ��С�ض�ʱ������00~11���� */
        unsigned char  buck2_ton        : 2;  /* bit[2-3]: buck2��С��ͨʱ�䣨00~11���� */
        unsigned char  buck2_filter_ton : 2;  /* bit[4-5]: �Ƚ�����ë�̣�00~11���� */
        unsigned char  buck2_ng_dt_sel  : 1;  /* bit[6]  : buck2 P�ܵ�N������ģʽѡ��1����������������ģʽ��0������������������ģʽ�� */
        unsigned char  buck2_pg_dt_sel  : 1;  /* bit[7]  : buck2 N�ܵ�P������ģʽѡ��1����������������ģʽ��0������������������ģʽ�� */
    } reg;
} SOC_SMART_BUCK2_REG6_UNION;
#endif
#define SOC_SMART_BUCK2_REG6_buck2_ocp_toff_START    (0)
#define SOC_SMART_BUCK2_REG6_buck2_ocp_toff_END      (1)
#define SOC_SMART_BUCK2_REG6_buck2_ton_START         (2)
#define SOC_SMART_BUCK2_REG6_buck2_ton_END           (3)
#define SOC_SMART_BUCK2_REG6_buck2_filter_ton_START  (4)
#define SOC_SMART_BUCK2_REG6_buck2_filter_ton_END    (5)
#define SOC_SMART_BUCK2_REG6_buck2_ng_dt_sel_START   (6)
#define SOC_SMART_BUCK2_REG6_buck2_ng_dt_sel_END     (6)
#define SOC_SMART_BUCK2_REG6_buck2_pg_dt_sel_START   (7)
#define SOC_SMART_BUCK2_REG6_buck2_pg_dt_sel_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK2_REG7_UNION
 �ṹ˵��  : BUCK2_REG7 �Ĵ����ṹ���塣��ַƫ����:0x050����ֵ:0x03�����:8
 �Ĵ���˵��: BUCK2����7�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck2_dmd_ton    : 3;  /* bit[0-2]: buck2����dmdʱ�ļ��뵼ͨʱ������000~111���� */
        unsigned char  buck2_short_pdp  : 1;  /* bit[3]  : ��·�������μĴ���.0:ʹ�ܶ�·����;1:��ʹ�ܶ�·���� */
        unsigned char  buck2_cmp_filter : 1;  /* bit[4]  : �Ƚ�����ë�̹��ܣ�0������ë�̣�1����ë�̣� */
        unsigned char  buck2_ton_dmd    : 1;  /* bit[5]  : buck2����dmdʱ���ο�����С��ͨʱ�䣨0�������Σ� */
        unsigned char  reserved         : 2;  /* bit[6-7]:  */
    } reg;
} SOC_SMART_BUCK2_REG7_UNION;
#endif
#define SOC_SMART_BUCK2_REG7_buck2_dmd_ton_START     (0)
#define SOC_SMART_BUCK2_REG7_buck2_dmd_ton_END       (2)
#define SOC_SMART_BUCK2_REG7_buck2_short_pdp_START   (3)
#define SOC_SMART_BUCK2_REG7_buck2_short_pdp_END     (3)
#define SOC_SMART_BUCK2_REG7_buck2_cmp_filter_START  (4)
#define SOC_SMART_BUCK2_REG7_buck2_cmp_filter_END    (4)
#define SOC_SMART_BUCK2_REG7_buck2_ton_dmd_START     (5)
#define SOC_SMART_BUCK2_REG7_buck2_ton_dmd_END       (5)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK3_REG0_UNION
 �ṹ˵��  : BUCK3_REG0 �Ĵ����ṹ���塣��ַƫ����:0x051����ֵ:0x01�����:8
 �Ĵ���˵��: BUCK3����0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck3_nmos_switch : 1;  /* bit[0]  : buck3 sleep��normal�л�ʱNMOS�����л���ʽ����0����dmdͬʱ�л���1����dmd֮���л��� */
        unsigned char  reserved          : 7;  /* bit[1-7]: ���� */
    } reg;
} SOC_SMART_BUCK3_REG0_UNION;
#endif
#define SOC_SMART_BUCK3_REG0_buck3_nmos_switch_START  (0)
#define SOC_SMART_BUCK3_REG0_buck3_nmos_switch_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK3_REG1_UNION
 �ṹ˵��  : BUCK3_REG1 �Ĵ����ṹ���塣��ַƫ����:0x052����ֵ:0x45�����:8
 �Ĵ���˵��: BUCK3����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck3_dbias     : 4;  /* bit[0-3]: buck3 <1:0>�Ƚ���ƫ�õ������ڣ�00~11����
                                                          buck3<3:2> �Ƚ�����ƫ�õ������ڣ�00~11���� */
        unsigned char  buck3_sleep_ng  : 1;  /* bit[4]  : buck3��sleep״̬ʱ���ڹر�NMOS power�ܡ�1��ǿ�ƹرգ�0����ǿ�ƹر� */
        unsigned char  buck3_sleep_dmd : 1;  /* bit[5]  : ������ģʽ��ǿ��NMOS�ܹرգ�0����ǿ�ƣ�1��ǿ�ƣ� */
        unsigned char  buck3_reg_r     : 2;  /* bit[6-7]: buck3�ڲ�regulator���裬���ڵ���regulator���� */
    } reg;
} SOC_SMART_BUCK3_REG1_UNION;
#endif
#define SOC_SMART_BUCK3_REG1_buck3_dbias_START      (0)
#define SOC_SMART_BUCK3_REG1_buck3_dbias_END        (3)
#define SOC_SMART_BUCK3_REG1_buck3_sleep_ng_START   (4)
#define SOC_SMART_BUCK3_REG1_buck3_sleep_ng_END     (4)
#define SOC_SMART_BUCK3_REG1_buck3_sleep_dmd_START  (5)
#define SOC_SMART_BUCK3_REG1_buck3_sleep_dmd_END    (5)
#define SOC_SMART_BUCK3_REG1_buck3_reg_r_START      (6)
#define SOC_SMART_BUCK3_REG1_buck3_reg_r_END        (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK3_REG2_UNION
 �ṹ˵��  : BUCK3_REG2 �Ĵ����ṹ���塣��ַƫ����:0x053����ֵ:0x5A�����:8
 �Ĵ���˵��: BUCK3����2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck3_adj_rlx : 4;  /* bit[0-3]: buck3 LX�����˲��������
                                                        ��1111������ȫ�����룬0000������ȫ���룩 */
        unsigned char  buck3_adj_clx : 2;  /* bit[4-5]: buck3 LX�����˲����ݵ���
                                                        ��11������ȫ���룬00������ȫ�����룩 */
        unsigned char  buck3_ocp_sel : 2;  /* bit[6-7]: buck3 ocp�������00~11���� */
    } reg;
} SOC_SMART_BUCK3_REG2_UNION;
#endif
#define SOC_SMART_BUCK3_REG2_buck3_adj_rlx_START  (0)
#define SOC_SMART_BUCK3_REG2_buck3_adj_rlx_END    (3)
#define SOC_SMART_BUCK3_REG2_buck3_adj_clx_START  (4)
#define SOC_SMART_BUCK3_REG2_buck3_adj_clx_END    (5)
#define SOC_SMART_BUCK3_REG2_buck3_ocp_sel_START  (6)
#define SOC_SMART_BUCK3_REG2_buck3_ocp_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK3_REG3_UNION
 �ṹ˵��  : BUCK3_REG3 �Ĵ����ṹ���塣��ַƫ����:0x054����ֵ:0x03�����:8
 �Ĵ���˵��: BUCK3����3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck3_dmd_sel   : 3;  /* bit[0-2]: buck3 dmd��ѡ��000~111���� */
        unsigned char  buck3_bias_reg  : 1;  /* bit[3]  : buck3�ڲ�regulator�������ڣ�0:0.5uA��1:1uA�� */
        unsigned char  buck3_en_reg    : 1;  /* bit[4]  : buck3�ڲ����ȵ�����ʹ���źš�0��ʹ�ܣ�1����ʹ�� */
        unsigned char  buck3_dmd_clamp : 1;  /* bit[5]  : dmdǶλʹ���źţ�0�����ϣ�1�������ϣ� */
        unsigned char  buck3_ocp_dis   : 1;  /* bit[6]  : buck3 �ڲ�ocp��·�����źš�0�������Σ�1������ */
        unsigned char  buck3_ocp_delay : 1;  /* bit[7]  : ocp����ʱ���ӳ�20ns�źţ�0�����ӳ���1���ӳ��� */
    } reg;
} SOC_SMART_BUCK3_REG3_UNION;
#endif
#define SOC_SMART_BUCK3_REG3_buck3_dmd_sel_START    (0)
#define SOC_SMART_BUCK3_REG3_buck3_dmd_sel_END      (2)
#define SOC_SMART_BUCK3_REG3_buck3_bias_reg_START   (3)
#define SOC_SMART_BUCK3_REG3_buck3_bias_reg_END     (3)
#define SOC_SMART_BUCK3_REG3_buck3_en_reg_START     (4)
#define SOC_SMART_BUCK3_REG3_buck3_en_reg_END       (4)
#define SOC_SMART_BUCK3_REG3_buck3_dmd_clamp_START  (5)
#define SOC_SMART_BUCK3_REG3_buck3_dmd_clamp_END    (5)
#define SOC_SMART_BUCK3_REG3_buck3_ocp_dis_START    (6)
#define SOC_SMART_BUCK3_REG3_buck3_ocp_dis_END      (6)
#define SOC_SMART_BUCK3_REG3_buck3_ocp_delay_START  (7)
#define SOC_SMART_BUCK3_REG3_buck3_ocp_delay_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK3_REG4_UNION
 �ṹ˵��  : BUCK3_REG4 �Ĵ����ṹ���塣��ַƫ����:0x055����ֵ:0x0B�����:8
 �Ĵ���˵��: BUCK3����4�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck3_reg_dr      : 3;  /* bit[0-2]: buck3�ڲ�regulator���裬���ڵ���regulator�������ȷ�Χ */
        unsigned char  buck3_dt_sel      : 2;  /* bit[3-4]: buck3����ʱ����ڡ�(1���������ӳ٣�0�������ӳ�5ns��
                                                            <1>:����ʱ����ڣ�����NTP��PTN��
                                                            <0>:����PWM�ź��·�����NTP������ʱ����� */
        unsigned char  buck3_regop_clamp : 1;  /* bit[5]  : regulator Ƕλ��·ʹ�ܣ�1��ʹ�ܡ�0����ʹ�ܣ� */
        unsigned char  buck3_reg_ss      : 1;  /* bit[6]  : buck3������ʱ�ڲ�regulator״̬��
                                                            0������״̬��1����λ���淴�� */
        unsigned char  buck3_regop_c     : 1;  /* bit[7]  : buck3�ڲ�regulator OP������ݣ����ڵ���OP��slew-rate�� */
    } reg;
} SOC_SMART_BUCK3_REG4_UNION;
#endif
#define SOC_SMART_BUCK3_REG4_buck3_reg_dr_START       (0)
#define SOC_SMART_BUCK3_REG4_buck3_reg_dr_END         (2)
#define SOC_SMART_BUCK3_REG4_buck3_dt_sel_START       (3)
#define SOC_SMART_BUCK3_REG4_buck3_dt_sel_END         (4)
#define SOC_SMART_BUCK3_REG4_buck3_regop_clamp_START  (5)
#define SOC_SMART_BUCK3_REG4_buck3_regop_clamp_END    (5)
#define SOC_SMART_BUCK3_REG4_buck3_reg_ss_START       (6)
#define SOC_SMART_BUCK3_REG4_buck3_reg_ss_END         (6)
#define SOC_SMART_BUCK3_REG4_buck3_regop_c_START      (7)
#define SOC_SMART_BUCK3_REG4_buck3_regop_c_END        (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK3_REG5_UNION
 �ṹ˵��  : BUCK3_REG5 �Ĵ����ṹ���塣��ַƫ����:0x056����ֵ:0x3C�����:8
 �Ĵ���˵��: BUCK3����5�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck3_ng_n_sel : 2;  /* bit[0-1]: buck3 N power��������ӦNMOS�����������ڣ�00~11�������������� */
        unsigned char  buck3_ng_p_sel : 2;  /* bit[2-3]: buck3 N power��������ӦPMOS�����������ڣ�00~11��С���������� */
        unsigned char  buck3_pg_n_sel : 2;  /* bit[4-5]: buck3 P power��������ӦNMOS�����������ڣ�00~11��С���������� */
        unsigned char  buck3_pg_p_sel : 2;  /* bit[6-7]: buck3 P power��������ӦPMOS�����������ڣ�00~11�������������� */
    } reg;
} SOC_SMART_BUCK3_REG5_UNION;
#endif
#define SOC_SMART_BUCK3_REG5_buck3_ng_n_sel_START  (0)
#define SOC_SMART_BUCK3_REG5_buck3_ng_n_sel_END    (1)
#define SOC_SMART_BUCK3_REG5_buck3_ng_p_sel_START  (2)
#define SOC_SMART_BUCK3_REG5_buck3_ng_p_sel_END    (3)
#define SOC_SMART_BUCK3_REG5_buck3_pg_n_sel_START  (4)
#define SOC_SMART_BUCK3_REG5_buck3_pg_n_sel_END    (5)
#define SOC_SMART_BUCK3_REG5_buck3_pg_p_sel_START  (6)
#define SOC_SMART_BUCK3_REG5_buck3_pg_p_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK3_REG6_UNION
 �ṹ˵��  : BUCK3_REG6 �Ĵ����ṹ���塣��ַƫ����:0x057����ֵ:0x01�����:8
 �Ĵ���˵��: BUCK3����6�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck3_ocp_toff   : 2;  /* bit[0-1]: buck3����ocpʱ��С�ض�ʱ������00~11���� */
        unsigned char  buck3_ton        : 2;  /* bit[2-3]: buck3��С��ͨʱ�䣨00~11���� */
        unsigned char  buck3_filter_ton : 2;  /* bit[4-5]: �Ƚ�����ë�̣�00~11���� */
        unsigned char  buck3_ng_dt_sel  : 1;  /* bit[6]  : buck3 P�ܵ�N������ģʽѡ��1����������������ģʽ��0������������������ģʽ�� */
        unsigned char  buck3_pg_dt_sel  : 1;  /* bit[7]  : buck3 N�ܵ�P������ģʽѡ��1����������������ģʽ��0������������������ģʽ�� */
    } reg;
} SOC_SMART_BUCK3_REG6_UNION;
#endif
#define SOC_SMART_BUCK3_REG6_buck3_ocp_toff_START    (0)
#define SOC_SMART_BUCK3_REG6_buck3_ocp_toff_END      (1)
#define SOC_SMART_BUCK3_REG6_buck3_ton_START         (2)
#define SOC_SMART_BUCK3_REG6_buck3_ton_END           (3)
#define SOC_SMART_BUCK3_REG6_buck3_filter_ton_START  (4)
#define SOC_SMART_BUCK3_REG6_buck3_filter_ton_END    (5)
#define SOC_SMART_BUCK3_REG6_buck3_ng_dt_sel_START   (6)
#define SOC_SMART_BUCK3_REG6_buck3_ng_dt_sel_END     (6)
#define SOC_SMART_BUCK3_REG6_buck3_pg_dt_sel_START   (7)
#define SOC_SMART_BUCK3_REG6_buck3_pg_dt_sel_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK3_REG7_UNION
 �ṹ˵��  : BUCK3_REG7 �Ĵ����ṹ���塣��ַƫ����:0x058����ֵ:0x03�����:8
 �Ĵ���˵��: BUCK3����7�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck3_dmd_ton    : 3;  /* bit[0-2]: buck3����dmdʱ�ļ��뵼ͨʱ������000~111���� */
        unsigned char  buck3_short_pdp  : 1;  /* bit[3]  : ��·�������μĴ���.0:ʹ�ܶ�·����;1:��ʹ�ܶ�·���� */
        unsigned char  buck3_cmp_filter : 1;  /* bit[4]  : �Ƚ�����ë�̹��ܣ�0������ë�̣�1����ë�̣� */
        unsigned char  buck3_ton_dmd    : 1;  /* bit[5]  : buck3����dmdʱ���ο�����С��ͨʱ�䣨0�������Σ� */
        unsigned char  reserved         : 2;  /* bit[6-7]: ���� */
    } reg;
} SOC_SMART_BUCK3_REG7_UNION;
#endif
#define SOC_SMART_BUCK3_REG7_buck3_dmd_ton_START     (0)
#define SOC_SMART_BUCK3_REG7_buck3_dmd_ton_END       (2)
#define SOC_SMART_BUCK3_REG7_buck3_short_pdp_START   (3)
#define SOC_SMART_BUCK3_REG7_buck3_short_pdp_END     (3)
#define SOC_SMART_BUCK3_REG7_buck3_cmp_filter_START  (4)
#define SOC_SMART_BUCK3_REG7_buck3_cmp_filter_END    (4)
#define SOC_SMART_BUCK3_REG7_buck3_ton_dmd_START     (5)
#define SOC_SMART_BUCK3_REG7_buck3_ton_dmd_END       (5)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK4_REG0_UNION
 �ṹ˵��  : BUCK4_REG0 �Ĵ����ṹ���塣��ַƫ����:0x059����ֵ:0x01�����:8
 �Ĵ���˵��: BUCK4����0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck4_nmos_switch : 1;  /* bit[0]  : buck4 sleep��normal�л�ʱNMOS�����л���ʽ����0����dmdͬʱ�л���1����dmd֮���л��� */
        unsigned char  reserved          : 7;  /* bit[1-7]: ���� */
    } reg;
} SOC_SMART_BUCK4_REG0_UNION;
#endif
#define SOC_SMART_BUCK4_REG0_buck4_nmos_switch_START  (0)
#define SOC_SMART_BUCK4_REG0_buck4_nmos_switch_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK4_REG1_UNION
 �ṹ˵��  : BUCK4_REG1 �Ĵ����ṹ���塣��ַƫ����:0x05A����ֵ:0x45�����:8
 �Ĵ���˵��: BUCK4����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck4_dbias     : 4;  /* bit[0-3]: buck4 <1:0>�Ƚ���ƫ�õ������ڣ�00~11����
                                                          buck4<3:2> �Ƚ�����ƫ�õ������ڣ�00~11���� */
        unsigned char  buck4_sleep_ng  : 1;  /* bit[4]  : buck4��sleep״̬ʱ���ڹر�NMOS power�ܡ�1��ǿ�ƹرգ�0����ǿ�ƹر� */
        unsigned char  buck4_sleep_dmd : 1;  /* bit[5]  : ������ģʽ��ǿ��NMOS�ܹرգ�0����ǿ�ƣ�1��ǿ�ƣ� */
        unsigned char  buck4_reg_r     : 2;  /* bit[6-7]: buck4�ڲ�regulator���裬���ڵ���regulator���� */
    } reg;
} SOC_SMART_BUCK4_REG1_UNION;
#endif
#define SOC_SMART_BUCK4_REG1_buck4_dbias_START      (0)
#define SOC_SMART_BUCK4_REG1_buck4_dbias_END        (3)
#define SOC_SMART_BUCK4_REG1_buck4_sleep_ng_START   (4)
#define SOC_SMART_BUCK4_REG1_buck4_sleep_ng_END     (4)
#define SOC_SMART_BUCK4_REG1_buck4_sleep_dmd_START  (5)
#define SOC_SMART_BUCK4_REG1_buck4_sleep_dmd_END    (5)
#define SOC_SMART_BUCK4_REG1_buck4_reg_r_START      (6)
#define SOC_SMART_BUCK4_REG1_buck4_reg_r_END        (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK4_REG2_UNION
 �ṹ˵��  : BUCK4_REG2 �Ĵ����ṹ���塣��ַƫ����:0x05B����ֵ:0x5A�����:8
 �Ĵ���˵��: BUCK4����2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck4_adj_rlx : 4;  /* bit[0-3]: buck4 LX�����˲��������
                                                        ��1111������ȫ�����룬0000������ȫ���룩 */
        unsigned char  buck4_adj_clx : 2;  /* bit[4-5]: buck4 LX�����˲����ݵ���
                                                        ��11������ȫ���룬00������ȫ�����룩 */
        unsigned char  buck4_ocp_sel : 2;  /* bit[6-7]: buck4 ocp�������00~11���� */
    } reg;
} SOC_SMART_BUCK4_REG2_UNION;
#endif
#define SOC_SMART_BUCK4_REG2_buck4_adj_rlx_START  (0)
#define SOC_SMART_BUCK4_REG2_buck4_adj_rlx_END    (3)
#define SOC_SMART_BUCK4_REG2_buck4_adj_clx_START  (4)
#define SOC_SMART_BUCK4_REG2_buck4_adj_clx_END    (5)
#define SOC_SMART_BUCK4_REG2_buck4_ocp_sel_START  (6)
#define SOC_SMART_BUCK4_REG2_buck4_ocp_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK4_REG3_UNION
 �ṹ˵��  : BUCK4_REG3 �Ĵ����ṹ���塣��ַƫ����:0x05C����ֵ:0x03�����:8
 �Ĵ���˵��: BUCK4����3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck4_dmd_sel   : 3;  /* bit[0-2]: buck4 dmd��ѡ��000~111���� */
        unsigned char  buck4_bias_reg  : 1;  /* bit[3]  : buck4�ڲ�regulator�������ڣ�0:0.5uA��1:1uA�� */
        unsigned char  buck4_en_reg    : 1;  /* bit[4]  : buck4�ڲ����ȵ�����ʹ���źš�0��ʹ�ܣ�1����ʹ�� */
        unsigned char  buck4_dmd_clamp : 1;  /* bit[5]  : dmdǶλʹ���źţ�0�����ϣ�1�������ϣ� */
        unsigned char  buck4_ocp_dis   : 1;  /* bit[6]  : buck4 �ڲ�ocp��·�����źš�0�������Σ�1������ */
        unsigned char  buck4_ocp_delay : 1;  /* bit[7]  : ocp����ʱ���ӳ�20ns�źţ�0�����ӳ���1���ӳ��� */
    } reg;
} SOC_SMART_BUCK4_REG3_UNION;
#endif
#define SOC_SMART_BUCK4_REG3_buck4_dmd_sel_START    (0)
#define SOC_SMART_BUCK4_REG3_buck4_dmd_sel_END      (2)
#define SOC_SMART_BUCK4_REG3_buck4_bias_reg_START   (3)
#define SOC_SMART_BUCK4_REG3_buck4_bias_reg_END     (3)
#define SOC_SMART_BUCK4_REG3_buck4_en_reg_START     (4)
#define SOC_SMART_BUCK4_REG3_buck4_en_reg_END       (4)
#define SOC_SMART_BUCK4_REG3_buck4_dmd_clamp_START  (5)
#define SOC_SMART_BUCK4_REG3_buck4_dmd_clamp_END    (5)
#define SOC_SMART_BUCK4_REG3_buck4_ocp_dis_START    (6)
#define SOC_SMART_BUCK4_REG3_buck4_ocp_dis_END      (6)
#define SOC_SMART_BUCK4_REG3_buck4_ocp_delay_START  (7)
#define SOC_SMART_BUCK4_REG3_buck4_ocp_delay_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK4_REG4_UNION
 �ṹ˵��  : BUCK4_REG4 �Ĵ����ṹ���塣��ַƫ����:0x05D����ֵ:0x0B�����:8
 �Ĵ���˵��: BUCK4����4�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck4_reg_dr      : 3;  /* bit[0-2]: buck4�ڲ�regulator���裬���ڵ���regulator�������ȷ�Χ */
        unsigned char  buck4_dt_sel      : 2;  /* bit[3-4]: buck4����ʱ����ڡ�(1���������ӳ٣�0�������ӳ�5ns��
                                                            <1>:����ʱ����ڣ�����NTP��PTN��
                                                            <0>:����PWM�ź��·�����NTP������ʱ����� */
        unsigned char  buck4_regop_clamp : 1;  /* bit[5]  : regulator Ƕλ��·ʹ�ܣ�1��ʹ�ܡ�0����ʹ�ܣ� */
        unsigned char  buck4_reg_ss      : 1;  /* bit[6]  : buck4������ʱ�ڲ�regulator״̬��
                                                            0������״̬��1����λ���淴�� */
        unsigned char  buck4_regop_c     : 1;  /* bit[7]  : buck4�ڲ�regulator OP������ݣ����ڵ���OP��slew-rate�� */
    } reg;
} SOC_SMART_BUCK4_REG4_UNION;
#endif
#define SOC_SMART_BUCK4_REG4_buck4_reg_dr_START       (0)
#define SOC_SMART_BUCK4_REG4_buck4_reg_dr_END         (2)
#define SOC_SMART_BUCK4_REG4_buck4_dt_sel_START       (3)
#define SOC_SMART_BUCK4_REG4_buck4_dt_sel_END         (4)
#define SOC_SMART_BUCK4_REG4_buck4_regop_clamp_START  (5)
#define SOC_SMART_BUCK4_REG4_buck4_regop_clamp_END    (5)
#define SOC_SMART_BUCK4_REG4_buck4_reg_ss_START       (6)
#define SOC_SMART_BUCK4_REG4_buck4_reg_ss_END         (6)
#define SOC_SMART_BUCK4_REG4_buck4_regop_c_START      (7)
#define SOC_SMART_BUCK4_REG4_buck4_regop_c_END        (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK4_REG5_UNION
 �ṹ˵��  : BUCK4_REG5 �Ĵ����ṹ���塣��ַƫ����:0x05E����ֵ:0x3C�����:8
 �Ĵ���˵��: BUCK4����5�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck4_ng_n_sel : 2;  /* bit[0-1]: buck4 N power��������ӦNMOS�����������ڣ�00~11�������������� */
        unsigned char  buck4_ng_p_sel : 2;  /* bit[2-3]: buck4 N power��������ӦPMOS�����������ڣ�00~11��С���������� */
        unsigned char  buck4_pg_n_sel : 2;  /* bit[4-5]: buck4 P power��������ӦNMOS�����������ڣ�00~11��С���������� */
        unsigned char  buck4_pg_p_sel : 2;  /* bit[6-7]: buck4 P power��������ӦPMOS�����������ڣ�00~11�������������� */
    } reg;
} SOC_SMART_BUCK4_REG5_UNION;
#endif
#define SOC_SMART_BUCK4_REG5_buck4_ng_n_sel_START  (0)
#define SOC_SMART_BUCK4_REG5_buck4_ng_n_sel_END    (1)
#define SOC_SMART_BUCK4_REG5_buck4_ng_p_sel_START  (2)
#define SOC_SMART_BUCK4_REG5_buck4_ng_p_sel_END    (3)
#define SOC_SMART_BUCK4_REG5_buck4_pg_n_sel_START  (4)
#define SOC_SMART_BUCK4_REG5_buck4_pg_n_sel_END    (5)
#define SOC_SMART_BUCK4_REG5_buck4_pg_p_sel_START  (6)
#define SOC_SMART_BUCK4_REG5_buck4_pg_p_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK4_REG6_UNION
 �ṹ˵��  : BUCK4_REG6 �Ĵ����ṹ���塣��ַƫ����:0x05F����ֵ:0x05�����:8
 �Ĵ���˵��: BUCK4����6�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck4_ocp_toff   : 2;  /* bit[0-1]: buck4����ocpʱ��С�ض�ʱ������00~11���� */
        unsigned char  buck4_ton        : 2;  /* bit[2-3]: buck4��С��ͨʱ�䣨00~11���� */
        unsigned char  buck4_filter_ton : 2;  /* bit[4-5]: �Ƚ�����ë�̣�00~11���� */
        unsigned char  buck4_ng_dt_sel  : 1;  /* bit[6]  : buck4 P�ܵ�N������ģʽѡ��1����������������ģʽ��0������������������ģʽ�� */
        unsigned char  buck4_pg_dt_sel  : 1;  /* bit[7]  : buck4 N�ܵ�P������ģʽѡ��1����������������ģʽ��0������������������ģʽ�� */
    } reg;
} SOC_SMART_BUCK4_REG6_UNION;
#endif
#define SOC_SMART_BUCK4_REG6_buck4_ocp_toff_START    (0)
#define SOC_SMART_BUCK4_REG6_buck4_ocp_toff_END      (1)
#define SOC_SMART_BUCK4_REG6_buck4_ton_START         (2)
#define SOC_SMART_BUCK4_REG6_buck4_ton_END           (3)
#define SOC_SMART_BUCK4_REG6_buck4_filter_ton_START  (4)
#define SOC_SMART_BUCK4_REG6_buck4_filter_ton_END    (5)
#define SOC_SMART_BUCK4_REG6_buck4_ng_dt_sel_START   (6)
#define SOC_SMART_BUCK4_REG6_buck4_ng_dt_sel_END     (6)
#define SOC_SMART_BUCK4_REG6_buck4_pg_dt_sel_START   (7)
#define SOC_SMART_BUCK4_REG6_buck4_pg_dt_sel_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK4_REG7_UNION
 �ṹ˵��  : BUCK4_REG7 �Ĵ����ṹ���塣��ַƫ����:0x060����ֵ:0x02�����:8
 �Ĵ���˵��: BUCK4����7�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck4_dmd_ton    : 3;  /* bit[0-2]: buck4����dmdʱ�ļ��뵼ͨʱ������000~111���� */
        unsigned char  buck4_short_pdp  : 1;  /* bit[3]  : ��·�������μĴ���.0:ʹ�ܶ�·����;1:��ʹ�ܶ�·���� */
        unsigned char  buck4_cmp_filter : 1;  /* bit[4]  : �Ƚ�����ë�̹��ܣ�0������ë�̣�1����ë�̣� */
        unsigned char  buck4_ton_dmd    : 1;  /* bit[5]  : buck4����dmdʱ���ο�����С��ͨʱ�䣨0�������Σ� */
        unsigned char  reserved         : 2;  /* bit[6-7]: ������ */
    } reg;
} SOC_SMART_BUCK4_REG7_UNION;
#endif
#define SOC_SMART_BUCK4_REG7_buck4_dmd_ton_START     (0)
#define SOC_SMART_BUCK4_REG7_buck4_dmd_ton_END       (2)
#define SOC_SMART_BUCK4_REG7_buck4_short_pdp_START   (3)
#define SOC_SMART_BUCK4_REG7_buck4_short_pdp_END     (3)
#define SOC_SMART_BUCK4_REG7_buck4_cmp_filter_START  (4)
#define SOC_SMART_BUCK4_REG7_buck4_cmp_filter_END    (4)
#define SOC_SMART_BUCK4_REG7_buck4_ton_dmd_START     (5)
#define SOC_SMART_BUCK4_REG7_buck4_ton_dmd_END       (5)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK_RESERVE0_UNION
 �ṹ˵��  : BUCK_RESERVE0 �Ĵ����ṹ���塣��ַƫ����:0x061����ֵ:0x00�����:8
 �Ĵ���˵��: BUCKԤ��0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck_reserve1 : 8;  /* bit[0-7]: buck���üĴ��� */
    } reg;
} SOC_SMART_BUCK_RESERVE0_UNION;
#endif
#define SOC_SMART_BUCK_RESERVE0_buck_reserve1_START  (0)
#define SOC_SMART_BUCK_RESERVE0_buck_reserve1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK_RESERVE1_UNION
 �ṹ˵��  : BUCK_RESERVE1 �Ĵ����ṹ���塣��ַƫ����:0x062����ֵ:0x00�����:8
 �Ĵ���˵��: BUCKԤ��1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck_reserve2 : 8;  /* bit[0-7]: buck���üĴ��� */
    } reg;
} SOC_SMART_BUCK_RESERVE1_UNION;
#endif
#define SOC_SMART_BUCK_RESERVE1_buck_reserve2_START  (0)
#define SOC_SMART_BUCK_RESERVE1_buck_reserve2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLK_TOP0_UNION
 �ṹ˵��  : CLK_TOP0 �Ĵ����ṹ���塣��ַƫ����:0x063����ֵ:0x00�����:8
 �Ĵ���˵��: CLK_TOP����0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  xo_otp_reg  : 2;  /* bit[0-1]: XO core�ĵ������� */
        unsigned char  xo_ldo_curr : 2;  /* bit[2-3]: �ڲ�LDOƫ�õ�����ƣ�00��ʾ����300uA */
        unsigned char  xo_ldo_res  : 3;  /* bit[4-6]: �ڲ�LDO�ķ������裬000:1.8V;001��1.4V;010��1.5V;011��1.6V;100��1.7V;101��1.9V;110��2.0V;111��2.1V */
        unsigned char  reserved    : 1;  /* bit[7]  : ������ */
    } reg;
} SOC_SMART_CLK_TOP0_UNION;
#endif
#define SOC_SMART_CLK_TOP0_xo_otp_reg_START   (0)
#define SOC_SMART_CLK_TOP0_xo_otp_reg_END     (1)
#define SOC_SMART_CLK_TOP0_xo_ldo_curr_START  (2)
#define SOC_SMART_CLK_TOP0_xo_ldo_curr_END    (3)
#define SOC_SMART_CLK_TOP0_xo_ldo_res_START   (4)
#define SOC_SMART_CLK_TOP0_xo_ldo_res_END     (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLK_TOP1_UNION
 �ṹ˵��  : CLK_TOP1 �Ĵ����ṹ���塣��ַƫ����:0x064����ֵ:0x00�����:8
 �Ĵ���˵��: CLK_TOP����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  reserved_0       : 4;  /* bit[0-3]: ���� */
        unsigned char  xo_buff_curr_reg : 1;  /* bit[4]  : XO core input buffer�ĵ�������  */
        unsigned char  xo_otp_reg_sel1  : 1;  /* bit[5]  : XO core input buffer�ĵ�������ѡ��0��OTP����1���Ĵ������� */
        unsigned char  xo_otp_reg_sel0  : 1;  /* bit[6]  : XO core�ĵ�������ѡ��0��OTP����1���Ĵ������� */
        unsigned char  reserved_1       : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_CLK_TOP1_UNION;
#endif
#define SOC_SMART_CLK_TOP1_xo_buff_curr_reg_START  (4)
#define SOC_SMART_CLK_TOP1_xo_buff_curr_reg_END    (4)
#define SOC_SMART_CLK_TOP1_xo_otp_reg_sel1_START   (5)
#define SOC_SMART_CLK_TOP1_xo_otp_reg_sel1_END     (5)
#define SOC_SMART_CLK_TOP1_xo_otp_reg_sel0_START   (6)
#define SOC_SMART_CLK_TOP1_xo_otp_reg_sel0_END     (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLK_TOP3_UNION
 �ṹ˵��  : CLK_TOP3 �Ĵ����ṹ���塣��ַƫ����:0x066����ֵ:0xFD�����:8
 �Ĵ���˵��: CLK_TOP����3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  trim_freq_clk3 : 2;  /* bit[0-1]: clk_buf3(RF1_BUF)�����������ƣ�00:1x;01:2x;10:3x;11:4x, */
        unsigned char  trim_freq_clk2 : 2;  /* bit[2-3]: clk_buf2��NFC_BUF�������������ƣ�00:1x;01:2x;10:3x;11:4x, */
        unsigned char  trim_freq_clk1 : 2;  /* bit[4-5]: clk_buf1��CONN_BUF�������������ƣ�00:1x;01:2x;10:3x;11:4x, */
        unsigned char  trim_freq_clk0 : 2;  /* bit[6-7]: clk_buf0��BB_BUF�������������ƣ�00:1x;01:2x;10:3x;11:4x, */
    } reg;
} SOC_SMART_CLK_TOP3_UNION;
#endif
#define SOC_SMART_CLK_TOP3_trim_freq_clk3_START  (0)
#define SOC_SMART_CLK_TOP3_trim_freq_clk3_END    (1)
#define SOC_SMART_CLK_TOP3_trim_freq_clk2_START  (2)
#define SOC_SMART_CLK_TOP3_trim_freq_clk2_END    (3)
#define SOC_SMART_CLK_TOP3_trim_freq_clk1_START  (4)
#define SOC_SMART_CLK_TOP3_trim_freq_clk1_END    (5)
#define SOC_SMART_CLK_TOP3_trim_freq_clk0_START  (6)
#define SOC_SMART_CLK_TOP3_trim_freq_clk0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLK_TOP4_UNION
 �ṹ˵��  : CLK_TOP4 �Ĵ����ṹ���塣��ַƫ����:0x067����ֵ:0x01�����:8
 �Ĵ���˵��: CLK_TOP����4�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  trim_freq_clk4 : 2;  /* bit[0-1]: clk_buf3(RF2_BUF)�����������ƣ�00:1x;01:2x;10:3x;11:4x, */
        unsigned char  reserved       : 6;  /* bit[2-7]: ���� */
    } reg;
} SOC_SMART_CLK_TOP4_UNION;
#endif
#define SOC_SMART_CLK_TOP4_trim_freq_clk4_START  (0)
#define SOC_SMART_CLK_TOP4_trim_freq_clk4_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLK_TOP5_UNION
 �ṹ˵��  : CLK_TOP5 �Ĵ����ṹ���塣��ַƫ����:0x068����ֵ:0x00�����:8
 �Ĵ���˵��: CLK_TOP����5�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  xo_reserve : 8;  /* bit[0-7]:  */
    } reg;
} SOC_SMART_CLK_TOP5_UNION;
#endif
#define SOC_SMART_CLK_TOP5_xo_reserve_START  (0)
#define SOC_SMART_CLK_TOP5_xo_reserve_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLASSD_CTRL1_UNION
 �ṹ˵��  : CLASSD_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x069����ֵ:0x04�����:8
 �Ĵ���˵��: CLASS_D����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  classd_gain     : 2;  /* bit[0-1]: classD������ơ�
                                                          00:12db
                                                          01:15db
                                                          10:18db
                                                          11:21db
                                                          ������mute�� */
        unsigned char  classd_i_ocp    : 2;  /* bit[2-3]: classd ������ֵ����:
                                                          00 1.2A ��
                                                          01 1.59A ��
                                                          10 2A ��
                                                          11 2.39A �� */
        unsigned char  classd_mute_sel : 1;  /* bit[4]  : classd_mute_sel���ơ�
                                                          0����ʱmuteģʽ��
                                                          1������muteģʽ�� */
        unsigned char  classd_mute     : 1;  /* bit[5]  : classd_mute���ơ�
                                                          0������������
                                                          1��Mute�� */
        unsigned char  reserved        : 2;  /* bit[6-7]: ���� */
    } reg;
} SOC_SMART_CLASSD_CTRL1_UNION;
#endif
#define SOC_SMART_CLASSD_CTRL1_classd_gain_START      (0)
#define SOC_SMART_CLASSD_CTRL1_classd_gain_END        (1)
#define SOC_SMART_CLASSD_CTRL1_classd_i_ocp_START     (2)
#define SOC_SMART_CLASSD_CTRL1_classd_i_ocp_END       (3)
#define SOC_SMART_CLASSD_CTRL1_classd_mute_sel_START  (4)
#define SOC_SMART_CLASSD_CTRL1_classd_mute_sel_END    (4)
#define SOC_SMART_CLASSD_CTRL1_classd_mute_START      (5)
#define SOC_SMART_CLASSD_CTRL1_classd_mute_END        (5)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLASSD_CTRL2_UNION
 �ṹ˵��  : CLASSD_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0x06A����ֵ:0x05�����:8
 �Ĵ���˵��: CLASS_D����2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  classd_n_sel  : 2;  /* bit[0-1]: ������nmos���ơ�
                                                        00������������
                                                        01��Ĭ��������
                                                        10������������
                                                        11������������ */
        unsigned char  classd_p_sel  : 2;  /* bit[2-3]: ������pmos���ơ�
                                                        00������������
                                                        01��Ĭ��������
                                                        10������������
                                                        11������������ */
        unsigned char  classd_i_pump : 2;  /* bit[4-5]: Ramp���У�pump�������ơ�
                                                        00��6��A��
                                                        01��7��A��
                                                        10��7��A��
                                                        11��8��A�� */
        unsigned char  reserved      : 2;  /* bit[6-7]: ���� */
    } reg;
} SOC_SMART_CLASSD_CTRL2_UNION;
#endif
#define SOC_SMART_CLASSD_CTRL2_classd_n_sel_START   (0)
#define SOC_SMART_CLASSD_CTRL2_classd_n_sel_END     (1)
#define SOC_SMART_CLASSD_CTRL2_classd_p_sel_START   (2)
#define SOC_SMART_CLASSD_CTRL2_classd_p_sel_END     (3)
#define SOC_SMART_CLASSD_CTRL2_classd_i_pump_START  (4)
#define SOC_SMART_CLASSD_CTRL2_classd_i_pump_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLASSD_CTRL3_UNION
 �ṹ˵��  : CLASSD_CTRL3 �Ĵ����ṹ���塣��ַƫ����:0x06B����ֵ:0x00�����:8
 �Ĵ���˵��: CLASS_D����3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  classd_ocp_bps : 1;  /* bit[0]  : �����������ơ�
                                                         0����������������
                                                         1��bypass����������·�� */
        unsigned char  classd_dt_sel  : 1;  /* bit[1]  : dead time���ơ�
                                                         0��3ns��
                                                         1��6ns�� */
        unsigned char  classd_pls_byp : 1;  /* bit[2]  : ��С�������ޣ�
                                                         0����������
                                                         1��bypass��С�������� */
        unsigned char  en_classd_int  : 1;  /* bit[3]  : classDʹ�ܿ��ơ�
                                                         1��������
                                                         0���رա� */
        unsigned char  classd_drv_en  : 1;  /* bit[4]  : ������·��ʹ���źš�1��ʹ��0����ʹ�� */
        unsigned char  reserved       : 3;  /* bit[5-7]: ���� */
    } reg;
} SOC_SMART_CLASSD_CTRL3_UNION;
#endif
#define SOC_SMART_CLASSD_CTRL3_classd_ocp_bps_START  (0)
#define SOC_SMART_CLASSD_CTRL3_classd_ocp_bps_END    (0)
#define SOC_SMART_CLASSD_CTRL3_classd_dt_sel_START   (1)
#define SOC_SMART_CLASSD_CTRL3_classd_dt_sel_END     (1)
#define SOC_SMART_CLASSD_CTRL3_classd_pls_byp_START  (2)
#define SOC_SMART_CLASSD_CTRL3_classd_pls_byp_END    (2)
#define SOC_SMART_CLASSD_CTRL3_en_classd_int_START   (3)
#define SOC_SMART_CLASSD_CTRL3_en_classd_int_END     (3)
#define SOC_SMART_CLASSD_CTRL3_classd_drv_en_START   (4)
#define SOC_SMART_CLASSD_CTRL3_classd_drv_en_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_VSET_BUCK2_ADJ_UNION
 �ṹ˵��  : VSET_BUCK2_ADJ �Ĵ����ṹ���塣��ַƫ����:0x06D����ֵ:0x20�����:8
 �Ĵ���˵��: BUCK2��ѹ���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck2_dv : 6;
        unsigned char  reserved : 2;  /* bit[6-7]: ���� */
    } reg;
} SOC_SMART_VSET_BUCK2_ADJ_UNION;
#endif
#define SOC_SMART_VSET_BUCK2_ADJ_buck2_dv_START  (0)
#define SOC_SMART_VSET_BUCK2_ADJ_buck2_dv_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SMART_VSET_BUCK3_ADJ_UNION
 �ṹ˵��  : VSET_BUCK3_ADJ �Ĵ����ṹ���塣��ַƫ����:0x06E����ֵ:0x02�����:8
 �Ĵ���˵��: BUCK3��ѹ���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck3_dv : 4;  /* bit[0-3]: buck3�����ѹ����:
                                                   0000 1.2 V��
                                                   0001 1.225 V��
                                                   0010 1.25 V��
                                                   0011 1.275 V��
                                                   0100 1.3 V��
                                                   0101 1.325 V��
                                                   0110 1.35 V��
                                                   0111 1.375 V��
                                                   1000 1.4 V��
                                                   1001 1.425 V��
                                                   1010 1.45 V��
                                                   1011 1.475 V��
                                                   1100 1.5 V��
                                                   1101 1.525 V��
                                                   1110 1.55 V��
                                                   1111 1.575 V�� */
        unsigned char  reserved : 4;  /* bit[4-7]: ���� */
    } reg;
} SOC_SMART_VSET_BUCK3_ADJ_UNION;
#endif
#define SOC_SMART_VSET_BUCK3_ADJ_buck3_dv_START  (0)
#define SOC_SMART_VSET_BUCK3_ADJ_buck3_dv_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_SMART_VSET_BUCK4_ADJ0_UNION
 �ṹ˵��  : VSET_BUCK4_ADJ0 �Ĵ����ṹ���塣��ַƫ����:0x06F����ֵ:0x08�����:8
 �Ĵ���˵��: BUCK4��ѹ����0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck4_dv : 4;  /* bit[0-3]: buck4�����ѹ����:
                                                   0000 1.9 V��
                                                   0001 1.925 V��
                                                   0010 1.95 V��
                                                   0011 1.975 V��
                                                   0100 2 V��
                                                   0101 2.025 V��
                                                   0110 2.05 V��
                                                   0111 2.075 V��
                                                   1000 2.1 V��
                                                   1001 2.125 V��
                                                   1010 2.15 V��
                                                   1011 2.175 V��
                                                   1100 2.2 V��
                                                   1101 2.225 V��
                                                   1110 2.25 V��
                                                   1111 2.275 V�� */
        unsigned char  reserved : 4;  /* bit[4-7]: ���� */
    } reg;
} SOC_SMART_VSET_BUCK4_ADJ0_UNION;
#endif
#define SOC_SMART_VSET_BUCK4_ADJ0_buck4_dv_START  (0)
#define SOC_SMART_VSET_BUCK4_ADJ0_buck4_dv_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_SMART_VSET_BUCK4_ADJ1_UNION
 �ṹ˵��  : VSET_BUCK4_ADJ1 �Ĵ����ṹ���塣��ַƫ����:0x070����ֵ:0x08�����:8
 �Ĵ���˵��: BUCK4��ѹ����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck4_dv_adj : 4;  /* bit[0-3]: ��PMU����ECOģʽ��Buck4�ĵ�ѹ���ͣ�Ŀ���ѹ�Ĵ������ã��Ĵ���Ĭ��ֵΪ2.1V�� */
        unsigned char  reserved     : 4;  /* bit[4-7]: ���� */
    } reg;
} SOC_SMART_VSET_BUCK4_ADJ1_UNION;
#endif
#define SOC_SMART_VSET_BUCK4_ADJ1_buck4_dv_adj_START  (0)
#define SOC_SMART_VSET_BUCK4_ADJ1_buck4_dv_adj_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO1_REG_ADJ_UNION
 �ṹ˵��  : LDO1_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x071����ֵ:0x14�����:8
 �Ĵ���˵��: LDO1���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo1  : 3;  /* bit[0-2]: LDO1��ѹ���ڣ�
                                                     0x0: 1.90V��
                                                     0x1: 1.95V ��
                                                     0x2: 2.00V ��
                                                     0x3: 2.05V ��
                                                     0x4: 2.10V ��
                                                     0x5: 2.15V ��
                                                     0x6: 2.20V ��
                                                     0x7: 2.25V�� */
        unsigned char  reserved_0 : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo1 : 3;  /* bit[4-6]: LDO1���ص����ʲ���������5mV / Step */
        unsigned char  reserved_1 : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO1_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO1_REG_ADJ_vset_ldo1_START   (0)
#define SOC_SMART_LDO1_REG_ADJ_vset_ldo1_END     (2)
#define SOC_SMART_LDO1_REG_ADJ_vrset_ldo1_START  (4)
#define SOC_SMART_LDO1_REG_ADJ_vrset_ldo1_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO2_REG_ADJ_UNION
 �ṹ˵��  : LDO2_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x072����ֵ:0x10�����:8
 �Ĵ���˵��: LDO2���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo2  : 3;  /* bit[0-2]: LDO2��ѹ���ڣ�
                                                     0x0: 2.50V ��
                                                     0x1: 2.60V ��
                                                     0x2: 2.70V ��
                                                     0x3: 2.80V ��
                                                     0x4: 2.90V ��
                                                     0x5: 3.00V ��
                                                     0x6: 3.10V ��
                                                     0x7: 3.20V �� */
        unsigned char  reserved_0 : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo2 : 3;  /* bit[4-6]: LDO2���ص����ʲ���������5mV / Step */
        unsigned char  reserved_1 : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO2_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO2_REG_ADJ_vset_ldo2_START   (0)
#define SOC_SMART_LDO2_REG_ADJ_vset_ldo2_END     (2)
#define SOC_SMART_LDO2_REG_ADJ_vrset_ldo2_START  (4)
#define SOC_SMART_LDO2_REG_ADJ_vrset_ldo2_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO3_REG_ADJ0_UNION
 �ṹ˵��  : LDO3_REG_ADJ0 �Ĵ����ṹ���塣��ַƫ����:0x073����ֵ:0x25�����:8
 �Ĵ���˵��: LDO3����0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo3  : 3;  /* bit[0-2]: LDO3��ѹ���ڣ�
                                                     0x0:0.80V ��
                                                     0x1: 0.85V ��
                                                     0x2: 0.90V ��
                                                     0x3: 0.95V ��
                                                     0x4: 1.00V ��
                                                     0x5: 1.05V��
                                                     0x6: 1.10V��
                                                     0x7��1.15V��
                                                     OTP�ɱ��Ĭ�ϵ�ѹ��
                                                     otp_vset:
                                                     0x0 : 1.05V ��
                                                     0x1 : 0.9V ��
                                                     ע��OTPû�б��ǰPmu�ϵ�ʱldo3_battΪ1.0V����̺��ѹΪ0.85V����ldo3_buck�ϵ�ʱvset_ldo3 otpû��дΪ1.05V����̺�Ϊ0.9V�� */
        unsigned char  reserved_0 : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo3 : 3;  /* bit[4-6]: LDO3���ص����ʲ���������5mV / Step */
        unsigned char  reserved_1 : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO3_REG_ADJ0_UNION;
#endif
#define SOC_SMART_LDO3_REG_ADJ0_vset_ldo3_START   (0)
#define SOC_SMART_LDO3_REG_ADJ0_vset_ldo3_END     (2)
#define SOC_SMART_LDO3_REG_ADJ0_vrset_ldo3_START  (4)
#define SOC_SMART_LDO3_REG_ADJ0_vrset_ldo3_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO3_REG_ADJ1_UNION
 �ṹ˵��  : LDO3_REG_ADJ1 �Ĵ����ṹ���塣��ַƫ����:0x074����ֵ:0x05�����:8
 �Ĵ���˵��: LDO3����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo3_adj : 3;  /* bit[0-2]: �ر�BUCK2��ʱ��LDO3��ѹ�л����ڼĴ�����
                                                        0x0:0.80V ��
                                                        0x1: 0.85V ��
                                                        0x2: 0.90V ��
                                                        0x3: 0.95V ��
                                                        0x4: 1.00V ��
                                                        0x5: 1.05V��
                                                        0x6: 1.10V��
                                                        0x7��1.15V��
                                                        ע��LDO3��Buck2�رպ��л���ѹ���л�Ŀ���ѹ��λ�ɸüĴ������ã�Ĭ��Ϊ1.05V������Buck2��ǰ�ָ���ѹ */
        unsigned char  reserved      : 5;  /* bit[3-7]: ���� */
    } reg;
} SOC_SMART_LDO3_REG_ADJ1_UNION;
#endif
#define SOC_SMART_LDO3_REG_ADJ1_vset_ldo3_adj_START  (0)
#define SOC_SMART_LDO3_REG_ADJ1_vset_ldo3_adj_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO4_REG_ADJ_UNION
 �ṹ˵��  : LDO4_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x075����ֵ:0x00�����:8
 �Ĵ���˵��: LDO4���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  i_sst_ldo4 : 1;  /* bit[0]  : LDO4�Ļ�������������1��ʾ������������0��ʾ��������ΪĬ��ֵ */
        unsigned char  reserved   : 7;  /* bit[1-7]: ���� */
    } reg;
} SOC_SMART_LDO4_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO4_REG_ADJ_i_sst_ldo4_START  (0)
#define SOC_SMART_LDO4_REG_ADJ_i_sst_ldo4_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO5_REG_ADJ_UNION
 �ṹ˵��  : LDO5_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x076����ֵ:0x24�����:8
 �Ĵ���˵��: LDO5���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo5  : 3;  /* bit[0-2]: LDO5��ѹ���ڣ�
                                                     0x0: 1.60V ��
                                                     0x1: 1.65V ��
                                                     0x2:1.70V ��
                                                     0x3: 1.75V ��
                                                     0x4: 1.80V ��
                                                     0x5: 1.85V ��
                                                     0x6: 1.90V ��
                                                     0x7: 1.95V �� */
        unsigned char  reserved_0 : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo5 : 3;  /* bit[4-6]: LDO5���ص����ʲ���������5mV / Step */
        unsigned char  reserved_1 : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO5_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO5_REG_ADJ_vset_ldo5_START   (0)
#define SOC_SMART_LDO5_REG_ADJ_vset_ldo5_END     (2)
#define SOC_SMART_LDO5_REG_ADJ_vrset_ldo5_START  (4)
#define SOC_SMART_LDO5_REG_ADJ_vrset_ldo5_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO6_REG_ADJ_UNION
 �ṹ˵��  : LDO6_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x077����ֵ:0x14�����:8
 �Ĵ���˵��: LDO6���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo6  : 3;  /* bit[0-2]: LDO6��ѹ���ڣ�
                                                     0x0: 2.60V ��
                                                     0x1: 2.65V ��
                                                     0x2: 2.70V ��
                                                     0x3: 2.750V ��
                                                     0x4: 2.80V ��
                                                     0x5: 2.85V ��
                                                     0x6: 2.90V��
                                                     0x7��2.95V�� */
        unsigned char  reserved_0 : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo6 : 3;  /* bit[4-6]: LDO6���ص����ʲ���������5mV / Step */
        unsigned char  reserved_1 : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO6_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO6_REG_ADJ_vset_ldo6_START   (0)
#define SOC_SMART_LDO6_REG_ADJ_vset_ldo6_END     (2)
#define SOC_SMART_LDO6_REG_ADJ_vrset_ldo6_START  (4)
#define SOC_SMART_LDO6_REG_ADJ_vrset_ldo6_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO7_REG_ADJ_UNION
 �ṹ˵��  : LDO7_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x078����ֵ:0x12�����:8
 �Ĵ���˵��: LDO7���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo7  : 3;  /* bit[0-2]: LDO7��ѹ���ڣ�
                                                     0x0: 1.80V ��
                                                     0x1: 1.85V ��
                                                     0x2: 2.85V ��
                                                     0x3: 2.90V ��
                                                     0x4: 3.00V ��
                                                     0x5: 3.10V ��
                                                     0x6: 3.20V ��
                                                     0x7: 3.30V �� */
        unsigned char  reserved_0 : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo7 : 3;  /* bit[4-6]: LDO7���ص����ʲ���������5mV / Step */
        unsigned char  reserved_1 : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO7_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO7_REG_ADJ_vset_ldo7_START   (0)
#define SOC_SMART_LDO7_REG_ADJ_vset_ldo7_END     (2)
#define SOC_SMART_LDO7_REG_ADJ_vrset_ldo7_START  (4)
#define SOC_SMART_LDO7_REG_ADJ_vrset_ldo7_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO8_REG_ADJ_UNION
 �ṹ˵��  : LDO8_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x079����ֵ:0x14�����:8
 �Ĵ���˵��: LDO8���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo8  : 3;  /* bit[0-2]: LDO8��ѹ���ڣ�
                                                     0x0: 1.000V ��
                                                     0x1: 1.025V ��
                                                     0x2: 1.05V ��
                                                     0x3: 1.075V ��
                                                     0x4: 1.100V ��
                                                     0x5: 1.125V ��
                                                     0x6: 1.15V ��
                                                     0x7��1.175V �� */
        unsigned char  reserved_0 : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo8 : 3;  /* bit[4-6]: LDO8���ص����ʲ���������5mV / Step */
        unsigned char  reserved_1 : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO8_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO8_REG_ADJ_vset_ldo8_START   (0)
#define SOC_SMART_LDO8_REG_ADJ_vset_ldo8_END     (2)
#define SOC_SMART_LDO8_REG_ADJ_vrset_ldo8_START  (4)
#define SOC_SMART_LDO8_REG_ADJ_vrset_ldo8_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO9_REG_ADJ_UNION
 �ṹ˵��  : LDO9_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x07A����ֵ:0x10�����:8
 �Ĵ���˵��: LDO9���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo9  : 3;  /* bit[0-2]: LDO9��ѹ���ڣ�
                                                     0x0: 1.80V ��
                                                     0x1: 1.85V ��
                                                     0x2: 2.85V ��
                                                     0x3: 2.90V ��
                                                     0x4: 3.00V ��
                                                     0x5: 3.10V ��
                                                     0x6: 3.20V ��
                                                     0x7: 3.30V �� */
        unsigned char  reserved_0 : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo9 : 3;  /* bit[4-6]: LDO9���ص����ʲ���������5mV / Step */
        unsigned char  reserved_1 : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO9_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO9_REG_ADJ_vset_ldo9_START   (0)
#define SOC_SMART_LDO9_REG_ADJ_vset_ldo9_END     (2)
#define SOC_SMART_LDO9_REG_ADJ_vrset_ldo9_START  (4)
#define SOC_SMART_LDO9_REG_ADJ_vrset_ldo9_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO10_REG_ADJ_UNION
 �ṹ˵��  : LDO10_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x07B����ֵ:0x25�����:8
 �Ĵ���˵��: LDO10���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo10  : 3;  /* bit[0-2]: LDO10��ѹ���ڣ�
                                                      0x0: 1.80V ��
                                                      0x1: 1.85V ��
                                                      0x2: 1.90V ��
                                                      0x3: 2.75V ��
                                                      0x4: 2.80V ��
                                                      0x5: 2.85V ��
                                                      0x6: 2.90V ��
                                                      0x7: 3.00V �� */
        unsigned char  reserved_0  : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo10 : 3;  /* bit[4-6]: LDO10���ص����ʲ���������5mV / Step */
        unsigned char  reserved_1  : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO10_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO10_REG_ADJ_vset_ldo10_START   (0)
#define SOC_SMART_LDO10_REG_ADJ_vset_ldo10_END     (2)
#define SOC_SMART_LDO10_REG_ADJ_vrset_ldo10_START  (4)
#define SOC_SMART_LDO10_REG_ADJ_vrset_ldo10_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO11_REG_ADJ_UNION
 �ṹ˵��  : LDO11_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x07C����ֵ:0x10�����:8
 �Ĵ���˵��: LDO11���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo11  : 3;  /* bit[0-2]: LDO11��ѹ���ڣ�
                                                      0x0: 1.80V ��
                                                      0x1: 1.85V ��
                                                      0x2: 2.85V ��
                                                      0x3: 2.90V ��
                                                      0x4: 3.00V ��
                                                      0x5: 3.10V ��
                                                      0x6: 3.20V ��
                                                      0x7: 3.30V �� */
        unsigned char  reserved_0  : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo11 : 3;  /* bit[4-6]: LDO11���ص����ʲ���������5mV / Step */
        unsigned char  reserved_1  : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO11_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO11_REG_ADJ_vset_ldo11_START   (0)
#define SOC_SMART_LDO11_REG_ADJ_vset_ldo11_END     (2)
#define SOC_SMART_LDO11_REG_ADJ_vrset_ldo11_START  (4)
#define SOC_SMART_LDO11_REG_ADJ_vrset_ldo11_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO12_REG_ADJ_UNION
 �ṹ˵��  : LDO12_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x07D����ֵ:0x16�����:8
 �Ĵ���˵��: LDO12���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo12  : 3;  /* bit[0-2]: LDO12��ѹ���ڣ�
                                                      0x0: 1.80V ��
                                                      0x1: 1.85V ��
                                                      0x2: 2.85V ��
                                                      0x3: 2.90V ��
                                                      0x4: 3.00V ��
                                                      0x5: 3.10V ��
                                                      0x6: 3.20V ��
                                                      0x7: 3.30V �� */
        unsigned char  reserved_0  : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo12 : 3;  /* bit[4-6]: LDO12���ص����ʲ��������� */
        unsigned char  reserved_1  : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO12_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO12_REG_ADJ_vset_ldo12_START   (0)
#define SOC_SMART_LDO12_REG_ADJ_vset_ldo12_END     (2)
#define SOC_SMART_LDO12_REG_ADJ_vrset_ldo12_START  (4)
#define SOC_SMART_LDO12_REG_ADJ_vrset_ldo12_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO13_REG_ADJ_UNION
 �ṹ˵��  : LDO13_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x07E����ֵ:0x24�����:8
 �Ĵ���˵��: LDO13���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo13  : 3;  /* bit[0-2]: LDO13��ѹ���ڣ�
                                                      0x0: 1.60V ��
                                                      0x1: 1.65V ��
                                                      0x2: 1.70V ��
                                                      0x3: 1.75V ��
                                                      0x4: 1.80V ��
                                                      0x5: 1.85V ��
                                                      0x6: 1.90V ��
                                                      0x7: 1.95V�� */
        unsigned char  reserved_0  : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo13 : 3;  /* bit[4-6]: LDO13���ص����ʲ��������� */
        unsigned char  reserved_1  : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO13_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO13_REG_ADJ_vset_ldo13_START   (0)
#define SOC_SMART_LDO13_REG_ADJ_vset_ldo13_END     (2)
#define SOC_SMART_LDO13_REG_ADJ_vrset_ldo13_START  (4)
#define SOC_SMART_LDO13_REG_ADJ_vrset_ldo13_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO14_REG_ADJ_UNION
 �ṹ˵��  : LDO14_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x07F����ֵ:0x23�����:8
 �Ĵ���˵��: LDO14���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo14  : 3;  /* bit[0-2]: LDO14��ѹ���ڣ�
                                                      0x0: 2.50V ��
                                                      0x1: 2.60V ��
                                                      0x2: 2.70V ��
                                                      0x3: 2.80V ��
                                                      0x4: 2.90V ��
                                                      0x5: 3.00V ��
                                                      0x6: 3.10V ��
                                                      0x7: 3.20V�� */
        unsigned char  reserved_0  : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo14 : 3;  /* bit[4-6]: LDO14���ص����ʲ���������5mV / Step */
        unsigned char  reserved_1  : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO14_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO14_REG_ADJ_vset_ldo14_START   (0)
#define SOC_SMART_LDO14_REG_ADJ_vset_ldo14_END     (2)
#define SOC_SMART_LDO14_REG_ADJ_vrset_ldo14_START  (4)
#define SOC_SMART_LDO14_REG_ADJ_vrset_ldo14_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO15_REG_ADJ_UNION
 �ṹ˵��  : LDO15_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x080����ֵ:0x24�����:8
 �Ĵ���˵��: LDO15���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo15  : 3;  /* bit[0-2]: LDO15��ѹ���ڣ�
                                                      0x0: 1.60V ��
                                                      0x1: 1.65V ��
                                                      0x2: 1.70V ��
                                                      0x3: 1.75V ��
                                                      0x4: 1.80V ��
                                                      0x5: 1.85V ��
                                                      0x6: 1.90V ��
                                                      0x7: 1.95V�� */
        unsigned char  reserved_0  : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo15 : 3;  /* bit[4-6]: LDO15���ص����ʲ���������5mV / Step */
        unsigned char  reserved_1  : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO15_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO15_REG_ADJ_vset_ldo15_START   (0)
#define SOC_SMART_LDO15_REG_ADJ_vset_ldo15_END     (2)
#define SOC_SMART_LDO15_REG_ADJ_vrset_ldo15_START  (4)
#define SOC_SMART_LDO15_REG_ADJ_vrset_ldo15_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO16_REG_ADJ_UNION
 �ṹ˵��  : LDO16_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x081����ֵ:0x23�����:8
 �Ĵ���˵��: LDO16���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo16  : 3;  /* bit[0-2]: LDO16��ѹ���ڣ�
                                                      0x0: 1.65V ��
                                                      0x1: 1.70V ��
                                                      0x2: 1.75V ��
                                                      0x3: 1.80V ��
                                                      0x4: 1.85V ��
                                                      0x5: 1.90V ��
                                                      0x6: 1.95V ��
                                                      0x7��2.00V �� */
        unsigned char  reserved_0  : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo16 : 3;  /* bit[4-6]: LDO16���ص����ʲ���������5mV / Step */
        unsigned char  reserved_1  : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO16_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO16_REG_ADJ_vset_ldo16_START   (0)
#define SOC_SMART_LDO16_REG_ADJ_vset_ldo16_END     (2)
#define SOC_SMART_LDO16_REG_ADJ_vrset_ldo16_START  (4)
#define SOC_SMART_LDO16_REG_ADJ_vrset_ldo16_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO17_REG_ADJ_UNION
 �ṹ˵��  : LDO17_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x082����ֵ:0x10�����:8
 �Ĵ���˵��: LDO17���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo17  : 3;  /* bit[0-2]: LDO17��ѹ���ڣ�
                                                      0x0: 2.50V ��
                                                      0x1: 2.60V ��
                                                      0x2: 2.70V ��
                                                      0x3: 2.80V ��
                                                      0x4: 2.90V ��
                                                      0x5: 3.00V ��
                                                      0x6: 3.10V ��
                                                      0x7: 3.20V�� */
        unsigned char  reserved_0  : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo17 : 3;  /* bit[4-6]: LDO17���ص����ʲ���������5mV / Step */
        unsigned char  reserved_1  : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO17_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO17_REG_ADJ_vset_ldo17_START   (0)
#define SOC_SMART_LDO17_REG_ADJ_vset_ldo17_END     (2)
#define SOC_SMART_LDO17_REG_ADJ_vrset_ldo17_START  (4)
#define SOC_SMART_LDO17_REG_ADJ_vrset_ldo17_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO18_REG_ADJ_UNION
 �ṹ˵��  : LDO18_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x083����ֵ:0x24�����:8
 �Ĵ���˵��: LDO18���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo18  : 3;  /* bit[0-2]: LDO18��ѹ���ڣ�
                                                      0x0: 1.60V ��
                                                      0x1: 1.70V ��
                                                      0x2: 1.75V ��
                                                      0x3: 1.8V ��
                                                      0x4: 1.825V ��
                                                      0x5: 1.85V ��
                                                      0x6: 1.90V ��
                                                      0x7: 1.95V �� */
        unsigned char  reserved_0  : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo18 : 3;  /* bit[4-6]: LDO18���ص����ʲ���������5mV / Step */
        unsigned char  reserved_1  : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO18_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO18_REG_ADJ_vset_ldo18_START   (0)
#define SOC_SMART_LDO18_REG_ADJ_vset_ldo18_END     (2)
#define SOC_SMART_LDO18_REG_ADJ_vrset_ldo18_START  (4)
#define SOC_SMART_LDO18_REG_ADJ_vrset_ldo18_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO19_REG_ADJ_UNION
 �ṹ˵��  : LDO19_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x084����ֵ:0x25�����:8
 �Ĵ���˵��: LDO19���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo19  : 3;  /* bit[0-2]: LDO19��ѹ���ڣ�
                                                      0x0: 1.80V ��
                                                      0x1: 1.85V ��
                                                      0x2: 1.90V ��
                                                      0x3: 2.75V ��
                                                      0x4: 2.80V ��
                                                      0x5: 2.85V ��
                                                      0x6: 2.90V ��
                                                      0x7: 3.00V �� */
        unsigned char  reserved_0  : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo19 : 3;  /* bit[4-6]: LDO19���ص����ʲ���������5mV / Step */
        unsigned char  reserved_1  : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO19_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO19_REG_ADJ_vset_ldo19_START   (0)
#define SOC_SMART_LDO19_REG_ADJ_vset_ldo19_END     (2)
#define SOC_SMART_LDO19_REG_ADJ_vrset_ldo19_START  (4)
#define SOC_SMART_LDO19_REG_ADJ_vrset_ldo19_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO20_REG_ADJ_UNION
 �ṹ˵��  : LDO20_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x085����ֵ:0x10�����:8
 �Ĵ���˵��: LDO20���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo20  : 3;  /* bit[0-2]: LDO20��ѹ���ڣ�
                                                      0x0:1.80V ��
                                                      0x1: 1.85V ��
                                                      0x2: 2.85V ��
                                                      0x3: 2.9V ��
                                                      0x4: 3.0V ��
                                                      0x5: 3.1V ��
                                                      0x6: 3.20V��
                                                      0x7: 3.3V�� */
        unsigned char  reserved_0  : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo20 : 3;  /* bit[4-6]: LDO20���ص����ʲ���������5mV / Step */
        unsigned char  reserved_1  : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO20_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO20_REG_ADJ_vset_ldo20_START   (0)
#define SOC_SMART_LDO20_REG_ADJ_vset_ldo20_END     (2)
#define SOC_SMART_LDO20_REG_ADJ_vrset_ldo20_START  (4)
#define SOC_SMART_LDO20_REG_ADJ_vrset_ldo20_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO21_REG_ADJ_UNION
 �ṹ˵��  : LDO21_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x086����ֵ:0x23�����:8
 �Ĵ���˵��: LDO21���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo21  : 3;  /* bit[0-2]: LDO21��ѹ���ڣ�
                                                      0x0: 1.65V ��
                                                      0x1: 1.70V ��
                                                      0x2: 1.75V ��
                                                      0x3: 1.80V ��
                                                      0x4: 1.85V ��
                                                      0x5: 1.90V ��
                                                      0x6: 1.95V ��
                                                      0x7��2.00V �� */
        unsigned char  reserved_0  : 1;  /* bit[3]  : ���� */
        unsigned char  vrset_ldo21 : 3;  /* bit[4-6]: LDO21���ص����ʲ���������5mV / Step */
        unsigned char  reserved_1  : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO21_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO21_REG_ADJ_vset_ldo21_START   (0)
#define SOC_SMART_LDO21_REG_ADJ_vset_ldo21_END     (2)
#define SOC_SMART_LDO21_REG_ADJ_vrset_ldo21_START  (4)
#define SOC_SMART_LDO21_REG_ADJ_vrset_ldo21_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO22_REG_ADJ_UNION
 �ṹ˵��  : LDO22_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x087����ֵ:0x20�����:8
 �Ĵ���˵��: LDO22���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo22  : 3;  /* bit[0-2]: LDO22��ѹ���ڣ�
                                                      0x0: 0.90V ��
                                                      0x1: 1.00V ��
                                                      0x2: 1.05V ��
                                                      0x3: 1.10V ��
                                                      0x4: 1.15V ��
                                                      0x5: 1.175V��
                                                      0x6��1.1875V��
                                                      0x7��1.2V */
        unsigned char  en_dc_ldo22 : 1;  /* bit[3]  : LDO22 ǿ�Ƴ�ͨģʽ��0��ʾ�ǳ�ͨģʽ��1��ʾ��ͨģʽ */
        unsigned char  vrset_ldo22 : 3;  /* bit[4-6]: LDO22���ص����ʲ���������5mV / Step */
        unsigned char  reserved    : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_LDO22_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO22_REG_ADJ_vset_ldo22_START   (0)
#define SOC_SMART_LDO22_REG_ADJ_vset_ldo22_END     (2)
#define SOC_SMART_LDO22_REG_ADJ_en_dc_ldo22_START  (3)
#define SOC_SMART_LDO22_REG_ADJ_en_dc_ldo22_END    (3)
#define SOC_SMART_LDO22_REG_ADJ_vrset_ldo22_START  (4)
#define SOC_SMART_LDO22_REG_ADJ_vrset_ldo22_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_PMUA_REG_ADJ_UNION
 �ṹ˵��  : PMUA_REG_ADJ �Ĵ����ṹ���塣��ַƫ����:0x088����ֵ:0x01�����:8
 �Ĵ���˵��: PMUA���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_pmua : 2;  /* bit[0-1]: PMUA��ѹ���ڣ�
                                                    0x0: 1.70V ��
                                                    0x1: 1.80V ��
                                                    0x2: 1.90V ��
                                                    0x3: 2.00V �� */
        unsigned char  reserved  : 6;  /* bit[2-7]: ���� */
    } reg;
} SOC_SMART_PMUA_REG_ADJ_UNION;
#endif
#define SOC_SMART_PMUA_REG_ADJ_vset_pmua_START  (0)
#define SOC_SMART_PMUA_REG_ADJ_vset_pmua_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LVS_ADJ1_UNION
 �ṹ˵��  : LVS_ADJ1 �Ĵ����ṹ���塣��ַƫ����:0x089����ֵ:0x01�����:8
 �Ĵ���˵��: LVS����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  sstset_lvs2 : 2;  /* bit[0-1]: LVS2�����ٶȵ��ڣ�11��죬00���� */
        unsigned char  reserved    : 6;  /* bit[2-7]: ���� */
    } reg;
} SOC_SMART_LVS_ADJ1_UNION;
#endif
#define SOC_SMART_LVS_ADJ1_sstset_lvs2_START  (0)
#define SOC_SMART_LVS_ADJ1_sstset_lvs2_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BANDGAP_THSD_ADJ1_UNION
 �ṹ˵��  : BANDGAP_THSD_ADJ1 �Ĵ����ṹ���塣��ַƫ����:0x08A����ֵ:0x00�����:8
 �Ĵ���˵��: BANDGAP��THSD����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ibias_trim_en : 2;  /* bit[0-1]: ��׼����trimʹ���ź� */
        unsigned char  ref_reserve   : 2;  /* bit[2-3]: ��׼���üĴ��� */
        unsigned char  reserved      : 4;  /* bit[4-7]: ���� */
    } reg;
} SOC_SMART_BANDGAP_THSD_ADJ1_UNION;
#endif
#define SOC_SMART_BANDGAP_THSD_ADJ1_ibias_trim_en_START  (0)
#define SOC_SMART_BANDGAP_THSD_ADJ1_ibias_trim_en_END    (1)
#define SOC_SMART_BANDGAP_THSD_ADJ1_ref_reserve_START    (2)
#define SOC_SMART_BANDGAP_THSD_ADJ1_ref_reserve_END      (3)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BANDGAP_THSD_ADJ2_UNION
 �ṹ˵��  : BANDGAP_THSD_ADJ2 �Ĵ����ṹ���塣��ַƫ����:0x08B����ֵ:0x26�����:8
 �Ĵ���˵��: BANDGAP��THSD����2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  en_tmp_int      : 2;  /* bit[0-1]: 0x:THSD���±���ģ��رգ�
                                                          10:THSD���±���ģ�鿪����
                                                          11:THSD�ĵ͹���ģʽ���ߵ�ƽΪ10ms,����Ϊ1s�������ź� */
        unsigned char  en_eco_thsd_int : 1;  /* bit[2]  : ����TSHD�Ƿ���PMU����ECOģʽ:
                                                          0:�����棻
                                                          1�����档 */
        unsigned char  reserved_0      : 1;  /* bit[3]  : ���� */
        unsigned char  thsd_set_tmp    : 2;  /* bit[4-5]: �¶ȱ���ģ�鱨���¶����á�
                                                          00: 105�棻
                                                          01: 115�棻
                                                          10: 125�棻
                                                          Ĭ������Ϊ125�档 */
        unsigned char  reserved_1      : 2;  /* bit[6-7]: ���� */
    } reg;
} SOC_SMART_BANDGAP_THSD_ADJ2_UNION;
#endif
#define SOC_SMART_BANDGAP_THSD_ADJ2_en_tmp_int_START       (0)
#define SOC_SMART_BANDGAP_THSD_ADJ2_en_tmp_int_END         (1)
#define SOC_SMART_BANDGAP_THSD_ADJ2_en_eco_thsd_int_START  (2)
#define SOC_SMART_BANDGAP_THSD_ADJ2_en_eco_thsd_int_END    (2)
#define SOC_SMART_BANDGAP_THSD_ADJ2_thsd_set_tmp_START     (4)
#define SOC_SMART_BANDGAP_THSD_ADJ2_thsd_set_tmp_END       (5)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DR_FLA_CTRL1_UNION
 �ṹ˵��  : DR_FLA_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x08C����ֵ:0x00�����:8
 �Ĵ���˵��: DR��˸ģʽ����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  en_dr3_int : 1;  /* bit[0]  : 0: �ر�DR3��
                                                     1: ����DR3�� */
        unsigned char  dr3_mode   : 1;  /* bit[1]  : 0: �ر�����ģʽ(��ʱ����Ϊ�������)��
                                                     1: ����DR3����ģʽ�� */
        unsigned char  en_dr4_int : 1;  /* bit[2]  : 0: �ر�DR4��
                                                     1: ����DR4�� */
        unsigned char  dr4_mode   : 1;  /* bit[3]  : 0: �ر�����ģʽ(��ʱ����Ϊ�������)��
                                                     1: ����DR4����ģʽ�� */
        unsigned char  en_dr5_int : 1;  /* bit[4]  : 0: �ر�DR5��
                                                     1: ����DR5�� */
        unsigned char  dr5_mode   : 1;  /* bit[5]  : 0: �ر�����ģʽ(��ʱ����Ϊ�������)��
                                                     1: ����DR5����ģʽ�� */
        unsigned char  reserved   : 2;  /* bit[6-7]: ������ */
    } reg;
} SOC_SMART_DR_FLA_CTRL1_UNION;
#endif
#define SOC_SMART_DR_FLA_CTRL1_en_dr3_int_START  (0)
#define SOC_SMART_DR_FLA_CTRL1_en_dr3_int_END    (0)
#define SOC_SMART_DR_FLA_CTRL1_dr3_mode_START    (1)
#define SOC_SMART_DR_FLA_CTRL1_dr3_mode_END      (1)
#define SOC_SMART_DR_FLA_CTRL1_en_dr4_int_START  (2)
#define SOC_SMART_DR_FLA_CTRL1_en_dr4_int_END    (2)
#define SOC_SMART_DR_FLA_CTRL1_dr4_mode_START    (3)
#define SOC_SMART_DR_FLA_CTRL1_dr4_mode_END      (3)
#define SOC_SMART_DR_FLA_CTRL1_en_dr5_int_START  (4)
#define SOC_SMART_DR_FLA_CTRL1_en_dr5_int_END    (4)
#define SOC_SMART_DR_FLA_CTRL1_dr5_mode_START    (5)
#define SOC_SMART_DR_FLA_CTRL1_dr5_mode_END      (5)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DR_FLA_CTRL2_UNION
 �ṹ˵��  : DR_FLA_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0x08D����ֵ:0x00�����:8
 �Ĵ���˵��: DR��˸ģʽ����2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  en_dr1_int : 1;  /* bit[0]  : 0: �ر�DR1��
                                                     1: ����DR1 �� */
        unsigned char  dr1_mode   : 1;  /* bit[1]  : 0: �ر�����ģʽ(��ʱ����Ϊ�������)��
                                                     1: ����DR1����ģʽ�� */
        unsigned char  reserved_0 : 2;  /* bit[2-3]: ���� */
        unsigned char  en_dr2_int : 1;  /* bit[4]  : 0: �ر�DR2��
                                                     1: ����DR2�� */
        unsigned char  dr2_mode   : 1;  /* bit[5]  : 0: �ر�����ģʽ(��ʱ����Ϊ�������)��
                                                     1: ����DR2����ģʽ�� */
        unsigned char  reserved_1 : 2;  /* bit[6-7]: ������ */
    } reg;
} SOC_SMART_DR_FLA_CTRL2_UNION;
#endif
#define SOC_SMART_DR_FLA_CTRL2_en_dr1_int_START  (0)
#define SOC_SMART_DR_FLA_CTRL2_en_dr1_int_END    (0)
#define SOC_SMART_DR_FLA_CTRL2_dr1_mode_START    (1)
#define SOC_SMART_DR_FLA_CTRL2_dr1_mode_END      (1)
#define SOC_SMART_DR_FLA_CTRL2_en_dr2_int_START  (4)
#define SOC_SMART_DR_FLA_CTRL2_en_dr2_int_END    (4)
#define SOC_SMART_DR_FLA_CTRL2_dr2_mode_START    (5)
#define SOC_SMART_DR_FLA_CTRL2_dr2_mode_END      (5)


/*****************************************************************************
 �ṹ��    : SOC_SMART_FLASH_PERIOD_DR12_UNION
 �ṹ˵��  : FLASH_PERIOD_DR12 �Ĵ����ṹ���塣��ַƫ����:0x08E����ֵ:0x3F�����:8
 �Ĵ���˵��: DR��˸ģʽ���ڵ���0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_period_dr12 : 8;  /* bit[0-7]: ��˸����T = ����ֵ*31.25ms�� */
    } reg;
} SOC_SMART_FLASH_PERIOD_DR12_UNION;
#endif
#define SOC_SMART_FLASH_PERIOD_DR12_flash_period_dr12_START  (0)
#define SOC_SMART_FLASH_PERIOD_DR12_flash_period_dr12_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_FLASH_ON_DR12_UNION
 �ṹ˵��  : FLASH_ON_DR12 �Ĵ����ṹ���塣��ַƫ����:0x08F����ֵ:0x1F�����:8
 �Ĵ���˵��: DR��˸ģʽ����ʱ�����0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_on_dr12 : 8;  /* bit[0-7]: ����ʱ��t =����ֵ*7.8125ms�� */
    } reg;
} SOC_SMART_FLASH_ON_DR12_UNION;
#endif
#define SOC_SMART_FLASH_ON_DR12_flash_on_dr12_START  (0)
#define SOC_SMART_FLASH_ON_DR12_flash_on_dr12_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_FLASH_PERIOD_DR345_UNION
 �ṹ˵��  : FLASH_PERIOD_DR345 �Ĵ����ṹ���塣��ַƫ����:0x090����ֵ:0x3F�����:8
 �Ĵ���˵��: DR��˸ģʽ���ڵ���1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_period_dr345 : 8;  /* bit[0-7]: ��˸����T = ����ֵ*31.25ms�� */
    } reg;
} SOC_SMART_FLASH_PERIOD_DR345_UNION;
#endif
#define SOC_SMART_FLASH_PERIOD_DR345_flash_period_dr345_START  (0)
#define SOC_SMART_FLASH_PERIOD_DR345_flash_period_dr345_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_FLASH_ON_DR345_UNION
 �ṹ˵��  : FLASH_ON_DR345 �Ĵ����ṹ���塣��ַƫ����:0x091����ֵ:0x1F�����:8
 �Ĵ���˵��: DR��˸ģʽ����ʱ�����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  flash_on_dr345 : 8;  /* bit[0-7]: ����ʱ��t =����ֵ*7.8125ms�� */
    } reg;
} SOC_SMART_FLASH_ON_DR345_UNION;
#endif
#define SOC_SMART_FLASH_ON_DR345_flash_on_dr345_START  (0)
#define SOC_SMART_FLASH_ON_DR345_flash_on_dr345_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DR_MODE_SEL_UNION
 �ṹ˵��  : DR_MODE_SEL �Ĵ����ṹ���塣��ַƫ����:0x092����ֵ:0x00�����:8
 �Ĵ���˵��: DR��ģʽѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  dr1_mode_sel : 1;  /* bit[0]  : 0: DR1�����ں�������ģʽ��
                                                       1��DR1��������˸ģʽ�� */
        unsigned char  dr2_mode_sel : 1;  /* bit[1]  : 0: DR2�����ں�������ģʽ��
                                                       1��DR2��������˸ģʽ�� */
        unsigned char  dr3_mode_sel : 1;  /* bit[2]  : 0: DR3�����ں�������ģʽ��
                                                       1��DR3��������˸ģʽ�� */
        unsigned char  dr4_mode_sel : 1;  /* bit[3]  : 0: DR4�����ں�������ģʽ��
                                                       1��DR4��������˸ģʽ�� */
        unsigned char  dr5_mode_sel : 1;  /* bit[4]  : 0: DR5�����ں�������ģʽ��
                                                       1��DR5��������˸ģʽ�� */
        unsigned char  reserved     : 3;  /* bit[5-7]: ������ */
    } reg;
} SOC_SMART_DR_MODE_SEL_UNION;
#endif
#define SOC_SMART_DR_MODE_SEL_dr1_mode_sel_START  (0)
#define SOC_SMART_DR_MODE_SEL_dr1_mode_sel_END    (0)
#define SOC_SMART_DR_MODE_SEL_dr2_mode_sel_START  (1)
#define SOC_SMART_DR_MODE_SEL_dr2_mode_sel_END    (1)
#define SOC_SMART_DR_MODE_SEL_dr3_mode_sel_START  (2)
#define SOC_SMART_DR_MODE_SEL_dr3_mode_sel_END    (2)
#define SOC_SMART_DR_MODE_SEL_dr4_mode_sel_START  (3)
#define SOC_SMART_DR_MODE_SEL_dr4_mode_sel_END    (3)
#define SOC_SMART_DR_MODE_SEL_dr5_mode_sel_START  (4)
#define SOC_SMART_DR_MODE_SEL_dr5_mode_sel_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DR_BRE_CTRL_UNION
 �ṹ˵��  : DR_BRE_CTRL �Ĵ����ṹ���塣��ַƫ����:0x093����ֵ:0x00�����:8
 �Ĵ���˵��: DR1/2����ģʽ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  dr1_en       : 1;  /* bit[0]  : 0��dr1�رգ�
                                                       1��dr1ʹ�ܣ�
                                                       dr1_flash_en = 1,��˸��
                                                       dr1_flash_en = 0,������ */
        unsigned char  dr1_flash_en : 1;  /* bit[1]  : 0��dr1����˸��
                                                       1��dr1��˸ */
        unsigned char  reserved_0   : 2;  /* bit[2-3]: ���� */
        unsigned char  dr2_en       : 1;  /* bit[4]  : 0��dr2�رգ�
                                                       1��dr2ʹ�ܣ�
                                                       dr2_flash_en = 1,��˸��
                                                       dr2_flash_en = 0,������ */
        unsigned char  dr2_flash_en : 1;  /* bit[5]  : 0��dr2����˸��
                                                       1��dr2��˸ */
        unsigned char  reserved_1   : 2;  /* bit[6-7]: ���� */
    } reg;
} SOC_SMART_DR_BRE_CTRL_UNION;
#endif
#define SOC_SMART_DR_BRE_CTRL_dr1_en_START        (0)
#define SOC_SMART_DR_BRE_CTRL_dr1_en_END          (0)
#define SOC_SMART_DR_BRE_CTRL_dr1_flash_en_START  (1)
#define SOC_SMART_DR_BRE_CTRL_dr1_flash_en_END    (1)
#define SOC_SMART_DR_BRE_CTRL_dr2_en_START        (4)
#define SOC_SMART_DR_BRE_CTRL_dr2_en_END          (4)
#define SOC_SMART_DR_BRE_CTRL_dr2_flash_en_START  (5)
#define SOC_SMART_DR_BRE_CTRL_dr2_flash_en_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DR12_TIM_CONF0_UNION
 �ṹ˵��  : DR12_TIM_CONF0 �Ĵ����ṹ���塣��ַƫ����:0x094����ֵ:0x33�����:8
 �Ĵ���˵��: DR1��DR2��������ʱ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  dr12_t_off : 3;  /* bit[0-2]: 000��1ms
                                                     001��0.25s
                                                     010��0.5s
                                                     011��1s
                                                     100��2s
                                                     101��4s
                                                     110��4s
                                                     111������ */
        unsigned char  reserved_0 : 1;  /* bit[3]  : ���� */
        unsigned char  dr12_t_on  : 3;  /* bit[4-6]: 000��1ms
                                                     001��0.25s
                                                     010��0.5s
                                                     011��1s
                                                     100��2s
                                                     101��4s
                                                     110��4s
                                                     111������ */
        unsigned char  reserved_1 : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_DR12_TIM_CONF0_UNION;
#endif
#define SOC_SMART_DR12_TIM_CONF0_dr12_t_off_START  (0)
#define SOC_SMART_DR12_TIM_CONF0_dr12_t_off_END    (2)
#define SOC_SMART_DR12_TIM_CONF0_dr12_t_on_START   (4)
#define SOC_SMART_DR12_TIM_CONF0_dr12_t_on_END     (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DR12_TIM_CONF1_UNION
 �ṹ˵��  : DR12_TIM_CONF1 �Ĵ����ṹ���塣��ַƫ����:0x095����ֵ:0x33�����:8
 �Ĵ���˵��: DR1��DR2��������ʱ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  dr12_t_rise : 3;  /* bit[0-2]: 000��0s
                                                      001��0.25s
                                                      010��0.5s
                                                      011��1s
                                                      100��2s
                                                      101��2.5s
                                                      110��3s
                                                      111��4s */
        unsigned char  reserved_0  : 1;  /* bit[3]  :  */
        unsigned char  dr12_t_fall : 3;  /* bit[4-6]: 000��0s
                                                      001��0.25s
                                                      010��0.5s
                                                      011��1s
                                                      100��2s
                                                      101��2.5s
                                                      110��3s
                                                      111��4s */
        unsigned char  reserved_1  : 1;  /* bit[7]  : ���� */
    } reg;
} SOC_SMART_DR12_TIM_CONF1_UNION;
#endif
#define SOC_SMART_DR12_TIM_CONF1_dr12_t_rise_START  (0)
#define SOC_SMART_DR12_TIM_CONF1_dr12_t_rise_END    (2)
#define SOC_SMART_DR12_TIM_CONF1_dr12_t_fall_START  (4)
#define SOC_SMART_DR12_TIM_CONF1_dr12_t_fall_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DR1_ISET_UNION
 �ṹ˵��  : DR1_ISET �Ĵ����ṹ���塣��ַƫ����:0x096����ֵ:0x00�����:8
 �Ĵ���˵��: DR1����ѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  iset_dr1 : 3;  /* bit[0-2]: DR1�������ڡ�000: 1 mA��
                                                   001: 3 mA��
                                                   010: 5 mA��
                                                   011: 7 mA��
                                                   100: 9 mA��
                                                   101: 11 mA��
                                                   110: 13 mA��
                                                   111: 15 mA�� */
        unsigned char  reserved : 5;  /* bit[3-7]: ���� */
    } reg;
} SOC_SMART_DR1_ISET_UNION;
#endif
#define SOC_SMART_DR1_ISET_iset_dr1_START  (0)
#define SOC_SMART_DR1_ISET_iset_dr1_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DR2_ISET_UNION
 �ṹ˵��  : DR2_ISET �Ĵ����ṹ���塣��ַƫ����:0x097����ֵ:0x00�����:8
 �Ĵ���˵��: DR2����ѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  iset_dr2 : 3;  /* bit[0-2]: DR2�������ڡ�000: 1 mA��
                                                   001: 3 mA��
                                                   010: 5 mA��
                                                   011: 7 mA��
                                                   100: 9 mA��
                                                   101: 11 mA��
                                                   110: 13 mA��
                                                   111: 15 mA�� */
        unsigned char  reserved : 5;  /* bit[3-7]: ���� */
    } reg;
} SOC_SMART_DR2_ISET_UNION;
#endif
#define SOC_SMART_DR2_ISET_iset_dr2_START  (0)
#define SOC_SMART_DR2_ISET_iset_dr2_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DR_LED_CTRL_UNION
 �ṹ˵��  : DR_LED_CTRL �Ĵ����ṹ���塣��ַƫ����:0x098����ֵ:0x00�����:8
 �Ĵ���˵��: DR3/4/5���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  dr3_en   : 1;  /* bit[0]  : DR3ʹ�ܡ�
                                                   0����ʹ�ܣ�
                                                   1��ʹ�ܡ� */
        unsigned char  dr4_en   : 1;  /* bit[1]  : DR4ʹ�ܡ�
                                                   0����ʹ�ܣ�
                                                   1��ʹ�ܡ� */
        unsigned char  dr5_en   : 1;  /* bit[2]  : DR5ʹ�ܡ�
                                                   0����ʹ�ܣ�
                                                   1��ʹ�ܡ� */
        unsigned char  reserved : 5;  /* bit[3-7]: ������ */
    } reg;
} SOC_SMART_DR_LED_CTRL_UNION;
#endif
#define SOC_SMART_DR_LED_CTRL_dr3_en_START    (0)
#define SOC_SMART_DR_LED_CTRL_dr3_en_END      (0)
#define SOC_SMART_DR_LED_CTRL_dr4_en_START    (1)
#define SOC_SMART_DR_LED_CTRL_dr4_en_END      (1)
#define SOC_SMART_DR_LED_CTRL_dr5_en_START    (2)
#define SOC_SMART_DR_LED_CTRL_dr5_en_END      (2)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DR_OUT_CTRL_UNION
 �ṹ˵��  : DR_OUT_CTRL �Ĵ����ṹ���塣��ַƫ����:0x099����ֵ:0x00�����:8
 �Ĵ���˵��: DR3/4/5������ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  dr3_out_ctrl : 2;  /* bit[0-1]: DR3������ơ�
                                                       00��DR3�������������DR3�ܽţ�
                                                       01��DR3��DR4����������������DR3�ܽţ�
                                                       10��DR3��DR4��DR5����������������DR3�ܽţ�
                                                       11��DR4��DR5����������������DR3�ܽš� */
        unsigned char  dr4_out_ctrl : 2;  /* bit[2-3]: DR4������ơ�
                                                       00��DR4�������������DR4�ܽţ�
                                                       01��DR3��DR4����������������DR4�ܽţ�
                                                       10��DR3��DR4��DR5����������������DR4�ܽţ�
                                                       11��DR4��DR5����������������DR4�ܽš� */
        unsigned char  dr5_out_ctrl : 2;  /* bit[4-5]: DR5������ơ�
                                                       00��DR5�������������DR5�ܽţ�
                                                       01��DR3��DR4����������������DR5�ܽţ�
                                                       10��DR3��DR4��DR5����������������DR5�ܽţ�
                                                       11��DR4��DR5����������������DR5�ܽš� */
        unsigned char  reserved     : 2;  /* bit[6-7]: ������ */
    } reg;
} SOC_SMART_DR_OUT_CTRL_UNION;
#endif
#define SOC_SMART_DR_OUT_CTRL_dr3_out_ctrl_START  (0)
#define SOC_SMART_DR_OUT_CTRL_dr3_out_ctrl_END    (1)
#define SOC_SMART_DR_OUT_CTRL_dr4_out_ctrl_START  (2)
#define SOC_SMART_DR_OUT_CTRL_dr4_out_ctrl_END    (3)
#define SOC_SMART_DR_OUT_CTRL_dr5_out_ctrl_START  (4)
#define SOC_SMART_DR_OUT_CTRL_dr5_out_ctrl_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DR3_ISET_UNION
 �ṹ˵��  : DR3_ISET �Ĵ����ṹ���塣��ַƫ����:0x09A����ֵ:0x00�����:8
 �Ĵ���˵��: DR3����ѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  iset_dr3 : 3;  /* bit[0-2]: R3����������ڣ�mA����
                                                   0x0 : 1.0��
                                                   0x1 : 1.5��
                                                   0x2 : 2.0��
                                                   0x3 : 2.5��
                                                   0x4 : 3.0��
                                                   0x5 : 3.5��
                                                   0x6 : 4.0��
                                                   0x7 : 4.5�� */
        unsigned char  reserved : 5;  /* bit[3-7]: ������ */
    } reg;
} SOC_SMART_DR3_ISET_UNION;
#endif
#define SOC_SMART_DR3_ISET_iset_dr3_START  (0)
#define SOC_SMART_DR3_ISET_iset_dr3_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DR3_START_DEL_UNION
 �ṹ˵��  : DR3_START_DEL �Ĵ����ṹ���塣��ַƫ����:0x09B����ֵ:0x10�����:8
 �Ĵ���˵��: DR3������ʱ���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  dr3_start_delay : 8;  /* bit[0-7]: DR3������ʱ��Χ��0��32768 ms��step��125ms�� */
    } reg;
} SOC_SMART_DR3_START_DEL_UNION;
#endif
#define SOC_SMART_DR3_START_DEL_dr3_start_delay_START  (0)
#define SOC_SMART_DR3_START_DEL_dr3_start_delay_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DR4_ISET_UNION
 �ṹ˵��  : DR4_ISET �Ĵ����ṹ���塣��ַƫ����:0x09C����ֵ:0x00�����:8
 �Ĵ���˵��: DR4����ѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  iset_dr4 : 3;  /* bit[0-2]: DR4����������ڣ�mA����
                                                   0x0 : 1.0��
                                                   0x1 : 1.5��
                                                   0x2 : 2.0��
                                                   0x3 : 2.5��
                                                   0x4 : 3.0��
                                                   0x5 : 3.5��
                                                   0x6 : 4.0��
                                                   0x7 : 4.5�� */
        unsigned char  reserved : 5;  /* bit[3-7]: ������ */
    } reg;
} SOC_SMART_DR4_ISET_UNION;
#endif
#define SOC_SMART_DR4_ISET_iset_dr4_START  (0)
#define SOC_SMART_DR4_ISET_iset_dr4_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DR4_START_DEL_UNION
 �ṹ˵��  : DR4_START_DEL �Ĵ����ṹ���塣��ַƫ����:0x09D����ֵ:0x10�����:8
 �Ĵ���˵��: DR4������ʱ���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  dr4_start_delay : 8;  /* bit[0-7]: DR4������ʱ��Χ��0��32768 ms��step��125ms�� */
    } reg;
} SOC_SMART_DR4_START_DEL_UNION;
#endif
#define SOC_SMART_DR4_START_DEL_dr4_start_delay_START  (0)
#define SOC_SMART_DR4_START_DEL_dr4_start_delay_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DR5_ISET_UNION
 �ṹ˵��  : DR5_ISET �Ĵ����ṹ���塣��ַƫ����:0x09E����ֵ:0x00�����:8
 �Ĵ���˵��: DR5����ѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  iset_dr5 : 3;  /* bit[0-2]: DR5����������ڣ�mA����
                                                   0x0 : 1.0��
                                                   0x1 : 1.5��
                                                   0x2 : 2.0��
                                                   0x3 : 2.5��
                                                   0x4 : 3.0��
                                                   0x5 : 3.5��
                                                   0x6 : 4.0��
                                                   0x7 : 4.5�� */
        unsigned char  reserved : 5;  /* bit[3-7]: ������ */
    } reg;
} SOC_SMART_DR5_ISET_UNION;
#endif
#define SOC_SMART_DR5_ISET_iset_dr5_START  (0)
#define SOC_SMART_DR5_ISET_iset_dr5_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DR5_START_DEL_UNION
 �ṹ˵��  : DR5_START_DEL �Ĵ����ṹ���塣��ַƫ����:0x09F����ֵ:0x10�����:8
 �Ĵ���˵��: DR5������ʱ���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  dr5_start_delay : 8;  /* bit[0-7]: DR5������ʱ��Χ��0��32768 ms��step��125ms�� */
    } reg;
} SOC_SMART_DR5_START_DEL_UNION;
#endif
#define SOC_SMART_DR5_START_DEL_dr5_start_delay_START  (0)
#define SOC_SMART_DR5_START_DEL_dr5_start_delay_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DR3_TIM_CONF0_UNION
 �ṹ˵��  : DR3_TIM_CONF0 �Ĵ����ṹ���塣��ַƫ����:0x0A0����ֵ:0x44�����:8
 �Ĵ���˵��: DR3��������ʱ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  dr345_t_off : 4;  /* bit[0-3]: DR345����ʱ�����á�
                                                      000��0s��
                                                      001��0.5s��
                                                      010��1s��
                                                      011��2s��
                                                      100��4s��
                                                      101��6s��
                                                      110��8s��
                                                      111��12s��
                                                      1000��14��
                                                      1001��16��
                                                      ������������ */
        unsigned char  dr345_t_on  : 4;  /* bit[4-7]: DR345����ʱ�����á�
                                                      0000��0s��
                                                      0001��0.5s��
                                                      0010��1s��
                                                      0011��2s��
                                                      0100��4s��
                                                      0101��6s��
                                                      0110��8s��
                                                      0111��12s��
                                                      1000��14��
                                                      1001��16��
                                                      ������������ */
    } reg;
} SOC_SMART_DR3_TIM_CONF0_UNION;
#endif
#define SOC_SMART_DR3_TIM_CONF0_dr345_t_off_START  (0)
#define SOC_SMART_DR3_TIM_CONF0_dr345_t_off_END    (3)
#define SOC_SMART_DR3_TIM_CONF0_dr345_t_on_START   (4)
#define SOC_SMART_DR3_TIM_CONF0_dr345_t_on_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_DR3_TIM_CONF1_UNION
 �ṹ˵��  : DR3_TIM_CONF1 �Ĵ����ṹ���塣��ַƫ����:0x0A1����ֵ:0x33�����:8
 �Ĵ���˵��: DR3��������ʱ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  dr345_t_rise : 3;  /* bit[0-2]: DR345����ʱ�����á�
                                                       000��0s��
                                                       001��0.25s��
                                                       010��0.5s��
                                                       011��1s��
                                                       100��2s��
                                                       101��2.5s��
                                                       110:3s��
                                                       111��4s�� */
        unsigned char  reserved_0   : 1;  /* bit[3]  : ������ */
        unsigned char  dr345_t_fall : 3;  /* bit[4-6]: DR345����ʱ�����á�
                                                       000��0s��
                                                       001��0.25s��
                                                       010��0.5s��
                                                       011��1s��
                                                       100��2s��
                                                       101��2.5s��
                                                       110:3s��
                                                       111��4s�� */
        unsigned char  reserved_1   : 1;  /* bit[7]  : ������ */
    } reg;
} SOC_SMART_DR3_TIM_CONF1_UNION;
#endif
#define SOC_SMART_DR3_TIM_CONF1_dr345_t_rise_START  (0)
#define SOC_SMART_DR3_TIM_CONF1_dr345_t_rise_END    (2)
#define SOC_SMART_DR3_TIM_CONF1_dr345_t_fall_START  (4)
#define SOC_SMART_DR3_TIM_CONF1_dr345_t_fall_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OTP_CTRL1_UNION
 �ṹ˵��  : OTP_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x0A2����ֵ:0x00�����:8
 �Ĵ���˵��: OTP����1�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otp_pwe_int    : 1;  /* bit[0]  : OTPд�����źš� */
        unsigned char  otp_pwe_pulse  : 1;  /* bit[1]  : 0�����������壻
                                                         1����otp_write_mask=1ʱ������һ��310us�ĸߵ�ƽ���塣 */
        unsigned char  otp_write_mask : 1;  /* bit[2]  : 0:��otp_pwe�źſ���OTP��д������
                                                         1:��otp_pwe_pulse�źſ���OTP��д������ */
        unsigned char  otp_por_int    : 1;  /* bit[3]  : OTP�������źš�
                                                         0: otp������
                                                         1���Զ���32bits otpֵ���ص����µ�Ĵ������档 */
        unsigned char  reserved       : 4;  /* bit[4-7]: ������ */
    } reg;
} SOC_SMART_OTP_CTRL1_UNION;
#endif
#define SOC_SMART_OTP_CTRL1_otp_pwe_int_START     (0)
#define SOC_SMART_OTP_CTRL1_otp_pwe_int_END       (0)
#define SOC_SMART_OTP_CTRL1_otp_pwe_pulse_START   (1)
#define SOC_SMART_OTP_CTRL1_otp_pwe_pulse_END     (1)
#define SOC_SMART_OTP_CTRL1_otp_write_mask_START  (2)
#define SOC_SMART_OTP_CTRL1_otp_write_mask_END    (2)
#define SOC_SMART_OTP_CTRL1_otp_por_int_START     (3)
#define SOC_SMART_OTP_CTRL1_otp_por_int_END       (3)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OTP_CTRL2_UNION
 �ṹ˵��  : OTP_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0x0A3����ֵ:0x00�����:8
 �Ĵ���˵��: OTP����2�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otp_pa    : 2;  /* bit[0-1]: OTP�ĵ�ַ�źš� */
        unsigned char  otp_ptm   : 2;  /* bit[2-3]: ����ģʽʹ���źš� */
        unsigned char  otp_pprog : 1;  /* bit[4]  : ���ģʽʹ���źš� */
        unsigned char  reserved  : 3;  /* bit[5-7]: ������ */
    } reg;
} SOC_SMART_OTP_CTRL2_UNION;
#endif
#define SOC_SMART_OTP_CTRL2_otp_pa_START     (0)
#define SOC_SMART_OTP_CTRL2_otp_pa_END       (1)
#define SOC_SMART_OTP_CTRL2_otp_ptm_START    (2)
#define SOC_SMART_OTP_CTRL2_otp_ptm_END      (3)
#define SOC_SMART_OTP_CTRL2_otp_pprog_START  (4)
#define SOC_SMART_OTP_CTRL2_otp_pprog_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OTP_PDIN_UNION
 �ṹ˵��  : OTP_PDIN �Ĵ����ṹ���塣��ַƫ����:0x0A4����ֵ:0x00�����:8
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
} SOC_SMART_OTP_PDIN_UNION;
#endif
#define SOC_SMART_OTP_PDIN_otp_pdin_START  (0)
#define SOC_SMART_OTP_PDIN_otp_pdin_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ANA_IN_UNION
 �ṹ˵��  : ANA_IN �Ĵ����ṹ���塣��ַƫ����:0x0B6����ֵ:0x00�����:8
 �Ĵ���˵��: ģ��ROԤ���Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ana_in : 8;  /* bit[0-7]: PMUģ�ⲿ�����룬8bits��ͨ���Ĵ�������������ʹ�á� */
    } reg;
} SOC_SMART_ANA_IN_UNION;
#endif
#define SOC_SMART_ANA_IN_ana_in_START  (0)
#define SOC_SMART_ANA_IN_ana_in_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RESERVED0_UNION
 �ṹ˵��  : RESERVED0 �Ĵ����ṹ���塣��ַƫ����:0x0B7����ֵ:0x00�����:8
 �Ĵ���˵��: ����0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  reserved  : 8;  /* bit[0-7]: bit[7:4]�������ü�����δ����
                                                    bit[3:0]: lvs��offset�����Ĵ����� */
    } reg;
} SOC_SMART_RESERVED0_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_SMART_RESERVED1_UNION
 �ṹ˵��  : RESERVED1 �Ĵ����ṹ���塣��ַƫ����:0x0B8����ֵ:0x00�����:8
 �Ĵ���˵��: ����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  reserved  : 8;  /* bit[0-7]: bit[7:2]:�����ü�����δ����
                                                    bit[1:0]:����REF����ECOģʽ�� */
    } reg;
} SOC_SMART_RESERVED1_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_SMART_RESERVED2_UNION
 �ṹ˵��  : RESERVED2 �Ĵ����ṹ���塣��ַƫ����:0x0B9����ֵ:0x00�����:8
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
} SOC_SMART_RESERVED2_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_SMART_DAC_CTRL_UNION
 �ṹ˵��  : DAC_CTRL �Ĵ����ṹ���塣��ַƫ����:0x0BA����ֵ:0xAA�����:8
 �Ĵ���˵��: DAC���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  aux_offset_cfg1 : 2;  /* bit[0-1]: AUXDAC OFFSET����
                                                          00��+7.5mV��
                                                          01��0mV��
                                                          10��0mV��
                                                          11��-7.5mV�� */
        unsigned char  aux_ibias_cfg1  : 2;  /* bit[2-3]: AUXDACƫ�õ�������
                                                          00��2.5uA��
                                                          01��5.0uA��
                                                          10��5.0uA��
                                                          11��7.5uA�� */
        unsigned char  aux_offset_cfg2 : 2;  /* bit[4-5]: AUXDAC OFFSET����
                                                          00��+7.5mV��
                                                          01��0mV��
                                                          10��0mV��
                                                          11��-7.5mV�� */
        unsigned char  aux_ibias_cfg2  : 2;  /* bit[6-7]: AUXDACƫ�õ�������
                                                          00��2.5uA��
                                                          01��5.0uA��
                                                          10��5.0uA��
                                                          11��7.5uA�� */
    } reg;
} SOC_SMART_DAC_CTRL_UNION;
#endif
#define SOC_SMART_DAC_CTRL_aux_offset_cfg1_START  (0)
#define SOC_SMART_DAC_CTRL_aux_offset_cfg1_END    (1)
#define SOC_SMART_DAC_CTRL_aux_ibias_cfg1_START   (2)
#define SOC_SMART_DAC_CTRL_aux_ibias_cfg1_END     (3)
#define SOC_SMART_DAC_CTRL_aux_offset_cfg2_START  (4)
#define SOC_SMART_DAC_CTRL_aux_offset_cfg2_END    (5)
#define SOC_SMART_DAC_CTRL_aux_ibias_cfg2_START   (6)
#define SOC_SMART_DAC_CTRL_aux_ibias_cfg2_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK01_CTRL0_UNION
 �ṹ˵��  : BUCK01_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x0D7����ֵ:0x72�����:8
 �Ĵ���˵��: BUCK01����0�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck01_pfm_solution_sel  : 1;  /* bit[0]  : buck01�����л��������ƣ�
                                                                   0����ITHǯλ�������л���
                                                                   1��û��ITHǯλ�������л��� */
        unsigned char  buck01_mode_sel          : 1;  /* bit[1]  : buck01��ģʽѡ��
                                                                   0�������л���
                                                                   1��ǿ��PWM�� */
        unsigned char  buck01_z_trim            : 1;  /* bit[2]  : �����˷Ÿ�Ƶ�������Ƶ��ݵĴ�С��
                                                                   0����С��������
                                                                   1�����󲹳����� */
        unsigned char  buck01_interleaving_ctrl : 1;  /* bit[3]  : ����BUCK0/1ʱ����λ��
                                                                   0�����๤����interleaving operation����
                                                                   1��ͬ�๤��(non-interleaving operation)�� */
        unsigned char  buck01_osc_frequency     : 4;  /* bit[4-7]: ����buck01ʱ��Ƶ��,Ĭ��Ƶ��Ϊ2MHz
                                                                   0000:3.1MHz��
                                                                   0001:3.0MHz��
                                                                   0010:2.9MHz��
                                                                   0011:2.8MHz��
                                                                   0100:2.7MHz��
                                                                   0101:2.6MHz��
                                                                   0110:2.5MHz��
                                                                   0111:2.4MHz��
                                                                   1000:2.2MHz��
                                                                   1001:2.0MHz��
                                                                   1010:1.8MHz��
                                                                   1011:1.6MHz��
                                                                   1100:1.4MHz��
                                                                   1101:1.2MHz��
                                                                   1110:1.0MHz��
                                                                   1111:0.8MHz�� */
    } reg;
} SOC_SMART_BUCK01_CTRL0_UNION;
#endif
#define SOC_SMART_BUCK01_CTRL0_buck01_pfm_solution_sel_START   (0)
#define SOC_SMART_BUCK01_CTRL0_buck01_pfm_solution_sel_END     (0)
#define SOC_SMART_BUCK01_CTRL0_buck01_mode_sel_START           (1)
#define SOC_SMART_BUCK01_CTRL0_buck01_mode_sel_END             (1)
#define SOC_SMART_BUCK01_CTRL0_buck01_z_trim_START             (2)
#define SOC_SMART_BUCK01_CTRL0_buck01_z_trim_END               (2)
#define SOC_SMART_BUCK01_CTRL0_buck01_interleaving_ctrl_START  (3)
#define SOC_SMART_BUCK01_CTRL0_buck01_interleaving_ctrl_END    (3)
#define SOC_SMART_BUCK01_CTRL0_buck01_osc_frequency_START      (4)
#define SOC_SMART_BUCK01_CTRL0_buck01_osc_frequency_END        (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK01_CTRL1_UNION
 �ṹ˵��  : BUCK01_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x0D8����ֵ:0x16�����:8
 �Ĵ���˵��: BUCK01����1�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck01_ea_comp_cap_sel : 2;  /* bit[0-1]: buck01 EA�ڲ���·�������ݵ��ڣ�
                                                                 00��11�������ݴ�С����Ĭ��2.8pF�� */
        unsigned char  buck01_vc_sel          : 2;  /* bit[2-3]: buck01�����л�PFM EA ��ֵ��ѹ���õ�����ڣ�
                                                                 00:45k��
                                                                 01:60k��
                                                                 10:75k��
                                                                 11:90k�� */
        unsigned char  buck01_burst_drv_ctr   : 1;  /* bit[4]  : buck01 ���������л�PFMʱ��ѡ��burst�źŶԹ��ʹܵĿ��ƣ�
                                                                 1�����������л�PFMʱ��ѡ��burstֻ����P���ʹܣ�
                                                                 0�����������л�PFMʱ��ѡ��burst����P/N���ʹܣ� */
        unsigned char  buck01_pfm_vth_sel     : 1;  /* bit[5]  : buck01 EA��EA_OUT�Ƿ�ͨ�����������ӿ����źţ�
                                                                 1�������ſ�����
                                                                 0�������Źرգ� */
        unsigned char  buck01_pfm_ctrl        : 2;  /* bit[6-7]: buck01�����л�PFM�������ƣ�
                                                                 Bit 7
                                                                 0�������л�ģʽʱEA�����е�����磻
                                                                 1�������л�ģʽʱEA�������ε�����磻 */
    } reg;
} SOC_SMART_BUCK01_CTRL1_UNION;
#endif
#define SOC_SMART_BUCK01_CTRL1_buck01_ea_comp_cap_sel_START  (0)
#define SOC_SMART_BUCK01_CTRL1_buck01_ea_comp_cap_sel_END    (1)
#define SOC_SMART_BUCK01_CTRL1_buck01_vc_sel_START           (2)
#define SOC_SMART_BUCK01_CTRL1_buck01_vc_sel_END             (3)
#define SOC_SMART_BUCK01_CTRL1_buck01_burst_drv_ctr_START    (4)
#define SOC_SMART_BUCK01_CTRL1_buck01_burst_drv_ctr_END      (4)
#define SOC_SMART_BUCK01_CTRL1_buck01_pfm_vth_sel_START      (5)
#define SOC_SMART_BUCK01_CTRL1_buck01_pfm_vth_sel_END        (5)
#define SOC_SMART_BUCK01_CTRL1_buck01_pfm_ctrl_START         (6)
#define SOC_SMART_BUCK01_CTRL1_buck01_pfm_ctrl_END           (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK01_CTRL2_UNION
 �ṹ˵��  : BUCK01_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0xD9����ֵ:0x64�����:8
 �Ĵ���˵��: BUCK01����2�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck01_comp_adj : 8;  /* bit[0-7]: 
                                                          buck01�ȶ��Ե��ڼĴ�����
                                                          bit<7>�������˷Ÿ�Ƶ�������Ƶ��ݵĴ�С��
                                                          0��1.5p��
                                                          1��4p��
                                                          
                                                          bit<6:3>���������صĲ��������ڵ���ѡ��λ��
                                                          0000��400k��
                                                          0001��375k��
                                                          0010��350k��
                                                          0011��325k��
                                                          0100��300k��
                                                          0101��275k��
                                                          0110��250k��
                                                          0111��225k��
                                                          1000��200k��
                                                          1001��175k��
                                                          1010��150k��
                                                          1011��125k��
                                                          1100��100k��
                                                          1101��75k��
                                                          1110��50k��
                                                          1111��25k��
                                                          
                                                          bit<2:0>�����Ŵ����絼������
                                                          000��40k��
                                                          001��35k��
                                                          010��30k��
                                                          011��25k��
                                                          100��20k��
                                                          101��15k��
                                                          110��10k��
                                                          111��5k�� */
    } reg;
} SOC_SMART_BUCK01_CTRL2_UNION;
#endif
#define SOC_SMART_BUCK01_CTRL2_buck01_comp_adj_START  (0)
#define SOC_SMART_BUCK01_CTRL2_buck01_comp_adj_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK01_CTRL3_UNION
 �ṹ˵��  : BUCK01_CTRL3 �Ĵ����ṹ���塣��ַƫ����:0xDA����ֵ:0x4A�����:8
 �Ĵ���˵��: BUCK01����3�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck01_vout_set : 7;  /* bit[0-6]: buck01������ƣ�
                                                          Ĭ�����1.05V
                                                           ��0.6V-1.375V��127Steps
                                                          6.1mV/step��
                                                          Ҫ���ѹ���߱��뵥�� */
        unsigned char  reserved        : 1;  /* bit[7]  : ������ */
    } reg;
} SOC_SMART_BUCK01_CTRL3_UNION;
#endif
#define SOC_SMART_BUCK01_CTRL3_buck01_vout_set_START  (0)
#define SOC_SMART_BUCK01_CTRL3_buck01_vout_set_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK01_CTRL4_UNION
 �ṹ˵��  : BUCK01_CTRL4 �Ĵ����ṹ���塣��ַƫ����:0x0DB����ֵ:0xB9�����:8
 �Ĵ���˵��: BUCK01����4�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck01_ib_pwm_sel       : 1;  /* bit[0]  : PWM�Ƚ���ƫ�õ������á�
                                                                  0��1uAƫ�ã�
                                                                  1��2uAƫ�á� */
        unsigned char  buck01_isns_rc_sel      : 1;  /* bit[1]  : ISNS�˲�ѡ���źš�
                                                                  0������RC�˲���
                                                                  1������RC�˲���
                                                                  ָSense�źŵ��˲��� */
        unsigned char  buck01_scp_shield       : 1;  /* bit[2]  : ��·�������μĴ���.
                                                                  0:ʹ�ܶ�·����;1:��ʹ�ܶ�·���� */
        unsigned char  buck01_sft_sel          : 1;  /* bit[3]  : BUCK0/1��������ʽѡ��
                                                                  0��������ʱ��Ϊ480us���ң�
                                                                  1��������ʱ��Ϊ240us���ҡ� */
        unsigned char  buck01_remote_sense_os  : 3;  /* bit[4-6]: BUCK01Զ�˷���offset���ڣ� */
        unsigned char  buck01_remote_sense_sel : 1;  /* bit[7]  : buck01ѡ��Զ�˷������߽��˷�����
                                                                  0�����˷�����
                                                                  1��Զ�˷����� */
    } reg;
} SOC_SMART_BUCK01_CTRL4_UNION;
#endif
#define SOC_SMART_BUCK01_CTRL4_buck01_ib_pwm_sel_START        (0)
#define SOC_SMART_BUCK01_CTRL4_buck01_ib_pwm_sel_END          (0)
#define SOC_SMART_BUCK01_CTRL4_buck01_isns_rc_sel_START       (1)
#define SOC_SMART_BUCK01_CTRL4_buck01_isns_rc_sel_END         (1)
#define SOC_SMART_BUCK01_CTRL4_buck01_scp_shield_START        (2)
#define SOC_SMART_BUCK01_CTRL4_buck01_scp_shield_END          (2)
#define SOC_SMART_BUCK01_CTRL4_buck01_sft_sel_START           (3)
#define SOC_SMART_BUCK01_CTRL4_buck01_sft_sel_END             (3)
#define SOC_SMART_BUCK01_CTRL4_buck01_remote_sense_os_START   (4)
#define SOC_SMART_BUCK01_CTRL4_buck01_remote_sense_os_END     (6)
#define SOC_SMART_BUCK01_CTRL4_buck01_remote_sense_sel_START  (7)
#define SOC_SMART_BUCK01_CTRL4_buck01_remote_sense_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK0_CTRL0_UNION
 �ṹ˵��  : BUCK0_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x0DC����ֵ:0x99�����:8
 �Ĵ���˵��: BUCK0����0�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck0_ng_n_sel : 2;  /* bit[0-1]: buck0 N power��������ӦNMOS�����������ڣ� */
        unsigned char  buck0_ng_p_sel : 2;  /* bit[2-3]: buck0 N power��������ӦPMOS�����������ڣ� */
        unsigned char  buck0_pg_n_sel : 2;  /* bit[4-5]: buck0 P power��������ӦNMOS�����������ڣ� */
        unsigned char  buck0_pg_p_sel : 2;  /* bit[6-7]: buck0 P power��������ӦPMOS�����������ڣ� */
    } reg;
} SOC_SMART_BUCK0_CTRL0_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL0_buck0_ng_n_sel_START  (0)
#define SOC_SMART_BUCK0_CTRL0_buck0_ng_n_sel_END    (1)
#define SOC_SMART_BUCK0_CTRL0_buck0_ng_p_sel_START  (2)
#define SOC_SMART_BUCK0_CTRL0_buck0_ng_p_sel_END    (3)
#define SOC_SMART_BUCK0_CTRL0_buck0_pg_n_sel_START  (4)
#define SOC_SMART_BUCK0_CTRL0_buck0_pg_n_sel_END    (5)
#define SOC_SMART_BUCK0_CTRL0_buck0_pg_p_sel_START  (6)
#define SOC_SMART_BUCK0_CTRL0_buck0_pg_p_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK0_CTRL1_UNION
 �ṹ˵��  : BUCK0_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x0DD����ֵ:0x80�����:8
 �Ĵ���˵��: BUCK0����1�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  reserved          : 1;  /* bit[0]  : ������ */
        unsigned char  buck0_cs_mode_sel : 1;  /* bit[1]  : buck0��������·ģʽѡ��
                                                            0����ѹsense��·������
                                                            1������sense��·������ */
        unsigned char  buck0_pdn_lx_det  : 1;  /* bit[2]  : buck0 ʹ��LX��������ʱ����Ƶ�·pd��
                                                            0����ʹ�ܣ�
                                                            1��ʹ�ܣ� */
        unsigned char  buck0_pdn_lx_sel  : 1;  /* bit[3]  : buck0��SLEEPN�źţ�����LX�������������
                                                            0����ѡ��
                                                            1��ѡ�� */
        unsigned char  buck0_ng_dt_sel   : 1;  /* bit[4]  : buck0 P�ܵ�N������ģʽѡ��
                                                            1����������������ģʽ��
                                                            0������������������ģʽ�� */
        unsigned char  buck0_pg_dt_sel   : 1;  /* bit[5]  : buck0 N�ܵ�P������ģʽѡ��
                                                            1����������������ģʽ��
                                                            0������������������ģʽ�� */
        unsigned char  buck0_dt_sel      : 2;  /* bit[6-7]: bit[7]����ͳN��P����5ns��ʱ��
                                                            0��N MOS�رյ�P MOS������5ns��ʱ��P MOS�رյ�N MOS������5ns��ʱ����
                                                            1��N MOS�رյ�P MOS��������ʱ��P MOS�رյ�N MOS��������ʱ����
                                                            
                                                            bit[6]��N�ܹر�ʱ���̿���P������ģʽ��ʱѡ��
                                                            0��P mos������5ns��ʱ��
                                                            1��P mos������5ns��ʱ�� */
    } reg;
} SOC_SMART_BUCK0_CTRL1_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL1_buck0_cs_mode_sel_START  (1)
#define SOC_SMART_BUCK0_CTRL1_buck0_cs_mode_sel_END    (1)
#define SOC_SMART_BUCK0_CTRL1_buck0_pdn_lx_det_START   (2)
#define SOC_SMART_BUCK0_CTRL1_buck0_pdn_lx_det_END     (2)
#define SOC_SMART_BUCK0_CTRL1_buck0_pdn_lx_sel_START   (3)
#define SOC_SMART_BUCK0_CTRL1_buck0_pdn_lx_sel_END     (3)
#define SOC_SMART_BUCK0_CTRL1_buck0_ng_dt_sel_START    (4)
#define SOC_SMART_BUCK0_CTRL1_buck0_ng_dt_sel_END      (4)
#define SOC_SMART_BUCK0_CTRL1_buck0_pg_dt_sel_START    (5)
#define SOC_SMART_BUCK0_CTRL1_buck0_pg_dt_sel_END      (5)
#define SOC_SMART_BUCK0_CTRL1_buck0_dt_sel_START       (6)
#define SOC_SMART_BUCK0_CTRL1_buck0_dt_sel_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK0_CTRL2_UNION
 �ṹ˵��  : BUCK0_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0x0DE����ֵ:0x00�����:8
 �Ĵ���˵��: BUCK0����2�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck0_bt_sel     : 2;  /* bit[0-1]: buck0���ع�blanking time���ڣ�
                                                           00��0ns��ʱ��
                                                           01��10��5ns��ʱ��
                                                           11��10ns��ʱ�� */
        unsigned char  buck0_cs_sel     : 2;  /* bit[2-3]: buck0����sense�ܴ��ĵ��ݣ�
                                                           00��0p��
                                                           01��0.2p��
                                                           10��0.4p��
                                                           11��0.6p�� */
        unsigned char  buck0_cs_os_sel  : 1;  /* bit[4]  : buck0��������·osѡ��
                                                           0����os��
                                                           1����os�� */
        unsigned char  buck0_cs_dt_sel  : 1;  /* bit[5]  : buck0�������DTѡ��
                                                           0:0ns;
                                                           1:5ns; */
        unsigned char  buck0_cs_mos_sel : 2;  /* bit[6-7]: ѡ��sense�ܹ���״̬��
                                                           00��sense����PG���ƣ�
                                                           01����ѹsense��·sense�ܳ�����
                                                           10������sense��·sense�ܳ�����
                                                           11: ��ѹ����sense�ܾ��رգ���ֹ�����ã��� */
    } reg;
} SOC_SMART_BUCK0_CTRL2_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL2_buck0_bt_sel_START      (0)
#define SOC_SMART_BUCK0_CTRL2_buck0_bt_sel_END        (1)
#define SOC_SMART_BUCK0_CTRL2_buck0_cs_sel_START      (2)
#define SOC_SMART_BUCK0_CTRL2_buck0_cs_sel_END        (3)
#define SOC_SMART_BUCK0_CTRL2_buck0_cs_os_sel_START   (4)
#define SOC_SMART_BUCK0_CTRL2_buck0_cs_os_sel_END     (4)
#define SOC_SMART_BUCK0_CTRL2_buck0_cs_dt_sel_START   (5)
#define SOC_SMART_BUCK0_CTRL2_buck0_cs_dt_sel_END     (5)
#define SOC_SMART_BUCK0_CTRL2_buck0_cs_mos_sel_START  (6)
#define SOC_SMART_BUCK0_CTRL2_buck0_cs_mos_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK0_CTRL3_UNION
 �ṹ˵��  : BUCK0_CTRL3 �Ĵ����ṹ���塣��ַƫ����:0x0DF����ֵ:0x02�����:8
 �Ĵ���˵��: BUCK0����3�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  reserved              : 1;  /* bit[0]  : ������ */
        unsigned char  buck0_ocp_n_sel       : 2;  /* bit[1-2]: buck0 nmos ocp��·ocp����ڣ� */
        unsigned char  buck0_ocp_new_old_sel : 1;  /* bit[3]  : buck0 ocp��·ѡ��
                                                                0��new ocp��
                                                                1��old ocp�� */
        unsigned char  buck0_ccc_sel         : 2;  /* bit[4-5]: buck0����isns�������������ĵ��ݣ� */
        unsigned char  buck0_ccm_sel         : 2;  /* bit[6-7]: buck0���ڲ�������������С��
                                                                00��0��
                                                                01��2%��
                                                                10��5%��
                                                                11��10%�� */
    } reg;
} SOC_SMART_BUCK0_CTRL3_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL3_buck0_ocp_n_sel_START        (1)
#define SOC_SMART_BUCK0_CTRL3_buck0_ocp_n_sel_END          (2)
#define SOC_SMART_BUCK0_CTRL3_buck0_ocp_new_old_sel_START  (3)
#define SOC_SMART_BUCK0_CTRL3_buck0_ocp_new_old_sel_END    (3)
#define SOC_SMART_BUCK0_CTRL3_buck0_ccc_sel_START          (4)
#define SOC_SMART_BUCK0_CTRL3_buck0_ccc_sel_END            (5)
#define SOC_SMART_BUCK0_CTRL3_buck0_ccm_sel_START          (6)
#define SOC_SMART_BUCK0_CTRL3_buck0_ccm_sel_END            (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK0_CTRL4_UNION
 �ṹ˵��  : BUCK0_CTRL4 �Ĵ����ṹ���塣��ַƫ����:0x0E0����ֵ:0x48�����:8
 �Ĵ���˵��: BUCK0����4�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck0_ocp_sel           : 4;  /* bit[0-3]: buck0 OCP ������ѡ��λ�� */
        unsigned char  buck0_ocp_tran_enhanced : 1;  /* bit[4]  : buck0 ocp˲̬���������� */
        unsigned char  buck0_nmos_ocp          : 1;  /* bit[5]  : buck0 nmos ocp��·ѡ�� */
        unsigned char  buck0_ocp_p_sel         : 2;  /* bit[6-7]: buck0 pmos ocp��·ocp����ڣ�
                                                                  00��3.9A��
                                                                  01��4.5A��
                                                                  10��5.1A��
                                                                  11��5.6A�� */
    } reg;
} SOC_SMART_BUCK0_CTRL4_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL4_buck0_ocp_sel_START            (0)
#define SOC_SMART_BUCK0_CTRL4_buck0_ocp_sel_END              (3)
#define SOC_SMART_BUCK0_CTRL4_buck0_ocp_tran_enhanced_START  (4)
#define SOC_SMART_BUCK0_CTRL4_buck0_ocp_tran_enhanced_END    (4)
#define SOC_SMART_BUCK0_CTRL4_buck0_nmos_ocp_START           (5)
#define SOC_SMART_BUCK0_CTRL4_buck0_nmos_ocp_END             (5)
#define SOC_SMART_BUCK0_CTRL4_buck0_ocp_p_sel_START          (6)
#define SOC_SMART_BUCK0_CTRL4_buck0_ocp_p_sel_END            (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK0_CTRL5_UNION
 �ṹ˵��  : BUCK0_CTRL5 �Ĵ����ṹ���塣��ַƫ����:0x0E1����ֵ:0x00�����:8
 �Ĵ���˵��: BUCK0����5�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  reserved            : 1;  /* bit[0]  : buck0����dmd�ṹdmd�������ڣ� */
        unsigned char  buck0_new_dmd_sel   : 4;  /* bit[1-4]: buck0��dmd�ṹdmd�������ڣ� */
        unsigned char  buck0_dmd_en        : 1;  /* bit[5]  : buck0ѡ��DMD���ܵĿ��أ� */
        unsigned char  buck0_ocp_shield    : 1;  /* bit[6]  : buck0 OCP�źŶ�PMOS�Ŀ��ƣ�
                                                              0������OCP��PMOS�Ŀ��ƣ�ģ�ⲻ������
                                                              1��������OCP��PMOS�Ŀ��ƣ�ģ�������� */
        unsigned char  buck0_ocp_delay_sel : 1;  /* bit[7]  : buck0 ocp����ʱ���ӳ�30ns�źţ�
                                                              0�����ӳ�,15ns��
                                                              1���ӳ�,30ns�� */
    } reg;
} SOC_SMART_BUCK0_CTRL5_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL5_buck0_new_dmd_sel_START    (1)
#define SOC_SMART_BUCK0_CTRL5_buck0_new_dmd_sel_END      (4)
#define SOC_SMART_BUCK0_CTRL5_buck0_dmd_en_START         (5)
#define SOC_SMART_BUCK0_CTRL5_buck0_dmd_en_END           (5)
#define SOC_SMART_BUCK0_CTRL5_buck0_ocp_shield_START     (6)
#define SOC_SMART_BUCK0_CTRL5_buck0_ocp_shield_END       (6)
#define SOC_SMART_BUCK0_CTRL5_buck0_ocp_delay_sel_START  (7)
#define SOC_SMART_BUCK0_CTRL5_buck0_ocp_delay_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK0_CTRL6_UNION
 �ṹ˵��  : BUCK0_CTRL6 �Ĵ����ṹ���塣��ַƫ����:0x0E2����ֵ:0x52�����:8
 �Ĵ���˵��: BUCK0����6�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck0_dmd_sel : 2;  /* bit[0-1]: buck0 DMD�����ã� */
        unsigned char  buck0_mos_sel : 2;  /* bit[2-3]: buck0����dmd�ṹdmd�������ڣ� */
        unsigned char  buck0_isc_sel : 2;  /* bit[4-5]: buck0 �����л�pfmʱ��з�ֵ��������������(00~11����)�� */
        unsigned char  buck0_ipk_sel : 2;  /* bit[6-7]: buck0 �����л�pfmʱ��з�ֵ�������Ƶ�����������
                                                        00:21k��
                                                        01:28k��
                                                        10:35k��
                                                        11:41k�� */
    } reg;
} SOC_SMART_BUCK0_CTRL6_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL6_buck0_dmd_sel_START  (0)
#define SOC_SMART_BUCK0_CTRL6_buck0_dmd_sel_END    (1)
#define SOC_SMART_BUCK0_CTRL6_buck0_mos_sel_START  (2)
#define SOC_SMART_BUCK0_CTRL6_buck0_mos_sel_END    (3)
#define SOC_SMART_BUCK0_CTRL6_buck0_isc_sel_START  (4)
#define SOC_SMART_BUCK0_CTRL6_buck0_isc_sel_END    (5)
#define SOC_SMART_BUCK0_CTRL6_buck0_ipk_sel_START  (6)
#define SOC_SMART_BUCK0_CTRL6_buck0_ipk_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK0_CTRL7_UNION
 �ṹ˵��  : BUCK0_CTRL7 �Ĵ����ṹ���塣��ַƫ����:0x0E3����ֵ:0x0C�����:8
 �Ĵ���˵��: BUCK0����7�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck0_l_sel        : 1;  /* bit[0]  : buck0б�²������ݵ��ڣ�
                                                             0������1��������0.47uH��У�
                                                             1������2��������1.0uH��У� */
        unsigned char  buck0_slope_gen    : 3;  /* bit[1-3]: buck0б�²����仯��000-111�����ӣ��� */
        unsigned char  buck0_sc_sel       : 2;  /* bit[4-5]: buck0б�²������裬SENSE���裬б�²������ݵ��ڣ� */
        unsigned char  buck0_dmd_shield_n : 1;  /* bit[6]  : buck0 �������dmd�����źţ�
                                                             0�����Σ�
                                                             1�������Σ� */
        unsigned char  buck0_dmd_clamp    : 1;  /* bit[7]  : buck0 dmd�Ƚ�ǿclampѡ��
                                                             0��ʹ��clamp��·��
                                                             1����ʹ��clamp��·�� */
    } reg;
} SOC_SMART_BUCK0_CTRL7_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL7_buck0_l_sel_START         (0)
#define SOC_SMART_BUCK0_CTRL7_buck0_l_sel_END           (0)
#define SOC_SMART_BUCK0_CTRL7_buck0_slope_gen_START     (1)
#define SOC_SMART_BUCK0_CTRL7_buck0_slope_gen_END       (3)
#define SOC_SMART_BUCK0_CTRL7_buck0_sc_sel_START        (4)
#define SOC_SMART_BUCK0_CTRL7_buck0_sc_sel_END          (5)
#define SOC_SMART_BUCK0_CTRL7_buck0_dmd_shield_n_START  (6)
#define SOC_SMART_BUCK0_CTRL7_buck0_dmd_shield_n_END    (6)
#define SOC_SMART_BUCK0_CTRL7_buck0_dmd_clamp_START     (7)
#define SOC_SMART_BUCK0_CTRL7_buck0_dmd_clamp_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK0_CTRL8_UNION
 �ṹ˵��  : BUCK0_CTRL8 �Ĵ����ṹ���塣��ַƫ����:0x0E4����ֵ:0x40�����:8
 �Ĵ���˵��: BUCK0����8�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  reserved       : 1;  /* bit[0]  : ������ */
        unsigned char  buck0_ton_on   : 2;  /* bit[1-2]: buck0��Сռ�ձȵ���λ(00~11����)�� */
        unsigned char  buck0_ton_off  : 1;  /* bit[3]  : buck0��Сռ�ձȵ��ڿ���λ��
                                                         0���رյ��ڹ��ܣ�
                                                         1���������ڹ��ܣ� */
        unsigned char  buck0_clk_sel  : 1;  /* bit[4]  : buck0����ʱ��ѡ���źţ�
                                                         1������buck0 EA��
                                                         0������buck0 PWM�� */
        unsigned char  buck0_ea_sel   : 1;  /* bit[5]  : buck0����ģʽ�����źţ�
                                                         1������buck0 PWM�źţ�
                                                         0���ֱ��ø���PWM�źţ� */
        unsigned char  buck0_slope_dc : 2;  /* bit[6-7]: buck0 slope dcֵ�趨ѡ��
                                                         00��670mv��
                                                         01��550mv��
                                                         10��860mv��
                                                         11��770mv�� */
    } reg;
} SOC_SMART_BUCK0_CTRL8_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL8_buck0_ton_on_START    (1)
#define SOC_SMART_BUCK0_CTRL8_buck0_ton_on_END      (2)
#define SOC_SMART_BUCK0_CTRL8_buck0_ton_off_START   (3)
#define SOC_SMART_BUCK0_CTRL8_buck0_ton_off_END     (3)
#define SOC_SMART_BUCK0_CTRL8_buck0_clk_sel_START   (4)
#define SOC_SMART_BUCK0_CTRL8_buck0_clk_sel_END     (4)
#define SOC_SMART_BUCK0_CTRL8_buck0_ea_sel_START    (5)
#define SOC_SMART_BUCK0_CTRL8_buck0_ea_sel_END      (5)
#define SOC_SMART_BUCK0_CTRL8_buck0_slope_dc_START  (6)
#define SOC_SMART_BUCK0_CTRL8_buck0_slope_dc_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK0_CTRL9_UNION
 �ṹ˵��  : BUCK0_CTRL9 �Ĵ����ṹ���塣��ַƫ����:0x0E5����ֵ:0x00�����:8
 �Ĵ���˵��: BUCK0����9�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck0_reserved0 : 8;  /* bit[0-7]: Ԥ���Ĵ��� */
    } reg;
} SOC_SMART_BUCK0_CTRL9_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL9_buck0_reserved0_START  (0)
#define SOC_SMART_BUCK0_CTRL9_buck0_reserved0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK0_CTRL10_UNION
 �ṹ˵��  : BUCK0_CTRL10 �Ĵ����ṹ���塣��ַƫ����:0x0E6����ֵ:0x00�����:8
 �Ĵ���˵��: BUCK0����10�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck0_reserved1 : 8;  /* bit[0-7]: Ԥ���Ĵ��� */
    } reg;
} SOC_SMART_BUCK0_CTRL10_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL10_buck0_reserved1_START  (0)
#define SOC_SMART_BUCK0_CTRL10_buck0_reserved1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK1_CTRL0_UNION
 �ṹ˵��  : BUCK1_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x0E7����ֵ:0x99�����:8
 �Ĵ���˵��: BUCK1����0�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck1_ng_n_sel : 2;  /* bit[0-1]: buck1 N power��������ӦNMOS�����������ڣ� */
        unsigned char  buck1_ng_p_sel : 2;  /* bit[2-3]: buck1 N power��������ӦPMOS�����������ڣ� */
        unsigned char  buck1_pg_n_sel : 2;  /* bit[4-5]: buck1 P power��������ӦNMOS�����������ڣ� */
        unsigned char  buck1_pg_p_sel : 2;  /* bit[6-7]: buck1 P power��������ӦPMOS�����������ڣ� */
    } reg;
} SOC_SMART_BUCK1_CTRL0_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL0_buck1_ng_n_sel_START  (0)
#define SOC_SMART_BUCK1_CTRL0_buck1_ng_n_sel_END    (1)
#define SOC_SMART_BUCK1_CTRL0_buck1_ng_p_sel_START  (2)
#define SOC_SMART_BUCK1_CTRL0_buck1_ng_p_sel_END    (3)
#define SOC_SMART_BUCK1_CTRL0_buck1_pg_n_sel_START  (4)
#define SOC_SMART_BUCK1_CTRL0_buck1_pg_n_sel_END    (5)
#define SOC_SMART_BUCK1_CTRL0_buck1_pg_p_sel_START  (6)
#define SOC_SMART_BUCK1_CTRL0_buck1_pg_p_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK1_CTRL1_UNION
 �ṹ˵��  : BUCK1_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x0E8����ֵ:0x80�����:8
 �Ĵ���˵��: BUCK1����1�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  reserved          : 1;  /* bit[0]  : ������ */
        unsigned char  buck1_cs_mode_sel : 1;  /* bit[1]  : buck0��������·ģʽѡ��
                                                            0����ѹsense��·������
                                                            1������sense��·������ */
        unsigned char  buck1_pdn_lx_det  : 1;  /* bit[2]  : buck0 ʹ��LX��������ʱ����Ƶ�·pd��
                                                            0����ʹ�ܣ�
                                                            1��ʹ�ܣ� */
        unsigned char  buck1_pdn_lx_sel  : 1;  /* bit[3]  : buck0��SLEEPN�źţ�����LX�������������
                                                            0����ѡ��
                                                            1��ѡ�� */
        unsigned char  buck1_ng_dt_sel   : 1;  /* bit[4]  : buck1 P�ܵ�N������ģʽѡ��
                                                            1����������������ģʽ��
                                                            0������������������ģʽ�� */
        unsigned char  buck1_pg_dt_sel   : 1;  /* bit[5]  : buck1 N�ܵ�P������ģʽѡ��
                                                            1����������������ģʽ��
                                                            0������������������ģʽ�� */
        unsigned char  buck1_dt_sel      : 2;  /* bit[6-7]: bit[7]����ͳN��P����5ns��ʱ��
                                                            0��N MOS�رյ�P MOS������5ns��ʱ��P MOS�رյ�N MOS������5ns��ʱ����
                                                            1��N MOS�رյ�P MOS��������ʱ��P MOS�رյ�N MOS��������ʱ����
                                                            
                                                            bit[6]��N�ܹر�ʱ���̿���P������ģʽ��ʱѡ��
                                                            0��P mos������5ns��ʱ��
                                                            1��P mos������5ns��ʱ�� */
    } reg;
} SOC_SMART_BUCK1_CTRL1_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL1_buck1_cs_mode_sel_START  (1)
#define SOC_SMART_BUCK1_CTRL1_buck1_cs_mode_sel_END    (1)
#define SOC_SMART_BUCK1_CTRL1_buck1_pdn_lx_det_START   (2)
#define SOC_SMART_BUCK1_CTRL1_buck1_pdn_lx_det_END     (2)
#define SOC_SMART_BUCK1_CTRL1_buck1_pdn_lx_sel_START   (3)
#define SOC_SMART_BUCK1_CTRL1_buck1_pdn_lx_sel_END     (3)
#define SOC_SMART_BUCK1_CTRL1_buck1_ng_dt_sel_START    (4)
#define SOC_SMART_BUCK1_CTRL1_buck1_ng_dt_sel_END      (4)
#define SOC_SMART_BUCK1_CTRL1_buck1_pg_dt_sel_START    (5)
#define SOC_SMART_BUCK1_CTRL1_buck1_pg_dt_sel_END      (5)
#define SOC_SMART_BUCK1_CTRL1_buck1_dt_sel_START       (6)
#define SOC_SMART_BUCK1_CTRL1_buck1_dt_sel_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK1_CTRL2_UNION
 �ṹ˵��  : BUCK1_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0x0E9����ֵ:0x00�����:8
 �Ĵ���˵��: BUCK1����2�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck1_bt_sel     : 2;  /* bit[0-1]: buck1���ع�blanking time���ڣ�
                                                           00��0ns��ʱ��
                                                           01��10��5ns��ʱ��
                                                           11��10ns��ʱ�� */
        unsigned char  buck1_cs_sel     : 2;  /* bit[2-3]: buck1����sense�ܴ��ĵ��ݣ�
                                                           00��0p��
                                                           01��0.2p��
                                                           10��0.4p��
                                                           11��0.6p�� */
        unsigned char  buck1_cs_os_sel  : 1;  /* bit[4]  : buck1��������·osѡ��
                                                           0����os��
                                                           1����os�� */
        unsigned char  buck1_cs_dt_sel  : 1;  /* bit[5]  : buck1�������DTѡ��
                                                           0:0ns;
                                                           1:5ns; */
        unsigned char  buck1_cs_mos_sel : 2;  /* bit[6-7]: ѡ��sense�ܹ���״̬��
                                                           00��sense����PG���ƣ�
                                                           01����ѹsense��·sense�ܳ�����
                                                           10������sense��·sense�ܳ�����
                                                           11: ��ѹ����sense�ܾ��رգ���ֹ�����ã��� */
    } reg;
} SOC_SMART_BUCK1_CTRL2_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL2_buck1_bt_sel_START      (0)
#define SOC_SMART_BUCK1_CTRL2_buck1_bt_sel_END        (1)
#define SOC_SMART_BUCK1_CTRL2_buck1_cs_sel_START      (2)
#define SOC_SMART_BUCK1_CTRL2_buck1_cs_sel_END        (3)
#define SOC_SMART_BUCK1_CTRL2_buck1_cs_os_sel_START   (4)
#define SOC_SMART_BUCK1_CTRL2_buck1_cs_os_sel_END     (4)
#define SOC_SMART_BUCK1_CTRL2_buck1_cs_dt_sel_START   (5)
#define SOC_SMART_BUCK1_CTRL2_buck1_cs_dt_sel_END     (5)
#define SOC_SMART_BUCK1_CTRL2_buck1_cs_mos_sel_START  (6)
#define SOC_SMART_BUCK1_CTRL2_buck1_cs_mos_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK1_CTRL3_UNION
 �ṹ˵��  : BUCK1_CTRL3 �Ĵ����ṹ���塣��ַƫ����:0x0EA����ֵ:0x02�����:8
 �Ĵ���˵��: BUCK1����3�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  reserved              : 1;  /* bit[0]  : ������ */
        unsigned char  buck1_ocp_n_sel       : 2;  /* bit[1-2]: buck1 nmos ocp��·ocp����ڣ� */
        unsigned char  buck1_ocp_new_old_sel : 1;  /* bit[3]  : buck1 ocp��·ѡ��
                                                                0��new ocp��
                                                                1��old ocp�� */
        unsigned char  buck1_ccc_sel         : 2;  /* bit[4-5]: buck1����isns�������������ĵ��ݣ� */
        unsigned char  buck1_ccm_sel         : 2;  /* bit[6-7]: buck1���ڲ�������������С��
                                                                00��0��
                                                                01��2%��
                                                                10��5%��
                                                                11��10%�� */
    } reg;
} SOC_SMART_BUCK1_CTRL3_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL3_buck1_ocp_n_sel_START        (1)
#define SOC_SMART_BUCK1_CTRL3_buck1_ocp_n_sel_END          (2)
#define SOC_SMART_BUCK1_CTRL3_buck1_ocp_new_old_sel_START  (3)
#define SOC_SMART_BUCK1_CTRL3_buck1_ocp_new_old_sel_END    (3)
#define SOC_SMART_BUCK1_CTRL3_buck1_ccc_sel_START          (4)
#define SOC_SMART_BUCK1_CTRL3_buck1_ccc_sel_END            (5)
#define SOC_SMART_BUCK1_CTRL3_buck1_ccm_sel_START          (6)
#define SOC_SMART_BUCK1_CTRL3_buck1_ccm_sel_END            (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK1_CTRL4_UNION
 �ṹ˵��  : BUCK1_CTRL4 �Ĵ����ṹ���塣��ַƫ����:0x0EB����ֵ:0x48�����:8
 �Ĵ���˵��: BUCK1����4�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck1_ocp_sel           : 4;  /* bit[0-3]: buck1 OCP ������ѡ��λ�� */
        unsigned char  buck1_ocp_tran_enhanced : 1;  /* bit[4]  : buck1 ocp˲̬���������� */
        unsigned char  buck1_nmos_ocp          : 1;  /* bit[5]  : buck1 nmos ocp��·ѡ�� */
        unsigned char  buck1_ocp_p_sel         : 2;  /* bit[6-7]: buck1 pmos ocp��·ocp����ڣ�
                                                                  00��3.9A��
                                                                  01��4.5A��
                                                                  10��5.1A��
                                                                  11��5.6A�� */
    } reg;
} SOC_SMART_BUCK1_CTRL4_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL4_buck1_ocp_sel_START            (0)
#define SOC_SMART_BUCK1_CTRL4_buck1_ocp_sel_END              (3)
#define SOC_SMART_BUCK1_CTRL4_buck1_ocp_tran_enhanced_START  (4)
#define SOC_SMART_BUCK1_CTRL4_buck1_ocp_tran_enhanced_END    (4)
#define SOC_SMART_BUCK1_CTRL4_buck1_nmos_ocp_START           (5)
#define SOC_SMART_BUCK1_CTRL4_buck1_nmos_ocp_END             (5)
#define SOC_SMART_BUCK1_CTRL4_buck1_ocp_p_sel_START          (6)
#define SOC_SMART_BUCK1_CTRL4_buck1_ocp_p_sel_END            (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK1_CTRL5_UNION
 �ṹ˵��  : BUCK1_CTRL5 �Ĵ����ṹ���塣��ַƫ����:0x0EC����ֵ:0x00�����:8
 �Ĵ���˵��: BUCK1����5�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  reserved            : 1;  /* bit[0]  : buck1����dmd�ṹdmd�������ڣ� */
        unsigned char  buck1_new_dmd_sel   : 4;  /* bit[1-4]: buck1��dmd�ṹdmd�������ڣ� */
        unsigned char  buck1_dmd_en        : 1;  /* bit[5]  : buck1ѡ��DMD���ܵĿ��أ� */
        unsigned char  buck1_ocp_shield    : 1;  /* bit[6]  : buck1 OCP�źŶ�PMOS�Ŀ��ƣ�
                                                              0������OCP��PMOS�Ŀ��ƣ�ģ�ⲻ������
                                                              1��������OCP��PMOS�Ŀ��ƣ�ģ�������� */
        unsigned char  buck1_ocp_delay_sel : 1;  /* bit[7]  : buck1 ocp����ʱ���ӳ�30ns�źţ�
                                                              0��15ns��
                                                              1��30ns�� */
    } reg;
} SOC_SMART_BUCK1_CTRL5_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL5_buck1_new_dmd_sel_START    (1)
#define SOC_SMART_BUCK1_CTRL5_buck1_new_dmd_sel_END      (4)
#define SOC_SMART_BUCK1_CTRL5_buck1_dmd_en_START         (5)
#define SOC_SMART_BUCK1_CTRL5_buck1_dmd_en_END           (5)
#define SOC_SMART_BUCK1_CTRL5_buck1_ocp_shield_START     (6)
#define SOC_SMART_BUCK1_CTRL5_buck1_ocp_shield_END       (6)
#define SOC_SMART_BUCK1_CTRL5_buck1_ocp_delay_sel_START  (7)
#define SOC_SMART_BUCK1_CTRL5_buck1_ocp_delay_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK1_CTRL6_UNION
 �ṹ˵��  : BUCK1_CTRL6 �Ĵ����ṹ���塣��ַƫ����:0x0ED����ֵ:0x52�����:8
 �Ĵ���˵��: BUCK1����6�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck1_dmd_sel : 2;  /* bit[0-1]: buck1 DMD�����ã� */
        unsigned char  buck1_mos_sel : 2;  /* bit[2-3]: buck1����dmd�ṹdmd�������ڣ� */
        unsigned char  buck1_isc_sel : 2;  /* bit[4-5]: buck1 �����л�pfmʱ��з�ֵ��������������(00~11����)�� */
        unsigned char  buck1_ipk_sel : 2;  /* bit[6-7]: buck1 �����л�pfmʱ��з�ֵ�������Ƶ�����������
                                                        00:21k��
                                                        01:28k��
                                                        10:35k��
                                                        11:41k�� */
    } reg;
} SOC_SMART_BUCK1_CTRL6_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL6_buck1_dmd_sel_START  (0)
#define SOC_SMART_BUCK1_CTRL6_buck1_dmd_sel_END    (1)
#define SOC_SMART_BUCK1_CTRL6_buck1_mos_sel_START  (2)
#define SOC_SMART_BUCK1_CTRL6_buck1_mos_sel_END    (3)
#define SOC_SMART_BUCK1_CTRL6_buck1_isc_sel_START  (4)
#define SOC_SMART_BUCK1_CTRL6_buck1_isc_sel_END    (5)
#define SOC_SMART_BUCK1_CTRL6_buck1_ipk_sel_START  (6)
#define SOC_SMART_BUCK1_CTRL6_buck1_ipk_sel_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK1_CTRL7_UNION
 �ṹ˵��  : BUCK1_CTRL7 �Ĵ����ṹ���塣��ַƫ����:0x0EF����ֵ:0x0C�����:8
 �Ĵ���˵��: BUCK1����7�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck1_l_sel        : 1;  /* bit[0]  : buck1б�²������ݵ��ڣ�
                                                             0������1��������0.47uH��У�
                                                             1������2��������1.0uH��У� */
        unsigned char  buck1_slope_gen    : 3;  /* bit[1-3]: buck1б�²����仯��000-111�����ӣ��� */
        unsigned char  buck1_sc_sel       : 2;  /* bit[4-5]: buck1б�²������裬SENSE���裬б�²������ݵ��ڣ� */
        unsigned char  buck1_dmd_shield_n : 1;  /* bit[6]  : buck1 �������dmd�����źţ�
                                                             0�����Σ�
                                                             1�������Σ� */
        unsigned char  buck1_dmd_clamp    : 1;  /* bit[7]  : buck1 dmd�Ƚ�ǿclampѡ��
                                                             0��ʹ��clamp��·��
                                                             1����ʹ��clamp��·�� */
    } reg;
} SOC_SMART_BUCK1_CTRL7_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL7_buck1_l_sel_START         (0)
#define SOC_SMART_BUCK1_CTRL7_buck1_l_sel_END           (0)
#define SOC_SMART_BUCK1_CTRL7_buck1_slope_gen_START     (1)
#define SOC_SMART_BUCK1_CTRL7_buck1_slope_gen_END       (3)
#define SOC_SMART_BUCK1_CTRL7_buck1_sc_sel_START        (4)
#define SOC_SMART_BUCK1_CTRL7_buck1_sc_sel_END          (5)
#define SOC_SMART_BUCK1_CTRL7_buck1_dmd_shield_n_START  (6)
#define SOC_SMART_BUCK1_CTRL7_buck1_dmd_shield_n_END    (6)
#define SOC_SMART_BUCK1_CTRL7_buck1_dmd_clamp_START     (7)
#define SOC_SMART_BUCK1_CTRL7_buck1_dmd_clamp_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK1_CTRL8_UNION
 �ṹ˵��  : BUCK1_CTRL8 �Ĵ����ṹ���塣��ַƫ����:0x0F0����ֵ:0x40�����:8
 �Ĵ���˵��: BUCK1����8�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  reserved       : 1;  /* bit[0]  : ������ */
        unsigned char  buck1_ton_on   : 2;  /* bit[1-2]: buck1��Сռ�ձȵ���λ(00~11����)�� */
        unsigned char  buck1_ton_off  : 1;  /* bit[3]  : buck1��Сռ�ձȵ��ڿ���λ��
                                                         0���رյ��ڹ��ܣ�
                                                         1���������ڹ��ܣ� */
        unsigned char  buck1_clk_sel  : 1;  /* bit[4]  : buck1����ʱ��ѡ���źţ�
                                                         1������buck0 EA��
                                                         0������buck0 PWM�� */
        unsigned char  buck1_ea_sel   : 1;  /* bit[5]  : buck1����ģʽ�����źţ�
                                                         1������buck0 PWM�źţ�
                                                         0���ֱ��ø���PWM�źţ� */
        unsigned char  buck1_slope_dc : 2;  /* bit[6-7]: buck1 slope dcֵ�趨ѡ��
                                                         00��670mv��
                                                         01��550mv��
                                                         10��860mv��
                                                         11��770mv�� */
    } reg;
} SOC_SMART_BUCK1_CTRL8_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL8_buck1_ton_on_START    (1)
#define SOC_SMART_BUCK1_CTRL8_buck1_ton_on_END      (2)
#define SOC_SMART_BUCK1_CTRL8_buck1_ton_off_START   (3)
#define SOC_SMART_BUCK1_CTRL8_buck1_ton_off_END     (3)
#define SOC_SMART_BUCK1_CTRL8_buck1_clk_sel_START   (4)
#define SOC_SMART_BUCK1_CTRL8_buck1_clk_sel_END     (4)
#define SOC_SMART_BUCK1_CTRL8_buck1_ea_sel_START    (5)
#define SOC_SMART_BUCK1_CTRL8_buck1_ea_sel_END      (5)
#define SOC_SMART_BUCK1_CTRL8_buck1_slope_dc_START  (6)
#define SOC_SMART_BUCK1_CTRL8_buck1_slope_dc_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK1_CTRL9_UNION
 �ṹ˵��  : BUCK1_CTRL9 �Ĵ����ṹ���塣��ַƫ����:0x0F1����ֵ:0x00�����:8
 �Ĵ���˵��: BUCK1����9�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck1_reserved0 : 8;  /* bit[0-7]: Ԥ���Ĵ��� */
    } reg;
} SOC_SMART_BUCK1_CTRL9_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL9_buck1_reserved0_START  (0)
#define SOC_SMART_BUCK1_CTRL9_buck1_reserved0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK1_CTRL10_UNION
 �ṹ˵��  : BUCK1_CTRL10 �Ĵ����ṹ���塣��ַƫ����:0x0F2����ֵ:0x00�����:8
 �Ĵ���˵��: BUCK1����10�źżĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck1_reserved1 : 8;  /* bit[0-7]: Ԥ���Ĵ��� */
    } reg;
} SOC_SMART_BUCK1_CTRL10_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL10_buck1_reserved1_START  (0)
#define SOC_SMART_BUCK1_CTRL10_buck1_reserved1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LDO22_OCP_VOS_UNION
 �ṹ˵��  : LDO22_OCP_VOS �Ĵ����ṹ���塣��ַƫ����:0x0F3����ֵ:0x01�����:8
 �Ĵ���˵��: LDO22�����Ƚ������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ldo22_ocp_vos : 2;  /* bit[0-1]: LDO22�����ıȽ���ʧ�����ã�8mV/14mV/20mV/26mV */
        unsigned char  reserved      : 6;  /* bit[2-7]: ������ */
    } reg;
} SOC_SMART_LDO22_OCP_VOS_UNION;
#endif
#define SOC_SMART_LDO22_OCP_VOS_ldo22_ocp_vos_START  (0)
#define SOC_SMART_LDO22_OCP_VOS_ldo22_ocp_vos_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_SMART_VSET_LDO_BUCK_UNION
 �ṹ˵��  : VSET_LDO_BUCK �Ĵ����ṹ���塣��ַƫ����:0x0F4����ֵ:0x01�����:8
 �Ĵ���˵��: LDO_BUCK�����ѹ���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  vset_ldo_buck : 2;  /* bit[0-1]: LDO_BUCK�����ѹ����
                                                        2.7/2.9/3.0/3.15 */
        unsigned char  reserved      : 6;  /* bit[2-7]: ������ */
    } reg;
} SOC_SMART_VSET_LDO_BUCK_UNION;
#endif
#define SOC_SMART_VSET_LDO_BUCK_vset_ldo_buck_START  (0)
#define SOC_SMART_VSET_LDO_BUCK_vset_ldo_buck_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_SMART_XO_LDO_CTRL_UNION
 �ṹ˵��  : XO_LDO_CTRL �Ĵ����ṹ���塣��ַƫ����:0x0F5����ֵ:0x00�����:8
 �Ĵ���˵��: XO_LDO���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  xo_ldo_en_cfg  : 1;  /* bit[0]  : �ڲ�buf��LDO��ʹ�ܣ�
                                                         1'b0��ʾ�رգ�
                                                         1'b1��ʾ�򿪡� */
        unsigned char  xo_ldo_en_sel  : 1;  /* bit[1]  : xo_ldo_en������Դѡ��
                                                         1'b1:�Ĵ�������
                                                         1'b0:�ڲ��߼����� */
        unsigned char  xo_ldo_res_reg : 1;  /* bit[2]  : ģ���ڲ�ûʹ�� */
        unsigned char  reserved       : 5;  /* bit[3-7]: ���� */
    } reg;
} SOC_SMART_XO_LDO_CTRL_UNION;
#endif
#define SOC_SMART_XO_LDO_CTRL_xo_ldo_en_cfg_START   (0)
#define SOC_SMART_XO_LDO_CTRL_xo_ldo_en_cfg_END     (0)
#define SOC_SMART_XO_LDO_CTRL_xo_ldo_en_sel_START   (1)
#define SOC_SMART_XO_LDO_CTRL_xo_ldo_en_sel_END     (1)
#define SOC_SMART_XO_LDO_CTRL_xo_ldo_res_reg_START  (2)
#define SOC_SMART_XO_LDO_CTRL_xo_ldo_res_reg_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_SMART_BUCK01_MOD_CTRL_UNION
 �ṹ˵��  : BUCK01_MOD_CTRL �Ĵ����ṹ���塣��ַƫ����:0x0F7����ֵ:0x03�����:8
 �Ĵ���˵��: BUCKO1ģʽѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  buck01_mode_ctrl : 1;  /* bit[0]  : BUCK0/1ģʽѡ��
                                                           0���������ʹܣ�
                                                           1������BUCK�� */
        unsigned char  buck01_phase_sel : 1;  /* bit[1]  : BUCK0/1��λ���ơ�
                                                           0�����ࣻ
                                                           1��˫�ࡣ */
        unsigned char  reserved         : 6;  /* bit[2-7]: ���� */
    } reg;
} SOC_SMART_BUCK01_MOD_CTRL_UNION;
#endif
#define SOC_SMART_BUCK01_MOD_CTRL_buck01_mode_ctrl_START  (0)
#define SOC_SMART_BUCK01_MOD_CTRL_buck01_mode_ctrl_END    (0)
#define SOC_SMART_BUCK01_MOD_CTRL_buck01_phase_sel_START  (1)
#define SOC_SMART_BUCK01_MOD_CTRL_buck01_phase_sel_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_SMART_SENSOR_CLK_CTRL_UNION
 �ṹ˵��  : SENSOR_CLK_CTRL �Ĵ����ṹ���塣��ַƫ����:0x0F9����ֵ:0x00�����:8
 �Ĵ���˵��: sensorʱ�ӿ��ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  sensor_clk_en      : 1;  /* bit[0]  : sensorʱ�ӷ�Ƶ�����ʹ�ܣ�
                                                             1'b0:�رգ�
                                                             1'b1:�򿪡� */
        unsigned char  sensor_clk_div_num : 2;  /* bit[1-2]: sensorʱ�ӷ�Ƶ���ã�
                                                             2'b00:1��Ƶ��
                                                             2'b01:2��Ƶ��
                                                             2'b10:4��Ƶ��
                                                             2'b11:8��Ƶ�� */
        unsigned char  reserved           : 5;  /* bit[3-7]: ���� */
    } reg;
} SOC_SMART_SENSOR_CLK_CTRL_UNION;
#endif
#define SOC_SMART_SENSOR_CLK_CTRL_sensor_clk_en_START       (0)
#define SOC_SMART_SENSOR_CLK_CTRL_sensor_clk_en_END         (0)
#define SOC_SMART_SENSOR_CLK_CTRL_sensor_clk_div_num_START  (1)
#define SOC_SMART_SENSOR_CLK_CTRL_sensor_clk_div_num_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CK_19M2_CTRL_UNION
 �ṹ˵��  : CK_19M2_CTRL �Ĵ����ṹ���塣��ַƫ����:0x0FA����ֵ:0x00�����:8
 �Ĵ���˵��: CK_19M2 pin�����ʱ�ӿ��ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ck_19m2_clk_en : 1;  /* bit[0]  : ck_19m2pin��ʱ�����ʹ�ܣ�
                                                         1'b0:�رգ�
                                                         1'b1:�򿪡� */
        unsigned char  reserved       : 7;  /* bit[1-7]: ���� */
    } reg;
} SOC_SMART_CK_19M2_CTRL_UNION;
#endif
#define SOC_SMART_CK_19M2_CTRL_ck_19m2_clk_en_START  (0)
#define SOC_SMART_CK_19M2_CTRL_ck_19m2_clk_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SMART_EXTBUCK_MOD_SEL_UNION
 �ṹ˵��  : EXTBUCK_MOD_SEL �Ĵ����ṹ���塣��ַƫ����:0x0FB����ֵ:0x00�����:8
 �Ĵ���˵��: EXTBUCK����ģʽѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  extbuck_mod_sel : 1;  /* bit[0]  : EXTBUCK����ģʽѡ��
                                                          1'b0:�ܿ�����ģ�ӿڣ�
                                                          1'b1:�ܿ���������á�
                                                          (��0x26,27,28����) */
        unsigned char  reserved        : 7;  /* bit[1-7]: ���� */
    } reg;
} SOC_SMART_EXTBUCK_MOD_SEL_UNION;
#endif
#define SOC_SMART_EXTBUCK_MOD_SEL_extbuck_mod_sel_START  (0)
#define SOC_SMART_EXTBUCK_MOD_SEL_extbuck_mod_sel_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SMART_XO_WAVE_CTRL_UNION
 �ṹ˵��  : XO_WAVE_CTRL �Ĵ����ṹ���塣��ַƫ����:0x0FD����ֵ:0x00�����:8
 �Ĵ���˵��: XOʱ��������ο��ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  xo_tri_cap   : 3;  /* bit[0-2]: ���ǲ�������·�ĵ��ݿ��� */
        unsigned char  xo_sys_phase : 1;  /* bit[3]  : 0��ʾʱ�����࣬1��ʾʱ��ͬ�� */
        unsigned char  xo_c1_cap    : 1;  /* bit[4]  : 0��ʾ�����ӵ��ݣ�1��ʾ����2pF���� */
        unsigned char  reserved     : 3;  /* bit[5-7]: ���� */
    } reg;
} SOC_SMART_XO_WAVE_CTRL_UNION;
#endif
#define SOC_SMART_XO_WAVE_CTRL_xo_tri_cap_START    (0)
#define SOC_SMART_XO_WAVE_CTRL_xo_tri_cap_END      (2)
#define SOC_SMART_XO_WAVE_CTRL_xo_sys_phase_START  (3)
#define SOC_SMART_XO_WAVE_CTRL_xo_sys_phase_END    (3)
#define SOC_SMART_XO_WAVE_CTRL_xo_c1_cap_START     (4)
#define SOC_SMART_XO_WAVE_CTRL_xo_c1_cap_END       (4)




/****************************************************************************
                     (2/2) NP_PMU_CTRL
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_IRQ1_RECORD_UNION
 �ṹ˵��  : NP_IRQ1_RECORD �Ĵ����ṹ���塣��ַƫ����:0x011����ֵ:0x00�����:8
 �Ĵ���˵��: �ж�1���µ��¼�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  np_otmp_d1r        : 1;  /* bit[0]: �¶ȱ���(Ĭ��125��)��
                                                           0:û�з��������¼���
                                                           1:�������¼��� */
        unsigned char  np_hreset_n_f      : 1;  /* bit[1]: �ȸ�λ��
                                                           0:û�з��������¼���
                                                           1:�������¼��� */
        unsigned char  np_vsys_2p5_r      : 1;  /* bit[2]: vsys < 2.5V��
                                                           0:û�з��������¼���
                                                           1:�������¼��� */
        unsigned char  np_vsys_uv_d3r     : 1;  /* bit[3]: vsys < 3.0V 3ms:
                                                           0:û�з��������¼���
                                                           1:�������¼��� */
        unsigned char  np_vsys_6p0_d200ur : 1;  /* bit[4]: vsys> 6.0V 200us:
                                                           0:û�з��������¼���
                                                           1:�������¼��� */
        unsigned char  np_pwron_d4sr      : 1;  /* bit[5]: ����������״̬��PWRON����4s:
                                                           0:û�з��������¼���
                                                           1:�������¼��� */
        unsigned char  np_pwron_d20f      : 1;  /* bit[6]: PWRON�����ͷ�20ms��
                                                           0:û�з��������¼���
                                                           1:�������¼��� */
        unsigned char  np_pwron_d20r      : 1;  /* bit[7]: PWRON��������20ms��
                                                           0:û�з��������¼���
                                                           1:�������¼��� */
    } reg;
} SOC_SMART_NP_IRQ1_RECORD_UNION;
#endif
#define SOC_SMART_NP_IRQ1_RECORD_np_otmp_d1r_START         (0)
#define SOC_SMART_NP_IRQ1_RECORD_np_otmp_d1r_END           (0)
#define SOC_SMART_NP_IRQ1_RECORD_np_hreset_n_f_START       (1)
#define SOC_SMART_NP_IRQ1_RECORD_np_hreset_n_f_END         (1)
#define SOC_SMART_NP_IRQ1_RECORD_np_vsys_2p5_r_START       (2)
#define SOC_SMART_NP_IRQ1_RECORD_np_vsys_2p5_r_END         (2)
#define SOC_SMART_NP_IRQ1_RECORD_np_vsys_uv_d3r_START      (3)
#define SOC_SMART_NP_IRQ1_RECORD_np_vsys_uv_d3r_END        (3)
#define SOC_SMART_NP_IRQ1_RECORD_np_vsys_6p0_d200ur_START  (4)
#define SOC_SMART_NP_IRQ1_RECORD_np_vsys_6p0_d200ur_END    (4)
#define SOC_SMART_NP_IRQ1_RECORD_np_pwron_d4sr_START       (5)
#define SOC_SMART_NP_IRQ1_RECORD_np_pwron_d4sr_END         (5)
#define SOC_SMART_NP_IRQ1_RECORD_np_pwron_d20f_START       (6)
#define SOC_SMART_NP_IRQ1_RECORD_np_pwron_d20f_END         (6)
#define SOC_SMART_NP_IRQ1_RECORD_np_pwron_d20r_START       (7)
#define SOC_SMART_NP_IRQ1_RECORD_np_pwron_d20r_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_IRQ2_RECORD_UNION
 �ṹ˵��  : NP_IRQ2_RECORD �Ĵ����ṹ���塣��ַƫ����:0x012����ֵ:0x01�����:8
 �Ĵ���˵��: �ж�2���µ��¼�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  np_vbat_vcoin_sel     : 1;  /* bit[0]: VBAT��VCION�л��źţ�
                                                              0:û�з��������¼���
                                                              1:�������¼���VBAT�� */
        unsigned char  np_vbus_det_3p6_d150r : 1;  /* bit[1]: vbus_det> 3.6V 150ms��
                                                              0:û�з��������¼���
                                                              1:�������¼��� */
        unsigned char  np_vbus_det_3p6_d20f  : 1;  /* bit[2]: vbus_det< 3.6V 20ms��
                                                              0:û�з��������¼���
                                                              1:�������¼��� */
        unsigned char  np_vbus_det_3p6_d20r  : 1;  /* bit[3]: vbus_det> 3.6V 20ms��
                                                              0:û�з��������¼���
                                                              1:�������¼��� */
        unsigned char  np_pwron_restart      : 1;  /* bit[4]: ͨ��pwron����������:
                                                              0:û�з��������¼���
                                                              1:�������¼��� */
        unsigned char  np_pwron_dnsr         : 1;  /* bit[5]: ������������pwron����Ns�ػ�:
                                                              0:û�з��������¼���
                                                              1:�������¼��� */
        unsigned char  np_pwron_d500r        : 1;  /* bit[6]: �ػ�״̬��PWRON����500ms:
                                                              0:û�з��������¼���
                                                              1:�������¼��� */
        unsigned char  np_otmp150_d1r        : 1;  /* bit[7]: �¶�> 150�棺
                                                              0:û�з��������¼���
                                                              1:�������¼��� */
    } reg;
} SOC_SMART_NP_IRQ2_RECORD_UNION;
#endif
#define SOC_SMART_NP_IRQ2_RECORD_np_vbat_vcoin_sel_START      (0)
#define SOC_SMART_NP_IRQ2_RECORD_np_vbat_vcoin_sel_END        (0)
#define SOC_SMART_NP_IRQ2_RECORD_np_vbus_det_3p6_d150r_START  (1)
#define SOC_SMART_NP_IRQ2_RECORD_np_vbus_det_3p6_d150r_END    (1)
#define SOC_SMART_NP_IRQ2_RECORD_np_vbus_det_3p6_d20f_START   (2)
#define SOC_SMART_NP_IRQ2_RECORD_np_vbus_det_3p6_d20f_END     (2)
#define SOC_SMART_NP_IRQ2_RECORD_np_vbus_det_3p6_d20r_START   (3)
#define SOC_SMART_NP_IRQ2_RECORD_np_vbus_det_3p6_d20r_END     (3)
#define SOC_SMART_NP_IRQ2_RECORD_np_pwron_restart_START       (4)
#define SOC_SMART_NP_IRQ2_RECORD_np_pwron_restart_END         (4)
#define SOC_SMART_NP_IRQ2_RECORD_np_pwron_dnsr_START          (5)
#define SOC_SMART_NP_IRQ2_RECORD_np_pwron_dnsr_END            (5)
#define SOC_SMART_NP_IRQ2_RECORD_np_pwron_d500r_START         (6)
#define SOC_SMART_NP_IRQ2_RECORD_np_pwron_d500r_END           (6)
#define SOC_SMART_NP_IRQ2_RECORD_np_otmp150_d1r_START         (7)
#define SOC_SMART_NP_IRQ2_RECORD_np_otmp150_d1r_END           (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_IRQ3_RECORD_UNION
 �ṹ˵��  : NP_IRQ3_RECORD �Ĵ����ṹ���塣��ַƫ����:0x013����ֵ:0x00�����:8
 �Ĵ���˵��: �ж�3���µ��¼�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  np_tcxo_clk_sel_r   : 1;  /* bit[0]: 32kRC�л���32K Crystal OSC ʱ�ӣ�
                                                            0:û�з��������¼���
                                                            1:�������¼��� */
        unsigned char  np_tcxo_clk_sel_f   : 1;  /* bit[1]: 32K Crystal OSC �л���32kRCʱ�ӣ�
                                                            0:û�з��������¼���
                                                            1:�������¼��� */
        unsigned char  np_dcxo_clk_sel_r   : 1;  /* bit[2]: 32K RC �л���19.2MHz/600 ʱ�ӣ�
                                                            0:û�з��������¼���
                                                            1:�������¼��� */
        unsigned char  np_dcxo_clk_sel_f   : 1;  /* bit[3]: 19.2MHz/600 �л���32K RCʱ�ӣ�
                                                            0:û�з��������¼���
                                                            1:�������¼��� */
        unsigned char  np_alarm_on         : 1;  /* bit[4]: �������ӣ�
                                                            0:û�з��������¼���
                                                            1:�������¼��� */
        unsigned char  np_pwr_hold_2d_pwrn : 1;  /* bit[5]: pwr_hold������
                                                            0:û�з��������¼���
                                                            1:�������¼��� */
        unsigned char  np_pwr_hold_2d_pwrd : 1;  /* bit[6]: pwr_hold�ػ���
                                                            0:û�з��������¼���
                                                            1:�������¼��� */
        unsigned char  np_pdns_rst_sel     : 1;  /* bit[7]: ������NS��λ��
                                                            0:û�з��������¼���
                                                            1:�������¼��� */
    } reg;
} SOC_SMART_NP_IRQ3_RECORD_UNION;
#endif
#define SOC_SMART_NP_IRQ3_RECORD_np_tcxo_clk_sel_r_START    (0)
#define SOC_SMART_NP_IRQ3_RECORD_np_tcxo_clk_sel_r_END      (0)
#define SOC_SMART_NP_IRQ3_RECORD_np_tcxo_clk_sel_f_START    (1)
#define SOC_SMART_NP_IRQ3_RECORD_np_tcxo_clk_sel_f_END      (1)
#define SOC_SMART_NP_IRQ3_RECORD_np_dcxo_clk_sel_r_START    (2)
#define SOC_SMART_NP_IRQ3_RECORD_np_dcxo_clk_sel_r_END      (2)
#define SOC_SMART_NP_IRQ3_RECORD_np_dcxo_clk_sel_f_START    (3)
#define SOC_SMART_NP_IRQ3_RECORD_np_dcxo_clk_sel_f_END      (3)
#define SOC_SMART_NP_IRQ3_RECORD_np_alarm_on_START          (4)
#define SOC_SMART_NP_IRQ3_RECORD_np_alarm_on_END            (4)
#define SOC_SMART_NP_IRQ3_RECORD_np_pwr_hold_2d_pwrn_START  (5)
#define SOC_SMART_NP_IRQ3_RECORD_np_pwr_hold_2d_pwrn_END    (5)
#define SOC_SMART_NP_IRQ3_RECORD_np_pwr_hold_2d_pwrd_START  (6)
#define SOC_SMART_NP_IRQ3_RECORD_np_pwr_hold_2d_pwrd_END    (6)
#define SOC_SMART_NP_IRQ3_RECORD_np_pdns_rst_sel_START      (7)
#define SOC_SMART_NP_IRQ3_RECORD_np_pdns_rst_sel_END        (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_SCP_RECORD1_UNION
 �ṹ˵��  : NP_SCP_RECORD1 �Ĵ����ṹ���塣��ַƫ����:0x014����ֵ:0x00�����:8
 �Ĵ���˵��: ��·�������µ��¼1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  np_scp_buck01 : 1;  /* bit[0]  : 0������¼BUCK01�������·��
                                                        1: ����¼BUCK01�����·�� */
        unsigned char  np_scp_buck2  : 1;  /* bit[1]  : 0������¼BUCK2�������·��
                                                        1: ����¼BUCK2�����·�� */
        unsigned char  np_scp_buck3  : 1;  /* bit[2]  : 0������¼BUCK3�������·��
                                                        1: ����¼BUCK3�����·�� */
        unsigned char  np_scp_buck4  : 1;  /* bit[3]  : 0������¼BUCK4�������·��
                                                        1: ����¼BUCK4�����·�� */
        unsigned char  reserved      : 4;  /* bit[4-7]: ������ */
    } reg;
} SOC_SMART_NP_SCP_RECORD1_UNION;
#endif
#define SOC_SMART_NP_SCP_RECORD1_np_scp_buck01_START  (0)
#define SOC_SMART_NP_SCP_RECORD1_np_scp_buck01_END    (0)
#define SOC_SMART_NP_SCP_RECORD1_np_scp_buck2_START   (1)
#define SOC_SMART_NP_SCP_RECORD1_np_scp_buck2_END     (1)
#define SOC_SMART_NP_SCP_RECORD1_np_scp_buck3_START   (2)
#define SOC_SMART_NP_SCP_RECORD1_np_scp_buck3_END     (2)
#define SOC_SMART_NP_SCP_RECORD1_np_scp_buck4_START   (3)
#define SOC_SMART_NP_SCP_RECORD1_np_scp_buck4_END     (3)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_OCP_RECORD1_UNION
 �ṹ˵��  : NP_OCP_RECORD1 �Ĵ����ṹ���塣��ַƫ����:0x015����ֵ:0x00�����:8
 �Ĵ���˵��: �����������µ��¼1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  np_ocp_buck1 : 1;  /* bit[0]  : 0������¼BUCK1��������أ�
                                                       1: ����¼BUCK1������ء� */
        unsigned char  np_ocp_buck2 : 1;  /* bit[1]  : 0������¼BUCK2��������أ�
                                                       1: ����¼BUCK2������ء� */
        unsigned char  np_ocp_buck3 : 1;  /* bit[2]  : 0������¼BUCK3��������أ�
                                                       1: ����¼BUCK3������ء� */
        unsigned char  np_ocp_buck4 : 1;  /* bit[3]  : 0������¼BUCK4��������أ�
                                                       1: ����¼BUCK4������ء� */
        unsigned char  np_ocp_buck0 : 1;  /* bit[4]  : 0������¼BUCK0��������أ�
                                                       1: ����¼BUCK0������ء� */
        unsigned char  reserved     : 3;  /* bit[5-7]: ������ */
    } reg;
} SOC_SMART_NP_OCP_RECORD1_UNION;
#endif
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck1_START  (0)
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck1_END    (0)
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck2_START  (1)
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck2_END    (1)
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck3_START  (2)
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck3_END    (2)
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck4_START  (3)
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck4_END    (3)
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck0_START  (4)
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck0_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_OCP_RECORD2_UNION
 �ṹ˵��  : NP_OCP_RECORD2 �Ĵ����ṹ���塣��ַƫ����:0x016����ֵ:0x00�����:8
 �Ĵ���˵��: �����������µ��¼2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  np_ocp_ldo1 : 1;  /* bit[0]: 0������¼LDO1��������أ�
                                                    1: ����¼LDO1������ء� */
        unsigned char  np_ocp_ldo2 : 1;  /* bit[1]: 0������¼LDO2��������أ�
                                                    1: ����¼LDO2������ء� */
        unsigned char  np_ocp_ldo3 : 1;  /* bit[2]: 0������¼LDO3��������أ�
                                                    1: ����¼LDO3������ء� */
        unsigned char  np_ocp_ldo4 : 1;  /* bit[3]: 0������¼LDO4��������أ�
                                                    1: ����¼LDO4������ء� */
        unsigned char  np_ocp_ldo5 : 1;  /* bit[4]: 0������¼LDO5��������أ�
                                                    1: ����¼LDO5������ء� */
        unsigned char  np_ocp_ldo6 : 1;  /* bit[5]: 0������¼LDO6��������أ�
                                                    1: ����¼LDO6������ء� */
        unsigned char  np_ocp_ldo7 : 1;  /* bit[6]: 0������¼LDO7��������أ�
                                                    1: ����¼LDO7������ء� */
        unsigned char  np_ocp_ldo8 : 1;  /* bit[7]: 0������¼LDO8��������أ�
                                                    1: ����¼LDO8������ء� */
    } reg;
} SOC_SMART_NP_OCP_RECORD2_UNION;
#endif
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo1_START  (0)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo1_END    (0)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo2_START  (1)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo2_END    (1)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo3_START  (2)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo3_END    (2)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo4_START  (3)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo4_END    (3)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo5_START  (4)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo5_END    (4)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo6_START  (5)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo6_END    (5)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo7_START  (6)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo7_END    (6)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo8_START  (7)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo8_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_OCP_RECORD3_UNION
 �ṹ˵��  : NP_OCP_RECORD3 �Ĵ����ṹ���塣��ַƫ����:0x017����ֵ:0x00�����:8
 �Ĵ���˵��: �����������µ��¼3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  np_ocp_ldo9  : 1;  /* bit[0]: 0������¼LDO9��������أ�
                                                     1: ����¼LDO9������ء� */
        unsigned char  np_ocp_ldo10 : 1;  /* bit[1]: 0������¼LDO10��������أ�
                                                     1: ����¼LDO10������ء� */
        unsigned char  np_ocp_ldo11 : 1;  /* bit[2]: 0������¼LDO11��������أ�
                                                     1: ����¼LDO11������ء� */
        unsigned char  np_ocp_ldo12 : 1;  /* bit[3]: 0������¼LDO12��������أ�
                                                     1: ����¼LDO12������ء� */
        unsigned char  np_ocp_ldo13 : 1;  /* bit[4]: 0������¼LDO13��������أ�
                                                     1: ����¼LDO13������ء� */
        unsigned char  np_ocp_ldo14 : 1;  /* bit[5]: 0������¼LDO14��������أ�
                                                     1: ����¼LDO14������ء� */
        unsigned char  np_ocp_ldo15 : 1;  /* bit[6]: 0������¼LDO15��������أ�
                                                     1: ����¼LDO15������ء� */
        unsigned char  np_ocp_ldo16 : 1;  /* bit[7]: 0������¼LDO16��������أ�
                                                     1: ����¼LDO16������ء� */
    } reg;
} SOC_SMART_NP_OCP_RECORD3_UNION;
#endif
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo9_START   (0)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo9_END     (0)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo10_START  (1)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo10_END    (1)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo11_START  (2)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo11_END    (2)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo12_START  (3)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo12_END    (3)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo13_START  (4)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo13_END    (4)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo14_START  (5)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo14_END    (5)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo15_START  (6)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo15_END    (6)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo16_START  (7)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo16_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_OCP_RECORD4_UNION
 �ṹ˵��  : NP_OCP_RECORD4 �Ĵ����ṹ���塣��ַƫ����:0x018����ֵ:0x00�����:8
 �Ĵ���˵��: �����������µ��¼4�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  np_ocp_ldo17 : 1;  /* bit[0]  : 0������¼LDO17��������أ�
                                                       1: ����¼LDO17������ء� */
        unsigned char  np_ocp_ldo18 : 1;  /* bit[1]  : 0������¼LDO18��������أ�
                                                       1: ����¼LDO18������ء� */
        unsigned char  np_ocp_ldo19 : 1;  /* bit[2]  : 0������¼LDO19��������أ�
                                                       1: ����¼LDO19������ء� */
        unsigned char  np_ocp_ldo20 : 1;  /* bit[3]  : 0������¼LDO20��������أ�
                                                       1: ����¼LDO20������ء� */
        unsigned char  np_ocp_ldo21 : 1;  /* bit[4]  : 0������¼LDO21��������أ�
                                                       1: ����¼LDO21������ء� */
        unsigned char  np_ocp_ldo22 : 1;  /* bit[5]  : 0������¼LDO22��������أ�
                                                       1: ����¼LDO22������ء� */
        unsigned char  reserved     : 2;  /* bit[6-7]: ���� */
    } reg;
} SOC_SMART_NP_OCP_RECORD4_UNION;
#endif
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo17_START  (0)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo17_END    (0)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo18_START  (1)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo18_END    (1)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo19_START  (2)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo19_END    (2)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo20_START  (3)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo20_END    (3)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo21_START  (4)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo21_END    (4)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo22_START  (5)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo22_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_OCP_RECORD5_UNION
 �ṹ˵��  : NP_OCP_RECORD5 �Ĵ����ṹ���塣��ַƫ����:0x019����ֵ:0x00�����:8
 �Ĵ���˵��: �����������µ��¼5�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  np_ocp_lvs2   : 1;  /* bit[0]  : 0������¼LVS2��������أ�
                                                        1: ����¼LVS2������ء� */
        unsigned char  np_ocp_classd : 1;  /* bit[1]  : 0������¼CLASSD�����������
                                                        1: ����¼CLASSD��������� */
        unsigned char  np_scp_pmua   : 1;  /* bit[2]  : 0������¼PMUA�������·��
                                                        1: ����¼PMUA�������·�� */
        unsigned char  reserved      : 5;  /* bit[3-7]: ���� */
    } reg;
} SOC_SMART_NP_OCP_RECORD5_UNION;
#endif
#define SOC_SMART_NP_OCP_RECORD5_np_ocp_lvs2_START    (0)
#define SOC_SMART_NP_OCP_RECORD5_np_ocp_lvs2_END      (0)
#define SOC_SMART_NP_OCP_RECORD5_np_ocp_classd_START  (1)
#define SOC_SMART_NP_OCP_RECORD5_np_ocp_classd_END    (1)
#define SOC_SMART_NP_OCP_RECORD5_np_scp_pmua_START    (2)
#define SOC_SMART_NP_OCP_RECORD5_np_scp_pmua_END      (2)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLK_TOP2_UNION
 �ṹ˵��  : CLK_TOP2 �Ĵ����ṹ���塣��ַƫ����:0x065����ֵ:0x50�����:8
 �Ĵ���˵��: CLK_TOP����2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  trim_c1fix : 8;  /* bit[0-7]: C1���ݴ�Сtrim */
    } reg;
} SOC_SMART_CLK_TOP2_UNION;
#endif
#define SOC_SMART_CLK_TOP2_trim_c1fix_START  (0)
#define SOC_SMART_CLK_TOP2_trim_c1fix_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTCDR0_UNION
 �ṹ˵��  : RTCDR0 �Ĵ����ṹ���塣��ַƫ����:0x0A9����ֵ:0x00�����:8
 �Ĵ���˵��: RTC��ǰʱ��bit[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtcdr0 : 8;  /* bit[0-7]: ���˼Ĵ��������ص�ǰRTCֵ��32bit���е�bit[7:0]�� */
    } reg;
} SOC_SMART_RTCDR0_UNION;
#endif
#define SOC_SMART_RTCDR0_rtcdr0_START  (0)
#define SOC_SMART_RTCDR0_rtcdr0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTCDR1_UNION
 �ṹ˵��  : RTCDR1 �Ĵ����ṹ���塣��ַƫ����:0x0AA����ֵ:0x00�����:8
 �Ĵ���˵��: RTC��ǰʱ��bit[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtcdr1 : 8;  /* bit[0-7]: ���˼Ĵ��������ص�ǰRTCֵ��32bit���е�bit[15:8]�� */
    } reg;
} SOC_SMART_RTCDR1_UNION;
#endif
#define SOC_SMART_RTCDR1_rtcdr1_START  (0)
#define SOC_SMART_RTCDR1_rtcdr1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTCDR2_UNION
 �ṹ˵��  : RTCDR2 �Ĵ����ṹ���塣��ַƫ����:0x0AB����ֵ:0x00�����:8
 �Ĵ���˵��: RTC��ǰʱ��bit[23:16]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtcdr2 : 8;  /* bit[0-7]: ���˼Ĵ��������ص�ǰRTCֵ��32bit���е�bit[23:16]�� */
    } reg;
} SOC_SMART_RTCDR2_UNION;
#endif
#define SOC_SMART_RTCDR2_rtcdr2_START  (0)
#define SOC_SMART_RTCDR2_rtcdr2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTCDR3_UNION
 �ṹ˵��  : RTCDR3 �Ĵ����ṹ���塣��ַƫ����:0x0AC����ֵ:0x00�����:8
 �Ĵ���˵��: RTC��ǰʱ��bit[31:24]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtcdr3 : 8;  /* bit[0-7]: ���˼Ĵ��������ص�ǰRTCֵ��32bit���е�bit[31:24]�� */
    } reg;
} SOC_SMART_RTCDR3_UNION;
#endif
#define SOC_SMART_RTCDR3_rtcdr3_START  (0)
#define SOC_SMART_RTCDR3_rtcdr3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTCMR0_UNION
 �ṹ˵��  : RTCMR0 �Ĵ����ṹ���塣��ַƫ����:0x0AD����ֵ:0x00�����:8
 �Ĵ���˵��: RTC�Ƚ�bit[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtcmr0 : 8;  /* bit[0-7]: ����������ʱ��ֵ��32bit���е�bit[7:0]��
                                                 ���˼Ĵ������������һ������ʱ������ֵ��bit[7:0]�� */
    } reg;
} SOC_SMART_RTCMR0_UNION;
#endif
#define SOC_SMART_RTCMR0_rtcmr0_START  (0)
#define SOC_SMART_RTCMR0_rtcmr0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTCMR1_UNION
 �ṹ˵��  : RTCMR1 �Ĵ����ṹ���塣��ַƫ����:0x0AE����ֵ:0x00�����:8
 �Ĵ���˵��: RTC�Ƚ�bit[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtcmr1 : 8;  /* bit[0-7]: ����������ʱ��ֵ��32bit���е�bit[15:8]��
                                                 ���˼Ĵ������������һ������ʱ������ֵ��bit[15:8]�� */
    } reg;
} SOC_SMART_RTCMR1_UNION;
#endif
#define SOC_SMART_RTCMR1_rtcmr1_START  (0)
#define SOC_SMART_RTCMR1_rtcmr1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTCMR2_UNION
 �ṹ˵��  : RTCMR2 �Ĵ����ṹ���塣��ַƫ����:0x0AF����ֵ:0x00�����:8
 �Ĵ���˵��: RTC�Ƚ�bit[23:16]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtcmr2 : 8;  /* bit[0-7]: ����������ʱ��ֵ��32bit���е�bit[23:16]��
                                                 ���˼Ĵ������������һ������ʱ������ֵ��bit[23:16]�� */
    } reg;
} SOC_SMART_RTCMR2_UNION;
#endif
#define SOC_SMART_RTCMR2_rtcmr2_START  (0)
#define SOC_SMART_RTCMR2_rtcmr2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTCMR3_UNION
 �ṹ˵��  : RTCMR3 �Ĵ����ṹ���塣��ַƫ����:0x0B0����ֵ:0x00�����:8
 �Ĵ���˵��: RTC�Ƚ�bit[31:24]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtcmr3 : 8;  /* bit[0-7]: ����������ʱ��ֵ��32bit���е�bit[31:24]��
                                                 ���˼Ĵ������������һ������ʱ������ֵ��bit[31:24]�� */
    } reg;
} SOC_SMART_RTCMR3_UNION;
#endif
#define SOC_SMART_RTCMR3_rtcmr3_START  (0)
#define SOC_SMART_RTCMR3_rtcmr3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTCLR0_UNION
 �ṹ˵��  : RTCLR0 �Ĵ����ṹ���塣��ַƫ����:0x0B1����ֵ:0x00�����:8
 �Ĵ���˵��: RTC����bit[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtcclr0 : 8;  /* bit[0-7]: �����õ�ǰʱ��ֵ��32bit���е�bit[7:0]��
                                                  ���˼Ĵ������������һ�ε�ǰʱ������ֵ��bit[7:0]�� */
    } reg;
} SOC_SMART_RTCLR0_UNION;
#endif
#define SOC_SMART_RTCLR0_rtcclr0_START  (0)
#define SOC_SMART_RTCLR0_rtcclr0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTCLR1_UNION
 �ṹ˵��  : RTCLR1 �Ĵ����ṹ���塣��ַƫ����:0x0B2����ֵ:0x00�����:8
 �Ĵ���˵��: RTC����bit[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtcclr1 : 8;  /* bit[0-7]: �����õ�ǰʱ��ֵ��32bit���е�bit[15:8]��
                                                  ���˼Ĵ������������һ�ε�ǰʱ������ֵ��bit[15:8]�� */
    } reg;
} SOC_SMART_RTCLR1_UNION;
#endif
#define SOC_SMART_RTCLR1_rtcclr1_START  (0)
#define SOC_SMART_RTCLR1_rtcclr1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTCLR2_UNION
 �ṹ˵��  : RTCLR2 �Ĵ����ṹ���塣��ַƫ����:0x0B3����ֵ:0x00�����:8
 �Ĵ���˵��: RTC����bit[23:16]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtcclr2 : 8;  /* bit[0-7]: �����õ�ǰʱ��ֵ��32bit���е�bit[23:16]��
                                                  ���˼Ĵ������������һ�ε�ǰʱ������ֵ��bit[23:16]�� */
    } reg;
} SOC_SMART_RTCLR2_UNION;
#endif
#define SOC_SMART_RTCLR2_rtcclr2_START  (0)
#define SOC_SMART_RTCLR2_rtcclr2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTCLR3_UNION
 �ṹ˵��  : RTCLR3 �Ĵ����ṹ���塣��ַƫ����:0x0B4����ֵ:0x00�����:8
 �Ĵ���˵��: RTC����bit[31:24]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtcclr3 : 8;  /* bit[0-7]: �����õ�ǰʱ��ֵ��32bit���е�bit[31:24]��
                                                  ���˼Ĵ������������һ�ε�ǰʱ������ֵ��bit[31:24]�� */
    } reg;
} SOC_SMART_RTCLR3_UNION;
#endif
#define SOC_SMART_RTCLR3_rtcclr3_START  (0)
#define SOC_SMART_RTCLR3_rtcclr3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTCCTRL_UNION
 �ṹ˵��  : RTCCTRL �Ĵ����ṹ���塣��ַƫ����:0x0B5����ֵ:0x01�����:8
 �Ĵ���˵��: RTC���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtccr    : 1;  /* bit[0]  : ��RTC����λ
                                                   0����RTC��ǰֵ������ֵȫ��Ϊ0��
                                                   1����RTC��ǰֵ������ֵΪʵ�ʵ�ǰֵ�� */
        unsigned char  reserved : 7;  /* bit[1-7]: ������ */
    } reg;
} SOC_SMART_RTCCTRL_UNION;
#endif
#define SOC_SMART_RTCCTRL_rtccr_START     (0)
#define SOC_SMART_RTCCTRL_rtccr_END       (0)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OTP_PDOB0_UNION
 �ṹ˵��  : OTP_PDOB0 �Ĵ����ṹ���塣��ַƫ����:0x0A5����ֵ:0x00�����:8
 �Ĵ���˵��: OTP����ֵ0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otp_pdob0 : 8;  /* bit[0-7]: OTP_PDOB[7:0] */
    } reg;
} SOC_SMART_OTP_PDOB0_UNION;
#endif
#define SOC_SMART_OTP_PDOB0_otp_pdob0_START  (0)
#define SOC_SMART_OTP_PDOB0_otp_pdob0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OTP_PDOB1_UNION
 �ṹ˵��  : OTP_PDOB1 �Ĵ����ṹ���塣��ַƫ����:0x0A6����ֵ:0x00�����:8
 �Ĵ���˵��: OTP����ֵ1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otp_pdob1 : 8;  /* bit[0-7]: OTP_PDOB[15:8] */
    } reg;
} SOC_SMART_OTP_PDOB1_UNION;
#endif
#define SOC_SMART_OTP_PDOB1_otp_pdob1_START  (0)
#define SOC_SMART_OTP_PDOB1_otp_pdob1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OTP_PDOB2_UNION
 �ṹ˵��  : OTP_PDOB2 �Ĵ����ṹ���塣��ַƫ����:0x0A7����ֵ:0x00�����:8
 �Ĵ���˵��: OTP����ֵ2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otp_pdob2 : 8;  /* bit[0-7]: OTP_PDOB[23:16] */
    } reg;
} SOC_SMART_OTP_PDOB2_UNION;
#endif
#define SOC_SMART_OTP_PDOB2_otp_pdob2_START  (0)
#define SOC_SMART_OTP_PDOB2_otp_pdob2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OTP_PDOB3_UNION
 �ṹ˵��  : OTP_PDOB3 �Ĵ����ṹ���塣��ַƫ����:0x0A8����ֵ:0x00�����:8
 �Ĵ���˵��: OTP����ֵ3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  otp_pdob3 : 8;  /* bit[0-7]: OTP_PDOB[31:24] */
    } reg;
} SOC_SMART_OTP_PDOB3_UNION;
#endif
#define SOC_SMART_OTP_PDOB3_otp_pdob3_START  (0)
#define SOC_SMART_OTP_PDOB3_otp_pdob3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CRC_VALUE0_UNION
 �ṹ˵��  : CRC_VALUE0 �Ĵ����ṹ���塣��ַƫ����:0x0BB����ֵ:0xC0�����:8
 �Ĵ���˵��: CRC_VALUE[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  crc_value0 : 8;  /* bit[0-7]: DCXOģʽ�£���RTCʱ��У׼״̬�µõ���RCʱ��У׼ֵ[7:0]�� */
    } reg;
} SOC_SMART_CRC_VALUE0_UNION;
#endif
#define SOC_SMART_CRC_VALUE0_crc_value0_START  (0)
#define SOC_SMART_CRC_VALUE0_crc_value0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CRC_VALUE1_UNION
 �ṹ˵��  : CRC_VALUE1 �Ĵ����ṹ���塣��ַƫ����:0x0BC����ֵ:0x27�����:8
 �Ĵ���˵��: CRC_VALUE[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  crc_value1 : 8;  /* bit[0-7]: DCXOģʽ�£���RTCʱ��У׼״̬�µõ���RCʱ��У׼ֵ[15:8]�� */
    } reg;
} SOC_SMART_CRC_VALUE1_UNION;
#endif
#define SOC_SMART_CRC_VALUE1_crc_value1_START  (0)
#define SOC_SMART_CRC_VALUE1_crc_value1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CRC_VALUE2_UNION
 �ṹ˵��  : CRC_VALUE2 �Ĵ����ṹ���塣��ַƫ����:0x0BD����ֵ:0x09�����:8
 �Ĵ���˵��: CRC_VALUE[20:16]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  crc_value2 : 5;  /* bit[0-4]: DCXOģʽ�£���RTCʱ��У׼״̬�µõ���RCʱ��У׼ֵ[20:16]�� */
        unsigned char  reserved   : 3;  /* bit[5-7]: ���� */
    } reg;
} SOC_SMART_CRC_VALUE2_UNION;
#endif
#define SOC_SMART_CRC_VALUE2_crc_value2_START  (0)
#define SOC_SMART_CRC_VALUE2_crc_value2_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_REG_ADJ1_UNION
 �ṹ˵��  : NP_REG_ADJ1 �Ĵ����ṹ���塣��ַƫ����:0x0BE����ֵ:0x02�����:8
 �Ĵ���˵��: ���µ����1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  pdns_time_sel : 3;  /* bit[0-2]: ������Ns�ػ�����Ĵ�����
                                                        000:6s;
                                                        001:7s;
                                                        010:8s;
                                                        011:9s;
                                                        100:10s;
                                                        101:11s;
                                                        ������8s�� */
        unsigned char  pdns_mk       : 1;  /* bit[3]  : �������ػ����μĴ�����
                                                        0�������γ������ػ���
                                                        1�����γ������ػ���
                                                        ע�������������У�һֱ����pwron_n ����ʱ�ſ���ͨ��SSI���������ػ�����λ��һ����pwron_n�ɿ�20ms���λ�Զ������ */
        unsigned char  pdns_pd_sel   : 1;  /* bit[4]  : ������Ns�ػ�������ѡ��
                                                        0���ػ���
                                                        1�������� */
        unsigned char  vsys_uv_adj   : 1;  /* bit[5]  : 0��
                                                        vsys�ϵ���ֵ3.2V��
                                                        vsys�µ���ֵ3.0V��
                                                        1��
                                                        vsys�ϵ���ֵ3.2V��
                                                        vsys�µ���ֵ3.0V�� */
        unsigned char  nopwr_rc_off  : 1;  /* bit[6]  : �ر��ڲ�256K RCʱ��:
                                                        0:ʹ��;
                                                        1:�رա�
                                                        ��0xEE[0]��ͬ��Чʱ�����ܹر�rc256ʱ�ӡ� */
        unsigned char  pdns_rst_sel  : 1;  /* bit[7]  : ������Ns��λѡ��
                                                        0������λ,ѡ��pdns_pd_sel��
                                                        1����λ�� */
    } reg;
} SOC_SMART_NP_REG_ADJ1_UNION;
#endif
#define SOC_SMART_NP_REG_ADJ1_pdns_time_sel_START  (0)
#define SOC_SMART_NP_REG_ADJ1_pdns_time_sel_END    (2)
#define SOC_SMART_NP_REG_ADJ1_pdns_mk_START        (3)
#define SOC_SMART_NP_REG_ADJ1_pdns_mk_END          (3)
#define SOC_SMART_NP_REG_ADJ1_pdns_pd_sel_START    (4)
#define SOC_SMART_NP_REG_ADJ1_pdns_pd_sel_END      (4)
#define SOC_SMART_NP_REG_ADJ1_vsys_uv_adj_START    (5)
#define SOC_SMART_NP_REG_ADJ1_vsys_uv_adj_END      (5)
#define SOC_SMART_NP_REG_ADJ1_nopwr_rc_off_START   (6)
#define SOC_SMART_NP_REG_ADJ1_nopwr_rc_off_END     (6)
#define SOC_SMART_NP_REG_ADJ1_pdns_rst_sel_START   (7)
#define SOC_SMART_NP_REG_ADJ1_pdns_rst_sel_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_REG_ADJ2_UNION
 �ṹ˵��  : NP_REG_ADJ2 �Ĵ����ṹ���塣��ַƫ����:0x0BF����ֵ:0x40�����:8
 �Ĵ���˵��: ���µ����2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  lvs_offset      : 2;  /* bit[0-1]: LVS����offset���ڼĴ��� */
        unsigned char  buffer_vos_trim : 3;  /* bit[2-4]: TRIM ����LDO��0.7V��׼��ѹ */
        unsigned char  dac_buffer_en   : 1;  /* bit[5]  : ��׼VREF�ܽ��˲�����ѡ��ref_res_sel_int&amp;dac_buffer_en:
                                                          00:2K;
                                                          01:2K;
                                                          10:20K;
                                                          11:70K�� */
        unsigned char  ref_res_sel_int : 1;  /* bit[6]  : ��׼VREF�ܽ��˲�����ѡ�� */
        unsigned char  pmua_short_mk   : 1;  /* bit[7]  : pmua_shortΪpmua��·�źţ�
                                                          0:��Ӧpmua_short��
                                                          1������Ӧpmua_short�� */
    } reg;
} SOC_SMART_NP_REG_ADJ2_UNION;
#endif
#define SOC_SMART_NP_REG_ADJ2_lvs_offset_START       (0)
#define SOC_SMART_NP_REG_ADJ2_lvs_offset_END         (1)
#define SOC_SMART_NP_REG_ADJ2_buffer_vos_trim_START  (2)
#define SOC_SMART_NP_REG_ADJ2_buffer_vos_trim_END    (4)
#define SOC_SMART_NP_REG_ADJ2_dac_buffer_en_START    (5)
#define SOC_SMART_NP_REG_ADJ2_dac_buffer_en_END      (5)
#define SOC_SMART_NP_REG_ADJ2_ref_res_sel_int_START  (6)
#define SOC_SMART_NP_REG_ADJ2_ref_res_sel_int_END    (6)
#define SOC_SMART_NP_REG_ADJ2_pmua_short_mk_START    (7)
#define SOC_SMART_NP_REG_ADJ2_pmua_short_mk_END      (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_REG_CHG_UNION
 �ṹ˵��  : NP_REG_CHG �Ĵ����ṹ���塣��ַƫ����:0x0C0����ֵ:0x0C�����:8
 �Ĵ���˵��: ���õ�ط��µ���ڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  nopwr_vcoinsl        : 2;  /* bit[0-1]: ���õ�س���ѹѡ��
                                                               00��2.5V��
                                                               01��3.0V��
                                                               1X��3.3V�� */
        unsigned char  nopwr_en_backup_chg  : 1;  /* bit[2]  : ���õ�س��ʹ�ܣ�
                                                               0����ʹ�ܣ�
                                                               1��ʹ�ܡ� */
        unsigned char  nopwr_backup_chg_sel : 1;  /* bit[3]  : ���õ�س�緽ʽѡ��
                                                               1������ģʽ��cion�ͳ������ݣ�
                                                               0��ֱͨģʽ����ͨ���ݣ��� */
        unsigned char  codec_reg_mask       : 1;  /* bit[4]  : PMU_SSI��Ӧ0x000��0x1FF�����е�ַ��
                                                               0��PMU_SSI��Ӧ0x1B0~0x1FF֮��ĵ�ַ������
                                                               1��PMU_SSI����Ӧ0x1B0~0x1FF֮��ĵ�ַ������ */
        unsigned char  reserved             : 3;  /* bit[5-7]: ���� */
    } reg;
} SOC_SMART_NP_REG_CHG_UNION;
#endif
#define SOC_SMART_NP_REG_CHG_nopwr_vcoinsl_START         (0)
#define SOC_SMART_NP_REG_CHG_nopwr_vcoinsl_END           (1)
#define SOC_SMART_NP_REG_CHG_nopwr_en_backup_chg_START   (2)
#define SOC_SMART_NP_REG_CHG_nopwr_en_backup_chg_END     (2)
#define SOC_SMART_NP_REG_CHG_nopwr_backup_chg_sel_START  (3)
#define SOC_SMART_NP_REG_CHG_nopwr_backup_chg_sel_END    (3)
#define SOC_SMART_NP_REG_CHG_codec_reg_mask_START        (4)
#define SOC_SMART_NP_REG_CHG_codec_reg_mask_END          (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTC_ADJ1_UNION
 �ṹ˵��  : RTC_ADJ1 �Ĵ����ṹ���塣��ַƫ����:0x0C1����ֵ:0x00�����:8
 �Ĵ���˵��: rtc_adj[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtc_clk_step_adj1 : 8;  /* bit[0-7]: TCXOģʽ�£���ʱ���ȿ��Ե��ڣ����ڷ�Χ+/-192ppm��63��ʱ�ӣ������ڲ���3.05ppm��1��ʱ�ӣ���Ĭ��Ϊ0�� */
    } reg;
} SOC_SMART_RTC_ADJ1_UNION;
#endif
#define SOC_SMART_RTC_ADJ1_rtc_clk_step_adj1_START  (0)
#define SOC_SMART_RTC_ADJ1_rtc_clk_step_adj1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTC_ADJ2_UNION
 �ṹ˵��  : RTC_ADJ2 �Ĵ����ṹ���塣��ַƫ����:0x0C2����ֵ:0x80�����:8
 �Ĵ���˵��: rtc_adj[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtc_clk_step_adj2 : 8;  /* bit[0-7]: TCXOģʽ�£���ʱ���ȿ��Ե��ڣ����ڷ�Χ+/-192ppm��63��ʱ�ӣ������ڲ���3.05ppm��1��ʱ�ӣ���Ĭ��Ϊ0�� */
    } reg;
} SOC_SMART_RTC_ADJ2_UNION;
#endif
#define SOC_SMART_RTC_ADJ2_rtc_clk_step_adj2_START  (0)
#define SOC_SMART_RTC_ADJ2_rtc_clk_step_adj2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_XO_THRESOLD1_UNION
 �ṹ˵��  : XO_THRESOLD1 �Ĵ����ṹ���塣��ַƫ����:0x0C3����ֵ:0xB8�����:8
 �Ĵ���˵��: XO_THRESOLD2[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  xo_cali_thresold1 : 8;  /* bit[0-7]: У׼ƫ����ֵ���üĴ����� */
    } reg;
} SOC_SMART_XO_THRESOLD1_UNION;
#endif
#define SOC_SMART_XO_THRESOLD1_xo_cali_thresold1_START  (0)
#define SOC_SMART_XO_THRESOLD1_xo_cali_thresold1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_XO_THRESOLD2_UNION
 �ṹ˵��  : XO_THRESOLD2 �Ĵ����ṹ���塣��ַƫ����:0x0C4����ֵ:0x00�����:8
 �Ĵ���˵��: XO_THRESOLD2[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  xo_cali_thresold2 : 8;  /* bit[0-7]: У׼ƫ����ֵ���üĴ����� */
    } reg;
} SOC_SMART_XO_THRESOLD2_UNION;
#endif
#define SOC_SMART_XO_THRESOLD2_xo_cali_thresold2_START  (0)
#define SOC_SMART_XO_THRESOLD2_xo_cali_thresold2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_RSVED_ANA0_UNION
 �ṹ˵��  : NP_RSVED_ANA0 �Ĵ����ṹ���塣��ַƫ����:0x0C5����ֵ:0x00�����:8
 �Ĵ���˵��: ���µ�ģ�Ᵽ��0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  no_pwr_resved0 : 8;  /* bit[0-7]: Ԥ�����µ�Ĵ��� */
    } reg;
} SOC_SMART_NP_RSVED_ANA0_UNION;
#endif
#define SOC_SMART_NP_RSVED_ANA0_no_pwr_resved0_START  (0)
#define SOC_SMART_NP_RSVED_ANA0_no_pwr_resved0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_RSVED_ANA1_UNION
 �ṹ˵��  : NP_RSVED_ANA1 �Ĵ����ṹ���塣��ַƫ����:0x0C6����ֵ:0x00�����:8
 �Ĵ���˵��: ���µ�ģ�Ᵽ��1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  no_pwr_resved1 : 8;  /* bit[0-7]: Ԥ�����µ�Ĵ��� */
    } reg;
} SOC_SMART_NP_RSVED_ANA1_UNION;
#endif
#define SOC_SMART_NP_RSVED_ANA1_no_pwr_resved1_START  (0)
#define SOC_SMART_NP_RSVED_ANA1_no_pwr_resved1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_RSVED0_UNION
 �ṹ˵��  : NP_RSVED0 �Ĵ����ṹ���塣��ַƫ����:0x0C7����ֵ:0x00�����:8
 �Ĵ���˵��: ���µ籣��0�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  no_pwr_resved2 : 8;  /* bit[0-7]: ��ƷԤ���������ü����ã�����PMU�ڲ�����״̬�����κ����ã������ڼ�¼��Ϣ�� */
    } reg;
} SOC_SMART_NP_RSVED0_UNION;
#endif
#define SOC_SMART_NP_RSVED0_no_pwr_resved2_START  (0)
#define SOC_SMART_NP_RSVED0_no_pwr_resved2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_RSVED1_UNION
 �ṹ˵��  : NP_RSVED1 �Ĵ����ṹ���塣��ַƫ����:0x0C8����ֵ:0x00�����:8
 �Ĵ���˵��: ���µ籣��1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  no_pwr_resved3 : 8;  /* bit[0-7]: ��ƷԤ���������ü����ã�����PMU�ڲ�����״̬�����κ����ã������ڼ�¼��Ϣ�� */
    } reg;
} SOC_SMART_NP_RSVED1_UNION;
#endif
#define SOC_SMART_NP_RSVED1_no_pwr_resved3_START  (0)
#define SOC_SMART_NP_RSVED1_no_pwr_resved3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_RSVED2_UNION
 �ṹ˵��  : NP_RSVED2 �Ĵ����ṹ���塣��ַƫ����:0x0C9����ֵ:0x00�����:8
 �Ĵ���˵��: ���µ籣��2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  no_pwr_resved4 : 8;  /* bit[0-7]: ��ƷԤ���������ü����ã�����PMU�ڲ�����״̬�����κ����ã������ڼ�¼��Ϣ�� */
    } reg;
} SOC_SMART_NP_RSVED2_UNION;
#endif
#define SOC_SMART_NP_RSVED2_no_pwr_resved4_START  (0)
#define SOC_SMART_NP_RSVED2_no_pwr_resved4_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_RSVED3_UNION
 �ṹ˵��  : NP_RSVED3 �Ĵ����ṹ���塣��ַƫ����:0x0CA����ֵ:0x00�����:8
 �Ĵ���˵��: ���µ籣��3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  no_pwr_resved5 : 8;  /* bit[0-7]: ��ƷԤ���������ü����ã�����PMU�ڲ�����״̬�����κ����ã������ڼ�¼��Ϣ�� */
    } reg;
} SOC_SMART_NP_RSVED3_UNION;
#endif
#define SOC_SMART_NP_RSVED3_no_pwr_resved5_START  (0)
#define SOC_SMART_NP_RSVED3_no_pwr_resved5_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_RSVED4_UNION
 �ṹ˵��  : NP_RSVED4 �Ĵ����ṹ���塣��ַƫ����:0x0CB����ֵ:0x00�����:8
 �Ĵ���˵��: ���µ籣��4�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  no_pwr_resved6 : 8;  /* bit[0-7]: ��ƷԤ���������ü����ã�����PMU�ڲ�����״̬�����κ����ã������ڼ�¼��Ϣ�� */
    } reg;
} SOC_SMART_NP_RSVED4_UNION;
#endif
#define SOC_SMART_NP_RSVED4_no_pwr_resved6_START  (0)
#define SOC_SMART_NP_RSVED4_no_pwr_resved6_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_RSVED5_UNION
 �ṹ˵��  : NP_RSVED5 �Ĵ����ṹ���塣��ַƫ����:0x0CC����ֵ:0x00�����:8
 �Ĵ���˵��: ���µ籣��5�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  no_pwr_resved7 : 8;  /* bit[0-7]: ��ƷԤ���������ü����ã�����PMU�ڲ�����״̬�����κ����ã������ڼ�¼��Ϣ�� */
    } reg;
} SOC_SMART_NP_RSVED5_UNION;
#endif
#define SOC_SMART_NP_RSVED5_no_pwr_resved7_START  (0)
#define SOC_SMART_NP_RSVED5_no_pwr_resved7_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_RSVED6_UNION
 �ṹ˵��  : NP_RSVED6 �Ĵ����ṹ���塣��ַƫ����:0x0CD����ֵ:0x00�����:8
 �Ĵ���˵��: ���µ籣��6�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  no_pwr_resved8 : 8;  /* bit[0-7]: ��ƷԤ���������ü����ã�����PMU�ڲ�����״̬�����κ����ã������ڼ�¼��Ϣ�� */
    } reg;
} SOC_SMART_NP_RSVED6_UNION;
#endif
#define SOC_SMART_NP_RSVED6_no_pwr_resved8_START  (0)
#define SOC_SMART_NP_RSVED6_no_pwr_resved8_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_RSVED7_UNION
 �ṹ˵��  : NP_RSVED7 �Ĵ����ṹ���塣��ַƫ����:0x0CE����ֵ:0x00�����:8
 �Ĵ���˵��: ���µ籣��7�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  no_pwr_resved9 : 8;  /* bit[0-7]: ��ƷԤ���������ü����ã�����PMU�ڲ�����״̬�����κ����ã������ڼ�¼��Ϣ�� */
    } reg;
} SOC_SMART_NP_RSVED7_UNION;
#endif
#define SOC_SMART_NP_RSVED7_no_pwr_resved9_START  (0)
#define SOC_SMART_NP_RSVED7_no_pwr_resved9_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTC_PWRUP_TIMER0_UNION
 �ṹ˵��  : RTC_PWRUP_TIMER0 �Ĵ����ṹ���塣��ַƫ����:0x0CF����ֵ:0x00�����:8
 �Ĵ���˵��: RTC�ϵ�����[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtc_pwrup_timer0 : 8;  /* bit[0-7]: PMU�ϵ�ʱ��RTC��������ֵ[7:0]�� */
    } reg;
} SOC_SMART_RTC_PWRUP_TIMER0_UNION;
#endif
#define SOC_SMART_RTC_PWRUP_TIMER0_rtc_pwrup_timer0_START  (0)
#define SOC_SMART_RTC_PWRUP_TIMER0_rtc_pwrup_timer0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTC_PWRUP_TIMER1_UNION
 �ṹ˵��  : RTC_PWRUP_TIMER1 �Ĵ����ṹ���塣��ַƫ����:0x0D0����ֵ:0x00�����:8
 �Ĵ���˵��: RTC�ϵ�����[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtc_pwrup_timer1 : 8;  /* bit[0-7]: PMU�ϵ�ʱ��RTC��������ֵ[15:8]�� */
    } reg;
} SOC_SMART_RTC_PWRUP_TIMER1_UNION;
#endif
#define SOC_SMART_RTC_PWRUP_TIMER1_rtc_pwrup_timer1_START  (0)
#define SOC_SMART_RTC_PWRUP_TIMER1_rtc_pwrup_timer1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTC_PWRUP_TIMER2_UNION
 �ṹ˵��  : RTC_PWRUP_TIMER2 �Ĵ����ṹ���塣��ַƫ����:0x0D1����ֵ:0x00�����:8
 �Ĵ���˵��: RTC�ϵ�����[23:16]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtc_pwrup_timer2 : 8;  /* bit[0-7]: PMU�ϵ�ʱ��RTC��������ֵ[23:16]�� */
    } reg;
} SOC_SMART_RTC_PWRUP_TIMER2_UNION;
#endif
#define SOC_SMART_RTC_PWRUP_TIMER2_rtc_pwrup_timer2_START  (0)
#define SOC_SMART_RTC_PWRUP_TIMER2_rtc_pwrup_timer2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTC_PWRUP_TIMER3_UNION
 �ṹ˵��  : RTC_PWRUP_TIMER3 �Ĵ����ṹ���塣��ַƫ����:0x0D2����ֵ:0x00�����:8
 �Ĵ���˵��: RTC�ϵ�����[31:24]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtc_pwrup_timer3 : 8;  /* bit[0-7]: PMU�ϵ�ʱ��RTC��������ֵ[31:24]�� */
    } reg;
} SOC_SMART_RTC_PWRUP_TIMER3_UNION;
#endif
#define SOC_SMART_RTC_PWRUP_TIMER3_rtc_pwrup_timer3_START  (0)
#define SOC_SMART_RTC_PWRUP_TIMER3_rtc_pwrup_timer3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTC_PWRDOWN_TIMER0_UNION
 �ṹ˵��  : RTC_PWRDOWN_TIMER0 �Ĵ����ṹ���塣��ַƫ����:0x0D3����ֵ:0x00�����:8
 �Ĵ���˵��: RTC�µ�����[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtc_pwrdown_timer0 : 8;  /* bit[0-7]: PMU�µ�ʱ��RTC��������ֵ[7:0]�� */
    } reg;
} SOC_SMART_RTC_PWRDOWN_TIMER0_UNION;
#endif
#define SOC_SMART_RTC_PWRDOWN_TIMER0_rtc_pwrdown_timer0_START  (0)
#define SOC_SMART_RTC_PWRDOWN_TIMER0_rtc_pwrdown_timer0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTC_PWRDOWN_TIMER1_UNION
 �ṹ˵��  : RTC_PWRDOWN_TIMER1 �Ĵ����ṹ���塣��ַƫ����:0x0D4����ֵ:0x00�����:8
 �Ĵ���˵��: RTC�µ�����[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtc_pwrdown_timer1 : 8;  /* bit[0-7]: PMU�µ�ʱ��RTC��������ֵ[15:8]�� */
    } reg;
} SOC_SMART_RTC_PWRDOWN_TIMER1_UNION;
#endif
#define SOC_SMART_RTC_PWRDOWN_TIMER1_rtc_pwrdown_timer1_START  (0)
#define SOC_SMART_RTC_PWRDOWN_TIMER1_rtc_pwrdown_timer1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTC_PWRDOWN_TIMER2_UNION
 �ṹ˵��  : RTC_PWRDOWN_TIMER2 �Ĵ����ṹ���塣��ַƫ����:0x0D5����ֵ:0x00�����:8
 �Ĵ���˵��: RTC�µ�����[23:16]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtc_pwrdown_timer2 : 8;  /* bit[0-7]: PMU�µ�ʱ��RTC��������ֵ[23:16]�� */
    } reg;
} SOC_SMART_RTC_PWRDOWN_TIMER2_UNION;
#endif
#define SOC_SMART_RTC_PWRDOWN_TIMER2_rtc_pwrdown_timer2_START  (0)
#define SOC_SMART_RTC_PWRDOWN_TIMER2_rtc_pwrdown_timer2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_RTC_PWRDOWN_TIMER3_UNION
 �ṹ˵��  : RTC_PWRDOWN_TIMER3 �Ĵ����ṹ���塣��ַƫ����:0x0D6����ֵ:0x00�����:8
 �Ĵ���˵��: RTC�µ�����[31:24]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  rtc_pwrdown_timer3 : 8;  /* bit[0-7]: PMU�µ�ʱ��RTC��������ֵ[31:24]�� */
    } reg;
} SOC_SMART_RTC_PWRDOWN_TIMER3_UNION;
#endif
#define SOC_SMART_RTC_PWRDOWN_TIMER3_rtc_pwrdown_timer3_START  (0)
#define SOC_SMART_RTC_PWRDOWN_TIMER3_rtc_pwrdown_timer3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NOPWR_RC_OFF_EN_UNION
 �ṹ˵��  : NOPWR_RC_OFF_EN �Ĵ����ṹ���塣��ַƫ����:0x0EE����ֵ:0x00�����:8
 �Ĵ���˵��: XO_DIG_CLK_EN���������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  nopwr_rc_off_en : 1;  /* bit[0]  : RCʱ�ӿ����źţ�
                                                          1��b1�ر�;
                                                          1'b0ʹ�ܡ�
                                                          ��0xBE[6]��ͬ��Чʱ�����ܹر�rc256ʱ�ӡ� */
        unsigned char  reserved        : 7;  /* bit[1-7]: ���� */
    } reg;
} SOC_SMART_NOPWR_RC_OFF_EN_UNION;
#endif
#define SOC_SMART_NOPWR_RC_OFF_EN_nopwr_rc_off_en_START  (0)
#define SOC_SMART_NOPWR_RC_OFF_EN_nopwr_rc_off_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SMART_XO_DIG_CLK_UNION
 �ṹ˵��  : XO_DIG_CLK �Ĵ����ṹ���塣��ַƫ����:0x0F6����ֵ:0x1F�����:8
 �Ĵ���˵��: XO_DIG_CLK���������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  xo_dig_clk0 : 1;  /* bit[0]  : clk_buf0ѡ��
                                                      OTP_BUF=1��xo_dig_clk0����ģ��BUF������BUF����Ч��0��Ӧģ��BUF,1��Ӧ����BUF��
                                                      OTP_BUF=0��xo_dig_clk0�̶�ģ��BUF */
        unsigned char  xo_dig_clk1 : 1;  /* bit[1]  : clk_buf1ѡ��
                                                      OTP_BUF=1��xo_dig_clk1����ģ��BUF������BUF����Ч��0��Ӧģ��BUF,1��Ӧ����BUF��
                                                      OTP_BUF=0��xo_dig_clk1�̶�ģ��BUF */
        unsigned char  xo_dig_clk2 : 1;  /* bit[2]  : clk_buf2ѡ��
                                                      OTP_BUF=1��xo_dig_clk2����ģ��BUF������BUF����Ч��0��Ӧģ��BUF,1��Ӧ����BUF��
                                                      OTP_BUF=0��xo_dig_clk2�̶�ģ��BUF */
        unsigned char  xo_dig_clk3 : 1;  /* bit[3]  : clk_buf3ѡ��
                                                      OTP_BUF=1��xo_dig_clk3����ģ��BUF������BUF����Ч��0��Ӧģ��BUF,1��Ӧ����BUF��
                                                      OTP_BUF=0��xo_dig_clk3�̶�ģ��BUF */
        unsigned char  xo_dig_clk4 : 1;  /* bit[4]  : clk_buf4ѡ��
                                                      OTP_BUF=1��xo_dig_clk4����ģ��BUF������BUF����Ч��0��Ӧģ��BUF,1��Ӧ����BUF��
                                                      OTP_BUF=0��xo_dig_clk4�̶�ģ��BUF */
        unsigned char  reserved    : 3;  /* bit[5-7]: ���� */
    } reg;
} SOC_SMART_XO_DIG_CLK_UNION;
#endif
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk0_START  (0)
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk0_END    (0)
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk1_START  (1)
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk1_END    (1)
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk2_START  (2)
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk2_END    (2)
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk3_START  (3)
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk3_END    (3)
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk4_START  (4)
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk4_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SMART_SMPL_OPEN_EN_UNION
 �ṹ˵��  : SMPL_OPEN_EN �Ĵ����ṹ���塣��ַƫ����:0x0F8����ֵ:0x00�����:8
 �Ĵ���˵��: SMPL���ܿ��ؼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  smpl_open_en  : 1;  /* bit[0]  : SMPL���ܿ��أ�
                                                        1'b0:�ر�
                                                        1'b1:���� */
        unsigned char  smpl_time_sel : 2;  /* bit[1-2]: SMPLʱ�����ã�
                                                        2'b00:0.5s
                                                        2'b01:1s
                                                        2'b10:1.5s
                                                        2'b11:2s */
        unsigned char  reserved      : 5;  /* bit[3-7]: ���� */
    } reg;
} SOC_SMART_SMPL_OPEN_EN_UNION;
#endif
#define SOC_SMART_SMPL_OPEN_EN_smpl_open_en_START   (0)
#define SOC_SMART_SMPL_OPEN_EN_smpl_open_en_END     (0)
#define SOC_SMART_SMPL_OPEN_EN_smpl_time_sel_START  (1)
#define SOC_SMART_SMPL_OPEN_EN_smpl_time_sel_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_SMART_PWR_HOLD_2D_DEB_UNION
 �ṹ˵��  : PWR_HOLD_2D_DEB �Ĵ����ṹ���塣��ַƫ����:0x0FC����ֵ:0x03�����:8
 �Ĵ���˵��: PWR_HOLD_2D�˲����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  pwr_hold_2d_deb : 2;  /* bit[0-1]: pwr_hold_2d_deb�˲����ã�
                                                          2'b00:0ms��
                                                          2'b01:1ms��
                                                          2'b10:2ms��
                                                          2'b11:4ms��Ĭ��4ms */
        unsigned char  reserved        : 6;  /* bit[2-7]: ���� */
    } reg;
} SOC_SMART_PWR_HOLD_2D_DEB_UNION;
#endif
#define SOC_SMART_PWR_HOLD_2D_DEB_pwr_hold_2d_deb_START  (0)
#define SOC_SMART_PWR_HOLD_2D_DEB_pwr_hold_2d_deb_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CK19M2_600_586_EN_UNION
 �ṹ˵��  : CK19M2_600_586_EN �Ĵ����ṹ���塣��ַƫ����:0x0FE����ֵ:0x00�����:8
 �Ĵ���˵��: 19.2Mʱ��600��586��Ƶ�л�ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  ck19m_600_586_en : 1;  /* bit[0]  : 1'b1��DCXOģʽ����586��Ƶ
                                                           1'b0��DCXOģʽ����600��Ƶ��
                                                           Ĭ��600��Ƶ */
        unsigned char  reserved         : 7;  /* bit[1-7]: ���� */
    } reg;
} SOC_SMART_CK19M2_600_586_EN_UNION;
#endif
#define SOC_SMART_CK19M2_600_586_EN_ck19m_600_586_en_START  (0)
#define SOC_SMART_CK19M2_600_586_EN_ck19m_600_586_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SMART_NP_SMPL_IRQ_UNION
 �ṹ˵��  : NP_SMPL_IRQ �Ĵ����ṹ���塣��ַƫ����:0x0FF����ֵ:0x00�����:8
 �Ĵ���˵��: SMPL���������ϵ��¼����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  np_smpl_irq : 1;  /* bit[0]  : ����SMPL�¼���
                                                      0:û�з��������¼���
                                                      1:�������¼��� */
        unsigned char  reserved    : 7;  /* bit[1-7]: ���� */
    } reg;
} SOC_SMART_NP_SMPL_IRQ_UNION;
#endif
#define SOC_SMART_NP_SMPL_IRQ_np_smpl_irq_START  (0)
#define SOC_SMART_NP_SMPL_IRQ_np_smpl_irq_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLK_TOP6_UNION
 �ṹ˵��  : CLK_TOP6 �Ĵ����ṹ���塣��ַƫ����:0x100����ֵ:0x04�����:8
 �Ĵ���˵��: CLK_TOP����6�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  trim_c2fix : 4;  /* bit[0-3]: C2���ݴ�Сtrim */
        unsigned char  reserved   : 4;  /* bit[4-7]: ���� */
    } reg;
} SOC_SMART_CLK_TOP6_UNION;
#endif
#define SOC_SMART_CLK_TOP6_trim_c2fix_START  (0)
#define SOC_SMART_CLK_TOP6_trim_c2fix_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT_0_UNION
 �ṹ˵��  : CURRENT_0 �Ĵ����ṹ���塣��ַƫ����:0x14D����ֵ:0x00�����:8
 �Ĵ���˵��: ��ǰ����[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current_0 : 8;  /* bit[0-7]: ��ǰ������8λ����ֵ�Ǿ���У׼���ֵ�� */
    } reg;
} SOC_SMART_CURRENT_0_UNION;
#endif
#define SOC_SMART_CURRENT_0_current_0_START  (0)
#define SOC_SMART_CURRENT_0_current_0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT_1_UNION
 �ṹ˵��  : CURRENT_1 �Ĵ����ṹ���塣��ַƫ����:0x14E����ֵ:0x00�����:8
 �Ĵ���˵��: ��ǰ����[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current_1 : 8;  /* bit[0-7]: ��ǰ������8λ����ֵ�Ǿ���У׼���ֵ�� */
    } reg;
} SOC_SMART_CURRENT_1_UNION;
#endif
#define SOC_SMART_CURRENT_1_current_1_START  (0)
#define SOC_SMART_CURRENT_1_current_1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT_0_UNION
 �ṹ˵��  : V_OUT_0 �Ĵ����ṹ���塣��ַƫ����:0x14F����ֵ:0xFF�����:8
 �Ĵ���˵��: ��ǰ��ѹ[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out_0 : 8;  /* bit[0-7]: ��ǰ��ѹ��8λ����ֵ�Ǿ���У׼���ֵ�� */
    } reg;
} SOC_SMART_V_OUT_0_UNION;
#endif
#define SOC_SMART_V_OUT_0_v_out_0_START  (0)
#define SOC_SMART_V_OUT_0_v_out_0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT_1_UNION
 �ṹ˵��  : V_OUT_1 �Ĵ����ṹ���塣��ַƫ����:0x150����ֵ:0xFF�����:8
 �Ĵ���˵��: ��ǰ��ѹ[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out_1 : 8;  /* bit[0-7]: ��ǰ��ѹ��8λ����ֵ�Ǿ���У׼���ֵ�� */
    } reg;
} SOC_SMART_V_OUT_1_UNION;
#endif
#define SOC_SMART_V_OUT_1_v_out_1_START  (0)
#define SOC_SMART_V_OUT_1_v_out_1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLJ_CTRL_REG_UNION
 �ṹ˵��  : CLJ_CTRL_REG �Ĵ����ṹ���塣��ַƫ����:0x151����ֵ:0x80�����:8
 �Ĵ���˵��: ���ؼƿ��ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  eco_ctrl            : 3;  /* bit[0-2]: bit[2]���Ƿ�ǿ�ƽ���ECOģʽ���ơ�
                                                              0����ǿ�ƽ���ECOģʽ��
                                                              1��ǿ�ƽ���ECOģʽ��
                                                              
                                                              bit[1]�����ؼ��Ƿ����PMU����ECOģʽ���ơ�
                                                              0�����ؼƲ�����PMU����ECOģʽ��
                                                              1�����ؼƸ���PMU����ECOģʽ��
                                                              ��������bit[2] == 0 ʱ��Ч��
                                                              
                                                              bit[0]������ECOģʽʱ��ʹ���ź��Ƿ�ȥ�����ơ�
                                                              0������ECOģʽʹ���źŲ�ȥ����
                                                              1������ECOģʽʹ���ź�ȥ����
                                                              ��������bit[1] ==1 ʱ��Ч�� */
        unsigned char  reflash_value_ctrl  : 1;  /* bit[3]  : ���ؼƸ������ݷ�ʽѡ��
                                                              0������״̬���������ݣ�
                                                              1����ECOģʽ�������ݡ� */
        unsigned char  eco_filter_time     : 2;  /* bit[4-5]: ���ؼƽ���ECOģʽʹ���ź�ȥ��ʱ��ѡ��
                                                              00��20ms��
                                                              01��25ms��
                                                              10��30ms��
                                                              11��35ms��
                                                              ��������en_eco_modeȥ��ʱ����Ĭ��Ϊ00�� */
        unsigned char  calibration_ctrl    : 1;  /* bit[6]  : ���ؼ�ǿ��У׼����λ��
                                                              0����У׼��
                                                              1��ǿ�ƽ���У׼״̬�� */
        unsigned char  coul_ctrl_onoff_reg : 1;  /* bit[7]  : ���ؼƿ��ؿ��ƼĴ�����
                                                              0�����ؼƹرգ�
                                                              1�����ؼƿ�����
                                                              ע���üĴ�����������Ϊ���ؼƹرա� */
    } reg;
} SOC_SMART_CLJ_CTRL_REG_UNION;
#endif
#define SOC_SMART_CLJ_CTRL_REG_eco_ctrl_START             (0)
#define SOC_SMART_CLJ_CTRL_REG_eco_ctrl_END               (2)
#define SOC_SMART_CLJ_CTRL_REG_reflash_value_ctrl_START   (3)
#define SOC_SMART_CLJ_CTRL_REG_reflash_value_ctrl_END     (3)
#define SOC_SMART_CLJ_CTRL_REG_eco_filter_time_START      (4)
#define SOC_SMART_CLJ_CTRL_REG_eco_filter_time_END        (5)
#define SOC_SMART_CLJ_CTRL_REG_calibration_ctrl_START     (6)
#define SOC_SMART_CLJ_CTRL_REG_calibration_ctrl_END       (6)
#define SOC_SMART_CLJ_CTRL_REG_coul_ctrl_onoff_reg_START  (7)
#define SOC_SMART_CLJ_CTRL_REG_coul_ctrl_onoff_reg_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ECO_REFALSH_TIME_UNION
 �ṹ˵��  : ECO_REFALSH_TIME �Ĵ����ṹ���塣��ַƫ����:0x152����ֵ:0x01�����:8
 �Ĵ���˵��: ECO_REFLASH����ʱ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  eco_reflash_time : 8;  /* bit[0-7]: �˹���ʱ����һ����λ����110ms��ΪECO_REFLASHʱ�䣻��Ч����ֵΪ1~255������ֵ����255ʱ��Ӳ��ֱ�ӱ��͵�255��Ĭ��Ϊ1�� */
    } reg;
} SOC_SMART_ECO_REFALSH_TIME_UNION;
#endif
#define SOC_SMART_ECO_REFALSH_TIME_eco_reflash_time_START  (0)
#define SOC_SMART_ECO_REFALSH_TIME_eco_reflash_time_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CL_OUT0_UNION
 �ṹ˵��  : CL_OUT0 �Ĵ����ṹ���塣��ַƫ����:0x153����ֵ:0x00�����:8
 �Ĵ���˵��: cl_out[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  cl_out0 : 8;  /* bit[0-7]: ��������������[7:0]�� */
    } reg;
} SOC_SMART_CL_OUT0_UNION;
#endif
#define SOC_SMART_CL_OUT0_cl_out0_START  (0)
#define SOC_SMART_CL_OUT0_cl_out0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CL_OUT1_UNION
 �ṹ˵��  : CL_OUT1 �Ĵ����ṹ���塣��ַƫ����:0x154����ֵ:0x00�����:8
 �Ĵ���˵��: cl_out[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  cl_out1 : 8;  /* bit[0-7]: ��������������[15:8]�� */
    } reg;
} SOC_SMART_CL_OUT1_UNION;
#endif
#define SOC_SMART_CL_OUT1_cl_out1_START  (0)
#define SOC_SMART_CL_OUT1_cl_out1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CL_OUT2_UNION
 �ṹ˵��  : CL_OUT2 �Ĵ����ṹ���塣��ַƫ����:0x155����ֵ:0x00�����:8
 �Ĵ���˵��: cl_out[23:16]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  cl_out2 : 8;  /* bit[0-7]: ��������������[23:16]�� */
    } reg;
} SOC_SMART_CL_OUT2_UNION;
#endif
#define SOC_SMART_CL_OUT2_cl_out2_START  (0)
#define SOC_SMART_CL_OUT2_cl_out2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CL_OUT3_UNION
 �ṹ˵��  : CL_OUT3 �Ĵ����ṹ���塣��ַƫ����:0x156����ֵ:0x00�����:8
 �Ĵ���˵��: cl_out[31:24]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  cl_out3 : 8;  /* bit[0-7]: ��������������[31:24]�� */
    } reg;
} SOC_SMART_CL_OUT3_UNION;
#endif
#define SOC_SMART_CL_OUT3_cl_out3_START  (0)
#define SOC_SMART_CL_OUT3_cl_out3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CL_IN0_UNION
 �ṹ˵��  : CL_IN0 �Ĵ����ṹ���塣��ַƫ����:0x157����ֵ:0x00�����:8
 �Ĵ���˵��: cl_in[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  cl_in0 : 8;  /* bit[0-7]: �������������[7:0]�� */
    } reg;
} SOC_SMART_CL_IN0_UNION;
#endif
#define SOC_SMART_CL_IN0_cl_in0_START  (0)
#define SOC_SMART_CL_IN0_cl_in0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CL_IN1_UNION
 �ṹ˵��  : CL_IN1 �Ĵ����ṹ���塣��ַƫ����:0x158����ֵ:0x00�����:8
 �Ĵ���˵��: cl_in[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  cl_in1 : 8;  /* bit[0-7]: �������������[15:8]�� */
    } reg;
} SOC_SMART_CL_IN1_UNION;
#endif
#define SOC_SMART_CL_IN1_cl_in1_START  (0)
#define SOC_SMART_CL_IN1_cl_in1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CL_IN2_UNION
 �ṹ˵��  : CL_IN2 �Ĵ����ṹ���塣��ַƫ����:0x159����ֵ:0x00�����:8
 �Ĵ���˵��: cl_in[23:16]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  cl_in2 : 8;  /* bit[0-7]: �������������[23:16]�� */
    } reg;
} SOC_SMART_CL_IN2_UNION;
#endif
#define SOC_SMART_CL_IN2_cl_in2_START  (0)
#define SOC_SMART_CL_IN2_cl_in2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CL_IN3_UNION
 �ṹ˵��  : CL_IN3 �Ĵ����ṹ���塣��ַƫ����:0x15A����ֵ:0x00�����:8
 �Ĵ���˵��: cl_in[31:24]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  cl_in3 : 8;  /* bit[0-7]: �������������[31:24]�� */
    } reg;
} SOC_SMART_CL_IN3_UNION;
#endif
#define SOC_SMART_CL_IN3_cl_in3_START  (0)
#define SOC_SMART_CL_IN3_cl_in3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CHG_TIMER0_UNION
 �ṹ˵��  : CHG_TIMER0 �Ĵ����ṹ���塣��ַƫ����:0x15B����ֵ:0x00�����:8
 �Ĵ���˵��: chg_timer[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  chg_timer0 : 8;  /* bit[0-7]: ���ʱ�������[7:0]�� */
    } reg;
} SOC_SMART_CHG_TIMER0_UNION;
#endif
#define SOC_SMART_CHG_TIMER0_chg_timer0_START  (0)
#define SOC_SMART_CHG_TIMER0_chg_timer0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CHG_TIMER1_UNION
 �ṹ˵��  : CHG_TIMER1 �Ĵ����ṹ���塣��ַƫ����:0x15C����ֵ:0x00�����:8
 �Ĵ���˵��: chg_timer[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  chg_timer1 : 8;  /* bit[0-7]: ���ʱ�������[15:8]�� */
    } reg;
} SOC_SMART_CHG_TIMER1_UNION;
#endif
#define SOC_SMART_CHG_TIMER1_chg_timer1_START  (0)
#define SOC_SMART_CHG_TIMER1_chg_timer1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CHG_TIMER2_UNION
 �ṹ˵��  : CHG_TIMER2 �Ĵ����ṹ���塣��ַƫ����:0x15D����ֵ:0x00�����:8
 �Ĵ���˵��: chg_timer[23:16]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  chg_timer2 : 8;  /* bit[0-7]: ���ʱ�������[23:16]�� */
    } reg;
} SOC_SMART_CHG_TIMER2_UNION;
#endif
#define SOC_SMART_CHG_TIMER2_chg_timer2_START  (0)
#define SOC_SMART_CHG_TIMER2_chg_timer2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CHG_TIMER3_UNION
 �ṹ˵��  : CHG_TIMER3 �Ĵ����ṹ���塣��ַƫ����:0x15E����ֵ:0x00�����:8
 �Ĵ���˵��: chg_timer[31:24]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  chg_timer3 : 8;  /* bit[0-7]: ���ʱ�������[31:24]�� */
    } reg;
} SOC_SMART_CHG_TIMER3_UNION;
#endif
#define SOC_SMART_CHG_TIMER3_chg_timer3_START  (0)
#define SOC_SMART_CHG_TIMER3_chg_timer3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LOAD_TIMER0_UNION
 �ṹ˵��  : LOAD_TIMER0 �Ĵ����ṹ���塣��ַƫ����:0x15F����ֵ:0x00�����:8
 �Ĵ���˵��: load_timer[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  load_timer0 : 8;  /* bit[0-7]: �ŵ�ʱ�������[7:0]�� */
    } reg;
} SOC_SMART_LOAD_TIMER0_UNION;
#endif
#define SOC_SMART_LOAD_TIMER0_load_timer0_START  (0)
#define SOC_SMART_LOAD_TIMER0_load_timer0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LOAD_TIMER1_UNION
 �ṹ˵��  : LOAD_TIMER1 �Ĵ����ṹ���塣��ַƫ����:0x160����ֵ:0x00�����:8
 �Ĵ���˵��: load_timer[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  load_timer1 : 8;  /* bit[0-7]: �ŵ�ʱ�������[15:8]�� */
    } reg;
} SOC_SMART_LOAD_TIMER1_UNION;
#endif
#define SOC_SMART_LOAD_TIMER1_load_timer1_START  (0)
#define SOC_SMART_LOAD_TIMER1_load_timer1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LOAD_TIMER2_UNION
 �ṹ˵��  : LOAD_TIMER2 �Ĵ����ṹ���塣��ַƫ����:0x161����ֵ:0x00�����:8
 �Ĵ���˵��: load_timer[23:16]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  load_timer2 : 8;  /* bit[0-7]: �ŵ�ʱ�������[23:16]�� */
    } reg;
} SOC_SMART_LOAD_TIMER2_UNION;
#endif
#define SOC_SMART_LOAD_TIMER2_load_timer2_START  (0)
#define SOC_SMART_LOAD_TIMER2_load_timer2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_LOAD_TIMER3_UNION
 �ṹ˵��  : LOAD_TIMER3 �Ĵ����ṹ���塣��ַƫ����:0x162����ֵ:0x00�����:8
 �Ĵ���˵��: load_timer[31:24]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  load_timer3 : 8;  /* bit[0-7]: �ŵ�ʱ�������[31:24]�� */
    } reg;
} SOC_SMART_LOAD_TIMER3_UNION;
#endif
#define SOC_SMART_LOAD_TIMER3_load_timer3_START  (0)
#define SOC_SMART_LOAD_TIMER3_load_timer3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CL_INT0_UNION
 �ṹ˵��  : CL_INT0 �Ĵ����ṹ���塣��ַƫ����:0x163����ֵ:0x00�����:8
 �Ĵ���˵��: cl_int[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  cl_int0 : 8;  /* bit[0-7]: ���������жϱȽϼĴ���[7:0]��
                                                  ��cl_out>cl_intʱ�ϱ��жϡ� */
    } reg;
} SOC_SMART_CL_INT0_UNION;
#endif
#define SOC_SMART_CL_INT0_cl_int0_START  (0)
#define SOC_SMART_CL_INT0_cl_int0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CL_INT1_UNION
 �ṹ˵��  : CL_INT1 �Ĵ����ṹ���塣��ַƫ����:0x164����ֵ:0x00�����:8
 �Ĵ���˵��: cl_int[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  cl_int1 : 8;  /* bit[0-7]: ���������жϱȽϼĴ���[15:8]��
                                                  ��cl_out>cl_intʱ�ϱ��жϡ� */
    } reg;
} SOC_SMART_CL_INT1_UNION;
#endif
#define SOC_SMART_CL_INT1_cl_int1_START  (0)
#define SOC_SMART_CL_INT1_cl_int1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CL_INT2_UNION
 �ṹ˵��  : CL_INT2 �Ĵ����ṹ���塣��ַƫ����:0x165����ֵ:0x00�����:8
 �Ĵ���˵��: cl_int[23:16]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  cl_int2 : 8;  /* bit[0-7]: ���������жϱȽϼĴ���[23:16]��
                                                  ��cl_out>cl_intʱ�ϱ��жϡ� */
    } reg;
} SOC_SMART_CL_INT2_UNION;
#endif
#define SOC_SMART_CL_INT2_cl_int2_START  (0)
#define SOC_SMART_CL_INT2_cl_int2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CL_INT3_UNION
 �ṹ˵��  : CL_INT3 �Ĵ����ṹ���塣��ַƫ����:0x166����ֵ:0x80�����:8
 �Ĵ���˵��: cl_int[31:24]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  cl_int3 : 8;  /* bit[0-7]: ���������жϱȽϼĴ���[31:24]��
                                                  ��cl_out>cl_intʱ�ϱ��жϡ� */
    } reg;
} SOC_SMART_CL_INT3_UNION;
#endif
#define SOC_SMART_CL_INT3_cl_int3_START  (0)
#define SOC_SMART_CL_INT3_cl_int3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_INT0_UNION
 �ṹ˵��  : V_INT0 �Ĵ����ṹ���塣��ַƫ����:0x167����ֵ:0x00�����:8
 �Ĵ���˵��: v_int[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_int0 : 8;  /* bit[0-7]: ��ѹ�жϱȽ�ֵ�Ĵ���[7:0]�� */
    } reg;
} SOC_SMART_V_INT0_UNION;
#endif
#define SOC_SMART_V_INT0_v_int0_START  (0)
#define SOC_SMART_V_INT0_v_int0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_INT1_UNION
 �ṹ˵��  : V_INT1 �Ĵ����ṹ���塣��ַƫ����:0x168����ֵ:0x00�����:8
 �Ĵ���˵��: v_int[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_int1 : 8;  /* bit[0-7]: ��ѹ�жϱȽ�ֵ�Ĵ���[15:8]�� */
    } reg;
} SOC_SMART_V_INT1_UNION;
#endif
#define SOC_SMART_V_INT1_v_int1_START  (0)
#define SOC_SMART_V_INT1_v_int1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OFFSET_CURRENT0_UNION
 �ṹ˵��  : OFFSET_CURRENT0 �Ĵ����ṹ���塣��ַƫ����:0x169����ֵ:0x00�����:8
 �Ĵ���˵��: offset_current[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  offset_current0 : 8;  /* bit[0-7]: ����У׼ֵ[7:0]�� */
    } reg;
} SOC_SMART_OFFSET_CURRENT0_UNION;
#endif
#define SOC_SMART_OFFSET_CURRENT0_offset_current0_START  (0)
#define SOC_SMART_OFFSET_CURRENT0_offset_current0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OFFSET_CURRENT1_UNION
 �ṹ˵��  : OFFSET_CURRENT1 �Ĵ����ṹ���塣��ַƫ����:0x16A����ֵ:0x00�����:8
 �Ĵ���˵��: offset_current[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  offset_current1 : 8;  /* bit[0-7]: ����У׼ֵ[15:8]�� */
    } reg;
} SOC_SMART_OFFSET_CURRENT1_UNION;
#endif
#define SOC_SMART_OFFSET_CURRENT1_offset_current1_START  (0)
#define SOC_SMART_OFFSET_CURRENT1_offset_current1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OFFSET_VOLTAGE0_UNION
 �ṹ˵��  : OFFSET_VOLTAGE0 �Ĵ����ṹ���塣��ַƫ����:0x16B����ֵ:0x00�����:8
 �Ĵ���˵��: offset_voltage[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  offset_voltage0 : 8;  /* bit[0-7]: ��ѹУ׼ֵ[7:0]�� */
    } reg;
} SOC_SMART_OFFSET_VOLTAGE0_UNION;
#endif
#define SOC_SMART_OFFSET_VOLTAGE0_offset_voltage0_START  (0)
#define SOC_SMART_OFFSET_VOLTAGE0_offset_voltage0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OFFSET_VOLTAGE1_UNION
 �ṹ˵��  : OFFSET_VOLTAGE1 �Ĵ����ṹ���塣��ַƫ����:0x16C����ֵ:0x00�����:8
 �Ĵ���˵��: offset_voltage[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  offset_voltage1 : 8;  /* bit[0-7]: ��ѹУ׼ֵ[15:8]�� */
    } reg;
} SOC_SMART_OFFSET_VOLTAGE1_UNION;
#endif
#define SOC_SMART_OFFSET_VOLTAGE1_offset_voltage1_START  (0)
#define SOC_SMART_OFFSET_VOLTAGE1_offset_voltage1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCV_VOLTAGE0_UNION
 �ṹ˵��  : OCV_VOLTAGE0 �Ĵ����ṹ���塣��ַƫ����:0x16D����ֵ:0x00�����:8
 �Ĵ���˵��: v_ocv_data[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_ocv_data0 : 8;  /* bit[0-7]: ����ʱOCV��ѹ����ֵ[7:0]����ֵ��ԭʼֵ��δ����У׼�� */
    } reg;
} SOC_SMART_OCV_VOLTAGE0_UNION;
#endif
#define SOC_SMART_OCV_VOLTAGE0_v_ocv_data0_START  (0)
#define SOC_SMART_OCV_VOLTAGE0_v_ocv_data0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCV_VOLTAGE1_UNION
 �ṹ˵��  : OCV_VOLTAGE1 �Ĵ����ṹ���塣��ַƫ����:0x16E����ֵ:0x00�����:8
 �Ĵ���˵��: v_ocv_data[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_ocv_data1 : 8;  /* bit[0-7]: ����ʱOCV��ѹ����ֵ[15:8]����ֵ��ԭʼֵ��δ����У׼�� */
    } reg;
} SOC_SMART_OCV_VOLTAGE1_UNION;
#endif
#define SOC_SMART_OCV_VOLTAGE1_v_ocv_data1_START  (0)
#define SOC_SMART_OCV_VOLTAGE1_v_ocv_data1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCV_CURRENT0_UNION
 �ṹ˵��  : OCV_CURRENT0 �Ĵ����ṹ���塣��ַƫ����:0x16F����ֵ:0x00�����:8
 �Ĵ���˵��: i_ocv_data[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  i_ocv_data0 : 8;  /* bit[0-7]: ����ʱOCV��������ֵ[7:0]����ֵ��ԭʼֵ��δ����У׼�� */
    } reg;
} SOC_SMART_OCV_CURRENT0_UNION;
#endif
#define SOC_SMART_OCV_CURRENT0_i_ocv_data0_START  (0)
#define SOC_SMART_OCV_CURRENT0_i_ocv_data0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OCV_CURRENT1_UNION
 �ṹ˵��  : OCV_CURRENT1 �Ĵ����ṹ���塣��ַƫ����:0x170����ֵ:0x00�����:8
 �Ĵ���˵��: i_ocv_data[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  i_ocv_data1 : 8;  /* bit[0-7]: ����ʱOCV��������ֵ[15:8]����ֵ��ԭʼֵ��δ����У׼�� */
    } reg;
} SOC_SMART_OCV_CURRENT1_UNION;
#endif
#define SOC_SMART_OCV_CURRENT1_i_ocv_data1_START  (0)
#define SOC_SMART_OCV_CURRENT1_i_ocv_data1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ECO_OUT_CLIN_0_UNION
 �ṹ˵��  : ECO_OUT_CLIN_0 �Ĵ����ṹ���塣��ַƫ����:0x171����ֵ:0x00�����:8
 �Ĵ���˵��: eco_out_clin[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  eco_out_clin0 : 8;  /* bit[0-7]: �˳�ECOģʽ�������������[7:0]��ÿ���˳�ECOģʽ�Զ���¼��ǰ�������������ʱ�̱��֡� */
    } reg;
} SOC_SMART_ECO_OUT_CLIN_0_UNION;
#endif
#define SOC_SMART_ECO_OUT_CLIN_0_eco_out_clin0_START  (0)
#define SOC_SMART_ECO_OUT_CLIN_0_eco_out_clin0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ECO_OUT_CLIN_1_UNION
 �ṹ˵��  : ECO_OUT_CLIN_1 �Ĵ����ṹ���塣��ַƫ����:0x172����ֵ:0x00�����:8
 �Ĵ���˵��: eco_out_clin[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  eco_out_clin1 : 8;  /* bit[0-7]: �˳�ECOģʽ�������������[15:8]��ÿ���˳�ECOģʽ�Զ���¼��ǰ�������������ʱ�̱��֡� */
    } reg;
} SOC_SMART_ECO_OUT_CLIN_1_UNION;
#endif
#define SOC_SMART_ECO_OUT_CLIN_1_eco_out_clin1_START  (0)
#define SOC_SMART_ECO_OUT_CLIN_1_eco_out_clin1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ECO_OUT_CLIN_2_UNION
 �ṹ˵��  : ECO_OUT_CLIN_2 �Ĵ����ṹ���塣��ַƫ����:0x173����ֵ:0x00�����:8
 �Ĵ���˵��: eco_out_clin[23:16]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  eco_out_clin2 : 8;  /* bit[0-7]: �˳�ECOģʽ�������������[23:16]��ÿ���˳�ECOģʽ�Զ���¼��ǰ�������������ʱ�̱��֡� */
    } reg;
} SOC_SMART_ECO_OUT_CLIN_2_UNION;
#endif
#define SOC_SMART_ECO_OUT_CLIN_2_eco_out_clin2_START  (0)
#define SOC_SMART_ECO_OUT_CLIN_2_eco_out_clin2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ECO_OUT_CLIN_3_UNION
 �ṹ˵��  : ECO_OUT_CLIN_3 �Ĵ����ṹ���塣��ַƫ����:0x174����ֵ:0x00�����:8
 �Ĵ���˵��: eco_out_clin[31:24]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  eco_out_clin3 : 8;  /* bit[0-7]: �˳�ECOģʽ�������������[31:24]��ÿ���˳�ECOģʽ�Զ���¼��ǰ�������������ʱ�̱��֡� */
    } reg;
} SOC_SMART_ECO_OUT_CLIN_3_UNION;
#endif
#define SOC_SMART_ECO_OUT_CLIN_3_eco_out_clin3_START  (0)
#define SOC_SMART_ECO_OUT_CLIN_3_eco_out_clin3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ECO_OUT_CLOUT_0_UNION
 �ṹ˵��  : ECO_OUT_CLOUT_0 �Ĵ����ṹ���塣��ַƫ����:0x175����ֵ:0x00�����:8
 �Ĵ���˵��: eco_out_clout[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  eco_out_clout0 : 8;  /* bit[0-7]: �˳�ECOģʽ��������������[7:0]��ÿ���˳�ECOģʽ�Զ���¼��ǰ��������������ʱ�̱��֡� */
    } reg;
} SOC_SMART_ECO_OUT_CLOUT_0_UNION;
#endif
#define SOC_SMART_ECO_OUT_CLOUT_0_eco_out_clout0_START  (0)
#define SOC_SMART_ECO_OUT_CLOUT_0_eco_out_clout0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ECO_OUT_CLOUT_1_UNION
 �ṹ˵��  : ECO_OUT_CLOUT_1 �Ĵ����ṹ���塣��ַƫ����:0x176����ֵ:0x00�����:8
 �Ĵ���˵��: eco_out_clout[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  eco_out_clout1 : 8;  /* bit[0-7]: �˳�ECOģʽ��������������[15:8]��ÿ���˳�ECOģʽ�Զ���¼��ǰ��������������ʱ�̱��֡� */
    } reg;
} SOC_SMART_ECO_OUT_CLOUT_1_UNION;
#endif
#define SOC_SMART_ECO_OUT_CLOUT_1_eco_out_clout1_START  (0)
#define SOC_SMART_ECO_OUT_CLOUT_1_eco_out_clout1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ECO_OUT_CLOUT_2_UNION
 �ṹ˵��  : ECO_OUT_CLOUT_2 �Ĵ����ṹ���塣��ַƫ����:0x177����ֵ:0x00�����:8
 �Ĵ���˵��: eco_out_clout[23:16]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  eco_out_clout2 : 8;  /* bit[0-7]: �˳�ECOģʽ��������������[23:16]��ÿ���˳�ECOģʽ�Զ���¼��ǰ��������������ʱ�̱��֡� */
    } reg;
} SOC_SMART_ECO_OUT_CLOUT_2_UNION;
#endif
#define SOC_SMART_ECO_OUT_CLOUT_2_eco_out_clout2_START  (0)
#define SOC_SMART_ECO_OUT_CLOUT_2_eco_out_clout2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_ECO_OUT_CLOUT_3_UNION
 �ṹ˵��  : ECO_OUT_CLOUT_3 �Ĵ����ṹ���塣��ַƫ����:0x178����ֵ:0x00�����:8
 �Ĵ���˵��: eco_out_clout[31:24]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  eco_out_clout3 : 8;  /* bit[0-7]: �˳�ECOģʽ��������������[31:24]��ÿ���˳�ECOģʽ�Զ���¼��ǰ��������������ʱ�̱��֡� */
    } reg;
} SOC_SMART_ECO_OUT_CLOUT_3_UNION;
#endif
#define SOC_SMART_ECO_OUT_CLOUT_3_eco_out_clout3_START  (0)
#define SOC_SMART_ECO_OUT_CLOUT_3_eco_out_clout3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT0_PRE0_UNION
 �ṹ˵��  : V_OUT0_PRE0 �Ĵ����ṹ���塣��ַƫ����:0x179����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre0[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out0_pre0 : 8;  /* bit[0-7]: ��ǰ��ص�ѹָʾ[7:0]�� */
    } reg;
} SOC_SMART_V_OUT0_PRE0_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE0_v_out0_pre0_START  (0)
#define SOC_SMART_V_OUT0_PRE0_v_out0_pre0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT1_PRE0_UNION
 �ṹ˵��  : V_OUT1_PRE0 �Ĵ����ṹ���塣��ַƫ����:0x17A����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre0[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out1_pre0 : 8;  /* bit[0-7]: ��ǰ��ص�ѹָʾ[15:8]�����λ�������λ�� */
    } reg;
} SOC_SMART_V_OUT1_PRE0_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE0_v_out1_pre0_START  (0)
#define SOC_SMART_V_OUT1_PRE0_v_out1_pre0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT0_PRE1_UNION
 �ṹ˵��  : V_OUT0_PRE1 �Ĵ����ṹ���塣��ַƫ����:0x17B����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre1[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out0_pre1 : 8;  /* bit[0-7]: ��ǰ��ѹǰһ��ֵ[7:0]�� */
    } reg;
} SOC_SMART_V_OUT0_PRE1_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE1_v_out0_pre1_START  (0)
#define SOC_SMART_V_OUT0_PRE1_v_out0_pre1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT1_PRE1_UNION
 �ṹ˵��  : V_OUT1_PRE1 �Ĵ����ṹ���塣��ַƫ����:0x17C����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre1[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out1_pre1 : 8;  /* bit[0-7]: ��ǰ��ѹǰһ��ֵ[15:8]�� */
    } reg;
} SOC_SMART_V_OUT1_PRE1_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE1_v_out1_pre1_START  (0)
#define SOC_SMART_V_OUT1_PRE1_v_out1_pre1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT0_PRE2_UNION
 �ṹ˵��  : V_OUT0_PRE2 �Ĵ����ṹ���塣��ַƫ����:0x17D����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre2[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out0_pre2 : 8;  /* bit[0-7]: ��ǰ��ѹǰ����ֵ[7:0]�� */
    } reg;
} SOC_SMART_V_OUT0_PRE2_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE2_v_out0_pre2_START  (0)
#define SOC_SMART_V_OUT0_PRE2_v_out0_pre2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT1_PRE2_UNION
 �ṹ˵��  : V_OUT1_PRE2 �Ĵ����ṹ���塣��ַƫ����:0x17E����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre2[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out1_pre2 : 8;  /* bit[0-7]: ��ǰ��ѹǰ����ֵ[15:8]�� */
    } reg;
} SOC_SMART_V_OUT1_PRE2_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE2_v_out1_pre2_START  (0)
#define SOC_SMART_V_OUT1_PRE2_v_out1_pre2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT0_PRE3_UNION
 �ṹ˵��  : V_OUT0_PRE3 �Ĵ����ṹ���塣��ַƫ����:0x17F����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre3[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out0_pre3 : 8;  /* bit[0-7]: ��ǰ��ѹǰ����ֵ[7:0]�� */
    } reg;
} SOC_SMART_V_OUT0_PRE3_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE3_v_out0_pre3_START  (0)
#define SOC_SMART_V_OUT0_PRE3_v_out0_pre3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT1_PRE3_UNION
 �ṹ˵��  : V_OUT1_PRE3 �Ĵ����ṹ���塣��ַƫ����:0x180����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre3[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out1_pre3 : 8;  /* bit[0-7]: ��ǰ��ѹǰ����ֵ[15:8]�� */
    } reg;
} SOC_SMART_V_OUT1_PRE3_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE3_v_out1_pre3_START  (0)
#define SOC_SMART_V_OUT1_PRE3_v_out1_pre3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT0_PRE4_UNION
 �ṹ˵��  : V_OUT0_PRE4 �Ĵ����ṹ���塣��ַƫ����:0x181����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre4[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out0_pre4 : 8;  /* bit[0-7]: ��ǰ��ѹǰ�Ĵ�ֵ[7:0]�� */
    } reg;
} SOC_SMART_V_OUT0_PRE4_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE4_v_out0_pre4_START  (0)
#define SOC_SMART_V_OUT0_PRE4_v_out0_pre4_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT1_PRE4_UNION
 �ṹ˵��  : V_OUT1_PRE4 �Ĵ����ṹ���塣��ַƫ����:0x182����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre4[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out1_pre4 : 8;  /* bit[0-7]: ��ǰ��ѹǰ�Ĵ�ֵ[15:8]�� */
    } reg;
} SOC_SMART_V_OUT1_PRE4_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE4_v_out1_pre4_START  (0)
#define SOC_SMART_V_OUT1_PRE4_v_out1_pre4_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT0_PRE5_UNION
 �ṹ˵��  : V_OUT0_PRE5 �Ĵ����ṹ���塣��ַƫ����:0x183����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre5[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out0_pre5 : 8;  /* bit[0-7]: ��ǰ��ѹǰ���ֵ[7:0]�� */
    } reg;
} SOC_SMART_V_OUT0_PRE5_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE5_v_out0_pre5_START  (0)
#define SOC_SMART_V_OUT0_PRE5_v_out0_pre5_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT1_PRE5_UNION
 �ṹ˵��  : V_OUT1_PRE5 �Ĵ����ṹ���塣��ַƫ����:0x184����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre5[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out1_pre5 : 8;  /* bit[0-7]: ��ǰ��ѹǰ���ֵ[15:8]�� */
    } reg;
} SOC_SMART_V_OUT1_PRE5_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE5_v_out1_pre5_START  (0)
#define SOC_SMART_V_OUT1_PRE5_v_out1_pre5_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT0_PRE6_UNION
 �ṹ˵��  : V_OUT0_PRE6 �Ĵ����ṹ���塣��ַƫ����:0x185����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre6[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out0_pre6 : 8;  /* bit[0-7]: ��ǰ��ѹǰ����ֵ[7:0]�� */
    } reg;
} SOC_SMART_V_OUT0_PRE6_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE6_v_out0_pre6_START  (0)
#define SOC_SMART_V_OUT0_PRE6_v_out0_pre6_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT1_PRE6_UNION
 �ṹ˵��  : V_OUT1_PRE6 �Ĵ����ṹ���塣��ַƫ����:0x186����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre6[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out1_pre6 : 8;  /* bit[0-7]: ��ǰ��ѹǰ����ֵ[15:8]�� */
    } reg;
} SOC_SMART_V_OUT1_PRE6_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE6_v_out1_pre6_START  (0)
#define SOC_SMART_V_OUT1_PRE6_v_out1_pre6_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT0_PRE7_UNION
 �ṹ˵��  : V_OUT0_PRE7 �Ĵ����ṹ���塣��ַƫ����:0x187����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre7[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out0_pre7 : 8;  /* bit[0-7]: ��ǰ��ѹǰ�ߴ�ֵ[7:0]�� */
    } reg;
} SOC_SMART_V_OUT0_PRE7_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE7_v_out0_pre7_START  (0)
#define SOC_SMART_V_OUT0_PRE7_v_out0_pre7_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT1_PRE7_UNION
 �ṹ˵��  : V_OUT1_PRE7 �Ĵ����ṹ���塣��ַƫ����:0x188����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre7[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out1_pre7 : 8;  /* bit[0-7]: ��ǰ��ѹǰ�ߴ�ֵ[15:8]�� */
    } reg;
} SOC_SMART_V_OUT1_PRE7_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE7_v_out1_pre7_START  (0)
#define SOC_SMART_V_OUT1_PRE7_v_out1_pre7_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT0_PRE8_UNION
 �ṹ˵��  : V_OUT0_PRE8 �Ĵ����ṹ���塣��ַƫ����:0x189����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre8[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out0_pre8 : 8;  /* bit[0-7]: ��ǰ��ѹǰ�˴�ֵ[7:0]�� */
    } reg;
} SOC_SMART_V_OUT0_PRE8_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE8_v_out0_pre8_START  (0)
#define SOC_SMART_V_OUT0_PRE8_v_out0_pre8_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT1_PRE8_UNION
 �ṹ˵��  : V_OUT1_PRE8 �Ĵ����ṹ���塣��ַƫ����:0x18A����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre8[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out1_pre8 : 8;  /* bit[0-7]: ��ǰ��ѹǰ�˴�ֵ[15:8]�� */
    } reg;
} SOC_SMART_V_OUT1_PRE8_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE8_v_out1_pre8_START  (0)
#define SOC_SMART_V_OUT1_PRE8_v_out1_pre8_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT0_PRE9_UNION
 �ṹ˵��  : V_OUT0_PRE9 �Ĵ����ṹ���塣��ַƫ����:0x18B����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre9[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out0_pre9 : 8;  /* bit[0-7]: ��ǰ��ѹǰ�Ŵ�ֵ[7:0]�� */
    } reg;
} SOC_SMART_V_OUT0_PRE9_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE9_v_out0_pre9_START  (0)
#define SOC_SMART_V_OUT0_PRE9_v_out0_pre9_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_V_OUT1_PRE9_UNION
 �ṹ˵��  : V_OUT1_PRE9 �Ĵ����ṹ���塣��ַƫ����:0x18C����ֵ:0xFF�����:8
 �Ĵ���˵��: v_out_pre9[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_out1_pre9 : 8;  /* bit[0-7]: ��ǰ��ѹǰ�Ŵ�ֵ[15:8]�� */
    } reg;
} SOC_SMART_V_OUT1_PRE9_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE9_v_out1_pre9_START  (0)
#define SOC_SMART_V_OUT1_PRE9_v_out1_pre9_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT0_PRE0_UNION
 �ṹ˵��  : CURRENT0_PRE0 �Ĵ����ṹ���塣��ַƫ����:0x18D����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre0[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current0_pre0 : 8;  /* bit[0-7]: ��ǰ����ָʾ[7:0]�� */
    } reg;
} SOC_SMART_CURRENT0_PRE0_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE0_current0_pre0_START  (0)
#define SOC_SMART_CURRENT0_PRE0_current0_pre0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT1_PRE0_UNION
 �ṹ˵��  : CURRENT1_PRE0 �Ĵ����ṹ���塣��ַƫ����:0x18E����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre0[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current1_pre0 : 8;  /* bit[0-7]: ��ǰ����ָʾ[15:8]�����λ�������λ�� */
    } reg;
} SOC_SMART_CURRENT1_PRE0_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE0_current1_pre0_START  (0)
#define SOC_SMART_CURRENT1_PRE0_current1_pre0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT0_PRE1_UNION
 �ṹ˵��  : CURRENT0_PRE1 �Ĵ����ṹ���塣��ַƫ����:0x18F����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre1[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current0_pre1 : 8;  /* bit[0-7]: ��ǰ����ǰһ��ֵ[7:0]�� */
    } reg;
} SOC_SMART_CURRENT0_PRE1_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE1_current0_pre1_START  (0)
#define SOC_SMART_CURRENT0_PRE1_current0_pre1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT1_PRE1_UNION
 �ṹ˵��  : CURRENT1_PRE1 �Ĵ����ṹ���塣��ַƫ����:0x190����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre1[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current1_pre1 : 8;  /* bit[0-7]: ��ǰ����ǰһ��ֵ[15:8]�� */
    } reg;
} SOC_SMART_CURRENT1_PRE1_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE1_current1_pre1_START  (0)
#define SOC_SMART_CURRENT1_PRE1_current1_pre1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT0_PRE2_UNION
 �ṹ˵��  : CURRENT0_PRE2 �Ĵ����ṹ���塣��ַƫ����:0x191����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre2[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current0_pre2 : 8;  /* bit[0-7]: ��ǰ����ǰ����ֵ[7:0]�� */
    } reg;
} SOC_SMART_CURRENT0_PRE2_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE2_current0_pre2_START  (0)
#define SOC_SMART_CURRENT0_PRE2_current0_pre2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT1_PRE2_UNION
 �ṹ˵��  : CURRENT1_PRE2 �Ĵ����ṹ���塣��ַƫ����:0x192����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre2[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current1_pre2 : 8;  /* bit[0-7]: ��ǰ����ǰ����ֵ[15:8]�� */
    } reg;
} SOC_SMART_CURRENT1_PRE2_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE2_current1_pre2_START  (0)
#define SOC_SMART_CURRENT1_PRE2_current1_pre2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT0_PRE3_UNION
 �ṹ˵��  : CURRENT0_PRE3 �Ĵ����ṹ���塣��ַƫ����:0x193����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre3[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current0_pre3 : 8;  /* bit[0-7]: ��ǰ����ǰ����ֵ[7:0]�� */
    } reg;
} SOC_SMART_CURRENT0_PRE3_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE3_current0_pre3_START  (0)
#define SOC_SMART_CURRENT0_PRE3_current0_pre3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT1_PRE3_UNION
 �ṹ˵��  : CURRENT1_PRE3 �Ĵ����ṹ���塣��ַƫ����:0x194����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre3[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current1_pre3 : 8;  /* bit[0-7]: ��ǰ����ǰ����ֵ[15:8]�� */
    } reg;
} SOC_SMART_CURRENT1_PRE3_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE3_current1_pre3_START  (0)
#define SOC_SMART_CURRENT1_PRE3_current1_pre3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT0_PRE4_UNION
 �ṹ˵��  : CURRENT0_PRE4 �Ĵ����ṹ���塣��ַƫ����:0x195����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre4[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current0_pre4 : 8;  /* bit[0-7]: ��ǰ����ǰ�Ĵ�ֵ[7:0]�� */
    } reg;
} SOC_SMART_CURRENT0_PRE4_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE4_current0_pre4_START  (0)
#define SOC_SMART_CURRENT0_PRE4_current0_pre4_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT1_PRE4_UNION
 �ṹ˵��  : CURRENT1_PRE4 �Ĵ����ṹ���塣��ַƫ����:0x196����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre4[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current1_pre4 : 8;  /* bit[0-7]: ��ǰ����ǰ�Ĵ�ֵ[15:8]�� */
    } reg;
} SOC_SMART_CURRENT1_PRE4_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE4_current1_pre4_START  (0)
#define SOC_SMART_CURRENT1_PRE4_current1_pre4_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT0_PRE5_UNION
 �ṹ˵��  : CURRENT0_PRE5 �Ĵ����ṹ���塣��ַƫ����:0x197����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre5[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current0_pre5 : 8;  /* bit[0-7]: ��ǰ����ǰ���ֵ[7:0]�� */
    } reg;
} SOC_SMART_CURRENT0_PRE5_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE5_current0_pre5_START  (0)
#define SOC_SMART_CURRENT0_PRE5_current0_pre5_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT1_PRE5_UNION
 �ṹ˵��  : CURRENT1_PRE5 �Ĵ����ṹ���塣��ַƫ����:0x198����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre5[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current1_pre5 : 8;  /* bit[0-7]: ��ǰ����ǰ���ֵ[15:8]�� */
    } reg;
} SOC_SMART_CURRENT1_PRE5_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE5_current1_pre5_START  (0)
#define SOC_SMART_CURRENT1_PRE5_current1_pre5_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT0_PRE6_UNION
 �ṹ˵��  : CURRENT0_PRE6 �Ĵ����ṹ���塣��ַƫ����:0x199����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre6[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current0_pre6 : 8;  /* bit[0-7]: ��ǰ����ǰ����ֵ[7:0]�� */
    } reg;
} SOC_SMART_CURRENT0_PRE6_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE6_current0_pre6_START  (0)
#define SOC_SMART_CURRENT0_PRE6_current0_pre6_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT1_PRE6_UNION
 �ṹ˵��  : CURRENT1_PRE6 �Ĵ����ṹ���塣��ַƫ����:0x19A����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre6[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current1_pre6 : 8;  /* bit[0-7]: ��ǰ����ǰ����ֵ[15:8]�� */
    } reg;
} SOC_SMART_CURRENT1_PRE6_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE6_current1_pre6_START  (0)
#define SOC_SMART_CURRENT1_PRE6_current1_pre6_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT0_PRE7_UNION
 �ṹ˵��  : CURRENT0_PRE7 �Ĵ����ṹ���塣��ַƫ����:0x19B����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre7[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current0_pre7 : 8;  /* bit[0-7]: ��ǰ����ǰ�ߴ�ֵ[7:0]�� */
    } reg;
} SOC_SMART_CURRENT0_PRE7_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE7_current0_pre7_START  (0)
#define SOC_SMART_CURRENT0_PRE7_current0_pre7_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT1_PRE7_UNION
 �ṹ˵��  : CURRENT1_PRE7 �Ĵ����ṹ���塣��ַƫ����:0x19C����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre7[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current1_pre7 : 8;  /* bit[0-7]: ��ǰ����ǰ�ߴ�ֵ[15:8]�� */
    } reg;
} SOC_SMART_CURRENT1_PRE7_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE7_current1_pre7_START  (0)
#define SOC_SMART_CURRENT1_PRE7_current1_pre7_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT0_PRE8_UNION
 �ṹ˵��  : CURRENT0_PRE8 �Ĵ����ṹ���塣��ַƫ����:0x19D����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre8[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current0_pre8 : 8;  /* bit[0-7]: ��ǰ����ǰ�˴�ֵ[7:0]�� */
    } reg;
} SOC_SMART_CURRENT0_PRE8_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE8_current0_pre8_START  (0)
#define SOC_SMART_CURRENT0_PRE8_current0_pre8_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT1_PRE8_UNION
 �ṹ˵��  : CURRENT1_PRE8 �Ĵ����ṹ���塣��ַƫ����:0x19E����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre8[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current1_pre8 : 8;  /* bit[0-7]: ��ǰ����ǰ�˴�ֵ[15:8]�� */
    } reg;
} SOC_SMART_CURRENT1_PRE8_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE8_current1_pre8_START  (0)
#define SOC_SMART_CURRENT1_PRE8_current1_pre8_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT0_PRE9_UNION
 �ṹ˵��  : CURRENT0_PRE9 �Ĵ����ṹ���塣��ַƫ����:0x19F����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre9[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current0_pre9 : 8;  /* bit[0-7]: ��ǰ����ǰ�Ŵ�ֵ[7:0]�� */
    } reg;
} SOC_SMART_CURRENT0_PRE9_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE9_current0_pre9_START  (0)
#define SOC_SMART_CURRENT0_PRE9_current0_pre9_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CURRENT1_PRE9_UNION
 �ṹ˵��  : CURRENT1_PRE9 �Ĵ����ṹ���塣��ַƫ����:0x1A0����ֵ:0x00�����:8
 �Ĵ���˵��: current_pre9[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current1_pre9 : 8;  /* bit[0-7]: ��ǰ����ǰ�Ŵ�ֵ[15:8]�� */
    } reg;
} SOC_SMART_CURRENT1_PRE9_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE9_current1_pre9_START  (0)
#define SOC_SMART_CURRENT1_PRE9_current1_pre9_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OFFSET_CURRENT_MOD_0_UNION
 �ṹ˵��  : OFFSET_CURRENT_MOD_0 �Ĵ����ṹ���塣��ַƫ����:0x1A1����ֵ:0x00�����:8
 �Ĵ���˵��: ����ƫ�õ���[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  offset_current_mod_0 : 8;  /* bit[0-7]: ����ƫ�õ�����8λ�� */
    } reg;
} SOC_SMART_OFFSET_CURRENT_MOD_0_UNION;
#endif
#define SOC_SMART_OFFSET_CURRENT_MOD_0_offset_current_mod_0_START  (0)
#define SOC_SMART_OFFSET_CURRENT_MOD_0_offset_current_mod_0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OFFSET_CURRENT_MOD_1_UNION
 �ṹ˵��  : OFFSET_CURRENT_MOD_1 �Ĵ����ṹ���塣��ַƫ����:0x1A2����ֵ:0x00�����:8
 �Ĵ���˵��: ����ƫ�õ���[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  offset_current_mod_1 : 8;  /* bit[0-7]: ����ƫ�õ�����8λ�� */
    } reg;
} SOC_SMART_OFFSET_CURRENT_MOD_1_UNION;
#endif
#define SOC_SMART_OFFSET_CURRENT_MOD_1_offset_current_mod_1_START  (0)
#define SOC_SMART_OFFSET_CURRENT_MOD_1_offset_current_mod_1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OFFSET_VOLTAGE_MOD_0_UNION
 �ṹ˵��  : OFFSET_VOLTAGE_MOD_0 �Ĵ����ṹ���塣��ַƫ����:0x1A3����ֵ:0x00�����:8
 �Ĵ���˵��: ��ѹƫ�õ���[7:0]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  offset_voltage_mod_0 : 8;  /* bit[0-7]: ��ѹƫ�õ�����8λ�� */
    } reg;
} SOC_SMART_OFFSET_VOLTAGE_MOD_0_UNION;
#endif
#define SOC_SMART_OFFSET_VOLTAGE_MOD_0_offset_voltage_mod_0_START  (0)
#define SOC_SMART_OFFSET_VOLTAGE_MOD_0_offset_voltage_mod_0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_OFFSET_VOLTAGE_MOD_1_UNION
 �ṹ˵��  : OFFSET_VOLTAGE_MOD_1 �Ĵ����ṹ���塣��ַƫ����:0x1A4����ֵ:0x00�����:8
 �Ĵ���˵��: ��ѹƫ�õ���[15:8]�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  offset_voltage_mod_1 : 8;  /* bit[0-7]: ��ѹƫ�õ�����8λ�� */
    } reg;
} SOC_SMART_OFFSET_VOLTAGE_MOD_1_UNION;
#endif
#define SOC_SMART_OFFSET_VOLTAGE_MOD_1_offset_voltage_mod_1_START  (0)
#define SOC_SMART_OFFSET_VOLTAGE_MOD_1_offset_voltage_mod_1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLJ_RESERVED1_UNION
 �ṹ˵��  : CLJ_RESERVED1 �Ĵ����ṹ���塣��ַƫ����:0x1A5����ֵ:0x00�����:8
 �Ĵ���˵��: ���ؼƱ���1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  clj_rw_inf1 : 8;  /* bit[0-7]: ��Ʒ���ר�ã��Կ��ؼƿ�ά�ɲ⣬�����ڼ�¼���ݣ����Կ��ؼ�״̬�����κ����á� */
    } reg;
} SOC_SMART_CLJ_RESERVED1_UNION;
#endif
#define SOC_SMART_CLJ_RESERVED1_clj_rw_inf1_START  (0)
#define SOC_SMART_CLJ_RESERVED1_clj_rw_inf1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLJ_RESERVED2_UNION
 �ṹ˵��  : CLJ_RESERVED2 �Ĵ����ṹ���塣��ַƫ����:0x1A6����ֵ:0x00�����:8
 �Ĵ���˵��: ���ؼƱ���2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  clj_rw_inf2 : 8;  /* bit[0-7]: ��Ʒ���ר�ã��Կ��ؼƿ�ά�ɲ⣬�����ڼ�¼���ݣ����Կ��ؼ�״̬�����κ����á� */
    } reg;
} SOC_SMART_CLJ_RESERVED2_UNION;
#endif
#define SOC_SMART_CLJ_RESERVED2_clj_rw_inf2_START  (0)
#define SOC_SMART_CLJ_RESERVED2_clj_rw_inf2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLJ_RESERVED3_UNION
 �ṹ˵��  : CLJ_RESERVED3 �Ĵ����ṹ���塣��ַƫ����:0x1A7����ֵ:0x00�����:8
 �Ĵ���˵��: ���ؼƱ���3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  clj_rw_inf3 : 8;  /* bit[0-7]: ��Ʒ���ר�ã��Կ��ؼƿ�ά�ɲ⣬�����ڼ�¼���ݣ����Կ��ؼ�״̬�����κ����á� */
    } reg;
} SOC_SMART_CLJ_RESERVED3_UNION;
#endif
#define SOC_SMART_CLJ_RESERVED3_clj_rw_inf3_START  (0)
#define SOC_SMART_CLJ_RESERVED3_clj_rw_inf3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLJ_RESERVED4_UNION
 �ṹ˵��  : CLJ_RESERVED4 �Ĵ����ṹ���塣��ַƫ����:0x1A8����ֵ:0x00�����:8
 �Ĵ���˵��: ���ؼƱ���4�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  clj_rw_inf4 : 8;  /* bit[0-7]: ��Ʒ���ר�ã��Կ��ؼƿ�ά�ɲ⣬�����ڼ�¼���ݣ����Կ��ؼ�״̬�����κ����á� */
    } reg;
} SOC_SMART_CLJ_RESERVED4_UNION;
#endif
#define SOC_SMART_CLJ_RESERVED4_clj_rw_inf4_START  (0)
#define SOC_SMART_CLJ_RESERVED4_clj_rw_inf4_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLJ_RESERVED5_UNION
 �ṹ˵��  : CLJ_RESERVED5 �Ĵ����ṹ���塣��ַƫ����:0x1A9����ֵ:0x00�����:8
 �Ĵ���˵��: ���ؼƱ���5�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  i_reserve_1 : 8;  /* bit[0-7]: ���ؼ�ģ��Ĵ��������� */
    } reg;
} SOC_SMART_CLJ_RESERVED5_UNION;
#endif
#define SOC_SMART_CLJ_RESERVED5_i_reserve_1_START  (0)
#define SOC_SMART_CLJ_RESERVED5_i_reserve_1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLJ_RESERVED6_UNION
 �ṹ˵��  : CLJ_RESERVED6 �Ĵ����ṹ���塣��ַƫ����:0x1AA����ֵ:0x00�����:8
 �Ĵ���˵��: ���ؼƱ���6�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  i_reserve_2 : 8;  /* bit[0-7]: ���ؼ�ģ��Ĵ��������� */
    } reg;
} SOC_SMART_CLJ_RESERVED6_UNION;
#endif
#define SOC_SMART_CLJ_RESERVED6_i_reserve_2_START  (0)
#define SOC_SMART_CLJ_RESERVED6_i_reserve_2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLJ_RESERVED7_UNION
 �ṹ˵��  : CLJ_RESERVED7 �Ĵ����ṹ���塣��ַƫ����:0x1AB����ֵ:0x00�����:8
 �Ĵ���˵��: ���ؼƱ���7�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  v_reserve_1 : 8;  /* bit[0-7]: ���ؼ�ģ��Ĵ��������� */
    } reg;
} SOC_SMART_CLJ_RESERVED7_UNION;
#endif
#define SOC_SMART_CLJ_RESERVED7_v_reserve_1_START  (0)
#define SOC_SMART_CLJ_RESERVED7_v_reserve_1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_PMU_SOFT_RST_UNION
 �ṹ˵��  : PMU_SOFT_RST �Ĵ����ṹ���塣��ַƫ����:0x1AC����ֵ:0x00�����:8
 �Ĵ���˵��: PMU��λ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  soft_rst_n : 8;  /* bit[0-7]: ���ؼ���λ��
                                                     0x11:��λ���ؼ�ģ�飻
                                                     0x1F:������ؼ�ģ�鸴λ��
                                                     д��������Ч��
                                                     
                                                     CODECģ����λ��
                                                     0x22:��λCODECģ�飻
                                                     0x2F:���CODECģ�鸴λ��
                                                     д��������Ч��
                                                     
                                                     DCXOģʽʱ��У׼��λ��
                                                     0x33:��λDCXOģʽ��
                                                     0x3F:���DCXOģʽ��λ��
                                                     д��������Ч�� */
    } reg;
} SOC_SMART_PMU_SOFT_RST_UNION;
#endif
#define SOC_SMART_PMU_SOFT_RST_soft_rst_n_START  (0)
#define SOC_SMART_PMU_SOFT_RST_soft_rst_n_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLJ_DEBUG_UNION
 �ṹ˵��  : CLJ_DEBUG �Ĵ����ṹ���塣��ַƫ����:0x1AD����ֵ:0x00�����:8
 �Ĵ���˵��: ���ؼ�DEBUGר��1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  cic_clk_inv_i    : 1;  /* bit[0]: ���ƿ��ؼƵ����˲���·��һ��ȡ��ʱ�ӡ�
                                                         0����Ч��
                                                         1����Ч�� */
        unsigned char  cic_clk_inv_v    : 1;  /* bit[1]: ���ƿ��ؼƵ�ѹ�˲���·��һ��ȡ��ʱ�ӡ�
                                                         0����Ч��
                                                         1����Ч�� */
        unsigned char  adc_ana_v_output : 1;  /* bit[2]: ����CK32BC�ܽţ���ѹADCģ������� */
        unsigned char  adc_ana_i_output : 1;  /* bit[3]: ����CK32C�ܽţ�����ADCģ������� */
        unsigned char  cali_en_i        : 1;  /* bit[4]: ��������Ƿ�У׼ѡ��
                                                         0������������
                                                         1������ʼ�ղ����м��У׼�� */
        unsigned char  cali_en_i_force  : 1;  /* bit[5]: ����У׼ѡ��
                                                         0��������ǿ��У׼��
                                                         1������ǿ��У׼��
                                                         ���Ϲ��ܾ���clj_debug[4]=0ʱ�����á� */
        unsigned char  cali_en_v_force  : 1;  /* bit[6]: ��ѹУ׼ѡ��
                                                         0����ѹ��ǿ��У׼��
                                                         1����ѹǿ��У׼��
                                                         ���Ϲ��ܾ���clj_debug[7]=0ʱ�����á� */
        unsigned char  cali_en_v        : 1;  /* bit[7]: ��ѹ����Ƿ�У׼ѡ��
                                                         0������������
                                                         1����ѹ���ʼ�ղ�����У׼�� */
    } reg;
} SOC_SMART_CLJ_DEBUG_UNION;
#endif
#define SOC_SMART_CLJ_DEBUG_cic_clk_inv_i_START     (0)
#define SOC_SMART_CLJ_DEBUG_cic_clk_inv_i_END       (0)
#define SOC_SMART_CLJ_DEBUG_cic_clk_inv_v_START     (1)
#define SOC_SMART_CLJ_DEBUG_cic_clk_inv_v_END       (1)
#define SOC_SMART_CLJ_DEBUG_adc_ana_v_output_START  (2)
#define SOC_SMART_CLJ_DEBUG_adc_ana_v_output_END    (2)
#define SOC_SMART_CLJ_DEBUG_adc_ana_i_output_START  (3)
#define SOC_SMART_CLJ_DEBUG_adc_ana_i_output_END    (3)
#define SOC_SMART_CLJ_DEBUG_cali_en_i_START         (4)
#define SOC_SMART_CLJ_DEBUG_cali_en_i_END           (4)
#define SOC_SMART_CLJ_DEBUG_cali_en_i_force_START   (5)
#define SOC_SMART_CLJ_DEBUG_cali_en_i_force_END     (5)
#define SOC_SMART_CLJ_DEBUG_cali_en_v_force_START   (6)
#define SOC_SMART_CLJ_DEBUG_cali_en_v_force_END     (6)
#define SOC_SMART_CLJ_DEBUG_cali_en_v_START         (7)
#define SOC_SMART_CLJ_DEBUG_cali_en_v_END           (7)


/*****************************************************************************
 �ṹ��    : SOC_SMART_CLJ_DEBUG_2_UNION
 �ṹ˵��  : CLJ_DEBUG_2 �Ĵ����ṹ���塣��ַƫ����:0x1AE����ֵ:0x00�����:8
 �Ĵ���˵��: ���ؼ�DEBUGר��2�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  current_coul_always_off : 1;  /* bit[0]  : �����Ƴ��ؿ��ơ�
                                                                  0���������ܣ�
                                                                  1�������Ƴ��ء�
                                                                  Ĭ��Ϊ1'b0�� */
        unsigned char  voltage_coul_always_off : 1;  /* bit[1]  : ��ѹ�Ƴ��ؿ��ơ�
                                                                  0���������ܣ�
                                                                  1����ѹ�Ƴ��ء�
                                                                  Ĭ��Ϊ1'b0�� */
        unsigned char  coul_gate_clk_en        : 1;  /* bit[2]  : ���ؼ��ſ�ʱ��ʹ�ܡ�
                                                                  0�������ſ�ʹ�ܣ�
                                                                  1���ر��ſ�ʹ�ܡ�
                                                                  Ĭ��Ϊ1'b0�� */
        unsigned char  reg_data_clr            : 1;  /* bit[3]  : 20��Ĵ�������������ѹ�����ֵ�ָ���ʼֵ���á�
                                                                  0�����ָ���ʼֵ��
                                                                  1���ָ���ʼֵ��(д1�Զ�����) */
        unsigned char  reserved                : 4;  /* bit[4-7]: ������ */
    } reg;
} SOC_SMART_CLJ_DEBUG_2_UNION;
#endif
#define SOC_SMART_CLJ_DEBUG_2_current_coul_always_off_START  (0)
#define SOC_SMART_CLJ_DEBUG_2_current_coul_always_off_END    (0)
#define SOC_SMART_CLJ_DEBUG_2_voltage_coul_always_off_START  (1)
#define SOC_SMART_CLJ_DEBUG_2_voltage_coul_always_off_END    (1)
#define SOC_SMART_CLJ_DEBUG_2_coul_gate_clk_en_START         (2)
#define SOC_SMART_CLJ_DEBUG_2_coul_gate_clk_en_END           (2)
#define SOC_SMART_CLJ_DEBUG_2_reg_data_clr_START             (3)
#define SOC_SMART_CLJ_DEBUG_2_reg_data_clr_END               (3)


/*****************************************************************************
 �ṹ��    : SOC_SMART_STATE_TEST_UNION
 �ṹ˵��  : STATE_TEST �Ĵ����ṹ���塣��ַƫ����:0x1AF����ֵ:0x00�����:8
 �Ĵ���˵��: ���ؼ�DEBUGר��3�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  state_test : 3;  /* bit[0-2]: bit[2:0]��ʾ��ѹ������ת״̬��
                                                     000��CLJ_OFF(���ؼƹر�״̬)��
                                                     001��CLJ_ON(���ؼƿ���״̬)��
                                                     010��OCV_DETE(���ؼ�ocv��ѹ����״̬)��
                                                     011��CALIBRATION(���ؼ��Զ�У׼״̬)��
                                                     100��NORMAL_FUNC(���ؼ���������״̬)��
                                                     101��ECO_REFLASH(���ؼƽ���͹���ǰһ��״̬)��
                                                     110��ECO_POWER_OFF(���ؼƽ���͹���״̬)��
                                                     111��WAITTING(���ؼ��˳��͹��ĺ�һ��״̬)���� */
        unsigned char  reserved   : 5;  /* bit[3-7]: ���� */
    } reg;
} SOC_SMART_STATE_TEST_UNION;
#endif
#define SOC_SMART_STATE_TEST_state_test_START  (0)
#define SOC_SMART_STATE_TEST_state_test_END    (2)






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

#endif /* end of soc_smart_interface.h */
