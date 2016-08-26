

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_LCIPHER_INTERFACE_H__
#define __SOC_LCIPHER_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/1) register_define
 ****************************************************************************/
/* �Ĵ���˵����CIPHERģ����ƼĴ���
   λ����UNION�ṹ:  SOC_LCIPHER_CIPHER_CTRL_UNION */
#define SOC_LCIPHER_CIPHER_CTRL_ADDR(base)            ((base) + (0x000))

/* �Ĵ���˵����CIPHER���ȼ����ƼĴ�����
   λ����UNION�ṹ:  SOC_LCIPHER_CIPHER_PRI_UNION */
#define SOC_LCIPHER_CIPHER_PRI_ADDR(base)             ((base) + (0x004))

/* �Ĵ���˵������BD����
   λ����UNION�ṹ:  SOC_LCIPHER_TOTAL_BD_NUM_UNION */
#define SOC_LCIPHER_TOTAL_BD_NUM_ADDR(base)           ((base) + (0x008))

/* �Ĵ���˵�����Ƿ�BD����
   λ����UNION�ṹ:  SOC_LCIPHER_INVALID_BD_NUM_UNION */
#define SOC_LCIPHER_INVALID_BD_NUM_ADDR(base)         ((base) + (0x00C))

/* �Ĵ���˵����dma���üĴ���
   λ����UNION�ṹ:  SOC_LCIPHER_DMA_CFG_UNION */
#define SOC_LCIPHER_DMA_CFG_ADDR(base)                ((base) + (0x014))

/* �Ĵ���˵�������ԼĴ���
   λ����UNION�ṹ:  SOC_LCIPHER_TEST_REG0_UNION */
#define SOC_LCIPHER_TEST_REG0_ADDR(base)              ((base) + (0x020))

/* �Ĵ���˵�������ԼĴ���
   λ����UNION�ṹ:  SOC_LCIPHER_TEST_REG1_UNION */
#define SOC_LCIPHER_TEST_REG1_ADDR(base)              ((base) + (0x024))

/* �Ĵ���˵�������ԼĴ���
   λ����UNION�ṹ:  SOC_LCIPHER_TEST_REG2_UNION */
#define SOC_LCIPHER_TEST_REG2_ADDR(base)              ((base) + (0x028))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug20_UNION */
#define SOC_LCIPHER_cipher_debug20_ADDR(base)         ((base) + (0x02C))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug0_UNION */
#define SOC_LCIPHER_cipher_debug0_ADDR(base)          ((base) + (0x030))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug1_UNION */
#define SOC_LCIPHER_cipher_debug1_ADDR(base)          ((base) + (0x034))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug2_UNION */
#define SOC_LCIPHER_cipher_debug2_ADDR(base)          ((base) + (0x038))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug3_UNION */
#define SOC_LCIPHER_cipher_debug3_ADDR(base)          ((base) + (0x03C))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug4_UNION */
#define SOC_LCIPHER_cipher_debug4_ADDR(base)          ((base) + (0x040))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug5_UNION */
#define SOC_LCIPHER_cipher_debug5_ADDR(base)          ((base) + (0x044))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug6_UNION */
#define SOC_LCIPHER_cipher_debug6_ADDR(base)          ((base) + (0x048))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug7_UNION */
#define SOC_LCIPHER_cipher_debug7_ADDR(base)          ((base) + (0x04C))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug8_UNION */
#define SOC_LCIPHER_cipher_debug8_ADDR(base)          ((base) + (0x050))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug9_UNION */
#define SOC_LCIPHER_cipher_debug9_ADDR(base)          ((base) + (0x054))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug10_UNION */
#define SOC_LCIPHER_cipher_debug10_ADDR(base)         ((base) + (0x058))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug11_UNION */
#define SOC_LCIPHER_cipher_debug11_ADDR(base)         ((base) + (0x05C))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug12_UNION */
#define SOC_LCIPHER_cipher_debug12_ADDR(base)         ((base) + (0x060))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug13_UNION */
#define SOC_LCIPHER_cipher_debug13_ADDR(base)         ((base) + (0x064))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug14_UNION */
#define SOC_LCIPHER_cipher_debug14_ADDR(base)         ((base) + (0x068))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug15_UNION */
#define SOC_LCIPHER_cipher_debug15_ADDR(base)         ((base) + (0x06C))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug16_UNION */
#define SOC_LCIPHER_cipher_debug16_ADDR(base)         ((base) + (0x070))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug17_UNION */
#define SOC_LCIPHER_cipher_debug17_ADDR(base)         ((base) + (0x074))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug18_UNION */
#define SOC_LCIPHER_cipher_debug18_ADDR(base)         ((base) + (0x078))

/* �Ĵ���˵����debug�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_cipher_debug19_UNION */
#define SOC_LCIPHER_cipher_debug19_ADDR(base)         ((base) + (0x07C))

/* �Ĵ���˵����ͨ��0��λ�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH0_SOFTRESET_UNION */
#define SOC_LCIPHER_CH0_SOFTRESET_ADDR(base)          ((base) + (0x80))

/* �Ĵ���˵����ͨ��0ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH0_EN_UNION */
#define SOC_LCIPHER_CH0_EN_ADDR(base)                 ((base) + (0x84))

/* �Ĵ���˵����ͨ��0���üĴ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH0_CONFIG_UNION */
#define SOC_LCIPHER_CH0_CONFIG_ADDR(base)             ((base) + (0x88))

/* �Ĵ���˵����ͨ��0 BDQ����ַ�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH0_BDQ_BADDR_UNION */
#define SOC_LCIPHER_CH0_BDQ_BADDR_ADDR(base)          ((base) + (0x8C))

/* �Ĵ���˵����ͨ��0 BDQ��С�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH0_BDQ_SIZE_UNION */
#define SOC_LCIPHER_CH0_BDQ_SIZE_ADDR(base)           ((base) + (0x90))

/* �Ĵ���˵����ͨ��0 BDQ��дָ��Ĵ�����
   λ����UNION�ṹ:  SOC_LCIPHER_CH0_BDQ_PTR_UNION */
#define SOC_LCIPHER_CH0_BDQ_PTR_ADDR(base)            ((base) + (0x94))

/* �Ĵ���˵����ͨ��0 BDQ����ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_LCIPHER_CH0_BDQ_RADDR_UNION */
#define SOC_LCIPHER_CH0_BDQ_RADDR_ADDR(base)          ((base) + (0x98))

/* �Ĵ���˵����ͨ��0 BDQд��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_LCIPHER_CH0_BDQ_WADDR_UNION */
#define SOC_LCIPHER_CH0_BDQ_WADDR_ADDR(base)          ((base) + (0x9C))

/* �Ĵ���˵������ʾͨ��0�����BD����
   λ����UNION�ṹ:  SOC_LCIPHER_CH0_BD_NUM_UNION */
#define SOC_LCIPHER_CH0_BD_NUM_ADDR(base)             ((base) + (0xA0))

/* �Ĵ���˵������ʾͨ��0�������ЧBD��
   λ����UNION�ṹ:  SOC_LCIPHER_CH0_INVALID_BD_NUM_UNION */
#define SOC_LCIPHER_CH0_INVALID_BD_NUM_ADDR(base)     ((base) + (0xA4))

/* �Ĵ���˵����ͨ��1��λ�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH1_SOFTRESET_UNION */
#define SOC_LCIPHER_CH1_SOFTRESET_ADDR(base)          ((base) + (0x100))

/* �Ĵ���˵����ͨ��1ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH1_EN_UNION */
#define SOC_LCIPHER_CH1_EN_ADDR(base)                 ((base) + (0x104))

/* �Ĵ���˵����ͨ��1���üĴ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH1_CONFIG_UNION */
#define SOC_LCIPHER_CH1_CONFIG_ADDR(base)             ((base) + (0x108))

/* �Ĵ���˵����ͨ��1 BDQ����ַ�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH1_BDQ_BADDR_UNION */
#define SOC_LCIPHER_CH1_BDQ_BADDR_ADDR(base)          ((base) + (0x10C))

/* �Ĵ���˵����ͨ��1 BDQ��С�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH1_BDQ_SIZE_UNION */
#define SOC_LCIPHER_CH1_BDQ_SIZE_ADDR(base)           ((base) + (0x110))

/* �Ĵ���˵����ͨ��1 BDQ��дָ��Ĵ�����
   λ����UNION�ṹ:  SOC_LCIPHER_CH1_BDQ_PTR_UNION */
#define SOC_LCIPHER_CH1_BDQ_PTR_ADDR(base)            ((base) + (0x114))

/* �Ĵ���˵����ͨ��1 BDQ����ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_LCIPHER_CH1_BDQ_RADDR_UNION */
#define SOC_LCIPHER_CH1_BDQ_RADDR_ADDR(base)          ((base) + (0x118))

/* �Ĵ���˵����ͨ��1 BDQд��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_LCIPHER_CH1_BDQ_WADDR_UNION */
#define SOC_LCIPHER_CH1_BDQ_WADDR_ADDR(base)          ((base) + (0x11C))

/* �Ĵ���˵������ʾͨ��1�����BD����
   λ����UNION�ṹ:  SOC_LCIPHER_CH1_BD_NUM_UNION */
#define SOC_LCIPHER_CH1_BD_NUM_ADDR(base)             ((base) + (0x120))

/* �Ĵ���˵������ʾͨ��1�������ЧBD��
   λ����UNION�ṹ:  SOC_LCIPHER_CH1_INVALID_BD_NUM_UNION */
#define SOC_LCIPHER_CH1_INVALID_BD_NUM_ADDR(base)     ((base) + (0x124))

/* �Ĵ���˵����ͨ��2��λ�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH2_SOFTRESET_UNION */
#define SOC_LCIPHER_CH2_SOFTRESET_ADDR(base)          ((base) + (0x180))

/* �Ĵ���˵����ͨ��2ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH2_EN_UNION */
#define SOC_LCIPHER_CH2_EN_ADDR(base)                 ((base) + (0x184))

/* �Ĵ���˵����ͨ��2���üĴ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH2_CONFIG_UNION */
#define SOC_LCIPHER_CH2_CONFIG_ADDR(base)             ((base) + (0x188))

/* �Ĵ���˵����ͨ��2 BDQ����ַ�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH2_BDQ_BADDR_UNION */
#define SOC_LCIPHER_CH2_BDQ_BADDR_ADDR(base)          ((base) + (0x18C))

/* �Ĵ���˵����ͨ��2 BDQ��С�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH2_BDQ_SIZE_UNION */
#define SOC_LCIPHER_CH2_BDQ_SIZE_ADDR(base)           ((base) + (0x190))

/* �Ĵ���˵����ͨ��2 BDQ��дָ��Ĵ�����
   λ����UNION�ṹ:  SOC_LCIPHER_CH2_BDQ_PTR_UNION */
#define SOC_LCIPHER_CH2_BDQ_PTR_ADDR(base)            ((base) + (0x194))

/* �Ĵ���˵����ͨ��2 BDQ����ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_LCIPHER_CH2_BDQ_RADDR_UNION */
#define SOC_LCIPHER_CH2_BDQ_RADDR_ADDR(base)          ((base) + (0x198))

/* �Ĵ���˵����ͨ��2 BDQд��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_LCIPHER_CH2_BDQ_WADDR_UNION */
#define SOC_LCIPHER_CH2_BDQ_WADDR_ADDR(base)          ((base) + (0x19C))

/* �Ĵ���˵������ʾͨ��1�����BD����
   λ����UNION�ṹ:  SOC_LCIPHER_CH2_BD_NUM_UNION */
#define SOC_LCIPHER_CH2_BD_NUM_ADDR(base)             ((base) + (0x1A0))

/* �Ĵ���˵������ʾͨ��1�������ЧBD��
   λ����UNION�ṹ:  SOC_LCIPHER_CH2_INVALID_BD_NUM_UNION */
#define SOC_LCIPHER_CH2_INVALID_BD_NUM_ADDR(base)     ((base) + (0x1A4))

/* �Ĵ���˵����ͨ��3��λ�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH3_SOFTRESET_UNION */
#define SOC_LCIPHER_CH3_SOFTRESET_ADDR(base)          ((base) + (0x200))

/* �Ĵ���˵����ͨ��3ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH3_EN_UNION */
#define SOC_LCIPHER_CH3_EN_ADDR(base)                 ((base) + (0x204))

/* �Ĵ���˵����ͨ��3���üĴ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH3_CONFIG_UNION */
#define SOC_LCIPHER_CH3_CONFIG_ADDR(base)             ((base) + (0x208))

/* �Ĵ���˵����ͨ��3 BDQ����ַ�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH3_BDQ_BADDR_UNION */
#define SOC_LCIPHER_CH3_BDQ_BADDR_ADDR(base)          ((base) + (0x20C))

/* �Ĵ���˵����ͨ��3 BDQ��С�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH3_BDQ_SIZE_UNION */
#define SOC_LCIPHER_CH3_BDQ_SIZE_ADDR(base)           ((base) + (0x210))

/* �Ĵ���˵����ͨ��3 BDQ��дָ��Ĵ�����
   λ����UNION�ṹ:  SOC_LCIPHER_CH3_BDQ_PTR_UNION */
#define SOC_LCIPHER_CH3_BDQ_PTR_ADDR(base)            ((base) + (0x214))

/* �Ĵ���˵����ͨ��3 BDQ����ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_LCIPHER_CH3_BDQ_RADDR_UNION */
#define SOC_LCIPHER_CH3_BDQ_RADDR_ADDR(base)          ((base) + (0x218))

/* �Ĵ���˵����ͨ��3 BDQд��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_LCIPHER_CH3_BDQ_WADDR_UNION */
#define SOC_LCIPHER_CH3_BDQ_WADDR_ADDR(base)          ((base) + (0x21C))

/* �Ĵ���˵������ʾͨ��3�����BD����
   λ����UNION�ṹ:  SOC_LCIPHER_CH3_BD_NUM_UNION */
#define SOC_LCIPHER_CH3_BD_NUM_ADDR(base)             ((base) + (0x220))

/* �Ĵ���˵������ʾͨ��3�������ЧBD��
   λ����UNION�ṹ:  SOC_LCIPHER_CH3_INVALID_BD_NUM_UNION */
#define SOC_LCIPHER_CH3_INVALID_BD_NUM_ADDR(base)     ((base) + (0x224))

/* �Ĵ���˵����ͨ��4��λ�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH4_SOFTRESET_UNION */
#define SOC_LCIPHER_CH4_SOFTRESET_ADDR(base)          ((base) + (0x280))

/* �Ĵ���˵����ͨ��4ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH4_EN_UNION */
#define SOC_LCIPHER_CH4_EN_ADDR(base)                 ((base) + (0x284))

/* �Ĵ���˵����ͨ��4���üĴ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH4_CONFIG_UNION */
#define SOC_LCIPHER_CH4_CONFIG_ADDR(base)             ((base) + (0x288))

/* �Ĵ���˵����ͨ��4 BDQ����ַ�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH4_BDQ_BADDR_UNION */
#define SOC_LCIPHER_CH4_BDQ_BADDR_ADDR(base)          ((base) + (0x28C))

/* �Ĵ���˵����ͨ��4 BDQ��С�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH4_BDQ_SIZE_UNION */
#define SOC_LCIPHER_CH4_BDQ_SIZE_ADDR(base)           ((base) + (0x290))

/* �Ĵ���˵����ͨ��4 BDQ��дָ��Ĵ�����
   λ����UNION�ṹ:  SOC_LCIPHER_CH4_BDQ_PTR_UNION */
#define SOC_LCIPHER_CH4_BDQ_PTR_ADDR(base)            ((base) + (0x294))

/* �Ĵ���˵����ͨ��4 BDQ����ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_LCIPHER_CH4_BDQ_RADDR_UNION */
#define SOC_LCIPHER_CH4_BDQ_RADDR_ADDR(base)          ((base) + (0x298))

/* �Ĵ���˵����ͨ��4 BDQд��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_LCIPHER_CH4_BDQ_WADDR_UNION */
#define SOC_LCIPHER_CH4_BDQ_WADDR_ADDR(base)          ((base) + (0x29C))

/* �Ĵ���˵������ʾͨ��4�����BD����
   λ����UNION�ṹ:  SOC_LCIPHER_CH4_BD_NUM_UNION */
#define SOC_LCIPHER_CH4_BD_NUM_ADDR(base)             ((base) + (0x2A0))

/* �Ĵ���˵������ʾͨ��4�������ЧBD��
   λ����UNION�ṹ:  SOC_LCIPHER_CH4_INVALID_BD_NUM_UNION */
#define SOC_LCIPHER_CH4_INVALID_BD_NUM_ADDR(base)     ((base) + (0x2A4))

/* �Ĵ���˵�����жϰ�����Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_CH_INT_PKT_INTERVAL_UNION */
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ADDR(base)    ((base) + (0x400))

/* �Ĵ���˵����cipher�ж�״̬�Ĵ���
   λ����UNION�ṹ:  SOC_LCIPHER_CIPHER_INT_STATUS_UNION */
#define SOC_LCIPHER_CIPHER_INT_STATUS_ADDR(base)      ((base) + (0x404))

/* �Ĵ���˵����cipher�жϼĴ���0
   λ����UNION�ṹ:  SOC_LCIPHER_CIPHER_INT0_STATUS_UNION */
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ADDR(base)     ((base) + (0x408))

/* �Ĵ���˵����cipher�ж����μĴ���0
   λ����UNION�ṹ:  SOC_LCIPHER_CIPHER_INT0_MASK_UNION */
#define SOC_LCIPHER_CIPHER_INT0_MASK_ADDR(base)       ((base) + (0x40C))

/* �Ĵ���˵����cipher��������֮����ж�״̬�Ĵ���0
   λ����UNION�ṹ:  SOC_LCIPHER_CIPHER_INT0_MSTATUS_UNION */
#define SOC_LCIPHER_CIPHER_INT0_MSTATUS_ADDR(base)    ((base) + (0x410))

/* �Ĵ���˵����cipher�жϼĴ���1
   λ����UNION�ṹ:  SOC_LCIPHER_CIPHER_INT1_STATUS_UNION */
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ADDR(base)     ((base) + (0x414))

/* �Ĵ���˵����cipher�ж����μĴ���1
   λ����UNION�ṹ:  SOC_LCIPHER_CIPHER_INT1_MASK_UNION */
#define SOC_LCIPHER_CIPHER_INT1_MASK_ADDR(base)       ((base) + (0x418))

/* �Ĵ���˵����cipher��������֮����ж�״̬�Ĵ���1
   λ����UNION�ṹ:  SOC_LCIPHER_CIPHER_INT1_MSTATUS_UNION */
#define SOC_LCIPHER_CIPHER_INT1_MSTATUS_ADDR(base)    ((base) + (0x41C))

/* �Ĵ���˵����cipher�жϼĴ���2
   λ����UNION�ṹ:  SOC_LCIPHER_CIPHER_INT2_STATUS_UNION */
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ADDR(base)     ((base) + (0x420))

/* �Ĵ���˵����cipher�ж����μĴ���2
   λ����UNION�ṹ:  SOC_LCIPHER_CIPHER_INT2_MASK_UNION */
#define SOC_LCIPHER_CIPHER_INT2_MASK_ADDR(base)       ((base) + (0x424))

/* �Ĵ���˵����cipher��������֮����ж�״̬�Ĵ���2
   λ����UNION�ṹ:  SOC_LCIPHER_CIPHER_INT2_MSTATUS_UNION */
#define SOC_LCIPHER_CIPHER_INT2_MSTATUS_ADDR(base)    ((base) + (0x428))

/* �Ĵ���˵����ͨ��0 RD���л���ַ
   λ����UNION�ṹ:  SOC_LCIPHER_CH0_RDQ_BADDR_UNION */
#define SOC_LCIPHER_CH0_RDQ_BADDR_ADDR(base)          ((base) + (0x480))

/* �Ĵ���˵����ͨ��0 RD���д�С
   λ����UNION�ṹ:  SOC_LCIPHER_CH0_RDQ_SIZE_UNION */
#define SOC_LCIPHER_CH0_RDQ_SIZE_ADDR(base)           ((base) + (0x484))

/* �Ĵ���˵����ͨ��0 RD���еĶ�дָ��
   λ����UNION�ṹ:  SOC_LCIPHER_CH0_RDQ_PTR_UNION */
#define SOC_LCIPHER_CH0_RDQ_PTR_ADDR(base)            ((base) + (0x488))

/* �Ĵ���˵����ͨ��0 RD���еĶ���ַ
   λ����UNION�ṹ:  SOC_LCIPHER_CH0_RDQ_RADDR_UNION */
#define SOC_LCIPHER_CH0_RDQ_RADDR_ADDR(base)          ((base) + (0x48C))

/* �Ĵ���˵����ͨ��0 RD���е�д��ַ
   λ����UNION�ṹ:  SOC_LCIPHER_CH0_RDQ_WADDR_UNION */
#define SOC_LCIPHER_CH0_RDQ_WADDR_ADDR(base)          ((base) + (0x490))

/* �Ĵ���˵����ͨ��1 RD���л���ַ
   λ����UNION�ṹ:  SOC_LCIPHER_CH1_RDQ_BADDR_UNION */
#define SOC_LCIPHER_CH1_RDQ_BADDR_ADDR(base)          ((base) + (0x500))

/* �Ĵ���˵����ͨ��1 RD���д�С
   λ����UNION�ṹ:  SOC_LCIPHER_CH1_RDQ_SIZE_UNION */
#define SOC_LCIPHER_CH1_RDQ_SIZE_ADDR(base)           ((base) + (0x504))

/* �Ĵ���˵����ͨ��1 RD���еĶ�дָ��
   λ����UNION�ṹ:  SOC_LCIPHER_CH1_RDQ_PTR_UNION */
#define SOC_LCIPHER_CH1_RDQ_PTR_ADDR(base)            ((base) + (0x508))

/* �Ĵ���˵����ͨ��1 RD���еĶ���ַ
   λ����UNION�ṹ:  SOC_LCIPHER_CH1_RDQ_RADDR_UNION */
#define SOC_LCIPHER_CH1_RDQ_RADDR_ADDR(base)          ((base) + (0x50C))

/* �Ĵ���˵����ͨ��1 RD���е�д��ַ
   λ����UNION�ṹ:  SOC_LCIPHER_CH1_RDQ_WADDR_UNION */
#define SOC_LCIPHER_CH1_RDQ_WADDR_ADDR(base)          ((base) + (0x510))

/* �Ĵ���˵����ͨ��2 RD���л���ַ
   λ����UNION�ṹ:  SOC_LCIPHER_CH2_RDQ_BADDR_UNION */
#define SOC_LCIPHER_CH2_RDQ_BADDR_ADDR(base)          ((base) + (0x580))

/* �Ĵ���˵����ͨ��2 RD���д�С
   λ����UNION�ṹ:  SOC_LCIPHER_CH2_RDQ_SIZE_UNION */
#define SOC_LCIPHER_CH2_RDQ_SIZE_ADDR(base)           ((base) + (0x584))

/* �Ĵ���˵����ͨ��2 RD���еĶ�дָ��
   λ����UNION�ṹ:  SOC_LCIPHER_CH2_RDQ_PTR_UNION */
#define SOC_LCIPHER_CH2_RDQ_PTR_ADDR(base)            ((base) + (0x588))

/* �Ĵ���˵����ͨ��2 RD���еĶ���ַ
   λ����UNION�ṹ:  SOC_LCIPHER_CH2_RDQ_RADDR_UNION */
#define SOC_LCIPHER_CH2_RDQ_RADDR_ADDR(base)          ((base) + (0x58C))

/* �Ĵ���˵����ͨ��2 RD���е�д��ַ
   λ����UNION�ṹ:  SOC_LCIPHER_CH2_RDQ_WADDR_UNION */
#define SOC_LCIPHER_CH2_RDQ_WADDR_ADDR(base)          ((base) + (0x590))

/* �Ĵ���˵����ͨ��3 RD���л���ַ
   λ����UNION�ṹ:  SOC_LCIPHER_CH3_RDQ_BADDR_UNION */
#define SOC_LCIPHER_CH3_RDQ_BADDR_ADDR(base)          ((base) + (0x600))

/* �Ĵ���˵����ͨ��3 RD���д�С
   λ����UNION�ṹ:  SOC_LCIPHER_CH3_RDQ_SIZE_UNION */
#define SOC_LCIPHER_CH3_RDQ_SIZE_ADDR(base)           ((base) + (0x604))

/* �Ĵ���˵����ͨ��3 RD���еĶ�дָ��
   λ����UNION�ṹ:  SOC_LCIPHER_CH3_RDQ_PTR_UNION */
#define SOC_LCIPHER_CH3_RDQ_PTR_ADDR(base)            ((base) + (0x608))

/* �Ĵ���˵����ͨ��3 RD���еĶ���ַ
   λ����UNION�ṹ:  SOC_LCIPHER_CH3_RDQ_RADDR_UNION */
#define SOC_LCIPHER_CH3_RDQ_RADDR_ADDR(base)          ((base) + (0x60C))

/* �Ĵ���˵����ͨ��3 RD���е�д��ַ
   λ����UNION�ṹ:  SOC_LCIPHER_CH3_RDQ_WADDR_UNION */
#define SOC_LCIPHER_CH3_RDQ_WADDR_ADDR(base)          ((base) + (0x610))

/* �Ĵ���˵����ͨ��4 RD���л���ַ
   λ����UNION�ṹ:  SOC_LCIPHER_CH4_RDQ_BADDR_UNION */
#define SOC_LCIPHER_CH4_RDQ_BADDR_ADDR(base)          ((base) + (0x680))

/* �Ĵ���˵����ͨ��4 RD���д�С
   λ����UNION�ṹ:  SOC_LCIPHER_CH4_RDQ_SIZE_UNION */
#define SOC_LCIPHER_CH4_RDQ_SIZE_ADDR(base)           ((base) + (0x684))

/* �Ĵ���˵����ͨ��4 RD���еĶ�дָ��
   λ����UNION�ṹ:  SOC_LCIPHER_CH4_RDQ_PTR_UNION */
#define SOC_LCIPHER_CH4_RDQ_PTR_ADDR(base)            ((base) + (0x688))

/* �Ĵ���˵����ͨ��4 RD���еĶ���ַ
   λ����UNION�ṹ:  SOC_LCIPHER_CH4_RDQ_RADDR_UNION */
#define SOC_LCIPHER_CH4_RDQ_RADDR_ADDR(base)          ((base) + (0x68C))

/* �Ĵ���˵����ͨ��4 RD���е�д��ַ
   λ����UNION�ṹ:  SOC_LCIPHER_CH4_RDQ_WADDR_UNION */
#define SOC_LCIPHER_CH4_RDQ_WADDR_ADDR(base)          ((base) + (0x690))





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
                     (1/1) register_define
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CIPHER_CTRL_UNION
 �ṹ˵��  : CIPHER_CTRL �Ĵ����ṹ���塣��ַƫ����:0x000����ֵ:0x0�����:32
 �Ĵ���˵��: CIPHERģ����ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cipher_srst  : 1;  /* bit[0]   : cipherģ�鸴λ��
                                                       д1��λcipherģ�飬����ʱcipherռ�����ߣ���������ִ�и�λ��ֱ��cipher�ͷ������Ժ�ſ�ʼ��λ����λ�����˼Ĵ����Զ���0�� */
        unsigned int  cipher_cg_en : 1;  /* bit[1]   : cipher�Զ�ʱ���ſ�ʹ�� */
        unsigned int  reserved     : 29; /* bit[2-30]: ������ */
        unsigned int  cipher_busy  : 1;  /* bit[31]  : cipherģ��æ��־��
                                                       ��5������ͨ�����κ�һ�����ƼĴ�����æ��־Ϊ1�������־��Ϊ1�� */
    } reg;
} SOC_LCIPHER_CIPHER_CTRL_UNION;
#endif
#define SOC_LCIPHER_CIPHER_CTRL_cipher_srst_START   (0)
#define SOC_LCIPHER_CIPHER_CTRL_cipher_srst_END     (0)
#define SOC_LCIPHER_CIPHER_CTRL_cipher_cg_en_START  (1)
#define SOC_LCIPHER_CIPHER_CTRL_cipher_cg_en_END    (1)
#define SOC_LCIPHER_CIPHER_CTRL_cipher_busy_START   (31)
#define SOC_LCIPHER_CIPHER_CTRL_cipher_busy_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CIPHER_PRI_UNION
 �ṹ˵��  : CIPHER_PRI �Ĵ����ṹ���塣��ַƫ����:0x004����ֵ:0x0�����:32
 �Ĵ���˵��: CIPHER���ȼ����ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  idata_threshold : 28; /* bit[0-27] : ͨ������������ֵ����λ���ֽڣ������������������ݡ�
                                                           ������������ȼ�ͨ�����������󣬵�ǰͨ����������������ʼ�����������������������ֵ�������������ǰͨ����ͣ�����ȼ���Ϊ��ͣ�����ͨ����ʼ������ͨ��2��ͨ��3֧�������������ƹ��ܡ� */
        unsigned int  ch_pri          : 1;  /* bit[28]   : ͨ��0��ͨ��1���ȼ���
                                                           0��ͨ��0Ϊ������ȼ���
                                                           1��ͨ��1Ϊ������ȼ���
                                                           ͨ��2��ͨ��3�����ȼ����ǵ���ͨ��0��ͨ��1���Ҹ����������ƼĴ�����ִ�С� */
        unsigned int  reserved        : 3;  /* bit[29-31]:  */
    } reg;
} SOC_LCIPHER_CIPHER_PRI_UNION;
#endif
#define SOC_LCIPHER_CIPHER_PRI_idata_threshold_START  (0)
#define SOC_LCIPHER_CIPHER_PRI_idata_threshold_END    (27)
#define SOC_LCIPHER_CIPHER_PRI_ch_pri_START           (28)
#define SOC_LCIPHER_CIPHER_PRI_ch_pri_END             (28)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_TOTAL_BD_NUM_UNION
 �ṹ˵��  : TOTAL_BD_NUM �Ĵ����ṹ���塣��ַƫ����:0x008����ֵ:0x0�����:32
 �Ĵ���˵��: ��BD����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  total_bd_num : 32; /* bit[0-31]: ��ʾcipher�Ѿ������BD������5��ͨ�����ܺͣ�
                                                       ֻ����
                                                       ��д��0 */
    } reg;
} SOC_LCIPHER_TOTAL_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_TOTAL_BD_NUM_total_bd_num_START  (0)
#define SOC_LCIPHER_TOTAL_BD_NUM_total_bd_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_INVALID_BD_NUM_UNION
 �ṹ˵��  : INVALID_BD_NUM �Ĵ����ṹ���塣��ַƫ����:0x00C����ֵ:0x0�����:32
 �Ĵ���˵��: �Ƿ�BD����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  invalid_bd_num : 32; /* bit[0-31]: ��ʾcipher�յ�����ЧBD������5��ͨ�����ܺͣ�
                                                         ֻ����
                                                         ��д��0 */
    } reg;
} SOC_LCIPHER_INVALID_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_INVALID_BD_NUM_invalid_bd_num_START  (0)
#define SOC_LCIPHER_INVALID_BD_NUM_invalid_bd_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_DMA_CFG_UNION
 �ṹ˵��  : DMA_CFG �Ĵ����ṹ���塣��ַƫ����:0x014����ֵ:0x2713469A�����:32
 �Ĵ���˵��: dma���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rd_id    : 3;  /* bit[0-2]  : RD��дͨ����ID */
        unsigned int  obuf_id  : 3;  /* bit[3-5]  : OBUFдͨ����ID */
        unsigned int  ocd_id   : 3;  /* bit[6-8]  : OCD��ͨ����ID */
        unsigned int  icd_id   : 3;  /* bit[9-11] : ICD��ͨ����ID */
        unsigned int  ibuf_id  : 3;  /* bit[12-14]: IBUF��ͨ����ID */
        unsigned int  reserved_0: 1;  /* bit[15]   : ���� */
        unsigned int  rd_pri   : 3;  /* bit[16-18]: RD��дͨ�������ȼ� */
        unsigned int  obuf_pri : 3;  /* bit[19-21]: OBUFдͨ�������ȼ� */
        unsigned int  ocd_pri  : 3;  /* bit[22-24]: OCD��ͨ�������ȼ� */
        unsigned int  icd_pri  : 3;  /* bit[25-27]: ICD��ͨ�������ȼ� */
        unsigned int  ibuf_pri : 3;  /* bit[28-30]: IBUF��ͨ�������ȼ� */
        unsigned int  reserved_1: 1;  /* bit[31]   : ���� */
    } reg;
} SOC_LCIPHER_DMA_CFG_UNION;
#endif
#define SOC_LCIPHER_DMA_CFG_rd_id_START     (0)
#define SOC_LCIPHER_DMA_CFG_rd_id_END       (2)
#define SOC_LCIPHER_DMA_CFG_obuf_id_START   (3)
#define SOC_LCIPHER_DMA_CFG_obuf_id_END     (5)
#define SOC_LCIPHER_DMA_CFG_ocd_id_START    (6)
#define SOC_LCIPHER_DMA_CFG_ocd_id_END      (8)
#define SOC_LCIPHER_DMA_CFG_icd_id_START    (9)
#define SOC_LCIPHER_DMA_CFG_icd_id_END      (11)
#define SOC_LCIPHER_DMA_CFG_ibuf_id_START   (12)
#define SOC_LCIPHER_DMA_CFG_ibuf_id_END     (14)
#define SOC_LCIPHER_DMA_CFG_rd_pri_START    (16)
#define SOC_LCIPHER_DMA_CFG_rd_pri_END      (18)
#define SOC_LCIPHER_DMA_CFG_obuf_pri_START  (19)
#define SOC_LCIPHER_DMA_CFG_obuf_pri_END    (21)
#define SOC_LCIPHER_DMA_CFG_ocd_pri_START   (22)
#define SOC_LCIPHER_DMA_CFG_ocd_pri_END     (24)
#define SOC_LCIPHER_DMA_CFG_icd_pri_START   (25)
#define SOC_LCIPHER_DMA_CFG_icd_pri_END     (27)
#define SOC_LCIPHER_DMA_CFG_ibuf_pri_START  (28)
#define SOC_LCIPHER_DMA_CFG_ibuf_pri_END    (30)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_TEST_REG0_UNION
 �ṹ˵��  : TEST_REG0 �Ĵ����ṹ���塣��ַƫ����:0x020����ֵ:0x0C9B0C9B�����:32
 �Ĵ���˵��: ���ԼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  spram_mem_ctrl  : 16; /* bit[0-15] : cipher�ڲ�spram�Ŀ����ź� */
        unsigned int  atpram_mem_ctrl : 16; /* bit[16-31]: cipher�ڲ�atpram�Ŀ����ź�  */
    } reg;
} SOC_LCIPHER_TEST_REG0_UNION;
#endif
#define SOC_LCIPHER_TEST_REG0_spram_mem_ctrl_START   (0)
#define SOC_LCIPHER_TEST_REG0_spram_mem_ctrl_END     (15)
#define SOC_LCIPHER_TEST_REG0_atpram_mem_ctrl_START  (16)
#define SOC_LCIPHER_TEST_REG0_atpram_mem_ctrl_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_TEST_REG1_UNION
 �ṹ˵��  : TEST_REG1 �Ĵ����ṹ���塣��ַƫ����:0x024����ֵ:0x4FE�����:32
 �Ĵ���˵��: ���ԼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  aes_key_cov     : 1;  /* bit[0]    : aes����ʱ���Ƿ���Ҫ�ߵ�key������
                                                           1����ʾ��Ҫ�ߵ�����
                                                           0����ʾ����Ҫ�ߵ����� */
        unsigned int  snow3g_key_cov  : 1;  /* bit[1]    : snow3g����ʱ���Ƿ���Ҫ�ߵ�key������
                                                           1����ʾ��Ҫ�ߵ�����
                                                           0����ʾ����Ҫ�ߵ����� */
        unsigned int  cipher_dma_ctrl : 6;  /* bit[2-7]  : ����dma�Ŀ����źţ�
                                                           [5:4]����ʾGMд�����outstanding���
                                                           [3:2]����ʾGM�������outstanding���
                                                           [1]�� 1��ʾ��outstandingʹ�ܣ�0��ʾ��outstanding��ʹ�� ��
                                                           [0]�� 1��ʾдoutstandingʹ�ܣ�0��ʾдoutstanding��ʹ�ܡ� */
        unsigned int  zuc_key_cov     : 1;  /* bit[8]    : zuc����ʱ���Ƿ���Ҫ�ߵ�key������
                                                           1����ʾ��Ҫ�ߵ�����
                                                           0����ʾ����Ҫ�ߵ����� */
        unsigned int  aes_iv_cov      : 1;  /* bit[9]    : aes����ʱ���Ƿ���Ҫ�ߵ�iv������
                                                           1����ʾ��Ҫ�ߵ�����
                                                           0����ʾ����Ҫ�ߵ����� */
        unsigned int  snow3g_iv_cov   : 1;  /* bit[10]   : snow3g����ʱ���Ƿ���Ҫ�ߵ�iv������
                                                           1����ʾ��Ҫ�ߵ�����
                                                           0����ʾ����Ҫ�ߵ����� */
        unsigned int  zuc_iv_cov      : 1;  /* bit[11]   : zuc����ʱ���Ƿ���Ҫ�ߵ�iv������
                                                           1����ʾ��Ҫ�ߵ�����
                                                           0����ʾ����Ҫ�ߵ����� */
        unsigned int  reserved        : 20; /* bit[12-31]: ���� */
    } reg;
} SOC_LCIPHER_TEST_REG1_UNION;
#endif
#define SOC_LCIPHER_TEST_REG1_aes_key_cov_START      (0)
#define SOC_LCIPHER_TEST_REG1_aes_key_cov_END        (0)
#define SOC_LCIPHER_TEST_REG1_snow3g_key_cov_START   (1)
#define SOC_LCIPHER_TEST_REG1_snow3g_key_cov_END     (1)
#define SOC_LCIPHER_TEST_REG1_cipher_dma_ctrl_START  (2)
#define SOC_LCIPHER_TEST_REG1_cipher_dma_ctrl_END    (7)
#define SOC_LCIPHER_TEST_REG1_zuc_key_cov_START      (8)
#define SOC_LCIPHER_TEST_REG1_zuc_key_cov_END        (8)
#define SOC_LCIPHER_TEST_REG1_aes_iv_cov_START       (9)
#define SOC_LCIPHER_TEST_REG1_aes_iv_cov_END         (9)
#define SOC_LCIPHER_TEST_REG1_snow3g_iv_cov_START    (10)
#define SOC_LCIPHER_TEST_REG1_snow3g_iv_cov_END      (10)
#define SOC_LCIPHER_TEST_REG1_zuc_iv_cov_START       (11)
#define SOC_LCIPHER_TEST_REG1_zuc_iv_cov_END         (11)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_TEST_REG2_UNION
 �ṹ˵��  : TEST_REG2 �Ĵ����ṹ���塣��ַƫ����:0x028����ֵ:0x0�����:32
 �Ĵ���˵��: ���ԼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���ԼĴ����� */
    } reg;
} SOC_LCIPHER_TEST_REG2_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug20_UNION
 �ṹ˵��  : cipher_debug20 �Ĵ����ṹ���塣��ַƫ����:0x02C����ֵ:0x1F0000�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dma_rd_gnt         : 1;  /* bit[0]    : rd��dma������Ӧ */
        unsigned int  dma_ocd_gnt        : 1;  /* bit[1]    : ocd��dma������Ӧ */
        unsigned int  dma_icd_gnt        : 1;  /* bit[2]    : icd��dma������Ӧ */
        unsigned int  dma_obuf_gnt       : 1;  /* bit[3]    : obuf��dma������Ӧ */
        unsigned int  dma_ibuf_gnt       : 1;  /* bit[4]    : ibuf��dma������Ӧ */
        unsigned int  reserved_0         : 3;  /* bit[5-7]  :  */
        unsigned int  dma_rd_req         : 1;  /* bit[8]    : rd����dma���� */
        unsigned int  dma_ocd_req        : 1;  /* bit[9]    : ocd����dma���� */
        unsigned int  dma_icd_req        : 1;  /* bit[10]   : icd����dma���� */
        unsigned int  dma_obuf_req       : 1;  /* bit[11]   : obuf����dma���� */
        unsigned int  dma_ibuf_req       : 1;  /* bit[12]   : ibuf����dma���� */
        unsigned int  reserved_1         : 3;  /* bit[13-15]:  */
        unsigned int  dma_rd_idle        : 1;  /* bit[16]   : rdû�н���dma���������ڴ��ڿ���״̬ */
        unsigned int  dma_ocd_idle       : 1;  /* bit[17]   : ocdû�н���dma���������ڴ��ڿ���״̬ */
        unsigned int  dma_icd_idle       : 1;  /* bit[18]   : icdû�н���dma���������ڴ��ڿ���״̬ */
        unsigned int  dma_obuf_idle      : 1;  /* bit[19]   : obufû�н���dma���������ڴ��ڿ���״̬ */
        unsigned int  dma_ibuf_idle      : 1;  /* bit[20]   : ibufû�н���dma���������ڴ��ڿ���״̬ */
        unsigned int  reserved_2         : 3;  /* bit[21-23]:  */
        unsigned int  dma_rd_trans_end   : 1;  /* bit[24]   : rdÿ��dma���׵����һ������ */
        unsigned int  dma_ocd_last_read  : 1;  /* bit[25]   : ocdÿ��dma���׵����һ������ */
        unsigned int  dma_icd_last_read  : 1;  /* bit[26]   : icdÿ��dma���׵����һ������ */
        unsigned int  dma_obuf_trans_end : 1;  /* bit[27]   : obufÿ��dma���׵����һ������ */
        unsigned int  dma_ibuf_last_read : 1;  /* bit[28]   : ibufÿ��dma���׵����һ������ */
        unsigned int  reserved_3         : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug20_UNION;
#endif
#define SOC_LCIPHER_cipher_debug20_dma_rd_gnt_START          (0)
#define SOC_LCIPHER_cipher_debug20_dma_rd_gnt_END            (0)
#define SOC_LCIPHER_cipher_debug20_dma_ocd_gnt_START         (1)
#define SOC_LCIPHER_cipher_debug20_dma_ocd_gnt_END           (1)
#define SOC_LCIPHER_cipher_debug20_dma_icd_gnt_START         (2)
#define SOC_LCIPHER_cipher_debug20_dma_icd_gnt_END           (2)
#define SOC_LCIPHER_cipher_debug20_dma_obuf_gnt_START        (3)
#define SOC_LCIPHER_cipher_debug20_dma_obuf_gnt_END          (3)
#define SOC_LCIPHER_cipher_debug20_dma_ibuf_gnt_START        (4)
#define SOC_LCIPHER_cipher_debug20_dma_ibuf_gnt_END          (4)
#define SOC_LCIPHER_cipher_debug20_dma_rd_req_START          (8)
#define SOC_LCIPHER_cipher_debug20_dma_rd_req_END            (8)
#define SOC_LCIPHER_cipher_debug20_dma_ocd_req_START         (9)
#define SOC_LCIPHER_cipher_debug20_dma_ocd_req_END           (9)
#define SOC_LCIPHER_cipher_debug20_dma_icd_req_START         (10)
#define SOC_LCIPHER_cipher_debug20_dma_icd_req_END           (10)
#define SOC_LCIPHER_cipher_debug20_dma_obuf_req_START        (11)
#define SOC_LCIPHER_cipher_debug20_dma_obuf_req_END          (11)
#define SOC_LCIPHER_cipher_debug20_dma_ibuf_req_START        (12)
#define SOC_LCIPHER_cipher_debug20_dma_ibuf_req_END          (12)
#define SOC_LCIPHER_cipher_debug20_dma_rd_idle_START         (16)
#define SOC_LCIPHER_cipher_debug20_dma_rd_idle_END           (16)
#define SOC_LCIPHER_cipher_debug20_dma_ocd_idle_START        (17)
#define SOC_LCIPHER_cipher_debug20_dma_ocd_idle_END          (17)
#define SOC_LCIPHER_cipher_debug20_dma_icd_idle_START        (18)
#define SOC_LCIPHER_cipher_debug20_dma_icd_idle_END          (18)
#define SOC_LCIPHER_cipher_debug20_dma_obuf_idle_START       (19)
#define SOC_LCIPHER_cipher_debug20_dma_obuf_idle_END         (19)
#define SOC_LCIPHER_cipher_debug20_dma_ibuf_idle_START       (20)
#define SOC_LCIPHER_cipher_debug20_dma_ibuf_idle_END         (20)
#define SOC_LCIPHER_cipher_debug20_dma_rd_trans_end_START    (24)
#define SOC_LCIPHER_cipher_debug20_dma_rd_trans_end_END      (24)
#define SOC_LCIPHER_cipher_debug20_dma_ocd_last_read_START   (25)
#define SOC_LCIPHER_cipher_debug20_dma_ocd_last_read_END     (25)
#define SOC_LCIPHER_cipher_debug20_dma_icd_last_read_START   (26)
#define SOC_LCIPHER_cipher_debug20_dma_icd_last_read_END     (26)
#define SOC_LCIPHER_cipher_debug20_dma_obuf_trans_end_START  (27)
#define SOC_LCIPHER_cipher_debug20_dma_obuf_trans_end_END    (27)
#define SOC_LCIPHER_cipher_debug20_dma_ibuf_last_read_START  (28)
#define SOC_LCIPHER_cipher_debug20_dma_ibuf_last_read_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug0_UNION
 �ṹ˵��  : cipher_debug0 �Ĵ����ṹ���塣��ַƫ����:0x030����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug0_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug1_UNION
 �ṹ˵��  : cipher_debug1 �Ĵ����ṹ���塣��ַƫ����:0x034����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug1_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug2_UNION
 �ṹ˵��  : cipher_debug2 �Ĵ����ṹ���塣��ַƫ����:0x038����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug2_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug3_UNION
 �ṹ˵��  : cipher_debug3 �Ĵ����ṹ���塣��ַƫ����:0x03C����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug3_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug4_UNION
 �ṹ˵��  : cipher_debug4 �Ĵ����ṹ���塣��ַƫ����:0x040����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug4_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug5_UNION
 �ṹ˵��  : cipher_debug5 �Ĵ����ṹ���塣��ַƫ����:0x044����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug5_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug6_UNION
 �ṹ˵��  : cipher_debug6 �Ĵ����ṹ���塣��ַƫ����:0x048����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug6_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug7_UNION
 �ṹ˵��  : cipher_debug7 �Ĵ����ṹ���塣��ַƫ����:0x04C����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug7_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug8_UNION
 �ṹ˵��  : cipher_debug8 �Ĵ����ṹ���塣��ַƫ����:0x050����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug8_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug9_UNION
 �ṹ˵��  : cipher_debug9 �Ĵ����ṹ���塣��ַƫ����:0x054����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug9_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug10_UNION
 �ṹ˵��  : cipher_debug10 �Ĵ����ṹ���塣��ַƫ����:0x058����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug10_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug11_UNION
 �ṹ˵��  : cipher_debug11 �Ĵ����ṹ���塣��ַƫ����:0x05C����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug11_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug12_UNION
 �ṹ˵��  : cipher_debug12 �Ĵ����ṹ���塣��ַƫ����:0x060����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug12_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug13_UNION
 �ṹ˵��  : cipher_debug13 �Ĵ����ṹ���塣��ַƫ����:0x064����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug13_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug14_UNION
 �ṹ˵��  : cipher_debug14 �Ĵ����ṹ���塣��ַƫ����:0x068����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug14_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug15_UNION
 �ṹ˵��  : cipher_debug15 �Ĵ����ṹ���塣��ַƫ����:0x06C����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug15_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug16_UNION
 �ṹ˵��  : cipher_debug16 �Ĵ����ṹ���塣��ַƫ����:0x070����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug16_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug17_UNION
 �ṹ˵��  : cipher_debug17 �Ĵ����ṹ���塣��ַƫ����:0x074����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug17_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug18_UNION
 �ṹ˵��  : cipher_debug18 �Ĵ����ṹ���塣��ַƫ����:0x078����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug18_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_cipher_debug19_UNION
 �ṹ˵��  : cipher_debug19 �Ĵ����ṹ���塣��ַƫ����:0x07C����ֵ:0x0�����:32
 �Ĵ���˵��: debug�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_LCIPHER_cipher_debug19_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH0_SOFTRESET_UNION
 �ṹ˵��  : CH0_SOFTRESET �Ĵ����ṹ���塣��ַƫ����:0x80����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��0��λ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch_srst      : 1;  /* bit[0]   : д1��λͨ��������ʱͨ��ռ�����ߣ���������ִ�и�λ��ֱ����ͨ���ͷ������Ժ�ſ�ʼ��λ����λ�����˼Ĵ����Զ���0�� */
        unsigned int  ch_bdq_clear : 1;  /* bit[1]   : д1����λBD���У�����ʱͨ����busy����ȵ���ǰBD������Ϻ����BD���У�ͬʱ��λ�Զ����㡣 */
        unsigned int  ch_rdq_clear : 1;  /* bit[2]   : д1����λRD���У�����ʱͨ����busy����ȵ���ǰBD������Ϻ����RD���У�ͬʱ��λ�Զ����㡣 */
        unsigned int  reserved     : 29; /* bit[3-31]: ��˵���� */
    } reg;
} SOC_LCIPHER_CH0_SOFTRESET_UNION;
#endif
#define SOC_LCIPHER_CH0_SOFTRESET_ch_srst_START       (0)
#define SOC_LCIPHER_CH0_SOFTRESET_ch_srst_END         (0)
#define SOC_LCIPHER_CH0_SOFTRESET_ch_bdq_clear_START  (1)
#define SOC_LCIPHER_CH0_SOFTRESET_ch_bdq_clear_END    (1)
#define SOC_LCIPHER_CH0_SOFTRESET_ch_rdq_clear_START  (2)
#define SOC_LCIPHER_CH0_SOFTRESET_ch_rdq_clear_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH0_EN_UNION
 �ṹ˵��  : CH0_EN �Ĵ����ṹ���塣��ַƫ����:0x84����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��0ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch_en    : 1;  /* bit[0]   : 1��ʾͨ��ʹ�ܣ�0��ʾͨ����ֹ�� */
        unsigned int  reserved : 29; /* bit[1-29]:  */
        unsigned int  pack_en  : 1;  /* bit[30]  : �˼Ĵ�����ʼֵΪ1����Ϊ1ʱ����ʾ�������������ɣ����Կ�ʼ��һ�Σ������ʾ��������������ڽ��С�����������Ϲ������£�
                                                   ��cipher��Ͻ����������ʱ�����Ȳ�ѯ�˼Ĵ�������Ϊ1����ʾ���Կ�ʼ������������bit��0��������ѱ�����������һ��BD�е�gen_bd_int��Ϊ��Ч����cipher��������һ��BD����󣬰Ѵ˼Ĵ�����Ϊ1��֪ͨ������Կ�ʼ��һ��������� */
        unsigned int  ch_busy  : 1;  /* bit[31]  : 1��ʾͨ��������0��ʾͨ����ͣ�� */
    } reg;
} SOC_LCIPHER_CH0_EN_UNION;
#endif
#define SOC_LCIPHER_CH0_EN_ch_en_START     (0)
#define SOC_LCIPHER_CH0_EN_ch_en_END       (0)
#define SOC_LCIPHER_CH0_EN_pack_en_START   (30)
#define SOC_LCIPHER_CH0_EN_pack_en_END     (30)
#define SOC_LCIPHER_CH0_EN_ch_busy_START   (31)
#define SOC_LCIPHER_CH0_EN_ch_busy_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH0_CONFIG_UNION
 �ṹ˵��  : CH0_CONFIG �Ĵ����ṹ���塣��ַƫ����:0x88����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��0���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iv_sel     : 1;  /* bit[0]   : ��ͨ�������Բ�����IV��BD���Ƕ���оƬ�Զ�������
                                                     0�������Բ�����IV��оƬ���ݲ����Զ�������
                                                     1�������Բ�����IV�������BD�� */
        unsigned int  iv_num     : 1;  /* bit[1]   : ��ͨ��BD�к��е�IV������ֻ�е�iv_selΪ1ʱ�����塣
                                                     0��һ��IV����ʱBD���ȹ̶��ǣ�
                                                     1������IV������һ��IV��������ЧIV��������ռ���ڴ档 */
        unsigned int  rdq_ctrl   : 2;  /* bit[2-3] : RDQ����ά����ʽ����RDQ��������Ҫ��д��RDʱ��Cipher�ȴ�ֱ��RDQ������
                                                     00������дRD��
                                                     01��ÿ��BD����Ӧ��дRD��
                                                     others��RD�Ƿ��д��BD���þ�����ֻ��BD�е�gen_rd_en��Чʱ��дRD�� */
        unsigned int  reserved_0 : 1;  /* bit[4]   : ������ */
        unsigned int  ufield_len : 2;  /* bit[5-6] : BD��userfield�ֶεĳ��ȣ���λ��32bit�� */
        unsigned int  reserved_1 : 25; /* bit[7-31]: ������ */
    } reg;
} SOC_LCIPHER_CH0_CONFIG_UNION;
#endif
#define SOC_LCIPHER_CH0_CONFIG_iv_sel_START      (0)
#define SOC_LCIPHER_CH0_CONFIG_iv_sel_END        (0)
#define SOC_LCIPHER_CH0_CONFIG_iv_num_START      (1)
#define SOC_LCIPHER_CH0_CONFIG_iv_num_END        (1)
#define SOC_LCIPHER_CH0_CONFIG_rdq_ctrl_START    (2)
#define SOC_LCIPHER_CH0_CONFIG_rdq_ctrl_END      (3)
#define SOC_LCIPHER_CH0_CONFIG_ufield_len_START  (5)
#define SOC_LCIPHER_CH0_CONFIG_ufield_len_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH0_BDQ_BADDR_UNION
 �ṹ˵��  : CH0_BDQ_BADDR �Ĵ����ṹ���塣��ַƫ����:0x8C����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��0 BDQ����ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  base_addr_l : 3;  /* bit[0-2] : ͨ��0 BD���л���ַ��3bit���̶�Ϊ0����Ҫ���ַ64λ���롣 */
        unsigned int  base_addr   : 29; /* bit[3-31]: ͨ��0 BD���л���ַ��29λ */
    } reg;
} SOC_LCIPHER_CH0_BDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH0_BDQ_BADDR_base_addr_l_START  (0)
#define SOC_LCIPHER_CH0_BDQ_BADDR_base_addr_l_END    (2)
#define SOC_LCIPHER_CH0_BDQ_BADDR_base_addr_START    (3)
#define SOC_LCIPHER_CH0_BDQ_BADDR_base_addr_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH0_BDQ_SIZE_UNION
 �ṹ˵��  : CH0_BDQ_SIZE �Ĵ����ṹ���塣��ַƫ����:0x90����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��0 BDQ��С�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  size     : 10; /* bit[0-9]  : ͨ��0 BD Queue��С��������������Ϊ��λ��
                                                    0����ʾ���д�СΪ1
                                                    1023����ʾ���д�СΪ1024 */
        unsigned int  reserved : 22; /* bit[10-31]: ��Ա˵���� */
    } reg;
} SOC_LCIPHER_CH0_BDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH0_BDQ_SIZE_size_START      (0)
#define SOC_LCIPHER_CH0_BDQ_SIZE_size_END        (9)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH0_BDQ_PTR_UNION
 �ṹ˵��  : CH0_BDQ_PTR �Ĵ����ṹ���塣��ַƫ����:0x94����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��0 BDQ��дָ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wptr         : 10; /* bit[0-9]  : BD����дָ�롣�ɱ���λ */
        unsigned int  reserved_0   : 6;  /* bit[10-15]: ���� */
        unsigned int  rptr         : 10; /* bit[16-25]: BD���ж�ָ�롣�ɱ���λ�� */
        unsigned int  reserved_1   : 4;  /* bit[26-29]: ���� */
        unsigned int  ch_bdq_empty : 1;  /* bit[30]   : BD���п� */
        unsigned int  ch_bdq_full  : 1;  /* bit[31]   : BD������ */
    } reg;
} SOC_LCIPHER_CH0_BDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH0_BDQ_PTR_wptr_START          (0)
#define SOC_LCIPHER_CH0_BDQ_PTR_wptr_END            (9)
#define SOC_LCIPHER_CH0_BDQ_PTR_rptr_START          (16)
#define SOC_LCIPHER_CH0_BDQ_PTR_rptr_END            (25)
#define SOC_LCIPHER_CH0_BDQ_PTR_ch_bdq_empty_START  (30)
#define SOC_LCIPHER_CH0_BDQ_PTR_ch_bdq_empty_END    (30)
#define SOC_LCIPHER_CH0_BDQ_PTR_ch_bdq_full_START   (31)
#define SOC_LCIPHER_CH0_BDQ_PTR_ch_bdq_full_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH0_BDQ_RADDR_UNION
 �ṹ˵��  : CH0_BDQ_RADDR �Ĵ����ṹ���塣��ַƫ����:0x98����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��0 BDQ����ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  addr : 32; /* bit[0-31]: ͨ��0 BD���ж���ַ���ɱ���λ */
    } reg;
} SOC_LCIPHER_CH0_BDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH0_BDQ_RADDR_addr_START  (0)
#define SOC_LCIPHER_CH0_BDQ_RADDR_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH0_BDQ_WADDR_UNION
 �ṹ˵��  : CH0_BDQ_WADDR �Ĵ����ṹ���塣��ַƫ����:0x9C����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��0 BDQд��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  addr : 32; /* bit[0-31]: ͨ��0 BD����д��ַ���ɱ���λ */
    } reg;
} SOC_LCIPHER_CH0_BDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH0_BDQ_WADDR_addr_START  (0)
#define SOC_LCIPHER_CH0_BDQ_WADDR_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH0_BD_NUM_UNION
 �ṹ˵��  : CH0_BD_NUM �Ĵ����ṹ���塣��ַƫ����:0xA0����ֵ:0x0�����:32
 �Ĵ���˵��: ��ʾͨ��0�����BD����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch0_bd_num : 32; /* bit[0-31]: ��ʾͨ��0�Ѿ������BD����
                                                     ����д���� */
    } reg;
} SOC_LCIPHER_CH0_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH0_BD_NUM_ch0_bd_num_START  (0)
#define SOC_LCIPHER_CH0_BD_NUM_ch0_bd_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH0_INVALID_BD_NUM_UNION
 �ṹ˵��  : CH0_INVALID_BD_NUM �Ĵ����ṹ���塣��ַƫ����:0xA4����ֵ:0x0�����:32
 �Ĵ���˵��: ��ʾͨ��0�������ЧBD��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch0_invalid_bd_num : 32; /* bit[0-31]: ��ʾͨ��0�Ѿ��������ЧBD����
                                                             ����д���� */
    } reg;
} SOC_LCIPHER_CH0_INVALID_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH0_INVALID_BD_NUM_ch0_invalid_bd_num_START  (0)
#define SOC_LCIPHER_CH0_INVALID_BD_NUM_ch0_invalid_bd_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH1_SOFTRESET_UNION
 �ṹ˵��  : CH1_SOFTRESET �Ĵ����ṹ���塣��ַƫ����:0x100����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��1��λ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch_srst      : 1;  /* bit[0]   : д1��λͨ��������ʱͨ��ռ�����ߣ���������ִ�и�λ��ֱ����ͨ���ͷ������Ժ�ſ�ʼ��λ����λ�����˼Ĵ����Զ���0�� */
        unsigned int  ch_bdq_clear : 1;  /* bit[1]   : д1����λBD���У�����ʱͨ����busy����ȵ���ǰBD������Ϻ����BD���У�ͬʱ��λ�Զ����㡣 */
        unsigned int  ch_rdq_clear : 1;  /* bit[2]   : д1����λRD���У�����ʱͨ����busy����ȵ���ǰBD������Ϻ����RD���У�ͬʱ��λ�Զ����㡣 */
        unsigned int  reserved     : 29; /* bit[3-31]: ��˵���� */
    } reg;
} SOC_LCIPHER_CH1_SOFTRESET_UNION;
#endif
#define SOC_LCIPHER_CH1_SOFTRESET_ch_srst_START       (0)
#define SOC_LCIPHER_CH1_SOFTRESET_ch_srst_END         (0)
#define SOC_LCIPHER_CH1_SOFTRESET_ch_bdq_clear_START  (1)
#define SOC_LCIPHER_CH1_SOFTRESET_ch_bdq_clear_END    (1)
#define SOC_LCIPHER_CH1_SOFTRESET_ch_rdq_clear_START  (2)
#define SOC_LCIPHER_CH1_SOFTRESET_ch_rdq_clear_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH1_EN_UNION
 �ṹ˵��  : CH1_EN �Ĵ����ṹ���塣��ַƫ����:0x104����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��1ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch_en    : 1;  /* bit[0]   : 1��ʾͨ��ʹ�ܣ�0��ʾͨ����ֹ�� */
        unsigned int  reserved : 29; /* bit[1-29]:  */
        unsigned int  pack_en  : 1;  /* bit[30]  : �˼Ĵ�����ʼֵΪ1����Ϊ1ʱ����ʾ�������������ɣ����Կ�ʼ��һ�Σ������ʾ��������������ڽ��С�����������Ϲ������£�
                                                   ��cipher��Ͻ����������ʱ�����Ȳ�ѯ�˼Ĵ�������Ϊ1����ʾ���Կ�ʼ������������bit��0��������ѱ�����������һ��BD�е�gen_bd_int��Ϊ��Ч����cipher��������һ��BD����󣬰Ѵ˼Ĵ�����Ϊ1��֪ͨ������Կ�ʼ��һ��������� */
        unsigned int  ch_busy  : 1;  /* bit[31]  : 1��ʾͨ��������0��ʾͨ����ͣ�� */
    } reg;
} SOC_LCIPHER_CH1_EN_UNION;
#endif
#define SOC_LCIPHER_CH1_EN_ch_en_START     (0)
#define SOC_LCIPHER_CH1_EN_ch_en_END       (0)
#define SOC_LCIPHER_CH1_EN_pack_en_START   (30)
#define SOC_LCIPHER_CH1_EN_pack_en_END     (30)
#define SOC_LCIPHER_CH1_EN_ch_busy_START   (31)
#define SOC_LCIPHER_CH1_EN_ch_busy_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH1_CONFIG_UNION
 �ṹ˵��  : CH1_CONFIG �Ĵ����ṹ���塣��ַƫ����:0x108����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��1���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iv_sel     : 1;  /* bit[0]   : ��ͨ�������Բ�����IV��BD���Ƕ���оƬ�Զ�������
                                                     0�������Բ�����IV��оƬ���ݲ����Զ�������
                                                     1�������Բ�����IV�������BD�� */
        unsigned int  iv_num     : 1;  /* bit[1]   : ��ͨ��BD�к��е�IV������ֻ�е�iv_selΪ1ʱ�����塣
                                                     0��һ��IV����ʱBD���ȹ̶��ǣ�
                                                     1������IV������һ��IV��������ЧIV��������ռ���ڴ档 */
        unsigned int  rdq_ctrl   : 2;  /* bit[2-3] : RDQ����ά����ʽ����RDQ��������Ҫ��д��RDʱ��Cipher�ȴ�ֱ��RDQ������
                                                     00������дRD��
                                                     01��ÿ��BD����Ӧ��дRD��
                                                     others��RD�Ƿ��д��BD���þ�����ֻ��BD�е�gen_rd_en��Чʱ��дRD�� */
        unsigned int  reserved_0 : 1;  /* bit[4]   : ������ */
        unsigned int  ufield_len : 2;  /* bit[5-6] : BD��userfield�ֶεĳ��ȣ���λ��32bit�� */
        unsigned int  reserved_1 : 25; /* bit[7-31]: ������ */
    } reg;
} SOC_LCIPHER_CH1_CONFIG_UNION;
#endif
#define SOC_LCIPHER_CH1_CONFIG_iv_sel_START      (0)
#define SOC_LCIPHER_CH1_CONFIG_iv_sel_END        (0)
#define SOC_LCIPHER_CH1_CONFIG_iv_num_START      (1)
#define SOC_LCIPHER_CH1_CONFIG_iv_num_END        (1)
#define SOC_LCIPHER_CH1_CONFIG_rdq_ctrl_START    (2)
#define SOC_LCIPHER_CH1_CONFIG_rdq_ctrl_END      (3)
#define SOC_LCIPHER_CH1_CONFIG_ufield_len_START  (5)
#define SOC_LCIPHER_CH1_CONFIG_ufield_len_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH1_BDQ_BADDR_UNION
 �ṹ˵��  : CH1_BDQ_BADDR �Ĵ����ṹ���塣��ַƫ����:0x10C����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��1 BDQ����ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  base_addr_l : 3;  /* bit[0-2] : ͨ��0 BD���л���ַ��3bit���̶�Ϊ0����Ҫ���ַ64λ���롣 */
        unsigned int  base_addr   : 29; /* bit[3-31]: ͨ��1 BD���л���ַ��29λ */
    } reg;
} SOC_LCIPHER_CH1_BDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH1_BDQ_BADDR_base_addr_l_START  (0)
#define SOC_LCIPHER_CH1_BDQ_BADDR_base_addr_l_END    (2)
#define SOC_LCIPHER_CH1_BDQ_BADDR_base_addr_START    (3)
#define SOC_LCIPHER_CH1_BDQ_BADDR_base_addr_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH1_BDQ_SIZE_UNION
 �ṹ˵��  : CH1_BDQ_SIZE �Ĵ����ṹ���塣��ַƫ����:0x110����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��1 BDQ��С�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  size     : 10; /* bit[0-9]  : ͨ��0 BD Queue��С��������������Ϊ��λ��
                                                    0����ʾ���д�СΪ1
                                                    1023����ʾ���д�СΪ1024 */
        unsigned int  reserved : 22; /* bit[10-31]: ��Ա˵���� */
    } reg;
} SOC_LCIPHER_CH1_BDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH1_BDQ_SIZE_size_START      (0)
#define SOC_LCIPHER_CH1_BDQ_SIZE_size_END        (9)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH1_BDQ_PTR_UNION
 �ṹ˵��  : CH1_BDQ_PTR �Ĵ����ṹ���塣��ַƫ����:0x114����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��1 BDQ��дָ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wptr          : 10; /* bit[0-9]  : BD����дָ�롣�ɱ���λ */
        unsigned int  reserved_0    : 6;  /* bit[10-15]: ���� */
        unsigned int  rptr          : 10; /* bit[16-25]: BD���ж�ָ�롣�ɱ���λ�� */
        unsigned int  reserved_1    : 4;  /* bit[26-29]: ���� */
        unsigned int  ch1_bdq_empty : 1;  /* bit[30]   : B���п� */
        unsigned int  ch1_bdq_full  : 1;  /* bit[31]   : BD������ */
    } reg;
} SOC_LCIPHER_CH1_BDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH1_BDQ_PTR_wptr_START           (0)
#define SOC_LCIPHER_CH1_BDQ_PTR_wptr_END             (9)
#define SOC_LCIPHER_CH1_BDQ_PTR_rptr_START           (16)
#define SOC_LCIPHER_CH1_BDQ_PTR_rptr_END             (25)
#define SOC_LCIPHER_CH1_BDQ_PTR_ch1_bdq_empty_START  (30)
#define SOC_LCIPHER_CH1_BDQ_PTR_ch1_bdq_empty_END    (30)
#define SOC_LCIPHER_CH1_BDQ_PTR_ch1_bdq_full_START   (31)
#define SOC_LCIPHER_CH1_BDQ_PTR_ch1_bdq_full_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH1_BDQ_RADDR_UNION
 �ṹ˵��  : CH1_BDQ_RADDR �Ĵ����ṹ���塣��ַƫ����:0x118����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��1 BDQ����ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  addr : 32; /* bit[0-31]: ͨ��1 BD���ж���ַ���ɱ���λ�� */
    } reg;
} SOC_LCIPHER_CH1_BDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH1_BDQ_RADDR_addr_START  (0)
#define SOC_LCIPHER_CH1_BDQ_RADDR_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH1_BDQ_WADDR_UNION
 �ṹ˵��  : CH1_BDQ_WADDR �Ĵ����ṹ���塣��ַƫ����:0x11C����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��1 BDQд��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  addr : 32; /* bit[0-31]: ͨ��1 BD����д��ַ���ɱ���λ�� */
    } reg;
} SOC_LCIPHER_CH1_BDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH1_BDQ_WADDR_addr_START  (0)
#define SOC_LCIPHER_CH1_BDQ_WADDR_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH1_BD_NUM_UNION
 �ṹ˵��  : CH1_BD_NUM �Ĵ����ṹ���塣��ַƫ����:0x120����ֵ:0x0�����:32
 �Ĵ���˵��: ��ʾͨ��1�����BD����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_bd_num : 32; /* bit[0-31]: ��ʾͨ��1�Ѿ������BD����
                                                     ֻ����
                                                     ����д���� */
    } reg;
} SOC_LCIPHER_CH1_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH1_BD_NUM_ch1_bd_num_START  (0)
#define SOC_LCIPHER_CH1_BD_NUM_ch1_bd_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH1_INVALID_BD_NUM_UNION
 �ṹ˵��  : CH1_INVALID_BD_NUM �Ĵ����ṹ���塣��ַƫ����:0x124����ֵ:0x0�����:32
 �Ĵ���˵��: ��ʾͨ��1�������ЧBD��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_invalid_bd_num : 32; /* bit[0-31]: ��ʾͨ��1�Ѿ��������ЧBD����
                                                             ֻ����
                                                             ����д���� */
    } reg;
} SOC_LCIPHER_CH1_INVALID_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH1_INVALID_BD_NUM_ch1_invalid_bd_num_START  (0)
#define SOC_LCIPHER_CH1_INVALID_BD_NUM_ch1_invalid_bd_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH2_SOFTRESET_UNION
 �ṹ˵��  : CH2_SOFTRESET �Ĵ����ṹ���塣��ַƫ����:0x180����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��2��λ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch_srst      : 1;  /* bit[0]   : д1��λͨ��������ʱͨ��ռ�����ߣ���������ִ�и�λ��ֱ����ͨ���ͷ������Ժ�ſ�ʼ��λ����λ�����˼Ĵ����Զ���0�� */
        unsigned int  ch_bdq_clear : 1;  /* bit[1]   : д1����λBD���У�����ʱͨ����busy����ȵ���ǰBD������Ϻ����BD���У�ͬʱ��λ�Զ����㡣 */
        unsigned int  ch_rdq_clear : 1;  /* bit[2]   : д1����λRD���У�����ʱͨ����busy����ȵ���ǰBD������Ϻ����RD���У�ͬʱ��λ�Զ����㡣 */
        unsigned int  reserved     : 29; /* bit[3-31]: ��˵���� */
    } reg;
} SOC_LCIPHER_CH2_SOFTRESET_UNION;
#endif
#define SOC_LCIPHER_CH2_SOFTRESET_ch_srst_START       (0)
#define SOC_LCIPHER_CH2_SOFTRESET_ch_srst_END         (0)
#define SOC_LCIPHER_CH2_SOFTRESET_ch_bdq_clear_START  (1)
#define SOC_LCIPHER_CH2_SOFTRESET_ch_bdq_clear_END    (1)
#define SOC_LCIPHER_CH2_SOFTRESET_ch_rdq_clear_START  (2)
#define SOC_LCIPHER_CH2_SOFTRESET_ch_rdq_clear_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH2_EN_UNION
 �ṹ˵��  : CH2_EN �Ĵ����ṹ���塣��ַƫ����:0x184����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��2ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch_en    : 1;  /* bit[0]   : 1��ʾͨ��ʹ�ܣ�0��ʾͨ����ֹ�� */
        unsigned int  reserved : 29; /* bit[1-29]:  */
        unsigned int  pack_en  : 1;  /* bit[30]  : �˼Ĵ�����ʼֵΪ1����Ϊ1ʱ����ʾ�������������ɣ����Կ�ʼ��һ�Σ������ʾ��������������ڽ��С�����������Ϲ������£�
                                                   ��cipher��Ͻ����������ʱ�����Ȳ�ѯ�˼Ĵ�������Ϊ1����ʾ���Կ�ʼ������������bit��0��������ѱ�����������һ��BD�е�gen_bd_int��Ϊ��Ч����cipher��������һ��BD����󣬰Ѵ˼Ĵ�����Ϊ1��֪ͨ������Կ�ʼ��һ��������� */
        unsigned int  ch_busy  : 1;  /* bit[31]  : 1��ʾͨ��������0��ʾͨ����ͣ�� */
    } reg;
} SOC_LCIPHER_CH2_EN_UNION;
#endif
#define SOC_LCIPHER_CH2_EN_ch_en_START     (0)
#define SOC_LCIPHER_CH2_EN_ch_en_END       (0)
#define SOC_LCIPHER_CH2_EN_pack_en_START   (30)
#define SOC_LCIPHER_CH2_EN_pack_en_END     (30)
#define SOC_LCIPHER_CH2_EN_ch_busy_START   (31)
#define SOC_LCIPHER_CH2_EN_ch_busy_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH2_CONFIG_UNION
 �ṹ˵��  : CH2_CONFIG �Ĵ����ṹ���塣��ַƫ����:0x188����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��2���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iv_sel     : 1;  /* bit[0]   : ��ͨ�������Բ�����IV��BD���Ƕ���оƬ�Զ�������
                                                     0�������Բ�����IV��оƬ���ݲ����Զ�������
                                                     1�������Բ�����IV�������BD�� */
        unsigned int  iv_num     : 1;  /* bit[1]   : ��ͨ��BD�к��е�IV������ֻ�е�iv_selΪ1ʱ�����塣
                                                     0��һ��IV����ʱBD���ȹ̶��ǣ�
                                                     1������IV������һ��IV��������ЧIV��������ռ���ڴ档 */
        unsigned int  rdq_ctrl   : 2;  /* bit[2-3] : RDQ����ά����ʽ����RDQ��������Ҫ��д��RDʱ��Cipher�ȴ�ֱ��RDQ������
                                                     00������дRD��
                                                     01��ÿ��BD����Ӧ��дRD��
                                                     others��RD�Ƿ��д��BD���þ�����ֻ��BD�е�gen_rd_en��Чʱ��дRD�� */
        unsigned int  reserved_0 : 1;  /* bit[4]   : ������ */
        unsigned int  ufield_len : 2;  /* bit[5-6] : BD��userfield�ֶεĳ��ȣ���λ��32bit�� */
        unsigned int  reserved_1 : 25; /* bit[7-31]: ������ */
    } reg;
} SOC_LCIPHER_CH2_CONFIG_UNION;
#endif
#define SOC_LCIPHER_CH2_CONFIG_iv_sel_START      (0)
#define SOC_LCIPHER_CH2_CONFIG_iv_sel_END        (0)
#define SOC_LCIPHER_CH2_CONFIG_iv_num_START      (1)
#define SOC_LCIPHER_CH2_CONFIG_iv_num_END        (1)
#define SOC_LCIPHER_CH2_CONFIG_rdq_ctrl_START    (2)
#define SOC_LCIPHER_CH2_CONFIG_rdq_ctrl_END      (3)
#define SOC_LCIPHER_CH2_CONFIG_ufield_len_START  (5)
#define SOC_LCIPHER_CH2_CONFIG_ufield_len_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH2_BDQ_BADDR_UNION
 �ṹ˵��  : CH2_BDQ_BADDR �Ĵ����ṹ���塣��ַƫ����:0x18C����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��2 BDQ����ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  base_addr_l : 3;  /* bit[0-2] : ͨ��0 BD���л���ַ��3bit���̶�Ϊ0����Ҫ���ַ64λ���롣 */
        unsigned int  base_addr   : 29; /* bit[3-31]: ͨ��2 BD���л���ַ��29λ */
    } reg;
} SOC_LCIPHER_CH2_BDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH2_BDQ_BADDR_base_addr_l_START  (0)
#define SOC_LCIPHER_CH2_BDQ_BADDR_base_addr_l_END    (2)
#define SOC_LCIPHER_CH2_BDQ_BADDR_base_addr_START    (3)
#define SOC_LCIPHER_CH2_BDQ_BADDR_base_addr_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH2_BDQ_SIZE_UNION
 �ṹ˵��  : CH2_BDQ_SIZE �Ĵ����ṹ���塣��ַƫ����:0x190����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��2 BDQ��С�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  size     : 10; /* bit[0-9]  : ͨ��0 BD Queue��С��������������Ϊ��λ��
                                                    0����ʾ���д�СΪ1
                                                    1023����ʾ���д�СΪ1024 */
        unsigned int  reserved : 22; /* bit[10-31]: ��Ա˵���� */
    } reg;
} SOC_LCIPHER_CH2_BDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH2_BDQ_SIZE_size_START      (0)
#define SOC_LCIPHER_CH2_BDQ_SIZE_size_END        (9)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH2_BDQ_PTR_UNION
 �ṹ˵��  : CH2_BDQ_PTR �Ĵ����ṹ���塣��ַƫ����:0x194����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��2 BDQ��дָ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wptr          : 10; /* bit[0-9]  : BD����дָ�롣�ɱ���λ */
        unsigned int  reserved_0    : 6;  /* bit[10-15]: ���� */
        unsigned int  rptr          : 10; /* bit[16-25]: BD���ж�ָ�롣�ɱ���λ�� */
        unsigned int  reserved_1    : 4;  /* bit[26-29]: ���� */
        unsigned int  ch2_bdq_empty : 1;  /* bit[30]   : BD���п� */
        unsigned int  ch2_bdq_full  : 1;  /* bit[31]   : BD������ */
    } reg;
} SOC_LCIPHER_CH2_BDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH2_BDQ_PTR_wptr_START           (0)
#define SOC_LCIPHER_CH2_BDQ_PTR_wptr_END             (9)
#define SOC_LCIPHER_CH2_BDQ_PTR_rptr_START           (16)
#define SOC_LCIPHER_CH2_BDQ_PTR_rptr_END             (25)
#define SOC_LCIPHER_CH2_BDQ_PTR_ch2_bdq_empty_START  (30)
#define SOC_LCIPHER_CH2_BDQ_PTR_ch2_bdq_empty_END    (30)
#define SOC_LCIPHER_CH2_BDQ_PTR_ch2_bdq_full_START   (31)
#define SOC_LCIPHER_CH2_BDQ_PTR_ch2_bdq_full_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH2_BDQ_RADDR_UNION
 �ṹ˵��  : CH2_BDQ_RADDR �Ĵ����ṹ���塣��ַƫ����:0x198����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��2 BDQ����ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  addr : 32; /* bit[0-31]: ͨ��2 BD���ж���ַ���ɱ���λ */
    } reg;
} SOC_LCIPHER_CH2_BDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH2_BDQ_RADDR_addr_START  (0)
#define SOC_LCIPHER_CH2_BDQ_RADDR_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH2_BDQ_WADDR_UNION
 �ṹ˵��  : CH2_BDQ_WADDR �Ĵ����ṹ���塣��ַƫ����:0x19C����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��2 BDQд��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  addr : 32; /* bit[0-31]: ͨ��2 BD����д��ַ���ɱ���λ */
    } reg;
} SOC_LCIPHER_CH2_BDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH2_BDQ_WADDR_addr_START  (0)
#define SOC_LCIPHER_CH2_BDQ_WADDR_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH2_BD_NUM_UNION
 �ṹ˵��  : CH2_BD_NUM �Ĵ����ṹ���塣��ַƫ����:0x1A0����ֵ:0x0�����:32
 �Ĵ���˵��: ��ʾͨ��1�����BD����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_bd_num : 32; /* bit[0-31]: ��ʾͨ��2�Ѿ������BD����
                                                     ֻ����
                                                     ����д���� */
    } reg;
} SOC_LCIPHER_CH2_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH2_BD_NUM_ch2_bd_num_START  (0)
#define SOC_LCIPHER_CH2_BD_NUM_ch2_bd_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH2_INVALID_BD_NUM_UNION
 �ṹ˵��  : CH2_INVALID_BD_NUM �Ĵ����ṹ���塣��ַƫ����:0x1A4����ֵ:0x0�����:32
 �Ĵ���˵��: ��ʾͨ��1�������ЧBD��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_invalid_bd_num : 32; /* bit[0-31]: ��ʾͨ��2�Ѿ��������ЧBD����
                                                             ֻ����
                                                             ����д���� */
    } reg;
} SOC_LCIPHER_CH2_INVALID_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH2_INVALID_BD_NUM_ch2_invalid_bd_num_START  (0)
#define SOC_LCIPHER_CH2_INVALID_BD_NUM_ch2_invalid_bd_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH3_SOFTRESET_UNION
 �ṹ˵��  : CH3_SOFTRESET �Ĵ����ṹ���塣��ַƫ����:0x200����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��3��λ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch_srst      : 1;  /* bit[0]   : д1��λͨ��������ʱͨ��ռ�����ߣ���������ִ�и�λ��ֱ����ͨ���ͷ������Ժ�ſ�ʼ��λ����λ�����˼Ĵ����Զ���0�� */
        unsigned int  ch_bdq_clear : 1;  /* bit[1]   : д1����λBD���У�����ʱͨ����busy����ȵ���ǰBD������Ϻ����BD���У�ͬʱ��λ�Զ����㡣 */
        unsigned int  ch_rdq_clear : 1;  /* bit[2]   : д1����λRD���У�����ʱͨ����busy����ȵ���ǰBD������Ϻ����RD���У�ͬʱ��λ�Զ����㡣 */
        unsigned int  reserved     : 29; /* bit[3-31]: ��˵���� */
    } reg;
} SOC_LCIPHER_CH3_SOFTRESET_UNION;
#endif
#define SOC_LCIPHER_CH3_SOFTRESET_ch_srst_START       (0)
#define SOC_LCIPHER_CH3_SOFTRESET_ch_srst_END         (0)
#define SOC_LCIPHER_CH3_SOFTRESET_ch_bdq_clear_START  (1)
#define SOC_LCIPHER_CH3_SOFTRESET_ch_bdq_clear_END    (1)
#define SOC_LCIPHER_CH3_SOFTRESET_ch_rdq_clear_START  (2)
#define SOC_LCIPHER_CH3_SOFTRESET_ch_rdq_clear_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH3_EN_UNION
 �ṹ˵��  : CH3_EN �Ĵ����ṹ���塣��ַƫ����:0x204����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��3ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch_en    : 1;  /* bit[0]   : 1��ʾͨ��ʹ�ܣ�0��ʾͨ����ֹ�� */
        unsigned int  reserved : 29; /* bit[1-29]:  */
        unsigned int  pack_en  : 1;  /* bit[30]  : �˼Ĵ�����ʼֵΪ1����Ϊ1ʱ����ʾ�������������ɣ����Կ�ʼ��һ�Σ������ʾ��������������ڽ��С�����������Ϲ������£�
                                                   ��cipher��Ͻ����������ʱ�����Ȳ�ѯ�˼Ĵ�������Ϊ1����ʾ���Կ�ʼ������������bit��0��������ѱ�����������һ��BD�е�gen_bd_int��Ϊ��Ч����cipher��������һ��BD����󣬰Ѵ˼Ĵ�����Ϊ1��֪ͨ������Կ�ʼ��һ��������� */
        unsigned int  ch_busy  : 1;  /* bit[31]  : 1��ʾͨ��������0��ʾͨ����ͣ�� */
    } reg;
} SOC_LCIPHER_CH3_EN_UNION;
#endif
#define SOC_LCIPHER_CH3_EN_ch_en_START     (0)
#define SOC_LCIPHER_CH3_EN_ch_en_END       (0)
#define SOC_LCIPHER_CH3_EN_pack_en_START   (30)
#define SOC_LCIPHER_CH3_EN_pack_en_END     (30)
#define SOC_LCIPHER_CH3_EN_ch_busy_START   (31)
#define SOC_LCIPHER_CH3_EN_ch_busy_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH3_CONFIG_UNION
 �ṹ˵��  : CH3_CONFIG �Ĵ����ṹ���塣��ַƫ����:0x208����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��3���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iv_sel     : 1;  /* bit[0]   : ��ͨ�������Բ�����IV��BD���Ƕ���оƬ�Զ�������
                                                     0�������Բ�����IV��оƬ���ݲ����Զ�������
                                                     1�������Բ�����IV�������BD�� */
        unsigned int  iv_num     : 1;  /* bit[1]   : ��ͨ��BD�к��е�IV������ֻ�е�iv_selΪ1ʱ�����塣
                                                     0��һ��IV����ʱBD���ȹ̶��ǣ�
                                                     1������IV������һ��IV��������ЧIV��������ռ���ڴ档 */
        unsigned int  rdq_ctrl   : 2;  /* bit[2-3] : RDQ����ά����ʽ����RDQ��������Ҫ��д��RDʱ��Cipher�ȴ�ֱ��RDQ������
                                                     00������дRD��
                                                     01��ÿ��BD����Ӧ��дRD��
                                                     others��RD�Ƿ��д��BD���þ�����ֻ��BD�е�gen_rd_en��Чʱ��дRD�� */
        unsigned int  reserved_0 : 1;  /* bit[4]   : ������ */
        unsigned int  ufield_len : 2;  /* bit[5-6] : BD��userfield�ֶεĳ��ȣ���λ��32bit�� */
        unsigned int  reserved_1 : 25; /* bit[7-31]: ������ */
    } reg;
} SOC_LCIPHER_CH3_CONFIG_UNION;
#endif
#define SOC_LCIPHER_CH3_CONFIG_iv_sel_START      (0)
#define SOC_LCIPHER_CH3_CONFIG_iv_sel_END        (0)
#define SOC_LCIPHER_CH3_CONFIG_iv_num_START      (1)
#define SOC_LCIPHER_CH3_CONFIG_iv_num_END        (1)
#define SOC_LCIPHER_CH3_CONFIG_rdq_ctrl_START    (2)
#define SOC_LCIPHER_CH3_CONFIG_rdq_ctrl_END      (3)
#define SOC_LCIPHER_CH3_CONFIG_ufield_len_START  (5)
#define SOC_LCIPHER_CH3_CONFIG_ufield_len_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH3_BDQ_BADDR_UNION
 �ṹ˵��  : CH3_BDQ_BADDR �Ĵ����ṹ���塣��ַƫ����:0x20C����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��3 BDQ����ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  base_addr_l : 3;  /* bit[0-2] : ͨ��0 BD���л���ַ��3bit���̶�Ϊ0����Ҫ���ַ64λ���롣 */
        unsigned int  base_addr   : 29; /* bit[3-31]: ͨ��3 BD���л���ַ��29λ */
    } reg;
} SOC_LCIPHER_CH3_BDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH3_BDQ_BADDR_base_addr_l_START  (0)
#define SOC_LCIPHER_CH3_BDQ_BADDR_base_addr_l_END    (2)
#define SOC_LCIPHER_CH3_BDQ_BADDR_base_addr_START    (3)
#define SOC_LCIPHER_CH3_BDQ_BADDR_base_addr_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH3_BDQ_SIZE_UNION
 �ṹ˵��  : CH3_BDQ_SIZE �Ĵ����ṹ���塣��ַƫ����:0x210����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��3 BDQ��С�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  size     : 10; /* bit[0-9]  : ͨ��0 BD Queue��С��������������Ϊ��λ��
                                                    0����ʾ���д�СΪ1
                                                    1023����ʾ���д�СΪ1024 */
        unsigned int  reserved : 22; /* bit[10-31]: ��Ա˵���� */
    } reg;
} SOC_LCIPHER_CH3_BDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH3_BDQ_SIZE_size_START      (0)
#define SOC_LCIPHER_CH3_BDQ_SIZE_size_END        (9)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH3_BDQ_PTR_UNION
 �ṹ˵��  : CH3_BDQ_PTR �Ĵ����ṹ���塣��ַƫ����:0x214����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��3 BDQ��дָ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wptr          : 10; /* bit[0-9]  : BD����дָ�롣�ɱ���λ */
        unsigned int  reserved_0    : 6;  /* bit[10-15]: ���� */
        unsigned int  rptr          : 10; /* bit[16-25]: BD���ж�ָ�롣�ɱ���λ�� */
        unsigned int  reserved_1    : 4;  /* bit[26-29]: ���� */
        unsigned int  ch3_bdq_empty : 1;  /* bit[30]   : BD���п� */
        unsigned int  ch3_bdq_full  : 1;  /* bit[31]   : BD������ */
    } reg;
} SOC_LCIPHER_CH3_BDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH3_BDQ_PTR_wptr_START           (0)
#define SOC_LCIPHER_CH3_BDQ_PTR_wptr_END             (9)
#define SOC_LCIPHER_CH3_BDQ_PTR_rptr_START           (16)
#define SOC_LCIPHER_CH3_BDQ_PTR_rptr_END             (25)
#define SOC_LCIPHER_CH3_BDQ_PTR_ch3_bdq_empty_START  (30)
#define SOC_LCIPHER_CH3_BDQ_PTR_ch3_bdq_empty_END    (30)
#define SOC_LCIPHER_CH3_BDQ_PTR_ch3_bdq_full_START   (31)
#define SOC_LCIPHER_CH3_BDQ_PTR_ch3_bdq_full_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH3_BDQ_RADDR_UNION
 �ṹ˵��  : CH3_BDQ_RADDR �Ĵ����ṹ���塣��ַƫ����:0x218����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��3 BDQ����ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  addr : 32; /* bit[0-31]: ͨ��3 BD���ж���ַ���ɱ���λ */
    } reg;
} SOC_LCIPHER_CH3_BDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH3_BDQ_RADDR_addr_START  (0)
#define SOC_LCIPHER_CH3_BDQ_RADDR_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH3_BDQ_WADDR_UNION
 �ṹ˵��  : CH3_BDQ_WADDR �Ĵ����ṹ���塣��ַƫ����:0x21C����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��3 BDQд��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  addr : 32; /* bit[0-31]: ͨ��3 BD����д��ַ���ɱ���λ */
    } reg;
} SOC_LCIPHER_CH3_BDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH3_BDQ_WADDR_addr_START  (0)
#define SOC_LCIPHER_CH3_BDQ_WADDR_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH3_BD_NUM_UNION
 �ṹ˵��  : CH3_BD_NUM �Ĵ����ṹ���塣��ַƫ����:0x220����ֵ:0x0�����:32
 �Ĵ���˵��: ��ʾͨ��3�����BD����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch3_bd_num : 32; /* bit[0-31]: ��ʾͨ��3�Ѿ������BD����
                                                     ֻ����
                                                     ����д���� */
    } reg;
} SOC_LCIPHER_CH3_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH3_BD_NUM_ch3_bd_num_START  (0)
#define SOC_LCIPHER_CH3_BD_NUM_ch3_bd_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH3_INVALID_BD_NUM_UNION
 �ṹ˵��  : CH3_INVALID_BD_NUM �Ĵ����ṹ���塣��ַƫ����:0x224����ֵ:0x0�����:32
 �Ĵ���˵��: ��ʾͨ��3�������ЧBD��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch3_invalid_bd_num : 32; /* bit[0-31]: ��ʾͨ��3�Ѿ��������ЧBD����
                                                             ֻ����
                                                             ����д���� */
    } reg;
} SOC_LCIPHER_CH3_INVALID_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH3_INVALID_BD_NUM_ch3_invalid_bd_num_START  (0)
#define SOC_LCIPHER_CH3_INVALID_BD_NUM_ch3_invalid_bd_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH4_SOFTRESET_UNION
 �ṹ˵��  : CH4_SOFTRESET �Ĵ����ṹ���塣��ַƫ����:0x280����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��4��λ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch_srst      : 1;  /* bit[0]   : д1��λͨ��������ʱͨ��ռ�����ߣ���������ִ�и�λ��ֱ����ͨ���ͷ������Ժ�ſ�ʼ��λ����λ�����˼Ĵ����Զ���0�� */
        unsigned int  ch_bdq_clear : 1;  /* bit[1]   : д1����λBD���У�����ʱͨ����busy����ȵ���ǰBD������Ϻ����BD���У�ͬʱ��λ�Զ����㡣 */
        unsigned int  ch_rdq_clear : 1;  /* bit[2]   : д1����λRD���У�����ʱͨ����busy����ȵ���ǰBD������Ϻ����RD���У�ͬʱ��λ�Զ����㡣 */
        unsigned int  reserved     : 29; /* bit[3-31]: ��˵���� */
    } reg;
} SOC_LCIPHER_CH4_SOFTRESET_UNION;
#endif
#define SOC_LCIPHER_CH4_SOFTRESET_ch_srst_START       (0)
#define SOC_LCIPHER_CH4_SOFTRESET_ch_srst_END         (0)
#define SOC_LCIPHER_CH4_SOFTRESET_ch_bdq_clear_START  (1)
#define SOC_LCIPHER_CH4_SOFTRESET_ch_bdq_clear_END    (1)
#define SOC_LCIPHER_CH4_SOFTRESET_ch_rdq_clear_START  (2)
#define SOC_LCIPHER_CH4_SOFTRESET_ch_rdq_clear_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH4_EN_UNION
 �ṹ˵��  : CH4_EN �Ĵ����ṹ���塣��ַƫ����:0x284����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��4ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch_en    : 1;  /* bit[0]   : 1��ʾͨ��ʹ�ܣ�0��ʾͨ����ֹ�� */
        unsigned int  reserved : 29; /* bit[1-29]:  */
        unsigned int  pack_en  : 1;  /* bit[30]  : �˼Ĵ�����ʼֵΪ1����Ϊ1ʱ����ʾ�������������ɣ����Կ�ʼ��һ�Σ������ʾ��������������ڽ��С�����������Ϲ������£�
                                                   ��cipher��Ͻ����������ʱ�����Ȳ�ѯ�˼Ĵ�������Ϊ1����ʾ���Կ�ʼ������������bit��0��������ѱ�����������һ��BD�е�gen_bd_int��Ϊ��Ч����cipher��������һ��BD����󣬰Ѵ˼Ĵ�����Ϊ1��֪ͨ������Կ�ʼ��һ��������� */
        unsigned int  ch_busy  : 1;  /* bit[31]  : 1��ʾͨ��������0��ʾͨ����ͣ�� */
    } reg;
} SOC_LCIPHER_CH4_EN_UNION;
#endif
#define SOC_LCIPHER_CH4_EN_ch_en_START     (0)
#define SOC_LCIPHER_CH4_EN_ch_en_END       (0)
#define SOC_LCIPHER_CH4_EN_pack_en_START   (30)
#define SOC_LCIPHER_CH4_EN_pack_en_END     (30)
#define SOC_LCIPHER_CH4_EN_ch_busy_START   (31)
#define SOC_LCIPHER_CH4_EN_ch_busy_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH4_CONFIG_UNION
 �ṹ˵��  : CH4_CONFIG �Ĵ����ṹ���塣��ַƫ����:0x288����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��4���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iv_sel     : 1;  /* bit[0]   : ��ͨ�������Բ�����IV��BD���Ƕ���оƬ�Զ�������
                                                     0�������Բ�����IV��оƬ���ݲ����Զ�������
                                                     1�������Բ�����IV�������BD�� */
        unsigned int  iv_num     : 1;  /* bit[1]   : ��ͨ��BD�к��е�IV������ֻ�е�iv_selΪ1ʱ�����塣
                                                     0��һ��IV����ʱBD���ȹ̶��ǣ�
                                                     1������IV������һ��IV��������ЧIV��������ռ���ڴ档 */
        unsigned int  rdq_ctrl   : 2;  /* bit[2-3] : RDQ����ά����ʽ����RDQ��������Ҫ��д��RDʱ��Cipher�ȴ�ֱ��RDQ������
                                                     00������дRD��
                                                     01��ÿ��BD����Ӧ��дRD��
                                                     others��RD�Ƿ��д��BD���þ�����ֻ��BD�е�gen_rd_en��Чʱ��дRD�� */
        unsigned int  reserved_0 : 1;  /* bit[4]   : ������ */
        unsigned int  ufield_len : 2;  /* bit[5-6] : BD��userfield�ֶεĳ��ȣ���λ��32bit�� */
        unsigned int  reserved_1 : 25; /* bit[7-31]: ������ */
    } reg;
} SOC_LCIPHER_CH4_CONFIG_UNION;
#endif
#define SOC_LCIPHER_CH4_CONFIG_iv_sel_START      (0)
#define SOC_LCIPHER_CH4_CONFIG_iv_sel_END        (0)
#define SOC_LCIPHER_CH4_CONFIG_iv_num_START      (1)
#define SOC_LCIPHER_CH4_CONFIG_iv_num_END        (1)
#define SOC_LCIPHER_CH4_CONFIG_rdq_ctrl_START    (2)
#define SOC_LCIPHER_CH4_CONFIG_rdq_ctrl_END      (3)
#define SOC_LCIPHER_CH4_CONFIG_ufield_len_START  (5)
#define SOC_LCIPHER_CH4_CONFIG_ufield_len_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH4_BDQ_BADDR_UNION
 �ṹ˵��  : CH4_BDQ_BADDR �Ĵ����ṹ���塣��ַƫ����:0x28C����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��4 BDQ����ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  base_addr_l : 3;  /* bit[0-2] : ͨ��0 BD���л���ַ��3bit���̶�Ϊ0����Ҫ���ַ64λ���롣 */
        unsigned int  base_addr   : 29; /* bit[3-31]: ͨ��4 BD���л���ַ��29λ */
    } reg;
} SOC_LCIPHER_CH4_BDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH4_BDQ_BADDR_base_addr_l_START  (0)
#define SOC_LCIPHER_CH4_BDQ_BADDR_base_addr_l_END    (2)
#define SOC_LCIPHER_CH4_BDQ_BADDR_base_addr_START    (3)
#define SOC_LCIPHER_CH4_BDQ_BADDR_base_addr_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH4_BDQ_SIZE_UNION
 �ṹ˵��  : CH4_BDQ_SIZE �Ĵ����ṹ���塣��ַƫ����:0x290����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��4 BDQ��С�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  size     : 10; /* bit[0-9]  : ͨ��0 BD Queue��С��������������Ϊ��λ��
                                                    0����ʾ���д�СΪ1
                                                    255����ʾ���д�СΪ256 */
        unsigned int  reserved : 22; /* bit[10-31]: ��Ա˵���� */
    } reg;
} SOC_LCIPHER_CH4_BDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH4_BDQ_SIZE_size_START      (0)
#define SOC_LCIPHER_CH4_BDQ_SIZE_size_END        (9)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH4_BDQ_PTR_UNION
 �ṹ˵��  : CH4_BDQ_PTR �Ĵ����ṹ���塣��ַƫ����:0x294����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��4 BDQ��дָ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wptr          : 10; /* bit[0-9]  : BD����дָ�롣�ɱ���λ */
        unsigned int  reserved_0    : 6;  /* bit[10-15]: ���� */
        unsigned int  rptr          : 10; /* bit[16-25]: BD���ж�ָ�롣�ɱ���λ�� */
        unsigned int  reserved_1    : 4;  /* bit[26-29]: ���� */
        unsigned int  ch4_bdq_empty : 1;  /* bit[30]   : BD���п� */
        unsigned int  ch4_bdq_full  : 1;  /* bit[31]   : BD������ */
    } reg;
} SOC_LCIPHER_CH4_BDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH4_BDQ_PTR_wptr_START           (0)
#define SOC_LCIPHER_CH4_BDQ_PTR_wptr_END             (9)
#define SOC_LCIPHER_CH4_BDQ_PTR_rptr_START           (16)
#define SOC_LCIPHER_CH4_BDQ_PTR_rptr_END             (25)
#define SOC_LCIPHER_CH4_BDQ_PTR_ch4_bdq_empty_START  (30)
#define SOC_LCIPHER_CH4_BDQ_PTR_ch4_bdq_empty_END    (30)
#define SOC_LCIPHER_CH4_BDQ_PTR_ch4_bdq_full_START   (31)
#define SOC_LCIPHER_CH4_BDQ_PTR_ch4_bdq_full_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH4_BDQ_RADDR_UNION
 �ṹ˵��  : CH4_BDQ_RADDR �Ĵ����ṹ���塣��ַƫ����:0x298����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��4 BDQ����ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  addr : 32; /* bit[0-31]: ͨ��4 BD���ж���ַ���ɱ���λ */
    } reg;
} SOC_LCIPHER_CH4_BDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH4_BDQ_RADDR_addr_START  (0)
#define SOC_LCIPHER_CH4_BDQ_RADDR_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH4_BDQ_WADDR_UNION
 �ṹ˵��  : CH4_BDQ_WADDR �Ĵ����ṹ���塣��ַƫ����:0x29C����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��4 BDQд��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  addr : 32; /* bit[0-31]: ͨ��4 BD����д��ַ���ɱ���λ�� */
    } reg;
} SOC_LCIPHER_CH4_BDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH4_BDQ_WADDR_addr_START  (0)
#define SOC_LCIPHER_CH4_BDQ_WADDR_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH4_BD_NUM_UNION
 �ṹ˵��  : CH4_BD_NUM �Ĵ����ṹ���塣��ַƫ����:0x2A0����ֵ:0x0�����:32
 �Ĵ���˵��: ��ʾͨ��4�����BD����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch4_bd_num : 32; /* bit[0-31]: ��ʾͨ��4�Ѿ������BD����
                                                     ֻ����
                                                     ����д���� */
    } reg;
} SOC_LCIPHER_CH4_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH4_BD_NUM_ch4_bd_num_START  (0)
#define SOC_LCIPHER_CH4_BD_NUM_ch4_bd_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH4_INVALID_BD_NUM_UNION
 �ṹ˵��  : CH4_INVALID_BD_NUM �Ĵ����ṹ���塣��ַƫ����:0x2A4����ֵ:0x0�����:32
 �Ĵ���˵��: ��ʾͨ��4�������ЧBD��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch4_invalid_bd_num : 32; /* bit[0-31]: ��ʾͨ��4�Ѿ��������ЧBD����
                                                             ֻ����
                                                             ����д���� */
    } reg;
} SOC_LCIPHER_CH4_INVALID_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH4_INVALID_BD_NUM_ch4_invalid_bd_num_START  (0)
#define SOC_LCIPHER_CH4_INVALID_BD_NUM_ch4_invalid_bd_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH_INT_PKT_INTERVAL_UNION
 �ṹ˵��  : CH_INT_PKT_INTERVAL �Ĵ����ṹ���塣��ַƫ����:0x400����ֵ:0xFF0000�����:32
 �Ĵ���˵��: �жϰ�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch0_pkt_num  : 4;  /* bit[0-3]  : ͨ��0 BD DONE�жϰ��������
                                                        0��5�����ݰ���
                                                        1��10�����ݰ���
                                                        n��10*��n+1�������ݰ� */
        unsigned int  ch1_pkt_num  : 4;  /* bit[4-7]  : ͨ��1 BD DONE�жϰ��������
                                                        0��5�����ݰ���
                                                        1��10�����ݰ���
                                                        n��10*��n+1�������ݰ� */
        unsigned int  ch2_pkt_num  : 4;  /* bit[8-11] : ͨ��2 BD DONE�жϰ��������
                                                        0��5�����ݰ���
                                                        1��10�����ݰ���
                                                        n��10*��n+1�������ݰ� */
        unsigned int  ch3_pkt_num  : 4;  /* bit[12-15]: ͨ��3 BD DONE�жϰ��������
                                                        0��5�����ݰ���
                                                        1��10�����ݰ���
                                                        n��10*��n+1�������ݰ� */
        unsigned int  timeout_time : 9;  /* bit[16-24]: ��ʱ�ж���ֵ��4��ͨ�����á���λ��20us�� */
        unsigned int  ch4_pkt_num  : 4;  /* bit[25-28]: ͨ��4 BD DONE�жϰ��������
                                                        0��5�����ݰ���
                                                        1��10�����ݰ���
                                                        n��10*��n+1�������ݰ� */
        unsigned int  reserved     : 3;  /* bit[29-31]: ������ */
    } reg;
} SOC_LCIPHER_CH_INT_PKT_INTERVAL_UNION;
#endif
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch0_pkt_num_START   (0)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch0_pkt_num_END     (3)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch1_pkt_num_START   (4)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch1_pkt_num_END     (7)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch2_pkt_num_START   (8)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch2_pkt_num_END     (11)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch3_pkt_num_START   (12)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch3_pkt_num_END     (15)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_timeout_time_START  (16)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_timeout_time_END    (24)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch4_pkt_num_START   (25)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch4_pkt_num_END     (28)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CIPHER_INT_STATUS_UNION
 �ṹ˵��  : CIPHER_INT_STATUS �Ĵ����ṹ���塣��ַƫ����:0x404����ֵ:0x0�����:32
 �Ĵ���˵��: cipher�ж�״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cipher_int0 : 1;  /* bit[0]   : CIPHER_INT0_STATUS�жϼĴ����е��ж��Ƿ����ж������󡣿ɱ���λ */
        unsigned int  cipher_int1 : 1;  /* bit[1]   : CIPHER_INT1_STATUS�жϼĴ����е��ж��Ƿ����ж������󡣿ɱ���λ */
        unsigned int  cipher_int2 : 1;  /* bit[2]   : CIPHER_INT2_STATUS�жϼĴ����е��ж��Ƿ����ж������󡣿ɱ���λ */
        unsigned int  reserved    : 29; /* bit[3-31]: ������ */
    } reg;
} SOC_LCIPHER_CIPHER_INT_STATUS_UNION;
#endif
#define SOC_LCIPHER_CIPHER_INT_STATUS_cipher_int0_START  (0)
#define SOC_LCIPHER_CIPHER_INT_STATUS_cipher_int0_END    (0)
#define SOC_LCIPHER_CIPHER_INT_STATUS_cipher_int1_START  (1)
#define SOC_LCIPHER_CIPHER_INT_STATUS_cipher_int1_END    (1)
#define SOC_LCIPHER_CIPHER_INT_STATUS_cipher_int2_START  (2)
#define SOC_LCIPHER_CIPHER_INT_STATUS_cipher_int2_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CIPHER_INT0_STATUS_UNION
 �ṹ˵��  : CIPHER_INT0_STATUS �Ĵ����ṹ���塣��ַƫ����:0x408����ֵ:0x0�����:32
 �Ĵ���˵��: cipher�жϼĴ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch0_bdq_full      : 1;  /* bit[0]    : ͨ��0 BDQ���жϡ���BDQ��ʱ������жϡ� */
        unsigned int  ch0_rdq_full      : 1;  /* bit[1]    : ͨ��0 RDQ���жϡ���RDQ��ʱ������жϡ� */
        unsigned int  ch0_nbd_done      : 1;  /* bit[2]    : ͨ��0�����������ĿN��BD֮��������жϡ�N��ֵ��CH0_INT_PKT_INTERVAL�� */
        unsigned int  ch0_bd_done       : 1;  /* bit[3]    : ͨ��0��BD��gen_int_enΪ1ʱ���ڵ�ǰBD�Ĳ�����ɺ�������жϡ� */
        unsigned int  ch0_allbd_done    : 1;  /* bit[4]    : ͨ��0��BDQ�����һ��BD������ɺ�������жϡ� */
        unsigned int  ch0_integrity_err : 1;  /* bit[5]    : ͨ��0�����Լ������жϡ� */
        unsigned int  reserved_0        : 2;  /* bit[6-7]  :  */
        unsigned int  ch1_bdq_full      : 1;  /* bit[8]    : ͨ��1 BDQ���жϡ���BDQ��ʱ������жϡ� */
        unsigned int  ch1_rdq_full      : 1;  /* bit[9]    : ͨ��1 RDQ���жϡ���RDQ��ʱ������жϡ� */
        unsigned int  ch1_nbd_done      : 1;  /* bit[10]   : ͨ��1�����������ĿN��BD֮��������жϡ�N��ֵ��CH0_INT_PKT_INTERVAL�� */
        unsigned int  ch1_bd_done       : 1;  /* bit[11]   : ͨ��1��BD��gen_int_enΪ1ʱ���ڵ�ǰBD�Ĳ�����ɺ�������жϡ� */
        unsigned int  ch1_allbd_done    : 1;  /* bit[12]   : ͨ��1��BDQ�����һ��BD������ɺ�������жϡ� */
        unsigned int  ch1_integrity_err : 1;  /* bit[13]   : ͨ��1�����Լ������жϡ� */
        unsigned int  reserved_1        : 2;  /* bit[14-15]:  */
        unsigned int  ch2_bdq_full      : 1;  /* bit[16]   : ͨ��2 BDQ���жϡ���BDQ��ʱ������жϡ� */
        unsigned int  ch2_rdq_full      : 1;  /* bit[17]   : ͨ��2 RDQ���жϡ���RDQ��ʱ������жϡ� */
        unsigned int  ch2_nbd_done      : 1;  /* bit[18]   : ͨ��2�����������ĿN��BD֮��������жϡ�N��ֵ��CH0_INT_PKT_INTERVAL�� */
        unsigned int  ch2_bd_done       : 1;  /* bit[19]   : ͨ��2��BD��gen_int_enΪ1ʱ���ڵ�ǰBD�Ĳ�����ɺ�������жϡ� */
        unsigned int  ch2_allbd_done    : 1;  /* bit[20]   : ͨ��2��BDQ�����һ��BD������ɺ�������жϡ� */
        unsigned int  ch2_integrity_err : 1;  /* bit[21]   : ͨ��2�����Լ������жϡ� */
        unsigned int  reserved_2        : 2;  /* bit[22-23]:  */
        unsigned int  ch3_bdq_full      : 1;  /* bit[24]   : ͨ��3 BDQ���жϡ���BDQ��ʱ������жϡ� */
        unsigned int  ch3_rdq_full      : 1;  /* bit[25]   : ͨ��3 RDQ���жϡ���RDQ��ʱ������жϡ� */
        unsigned int  ch3_nbd_done      : 1;  /* bit[26]   : ͨ��3�����������ĿN��BD֮��������жϡ�N��ֵ��CH0_INT_PKT_INTERVAL�� */
        unsigned int  ch3_bd_done       : 1;  /* bit[27]   : ͨ��3��BD��gen_int_enΪ1ʱ���ڵ�ǰBD�Ĳ�����ɺ�������жϡ�
                                                             д1���ж� */
        unsigned int  ch3_allbd_done    : 1;  /* bit[28]   : ͨ��3��BDQ�����һ��BD������ɺ�������жϡ�
                                                             д1���ж� */
        unsigned int  ch3_integrity_err : 1;  /* bit[29]   : ͨ��3�����Լ������жϡ�
                                                             д1���жϡ� */
        unsigned int  reserved_3        : 2;  /* bit[30-31]: ��������״̬�Ĵ����ɱ���λ */
    } reg;
} SOC_LCIPHER_CIPHER_INT0_STATUS_UNION;
#endif
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_bdq_full_START       (0)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_bdq_full_END         (0)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_rdq_full_START       (1)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_rdq_full_END         (1)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_nbd_done_START       (2)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_nbd_done_END         (2)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_bd_done_START        (3)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_bd_done_END          (3)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_allbd_done_START     (4)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_allbd_done_END       (4)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_integrity_err_START  (5)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_integrity_err_END    (5)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_bdq_full_START       (8)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_bdq_full_END         (8)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_rdq_full_START       (9)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_rdq_full_END         (9)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_nbd_done_START       (10)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_nbd_done_END         (10)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_bd_done_START        (11)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_bd_done_END          (11)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_allbd_done_START     (12)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_allbd_done_END       (12)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_integrity_err_START  (13)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_integrity_err_END    (13)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_bdq_full_START       (16)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_bdq_full_END         (16)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_rdq_full_START       (17)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_rdq_full_END         (17)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_nbd_done_START       (18)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_nbd_done_END         (18)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_bd_done_START        (19)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_bd_done_END          (19)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_allbd_done_START     (20)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_allbd_done_END       (20)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_integrity_err_START  (21)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_integrity_err_END    (21)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_bdq_full_START       (24)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_bdq_full_END         (24)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_rdq_full_START       (25)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_rdq_full_END         (25)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_nbd_done_START       (26)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_nbd_done_END         (26)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_bd_done_START        (27)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_bd_done_END          (27)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_allbd_done_START     (28)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_allbd_done_END       (28)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_integrity_err_START  (29)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_integrity_err_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CIPHER_INT0_MASK_UNION
 �ṹ˵��  : CIPHER_INT0_MASK �Ĵ����ṹ���塣��ַƫ����:0x40C����ֵ:0x0�����:32
 �Ĵ���˵��: cipher�ж����μĴ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int0_mask : 32; /* bit[0-31]: ��cipher_int0_status��λ��Ӧ���ж����μĴ��� */
    } reg;
} SOC_LCIPHER_CIPHER_INT0_MASK_UNION;
#endif
#define SOC_LCIPHER_CIPHER_INT0_MASK_int0_mask_START  (0)
#define SOC_LCIPHER_CIPHER_INT0_MASK_int0_mask_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CIPHER_INT0_MSTATUS_UNION
 �ṹ˵��  : CIPHER_INT0_MSTATUS �Ĵ����ṹ���塣��ַƫ����:0x410����ֵ:0x0�����:32
 �Ĵ���˵��: cipher��������֮����ж�״̬�Ĵ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int0_mstatus : 32; /* bit[0-31]: ��������֮����ж�״̬��д1�����Ӧbit���ɱ���λ�� */
    } reg;
} SOC_LCIPHER_CIPHER_INT0_MSTATUS_UNION;
#endif
#define SOC_LCIPHER_CIPHER_INT0_MSTATUS_int0_mstatus_START  (0)
#define SOC_LCIPHER_CIPHER_INT0_MSTATUS_int0_mstatus_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CIPHER_INT1_STATUS_UNION
 �ṹ˵��  : CIPHER_INT1_STATUS �Ĵ����ṹ���塣��ַƫ����:0x414����ֵ:0xFFFFFFFF�����:32
 �Ĵ���˵��: cipher�жϼĴ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch0_bdq_empty : 1;  /* bit[0]    : ͨ��0 BDQ���жϡ���BDQ��������BD�Ѵ�����ʱ������жϡ� */
        unsigned int  ch0_rdq_empty : 1;  /* bit[1]    : ͨ��0 RDQ���жϡ���RDQ��ʱ������жϡ� */
        unsigned int  ch0_timeout   : 1;  /* bit[2]    : cipherһֱæ��һֱû��BD������ɡ���״̬����cipher���ֹ��ϣ���Ҫ���������λ���� */
        unsigned int  reserved_0    : 5;  /* bit[3-7]  :  */
        unsigned int  ch1_bdq_empty : 1;  /* bit[8]    : ͨ��1 BDQ���жϡ���BDQ��������BD�Ѵ�����ʱ������жϡ� */
        unsigned int  ch1_rdq_empty : 1;  /* bit[9]    : ͨ��1 RDQ���жϡ���RDQ��ʱ������жϡ� */
        unsigned int  ch1_timeout   : 1;  /* bit[10]   : cipherһֱæ��һֱû��BD������ɡ���״̬����cipher���ֹ��ϣ���Ҫ���������λ���� */
        unsigned int  reserved_1    : 5;  /* bit[11-15]:  */
        unsigned int  ch2_bdq_empty : 1;  /* bit[16]   : ͨ��2 BDQ���жϡ���BDQ��������BD�Ѵ�����ʱ������жϡ� */
        unsigned int  ch2_rdq_empty : 1;  /* bit[17]   : ͨ��2 RDQ���жϡ���RDQ��ʱ������жϡ� */
        unsigned int  ch2_timeout   : 1;  /* bit[18]   : cipherһֱæ��һֱû��BD������ɡ���״̬����cipher���ֹ��ϣ���Ҫ���������λ���� */
        unsigned int  reserved_2    : 5;  /* bit[19-23]:  */
        unsigned int  ch3_bdq_empty : 1;  /* bit[24]   : ͨ��3 BDQ���жϡ���BDQ��������BD�Ѵ�����ʱ������жϡ� */
        unsigned int  ch3_rdq_empty : 1;  /* bit[25]   : ͨ��3 RDQ���жϡ���RDQ��ʱ������жϡ� */
        unsigned int  ch3_timeout   : 1;  /* bit[26]   : cipherһֱæ��һֱû��BD������ɡ���״̬����cipher���ֹ��ϣ���Ҫ���������λ���� */
        unsigned int  reserved_3    : 5;  /* bit[27-31]: ��������״̬�Ĵ����ɱ���λ */
    } reg;
} SOC_LCIPHER_CIPHER_INT1_STATUS_UNION;
#endif
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch0_bdq_empty_START  (0)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch0_bdq_empty_END    (0)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch0_rdq_empty_START  (1)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch0_rdq_empty_END    (1)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch0_timeout_START    (2)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch0_timeout_END      (2)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch1_bdq_empty_START  (8)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch1_bdq_empty_END    (8)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch1_rdq_empty_START  (9)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch1_rdq_empty_END    (9)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch1_timeout_START    (10)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch1_timeout_END      (10)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch2_bdq_empty_START  (16)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch2_bdq_empty_END    (16)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch2_rdq_empty_START  (17)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch2_rdq_empty_END    (17)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch2_timeout_START    (18)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch2_timeout_END      (18)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch3_bdq_empty_START  (24)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch3_bdq_empty_END    (24)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch3_rdq_empty_START  (25)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch3_rdq_empty_END    (25)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch3_timeout_START    (26)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch3_timeout_END      (26)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CIPHER_INT1_MASK_UNION
 �ṹ˵��  : CIPHER_INT1_MASK �Ĵ����ṹ���塣��ַƫ����:0x418����ֵ:0xFFFFFFFF�����:32
 �Ĵ���˵��: cipher�ж����μĴ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int1_mask : 32; /* bit[0-31]: ��cipher_int1_status��λ��Ӧ���ж����μĴ��� */
    } reg;
} SOC_LCIPHER_CIPHER_INT1_MASK_UNION;
#endif
#define SOC_LCIPHER_CIPHER_INT1_MASK_int1_mask_START  (0)
#define SOC_LCIPHER_CIPHER_INT1_MASK_int1_mask_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CIPHER_INT1_MSTATUS_UNION
 �ṹ˵��  : CIPHER_INT1_MSTATUS �Ĵ����ṹ���塣��ַƫ����:0x41C����ֵ:0x0�����:32
 �Ĵ���˵��: cipher��������֮����ж�״̬�Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int1_mstatus : 32; /* bit[0-31]: ��������֮����ж�״̬��д1�����Ӧbit���ɱ���λ�� */
    } reg;
} SOC_LCIPHER_CIPHER_INT1_MSTATUS_UNION;
#endif
#define SOC_LCIPHER_CIPHER_INT1_MSTATUS_int1_mstatus_START  (0)
#define SOC_LCIPHER_CIPHER_INT1_MSTATUS_int1_mstatus_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CIPHER_INT2_STATUS_UNION
 �ṹ˵��  : CIPHER_INT2_STATUS �Ĵ����ṹ���塣��ַƫ����:0x420����ֵ:0x60�����:32
 �Ĵ���˵��: cipher�жϼĴ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch4_bdq_full   : 1;  /* bit[0]   : ͨ��4 BDQ���жϡ���BDQ��ʱ������жϡ� */
        unsigned int  ch4_rdq_full   : 1;  /* bit[1]   : ͨ��4 RDQ���жϡ���RDQ��ʱ������жϡ� */
        unsigned int  ch4_nbd_done   : 1;  /* bit[2]   : ͨ��4�����������ĿN��BD֮��������жϡ�N��ֵ��CH0_INT_PKT_INTERVAL�� */
        unsigned int  ch4_bd_done    : 1;  /* bit[3]   : ͨ��4��BD��gen_int_enΪ1ʱ���ڵ�ǰBD�Ĳ�����ɺ�������жϡ� */
        unsigned int  ch4_allbd_done : 1;  /* bit[4]   : ͨ��4��BDQ�����һ��BD������ɺ�������жϡ� */
        unsigned int  ch4_bdq_empty  : 1;  /* bit[5]   : ͨ��4 BDQ���жϡ���BDQ��������BD�Ѵ�����ʱ������жϡ� */
        unsigned int  ch4_rdq_empty  : 1;  /* bit[6]   : ͨ��4 RDQ���жϡ���RDQ��ʱ������жϡ� */
        unsigned int  ch4_timeout    : 1;  /* bit[7]   : cipherһֱæ��һֱû��BD������ɡ���״̬����cipher���ֹ��ϣ���Ҫ���������λ���� */
        unsigned int  reserved       : 24; /* bit[8-31]: ��������״̬�Ĵ����ɱ���λ */
    } reg;
} SOC_LCIPHER_CIPHER_INT2_STATUS_UNION;
#endif
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_bdq_full_START    (0)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_bdq_full_END      (0)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_rdq_full_START    (1)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_rdq_full_END      (1)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_nbd_done_START    (2)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_nbd_done_END      (2)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_bd_done_START     (3)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_bd_done_END       (3)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_allbd_done_START  (4)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_allbd_done_END    (4)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_bdq_empty_START   (5)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_bdq_empty_END     (5)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_rdq_empty_START   (6)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_rdq_empty_END     (6)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_timeout_START     (7)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_timeout_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CIPHER_INT2_MASK_UNION
 �ṹ˵��  : CIPHER_INT2_MASK �Ĵ����ṹ���塣��ַƫ����:0x424����ֵ:0x60�����:32
 �Ĵ���˵��: cipher�ж����μĴ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ��cipher_int2_status��λ��Ӧ���ж����μĴ��� */
    } reg;
} SOC_LCIPHER_CIPHER_INT2_MASK_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CIPHER_INT2_MSTATUS_UNION
 �ṹ˵��  : CIPHER_INT2_MSTATUS �Ĵ����ṹ���塣��ַƫ����:0x428����ֵ:0x0�����:32
 �Ĵ���˵��: cipher��������֮����ж�״̬�Ĵ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ��������֮����ж�״̬��д1�����Ӧbit���ɱ���λ�� */
    } reg;
} SOC_LCIPHER_CIPHER_INT2_MSTATUS_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH0_RDQ_BADDR_UNION
 �ṹ˵��  : CH0_RDQ_BADDR �Ĵ����ṹ���塣��ַƫ����:0x480����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��0 RD���л���ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  base_addr_l : 3;  /* bit[0-2] : ͨ��0 RD���л���ַ��3bit���̶�Ϊ0����Ҫ���ַ64λ���롣 */
        unsigned int  base_addr   : 29; /* bit[3-31]: ͨ��0 RD���л���ַ��29λ */
    } reg;
} SOC_LCIPHER_CH0_RDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH0_RDQ_BADDR_base_addr_l_START  (0)
#define SOC_LCIPHER_CH0_RDQ_BADDR_base_addr_l_END    (2)
#define SOC_LCIPHER_CH0_RDQ_BADDR_base_addr_START    (3)
#define SOC_LCIPHER_CH0_RDQ_BADDR_base_addr_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH0_RDQ_SIZE_UNION
 �ṹ˵��  : CH0_RDQ_SIZE �Ĵ����ṹ���塣��ַƫ����:0x484����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��0 RD���д�С
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  size     : 10; /* bit[0-9]  : ͨ��0 RD Queue��С��������������Ϊ��λ������
                                                    0����ʾ���д�СΪ1
                                                    1023����ʾ���д�СΪ1024 */
        unsigned int  reserved : 22; /* bit[10-31]: ��Ա˵���� */
    } reg;
} SOC_LCIPHER_CH0_RDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH0_RDQ_SIZE_size_START      (0)
#define SOC_LCIPHER_CH0_RDQ_SIZE_size_END        (9)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH0_RDQ_PTR_UNION
 �ṹ˵��  : CH0_RDQ_PTR �Ĵ����ṹ���塣��ַƫ����:0x488����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��0 RD���еĶ�дָ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wptr     : 10; /* bit[0-9]  : RD����дָ�롣�ɱ���λ */
        unsigned int  reserved_0: 6;  /* bit[10-15]: ���� */
        unsigned int  rptr     : 10; /* bit[16-25]: RD���ж�ָ�롣�ɱ���λ */
        unsigned int  reserved_1: 6;  /* bit[26-31]: ������ */
    } reg;
} SOC_LCIPHER_CH0_RDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH0_RDQ_PTR_wptr_START      (0)
#define SOC_LCIPHER_CH0_RDQ_PTR_wptr_END        (9)
#define SOC_LCIPHER_CH0_RDQ_PTR_rptr_START      (16)
#define SOC_LCIPHER_CH0_RDQ_PTR_rptr_END        (25)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH0_RDQ_RADDR_UNION
 �ṹ˵��  : CH0_RDQ_RADDR �Ĵ����ṹ���塣��ַƫ����:0x48C����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��0 RD���еĶ���ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  raddr : 32; /* bit[0-31]: ͨ��0 RD���ж���ַ���ɱ���λ */
    } reg;
} SOC_LCIPHER_CH0_RDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH0_RDQ_RADDR_raddr_START  (0)
#define SOC_LCIPHER_CH0_RDQ_RADDR_raddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH0_RDQ_WADDR_UNION
 �ṹ˵��  : CH0_RDQ_WADDR �Ĵ����ṹ���塣��ַƫ����:0x490����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��0 RD���е�д��ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  waddr : 32; /* bit[0-31]: ͨ��0 RD����д��ַ���ɱ���λ */
    } reg;
} SOC_LCIPHER_CH0_RDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH0_RDQ_WADDR_waddr_START  (0)
#define SOC_LCIPHER_CH0_RDQ_WADDR_waddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH1_RDQ_BADDR_UNION
 �ṹ˵��  : CH1_RDQ_BADDR �Ĵ����ṹ���塣��ַƫ����:0x500����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��1 RD���л���ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  base_addr_l : 3;  /* bit[0-2] : ͨ��0 RD���л���ַ��3bit���̶�Ϊ0����Ҫ���ַ64λ���롣 */
        unsigned int  base_addr   : 29; /* bit[3-31]: ͨ��1 RD���л���ַ��29λ */
    } reg;
} SOC_LCIPHER_CH1_RDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH1_RDQ_BADDR_base_addr_l_START  (0)
#define SOC_LCIPHER_CH1_RDQ_BADDR_base_addr_l_END    (2)
#define SOC_LCIPHER_CH1_RDQ_BADDR_base_addr_START    (3)
#define SOC_LCIPHER_CH1_RDQ_BADDR_base_addr_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH1_RDQ_SIZE_UNION
 �ṹ˵��  : CH1_RDQ_SIZE �Ĵ����ṹ���塣��ַƫ����:0x504����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��1 RD���д�С
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  size     : 10; /* bit[0-9]  : ͨ��0 RD Queue��С��������������Ϊ��λ������
                                                    0����ʾ���д�СΪ1
                                                    1023����ʾ���д�СΪ1024 */
        unsigned int  reserved : 22; /* bit[10-31]: ��Ա˵���� */
    } reg;
} SOC_LCIPHER_CH1_RDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH1_RDQ_SIZE_size_START      (0)
#define SOC_LCIPHER_CH1_RDQ_SIZE_size_END        (9)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH1_RDQ_PTR_UNION
 �ṹ˵��  : CH1_RDQ_PTR �Ĵ����ṹ���塣��ַƫ����:0x508����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��1 RD���еĶ�дָ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wptr     : 10; /* bit[0-9]  : RD����дָ�롣�ɱ���λ */
        unsigned int  reserved_0: 6;  /* bit[10-15]: ���� */
        unsigned int  rptr     : 10; /* bit[16-25]: RD���ж�ָ�롣�ɱ���λ */
        unsigned int  reserved_1: 6;  /* bit[26-31]: ������ */
    } reg;
} SOC_LCIPHER_CH1_RDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH1_RDQ_PTR_wptr_START      (0)
#define SOC_LCIPHER_CH1_RDQ_PTR_wptr_END        (9)
#define SOC_LCIPHER_CH1_RDQ_PTR_rptr_START      (16)
#define SOC_LCIPHER_CH1_RDQ_PTR_rptr_END        (25)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH1_RDQ_RADDR_UNION
 �ṹ˵��  : CH1_RDQ_RADDR �Ĵ����ṹ���塣��ַƫ����:0x50C����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��1 RD���еĶ���ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  raddr : 32; /* bit[0-31]: ͨ��1 RD���ж���ַ���ɱ���λ */
    } reg;
} SOC_LCIPHER_CH1_RDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH1_RDQ_RADDR_raddr_START  (0)
#define SOC_LCIPHER_CH1_RDQ_RADDR_raddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH1_RDQ_WADDR_UNION
 �ṹ˵��  : CH1_RDQ_WADDR �Ĵ����ṹ���塣��ַƫ����:0x510����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��1 RD���е�д��ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  waddr : 32; /* bit[0-31]: ͨ��1 RD����д��ַ���ɱ���λ */
    } reg;
} SOC_LCIPHER_CH1_RDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH1_RDQ_WADDR_waddr_START  (0)
#define SOC_LCIPHER_CH1_RDQ_WADDR_waddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH2_RDQ_BADDR_UNION
 �ṹ˵��  : CH2_RDQ_BADDR �Ĵ����ṹ���塣��ַƫ����:0x580����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��2 RD���л���ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  base_addr_l : 3;  /* bit[0-2] : ͨ��0 RD���л���ַ��3bit���̶�Ϊ0����Ҫ���ַ64λ���롣 */
        unsigned int  base_addr   : 29; /* bit[3-31]: ͨ��2 RD���л���ַ��29λ */
    } reg;
} SOC_LCIPHER_CH2_RDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH2_RDQ_BADDR_base_addr_l_START  (0)
#define SOC_LCIPHER_CH2_RDQ_BADDR_base_addr_l_END    (2)
#define SOC_LCIPHER_CH2_RDQ_BADDR_base_addr_START    (3)
#define SOC_LCIPHER_CH2_RDQ_BADDR_base_addr_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH2_RDQ_SIZE_UNION
 �ṹ˵��  : CH2_RDQ_SIZE �Ĵ����ṹ���塣��ַƫ����:0x584����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��2 RD���д�С
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  size     : 10; /* bit[0-9]  : ͨ��0 RD Queue��С��������������Ϊ��λ������
                                                    0����ʾ���д�СΪ1
                                                    1023����ʾ���д�СΪ1024 */
        unsigned int  reserved : 22; /* bit[10-31]: ��Ա˵���� */
    } reg;
} SOC_LCIPHER_CH2_RDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH2_RDQ_SIZE_size_START      (0)
#define SOC_LCIPHER_CH2_RDQ_SIZE_size_END        (9)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH2_RDQ_PTR_UNION
 �ṹ˵��  : CH2_RDQ_PTR �Ĵ����ṹ���塣��ַƫ����:0x588����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��2 RD���еĶ�дָ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wptr     : 10; /* bit[0-9]  : RD����дָ�롣�ɱ���λ */
        unsigned int  reserved_0: 6;  /* bit[10-15]: ���� */
        unsigned int  rptr     : 10; /* bit[16-25]: RD���ж�ָ�롣�ɱ���λ */
        unsigned int  reserved_1: 6;  /* bit[26-31]: ������ */
    } reg;
} SOC_LCIPHER_CH2_RDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH2_RDQ_PTR_wptr_START      (0)
#define SOC_LCIPHER_CH2_RDQ_PTR_wptr_END        (9)
#define SOC_LCIPHER_CH2_RDQ_PTR_rptr_START      (16)
#define SOC_LCIPHER_CH2_RDQ_PTR_rptr_END        (25)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH2_RDQ_RADDR_UNION
 �ṹ˵��  : CH2_RDQ_RADDR �Ĵ����ṹ���塣��ַƫ����:0x58C����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��2 RD���еĶ���ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  raddr : 32; /* bit[0-31]: ͨ��2 RD���ж���ַ���ɱ���λ */
    } reg;
} SOC_LCIPHER_CH2_RDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH2_RDQ_RADDR_raddr_START  (0)
#define SOC_LCIPHER_CH2_RDQ_RADDR_raddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH2_RDQ_WADDR_UNION
 �ṹ˵��  : CH2_RDQ_WADDR �Ĵ����ṹ���塣��ַƫ����:0x590����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��2 RD���е�д��ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  waddr : 32; /* bit[0-31]: ͨ��2 RD����д��ַ���ɱ���λ */
    } reg;
} SOC_LCIPHER_CH2_RDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH2_RDQ_WADDR_waddr_START  (0)
#define SOC_LCIPHER_CH2_RDQ_WADDR_waddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH3_RDQ_BADDR_UNION
 �ṹ˵��  : CH3_RDQ_BADDR �Ĵ����ṹ���塣��ַƫ����:0x600����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��3 RD���л���ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  base_addr_l : 3;  /* bit[0-2] : ͨ��0 RD���л���ַ��3bit���̶�Ϊ0����Ҫ���ַ64λ���롣 */
        unsigned int  base_addr   : 29; /* bit[3-31]: ͨ��3 RD���л���ַ��29λ */
    } reg;
} SOC_LCIPHER_CH3_RDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH3_RDQ_BADDR_base_addr_l_START  (0)
#define SOC_LCIPHER_CH3_RDQ_BADDR_base_addr_l_END    (2)
#define SOC_LCIPHER_CH3_RDQ_BADDR_base_addr_START    (3)
#define SOC_LCIPHER_CH3_RDQ_BADDR_base_addr_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH3_RDQ_SIZE_UNION
 �ṹ˵��  : CH3_RDQ_SIZE �Ĵ����ṹ���塣��ַƫ����:0x604����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��3 RD���д�С
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  size     : 10; /* bit[0-9]  : ͨ��0 RD Queue��С��������������Ϊ��λ������
                                                    0����ʾ���д�СΪ1
                                                    1023����ʾ���д�СΪ1024 */
        unsigned int  reserved : 22; /* bit[10-31]: ��Ա˵���� */
    } reg;
} SOC_LCIPHER_CH3_RDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH3_RDQ_SIZE_size_START      (0)
#define SOC_LCIPHER_CH3_RDQ_SIZE_size_END        (9)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH3_RDQ_PTR_UNION
 �ṹ˵��  : CH3_RDQ_PTR �Ĵ����ṹ���塣��ַƫ����:0x608����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��3 RD���еĶ�дָ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wptr     : 10; /* bit[0-9]  : RD����дָ�롣�ɱ���λ */
        unsigned int  reserved_0: 6;  /* bit[10-15]: ���� */
        unsigned int  rptr     : 10; /* bit[16-25]: RD���ж�ָ�롣�ɱ���λ */
        unsigned int  reserved_1: 6;  /* bit[26-31]: ������ */
    } reg;
} SOC_LCIPHER_CH3_RDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH3_RDQ_PTR_wptr_START      (0)
#define SOC_LCIPHER_CH3_RDQ_PTR_wptr_END        (9)
#define SOC_LCIPHER_CH3_RDQ_PTR_rptr_START      (16)
#define SOC_LCIPHER_CH3_RDQ_PTR_rptr_END        (25)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH3_RDQ_RADDR_UNION
 �ṹ˵��  : CH3_RDQ_RADDR �Ĵ����ṹ���塣��ַƫ����:0x60C����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��3 RD���еĶ���ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  raddr : 32; /* bit[0-31]: ͨ��3 RD���ж���ַ���ɱ���λ�� */
    } reg;
} SOC_LCIPHER_CH3_RDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH3_RDQ_RADDR_raddr_START  (0)
#define SOC_LCIPHER_CH3_RDQ_RADDR_raddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH3_RDQ_WADDR_UNION
 �ṹ˵��  : CH3_RDQ_WADDR �Ĵ����ṹ���塣��ַƫ����:0x610����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��3 RD���е�д��ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  waddr : 32; /* bit[0-31]: ͨ��3 RD����д��ַ���ɱ���λ�� */
    } reg;
} SOC_LCIPHER_CH3_RDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH3_RDQ_WADDR_waddr_START  (0)
#define SOC_LCIPHER_CH3_RDQ_WADDR_waddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH4_RDQ_BADDR_UNION
 �ṹ˵��  : CH4_RDQ_BADDR �Ĵ����ṹ���塣��ַƫ����:0x680����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��4 RD���л���ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  base_addr_l : 3;  /* bit[0-2] : ͨ��0 RD���л���ַ��3bit���̶�Ϊ0����Ҫ���ַ64λ���롣 */
        unsigned int  base_addr   : 29; /* bit[3-31]: ͨ��4 RD���л���ַ��29λ */
    } reg;
} SOC_LCIPHER_CH4_RDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH4_RDQ_BADDR_base_addr_l_START  (0)
#define SOC_LCIPHER_CH4_RDQ_BADDR_base_addr_l_END    (2)
#define SOC_LCIPHER_CH4_RDQ_BADDR_base_addr_START    (3)
#define SOC_LCIPHER_CH4_RDQ_BADDR_base_addr_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH4_RDQ_SIZE_UNION
 �ṹ˵��  : CH4_RDQ_SIZE �Ĵ����ṹ���塣��ַƫ����:0x684����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��4 RD���д�С
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  size     : 10; /* bit[0-9]  : ͨ��0 RD Queue��С��������������Ϊ��λ������
                                                    0����ʾ���д�СΪ1
                                                    1023����ʾ���д�СΪ1024 */
        unsigned int  reserved : 22; /* bit[10-31]: ��Ա˵���� */
    } reg;
} SOC_LCIPHER_CH4_RDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH4_RDQ_SIZE_size_START      (0)
#define SOC_LCIPHER_CH4_RDQ_SIZE_size_END        (9)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH4_RDQ_PTR_UNION
 �ṹ˵��  : CH4_RDQ_PTR �Ĵ����ṹ���塣��ַƫ����:0x688����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��4 RD���еĶ�дָ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wptr     : 10; /* bit[0-9]  : RD����дָ�롣�ɱ���λ */
        unsigned int  reserved_0: 6;  /* bit[10-15]: ���� */
        unsigned int  rptr     : 10; /* bit[16-25]: RD���ж�ָ�롣�ɱ���λ */
        unsigned int  reserved_1: 6;  /* bit[26-31]: ������ */
    } reg;
} SOC_LCIPHER_CH4_RDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH4_RDQ_PTR_wptr_START      (0)
#define SOC_LCIPHER_CH4_RDQ_PTR_wptr_END        (9)
#define SOC_LCIPHER_CH4_RDQ_PTR_rptr_START      (16)
#define SOC_LCIPHER_CH4_RDQ_PTR_rptr_END        (25)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH4_RDQ_RADDR_UNION
 �ṹ˵��  : CH4_RDQ_RADDR �Ĵ����ṹ���塣��ַƫ����:0x68C����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��4 RD���еĶ���ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  raddr : 32; /* bit[0-31]: ͨ��4 RD���ж���ַ���ɱ���λ */
    } reg;
} SOC_LCIPHER_CH4_RDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH4_RDQ_RADDR_raddr_START  (0)
#define SOC_LCIPHER_CH4_RDQ_RADDR_raddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_LCIPHER_CH4_RDQ_WADDR_UNION
 �ṹ˵��  : CH4_RDQ_WADDR �Ĵ����ṹ���塣��ַƫ����:0x690����ֵ:0x0�����:32
 �Ĵ���˵��: ͨ��4 RD���е�д��ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  waddr : 32; /* bit[0-31]: ͨ��4 RD����д��ַ���ɱ���λ */
    } reg;
} SOC_LCIPHER_CH4_RDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH4_RDQ_WADDR_waddr_START  (0)
#define SOC_LCIPHER_CH4_RDQ_WADDR_waddr_END    (31)






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

#endif /* end of soc_lcipher_interface.h */
