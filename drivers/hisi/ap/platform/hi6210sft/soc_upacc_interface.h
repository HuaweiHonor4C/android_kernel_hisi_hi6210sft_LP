

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_UPACC_INTERFACE_H__
#define __SOC_UPACC_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/1) UPACC
 ****************************************************************************/
/* �Ĵ���˵������װ�����Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_MAC_ENCAP_START_UNION */
#define SOC_UPACC_MAC_ENCAP_START_ADDR(base)          ((base) + (0x0000))

/* �Ĵ���˵�����߼��ŵ������Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH_NUM_UNION */
#define SOC_UPACC_LOCH_NUM_ADDR(base)                 ((base) + (0x0004))

/* �Ĵ���˵����DDI0ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_UPACC_DDI0_EN_UNION */
#define SOC_UPACC_DDI0_EN_ADDR(base)                  ((base) + (0x0008))

/* �Ĵ���˵����SIʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_UPACC_SI_EN_UNION */
#define SOC_UPACC_SI_EN_ADDR(base)                    ((base) + (0x000C))

/* �Ĵ���˵����SI���ݼĴ�����
   λ����UNION�ṹ:  SOC_UPACC_SI_DATA_UNION */
#define SOC_UPACC_SI_DATA_ADDR(base)                  ((base) + (0x0010))

/* �Ĵ���˵����padding���ȼĴ�����
   λ����UNION�ṹ:  SOC_UPACC_PADDING_LENGTH_UNION */
#define SOC_UPACC_PADDING_LENGTH_ADDR(base)           ((base) + (0x0014))

/* �Ĵ���˵������װĿ���ַ��������ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_ENCAP_TRANS_ADDR_UNION */
#define SOC_UPACC_ENCAP_TRANS_ADDR_ADDR(base)         ((base) + (0x0018))

/* �Ĵ���˵�������˸������üĴ�����
   λ����UNION�ṹ:  SOC_UPACC_TRANS_NUM_UNION */
#define SOC_UPACC_TRANS_NUM_ADDR(base)                ((base) + (0x001C))

/* �Ĵ���˵��������Ŀ���ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_BBP_DEST_ADDR_UNION */
#define SOC_UPACC_BBP_DEST_ADDR_ADDR(base)            ((base) + (0x0020))

/* �Ĵ���˵�����ж�ʹ�ܼĴ�����BitֵΪ0��ʾ�жϽ�ֹ��ֵΪ1��ʾ�ж�ʹ�ܡ�
   λ����UNION�ṹ:  SOC_UPACC_INT_EN_UNION */
#define SOC_UPACC_INT_EN_ADDR(base)                   ((base) + (0x0024))

/* �Ĵ���˵����ԭʼ�ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_INT_RAW_UNION */
#define SOC_UPACC_INT_RAW_ADDR(base)                  ((base) + (0x0028))

/* �Ĵ���˵�������κ��ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_INT_MASK_UNION */
#define SOC_UPACC_INT_MASK_ADDR(base)                 ((base) + (0x002C))

/* �Ĵ���˵�����ж�����Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_INT_CLR_UNION */
#define SOC_UPACC_INT_CLR_ADDR(base)                  ((base) + (0x0030))

/* �Ĵ���˵��������ERROR��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_BUS_ERROR_ADDR_UNION */
#define SOC_UPACC_BUS_ERROR_ADDR_ADDR(base)           ((base) + (0x0034))

/* �Ĵ���˵�����߼��ŵ�1�������üĴ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH1_PARAM_UNION */
#define SOC_UPACC_LOCH1_PARAM_ADDR(base)              ((base) + (0x0038))

/* �Ĵ���˵�����߼��ŵ�2�������üĴ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH2_PARAM_UNION */
#define SOC_UPACC_LOCH2_PARAM_ADDR(base)              ((base) + (0x003C))

/* �Ĵ���˵�����߼��ŵ�1�������üĴ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH3_PARAM_UNION */
#define SOC_UPACC_LOCH3_PARAM_ADDR(base)              ((base) + (0x0040))

/* �Ĵ���˵�����߼��ŵ�1�������üĴ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH4_PARAM_UNION */
#define SOC_UPACC_LOCH4_PARAM_ADDR(base)              ((base) + (0x0044))

/* �Ĵ���˵�����߼��ŵ�1�������üĴ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH5_PARAM_UNION */
#define SOC_UPACC_LOCH5_PARAM_ADDR(base)              ((base) + (0x0048))

/* �Ĵ���˵�����߼��ŵ�1�������üĴ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH6_PARAM_UNION */
#define SOC_UPACC_LOCH6_PARAM_ADDR(base)              ((base) + (0x004C))

/* �Ĵ���˵�����߼��ŵ�1�������üĴ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH7_PARAM_UNION */
#define SOC_UPACC_LOCH7_PARAM_ADDR(base)              ((base) + (0x0050))

/* �Ĵ���˵�����߼��ŵ�1�������üĴ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH8_PARAM_UNION */
#define SOC_UPACC_LOCH8_PARAM_ADDR(base)              ((base) + (0x0054))

/* �Ĵ���˵�����߼��ŵ�1��ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH1_START_ADDR_UNION */
#define SOC_UPACC_LOCH1_START_ADDR_ADDR(base)         ((base) + (0x0058))

/* �Ĵ���˵�����߼��ŵ�2��ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH2_START_ADDR_UNION */
#define SOC_UPACC_LOCH2_START_ADDR_ADDR(base)         ((base) + (0x005C))

/* �Ĵ���˵�����߼��ŵ�3��ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH3_START_ADDR_UNION */
#define SOC_UPACC_LOCH3_START_ADDR_ADDR(base)         ((base) + (0x0060))

/* �Ĵ���˵�����߼��ŵ�4��ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH4_START_ADDR_UNION */
#define SOC_UPACC_LOCH4_START_ADDR_ADDR(base)         ((base) + (0x0064))

/* �Ĵ���˵�����߼��ŵ�5��ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH5_START_ADDR_UNION */
#define SOC_UPACC_LOCH5_START_ADDR_ADDR(base)         ((base) + (0x0068))

/* �Ĵ���˵�����߼��ŵ�6��ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH6_START_ADDR_UNION */
#define SOC_UPACC_LOCH6_START_ADDR_ADDR(base)         ((base) + (0x006C))

/* �Ĵ���˵�����߼��ŵ�7��ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH7_START_ADDR_UNION */
#define SOC_UPACC_LOCH7_START_ADDR_ADDR(base)         ((base) + (0x0070))

/* �Ĵ���˵�����߼��ŵ�8��ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH8_START_ADDR_UNION */
#define SOC_UPACC_LOCH8_START_ADDR_ADDR(base)         ((base) + (0x0074))

/* �Ĵ���˵�����߼��ŵ�1������ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH1_END_ADDR_UNION */
#define SOC_UPACC_LOCH1_END_ADDR_ADDR(base)           ((base) + (0x0078))

/* �Ĵ���˵�����߼��ŵ�2������ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH2_END_ADDR_UNION */
#define SOC_UPACC_LOCH2_END_ADDR_ADDR(base)           ((base) + (0x007C))

/* �Ĵ���˵�����߼��ŵ�3������ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH3_END_ADDR_UNION */
#define SOC_UPACC_LOCH3_END_ADDR_ADDR(base)           ((base) + (0x0080))

/* �Ĵ���˵�����߼��ŵ�4������ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH4_END_ADDR_UNION */
#define SOC_UPACC_LOCH4_END_ADDR_ADDR(base)           ((base) + (0x0084))

/* �Ĵ���˵�����߼��ŵ�5������ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH5_END_ADDR_UNION */
#define SOC_UPACC_LOCH5_END_ADDR_ADDR(base)           ((base) + (0x0088))

/* �Ĵ���˵�����߼��ŵ�6������ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH6_END_ADDR_UNION */
#define SOC_UPACC_LOCH6_END_ADDR_ADDR(base)           ((base) + (0x008C))

/* �Ĵ���˵�����߼��ŵ�7������ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH7_END_ADDR_UNION */
#define SOC_UPACC_LOCH7_END_ADDR_ADDR(base)           ((base) + (0x0090))

/* �Ĵ���˵�����߼��ŵ�8������ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH8_END_ADDR_UNION */
#define SOC_UPACC_LOCH8_END_ADDR_ADDR(base)           ((base) + (0x0094))

/* �Ĵ���˵�����߼��ŵ�1����ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH1_READ_ADDR_UNION */
#define SOC_UPACC_LOCH1_READ_ADDR_ADDR(base)          ((base) + (0x0098))

/* �Ĵ���˵�����߼��ŵ�2����ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH2_READ_ADDR_UNION */
#define SOC_UPACC_LOCH2_READ_ADDR_ADDR(base)          ((base) + (0x009C))

/* �Ĵ���˵�����߼��ŵ�3����ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH3_READ_ADDR_UNION */
#define SOC_UPACC_LOCH3_READ_ADDR_ADDR(base)          ((base) + (0x00A0))

/* �Ĵ���˵�����߼��ŵ�4����ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH4_READ_ADDR_UNION */
#define SOC_UPACC_LOCH4_READ_ADDR_ADDR(base)          ((base) + (0x00A4))

/* �Ĵ���˵�����߼��ŵ�5����ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH5_READ_ADDR_UNION */
#define SOC_UPACC_LOCH5_READ_ADDR_ADDR(base)          ((base) + (0x00A8))

/* �Ĵ���˵�����߼��ŵ�6����ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH6_READ_ADDR_UNION */
#define SOC_UPACC_LOCH6_READ_ADDR_ADDR(base)          ((base) + (0x00AC))

/* �Ĵ���˵�����߼��ŵ�7����ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH7_READ_ADDR_UNION */
#define SOC_UPACC_LOCH7_READ_ADDR_ADDR(base)          ((base) + (0x00B0))

/* �Ĵ���˵�����߼��ŵ�8����ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH8_READ_ADDR_UNION */
#define SOC_UPACC_LOCH8_READ_ADDR_ADDR(base)          ((base) + (0x00B4))

/* �Ĵ���˵�����߼��ŵ�1��������ظ����Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH1_NUM_CFG_UNION */
#define SOC_UPACC_LOCH1_NUM_CFG_ADDR(base)            ((base) + (0x00B8))

/* �Ĵ���˵�����߼��ŵ�2��������ظ����Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH2_NUM_CFG_UNION */
#define SOC_UPACC_LOCH2_NUM_CFG_ADDR(base)            ((base) + (0x00BC))

/* �Ĵ���˵�����߼��ŵ�3��������ظ����Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH3_NUM_CFG_UNION */
#define SOC_UPACC_LOCH3_NUM_CFG_ADDR(base)            ((base) + (0x00C0))

/* �Ĵ���˵�����߼��ŵ�4��������ظ����Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH4_NUM_CFG_UNION */
#define SOC_UPACC_LOCH4_NUM_CFG_ADDR(base)            ((base) + (0x00C4))

/* �Ĵ���˵�����߼��ŵ�5��������ظ����Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH5_NUM_CFG_UNION */
#define SOC_UPACC_LOCH5_NUM_CFG_ADDR(base)            ((base) + (0x00C8))

/* �Ĵ���˵�����߼��ŵ�6��������ظ����Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH6_NUM_CFG_UNION */
#define SOC_UPACC_LOCH6_NUM_CFG_ADDR(base)            ((base) + (0x00CC))

/* �Ĵ���˵�����߼��ŵ�7��������ظ����Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH7_NUM_CFG_UNION */
#define SOC_UPACC_LOCH7_NUM_CFG_ADDR(base)            ((base) + (0x00D0))

/* �Ĵ���˵�����߼��ŵ�8��������ظ����Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH8_NUM_CFG_UNION */
#define SOC_UPACC_LOCH8_NUM_CFG_ADDR(base)            ((base) + (0x00D4))

/* �Ĵ���˵����ģ��ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_UPACC_EN_UNION */
#define SOC_UPACC_EN_ADDR(base)                       ((base) + (0x00D8))

/* �Ĵ���˵����Mac-e PDUԴ�������鷽ʽ����ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_UPACC_PDUARY_EN_E_UNION */
#define SOC_UPACC_PDUARY_EN_E_ADDR(base)              ((base) + (0x00DC))

/* �Ĵ���˵�����߼��ŵ�1�д���ȡMac-e PDUԴ���������׵�ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH1_PDUARY_ADDR_UNION */
#define SOC_UPACC_LOCH1_PDUARY_ADDR_ADDR(base)        ((base) + (0x00E0))

/* �Ĵ���˵�����߼��ŵ�2�д���ȡMac-e PDUԴ���������׵�ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH2_PDUARY_ADDR_UNION */
#define SOC_UPACC_LOCH2_PDUARY_ADDR_ADDR(base)        ((base) + (0x00E4))

/* �Ĵ���˵�����߼��ŵ�3�д���ȡMac-e PDUԴ���������׵�ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH3_PDUARY_ADDR_UNION */
#define SOC_UPACC_LOCH3_PDUARY_ADDR_ADDR(base)        ((base) + (0x00E8))

/* �Ĵ���˵�����߼��ŵ�4�д���ȡMac-e PDUԴ���������׵�ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH4_PDUARY_ADDR_UNION */
#define SOC_UPACC_LOCH4_PDUARY_ADDR_ADDR(base)        ((base) + (0x00EC))

/* �Ĵ���˵�����߼��ŵ�5�д���ȡMac-e PDUԴ���������׵�ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH5_PDUARY_ADDR_UNION */
#define SOC_UPACC_LOCH5_PDUARY_ADDR_ADDR(base)        ((base) + (0x00F0))

/* �Ĵ���˵�����߼��ŵ�6�д���ȡMac-e PDUԴ���������׵�ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH6_PDUARY_ADDR_UNION */
#define SOC_UPACC_LOCH6_PDUARY_ADDR_ADDR(base)        ((base) + (0x00F4))

/* �Ĵ���˵�����߼��ŵ�7�д���ȡMac-e PDUԴ���������׵�ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH7_PDUARY_ADDR_UNION */
#define SOC_UPACC_LOCH7_PDUARY_ADDR_ADDR(base)        ((base) + (0x00F8))

/* �Ĵ���˵�����߼��ŵ�8�д���ȡMac-e PDUԴ���������׵�ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_LOCH8_PDUARY_ADDR_UNION */
#define SOC_UPACC_LOCH8_PDUARY_ADDR_ADDR(base)        ((base) + (0x00FC))

/* �Ĵ���˵����������ʽ���üĴ�������������MAC_i/is PDU��װ��������ʽ��
            UPACCV200֧�ֶ�MAC-i/is PDU ���в���װֻ���ƺͷ�װ�Ұ�������������ʽ��
   λ����UNION�ṹ:  SOC_UPACC_MAC_ENCAP_START_I1_UNION */
#define SOC_UPACC_MAC_ENCAP_START_I1_ADDR(base)       ((base) + (0x0100))

/* �Ĵ���˵�����߼��ŵ������Ĵ���������ָʾ���η�װMAC-i/is PDU����Ӽ����߼��ŵ��ж�ȡ���ݡ����üĴ�����������Ϊ0����ʾ��ǰMAC-i/is PDU����SI��ɣ�û���������ݺͲ�������ΪSI�������͡�
   λ����UNION�ṹ:  SOC_UPACC_LOCH_NUM_I1_UNION */
#define SOC_UPACC_LOCH_NUM_I1_ADDR(base)              ((base) + (0x0104))

/* �Ĵ���˵����MAC-i header0ʹ�ܼĴ���������ָʾ���η�װ��MAC-i/is PDU���Ƿ����header0������
   λ����UNION�ṹ:  SOC_UPACC_HEAD0_EN_I1_UNION */
#define SOC_UPACC_HEAD0_EN_I1_ADDR(base)              ((base) + (0x0108))

/* �Ĵ���˵����E_RNTI���üĴ�������������MAC-i/is PDU header0�е�E-RNTI������
   λ����UNION�ṹ:  SOC_UPACC_E_RNTI_I1_UNION */
#define SOC_UPACC_E_RNTI_I1_ADDR(base)                ((base) + (0x010C))

/* �Ĵ���˵����SIʹ�ܼĴ���������ָʾ���η�װ��MAC-i/is PDU���Ƿ����SI������
   λ����UNION�ṹ:  SOC_UPACC_SI_EN_I1_UNION */
#define SOC_UPACC_SI_EN_I1_ADDR(base)                 ((base) + (0x0110))

/* �Ĵ���˵����SI�������üĴ�������������MAC-i/is PDU�е�SI������
   λ����UNION�ṹ:  SOC_UPACC_SI_DATA_I1_UNION */
#define SOC_UPACC_SI_DATA_I1_ADDR(base)               ((base) + (0x0114))

/* �Ĵ���˵����padding�������üĴ�������������MAC-i/is PDU�е�padding�����ĳ��ȡ�
   λ����UNION�ṹ:  SOC_UPACC_PADDING_LEN_I1_UNION */
#define SOC_UPACC_PADDING_LEN_I1_ADDR(base)           ((base) + (0x0118))

/* �Ĵ���˵����TSN�������üĴ�����
   λ����UNION�ṹ:  SOC_UPACC_TSN_LEN_I1_UNION */
#define SOC_UPACC_TSN_LEN_I1_ADDR(base)               ((base) + (0x011C))

/* �Ĵ���˵��������������ʼ��ַ�Ĵ������������ò��������ڴ洢���д�ŵ���ʼ��ַ��
   λ����UNION�ṹ:  SOC_UPACC_PARAM_ADDR_I1_UNION */
#define SOC_UPACC_PARAM_ADDR_I1_ADDR(base)            ((base) + (0x0120))

/* �Ĵ���˵������װĿ���ַ�������ʼ��ַ�Ĵ������������õ���MAC-i/is PDU��װ��Ŀ�ĵ�ַ����˵���ʼ��ַ��
   λ����UNION�ṹ:  SOC_UPACC_HARQ_BUF_ADDR_I1_UNION */
#define SOC_UPACC_HARQ_BUF_ADDR_I1_ADDR(base)         ((base) + (0x0124))

/* �Ĵ���˵��������Ŀ���ַ�Ĵ�������������MAC-i/is PDU���Ƶ�BBP���뻺���Ŀ���ַ��
   λ����UNION�ṹ:  SOC_UPACC_BBP_DEST_ADDR_I1_UNION */
#define SOC_UPACC_BBP_DEST_ADDR_I1_ADDR(base)         ((base) + (0x0128))

/* �Ĵ���˵�����������ݴ�С�Ĵ���������������Ҫ���Ƶ�BBP��MAC-i/is PDU�����ֽ�����
   λ����UNION�ṹ:  SOC_UPACC_TRANS_NUM_I1_UNION */
#define SOC_UPACC_TRANS_NUM_I1_ADDR(base)             ((base) + (0x012C))

/* �Ĵ���˵�����ж�ʹ�ܼĴ������������ø��ж��ź�ʹ�����
   λ����UNION�ṹ:  SOC_UPACC_INT_EN_I1_UNION */
#define SOC_UPACC_INT_EN_I1_ADDR(base)                ((base) + (0x0130))

/* �Ĵ���˵����ԭʼ�ж�״̬�Ĵ��������ڹ�CPU��ѯ���ж��ź�������ǰ��״̬��
   λ����UNION�ṹ:  SOC_UPACC_INT_RAW_I1_UNION */
#define SOC_UPACC_INT_RAW_I1_ADDR(base)               ((base) + (0x0134))

/* �Ĵ���˵�������κ��ж�״̬�Ĵ��������ڹ�CPU��ѯ���ж��ź������κ��״̬��
   λ����UNION�ṹ:  SOC_UPACC_INT_MASK_I1_UNION */
#define SOC_UPACC_INT_MASK_I1_ADDR(base)              ((base) + (0x0138))

/* �Ĵ���˵�����ж�״̬����Ĵ��������ڹ�CPU�����ж��ź�״̬���㡣
   λ����UNION�ṹ:  SOC_UPACC_INT_CLR_I1_UNION */
#define SOC_UPACC_INT_CLR_I1_ADDR(base)               ((base) + (0x013C))

/* �Ĵ���˵��������ERROR��ַ�Ĵ��������ڼĴ�Slave�෵��ERROR��Ӧʱ�ĵ�ǰ������ַ��
   λ����UNION�ṹ:  SOC_UPACC_BUS_ERROR_ADDR_I1_UNION */
#define SOC_UPACC_BUS_ERROR_ADDR_I1_ADDR(base)        ((base) + (0x0140))

/* �Ĵ���˵����MAC-i/is PDU��װ������ģ��ʹ�ܼĴ�������������MAC-i/is PDU��װ������ģ��ʹ�����
            UPACC_EN_I1ΪMAC-i/is PDU��װ������ģ�������Ĵ�������������MAC-i/is PDU��װ������ģ��ʹ�����
            DSP������������װ������ͨ�����øüĴ�����bit0Ϊ1����MAC-i/is PDU��װ�����Ʋ�������װ�����Ʋ�����ɺ�Ӳ�����Զ��ԸüĴ������㡣DSP�ڲ�������MAC-i/is PDU��װ������ģ��ʱ��ҲӦ���üĴ�����bit0��Ϊ0���Խ��͹��ġ�
            ������������ó�����INT_RAW_I1�е�addri_error_raw_i1��loch_loch_num_error_raw_i1��dest_addr_error_raw_i1������һ����Чʱ��Ӳ���߼���ԸüĴ�����bit0�Զ����㣬ͬʱ�ԼĴ���MAC_ENCAP_START_I1��bit[1:0]�������㣬�Ը�λUPACC�ڲ���MAC-i/is  PDU��װ������ģ�飬ʹ���ڲ�״̬������IDLE̬��
            ���������UPACC��װ�����˳�ʱ���쳣ʱ���ɶԸüĴ�����bit0д0����UPACC�ڲ�MAC-i/is PDU��װ������ģ���״̬����λ��ʹ�䷵�ص�IDLE̬����ʱ���������ԼĴ���MAC_ENCAP_START_I1��bit[1:0]�������㣬�Է�ֹ�쳣������
   λ����UNION�ṹ:  SOC_UPACC_EN_I1_UNION */
#define SOC_UPACC_EN_I1_ADDR(base)                    ((base) + (0x0144))

/* �Ĵ���˵����HARQ bufferд��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_HARQ_WRITE_ADDR_I1_UNION */
#define SOC_UPACC_HARQ_WRITE_ADDR_I1_ADDR(base)       ((base) + (0x0148))

/* �Ĵ���˵����BBP ���뻺��д��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_BBP_WRITE_ADDR_I1_UNION */
#define SOC_UPACC_BBP_WRITE_ADDR_I1_ADDR(base)        ((base) + (0x014C))

/* �Ĵ���˵����Mac-i PDU�ز�1Դ�������鷽ʽ����ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_UPACC_PDUARY_EN_I1_UNION */
#define SOC_UPACC_PDUARY_EN_I1_ADDR(base)             ((base) + (0x0150))

/* �Ĵ���˵����������ʽ���üĴ�������������MAC_i/is PDU��װ��������ʽ��
            UPACCV200֧�ֶ�MAC-i/is PDU ���в���װֻ���ƺͷ�װ�Ұ�������������ʽ��
   λ����UNION�ṹ:  SOC_UPACC_MAC_ENCAP_START_I2_UNION */
#define SOC_UPACC_MAC_ENCAP_START_I2_ADDR(base)       ((base) + (0x0200))

/* �Ĵ���˵�����߼��ŵ������Ĵ���������ָʾ���η�װMAC-i/is PDU����Ӽ����߼��ŵ��ж�ȡ���ݡ����üĴ�����������Ϊ0����ʾ��ǰMAC-i/is PDU����SI��ɣ�û���������ݺͲ�������ΪSI�������͡�
   λ����UNION�ṹ:  SOC_UPACC_LOCH_NUM_I2_UNION */
#define SOC_UPACC_LOCH_NUM_I2_ADDR(base)              ((base) + (0x0204))

/* �Ĵ���˵����MAC-i header0ʹ�ܼĴ���������ָʾ���η�װ��MAC-i/is PDU���Ƿ����header0������
   λ����UNION�ṹ:  SOC_UPACC_HEAD0_EN_I2_UNION */
#define SOC_UPACC_HEAD0_EN_I2_ADDR(base)              ((base) + (0x0208))

/* �Ĵ���˵����E_RNTI���üĴ�������������MAC-i/is PDU header0�е�E-RNTI������
   λ����UNION�ṹ:  SOC_UPACC_E_RNTI_I2_UNION */
#define SOC_UPACC_E_RNTI_I2_ADDR(base)                ((base) + (0x020C))

/* �Ĵ���˵����SIʹ�ܼĴ���������ָʾ���η�װ��MAC-i/is PDU���Ƿ����SI������
   λ����UNION�ṹ:  SOC_UPACC_SI_EN_I2_UNION */
#define SOC_UPACC_SI_EN_I2_ADDR(base)                 ((base) + (0x0210))

/* �Ĵ���˵����SI�������üĴ�������������MAC-i/is PDU�е�SI������
   λ����UNION�ṹ:  SOC_UPACC_SI_DATA_I2_UNION */
#define SOC_UPACC_SI_DATA_I2_ADDR(base)               ((base) + (0x0214))

/* �Ĵ���˵����padding�������üĴ�������������MAC-i/is PDU�е�padding�����ĳ��ȡ�
   λ����UNION�ṹ:  SOC_UPACC_PADDING_LEN_I2_UNION */
#define SOC_UPACC_PADDING_LEN_I2_ADDR(base)           ((base) + (0x0218))

/* �Ĵ���˵����TSN�������üĴ�����
   λ����UNION�ṹ:  SOC_UPACC_TSN_LEN_I2_UNION */
#define SOC_UPACC_TSN_LEN_I2_ADDR(base)               ((base) + (0x021C))

/* �Ĵ���˵��������������ʼ��ַ�Ĵ������������ò��������ڴ洢���д�ŵ���ʼ��ַ��
   λ����UNION�ṹ:  SOC_UPACC_PARAM_ADDR_I2_UNION */
#define SOC_UPACC_PARAM_ADDR_I2_ADDR(base)            ((base) + (0x0220))

/* �Ĵ���˵������װĿ���ַ�������ʼ��ַ�Ĵ������������õ���MAC-i/is PDU��װ��Ŀ�ĵ�ַ����˵���ʼ��ַ��
   λ����UNION�ṹ:  SOC_UPACC_HARQ_BUF_ADDR_I2_UNION */
#define SOC_UPACC_HARQ_BUF_ADDR_I2_ADDR(base)         ((base) + (0x0224))

/* �Ĵ���˵��������Ŀ���ַ�Ĵ�������������MAC-i/is PDU���Ƶ�BBP���뻺���Ŀ���ַ��
   λ����UNION�ṹ:  SOC_UPACC_BBP_DEST_ADDR_I2_UNION */
#define SOC_UPACC_BBP_DEST_ADDR_I2_ADDR(base)         ((base) + (0x0228))

/* �Ĵ���˵�����������ݴ�С�Ĵ���������������Ҫ���Ƶ�BBP��MAC-i/is PDU�����ֽ�����
   λ����UNION�ṹ:  SOC_UPACC_TRANS_NUM_I2_UNION */
#define SOC_UPACC_TRANS_NUM_I2_ADDR(base)             ((base) + (0x022C))

/* �Ĵ���˵�����ж�ʹ�ܼĴ������������ø��ж��ź�ʹ�����
   λ����UNION�ṹ:  SOC_UPACC_INT_EN_I2_UNION */
#define SOC_UPACC_INT_EN_I2_ADDR(base)                ((base) + (0x0230))

/* �Ĵ���˵����ԭʼ�ж�״̬�Ĵ��������ڹ�CPU��ѯ���ж��ź�������ǰ��״̬��
   λ����UNION�ṹ:  SOC_UPACC_INT_RAW_I2_UNION */
#define SOC_UPACC_INT_RAW_I2_ADDR(base)               ((base) + (0x0234))

/* �Ĵ���˵�������κ��ж�״̬�Ĵ��������ڹ�CPU��ѯ���ж��ź������κ��״̬��
   λ����UNION�ṹ:  SOC_UPACC_INT_MASK_I2_UNION */
#define SOC_UPACC_INT_MASK_I2_ADDR(base)              ((base) + (0x0238))

/* �Ĵ���˵�����ж�״̬����Ĵ��������ڹ�CPU�����ж��ź�״̬���㡣
   λ����UNION�ṹ:  SOC_UPACC_INT_CLR_I2_UNION */
#define SOC_UPACC_INT_CLR_I2_ADDR(base)               ((base) + (0x023C))

/* �Ĵ���˵��������ERROR��ַ�Ĵ��������ڼĴ�Slave�෵��ERROR��Ӧʱ�ĵ�ǰ������ַ��
   λ����UNION�ṹ:  SOC_UPACC_BUS_ERROR_ADDR_I2_UNION */
#define SOC_UPACC_BUS_ERROR_ADDR_I2_ADDR(base)        ((base) + (0x0240))

/* �Ĵ���˵����MAC-i/is PDU��װ������ģ��ʹ�ܼĴ�������������MAC-i/is PDU��װ������ģ��ʹ�����
            UPACC_EN_I2ΪMAC-i/is PDU��װ������ģ�������Ĵ�������������MAC-i/is PDU��װ������ģ��ʹ�����
            DSP������������װ������ͨ�����øüĴ�����bit0Ϊ1����MAC-i/is PDU��װ�����Ʋ�������װ�����Ʋ�����ɺ�Ӳ�����Զ��ԸüĴ������㡣DSP�ڲ�������MAC-i/is PDU��װ������ģ��ʱ��ҲӦ���üĴ�����bit0��Ϊ0���Խ��͹��ġ�
            ������������ó�����INT_RAW_I2�е�addri_error_raw_I2��loch_loch_num_error_raw_I2��dest_addr_error_raw_I2������һ����Чʱ��Ӳ���߼���ԸüĴ�����bit0�Զ����㣬ͬʱ�ԼĴ���MAC_ENCAP_START_I2��bit[1:0]�������㣬�Ը�λUPACC�ڲ���MAC-i/is  PDU��װ������ģ�飬ʹ���ڲ�״̬������IDLE̬��
            ���������UPACC��װ�����˳�ʱ���쳣ʱ���ɶԸüĴ�����bit0д0����UPACC�ڲ�MAC-i/is PDU��װ������ģ���״̬����λ��ʹ�䷵�ص�IDLE̬����ʱ���������ԼĴ���MAC_ENCAP_START_I2��bit[1:0]�������㣬�Է�ֹ�쳣������
   λ����UNION�ṹ:  SOC_UPACC_EN_I2_UNION */
#define SOC_UPACC_EN_I2_ADDR(base)                    ((base) + (0x0244))

/* �Ĵ���˵����HARQ bufferд��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_HARQ_WRITE_ADDR_I2_UNION */
#define SOC_UPACC_HARQ_WRITE_ADDR_I2_ADDR(base)       ((base) + (0x0248))

/* �Ĵ���˵����BBP ���뻺��д��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_UPACC_BBP_WRITE_ADDR_I2_UNION */
#define SOC_UPACC_BBP_WRITE_ADDR_I2_ADDR(base)        ((base) + (0x024C))

/* �Ĵ���˵����Mac-i PDU�ز�2Դ�������鷽ʽ����ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_UPACC_PDUARY_EN_I2_UNION */
#define SOC_UPACC_PDUARY_EN_I2_ADDR(base)             ((base) + (0x0250))





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
                     (1/1) UPACC
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_UPACC_MAC_ENCAP_START_UNION
 �ṹ˵��  : MAC_ENCAP_START �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��װ�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mac_encap_start : 2;  /* bit[0-1] : ��װ�����Ĵ�����
                                                          00��������MAC-e PDU��װ��Ҳ������BBP���ˣ� 
                                                          01������MAC-e PDU��װ�����Ƿ�װ��ɺ�����BBP���ˣ�
                                                          10��������MAC-e PDU��װ��ֻ����BBP���ˣ�
                                                          11������MAC-e PDU��װ�����ڷ�װ��ɺ�����BBP���ˡ�
                                                          ��MAC-e PDU��װ��ɺ󣬼�INT_RAW�Ĵ�����encap_end_raw������Ӳ���߼����mac_encap_start�źŵ�bit0���������㡣
                                                          ��BBP������ɺ󣬼�INT_RAW�Ĵ�����trans_end_raw������Ӳ���߼����mac_encap_start�ź��е�bit1���������㡣 */
        unsigned int  reserved        : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_UPACC_MAC_ENCAP_START_UNION;
#endif
#define SOC_UPACC_MAC_ENCAP_START_mac_encap_start_START  (0)
#define SOC_UPACC_MAC_ENCAP_START_mac_encap_start_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH_NUM_UNION
 �ṹ˵��  : LOCH_NUM �Ĵ����ṹ���塣��ַƫ����:0x0004����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch_num : 4;  /* bit[0-3] : �߼��ŵ������Ĵ�����
                                                   ����ָʾ��ǰ����װMAC-e PDU�Ӽ����߼��ŵ�����ȡ���ݡ� */
        unsigned int  reserved : 28; /* bit[4-31]: ������ */
    } reg;
} SOC_UPACC_LOCH_NUM_UNION;
#endif
#define SOC_UPACC_LOCH_NUM_loch_num_START  (0)
#define SOC_UPACC_LOCH_NUM_loch_num_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_DDI0_EN_UNION
 �ṹ˵��  : DDI0_EN �Ĵ����ṹ���塣��ַƫ����:0x0008����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDI0ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddi0_en  : 1;  /* bit[0]   : DDI0ʹ�ܼĴ�����
                                                   0����MAC-e PDU��DDI0������д��6��b111111��
                                                   1����MAC-e PDU��DDI0����Ҫд��6��b111111�� */
        unsigned int  reserved : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_UPACC_DDI0_EN_UNION;
#endif
#define SOC_UPACC_DDI0_EN_ddi0_en_START   (0)
#define SOC_UPACC_DDI0_EN_ddi0_en_END     (0)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_SI_EN_UNION
 �ṹ˵��  : SI_EN �Ĵ����ṹ���塣��ַƫ����:0x000C����ֵ:0x00000000�����:32
 �Ĵ���˵��: SIʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  si_en    : 1;  /* bit[0]   : SIʹ�ܼĴ�����
                                                   0����MAC-e PDU������д��SI������ 
                                                   1����MAC-e PDU����Ҫд��SI������ */
        unsigned int  reserved : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_UPACC_SI_EN_UNION;
#endif
#define SOC_UPACC_SI_EN_si_en_START     (0)
#define SOC_UPACC_SI_EN_si_en_END       (0)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_SI_DATA_UNION
 �ṹ˵��  : SI_DATA �Ĵ����ṹ���塣��ַƫ����:0x0010����ֵ:0x00000000�����:32
 �Ĵ���˵��: SI���ݼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  si_hlid_data : 4;  /* bit[0-3]  : ����MAC-e PDU��SI HLID������ */
        unsigned int  si_hlbs_data : 4;  /* bit[4-7]  : ����MAC-e PDU��SI HLBS������ */
        unsigned int  si_tebs_data : 5;  /* bit[8-12] : ����MAC-e PDU��SI TEBS������ */
        unsigned int  si_uph_data  : 5;  /* bit[13-17]: ����MAC-e PDU��SI UPH������ */
        unsigned int  reserved     : 14; /* bit[18-31]: ������ */
    } reg;
} SOC_UPACC_SI_DATA_UNION;
#endif
#define SOC_UPACC_SI_DATA_si_hlid_data_START  (0)
#define SOC_UPACC_SI_DATA_si_hlid_data_END    (3)
#define SOC_UPACC_SI_DATA_si_hlbs_data_START  (4)
#define SOC_UPACC_SI_DATA_si_hlbs_data_END    (7)
#define SOC_UPACC_SI_DATA_si_tebs_data_START  (8)
#define SOC_UPACC_SI_DATA_si_tebs_data_END    (12)
#define SOC_UPACC_SI_DATA_si_uph_data_START   (13)
#define SOC_UPACC_SI_DATA_si_uph_data_END     (17)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_PADDING_LENGTH_UNION
 �ṹ˵��  : PADDING_LENGTH �Ĵ����ṹ���塣��ַƫ����:0x0014����ֵ:0x00000000�����:32
 �Ĵ���˵��: padding���ȼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  padding_length : 16; /* bit[0-15] : padding���ȼĴ�����
                                                          ����������MAC-e PDU��padding�����ĳ��ȣ���bitΪ��λ�� */
        unsigned int  reserved       : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_UPACC_PADDING_LENGTH_UNION;
#endif
#define SOC_UPACC_PADDING_LENGTH_padding_length_START  (0)
#define SOC_UPACC_PADDING_LENGTH_padding_length_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_ENCAP_TRANS_ADDR_UNION
 �ṹ˵��  : ENCAP_TRANS_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0018����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��װĿ���ַ��������ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  encap_trans_addr : 32; /* bit[0-31]: ��װĿ���ַ�Ĵ�����
                                                           ��������MAC-e PDU��Ŀ���ַ����byteΪ��λ�����Ǹõ�ַ����bit����Ϊ0����[2:0]=3��b000������double word��ַ�������á� */
    } reg;
} SOC_UPACC_ENCAP_TRANS_ADDR_UNION;
#endif
#define SOC_UPACC_ENCAP_TRANS_ADDR_encap_trans_addr_START  (0)
#define SOC_UPACC_ENCAP_TRANS_ADDR_encap_trans_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_TRANS_NUM_UNION
 �ṹ˵��  : TRANS_NUM �Ĵ����ṹ���塣��ַƫ����:0x001C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���˸������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  trans_num : 16; /* bit[0-15] : ���˸������üĴ�����
                                                     ��������MAC-e PDU��Ҫ���˵�BBP�����ݵ�byte����
                                                     �����������ֵΪ16'hFFFC�� */
        unsigned int  reserved  : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_UPACC_TRANS_NUM_UNION;
#endif
#define SOC_UPACC_TRANS_NUM_trans_num_START  (0)
#define SOC_UPACC_TRANS_NUM_trans_num_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_BBP_DEST_ADDR_UNION
 �ṹ˵��  : BBP_DEST_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0020����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����Ŀ���ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bbp_dest_addr : 32; /* bit[0-31]: ����Ŀ���ַ�Ĵ�����
                                                        ��������MAC-e PDU��Ҫ���˵�BBP�����ݵ�Ŀ���ַ����byteΪ��λ�����Ǹõ�ַ����bit����Ϊ0����[2:0]=3��b000������double word��ַ�������á� */
    } reg;
} SOC_UPACC_BBP_DEST_ADDR_UNION;
#endif
#define SOC_UPACC_BBP_DEST_ADDR_bbp_dest_addr_START  (0)
#define SOC_UPACC_BBP_DEST_ADDR_bbp_dest_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_INT_EN_UNION
 �ṹ˵��  : INT_EN �Ĵ����ṹ���塣��ַƫ����:0x0024����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж�ʹ�ܼĴ�����BitֵΪ0��ʾ�жϽ�ֹ��ֵΪ1��ʾ�ж�ʹ�ܡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  encap_end_en          : 1;  /* bit[0]    : MAC-e PDU��װ����ж�ʹ�ܼĴ����� */
        unsigned int  trans_end_en          : 1;  /* bit[1]    : MAC-e PDU���˵�BBP����ж�ʹ�ܼĴ����� */
        unsigned int  addr1_error_en        : 1;  /* bit[2]    : MAC-e PDU��װ�߼�ͨ��1����ַ���ô����ж�ʹ�ܼĴ����� */
        unsigned int  addr2_error_en        : 1;  /* bit[3]    : MAC-e PDU��װ�߼�ͨ��2����ַ���ô����ж�ʹ�ܼĴ����� */
        unsigned int  addr3_error_en        : 1;  /* bit[4]    : MAC-e PDU��װ�߼�ͨ��3����ַ���ô����ж�ʹ�ܼĴ����� */
        unsigned int  addr4_error_en        : 1;  /* bit[5]    : MAC-e PDU��װ�߼�ͨ��4����ַ���ô����ж�ʹ�ܼĴ����� */
        unsigned int  addr5_error_en        : 1;  /* bit[6]    : MAC-e PDU��װ�߼�ͨ��5����ַ���ô����ж�ʹ�ܼĴ����� */
        unsigned int  addr6_error_en        : 1;  /* bit[7]    : MAC-e PDU��װ�߼�ͨ��6����ַ���ô����ж�ʹ�ܼĴ����� */
        unsigned int  addr7_error_en        : 1;  /* bit[8]    : MAC-e PDU��װ�߼�ͨ��7����ַ���ô����ж�ʹ�ܼĴ����� */
        unsigned int  addr8_error_en        : 1;  /* bit[9]    : MAC-e PDU��װ�߼�ͨ��8����ַ���ô����ж�ʹ�ܼĴ����� */
        unsigned int  num_error_en          : 1;  /* bit[10]   : MAC-e PDU��װ�߼�ͨ���������ô����ж�ʹ�ܼĴ����� */
        unsigned int  encap_addr_error_en   : 1;  /* bit[11]   : MAC-e PDU��װĿ���ַ��������ʼ��ַ���ô����ж�ʹ��λ�� */
        unsigned int  dest_addr_error_en    : 1;  /* bit[12]   : MAC-e PDU����Ŀ���ַ���ô����ж�ʹ��λ�� */
        unsigned int  bus_error_en          : 1;  /* bit[13]   : ģ�������ʵ�Slave�෵��ERROR RESP�ж�ʹ�ܼĴ����� */
        unsigned int  dsp_int_en            : 1;  /* bit[14]   : ģ�������жϷ��͸�DSPʹ�ܼĴ����� */
        unsigned int  arm_int_en            : 1;  /* bit[15]   : ģ�������жϷ��͸�ARMʹ�ܼĴ����� */
        unsigned int  pduary_addr1_error_en : 1;  /* bit[16]   : MAC-e PDU��װ�߼�ͨ��1Դ���������׵�ַ���ô����ж�ʹ��λ�� */
        unsigned int  pduary_addr2_error_en : 1;  /* bit[17]   : MAC-e PDU��װ�߼�ͨ��2Դ���������׵�ַ���ô����ж�ʹ��λ�� */
        unsigned int  pduary_addr3_error_en : 1;  /* bit[18]   : MAC-e PDU��װ�߼�ͨ��3Դ���������׵�ַ���ô����ж�ʹ��λ�� */
        unsigned int  pduary_addr4_error_en : 1;  /* bit[19]   : MAC-e PDU��װ�߼�ͨ��4Դ���������׵�ַ���ô����ж�ʹ��λ�� */
        unsigned int  pduary_addr5_error_en : 1;  /* bit[20]   : MAC-e PDU��װ�߼�ͨ��5Դ���������׵�ַ���ô����ж�ʹ��λ�� */
        unsigned int  pduary_addr6_error_en : 1;  /* bit[21]   : MAC-e PDU��װ�߼�ͨ��6Դ���������׵�ַ���ô����ж�ʹ��λ�� */
        unsigned int  pduary_addr7_error_en : 1;  /* bit[22]   : MAC-e PDU��װ�߼�ͨ��7Դ���������׵�ַ���ô����ж�ʹ��λ�� */
        unsigned int  pduary_addr8_error_en : 1;  /* bit[23]   : MAC-e PDU��װ�߼�ͨ��8Դ���������׵�ַ���ô����ж�ʹ��λ�� */
        unsigned int  reserved              : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_UPACC_INT_EN_UNION;
#endif
#define SOC_UPACC_INT_EN_encap_end_en_START           (0)
#define SOC_UPACC_INT_EN_encap_end_en_END             (0)
#define SOC_UPACC_INT_EN_trans_end_en_START           (1)
#define SOC_UPACC_INT_EN_trans_end_en_END             (1)
#define SOC_UPACC_INT_EN_addr1_error_en_START         (2)
#define SOC_UPACC_INT_EN_addr1_error_en_END           (2)
#define SOC_UPACC_INT_EN_addr2_error_en_START         (3)
#define SOC_UPACC_INT_EN_addr2_error_en_END           (3)
#define SOC_UPACC_INT_EN_addr3_error_en_START         (4)
#define SOC_UPACC_INT_EN_addr3_error_en_END           (4)
#define SOC_UPACC_INT_EN_addr4_error_en_START         (5)
#define SOC_UPACC_INT_EN_addr4_error_en_END           (5)
#define SOC_UPACC_INT_EN_addr5_error_en_START         (6)
#define SOC_UPACC_INT_EN_addr5_error_en_END           (6)
#define SOC_UPACC_INT_EN_addr6_error_en_START         (7)
#define SOC_UPACC_INT_EN_addr6_error_en_END           (7)
#define SOC_UPACC_INT_EN_addr7_error_en_START         (8)
#define SOC_UPACC_INT_EN_addr7_error_en_END           (8)
#define SOC_UPACC_INT_EN_addr8_error_en_START         (9)
#define SOC_UPACC_INT_EN_addr8_error_en_END           (9)
#define SOC_UPACC_INT_EN_num_error_en_START           (10)
#define SOC_UPACC_INT_EN_num_error_en_END             (10)
#define SOC_UPACC_INT_EN_encap_addr_error_en_START    (11)
#define SOC_UPACC_INT_EN_encap_addr_error_en_END      (11)
#define SOC_UPACC_INT_EN_dest_addr_error_en_START     (12)
#define SOC_UPACC_INT_EN_dest_addr_error_en_END       (12)
#define SOC_UPACC_INT_EN_bus_error_en_START           (13)
#define SOC_UPACC_INT_EN_bus_error_en_END             (13)
#define SOC_UPACC_INT_EN_dsp_int_en_START             (14)
#define SOC_UPACC_INT_EN_dsp_int_en_END               (14)
#define SOC_UPACC_INT_EN_arm_int_en_START             (15)
#define SOC_UPACC_INT_EN_arm_int_en_END               (15)
#define SOC_UPACC_INT_EN_pduary_addr1_error_en_START  (16)
#define SOC_UPACC_INT_EN_pduary_addr1_error_en_END    (16)
#define SOC_UPACC_INT_EN_pduary_addr2_error_en_START  (17)
#define SOC_UPACC_INT_EN_pduary_addr2_error_en_END    (17)
#define SOC_UPACC_INT_EN_pduary_addr3_error_en_START  (18)
#define SOC_UPACC_INT_EN_pduary_addr3_error_en_END    (18)
#define SOC_UPACC_INT_EN_pduary_addr4_error_en_START  (19)
#define SOC_UPACC_INT_EN_pduary_addr4_error_en_END    (19)
#define SOC_UPACC_INT_EN_pduary_addr5_error_en_START  (20)
#define SOC_UPACC_INT_EN_pduary_addr5_error_en_END    (20)
#define SOC_UPACC_INT_EN_pduary_addr6_error_en_START  (21)
#define SOC_UPACC_INT_EN_pduary_addr6_error_en_END    (21)
#define SOC_UPACC_INT_EN_pduary_addr7_error_en_START  (22)
#define SOC_UPACC_INT_EN_pduary_addr7_error_en_END    (22)
#define SOC_UPACC_INT_EN_pduary_addr8_error_en_START  (23)
#define SOC_UPACC_INT_EN_pduary_addr8_error_en_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_INT_RAW_UNION
 �ṹ˵��  : INT_RAW �Ĵ����ṹ���塣��ַƫ����:0x0028����ֵ:0x00000000�����:32
 �Ĵ���˵��: ԭʼ�ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  encap_end_raw          : 1;  /* bit[0]    : MAC-e PDU��װ���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  trans_end_raw          : 1;  /* bit[1]    : MAC-e PDU���˵�BBP���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  addr1_error_raw        : 1;  /* bit[2]    : MAC-e PDU��װ�߼�ͨ��1����ַ���ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  addr2_error_raw        : 1;  /* bit[3]    : MAC-e PDU��װ�߼�ͨ��2����ַ���ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  addr3_error_raw        : 1;  /* bit[4]    : MAC-e PDU��װ�߼�ͨ��3����ַ���ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  addr4_error_raw        : 1;  /* bit[5]    : MAC-e PDU��װ�߼�ͨ��4����ַ���ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  addr5_error_raw        : 1;  /* bit[6]    : MAC-e PDU��װ�߼�ͨ��5����ַ���ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  addr6_error_raw        : 1;  /* bit[7]    : MAC-e PDU��װ�߼�ͨ��6����ַ���ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  addr7_error_raw        : 1;  /* bit[8]    : MAC-e PDU��װ�߼�ͨ��7����ַ���ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  addr8_error_raw        : 1;  /* bit[9]    : MAC-e PDU��װ�߼�ͨ��8����ַ���ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  num_error_raw          : 1;  /* bit[10]   : MAC-e PDU��װ�߼�ͨ���������ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  encap_addr_error_raw   : 1;  /* bit[11]   : MAC-e PDU��װĿ���ַ��������ʼ��ַ���ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  dest_addr_error_raw    : 1;  /* bit[12]   : MAC-e PDU����Ŀ���ַ���ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  bus_error_raw          : 1;  /* bit[13]   : ģ�������ʵ�Slave�෵��ERROR RESPԭʼ�жϼĴ���������Ч�� */
        unsigned int  dsp_int_raw            : 1;  /* bit[14]   : ģ�������жϷ��͸�DSPԭʼ�жϼĴ���������Ч�� */
        unsigned int  arm_int_raw            : 1;  /* bit[15]   : ģ�������жϷ��͸�ARMԭʼ�жϼĴ���������Ч�� */
        unsigned int  pduary_addr1_error_raw : 1;  /* bit[16]   : MAC-e PDU��װ�߼�ͨ��1Դ���������׵�ַ���ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  pduary_addr2_error_raw : 1;  /* bit[17]   : MAC-e PDU��װ�߼�ͨ��2Դ���������׵�ַ���ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  pduary_addr3_error_raw : 1;  /* bit[18]   : MAC-e PDU��װ�߼�ͨ��3Դ���������׵�ַ���ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  pduary_addr4_error_raw : 1;  /* bit[19]   : MAC-e PDU��װ�߼�ͨ��4Դ���������׵�ַ���ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  pduary_addr5_error_raw : 1;  /* bit[20]   : MAC-e PDU��װ�߼�ͨ��5Դ���������׵�ַ���ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  pduary_addr6_error_raw : 1;  /* bit[21]   : MAC-e PDU��װ�߼�ͨ��6Դ���������׵�ַ���ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  pduary_addr7_error_raw : 1;  /* bit[22]   : MAC-e PDU��װ�߼�ͨ��7Դ���������׵�ַ���ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  pduary_addr8_error_raw : 1;  /* bit[23]   : MAC-e PDU��װ�߼�ͨ��8Դ���������׵�ַ���ô���ԭʼ�жϼĴ���������Ч�� */
        unsigned int  reserved               : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_UPACC_INT_RAW_UNION;
#endif
#define SOC_UPACC_INT_RAW_encap_end_raw_START           (0)
#define SOC_UPACC_INT_RAW_encap_end_raw_END             (0)
#define SOC_UPACC_INT_RAW_trans_end_raw_START           (1)
#define SOC_UPACC_INT_RAW_trans_end_raw_END             (1)
#define SOC_UPACC_INT_RAW_addr1_error_raw_START         (2)
#define SOC_UPACC_INT_RAW_addr1_error_raw_END           (2)
#define SOC_UPACC_INT_RAW_addr2_error_raw_START         (3)
#define SOC_UPACC_INT_RAW_addr2_error_raw_END           (3)
#define SOC_UPACC_INT_RAW_addr3_error_raw_START         (4)
#define SOC_UPACC_INT_RAW_addr3_error_raw_END           (4)
#define SOC_UPACC_INT_RAW_addr4_error_raw_START         (5)
#define SOC_UPACC_INT_RAW_addr4_error_raw_END           (5)
#define SOC_UPACC_INT_RAW_addr5_error_raw_START         (6)
#define SOC_UPACC_INT_RAW_addr5_error_raw_END           (6)
#define SOC_UPACC_INT_RAW_addr6_error_raw_START         (7)
#define SOC_UPACC_INT_RAW_addr6_error_raw_END           (7)
#define SOC_UPACC_INT_RAW_addr7_error_raw_START         (8)
#define SOC_UPACC_INT_RAW_addr7_error_raw_END           (8)
#define SOC_UPACC_INT_RAW_addr8_error_raw_START         (9)
#define SOC_UPACC_INT_RAW_addr8_error_raw_END           (9)
#define SOC_UPACC_INT_RAW_num_error_raw_START           (10)
#define SOC_UPACC_INT_RAW_num_error_raw_END             (10)
#define SOC_UPACC_INT_RAW_encap_addr_error_raw_START    (11)
#define SOC_UPACC_INT_RAW_encap_addr_error_raw_END      (11)
#define SOC_UPACC_INT_RAW_dest_addr_error_raw_START     (12)
#define SOC_UPACC_INT_RAW_dest_addr_error_raw_END       (12)
#define SOC_UPACC_INT_RAW_bus_error_raw_START           (13)
#define SOC_UPACC_INT_RAW_bus_error_raw_END             (13)
#define SOC_UPACC_INT_RAW_dsp_int_raw_START             (14)
#define SOC_UPACC_INT_RAW_dsp_int_raw_END               (14)
#define SOC_UPACC_INT_RAW_arm_int_raw_START             (15)
#define SOC_UPACC_INT_RAW_arm_int_raw_END               (15)
#define SOC_UPACC_INT_RAW_pduary_addr1_error_raw_START  (16)
#define SOC_UPACC_INT_RAW_pduary_addr1_error_raw_END    (16)
#define SOC_UPACC_INT_RAW_pduary_addr2_error_raw_START  (17)
#define SOC_UPACC_INT_RAW_pduary_addr2_error_raw_END    (17)
#define SOC_UPACC_INT_RAW_pduary_addr3_error_raw_START  (18)
#define SOC_UPACC_INT_RAW_pduary_addr3_error_raw_END    (18)
#define SOC_UPACC_INT_RAW_pduary_addr4_error_raw_START  (19)
#define SOC_UPACC_INT_RAW_pduary_addr4_error_raw_END    (19)
#define SOC_UPACC_INT_RAW_pduary_addr5_error_raw_START  (20)
#define SOC_UPACC_INT_RAW_pduary_addr5_error_raw_END    (20)
#define SOC_UPACC_INT_RAW_pduary_addr6_error_raw_START  (21)
#define SOC_UPACC_INT_RAW_pduary_addr6_error_raw_END    (21)
#define SOC_UPACC_INT_RAW_pduary_addr7_error_raw_START  (22)
#define SOC_UPACC_INT_RAW_pduary_addr7_error_raw_END    (22)
#define SOC_UPACC_INT_RAW_pduary_addr8_error_raw_START  (23)
#define SOC_UPACC_INT_RAW_pduary_addr8_error_raw_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_INT_MASK_UNION
 �ṹ˵��  : INT_MASK �Ĵ����ṹ���塣��ַƫ����:0x002C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���κ��ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  encap_end_mask          : 1;  /* bit[0]    : MAC-e PDU��װ������κ��жϼĴ���������Ч�� */
        unsigned int  trans_end_mask          : 1;  /* bit[1]    : MAC-e PDU���˵�BBP������κ��жϼĴ���������Ч�� */
        unsigned int  addr1_error_mask        : 1;  /* bit[2]    : MAC-e PDU��װ�߼�ͨ��1����ַ���ô������κ��жϼĴ���������Ч�� */
        unsigned int  addr2_error_mask        : 1;  /* bit[3]    : MAC-e PDU��װ�߼�ͨ��2����ַ���ô������κ��жϼĴ���������Ч�� */
        unsigned int  addr3_error_mask        : 1;  /* bit[4]    : MAC-e PDU��װ�߼�ͨ��3����ַ���ô������κ��жϼĴ���������Ч�� */
        unsigned int  addr4_error_mask        : 1;  /* bit[5]    : MAC-e PDU��װ�߼�ͨ��4����ַ���ô������κ��жϼĴ���������Ч�� */
        unsigned int  addr5_error_mask        : 1;  /* bit[6]    : MAC-e PDU��װ�߼�ͨ��5����ַ���ô������κ��жϼĴ���������Ч�� */
        unsigned int  addr6_error_mask        : 1;  /* bit[7]    : MAC-e PDU��װ�߼�ͨ��6����ַ���ô������κ��жϼĴ���������Ч�� */
        unsigned int  addr7_error_mask        : 1;  /* bit[8]    : MAC-e PDU��װ�߼�ͨ��7����ַ���ô������κ��жϼĴ���������Ч�� */
        unsigned int  addr8_error_mask        : 1;  /* bit[9]    : MAC-e PDU��װ�߼�ͨ��8����ַ���ô������κ��жϼĴ���������Ч�� */
        unsigned int  num_error_mask          : 1;  /* bit[10]   : MAC-e PDU��װ�߼�ͨ���������ô������κ��жϼĴ���������Ч�� */
        unsigned int  encap_addr_error_mask   : 1;  /* bit[11]   : MAC-e PDU��װĿ���ַ��������ʼ��ַ���ô������κ��жϼĴ���������Ч�� */
        unsigned int  dest_addr_error_mask    : 1;  /* bit[12]   : MAC-e PDU����Ŀ���ַ���ô������κ��жϼĴ���������Ч�� */
        unsigned int  bus_error_mask          : 1;  /* bit[13]   : ģ�������ʵ�Slave�෵��ERROR RESP���κ��жϼĴ���������Ч�� */
        unsigned int  dsp_int_mask            : 1;  /* bit[14]   : ģ�������жϷ��͸�DSP���κ��жϼĴ���������Ч�� */
        unsigned int  arm_int_mask            : 1;  /* bit[15]   : ģ�������жϷ��͸�ARM���κ��жϼĴ���������Ч�� */
        unsigned int  pduary_addr1_error_mask : 1;  /* bit[16]   : MAC-e PDU��װ�߼�ͨ��1Դ���������׵�ַ���ô������κ��жϼĴ���������Ч�� */
        unsigned int  pduary_addr2_error_mask : 1;  /* bit[17]   : MAC-e PDU��װ�߼�ͨ��2Դ���������׵�ַ���ô������κ��жϼĴ���������Ч�� */
        unsigned int  pduary_addr3_error_mask : 1;  /* bit[18]   : MAC-e PDU��װ�߼�ͨ��3Դ���������׵�ַ���ô������κ��жϼĴ���������Ч�� */
        unsigned int  pduary_addr4_error_mask : 1;  /* bit[19]   : MAC-e PDU��װ�߼�ͨ��4Դ���������׵�ַ���ô������κ��жϼĴ���������Ч�� */
        unsigned int  pduary_addr5_error_mask : 1;  /* bit[20]   : MAC-e PDU��װ�߼�ͨ��5Դ���������׵�ַ���ô������κ��жϼĴ���������Ч�� */
        unsigned int  pduary_addr6_error_mask : 1;  /* bit[21]   : MAC-e PDU��װ�߼�ͨ��6Դ���������׵�ַ���ô������κ��жϼĴ���������Ч�� */
        unsigned int  pduary_addr7_error_mask : 1;  /* bit[22]   : MAC-e PDU��װ�߼�ͨ��7Դ���������׵�ַ���ô������κ��жϼĴ���������Ч�� */
        unsigned int  pduary_addr8_error_mask : 1;  /* bit[23]   : MAC-e PDU��װ�߼�ͨ��8Դ���������׵�ַ���ô������κ��жϼĴ���������Ч�� */
        unsigned int  reserved                : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_UPACC_INT_MASK_UNION;
#endif
#define SOC_UPACC_INT_MASK_encap_end_mask_START           (0)
#define SOC_UPACC_INT_MASK_encap_end_mask_END             (0)
#define SOC_UPACC_INT_MASK_trans_end_mask_START           (1)
#define SOC_UPACC_INT_MASK_trans_end_mask_END             (1)
#define SOC_UPACC_INT_MASK_addr1_error_mask_START         (2)
#define SOC_UPACC_INT_MASK_addr1_error_mask_END           (2)
#define SOC_UPACC_INT_MASK_addr2_error_mask_START         (3)
#define SOC_UPACC_INT_MASK_addr2_error_mask_END           (3)
#define SOC_UPACC_INT_MASK_addr3_error_mask_START         (4)
#define SOC_UPACC_INT_MASK_addr3_error_mask_END           (4)
#define SOC_UPACC_INT_MASK_addr4_error_mask_START         (5)
#define SOC_UPACC_INT_MASK_addr4_error_mask_END           (5)
#define SOC_UPACC_INT_MASK_addr5_error_mask_START         (6)
#define SOC_UPACC_INT_MASK_addr5_error_mask_END           (6)
#define SOC_UPACC_INT_MASK_addr6_error_mask_START         (7)
#define SOC_UPACC_INT_MASK_addr6_error_mask_END           (7)
#define SOC_UPACC_INT_MASK_addr7_error_mask_START         (8)
#define SOC_UPACC_INT_MASK_addr7_error_mask_END           (8)
#define SOC_UPACC_INT_MASK_addr8_error_mask_START         (9)
#define SOC_UPACC_INT_MASK_addr8_error_mask_END           (9)
#define SOC_UPACC_INT_MASK_num_error_mask_START           (10)
#define SOC_UPACC_INT_MASK_num_error_mask_END             (10)
#define SOC_UPACC_INT_MASK_encap_addr_error_mask_START    (11)
#define SOC_UPACC_INT_MASK_encap_addr_error_mask_END      (11)
#define SOC_UPACC_INT_MASK_dest_addr_error_mask_START     (12)
#define SOC_UPACC_INT_MASK_dest_addr_error_mask_END       (12)
#define SOC_UPACC_INT_MASK_bus_error_mask_START           (13)
#define SOC_UPACC_INT_MASK_bus_error_mask_END             (13)
#define SOC_UPACC_INT_MASK_dsp_int_mask_START             (14)
#define SOC_UPACC_INT_MASK_dsp_int_mask_END               (14)
#define SOC_UPACC_INT_MASK_arm_int_mask_START             (15)
#define SOC_UPACC_INT_MASK_arm_int_mask_END               (15)
#define SOC_UPACC_INT_MASK_pduary_addr1_error_mask_START  (16)
#define SOC_UPACC_INT_MASK_pduary_addr1_error_mask_END    (16)
#define SOC_UPACC_INT_MASK_pduary_addr2_error_mask_START  (17)
#define SOC_UPACC_INT_MASK_pduary_addr2_error_mask_END    (17)
#define SOC_UPACC_INT_MASK_pduary_addr3_error_mask_START  (18)
#define SOC_UPACC_INT_MASK_pduary_addr3_error_mask_END    (18)
#define SOC_UPACC_INT_MASK_pduary_addr4_error_mask_START  (19)
#define SOC_UPACC_INT_MASK_pduary_addr4_error_mask_END    (19)
#define SOC_UPACC_INT_MASK_pduary_addr5_error_mask_START  (20)
#define SOC_UPACC_INT_MASK_pduary_addr5_error_mask_END    (20)
#define SOC_UPACC_INT_MASK_pduary_addr6_error_mask_START  (21)
#define SOC_UPACC_INT_MASK_pduary_addr6_error_mask_END    (21)
#define SOC_UPACC_INT_MASK_pduary_addr7_error_mask_START  (22)
#define SOC_UPACC_INT_MASK_pduary_addr7_error_mask_END    (22)
#define SOC_UPACC_INT_MASK_pduary_addr8_error_mask_START  (23)
#define SOC_UPACC_INT_MASK_pduary_addr8_error_mask_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_INT_CLR_UNION
 �ṹ˵��  : INT_CLR �Ĵ����ṹ���塣��ַƫ����:0x0030����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  encap_end_clr          : 1;  /* bit[0]    : MAC-e PDU��װ����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  trans_end_clr          : 1;  /* bit[1]    : MAC-e PDU���˵�BBP����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  addr1_error_clr        : 1;  /* bit[2]    : MAC-e PDU��װ�߼�ͨ��1����ַ���ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  addr2_error_clr        : 1;  /* bit[3]    : MAC-e PDU��װ�߼�ͨ��2����ַ���ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  addr3_error_clr        : 1;  /* bit[4]    : MAC-e PDU��װ�߼�ͨ��3����ַ���ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  addr4_error_clr        : 1;  /* bit[5]    : MAC-e PDU��װ�߼�ͨ��4����ַ���ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  addr5_error_clr        : 1;  /* bit[6]    : MAC-e PDU��װ�߼�ͨ��5����ַ���ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  addr6_error_clr        : 1;  /* bit[7]    : MAC-e PDU��װ�߼�ͨ��6����ַ���ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  addr7_error_clr        : 1;  /* bit[8]    : MAC-e PDU��װ�߼�ͨ��7����ַ���ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  addr8_error_clr        : 1;  /* bit[9]    : MAC-e PDU��װ�߼�ͨ��8����ַ���ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  num_error_clr          : 1;  /* bit[10]   : MAC-e PDU��װ�߼�ͨ���������ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  encap_addr_error_clr   : 1;  /* bit[11]   : MAC-e PDU��װĿ���ַ��������ʼ��ַ���ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  dest_addr_error_clr    : 1;  /* bit[12]   : MAC-e PDU����Ŀ���ַ���ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  bus_error_clr          : 1;  /* bit[13]   : ģ�������ʵ�Slave�෵��ERROR RESP�ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  reserved_0             : 1;  /* bit[14]   : ������ */
        unsigned int  reserved_1             : 1;  /* bit[15]   : ������ */
        unsigned int  pduary_addr1_error_clr : 1;  /* bit[16]   : MAC-e PDU��װ�߼�ͨ��1Դ���������׵�ַ���ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  pduary_addr2_error_clr : 1;  /* bit[17]   : MAC-e PDU��װ�߼�ͨ��2Դ���������׵�ַ���ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  pduary_addr3_error_clr : 1;  /* bit[18]   : MAC-e PDU��װ�߼�ͨ��3Դ���������׵�ַ���ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  pduary_addr4_error_clr : 1;  /* bit[19]   : MAC-e PDU��װ�߼�ͨ��4Դ���������׵�ַ���ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  pduary_addr5_error_clr : 1;  /* bit[20]   : MAC-e PDU��װ�߼�ͨ��5Դ���������׵�ַ���ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  pduary_addr6_error_clr : 1;  /* bit[21]   : MAC-e PDU��װ�߼�ͨ��6Դ���������׵�ַ���ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  pduary_addr7_error_clr : 1;  /* bit[22]   : MAC-e PDU��װ�߼�ͨ��7Դ���������׵�ַ���ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  pduary_addr8_error_clr : 1;  /* bit[23]   : MAC-e PDU��װ�߼�ͨ��8Դ���������׵�ַ���ô����ж�����Ĵ�����CPUд1���㡣 */
        unsigned int  reserved_2             : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_UPACC_INT_CLR_UNION;
#endif
#define SOC_UPACC_INT_CLR_encap_end_clr_START           (0)
#define SOC_UPACC_INT_CLR_encap_end_clr_END             (0)
#define SOC_UPACC_INT_CLR_trans_end_clr_START           (1)
#define SOC_UPACC_INT_CLR_trans_end_clr_END             (1)
#define SOC_UPACC_INT_CLR_addr1_error_clr_START         (2)
#define SOC_UPACC_INT_CLR_addr1_error_clr_END           (2)
#define SOC_UPACC_INT_CLR_addr2_error_clr_START         (3)
#define SOC_UPACC_INT_CLR_addr2_error_clr_END           (3)
#define SOC_UPACC_INT_CLR_addr3_error_clr_START         (4)
#define SOC_UPACC_INT_CLR_addr3_error_clr_END           (4)
#define SOC_UPACC_INT_CLR_addr4_error_clr_START         (5)
#define SOC_UPACC_INT_CLR_addr4_error_clr_END           (5)
#define SOC_UPACC_INT_CLR_addr5_error_clr_START         (6)
#define SOC_UPACC_INT_CLR_addr5_error_clr_END           (6)
#define SOC_UPACC_INT_CLR_addr6_error_clr_START         (7)
#define SOC_UPACC_INT_CLR_addr6_error_clr_END           (7)
#define SOC_UPACC_INT_CLR_addr7_error_clr_START         (8)
#define SOC_UPACC_INT_CLR_addr7_error_clr_END           (8)
#define SOC_UPACC_INT_CLR_addr8_error_clr_START         (9)
#define SOC_UPACC_INT_CLR_addr8_error_clr_END           (9)
#define SOC_UPACC_INT_CLR_num_error_clr_START           (10)
#define SOC_UPACC_INT_CLR_num_error_clr_END             (10)
#define SOC_UPACC_INT_CLR_encap_addr_error_clr_START    (11)
#define SOC_UPACC_INT_CLR_encap_addr_error_clr_END      (11)
#define SOC_UPACC_INT_CLR_dest_addr_error_clr_START     (12)
#define SOC_UPACC_INT_CLR_dest_addr_error_clr_END       (12)
#define SOC_UPACC_INT_CLR_bus_error_clr_START           (13)
#define SOC_UPACC_INT_CLR_bus_error_clr_END             (13)
#define SOC_UPACC_INT_CLR_pduary_addr1_error_clr_START  (16)
#define SOC_UPACC_INT_CLR_pduary_addr1_error_clr_END    (16)
#define SOC_UPACC_INT_CLR_pduary_addr2_error_clr_START  (17)
#define SOC_UPACC_INT_CLR_pduary_addr2_error_clr_END    (17)
#define SOC_UPACC_INT_CLR_pduary_addr3_error_clr_START  (18)
#define SOC_UPACC_INT_CLR_pduary_addr3_error_clr_END    (18)
#define SOC_UPACC_INT_CLR_pduary_addr4_error_clr_START  (19)
#define SOC_UPACC_INT_CLR_pduary_addr4_error_clr_END    (19)
#define SOC_UPACC_INT_CLR_pduary_addr5_error_clr_START  (20)
#define SOC_UPACC_INT_CLR_pduary_addr5_error_clr_END    (20)
#define SOC_UPACC_INT_CLR_pduary_addr6_error_clr_START  (21)
#define SOC_UPACC_INT_CLR_pduary_addr6_error_clr_END    (21)
#define SOC_UPACC_INT_CLR_pduary_addr7_error_clr_START  (22)
#define SOC_UPACC_INT_CLR_pduary_addr7_error_clr_END    (22)
#define SOC_UPACC_INT_CLR_pduary_addr8_error_clr_START  (23)
#define SOC_UPACC_INT_CLR_pduary_addr8_error_clr_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_BUS_ERROR_ADDR_UNION
 �ṹ˵��  : BUS_ERROR_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0034����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ERROR��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bus_error_addr : 32; /* bit[0-31]: ����ERROR��ַ�Ĵ�����
                                                         ���ڼĴ浱ģ�������ʵ�Slave�෵��ERRORʱ�ĵ�ǰ�����ĵ�ַ�� */
    } reg;
} SOC_UPACC_BUS_ERROR_ADDR_UNION;
#endif
#define SOC_UPACC_BUS_ERROR_ADDR_bus_error_addr_START  (0)
#define SOC_UPACC_BUS_ERROR_ADDR_bus_error_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH1_PARAM_UNION
 �ṹ˵��  : LOCH1_PARAM �Ĵ����ṹ���塣��ַƫ����:0x0038����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�1�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tsn1     : 6;  /* bit[0-5]  : ����MAC-e PDU����TSN1�� */
        unsigned int  n1       : 6;  /* bit[6-11] : ����MAC-e PDU����N1�� */
        unsigned int  ddi1     : 6;  /* bit[12-17]: ����MAC-e PDU����DDI1�� */
        unsigned int  reserved : 14; /* bit[18-31]: ������ */
    } reg;
} SOC_UPACC_LOCH1_PARAM_UNION;
#endif
#define SOC_UPACC_LOCH1_PARAM_tsn1_START      (0)
#define SOC_UPACC_LOCH1_PARAM_tsn1_END        (5)
#define SOC_UPACC_LOCH1_PARAM_n1_START        (6)
#define SOC_UPACC_LOCH1_PARAM_n1_END          (11)
#define SOC_UPACC_LOCH1_PARAM_ddi1_START      (12)
#define SOC_UPACC_LOCH1_PARAM_ddi1_END        (17)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH2_PARAM_UNION
 �ṹ˵��  : LOCH2_PARAM �Ĵ����ṹ���塣��ַƫ����:0x003C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�2�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tsn2     : 6;  /* bit[0-5]  : ����MAC-e PDU����TSN2�� */
        unsigned int  n2       : 6;  /* bit[6-11] : ����MAC-e PDU����N2�� */
        unsigned int  ddi2     : 6;  /* bit[12-17]: ����MAC-e PDU����DDI2�� */
        unsigned int  reserved : 14; /* bit[18-31]: ������ */
    } reg;
} SOC_UPACC_LOCH2_PARAM_UNION;
#endif
#define SOC_UPACC_LOCH2_PARAM_tsn2_START      (0)
#define SOC_UPACC_LOCH2_PARAM_tsn2_END        (5)
#define SOC_UPACC_LOCH2_PARAM_n2_START        (6)
#define SOC_UPACC_LOCH2_PARAM_n2_END          (11)
#define SOC_UPACC_LOCH2_PARAM_ddi2_START      (12)
#define SOC_UPACC_LOCH2_PARAM_ddi2_END        (17)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH3_PARAM_UNION
 �ṹ˵��  : LOCH3_PARAM �Ĵ����ṹ���塣��ַƫ����:0x0040����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�1�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tsn3     : 6;  /* bit[0-5]  : ����MAC-e PDU����TSN3�� */
        unsigned int  n3       : 6;  /* bit[6-11] : ����MAC-e PDU����N3�� */
        unsigned int  ddi3     : 6;  /* bit[12-17]: ����MAC-e PDU����DDI3�� */
        unsigned int  reserved : 14; /* bit[18-31]: ������ */
    } reg;
} SOC_UPACC_LOCH3_PARAM_UNION;
#endif
#define SOC_UPACC_LOCH3_PARAM_tsn3_START      (0)
#define SOC_UPACC_LOCH3_PARAM_tsn3_END        (5)
#define SOC_UPACC_LOCH3_PARAM_n3_START        (6)
#define SOC_UPACC_LOCH3_PARAM_n3_END          (11)
#define SOC_UPACC_LOCH3_PARAM_ddi3_START      (12)
#define SOC_UPACC_LOCH3_PARAM_ddi3_END        (17)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH4_PARAM_UNION
 �ṹ˵��  : LOCH4_PARAM �Ĵ����ṹ���塣��ַƫ����:0x0044����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�1�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tsn4     : 6;  /* bit[0-5]  : ����MAC-e PDU����TSN4�� */
        unsigned int  n4       : 6;  /* bit[6-11] : ����MAC-e PDU����N4�� */
        unsigned int  ddi4     : 6;  /* bit[12-17]: ����MAC-e PDU����DDI4�� */
        unsigned int  reserved : 14; /* bit[18-31]: ������ */
    } reg;
} SOC_UPACC_LOCH4_PARAM_UNION;
#endif
#define SOC_UPACC_LOCH4_PARAM_tsn4_START      (0)
#define SOC_UPACC_LOCH4_PARAM_tsn4_END        (5)
#define SOC_UPACC_LOCH4_PARAM_n4_START        (6)
#define SOC_UPACC_LOCH4_PARAM_n4_END          (11)
#define SOC_UPACC_LOCH4_PARAM_ddi4_START      (12)
#define SOC_UPACC_LOCH4_PARAM_ddi4_END        (17)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH5_PARAM_UNION
 �ṹ˵��  : LOCH5_PARAM �Ĵ����ṹ���塣��ַƫ����:0x0048����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�1�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tsn5     : 6;  /* bit[0-5]  : ����MAC-e PDU����TSN5�� */
        unsigned int  n5       : 6;  /* bit[6-11] : ����MAC-e PDU����N5�� */
        unsigned int  ddi5     : 6;  /* bit[12-17]: ����MAC-e PDU����DDI5�� */
        unsigned int  reserved : 14; /* bit[18-31]: ������ */
    } reg;
} SOC_UPACC_LOCH5_PARAM_UNION;
#endif
#define SOC_UPACC_LOCH5_PARAM_tsn5_START      (0)
#define SOC_UPACC_LOCH5_PARAM_tsn5_END        (5)
#define SOC_UPACC_LOCH5_PARAM_n5_START        (6)
#define SOC_UPACC_LOCH5_PARAM_n5_END          (11)
#define SOC_UPACC_LOCH5_PARAM_ddi5_START      (12)
#define SOC_UPACC_LOCH5_PARAM_ddi5_END        (17)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH6_PARAM_UNION
 �ṹ˵��  : LOCH6_PARAM �Ĵ����ṹ���塣��ַƫ����:0x004C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�1�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tsn6     : 6;  /* bit[0-5]  : ����MAC-e PDU����TSN6�� */
        unsigned int  n6       : 6;  /* bit[6-11] : ����MAC-e PDU����N6�� */
        unsigned int  ddi6     : 6;  /* bit[12-17]: ����MAC-e PDU����DDI6�� */
        unsigned int  reserved : 14; /* bit[18-31]: ������ */
    } reg;
} SOC_UPACC_LOCH6_PARAM_UNION;
#endif
#define SOC_UPACC_LOCH6_PARAM_tsn6_START      (0)
#define SOC_UPACC_LOCH6_PARAM_tsn6_END        (5)
#define SOC_UPACC_LOCH6_PARAM_n6_START        (6)
#define SOC_UPACC_LOCH6_PARAM_n6_END          (11)
#define SOC_UPACC_LOCH6_PARAM_ddi6_START      (12)
#define SOC_UPACC_LOCH6_PARAM_ddi6_END        (17)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH7_PARAM_UNION
 �ṹ˵��  : LOCH7_PARAM �Ĵ����ṹ���塣��ַƫ����:0x0050����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�1�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tsn7     : 6;  /* bit[0-5]  : ����MAC-e PDU����TSN7�� */
        unsigned int  n7       : 6;  /* bit[6-11] : ����MAC-e PDU����N7�� */
        unsigned int  ddi7     : 6;  /* bit[12-17]: ����MAC-e PDU����DDI7�� */
        unsigned int  reserved : 14; /* bit[18-31]: ������ */
    } reg;
} SOC_UPACC_LOCH7_PARAM_UNION;
#endif
#define SOC_UPACC_LOCH7_PARAM_tsn7_START      (0)
#define SOC_UPACC_LOCH7_PARAM_tsn7_END        (5)
#define SOC_UPACC_LOCH7_PARAM_n7_START        (6)
#define SOC_UPACC_LOCH7_PARAM_n7_END          (11)
#define SOC_UPACC_LOCH7_PARAM_ddi7_START      (12)
#define SOC_UPACC_LOCH7_PARAM_ddi7_END        (17)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH8_PARAM_UNION
 �ṹ˵��  : LOCH8_PARAM �Ĵ����ṹ���塣��ַƫ����:0x0054����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�1�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tsn8     : 6;  /* bit[0-5]  : ����MAC-e PDU����TSN8�� */
        unsigned int  n8       : 6;  /* bit[6-11] : ����MAC-e PDU����N8�� */
        unsigned int  ddi8     : 6;  /* bit[12-17]: ����MAC-e PDU����DDI8�� */
        unsigned int  reserved : 14; /* bit[18-31]: ������ */
    } reg;
} SOC_UPACC_LOCH8_PARAM_UNION;
#endif
#define SOC_UPACC_LOCH8_PARAM_tsn8_START      (0)
#define SOC_UPACC_LOCH8_PARAM_tsn8_END        (5)
#define SOC_UPACC_LOCH8_PARAM_n8_START        (6)
#define SOC_UPACC_LOCH8_PARAM_n8_END          (11)
#define SOC_UPACC_LOCH8_PARAM_ddi8_START      (12)
#define SOC_UPACC_LOCH8_PARAM_ddi8_END        (17)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH1_START_ADDR_UNION
 �ṹ˵��  : LOCH1_START_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0058����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�1��ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch1_start_addr : 32; /* bit[0-31]: ���ô���߼��ŵ�1�����ݵ���ʼ��ַ��Ϊbyte��ַ��
                                                           Ҫ��õ�ַWord���롣
                                                           Դ�������鷽ʽʱ���üĴ��������壬����ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH1_START_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH1_START_ADDR_loch1_start_addr_START  (0)
#define SOC_UPACC_LOCH1_START_ADDR_loch1_start_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH2_START_ADDR_UNION
 �ṹ˵��  : LOCH2_START_ADDR �Ĵ����ṹ���塣��ַƫ����:0x005C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�2��ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch2_start_addr : 32; /* bit[0-31]: ���ô���߼��ŵ�2�����ݵ���ʼ��ַ��
                                                           Ҫ��õ�ַDouble Word���롣
                                                           Դ�������鷽ʽʱ���üĴ��������壬����ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH2_START_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH2_START_ADDR_loch2_start_addr_START  (0)
#define SOC_UPACC_LOCH2_START_ADDR_loch2_start_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH3_START_ADDR_UNION
 �ṹ˵��  : LOCH3_START_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0060����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�3��ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch3_start_addr : 32; /* bit[0-31]: ���ô���߼��ŵ�3�����ݵ���ʼ��ַ��
                                                           Ҫ��õ�ַDouble Word���롣
                                                           Դ�������鷽ʽʱ���üĴ��������壬����ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH3_START_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH3_START_ADDR_loch3_start_addr_START  (0)
#define SOC_UPACC_LOCH3_START_ADDR_loch3_start_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH4_START_ADDR_UNION
 �ṹ˵��  : LOCH4_START_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0064����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�4��ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch4_start_addr : 32; /* bit[0-31]: ���ô���߼��ŵ�4�����ݵ���ʼ��ַ��
                                                           Ҫ��õ�ַDouble Word���롣
                                                           Դ�������鷽ʽʱ���üĴ��������壬����ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH4_START_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH4_START_ADDR_loch4_start_addr_START  (0)
#define SOC_UPACC_LOCH4_START_ADDR_loch4_start_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH5_START_ADDR_UNION
 �ṹ˵��  : LOCH5_START_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0068����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�5��ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch5_start_addr : 32; /* bit[0-31]: ���ô���߼��ŵ�5�����ݵ���ʼ��ַ��
                                                           Ҫ��õ�ַDouble Word���롣
                                                           Դ�������鷽ʽʱ���üĴ��������壬����ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH5_START_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH5_START_ADDR_loch5_start_addr_START  (0)
#define SOC_UPACC_LOCH5_START_ADDR_loch5_start_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH6_START_ADDR_UNION
 �ṹ˵��  : LOCH6_START_ADDR �Ĵ����ṹ���塣��ַƫ����:0x006C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�6��ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch6_start_addr : 32; /* bit[0-31]: ���ô���߼��ŵ�6�����ݵ���ʼ��ַ��
                                                           Ҫ��õ�ַDouble Word���롣
                                                           Դ�������鷽ʽʱ���üĴ��������壬����ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH6_START_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH6_START_ADDR_loch6_start_addr_START  (0)
#define SOC_UPACC_LOCH6_START_ADDR_loch6_start_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH7_START_ADDR_UNION
 �ṹ˵��  : LOCH7_START_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0070����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�7��ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch7_start_addr : 32; /* bit[0-31]: ���ô���߼��ŵ�7�����ݵ���ʼ��ַ��
                                                           Ҫ��õ�ַDouble Word���롣
                                                           Դ�������鷽ʽʱ���üĴ��������壬����ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH7_START_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH7_START_ADDR_loch7_start_addr_START  (0)
#define SOC_UPACC_LOCH7_START_ADDR_loch7_start_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH8_START_ADDR_UNION
 �ṹ˵��  : LOCH8_START_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0074����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�8��ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch8_start_addr : 32; /* bit[0-31]: ���ô���߼��ŵ�8�����ݵ���ʼ��ַ��
                                                           Ҫ��õ�ַDouble Word���롣
                                                           Դ�������鷽ʽʱ���üĴ��������壬����ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH8_START_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH8_START_ADDR_loch8_start_addr_START  (0)
#define SOC_UPACC_LOCH8_START_ADDR_loch8_start_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH1_END_ADDR_UNION
 �ṹ˵��  : LOCH1_END_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0078����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�1������ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch1_end_addr : 32; /* bit[0-31]: ���ô���߼��ŵ�1�����ݵĽ�����ַ��
                                                         Ҫ��õ�ַDouble Word���롣
                                                         Դ�������鷽ʽʱ���üĴ��������壬����ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH1_END_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH1_END_ADDR_loch1_end_addr_START  (0)
#define SOC_UPACC_LOCH1_END_ADDR_loch1_end_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH2_END_ADDR_UNION
 �ṹ˵��  : LOCH2_END_ADDR �Ĵ����ṹ���塣��ַƫ����:0x007C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�2������ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch2_end_addr : 32; /* bit[0-31]: ���ô���߼��ŵ�2�����ݵĽ�����ַ��
                                                         Ҫ��õ�ַDouble Word���롣
                                                         Դ�������鷽ʽʱ���üĴ��������壬����ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH2_END_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH2_END_ADDR_loch2_end_addr_START  (0)
#define SOC_UPACC_LOCH2_END_ADDR_loch2_end_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH3_END_ADDR_UNION
 �ṹ˵��  : LOCH3_END_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0080����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�3������ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch3_end_addr : 32; /* bit[0-31]: ���ô���߼��ŵ�3�����ݵĽ�����ַ��
                                                         Ҫ��õ�ַDouble Word���롣
                                                         Դ�������鷽ʽʱ���üĴ��������壬����ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH3_END_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH3_END_ADDR_loch3_end_addr_START  (0)
#define SOC_UPACC_LOCH3_END_ADDR_loch3_end_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH4_END_ADDR_UNION
 �ṹ˵��  : LOCH4_END_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0084����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�4������ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch4_end_addr : 32; /* bit[0-31]: ���ô���߼��ŵ�4�����ݵĽ�����ַ��
                                                         Ҫ��õ�ַDouble Word���롣
                                                         Դ�������鷽ʽʱ���üĴ��������壬����ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH4_END_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH4_END_ADDR_loch4_end_addr_START  (0)
#define SOC_UPACC_LOCH4_END_ADDR_loch4_end_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH5_END_ADDR_UNION
 �ṹ˵��  : LOCH5_END_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0088����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�5������ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch5_end_addr : 32; /* bit[0-31]: ���ô���߼��ŵ�5�����ݵĽ�����ַ��
                                                         Ҫ��õ�ַDouble Word���롣
                                                         Դ�������鷽ʽʱ���üĴ��������壬����ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH5_END_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH5_END_ADDR_loch5_end_addr_START  (0)
#define SOC_UPACC_LOCH5_END_ADDR_loch5_end_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH6_END_ADDR_UNION
 �ṹ˵��  : LOCH6_END_ADDR �Ĵ����ṹ���塣��ַƫ����:0x008C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�6������ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch6_end_addr : 32; /* bit[0-31]: ���ô���߼��ŵ�6�����ݵĽ�����ַ��
                                                         Ҫ��õ�ַDouble Word���롣
                                                         Դ�������鷽ʽʱ���üĴ��������壬����ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH6_END_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH6_END_ADDR_loch6_end_addr_START  (0)
#define SOC_UPACC_LOCH6_END_ADDR_loch6_end_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH7_END_ADDR_UNION
 �ṹ˵��  : LOCH7_END_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0090����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�7������ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch7_end_addr : 32; /* bit[0-31]: ���ô���߼��ŵ�7�����ݵĽ�����ַ��
                                                         Ҫ��õ�ַDouble Word���롣
                                                         Դ�������鷽ʽʱ���üĴ��������壬����ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH7_END_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH7_END_ADDR_loch7_end_addr_START  (0)
#define SOC_UPACC_LOCH7_END_ADDR_loch7_end_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH8_END_ADDR_UNION
 �ṹ˵��  : LOCH8_END_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0094����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�8������ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch8_end_addr : 32; /* bit[0-31]: ���ô���߼��ŵ�8�����ݵĽ�����ַ��
                                                         Ҫ��õ�ַDouble Word���롣
                                                         Դ�������鷽ʽʱ���üĴ��������壬����ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH8_END_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH8_END_ADDR_loch8_end_addr_START  (0)
#define SOC_UPACC_LOCH8_END_ADDR_loch8_end_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH1_READ_ADDR_UNION
 �ṹ˵��  : LOCH1_READ_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0098����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�1����ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch1_read_addr : 32; /* bit[0-31]: �����߼��ŵ�1�Ķ���ʼ��ַ��Ϊbyte��ַ��
                                                          Դ���ݲ��������鷽ʽ����ʱ���üĴ��������һ�������ã�Ӳ���Ӹõ�ַ�������������ݿռ䣬����Դ���ݡ�
                                                          Դ���ݲ������鷽ʽ����ʱ�����üĴ�������Ϊ0��UPACC����ʱ���Ὣ�������ж�����Դ���ݶ���ַ���µ��˼Ĵ��������ڵ��ԡ� */
    } reg;
} SOC_UPACC_LOCH1_READ_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH1_READ_ADDR_loch1_read_addr_START  (0)
#define SOC_UPACC_LOCH1_READ_ADDR_loch1_read_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH2_READ_ADDR_UNION
 �ṹ˵��  : LOCH2_READ_ADDR �Ĵ����ṹ���塣��ַƫ����:0x009C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�2����ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch2_read_addr : 32; /* bit[0-31]: �����߼��ŵ�2�Ķ���ʼ��ַ��Ϊbyte��ַ��
                                                          Դ���ݲ��������鷽ʽ����ʱ���üĴ��������һ�������ã�Ӳ���Ӹõ�ַ�������������ݿռ䣬����Դ���ݡ�
                                                          Դ���ݲ������鷽ʽ����ʱ�����üĴ�������Ϊ0��UPACC����ʱ���Ὣ�������ж�����Դ���ݶ���ַ���µ��˼Ĵ��������ڵ��ԡ� */
    } reg;
} SOC_UPACC_LOCH2_READ_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH2_READ_ADDR_loch2_read_addr_START  (0)
#define SOC_UPACC_LOCH2_READ_ADDR_loch2_read_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH3_READ_ADDR_UNION
 �ṹ˵��  : LOCH3_READ_ADDR �Ĵ����ṹ���塣��ַƫ����:0x00A0����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�3����ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch3_read_addr : 32; /* bit[0-31]: �����߼��ŵ�3�Ķ���ʼ��ַ��Ϊbyte��ַ��
                                                          Դ���ݲ��������鷽ʽ����ʱ���üĴ��������һ�������ã�Ӳ���Ӹõ�ַ�������������ݿռ䣬����Դ���ݡ�
                                                          Դ���ݲ������鷽ʽ����ʱ�����üĴ�������Ϊ0��UPACC����ʱ���Ὣ�������ж�����Դ���ݶ���ַ���µ��˼Ĵ��������ڵ��ԡ� */
    } reg;
} SOC_UPACC_LOCH3_READ_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH3_READ_ADDR_loch3_read_addr_START  (0)
#define SOC_UPACC_LOCH3_READ_ADDR_loch3_read_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH4_READ_ADDR_UNION
 �ṹ˵��  : LOCH4_READ_ADDR �Ĵ����ṹ���塣��ַƫ����:0x00A4����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�4����ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch4_read_addr : 32; /* bit[0-31]: �����߼��ŵ�4�Ķ���ʼ��ַ��Ϊbyte��ַ��
                                                          Դ���ݲ��������鷽ʽ����ʱ���üĴ��������һ�������ã�Ӳ���Ӹõ�ַ�������������ݿռ䣬����Դ���ݡ�
                                                          Դ���ݲ������鷽ʽ����ʱ�����üĴ�������Ϊ0��UPACC����ʱ���Ὣ�������ж�����Դ���ݶ���ַ���µ��˼Ĵ��������ڵ��ԡ� */
    } reg;
} SOC_UPACC_LOCH4_READ_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH4_READ_ADDR_loch4_read_addr_START  (0)
#define SOC_UPACC_LOCH4_READ_ADDR_loch4_read_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH5_READ_ADDR_UNION
 �ṹ˵��  : LOCH5_READ_ADDR �Ĵ����ṹ���塣��ַƫ����:0x00A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�5����ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch5_read_addr : 32; /* bit[0-31]: �����߼��ŵ�5�Ķ���ʼ��ַ��Ϊbyte��ַ��
                                                          Դ���ݲ��������鷽ʽ����ʱ���üĴ��������һ�������ã�Ӳ���Ӹõ�ַ�������������ݿռ䣬����Դ���ݡ�
                                                          Դ���ݲ������鷽ʽ����ʱ�����üĴ�������Ϊ0��UPACC����ʱ���Ὣ�������ж�����Դ���ݶ���ַ���µ��˼Ĵ��������ڵ��ԡ� */
    } reg;
} SOC_UPACC_LOCH5_READ_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH5_READ_ADDR_loch5_read_addr_START  (0)
#define SOC_UPACC_LOCH5_READ_ADDR_loch5_read_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH6_READ_ADDR_UNION
 �ṹ˵��  : LOCH6_READ_ADDR �Ĵ����ṹ���塣��ַƫ����:0x00AC����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�6����ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch6_read_addr : 32; /* bit[0-31]: �����߼��ŵ�6�Ķ���ʼ��ַ��Ϊbyte��ַ��
                                                          Դ���ݲ��������鷽ʽ����ʱ���üĴ��������һ�������ã�Ӳ���Ӹõ�ַ�������������ݿռ䣬����Դ���ݡ�
                                                          Դ���ݲ������鷽ʽ����ʱ�����üĴ�������Ϊ0��UPACC����ʱ���Ὣ�������ж�����Դ���ݶ���ַ���µ��˼Ĵ��������ڵ��ԡ� */
    } reg;
} SOC_UPACC_LOCH6_READ_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH6_READ_ADDR_loch6_read_addr_START  (0)
#define SOC_UPACC_LOCH6_READ_ADDR_loch6_read_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH7_READ_ADDR_UNION
 �ṹ˵��  : LOCH7_READ_ADDR �Ĵ����ṹ���塣��ַƫ����:0x00B0����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�7����ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch7_read_addr : 32; /* bit[0-31]: �����߼��ŵ�7�Ķ���ʼ��ַ��Ϊbyte��ַ��
                                                          Դ���ݲ��������鷽ʽ����ʱ���üĴ��������һ�������ã�Ӳ���Ӹõ�ַ�������������ݿռ䣬����Դ���ݡ�
                                                          Դ���ݲ������鷽ʽ����ʱ�����üĴ�������Ϊ0��UPACC����ʱ���Ὣ�������ж�����Դ���ݶ���ַ���µ��˼Ĵ��������ڵ��ԡ� */
    } reg;
} SOC_UPACC_LOCH7_READ_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH7_READ_ADDR_loch7_read_addr_START  (0)
#define SOC_UPACC_LOCH7_READ_ADDR_loch7_read_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH8_READ_ADDR_UNION
 �ṹ˵��  : LOCH8_READ_ADDR �Ĵ����ṹ���塣��ַƫ����:0x00B4����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�8����ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch8_read_addr : 32; /* bit[0-31]: �����߼��ŵ�8�Ķ���ʼ��ַ��Ϊbyte��ַ��
                                                          Դ���ݲ��������鷽ʽ����ʱ���üĴ��������һ�������ã�Ӳ���Ӹõ�ַ�������������ݿռ䣬����Դ���ݡ�
                                                          Դ���ݲ������鷽ʽ����ʱ�����üĴ�������Ϊ0��UPACC����ʱ���Ὣ�������ж�����Դ���ݶ���ַ���µ��˼Ĵ��������ڵ��ԡ� */
    } reg;
} SOC_UPACC_LOCH8_READ_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH8_READ_ADDR_loch8_read_addr_START  (0)
#define SOC_UPACC_LOCH8_READ_ADDR_loch8_read_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH1_NUM_CFG_UNION
 �ṹ˵��  : LOCH1_NUM_CFG �Ĵ����ṹ���塣��ַƫ����:0x00B8����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�1��������ظ����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch1_read_num   : 16; /* bit[0-15] : �����߼��ŵ�1�Ķ����ݸ�������byteΪ��λ��
                                                            Դ���ݲ��������鷽ʽ����ʱ���üĴ��������һ�������ã�Ӳ�����ݸó��ȴӶ���ַ����Դ���ݡ�
                                                            Դ���ݲ������鷽ʽ����ʱ�����üĴ�������Ϊ0��UPACC����ʱ���Ὣ�������ж�����pdu�γ��ȸ��µ��˼Ĵ��������ڵ��ԡ� */
        unsigned int  loch1_pduary_num : 16; /* bit[16-31]: �����߼��ŵ�1��Դ�������鳤�ȣ���wordΪ��λ�����üĴ�����ֵ�൱�ڴ���ȡpdu�εĸ���*2��
                                                            �üĴ�������Դ���ݲ������鷽ʽ����ʱ�����塣
                                                            ��Դ���ݲ��������鷽ʽ����ʱ�����壬ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH1_NUM_CFG_UNION;
#endif
#define SOC_UPACC_LOCH1_NUM_CFG_loch1_read_num_START    (0)
#define SOC_UPACC_LOCH1_NUM_CFG_loch1_read_num_END      (15)
#define SOC_UPACC_LOCH1_NUM_CFG_loch1_pduary_num_START  (16)
#define SOC_UPACC_LOCH1_NUM_CFG_loch1_pduary_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH2_NUM_CFG_UNION
 �ṹ˵��  : LOCH2_NUM_CFG �Ĵ����ṹ���塣��ַƫ����:0x00BC����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�2��������ظ����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch2_read_num   : 16; /* bit[0-15] : �����߼��ŵ�2�Ķ����ݸ�������byteΪ��λ��
                                                            Դ���ݲ��������鷽ʽ����ʱ���üĴ��������һ�������ã�Ӳ�����ݸó��ȴӶ���ַ����Դ���ݡ�
                                                            Դ���ݲ������鷽ʽ����ʱ�����üĴ�������Ϊ0��UPACC����ʱ���Ὣ�������ж�����pdu�γ��ȸ��µ��˼Ĵ��������ڵ��� */
        unsigned int  loch2_pduary_num : 16; /* bit[16-31]: �����߼��ŵ�2��Դ�������鳤�ȣ���wordΪ��λ�����üĴ�����ֵ�൱�ڴ���ȡpdu�εĸ���*2��
                                                            �üĴ�������Դ���ݲ������鷽ʽ����ʱ�����塣
                                                            ��Դ���ݲ��������鷽ʽ����ʱ�����壬ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH2_NUM_CFG_UNION;
#endif
#define SOC_UPACC_LOCH2_NUM_CFG_loch2_read_num_START    (0)
#define SOC_UPACC_LOCH2_NUM_CFG_loch2_read_num_END      (15)
#define SOC_UPACC_LOCH2_NUM_CFG_loch2_pduary_num_START  (16)
#define SOC_UPACC_LOCH2_NUM_CFG_loch2_pduary_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH3_NUM_CFG_UNION
 �ṹ˵��  : LOCH3_NUM_CFG �Ĵ����ṹ���塣��ַƫ����:0x00C0����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�3��������ظ����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch3_read_num   : 16; /* bit[0-15] : �����߼��ŵ�3�Ķ����ݸ�������byteΪ��λ��
                                                            Դ���ݲ��������鷽ʽ����ʱ���üĴ��������һ�������ã�Ӳ�����ݸó��ȴӶ���ַ����Դ���ݡ�
                                                            Դ���ݲ������鷽ʽ����ʱ�����üĴ�������Ϊ0��UPACC����ʱ���Ὣ�������ж�����pdu�γ��ȸ��µ��˼Ĵ��������ڵ��� */
        unsigned int  loch3_pduary_num : 16; /* bit[16-31]: �����߼��ŵ�3��Դ�������鳤�ȣ���wordΪ��λ�����üĴ�����ֵ�൱�ڴ���ȡpdu�εĸ���*2��
                                                            �üĴ�������Դ���ݲ������鷽ʽ����ʱ�����塣
                                                            ��Դ���ݲ��������鷽ʽ����ʱ�����壬ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH3_NUM_CFG_UNION;
#endif
#define SOC_UPACC_LOCH3_NUM_CFG_loch3_read_num_START    (0)
#define SOC_UPACC_LOCH3_NUM_CFG_loch3_read_num_END      (15)
#define SOC_UPACC_LOCH3_NUM_CFG_loch3_pduary_num_START  (16)
#define SOC_UPACC_LOCH3_NUM_CFG_loch3_pduary_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH4_NUM_CFG_UNION
 �ṹ˵��  : LOCH4_NUM_CFG �Ĵ����ṹ���塣��ַƫ����:0x00C4����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�4��������ظ����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch4_read_num   : 16; /* bit[0-15] : �����߼��ŵ�4�Ķ����ݸ�������byteΪ��λ��
                                                            Դ���ݲ��������鷽ʽ����ʱ���üĴ��������һ�������ã�Ӳ�����ݸó��ȴӶ���ַ����Դ���ݡ�
                                                            Դ���ݲ������鷽ʽ����ʱ�����üĴ�������Ϊ0��UPACC����ʱ���Ὣ�������ж�����pdu�γ��ȸ��µ��˼Ĵ��������ڵ��� */
        unsigned int  loch4_pduary_num : 16; /* bit[16-31]: �����߼��ŵ�4��Դ�������鳤�ȣ���wordΪ��λ�����üĴ�����ֵ�൱�ڴ���ȡpdu�εĸ���*2��
                                                            �üĴ�������Դ���ݲ������鷽ʽ����ʱ�����塣
                                                            ��Դ���ݲ��������鷽ʽ����ʱ�����壬ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH4_NUM_CFG_UNION;
#endif
#define SOC_UPACC_LOCH4_NUM_CFG_loch4_read_num_START    (0)
#define SOC_UPACC_LOCH4_NUM_CFG_loch4_read_num_END      (15)
#define SOC_UPACC_LOCH4_NUM_CFG_loch4_pduary_num_START  (16)
#define SOC_UPACC_LOCH4_NUM_CFG_loch4_pduary_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH5_NUM_CFG_UNION
 �ṹ˵��  : LOCH5_NUM_CFG �Ĵ����ṹ���塣��ַƫ����:0x00C8����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�5��������ظ����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch5_read_num   : 16; /* bit[0-15] : �����߼��ŵ�5�Ķ����ݸ�������byteΪ��λ��
                                                            Դ���ݲ��������鷽ʽ����ʱ���üĴ��������һ�������ã�Ӳ�����ݸó��ȴӶ���ַ����Դ���ݡ�
                                                            Դ���ݲ������鷽ʽ����ʱ�����üĴ�������Ϊ0��UPACC����ʱ���Ὣ�������ж�����pdu�γ��ȸ��µ��˼Ĵ��������ڵ��� */
        unsigned int  loch5_pduary_num : 16; /* bit[16-31]: �����߼��ŵ�5��Դ�������鳤�ȣ���wordΪ��λ�����üĴ�����ֵ�൱�ڴ���ȡpdu�εĸ���*2��
                                                            �üĴ�������Դ���ݲ������鷽ʽ����ʱ�����塣
                                                            ��Դ���ݲ��������鷽ʽ����ʱ�����壬ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH5_NUM_CFG_UNION;
#endif
#define SOC_UPACC_LOCH5_NUM_CFG_loch5_read_num_START    (0)
#define SOC_UPACC_LOCH5_NUM_CFG_loch5_read_num_END      (15)
#define SOC_UPACC_LOCH5_NUM_CFG_loch5_pduary_num_START  (16)
#define SOC_UPACC_LOCH5_NUM_CFG_loch5_pduary_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH6_NUM_CFG_UNION
 �ṹ˵��  : LOCH6_NUM_CFG �Ĵ����ṹ���塣��ַƫ����:0x00CC����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�6��������ظ����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch6_read_num   : 16; /* bit[0-15] : �����߼��ŵ�6�Ķ����ݸ�������byteΪ��λ��
                                                            Դ���ݲ��������鷽ʽ����ʱ���üĴ��������һ�������ã�Ӳ�����ݸó��ȴӶ���ַ����Դ���ݡ�
                                                            Դ���ݲ������鷽ʽ����ʱ�����üĴ�������Ϊ0��UPACC����ʱ���Ὣ�������ж�����pdu�γ��ȸ��µ��˼Ĵ��������ڵ��� */
        unsigned int  loch6_pduary_num : 16; /* bit[16-31]: �����߼��ŵ�6��Դ�������鳤�ȣ���wordΪ��λ�����üĴ�����ֵ�൱�ڴ���ȡpdu�εĸ���*2��
                                                            �üĴ�������Դ���ݲ������鷽ʽ����ʱ�����塣
                                                            ��Դ���ݲ��������鷽ʽ����ʱ�����壬ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH6_NUM_CFG_UNION;
#endif
#define SOC_UPACC_LOCH6_NUM_CFG_loch6_read_num_START    (0)
#define SOC_UPACC_LOCH6_NUM_CFG_loch6_read_num_END      (15)
#define SOC_UPACC_LOCH6_NUM_CFG_loch6_pduary_num_START  (16)
#define SOC_UPACC_LOCH6_NUM_CFG_loch6_pduary_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH7_NUM_CFG_UNION
 �ṹ˵��  : LOCH7_NUM_CFG �Ĵ����ṹ���塣��ַƫ����:0x00D0����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�7��������ظ����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch7_read_num   : 16; /* bit[0-15] : �����߼��ŵ�7�Ķ����ݸ�������byteΪ��λ��
                                                            Դ���ݲ��������鷽ʽ����ʱ���üĴ��������һ�������ã�Ӳ�����ݸó��ȴӶ���ַ����Դ���ݡ�
                                                            Դ���ݲ������鷽ʽ����ʱ�����üĴ�������Ϊ0��UPACC����ʱ���Ὣ�������ж�����pdu�γ��ȸ��µ��˼Ĵ��������ڵ��� */
        unsigned int  loch7_pduary_num : 16; /* bit[16-31]: �����߼��ŵ�7��Դ�������鳤�ȣ���wordΪ��λ�����üĴ�����ֵ�൱�ڴ���ȡpdu�εĸ���*2��
                                                            �üĴ�������Դ���ݲ������鷽ʽ����ʱ�����塣
                                                            ��Դ���ݲ��������鷽ʽ����ʱ�����壬ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH7_NUM_CFG_UNION;
#endif
#define SOC_UPACC_LOCH7_NUM_CFG_loch7_read_num_START    (0)
#define SOC_UPACC_LOCH7_NUM_CFG_loch7_read_num_END      (15)
#define SOC_UPACC_LOCH7_NUM_CFG_loch7_pduary_num_START  (16)
#define SOC_UPACC_LOCH7_NUM_CFG_loch7_pduary_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH8_NUM_CFG_UNION
 �ṹ˵��  : LOCH8_NUM_CFG �Ĵ����ṹ���塣��ַƫ����:0x00D4����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�8��������ظ����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch8_read_num   : 16; /* bit[0-15] : �����߼��ŵ�8�Ķ����ݸ�������byteΪ��λ��
                                                            Դ���ݲ��������鷽ʽ����ʱ���üĴ��������һ�������ã�Ӳ�����ݸó��ȴӶ���ַ����Դ���ݡ�
                                                            Դ���ݲ������鷽ʽ����ʱ�����üĴ�������Ϊ0��UPACC����ʱ���Ὣ�������ж�����pdu�γ��ȸ��µ��˼Ĵ��������ڵ��� */
        unsigned int  loch8_pduary_num : 16; /* bit[16-31]: �����߼��ŵ�8��Դ�������鳤�ȣ���wordΪ��λ�����üĴ�����ֵ�൱�ڴ���ȡpdu�εĸ���*2��
                                                            �üĴ�������Դ���ݲ������鷽ʽ����ʱ�����塣
                                                            ��Դ���ݲ��������鷽ʽ����ʱ�����壬ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH8_NUM_CFG_UNION;
#endif
#define SOC_UPACC_LOCH8_NUM_CFG_loch8_read_num_START    (0)
#define SOC_UPACC_LOCH8_NUM_CFG_loch8_read_num_END      (15)
#define SOC_UPACC_LOCH8_NUM_CFG_loch8_pduary_num_START  (16)
#define SOC_UPACC_LOCH8_NUM_CFG_loch8_pduary_num_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_EN_UNION
 �ṹ˵��  : EN �Ĵ����ṹ���塣��ַƫ����:0x00D8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ģ��ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  upacc_en : 1;  /* bit[0]   : UPACCģ���ʹ���źš�
                                                   0����ֹ��UPACCģ�鲻�������ڲ�״̬��0��
                                                   1��ʹ�ܣ�UPACCģ�鴦�ڹ���״̬�� */
        unsigned int  reserved : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_UPACC_EN_UNION;
#endif
#define SOC_UPACC_EN_upacc_en_START  (0)
#define SOC_UPACC_EN_upacc_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_PDUARY_EN_E_UNION
 �ṹ˵��  : PDUARY_EN_E �Ĵ����ṹ���塣��ַƫ����:0x00DC����ֵ:0x00000000�����:32
 �Ĵ���˵��: Mac-e PDUԴ�������鷽ʽ����ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pduary_en_e : 1;  /* bit[0]   : Mac-e PDUԴ�������鷽ʽ����ʹ���źš�
                                                      0����ֹ��Դ���ݲ��������鷽ʽ���ã�����UPACCV200��
                                                      1��ʹ�ܣ�Դ���ݲ������鷽ʽ���á� */
        unsigned int  reserved    : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_UPACC_PDUARY_EN_E_UNION;
#endif
#define SOC_UPACC_PDUARY_EN_E_pduary_en_e_START  (0)
#define SOC_UPACC_PDUARY_EN_E_pduary_en_e_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH1_PDUARY_ADDR_UNION
 �ṹ˵��  : LOCH1_PDUARY_ADDR �Ĵ����ṹ���塣��ַƫ����:0x00E0����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�1�д���ȡMac-e PDUԴ���������׵�ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch1_pduary_addr : 32; /* bit[0-31]: �����߼��ŵ�1�д���ȡMac-e PDUԴ���������ŵ��׵�ַ��
                                                            Ҫ��Double Word���롣
                                                            ֻ�е�Դ���ݲ������鷽ʽ����ʱ���üĴ��������壻��Դ���ݲ��������鷽ʽ����ʱ���üĴ���ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH1_PDUARY_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH1_PDUARY_ADDR_loch1_pduary_addr_START  (0)
#define SOC_UPACC_LOCH1_PDUARY_ADDR_loch1_pduary_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH2_PDUARY_ADDR_UNION
 �ṹ˵��  : LOCH2_PDUARY_ADDR �Ĵ����ṹ���塣��ַƫ����:0x00E4����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�2�д���ȡMac-e PDUԴ���������׵�ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch2_pduary_addr : 32; /* bit[0-31]: �����߼��ŵ�2�д���ȡMac-e PDUԴ���������ŵ��׵�ַ��
                                                            Ҫ��Double Word���롣
                                                            ֻ�е�Դ���ݲ������鷽ʽ����ʱ���üĴ��������壻��Դ���ݲ��������鷽ʽ����ʱ���üĴ���ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH2_PDUARY_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH2_PDUARY_ADDR_loch2_pduary_addr_START  (0)
#define SOC_UPACC_LOCH2_PDUARY_ADDR_loch2_pduary_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH3_PDUARY_ADDR_UNION
 �ṹ˵��  : LOCH3_PDUARY_ADDR �Ĵ����ṹ���塣��ַƫ����:0x00E8����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�3�д���ȡMac-e PDUԴ���������׵�ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch3_pduary_addr : 32; /* bit[0-31]: �����߼��ŵ�3�д���ȡMac-e PDUԴ���������ŵ��׵�ַ��
                                                            Ҫ��Double Word���롣
                                                            ֻ�е�Դ���ݲ������鷽ʽ����ʱ���üĴ��������壻��Դ���ݲ��������鷽ʽ����ʱ���üĴ���ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH3_PDUARY_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH3_PDUARY_ADDR_loch3_pduary_addr_START  (0)
#define SOC_UPACC_LOCH3_PDUARY_ADDR_loch3_pduary_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH4_PDUARY_ADDR_UNION
 �ṹ˵��  : LOCH4_PDUARY_ADDR �Ĵ����ṹ���塣��ַƫ����:0x00EC����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�4�д���ȡMac-e PDUԴ���������׵�ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch4_pduary_addr : 32; /* bit[0-31]: �����߼��ŵ�4�д���ȡMac-e PDUԴ���������ŵ��׵�ַ��
                                                            Ҫ��Double Word���롣
                                                            ֻ�е�Դ���ݲ������鷽ʽ����ʱ���üĴ��������壻��Դ���ݲ��������鷽ʽ����ʱ���üĴ���ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH4_PDUARY_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH4_PDUARY_ADDR_loch4_pduary_addr_START  (0)
#define SOC_UPACC_LOCH4_PDUARY_ADDR_loch4_pduary_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH5_PDUARY_ADDR_UNION
 �ṹ˵��  : LOCH5_PDUARY_ADDR �Ĵ����ṹ���塣��ַƫ����:0x00F0����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�5�д���ȡMac-e PDUԴ���������׵�ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch5_pduary_addr : 32; /* bit[0-31]: �����߼��ŵ�5�д���ȡMac-e PDUԴ���������ŵ��׵�ַ��
                                                            Ҫ��Double Word���롣
                                                            ֻ�е�Դ���ݲ������鷽ʽ����ʱ���üĴ��������壻��Դ���ݲ��������鷽ʽ����ʱ���üĴ���ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH5_PDUARY_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH5_PDUARY_ADDR_loch5_pduary_addr_START  (0)
#define SOC_UPACC_LOCH5_PDUARY_ADDR_loch5_pduary_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH6_PDUARY_ADDR_UNION
 �ṹ˵��  : LOCH6_PDUARY_ADDR �Ĵ����ṹ���塣��ַƫ����:0x00F4����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�6�д���ȡMac-e PDUԴ���������׵�ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch6_pduary_addr : 32; /* bit[0-31]: �����߼��ŵ�6�д���ȡMac-e PDUԴ���������ŵ��׵�ַ��
                                                            Ҫ��Double Word���롣
                                                            ֻ�е�Դ���ݲ������鷽ʽ����ʱ���üĴ��������壻��Դ���ݲ��������鷽ʽ����ʱ���üĴ���ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH6_PDUARY_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH6_PDUARY_ADDR_loch6_pduary_addr_START  (0)
#define SOC_UPACC_LOCH6_PDUARY_ADDR_loch6_pduary_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH7_PDUARY_ADDR_UNION
 �ṹ˵��  : LOCH7_PDUARY_ADDR �Ĵ����ṹ���塣��ַƫ����:0x00F8����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�7�д���ȡMac-e PDUԴ���������׵�ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch7_pduary_addr : 32; /* bit[0-31]: �����߼��ŵ�7�д���ȡMac-e PDUԴ���������ŵ��׵�ַ��
                                                            Ҫ��Double Word���롣
                                                            ֻ�е�Դ���ݲ������鷽ʽ����ʱ���üĴ��������壻��Դ���ݲ��������鷽ʽ����ʱ���üĴ���ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH7_PDUARY_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH7_PDUARY_ADDR_loch7_pduary_addr_START  (0)
#define SOC_UPACC_LOCH7_PDUARY_ADDR_loch7_pduary_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH8_PDUARY_ADDR_UNION
 �ṹ˵��  : LOCH8_PDUARY_ADDR �Ĵ����ṹ���塣��ַƫ����:0x00FC����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ�8�д���ȡMac-e PDUԴ���������׵�ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch8_pduary_addr : 32; /* bit[0-31]: �����߼��ŵ�8�д���ȡMac-e PDUԴ���������ŵ��׵�ַ��
                                                            Ҫ��Double Word���롣
                                                            ֻ�е�Դ���ݲ������鷽ʽ����ʱ���üĴ��������壻��Դ���ݲ��������鷽ʽ����ʱ���üĴ���ֱ������Ϊ0�� */
    } reg;
} SOC_UPACC_LOCH8_PDUARY_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH8_PDUARY_ADDR_loch8_pduary_addr_START  (0)
#define SOC_UPACC_LOCH8_PDUARY_ADDR_loch8_pduary_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_MAC_ENCAP_START_I1_UNION
 �ṹ˵��  : MAC_ENCAP_START_I1 �Ĵ����ṹ���塣��ַƫ����:0x0100����ֵ:0x00000000�����:32
 �Ĵ���˵��: ������ʽ���üĴ�������������MAC_i/is PDU��װ��������ʽ��
            UPACCV200֧�ֶ�MAC-i/is PDU ���в���װֻ���ƺͷ�װ�Ұ�������������ʽ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mac_encap_start_i1 : 2;  /* bit[0-1] : 00��������MAC-i/is PDU��װ��Ҳ������MAC-i/is PDU���ƣ�
                                                             01��������MAC-i/is PDU��װ����װ�õ����ݽ���ŵ�HARQ Buffer�У�����ŵ�BBP���뻺���С�������MAC-i/is PDU���ƣ�����������ʽ�����ڵ��ԡ�
                                                             10��������MAC-i/is PDU��װ��������MAC-i/is PDU���ƣ���HARQ Buffer��ָ��λ�ô������ݰ��Ƶ�BBP���뻺���С�����������ʽӦ�����ش�MAC-i/is PDU�ĳ�����
                                                             11������MAC-i/is PDU��װ��������װ�õ�����ͬʱ�ֱ��ŵ�HARQ Buffer��BBP���뻺���С�����������ʽӦ�����´�MAC-i/is PDU�ĳ�����
                                                             ��MAC-i/is PDU��װ��ɺ󣬼�INT_RAW_I1�Ĵ����е�encap_end_raw_i1��Ч��Ӳ���߼���ԸüĴ�����bit0�Զ����㣻
                                                             ��MAC-i/is PDU������ɺ󣬼�INT_RAW_I1�Ĵ����е�trans_end_raw_i1��Ч��Ӳ���߼���ԸüĴ�����bit1�Զ����㡣
                                                             ������������ó�����INT_RAW_I�е�addrn_error_raw_i1��loch_num_error_raw_i1��dest_addr_error_raw_i1������һ����Чʱ��Ӳ���߼���ԸüĴ�����bit0��bit1ͬʱ���㡣 */
        unsigned int  reserved           : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_UPACC_MAC_ENCAP_START_I1_UNION;
#endif
#define SOC_UPACC_MAC_ENCAP_START_I1_mac_encap_start_i1_START  (0)
#define SOC_UPACC_MAC_ENCAP_START_I1_mac_encap_start_i1_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH_NUM_I1_UNION
 �ṹ˵��  : LOCH_NUM_I1 �Ĵ����ṹ���塣��ַƫ����:0x0104����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ������Ĵ���������ָʾ���η�װMAC-i/is PDU����Ӽ����߼��ŵ��ж�ȡ���ݡ����üĴ�����������Ϊ0����ʾ��ǰMAC-i/is PDU����SI��ɣ�û���������ݺͲ�������ΪSI�������͡�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch_num_i1 : 4;  /* bit[0-3] : ����ָʾ���η�װMAC-i/is PDU����Ӽ����ŵ�����ȡ���ݡ�
                                                      ���ò�������Ϊ0�����ʾ����ΪSI�������ͣ����������ݺͲ����� */
        unsigned int  reserved    : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_UPACC_LOCH_NUM_I1_UNION;
#endif
#define SOC_UPACC_LOCH_NUM_I1_loch_num_i1_START  (0)
#define SOC_UPACC_LOCH_NUM_I1_loch_num_i1_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_HEAD0_EN_I1_UNION
 �ṹ˵��  : HEAD0_EN_I1 �Ĵ����ṹ���塣��ַƫ����:0x0108����ֵ:0x00000000�����:32
 �Ĵ���˵��: MAC-i header0ʹ�ܼĴ���������ָʾ���η�װ��MAC-i/is PDU���Ƿ����header0������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  head0_en_i1 : 1;  /* bit[0]   : 0��MAC-i/is PDU�в�����header0������
                                                      1��MAC-i/is PDU�а���header0������ */
        unsigned int  reserved    : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_UPACC_HEAD0_EN_I1_UNION;
#endif
#define SOC_UPACC_HEAD0_EN_I1_head0_en_i1_START  (0)
#define SOC_UPACC_HEAD0_EN_I1_head0_en_i1_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_E_RNTI_I1_UNION
 �ṹ˵��  : E_RNTI_I1 �Ĵ����ṹ���塣��ַƫ����:0x010C����ֵ:0x00000000�����:32
 �Ĵ���˵��: E_RNTI���üĴ�������������MAC-i/is PDU header0�е�E-RNTI������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  e_rnti_i1 : 16; /* bit[0-15] : ��head0_en_i1Ϊ1ʱ����������MAC-i/is PDU header0�е�E-RNTI������ */
        unsigned int  reserved  : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_UPACC_E_RNTI_I1_UNION;
#endif
#define SOC_UPACC_E_RNTI_I1_e_rnti_i1_START  (0)
#define SOC_UPACC_E_RNTI_I1_e_rnti_i1_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_SI_EN_I1_UNION
 �ṹ˵��  : SI_EN_I1 �Ĵ����ṹ���塣��ַƫ����:0x0110����ֵ:0x00000000�����:32
 �Ĵ���˵��: SIʹ�ܼĴ���������ָʾ���η�װ��MAC-i/is PDU���Ƿ����SI������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  si_en_i1 : 1;  /* bit[0]   : 0��MAC-i/is PDU�в�����SI������
                                                   1��MAC-i/is PDU�а���SI������ */
        unsigned int  reserved : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_UPACC_SI_EN_I1_UNION;
#endif
#define SOC_UPACC_SI_EN_I1_si_en_i1_START  (0)
#define SOC_UPACC_SI_EN_I1_si_en_i1_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_SI_DATA_I1_UNION
 �ṹ˵��  : SI_DATA_I1 �Ĵ����ṹ���塣��ַƫ����:0x0114����ֵ:0x00000000�����:32
 �Ĵ���˵��: SI�������üĴ�������������MAC-i/is PDU�е�SI������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  si_hlid_i1 : 4;  /* bit[0-3]  : ��si_en_i1Ϊ1ʱ����������MAC-i/is PDU��SI�����е�HLID���ݶΡ� */
        unsigned int  si_hlbs_i1 : 4;  /* bit[4-7]  : ��si_en_i1Ϊ1ʱ����������MAC-i/is PDU��SI�����е�HLBS���ݶΡ� */
        unsigned int  si_tebs_i1 : 5;  /* bit[8-12] : ��si_en_i1Ϊ1ʱ����������MAC-i/is PDU��SI�����е�TEBS���ݶΡ� */
        unsigned int  reserved_0 : 3;  /* bit[13-15]: ���� */
        unsigned int  si_uph_i1  : 5;  /* bit[16-20]: ��si_en_i1Ϊ1ʱ����������MAC-i/is PDU��SI�����е�UPH���ݶΡ� */
        unsigned int  reserved_1 : 11; /* bit[21-31]: ���� */
    } reg;
} SOC_UPACC_SI_DATA_I1_UNION;
#endif
#define SOC_UPACC_SI_DATA_I1_si_hlid_i1_START  (0)
#define SOC_UPACC_SI_DATA_I1_si_hlid_i1_END    (3)
#define SOC_UPACC_SI_DATA_I1_si_hlbs_i1_START  (4)
#define SOC_UPACC_SI_DATA_I1_si_hlbs_i1_END    (7)
#define SOC_UPACC_SI_DATA_I1_si_tebs_i1_START  (8)
#define SOC_UPACC_SI_DATA_I1_si_tebs_i1_END    (12)
#define SOC_UPACC_SI_DATA_I1_si_uph_i1_START   (16)
#define SOC_UPACC_SI_DATA_I1_si_uph_i1_END     (20)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_PADDING_LEN_I1_UNION
 �ṹ˵��  : PADDING_LEN_I1 �Ĵ����ṹ���塣��ַƫ����:0x0118����ֵ:0x00000000�����:32
 �Ĵ���˵��: padding�������üĴ�������������MAC-i/is PDU�е�padding�����ĳ��ȡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  padding_len_i1 : 16; /* bit[0-15] : ��������MAC-i/is PDU��padding�����ĳ��ȡ���bitΪ��λ��
                                                          �����������ֵΪ16'hFFCD��
                                                          ��padding_len����Ϊ0����ʾ���η�װ��MAC-i/is PDU��û��padding������ */
        unsigned int  reserved       : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_UPACC_PADDING_LEN_I1_UNION;
#endif
#define SOC_UPACC_PADDING_LEN_I1_padding_len_i1_START  (0)
#define SOC_UPACC_PADDING_LEN_I1_padding_len_i1_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_TSN_LEN_I1_UNION
 �ṹ˵��  : TSN_LEN_I1 �Ĵ����ṹ���塣��ַƫ����:0x011C����ֵ:0x00000000�����:32
 �Ĵ���˵��: TSN�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tsn_len_i1 : 1;  /* bit[0]   : ��������MAC-i/is PDU��TSN�����ĳ��ȡ�
                                                     1��TSN�ĳ���Ϊ14bits��
                                                     0��TSN�ĳ���Ϊ6bits�� */
        unsigned int  reserved   : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_UPACC_TSN_LEN_I1_UNION;
#endif
#define SOC_UPACC_TSN_LEN_I1_tsn_len_i1_START  (0)
#define SOC_UPACC_TSN_LEN_I1_tsn_len_i1_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_PARAM_ADDR_I1_UNION
 �ṹ˵��  : PARAM_ADDR_I1 �Ĵ����ṹ���塣��ַƫ����:0x0120����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����������ʼ��ַ�Ĵ������������ò��������ڴ洢���д�ŵ���ʼ��ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  param_addr_i1 : 32; /* bit[0-31]: ��������MAC-i/is PDU��װʱ����Ĳ��������ڴ洢���д�ŵ���ʼ��ַ��
                                                        ��byteΪ��λ�����Ǳ�����double word��ַ�������ã����õ�ַ�ĵ���λbit[2:0]����Ϊ3'b000�� */
    } reg;
} SOC_UPACC_PARAM_ADDR_I1_UNION;
#endif
#define SOC_UPACC_PARAM_ADDR_I1_param_addr_i1_START  (0)
#define SOC_UPACC_PARAM_ADDR_I1_param_addr_i1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_HARQ_BUF_ADDR_I1_UNION
 �ṹ˵��  : HARQ_BUF_ADDR_I1 �Ĵ����ṹ���塣��ַƫ����:0x0124����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��װĿ���ַ�������ʼ��ַ�Ĵ������������õ���MAC-i/is PDU��װ��Ŀ�ĵ�ַ����˵���ʼ��ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hraq_buf_addr_i1 : 32; /* bit[0-31]: �������õ���MAC-i/is PDU��װ��Ŀ�ĵ�ַ����˵���ʼ��ַ��MAC-i/is PDU�ķ�װĿ���ַ�������ʼ��ַ����ͬ�ģ����ɸüĴ������á�
                                                           ��byteΪ��λ�����Ǳ�����double word��ַ�������ã����õ�ַ�ĵ���λbit[2:0]����Ϊ2'b000�� */
    } reg;
} SOC_UPACC_HARQ_BUF_ADDR_I1_UNION;
#endif
#define SOC_UPACC_HARQ_BUF_ADDR_I1_hraq_buf_addr_i1_START  (0)
#define SOC_UPACC_HARQ_BUF_ADDR_I1_hraq_buf_addr_i1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_BBP_DEST_ADDR_I1_UNION
 �ṹ˵��  : BBP_DEST_ADDR_I1 �Ĵ����ṹ���塣��ַƫ����:0x0128����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����Ŀ���ַ�Ĵ�������������MAC-i/is PDU���Ƶ�BBP���뻺���Ŀ���ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bbp_dest_addr_i1 : 32; /* bit[0-31]: ��������MAC-i/is PDU���Ƶ�BBP���뻺���Ŀ���ַ��
                                                           ��byteΪ��λ�����Ǳ�����double word��ַ�������ã����õ�ַ�ĵ���λbit[2:0]����Ϊ3'b000�� */
    } reg;
} SOC_UPACC_BBP_DEST_ADDR_I1_UNION;
#endif
#define SOC_UPACC_BBP_DEST_ADDR_I1_bbp_dest_addr_i1_START  (0)
#define SOC_UPACC_BBP_DEST_ADDR_I1_bbp_dest_addr_i1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_TRANS_NUM_I1_UNION
 �ṹ˵��  : TRANS_NUM_I1 �Ĵ����ṹ���塣��ַƫ����:0x012C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �������ݴ�С�Ĵ���������������Ҫ���Ƶ�BBP��MAC-i/is PDU�����ֽ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  trans_num_i1 : 16; /* bit[0-15] : �������õ�������˵�BBP���뻺���е�MAC-i/is PDU���ݴ�С����byteΪ��λ����������BBP��֧��word���ʣ����ʵ�ʰ���ʱ�ᰴ����word���а��Ʋ�����
                                                        �����������ֵΪ16'hFFFC�� */
        unsigned int  reserved     : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_UPACC_TRANS_NUM_I1_UNION;
#endif
#define SOC_UPACC_TRANS_NUM_I1_trans_num_i1_START  (0)
#define SOC_UPACC_TRANS_NUM_I1_trans_num_i1_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_INT_EN_I1_UNION
 �ṹ˵��  : INT_EN_I1 �Ĵ����ṹ���塣��ַƫ����:0x0130����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж�ʹ�ܼĴ������������ø��ж��ź�ʹ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  encap_end_en_i1        : 1;  /* bit[0]    : MAC-i/is PDU��װ����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  trans_end_en_i1        : 1;  /* bit[1]    : MAC-i/is PDU��������ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr1_error_en_i1      : 1;  /* bit[2]    : MAC-i/is PDU�߼��ŵ�1����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr2_error_en_i1      : 1;  /* bit[3]    : MAC-i/is PDU�߼��ŵ�2����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr3_error_en_i1      : 1;  /* bit[4]    : MAC-i/is PDU�߼��ŵ�3����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr4_error_en_i1      : 1;  /* bit[5]    : MAC-i/is PDU�߼��ŵ�4����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr5_error_en_i1      : 1;  /* bit[6]    : MAC-i/is PDU�߼��ŵ�5����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr6_error_en_i1      : 1;  /* bit[7]    : MAC-i/is PDU�߼��ŵ�6����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr7_error_en_i1      : 1;  /* bit[8]    : MAC-i/is PDU�߼��ŵ�7����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr8_error_en_i1      : 1;  /* bit[9]    : MAC-i/is PDU�߼��ŵ�8����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr9_error_en_i1      : 1;  /* bit[10]   : MAC-i/is PDU�߼��ŵ�9����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr10_error_en_i1     : 1;  /* bit[11]   : MAC-i/is PDU�߼��ŵ�10����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr11_error_en_i1     : 1;  /* bit[12]   : MAC-i/is PDU�߼��ŵ�11����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr12_error_en_i1     : 1;  /* bit[13]   : MAC-i/is PDU�߼��ŵ�12����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr13_error_en_i1     : 1;  /* bit[14]   : MAC-i/is PDU�߼��ŵ�13����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr14_error_en_i1     : 1;  /* bit[15]   : MAC-i/is PDU�߼��ŵ�14����ַ���ô����жϡ�
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  param_addr_error_en_i1 : 1;  /* bit[16]   : MAC-i/is PDU���������ַ���ô����жϡ�
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  harq_addr_error_en_i1  : 1;  /* bit[17]   : MAC-i/is PDU��װĿ���ַҲ��������ʼ��ַ���ô����жϡ�
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  dest_addr_eorr_en_i1   : 1;  /* bit[18]   : MAC-i/is PDU����Ŀ���ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  loch_num_error_en_i1   : 1;  /* bit[19]   : �߼��ŵ��������ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  bus_error_en_i1        : 1;  /* bit[20]   : UPACC�����ʵ�Slave�෵��ERROR��Ӧ�ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  dsp_int_en_i1          : 1;  /* bit[21]   : �ز�1�ĸ��ж���Ϸ���DSPʹ��λ��
                                                                  0����ʹ�ܸ�����жϡ�
                                                                  1��ʹ�ܸ�����жϡ� */
        unsigned int  arm_int_en_i1          : 1;  /* bit[22]   : �ز�1�ĸ��ж���Ϸ���ARMʹ��λ��
                                                                  0����ʹ�ܸ�����жϡ�
                                                                  1��ʹ�ܸ�����жϡ� */
        unsigned int  reserved               : 9;  /* bit[23-31]: ���� */
    } reg;
} SOC_UPACC_INT_EN_I1_UNION;
#endif
#define SOC_UPACC_INT_EN_I1_encap_end_en_i1_START         (0)
#define SOC_UPACC_INT_EN_I1_encap_end_en_i1_END           (0)
#define SOC_UPACC_INT_EN_I1_trans_end_en_i1_START         (1)
#define SOC_UPACC_INT_EN_I1_trans_end_en_i1_END           (1)
#define SOC_UPACC_INT_EN_I1_addr1_error_en_i1_START       (2)
#define SOC_UPACC_INT_EN_I1_addr1_error_en_i1_END         (2)
#define SOC_UPACC_INT_EN_I1_addr2_error_en_i1_START       (3)
#define SOC_UPACC_INT_EN_I1_addr2_error_en_i1_END         (3)
#define SOC_UPACC_INT_EN_I1_addr3_error_en_i1_START       (4)
#define SOC_UPACC_INT_EN_I1_addr3_error_en_i1_END         (4)
#define SOC_UPACC_INT_EN_I1_addr4_error_en_i1_START       (5)
#define SOC_UPACC_INT_EN_I1_addr4_error_en_i1_END         (5)
#define SOC_UPACC_INT_EN_I1_addr5_error_en_i1_START       (6)
#define SOC_UPACC_INT_EN_I1_addr5_error_en_i1_END         (6)
#define SOC_UPACC_INT_EN_I1_addr6_error_en_i1_START       (7)
#define SOC_UPACC_INT_EN_I1_addr6_error_en_i1_END         (7)
#define SOC_UPACC_INT_EN_I1_addr7_error_en_i1_START       (8)
#define SOC_UPACC_INT_EN_I1_addr7_error_en_i1_END         (8)
#define SOC_UPACC_INT_EN_I1_addr8_error_en_i1_START       (9)
#define SOC_UPACC_INT_EN_I1_addr8_error_en_i1_END         (9)
#define SOC_UPACC_INT_EN_I1_addr9_error_en_i1_START       (10)
#define SOC_UPACC_INT_EN_I1_addr9_error_en_i1_END         (10)
#define SOC_UPACC_INT_EN_I1_addr10_error_en_i1_START      (11)
#define SOC_UPACC_INT_EN_I1_addr10_error_en_i1_END        (11)
#define SOC_UPACC_INT_EN_I1_addr11_error_en_i1_START      (12)
#define SOC_UPACC_INT_EN_I1_addr11_error_en_i1_END        (12)
#define SOC_UPACC_INT_EN_I1_addr12_error_en_i1_START      (13)
#define SOC_UPACC_INT_EN_I1_addr12_error_en_i1_END        (13)
#define SOC_UPACC_INT_EN_I1_addr13_error_en_i1_START      (14)
#define SOC_UPACC_INT_EN_I1_addr13_error_en_i1_END        (14)
#define SOC_UPACC_INT_EN_I1_addr14_error_en_i1_START      (15)
#define SOC_UPACC_INT_EN_I1_addr14_error_en_i1_END        (15)
#define SOC_UPACC_INT_EN_I1_param_addr_error_en_i1_START  (16)
#define SOC_UPACC_INT_EN_I1_param_addr_error_en_i1_END    (16)
#define SOC_UPACC_INT_EN_I1_harq_addr_error_en_i1_START   (17)
#define SOC_UPACC_INT_EN_I1_harq_addr_error_en_i1_END     (17)
#define SOC_UPACC_INT_EN_I1_dest_addr_eorr_en_i1_START    (18)
#define SOC_UPACC_INT_EN_I1_dest_addr_eorr_en_i1_END      (18)
#define SOC_UPACC_INT_EN_I1_loch_num_error_en_i1_START    (19)
#define SOC_UPACC_INT_EN_I1_loch_num_error_en_i1_END      (19)
#define SOC_UPACC_INT_EN_I1_bus_error_en_i1_START         (20)
#define SOC_UPACC_INT_EN_I1_bus_error_en_i1_END           (20)
#define SOC_UPACC_INT_EN_I1_dsp_int_en_i1_START           (21)
#define SOC_UPACC_INT_EN_I1_dsp_int_en_i1_END             (21)
#define SOC_UPACC_INT_EN_I1_arm_int_en_i1_START           (22)
#define SOC_UPACC_INT_EN_I1_arm_int_en_i1_END             (22)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_INT_RAW_I1_UNION
 �ṹ˵��  : INT_RAW_I1 �Ĵ����ṹ���塣��ַƫ����:0x0134����ֵ:0x00000000�����:32
 �Ĵ���˵��: ԭʼ�ж�״̬�Ĵ��������ڹ�CPU��ѯ���ж��ź�������ǰ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  encap_end_raw_i1        : 1;  /* bit[0]    : MAC-i/is PDU��װ���ԭʼ�ж�λ����װ�������ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  trans_end_raw_i1        : 1;  /* bit[1]    : MAC-i/is PDU����װ���ԭʼ�ж�λ�����Ʋ������ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr1_error_raw_i1      : 1;  /* bit[2]    : MAC-i/is PDU�߼��ŵ�2����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч�� 
                                                                   Դ�������鷽ʽʱ�������Դ���������׵�ַ�������λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr2_error_raw_i1      : 1;  /* bit[3]    : MAC-i/is PDU�߼��ŵ�1����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   Դ�������鷽ʽʱ�������Դ���������׵�ַ�������λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr3_error_raw_i1      : 1;  /* bit[4]    : MAC-i/is PDU�߼��ŵ�3����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   Դ�������鷽ʽʱ�������Դ���������׵�ַ�������λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr4_error_raw_i1      : 1;  /* bit[5]    : MAC-i/is PDU�߼��ŵ�4����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   Դ�������鷽ʽʱ�������Դ���������׵�ַ�������λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr5_error_raw_i1      : 1;  /* bit[6]    : MAC-i/is PDU�߼��ŵ�5����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   Դ�������鷽ʽʱ�������Դ���������׵�ַ�������λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr6_error_raw_i1      : 1;  /* bit[7]    : MAC-i/is PDU�߼��ŵ�6����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   Դ�������鷽ʽʱ�������Դ���������׵�ַ�������λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr7_error_raw_i1      : 1;  /* bit[8]    : MAC-i/is PDU�߼��ŵ�7����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   Դ�������鷽ʽʱ�������Դ���������׵�ַ�������λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr8_error_raw_i1      : 1;  /* bit[9]    : MAC-i/is PDU�߼��ŵ�8����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч�� 
                                                                   Դ�������鷽ʽʱ�������Դ���������׵�ַ�������λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr9_error_raw_i1      : 1;  /* bit[10]   : MAC-i/is PDU�߼��ŵ�9����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч�� 
                                                                   Դ�������鷽ʽʱ�������Դ���������׵�ַ�������λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr10_error_raw_i1     : 1;  /* bit[11]   : MAC-i/is PDU�߼��ŵ�10����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   Դ�������鷽ʽʱ�������Դ���������׵�ַ�������λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr11_error_raw_i1     : 1;  /* bit[12]   : MAC-i/is PDU�߼��ŵ�11����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   Դ�������鷽ʽʱ�������Դ���������׵�ַ�������λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr12_error_raw_i1     : 1;  /* bit[13]   : MAC-i/is PDU�߼��ŵ�12����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   Դ�������鷽ʽʱ�������Դ���������׵�ַ�������λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr13_error_raw_i1     : 1;  /* bit[14]   : MAC-i/is PDU�߼��ŵ�13����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   Դ�������鷽ʽʱ�������Դ���������׵�ַ�������λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr14_error_raw_i1     : 1;  /* bit[15]   : MAC-i/is PDU�߼��ŵ�14����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   Դ�������鷽ʽʱ�������Դ���������׵�ַ�������λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  param_addr_error_raw_i1 : 1;  /* bit[16]   : MAC-i/is PDU���������ַ���ô���ԭʼ�ж�λ�����������ַ�����λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  harq_addr_error_raw_i1  : 1;  /* bit[17]   : MAC-i/is PDU��װĿ���ַҲ��������ʼ��ַ���ô���ԭʼ�ж�λ��Harq buufer��ʼ��ַ�������λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  dest_addr_eorr_raw_i1   : 1;  /* bit[18]   : MAC-i/is PDU����Ŀ���ַ���ô���ԭʼ�ж�λ��Bbp���뻺����ʼ��ַ�����λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  loch_num_error_raw_i1   : 1;  /* bit[19]   : �߼��ŵ��������ô���ԭʼ�ж�λ���߼��ŵ���������[0,14]��Χ֮��ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  bus_error_raw_i1        : 1;  /* bit[20]   : UPACC�����ʵ�Slave�෵��ERROR��Ӧԭʼ�ж�λ��Slave�෵��ERROR��Ӧʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  dsp_int_raw_i1          : 1;  /* bit[21]   : �ز�1�ĸ�����жϷ�����DSPԭʼ�ж�λ��
                                                                   ����Ч�� */
        unsigned int  arm_int_raw_i1          : 1;  /* bit[22]   : �ز�1�ĸ�����жϷ�����ARMԭʼ�ж�λ��
                                                                   ����Ч�� */
        unsigned int  reserved                : 9;  /* bit[23-31]: ���� */
    } reg;
} SOC_UPACC_INT_RAW_I1_UNION;
#endif
#define SOC_UPACC_INT_RAW_I1_encap_end_raw_i1_START         (0)
#define SOC_UPACC_INT_RAW_I1_encap_end_raw_i1_END           (0)
#define SOC_UPACC_INT_RAW_I1_trans_end_raw_i1_START         (1)
#define SOC_UPACC_INT_RAW_I1_trans_end_raw_i1_END           (1)
#define SOC_UPACC_INT_RAW_I1_addr1_error_raw_i1_START       (2)
#define SOC_UPACC_INT_RAW_I1_addr1_error_raw_i1_END         (2)
#define SOC_UPACC_INT_RAW_I1_addr2_error_raw_i1_START       (3)
#define SOC_UPACC_INT_RAW_I1_addr2_error_raw_i1_END         (3)
#define SOC_UPACC_INT_RAW_I1_addr3_error_raw_i1_START       (4)
#define SOC_UPACC_INT_RAW_I1_addr3_error_raw_i1_END         (4)
#define SOC_UPACC_INT_RAW_I1_addr4_error_raw_i1_START       (5)
#define SOC_UPACC_INT_RAW_I1_addr4_error_raw_i1_END         (5)
#define SOC_UPACC_INT_RAW_I1_addr5_error_raw_i1_START       (6)
#define SOC_UPACC_INT_RAW_I1_addr5_error_raw_i1_END         (6)
#define SOC_UPACC_INT_RAW_I1_addr6_error_raw_i1_START       (7)
#define SOC_UPACC_INT_RAW_I1_addr6_error_raw_i1_END         (7)
#define SOC_UPACC_INT_RAW_I1_addr7_error_raw_i1_START       (8)
#define SOC_UPACC_INT_RAW_I1_addr7_error_raw_i1_END         (8)
#define SOC_UPACC_INT_RAW_I1_addr8_error_raw_i1_START       (9)
#define SOC_UPACC_INT_RAW_I1_addr8_error_raw_i1_END         (9)
#define SOC_UPACC_INT_RAW_I1_addr9_error_raw_i1_START       (10)
#define SOC_UPACC_INT_RAW_I1_addr9_error_raw_i1_END         (10)
#define SOC_UPACC_INT_RAW_I1_addr10_error_raw_i1_START      (11)
#define SOC_UPACC_INT_RAW_I1_addr10_error_raw_i1_END        (11)
#define SOC_UPACC_INT_RAW_I1_addr11_error_raw_i1_START      (12)
#define SOC_UPACC_INT_RAW_I1_addr11_error_raw_i1_END        (12)
#define SOC_UPACC_INT_RAW_I1_addr12_error_raw_i1_START      (13)
#define SOC_UPACC_INT_RAW_I1_addr12_error_raw_i1_END        (13)
#define SOC_UPACC_INT_RAW_I1_addr13_error_raw_i1_START      (14)
#define SOC_UPACC_INT_RAW_I1_addr13_error_raw_i1_END        (14)
#define SOC_UPACC_INT_RAW_I1_addr14_error_raw_i1_START      (15)
#define SOC_UPACC_INT_RAW_I1_addr14_error_raw_i1_END        (15)
#define SOC_UPACC_INT_RAW_I1_param_addr_error_raw_i1_START  (16)
#define SOC_UPACC_INT_RAW_I1_param_addr_error_raw_i1_END    (16)
#define SOC_UPACC_INT_RAW_I1_harq_addr_error_raw_i1_START   (17)
#define SOC_UPACC_INT_RAW_I1_harq_addr_error_raw_i1_END     (17)
#define SOC_UPACC_INT_RAW_I1_dest_addr_eorr_raw_i1_START    (18)
#define SOC_UPACC_INT_RAW_I1_dest_addr_eorr_raw_i1_END      (18)
#define SOC_UPACC_INT_RAW_I1_loch_num_error_raw_i1_START    (19)
#define SOC_UPACC_INT_RAW_I1_loch_num_error_raw_i1_END      (19)
#define SOC_UPACC_INT_RAW_I1_bus_error_raw_i1_START         (20)
#define SOC_UPACC_INT_RAW_I1_bus_error_raw_i1_END           (20)
#define SOC_UPACC_INT_RAW_I1_dsp_int_raw_i1_START           (21)
#define SOC_UPACC_INT_RAW_I1_dsp_int_raw_i1_END             (21)
#define SOC_UPACC_INT_RAW_I1_arm_int_raw_i1_START           (22)
#define SOC_UPACC_INT_RAW_I1_arm_int_raw_i1_END             (22)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_INT_MASK_I1_UNION
 �ṹ˵��  : INT_MASK_I1 �Ĵ����ṹ���塣��ַƫ����:0x0138����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���κ��ж�״̬�Ĵ��������ڹ�CPU��ѯ���ж��ź������κ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  encap_end_msk_i1        : 1;  /* bit[0]    : MAC-i/is PDU��װ������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  trans_end_msk_i1        : 1;  /* bit[1]    : MAC-i/is PDU����װ������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr1_error_msk_i1      : 1;  /* bit[2]    : MAC-i/is PDU�߼��ŵ�2����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr2_error_msk_i1      : 1;  /* bit[3]    : MAC-i/is PDU�߼��ŵ�1����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr3_error_msk_i1      : 1;  /* bit[4]    : MAC-i/is PDU�߼��ŵ�3����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr4_error_msk_i1      : 1;  /* bit[5]    : MAC-i/is PDU�߼��ŵ�4����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr5_error_msk_i1      : 1;  /* bit[6]    : MAC-i/is PDU�߼��ŵ�5����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr6_error_msk_i1      : 1;  /* bit[7]    : MAC-i/is PDU�߼��ŵ�6����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr7_error_msk_i1      : 1;  /* bit[8]    : MAC-i/is PDU�߼��ŵ�7����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr8_error_msk_i1      : 1;  /* bit[9]    : MAC-i/is PDU�߼��ŵ�8����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr9_error_msk_i1      : 1;  /* bit[10]   : MAC-i/is PDU�߼��ŵ�9����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr10_error_msk_i1     : 1;  /* bit[11]   : MAC-i/is PDU�߼��ŵ�10����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr11_error_msk_i1     : 1;  /* bit[12]   : MAC-i/is PDU�߼��ŵ�11����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr12_error_msk_i1     : 1;  /* bit[13]   : MAC-i/is PDU�߼��ŵ�12����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr13_error_msk_i1     : 1;  /* bit[14]   : MAC-i/is PDU�߼��ŵ�13����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr14_error_msk_i1     : 1;  /* bit[15]   : MAC-i/is PDU�߼��ŵ�14����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  param_addr_error_msk_i1 : 1;  /* bit[16]   : MAC-i/is PDU���������ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  harq_addr_error_msk_i1  : 1;  /* bit[17]   : MAC-i/is PDU��װĿ���ַҲ��������ʼ��ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  dest_addr_eorr_msk_i1   : 1;  /* bit[18]   : MAC-i/is PDU����Ŀ���ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  loch_num_error_msk_i1   : 1;  /* bit[19]   : �߼��ŵ��������ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  bus_error_msk_i1        : 1;  /* bit[20]   : UPACC�����ʵ�Slave�෵��ERROR��Ӧ���κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  dsp_int_msk_i1          : 1;  /* bit[21]   : �ز�1�ĸ�����жϷ�����DSP���κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  arm_int_msk_i1          : 1;  /* bit[22]   : �ز�1�ĸ�����жϷ�����ARM���κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  reserved                : 9;  /* bit[23-31]: ���� */
    } reg;
} SOC_UPACC_INT_MASK_I1_UNION;
#endif
#define SOC_UPACC_INT_MASK_I1_encap_end_msk_i1_START         (0)
#define SOC_UPACC_INT_MASK_I1_encap_end_msk_i1_END           (0)
#define SOC_UPACC_INT_MASK_I1_trans_end_msk_i1_START         (1)
#define SOC_UPACC_INT_MASK_I1_trans_end_msk_i1_END           (1)
#define SOC_UPACC_INT_MASK_I1_addr1_error_msk_i1_START       (2)
#define SOC_UPACC_INT_MASK_I1_addr1_error_msk_i1_END         (2)
#define SOC_UPACC_INT_MASK_I1_addr2_error_msk_i1_START       (3)
#define SOC_UPACC_INT_MASK_I1_addr2_error_msk_i1_END         (3)
#define SOC_UPACC_INT_MASK_I1_addr3_error_msk_i1_START       (4)
#define SOC_UPACC_INT_MASK_I1_addr3_error_msk_i1_END         (4)
#define SOC_UPACC_INT_MASK_I1_addr4_error_msk_i1_START       (5)
#define SOC_UPACC_INT_MASK_I1_addr4_error_msk_i1_END         (5)
#define SOC_UPACC_INT_MASK_I1_addr5_error_msk_i1_START       (6)
#define SOC_UPACC_INT_MASK_I1_addr5_error_msk_i1_END         (6)
#define SOC_UPACC_INT_MASK_I1_addr6_error_msk_i1_START       (7)
#define SOC_UPACC_INT_MASK_I1_addr6_error_msk_i1_END         (7)
#define SOC_UPACC_INT_MASK_I1_addr7_error_msk_i1_START       (8)
#define SOC_UPACC_INT_MASK_I1_addr7_error_msk_i1_END         (8)
#define SOC_UPACC_INT_MASK_I1_addr8_error_msk_i1_START       (9)
#define SOC_UPACC_INT_MASK_I1_addr8_error_msk_i1_END         (9)
#define SOC_UPACC_INT_MASK_I1_addr9_error_msk_i1_START       (10)
#define SOC_UPACC_INT_MASK_I1_addr9_error_msk_i1_END         (10)
#define SOC_UPACC_INT_MASK_I1_addr10_error_msk_i1_START      (11)
#define SOC_UPACC_INT_MASK_I1_addr10_error_msk_i1_END        (11)
#define SOC_UPACC_INT_MASK_I1_addr11_error_msk_i1_START      (12)
#define SOC_UPACC_INT_MASK_I1_addr11_error_msk_i1_END        (12)
#define SOC_UPACC_INT_MASK_I1_addr12_error_msk_i1_START      (13)
#define SOC_UPACC_INT_MASK_I1_addr12_error_msk_i1_END        (13)
#define SOC_UPACC_INT_MASK_I1_addr13_error_msk_i1_START      (14)
#define SOC_UPACC_INT_MASK_I1_addr13_error_msk_i1_END        (14)
#define SOC_UPACC_INT_MASK_I1_addr14_error_msk_i1_START      (15)
#define SOC_UPACC_INT_MASK_I1_addr14_error_msk_i1_END        (15)
#define SOC_UPACC_INT_MASK_I1_param_addr_error_msk_i1_START  (16)
#define SOC_UPACC_INT_MASK_I1_param_addr_error_msk_i1_END    (16)
#define SOC_UPACC_INT_MASK_I1_harq_addr_error_msk_i1_START   (17)
#define SOC_UPACC_INT_MASK_I1_harq_addr_error_msk_i1_END     (17)
#define SOC_UPACC_INT_MASK_I1_dest_addr_eorr_msk_i1_START    (18)
#define SOC_UPACC_INT_MASK_I1_dest_addr_eorr_msk_i1_END      (18)
#define SOC_UPACC_INT_MASK_I1_loch_num_error_msk_i1_START    (19)
#define SOC_UPACC_INT_MASK_I1_loch_num_error_msk_i1_END      (19)
#define SOC_UPACC_INT_MASK_I1_bus_error_msk_i1_START         (20)
#define SOC_UPACC_INT_MASK_I1_bus_error_msk_i1_END           (20)
#define SOC_UPACC_INT_MASK_I1_dsp_int_msk_i1_START           (21)
#define SOC_UPACC_INT_MASK_I1_dsp_int_msk_i1_END             (21)
#define SOC_UPACC_INT_MASK_I1_arm_int_msk_i1_START           (22)
#define SOC_UPACC_INT_MASK_I1_arm_int_msk_i1_END             (22)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_INT_CLR_I1_UNION
 �ṹ˵��  : INT_CLR_I1 �Ĵ����ṹ���塣��ַƫ����:0x013C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж�״̬����Ĵ��������ڹ�CPU�����ж��ź�״̬���㡣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  encap_end_clr_i1        : 1;  /* bit[0]    : MAC-i/is PDU��װ����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  trans_end_clr_i1        : 1;  /* bit[1]    : MAC-i/is PDU����װ����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr1_error_clr_i1      : 1;  /* bit[2]    : MAC-i/is PDU�߼��ŵ�2����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr2_error_clr_i1      : 1;  /* bit[3]    : MAC-i/is PDU�߼��ŵ�1����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr3_error_clr_i1      : 1;  /* bit[4]    : MAC-i/is PDU�߼��ŵ�3����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr4_error_clr_i1      : 1;  /* bit[5]    : MAC-i/is PDU�߼��ŵ�4����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr5_error_clr_i1      : 1;  /* bit[6]    : MAC-i/is PDU�߼��ŵ�5����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr6_error_clr_i1      : 1;  /* bit[7]    : MAC-i/is PDU�߼��ŵ�6����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr7_error_clr_i1      : 1;  /* bit[8]    : MAC-i/is PDU�߼��ŵ�7����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr8_error_clr_i1      : 1;  /* bit[9]    : MAC-i/is PDU�߼��ŵ�8����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr9_error_clr_i1      : 1;  /* bit[10]   : MAC-i/is PDU�߼��ŵ�9����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr10_error_clr_i1     : 1;  /* bit[11]   : MAC-i/is PDU�߼��ŵ�10����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr11_error_clr_i1     : 1;  /* bit[12]   : MAC-i/is PDU�߼��ŵ�11����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr12_error_clr_i1     : 1;  /* bit[13]   : MAC-i/is PDU�߼��ŵ�12����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr13_error_clr_i1     : 1;  /* bit[14]   : MAC-i/is PDU�߼��ŵ�13����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr14_error_clr_i1     : 1;  /* bit[15]   : MAC-i/is PDU�߼��ŵ�14����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  param_addr_error_clr_i1 : 1;  /* bit[16]   : ���������ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  harq_addr_error_clr_i1  : 1;  /* bit[17]   : MAC-i/is PDU��װĿ���ַҲ��������ʼ��ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  dest_addr_eorr_clr_i1   : 1;  /* bit[18]   : MAC-i/is PDU����Ŀ���ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  loch_num_error_clr_i1   : 1;  /* bit[19]   : �߼��ŵ��������ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  bus_error_clr_i1        : 1;  /* bit[20]   : UPACC�����ʵ�Slave�෵��ERROR��Ӧ�ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  dsp_int_clr_i1          : 1;  /* bit[21]   : �ز�1�ĸ�����жϷ�����DSP�ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  arm_int_clr_i1          : 1;  /* bit[22]   : �ز�1�ĸ�����жϷ�����ARM�ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  reserved                : 9;  /* bit[23-31]: ���� */
    } reg;
} SOC_UPACC_INT_CLR_I1_UNION;
#endif
#define SOC_UPACC_INT_CLR_I1_encap_end_clr_i1_START         (0)
#define SOC_UPACC_INT_CLR_I1_encap_end_clr_i1_END           (0)
#define SOC_UPACC_INT_CLR_I1_trans_end_clr_i1_START         (1)
#define SOC_UPACC_INT_CLR_I1_trans_end_clr_i1_END           (1)
#define SOC_UPACC_INT_CLR_I1_addr1_error_clr_i1_START       (2)
#define SOC_UPACC_INT_CLR_I1_addr1_error_clr_i1_END         (2)
#define SOC_UPACC_INT_CLR_I1_addr2_error_clr_i1_START       (3)
#define SOC_UPACC_INT_CLR_I1_addr2_error_clr_i1_END         (3)
#define SOC_UPACC_INT_CLR_I1_addr3_error_clr_i1_START       (4)
#define SOC_UPACC_INT_CLR_I1_addr3_error_clr_i1_END         (4)
#define SOC_UPACC_INT_CLR_I1_addr4_error_clr_i1_START       (5)
#define SOC_UPACC_INT_CLR_I1_addr4_error_clr_i1_END         (5)
#define SOC_UPACC_INT_CLR_I1_addr5_error_clr_i1_START       (6)
#define SOC_UPACC_INT_CLR_I1_addr5_error_clr_i1_END         (6)
#define SOC_UPACC_INT_CLR_I1_addr6_error_clr_i1_START       (7)
#define SOC_UPACC_INT_CLR_I1_addr6_error_clr_i1_END         (7)
#define SOC_UPACC_INT_CLR_I1_addr7_error_clr_i1_START       (8)
#define SOC_UPACC_INT_CLR_I1_addr7_error_clr_i1_END         (8)
#define SOC_UPACC_INT_CLR_I1_addr8_error_clr_i1_START       (9)
#define SOC_UPACC_INT_CLR_I1_addr8_error_clr_i1_END         (9)
#define SOC_UPACC_INT_CLR_I1_addr9_error_clr_i1_START       (10)
#define SOC_UPACC_INT_CLR_I1_addr9_error_clr_i1_END         (10)
#define SOC_UPACC_INT_CLR_I1_addr10_error_clr_i1_START      (11)
#define SOC_UPACC_INT_CLR_I1_addr10_error_clr_i1_END        (11)
#define SOC_UPACC_INT_CLR_I1_addr11_error_clr_i1_START      (12)
#define SOC_UPACC_INT_CLR_I1_addr11_error_clr_i1_END        (12)
#define SOC_UPACC_INT_CLR_I1_addr12_error_clr_i1_START      (13)
#define SOC_UPACC_INT_CLR_I1_addr12_error_clr_i1_END        (13)
#define SOC_UPACC_INT_CLR_I1_addr13_error_clr_i1_START      (14)
#define SOC_UPACC_INT_CLR_I1_addr13_error_clr_i1_END        (14)
#define SOC_UPACC_INT_CLR_I1_addr14_error_clr_i1_START      (15)
#define SOC_UPACC_INT_CLR_I1_addr14_error_clr_i1_END        (15)
#define SOC_UPACC_INT_CLR_I1_param_addr_error_clr_i1_START  (16)
#define SOC_UPACC_INT_CLR_I1_param_addr_error_clr_i1_END    (16)
#define SOC_UPACC_INT_CLR_I1_harq_addr_error_clr_i1_START   (17)
#define SOC_UPACC_INT_CLR_I1_harq_addr_error_clr_i1_END     (17)
#define SOC_UPACC_INT_CLR_I1_dest_addr_eorr_clr_i1_START    (18)
#define SOC_UPACC_INT_CLR_I1_dest_addr_eorr_clr_i1_END      (18)
#define SOC_UPACC_INT_CLR_I1_loch_num_error_clr_i1_START    (19)
#define SOC_UPACC_INT_CLR_I1_loch_num_error_clr_i1_END      (19)
#define SOC_UPACC_INT_CLR_I1_bus_error_clr_i1_START         (20)
#define SOC_UPACC_INT_CLR_I1_bus_error_clr_i1_END           (20)
#define SOC_UPACC_INT_CLR_I1_dsp_int_clr_i1_START           (21)
#define SOC_UPACC_INT_CLR_I1_dsp_int_clr_i1_END             (21)
#define SOC_UPACC_INT_CLR_I1_arm_int_clr_i1_START           (22)
#define SOC_UPACC_INT_CLR_I1_arm_int_clr_i1_END             (22)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_BUS_ERROR_ADDR_I1_UNION
 �ṹ˵��  : BUS_ERROR_ADDR_I1 �Ĵ����ṹ���塣��ַƫ����:0x0140����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ERROR��ַ�Ĵ��������ڼĴ�Slave�෵��ERROR��Ӧʱ�ĵ�ǰ������ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bus_error_addr_i1 : 32; /* bit[0-31]: ���ڼĴ�UPACC�����ʵ�Slave��Ż�ERROR��Ӧʱ�ĵ�ǰ������ַ�� */
    } reg;
} SOC_UPACC_BUS_ERROR_ADDR_I1_UNION;
#endif
#define SOC_UPACC_BUS_ERROR_ADDR_I1_bus_error_addr_i1_START  (0)
#define SOC_UPACC_BUS_ERROR_ADDR_I1_bus_error_addr_i1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_EN_I1_UNION
 �ṹ˵��  : EN_I1 �Ĵ����ṹ���塣��ַƫ����:0x0144����ֵ:0x00000000�����:32
 �Ĵ���˵��: MAC-i/is PDU��װ������ģ��ʹ�ܼĴ�������������MAC-i/is PDU��װ������ģ��ʹ�����
            UPACC_EN_I1ΪMAC-i/is PDU��װ������ģ�������Ĵ�������������MAC-i/is PDU��װ������ģ��ʹ�����
            DSP������������װ������ͨ�����øüĴ�����bit0Ϊ1����MAC-i/is PDU��װ�����Ʋ�������װ�����Ʋ�����ɺ�Ӳ�����Զ��ԸüĴ������㡣DSP�ڲ�������MAC-i/is PDU��װ������ģ��ʱ��ҲӦ���üĴ�����bit0��Ϊ0���Խ��͹��ġ�
            ������������ó�����INT_RAW_I1�е�addri_error_raw_i1��loch_loch_num_error_raw_i1��dest_addr_error_raw_i1������һ����Чʱ��Ӳ���߼���ԸüĴ�����bit0�Զ����㣬ͬʱ�ԼĴ���MAC_ENCAP_START_I1��bit[1:0]�������㣬�Ը�λUPACC�ڲ���MAC-i/is  PDU��װ������ģ�飬ʹ���ڲ�״̬������IDLE̬��
            ���������UPACC��װ�����˳�ʱ���쳣ʱ���ɶԸüĴ�����bit0д0����UPACC�ڲ�MAC-i/is PDU��װ������ģ���״̬����λ��ʹ�䷵�ص�IDLE̬����ʱ���������ԼĴ���MAC_ENCAP_START_I1��bit[1:0]�������㣬�Է�ֹ�쳣������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  upacc_en_i1 : 1;  /* bit[0]   : ��������MAC-I PDU��װ������ģ��ʹ�����
                                                      0����ֹ��UPACC�ڲ�MAC-I PDU��װ������ģ��UPACC_ACC_I���������ڲ�״̬�ص�IDLE״̬��
                                                      1��ʹ�ܡ�UPACC�ڲ�MAC-I PDU��װ������ģ��UPACC_ACC_I���ڹ���״̬�� */
        unsigned int  reserved    : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_UPACC_EN_I1_UNION;
#endif
#define SOC_UPACC_EN_I1_upacc_en_i1_START  (0)
#define SOC_UPACC_EN_I1_upacc_en_i1_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_HARQ_WRITE_ADDR_I1_UNION
 �ṹ˵��  : HARQ_WRITE_ADDR_I1 �Ĵ����ṹ���塣��ַƫ����:0x0148����ֵ:0x00000000�����:32
 �Ĵ���˵��: HARQ bufferд��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  harq_write_addr_i1 : 32; /* bit[0-31]: ���ڵ���ʱ���㵱�η�װ������ɺ�UPACCʵ��д��HARQ buffer������Byte������
                                                             ��������ʽΪ��װ�Ұ��ƻ��߽����ƣ��򵱷�װ�����������INT_RAW_I1��bit[0]��װ���ԭʼ�ж�λencap_end_raw_i1��Ч֮�󣬼Ĵ���HARQ_WRITE_ADDR_I1��ֵ��Ĵ���HARQ_BUF_ADDR_I1��ֵ����Ľ�������ǵ��η�װ��������У�UPACCʵ��д��HARQ buffer�е�����Byte������
                                                             ֵ��ע����ǣ�����BBP��֧��Word���ʣ����UPACC�ڲ��߼�����жԲ�����Word�����ݣ�ͨ���ڸ�λ����ճ���Word��д���ⲿMemory�����ԣ������Ĵ�����ֱֵ������Ľ������ȵ��η�װ������Ҫ���Ƶ�HARQ buffer�е�������Ҫ�Դ�һЩ�����ֵ���Ϊ7Byte���������ֵ��si_en_i1��padding_len_i1�ȷ�װ�����йء���ͬ�����µ����ֵ���㷽����μ���ʵ�ʷ�װ���ݸ����������װ���ݸ����ڲ�ͬ�����µ�����б�.xlsx���� */
    } reg;
} SOC_UPACC_HARQ_WRITE_ADDR_I1_UNION;
#endif
#define SOC_UPACC_HARQ_WRITE_ADDR_I1_harq_write_addr_i1_START  (0)
#define SOC_UPACC_HARQ_WRITE_ADDR_I1_harq_write_addr_i1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_BBP_WRITE_ADDR_I1_UNION
 �ṹ˵��  : BBP_WRITE_ADDR_I1 �Ĵ����ṹ���塣��ַƫ����:0x014C����ֵ:0x00000000�����:32
 �Ĵ���˵��: BBP ���뻺��д��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bbp_write_addr_i1 : 32; /* bit[0-31]: ���ڵ���ʱ���㵱�η�װ������ɺ�UPACCʵ��д��BBP buffer������Byte������
                                                            ��������ʽΪ��װ�Ұ��ƻ��߽����ƣ��򵱴η�װ�����������INT_RAW_I1��bit[1]�������ԭʼ�ж�λtrans_end_raw_i1��Ч�󣬼Ĵ���BBP_WRITE_ADDR_I1��ֵ��Ĵ���BBP_DEST_ADDR_I1��ֵ����Ľ�������ǵ��η�װ��������У�UPACCʵ��д��BBP���뻺���е�����Byte������
                                                            ֵ��ע����ǣ�����BBP��֧��Word���ʣ����UPACC�ڲ��߼�����жԲ�����Word�����ݣ�ͨ���ڸ�λ����ճ���Word��д���ⲿMemory�����ԣ������Ĵ�����ֱֵ������Ľ������ȵ��η�װ������Ҫ���Ƶ�BBP���뻺���е�������Ҫ�Դ�һЩ�����ֵ���Ϊ7Byte���������ֵ��si_en_i1��padding_len_i1�ȷ�װ��������trans_num_i1�йء���ͬ�����µ����ֵ���㷽����μ���ʵ�ʷ�װ���ݸ����������װ���ݸ����ڲ�ͬ�����µ�����б�.xlsx���� */
    } reg;
} SOC_UPACC_BBP_WRITE_ADDR_I1_UNION;
#endif
#define SOC_UPACC_BBP_WRITE_ADDR_I1_bbp_write_addr_i1_START  (0)
#define SOC_UPACC_BBP_WRITE_ADDR_I1_bbp_write_addr_i1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_PDUARY_EN_I1_UNION
 �ṹ˵��  : PDUARY_EN_I1 �Ĵ����ṹ���塣��ַƫ����:0x0150����ֵ:0x00000000�����:32
 �Ĵ���˵��: Mac-i PDU�ز�1Դ�������鷽ʽ����ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pduary_en_i1 : 1;  /* bit[0]   : Mac-i PDU�ز�1��Դ�������鷽ʽ����ʹ���źš�
                                                       0����ֹ��Դ���ݲ��������鷽ʽ���ã�����UPACCV200��
                                                       1��ʹ�ܣ�Դ���ݲ������鷽ʽ���á� */
        unsigned int  reserved     : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_UPACC_PDUARY_EN_I1_UNION;
#endif
#define SOC_UPACC_PDUARY_EN_I1_pduary_en_i1_START  (0)
#define SOC_UPACC_PDUARY_EN_I1_pduary_en_i1_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_MAC_ENCAP_START_I2_UNION
 �ṹ˵��  : MAC_ENCAP_START_I2 �Ĵ����ṹ���塣��ַƫ����:0x0200����ֵ:0x00000000�����:32
 �Ĵ���˵��: ������ʽ���üĴ�������������MAC_i/is PDU��װ��������ʽ��
            UPACCV200֧�ֶ�MAC-i/is PDU ���в���װֻ���ƺͷ�װ�Ұ�������������ʽ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mac_encap_start_i2 : 2;  /* bit[0-1] : 00��������MAC-i/is PDU��װ��Ҳ������MAC-i/is PDU���ƣ�
                                                             01��������MAC-i/is PDU��װ����װ�õ����ݽ���ŵ�HARQ Buffer�У�����ŵ�BBP���뻺���С�������MAC-i/is PDU���ƣ�����������ʽ�����ڵ��ԡ�
                                                             10��������MAC-i/is PDU��װ��������MAC-i/is PDU���ƣ���HARQ Buffer��ָ��λ�ô������ݰ��Ƶ�BBP���뻺���С�����������ʽӦ�����ش�MAC-i/is PDU�ĳ�����
                                                             11������MAC-i/is PDU��װ��������װ�õ�����ͬʱ�ֱ��ŵ�HARQ Buffer��BBP���뻺���С�����������ʽӦ�����´�MAC-i/is PDU�ĳ�����
                                                             ��MAC-i/is PDU��װ��ɺ󣬼�INT_RAW_I1�Ĵ����е�encap_end_raw_i1��Ч��Ӳ���߼���ԸüĴ�����bit0�Զ����㣻
                                                             ��MAC-i/is PDU������ɺ󣬼�INT_RAW_I1�Ĵ����е�trans_end_raw_i1��Ч��Ӳ���߼���ԸüĴ�����bit1�Զ����㡣
                                                             ������������ó�����INT_RAW_I1�е�addrn_error_raw_i1��loch_num_error_raw_i1��dest_addr_error_raw_i1������һ����Чʱ��Ӳ���߼���ԸüĴ�����bit0��bit1ͬʱ���㡣 */
        unsigned int  reserved           : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_UPACC_MAC_ENCAP_START_I2_UNION;
#endif
#define SOC_UPACC_MAC_ENCAP_START_I2_mac_encap_start_i2_START  (0)
#define SOC_UPACC_MAC_ENCAP_START_I2_mac_encap_start_i2_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_LOCH_NUM_I2_UNION
 �ṹ˵��  : LOCH_NUM_I2 �Ĵ����ṹ���塣��ַƫ����:0x0204����ֵ:0x00000000�����:32
 �Ĵ���˵��: �߼��ŵ������Ĵ���������ָʾ���η�װMAC-i/is PDU����Ӽ����߼��ŵ��ж�ȡ���ݡ����üĴ�����������Ϊ0����ʾ��ǰMAC-i/is PDU����SI��ɣ�û���������ݺͲ�������ΪSI�������͡�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  loch_num_i2 : 4;  /* bit[0-3] : ����ָʾ���η�װMAC-i/is PDU����Ӽ����ŵ�����ȡ���ݡ�
                                                      ���ò�������Ϊ0�����ʾ����ΪSI�������ͣ����������ݺͲ����� */
        unsigned int  reserved    : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_UPACC_LOCH_NUM_I2_UNION;
#endif
#define SOC_UPACC_LOCH_NUM_I2_loch_num_i2_START  (0)
#define SOC_UPACC_LOCH_NUM_I2_loch_num_i2_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_HEAD0_EN_I2_UNION
 �ṹ˵��  : HEAD0_EN_I2 �Ĵ����ṹ���塣��ַƫ����:0x0208����ֵ:0x00000000�����:32
 �Ĵ���˵��: MAC-i header0ʹ�ܼĴ���������ָʾ���η�װ��MAC-i/is PDU���Ƿ����header0������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  head0_en_i2 : 1;  /* bit[0]   : 0��MAC-i/is PDU�в�����header0������
                                                      1��MAC-i/is PDU�а���header0������ */
        unsigned int  reserved    : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_UPACC_HEAD0_EN_I2_UNION;
#endif
#define SOC_UPACC_HEAD0_EN_I2_head0_en_i2_START  (0)
#define SOC_UPACC_HEAD0_EN_I2_head0_en_i2_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_E_RNTI_I2_UNION
 �ṹ˵��  : E_RNTI_I2 �Ĵ����ṹ���塣��ַƫ����:0x020C����ֵ:0x00000000�����:32
 �Ĵ���˵��: E_RNTI���üĴ�������������MAC-i/is PDU header0�е�E-RNTI������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  e_rnti_i2 : 16; /* bit[0-15] : ��head0_en_i2Ϊ1ʱ����������MAC-i/is PDU header0�е�E-RNTI������ */
        unsigned int  reserved  : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_UPACC_E_RNTI_I2_UNION;
#endif
#define SOC_UPACC_E_RNTI_I2_e_rnti_i2_START  (0)
#define SOC_UPACC_E_RNTI_I2_e_rnti_i2_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_SI_EN_I2_UNION
 �ṹ˵��  : SI_EN_I2 �Ĵ����ṹ���塣��ַƫ����:0x0210����ֵ:0x00000000�����:32
 �Ĵ���˵��: SIʹ�ܼĴ���������ָʾ���η�װ��MAC-i/is PDU���Ƿ����SI������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  si_en_i2 : 1;  /* bit[0]   : 0��MAC-i/is PDU�в�����SI������
                                                   1��MAC-i/is PDU�а���SI������ */
        unsigned int  reserved : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_UPACC_SI_EN_I2_UNION;
#endif
#define SOC_UPACC_SI_EN_I2_si_en_i2_START  (0)
#define SOC_UPACC_SI_EN_I2_si_en_i2_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_SI_DATA_I2_UNION
 �ṹ˵��  : SI_DATA_I2 �Ĵ����ṹ���塣��ַƫ����:0x0214����ֵ:0x00000000�����:32
 �Ĵ���˵��: SI�������üĴ�������������MAC-i/is PDU�е�SI������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  si_hlid_i2 : 4;  /* bit[0-3]  : ��si_en_i2Ϊ1ʱ����������MAC-i/is PDU��SI�����е�HLID���ݶΡ� */
        unsigned int  si_hlbs_i2 : 4;  /* bit[4-7]  : ��si_en_i2Ϊ1ʱ����������MAC-i/is PDU��SI�����е�HLBS���ݶΡ� */
        unsigned int  si_tebs_i2 : 5;  /* bit[8-12] : ��si_en_i2Ϊ1ʱ����������MAC-i/is PDU��SI�����е�TEBS���ݶΡ� */
        unsigned int  reserved_0 : 3;  /* bit[13-15]: ���� */
        unsigned int  si_uph_i2  : 5;  /* bit[16-20]: ��si_en_i2Ϊ1ʱ����������MAC-i/is PDU��SI�����е�UPH���ݶΡ� */
        unsigned int  reserved_1 : 11; /* bit[21-31]: ���� */
    } reg;
} SOC_UPACC_SI_DATA_I2_UNION;
#endif
#define SOC_UPACC_SI_DATA_I2_si_hlid_i2_START  (0)
#define SOC_UPACC_SI_DATA_I2_si_hlid_i2_END    (3)
#define SOC_UPACC_SI_DATA_I2_si_hlbs_i2_START  (4)
#define SOC_UPACC_SI_DATA_I2_si_hlbs_i2_END    (7)
#define SOC_UPACC_SI_DATA_I2_si_tebs_i2_START  (8)
#define SOC_UPACC_SI_DATA_I2_si_tebs_i2_END    (12)
#define SOC_UPACC_SI_DATA_I2_si_uph_i2_START   (16)
#define SOC_UPACC_SI_DATA_I2_si_uph_i2_END     (20)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_PADDING_LEN_I2_UNION
 �ṹ˵��  : PADDING_LEN_I2 �Ĵ����ṹ���塣��ַƫ����:0x0218����ֵ:0x00000000�����:32
 �Ĵ���˵��: padding�������üĴ�������������MAC-i/is PDU�е�padding�����ĳ��ȡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  padding_len_i2 : 16; /* bit[0-15] : ��������MAC-i/is PDU��padding�����ĳ��ȡ���bitΪ��λ��
                                                          �����������ֵΪ16'hFFCD��
                                                          ��padding_len_i2����Ϊ0����ʾ���η�װ��MAC-i/is PDU��û��padding������ */
        unsigned int  reserved       : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_UPACC_PADDING_LEN_I2_UNION;
#endif
#define SOC_UPACC_PADDING_LEN_I2_padding_len_i2_START  (0)
#define SOC_UPACC_PADDING_LEN_I2_padding_len_i2_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_TSN_LEN_I2_UNION
 �ṹ˵��  : TSN_LEN_I2 �Ĵ����ṹ���塣��ַƫ����:0x021C����ֵ:0x00000000�����:32
 �Ĵ���˵��: TSN�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tsn_len_i2 : 1;  /* bit[0]   : ��������MAC-i/is PDU��TSN�����ĳ��ȡ�
                                                     1��TSN�ĳ���Ϊ14bits��
                                                     0��TSN�ĳ���Ϊ6bits�� */
        unsigned int  reserved   : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_UPACC_TSN_LEN_I2_UNION;
#endif
#define SOC_UPACC_TSN_LEN_I2_tsn_len_i2_START  (0)
#define SOC_UPACC_TSN_LEN_I2_tsn_len_i2_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_PARAM_ADDR_I2_UNION
 �ṹ˵��  : PARAM_ADDR_I2 �Ĵ����ṹ���塣��ַƫ����:0x0220����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����������ʼ��ַ�Ĵ������������ò��������ڴ洢���д�ŵ���ʼ��ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  param_addr_i2 : 32; /* bit[0-31]: ��������MAC-i/is PDU��װʱ����Ĳ��������ڴ洢���д�ŵ���ʼ��ַ��
                                                        ��byteΪ��λ�����Ǳ�����double word��ַ�������ã����õ�ַ�ĵ���λbit[2:0]����Ϊ3'b000�� */
    } reg;
} SOC_UPACC_PARAM_ADDR_I2_UNION;
#endif
#define SOC_UPACC_PARAM_ADDR_I2_param_addr_i2_START  (0)
#define SOC_UPACC_PARAM_ADDR_I2_param_addr_i2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_HARQ_BUF_ADDR_I2_UNION
 �ṹ˵��  : HARQ_BUF_ADDR_I2 �Ĵ����ṹ���塣��ַƫ����:0x0224����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��װĿ���ַ�������ʼ��ַ�Ĵ������������õ���MAC-i/is PDU��װ��Ŀ�ĵ�ַ����˵���ʼ��ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hraq_buf_addr_i2 : 32; /* bit[0-31]: �������õ���MAC-i/is PDU��װ��Ŀ�ĵ�ַ����˵���ʼ��ַ��MAC-i/is PDU�ķ�װĿ���ַ�������ʼ��ַ����ͬ�ģ����ɸüĴ������á�
                                                           ��byteΪ��λ�����Ǳ�����double word��ַ�������ã����õ�ַ�ĵ���λbit[2:0]����Ϊ3'b000�� */
    } reg;
} SOC_UPACC_HARQ_BUF_ADDR_I2_UNION;
#endif
#define SOC_UPACC_HARQ_BUF_ADDR_I2_hraq_buf_addr_i2_START  (0)
#define SOC_UPACC_HARQ_BUF_ADDR_I2_hraq_buf_addr_i2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_BBP_DEST_ADDR_I2_UNION
 �ṹ˵��  : BBP_DEST_ADDR_I2 �Ĵ����ṹ���塣��ַƫ����:0x0228����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����Ŀ���ַ�Ĵ�������������MAC-i/is PDU���Ƶ�BBP���뻺���Ŀ���ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bbp_dest_addr_i2 : 32; /* bit[0-31]: ��������MAC-i/is PDU���Ƶ�BBP���뻺���Ŀ���ַ��
                                                           ��byteΪ��λ�����Ǳ�����double word��ַ�������ã����õ�ַ�ĵ���λbit[2:0]����Ϊ3'b000�� */
    } reg;
} SOC_UPACC_BBP_DEST_ADDR_I2_UNION;
#endif
#define SOC_UPACC_BBP_DEST_ADDR_I2_bbp_dest_addr_i2_START  (0)
#define SOC_UPACC_BBP_DEST_ADDR_I2_bbp_dest_addr_i2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_TRANS_NUM_I2_UNION
 �ṹ˵��  : TRANS_NUM_I2 �Ĵ����ṹ���塣��ַƫ����:0x022C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �������ݴ�С�Ĵ���������������Ҫ���Ƶ�BBP��MAC-i/is PDU�����ֽ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  trans_num_i2 : 16; /* bit[0-15] : �������õ�������˵�BBP���뻺���е�MAC-i/is PDU���ݴ�С����byteΪ��λ����������BBP��֧��word���ʣ����ʵ�ʰ���ʱ�ᰴ����word���а��Ʋ�����
                                                        �����������ֵΪ16'hFFFC�� */
        unsigned int  reserved     : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_UPACC_TRANS_NUM_I2_UNION;
#endif
#define SOC_UPACC_TRANS_NUM_I2_trans_num_i2_START  (0)
#define SOC_UPACC_TRANS_NUM_I2_trans_num_i2_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_INT_EN_I2_UNION
 �ṹ˵��  : INT_EN_I2 �Ĵ����ṹ���塣��ַƫ����:0x0230����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж�ʹ�ܼĴ������������ø��ж��ź�ʹ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  encap_end_en_i2        : 1;  /* bit[0]    : MAC-i/is PDU��װ����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  trans_end_en_i2        : 1;  /* bit[1]    : MAC-i/is PDU��������ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr1_error_en_i2      : 1;  /* bit[2]    : MAC-i/is PDU�߼��ŵ�1����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr2_error_en_i2      : 1;  /* bit[3]    : MAC-i/is PDU�߼��ŵ�2����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr3_error_en_i2      : 1;  /* bit[4]    : MAC-i/is PDU�߼��ŵ�3����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr4_error_en_i2      : 1;  /* bit[5]    : MAC-i/is PDU�߼��ŵ�4����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr5_error_en_i2      : 1;  /* bit[6]    : MAC-i/is PDU�߼��ŵ�5����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr6_error_en_i2      : 1;  /* bit[7]    : MAC-i/is PDU�߼��ŵ�6����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr7_error_en_i2      : 1;  /* bit[8]    : MAC-i/is PDU�߼��ŵ�7����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr8_error_en_i2      : 1;  /* bit[9]    : MAC-i/is PDU�߼��ŵ�8����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr9_error_en_i2      : 1;  /* bit[10]   : MAC-i/is PDU�߼��ŵ�9����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr10_error_en_i2     : 1;  /* bit[11]   : MAC-i/is PDU�߼��ŵ�10����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr11_error_en_i2     : 1;  /* bit[12]   : MAC-i/is PDU�߼��ŵ�11����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr12_error_en_i2     : 1;  /* bit[13]   : MAC-i/is PDU�߼��ŵ�12����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr13_error_en_i2     : 1;  /* bit[14]   : MAC-i/is PDU�߼��ŵ�13����ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  addr14_error_en_i2     : 1;  /* bit[15]   : MAC-i/is PDU�߼��ŵ�14����ַ���ô����жϡ�
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  param_addr_error_en_i2 : 1;  /* bit[16]   : MAC-i/is PDU���������ַ���ô����жϡ�
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  harq_addr_error_en_i2  : 1;  /* bit[17]   : MAC-i/is PDU��װĿ���ַҲ��������ʼ��ַ���ô����жϡ�
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  dest_addr_eorr_en_i2   : 1;  /* bit[18]   : MAC-i/is PDU����Ŀ���ַ���ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  loch_num_error_en_i2   : 1;  /* bit[19]   : �߼��ŵ��������ô����ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  bus_error_en_i2        : 1;  /* bit[20]   : UPACC�����ʵ�Slave�෵��ERROR��Ӧ�ж�ʹ��λ��
                                                                  0����ʹ�ܸ��жϡ�
                                                                  1��ʹ�ܸ��жϡ� */
        unsigned int  dsp_int_en_i2          : 1;  /* bit[21]   : �ز�2�ĸ��ж���Ϸ���DSPʹ��λ��
                                                                  0����ʹ�ܸ�����жϡ�
                                                                  1��ʹ�ܸ�����жϡ� */
        unsigned int  arm_int_en_12          : 1;  /* bit[22]   : �ز�2�ĸ��ж���Ϸ���ARMʹ��λ��
                                                                  0����ʹ�ܸ�����жϡ�
                                                                  1��ʹ�ܸ�����жϡ� */
        unsigned int  reserved               : 9;  /* bit[23-31]: ���� */
    } reg;
} SOC_UPACC_INT_EN_I2_UNION;
#endif
#define SOC_UPACC_INT_EN_I2_encap_end_en_i2_START         (0)
#define SOC_UPACC_INT_EN_I2_encap_end_en_i2_END           (0)
#define SOC_UPACC_INT_EN_I2_trans_end_en_i2_START         (1)
#define SOC_UPACC_INT_EN_I2_trans_end_en_i2_END           (1)
#define SOC_UPACC_INT_EN_I2_addr1_error_en_i2_START       (2)
#define SOC_UPACC_INT_EN_I2_addr1_error_en_i2_END         (2)
#define SOC_UPACC_INT_EN_I2_addr2_error_en_i2_START       (3)
#define SOC_UPACC_INT_EN_I2_addr2_error_en_i2_END         (3)
#define SOC_UPACC_INT_EN_I2_addr3_error_en_i2_START       (4)
#define SOC_UPACC_INT_EN_I2_addr3_error_en_i2_END         (4)
#define SOC_UPACC_INT_EN_I2_addr4_error_en_i2_START       (5)
#define SOC_UPACC_INT_EN_I2_addr4_error_en_i2_END         (5)
#define SOC_UPACC_INT_EN_I2_addr5_error_en_i2_START       (6)
#define SOC_UPACC_INT_EN_I2_addr5_error_en_i2_END         (6)
#define SOC_UPACC_INT_EN_I2_addr6_error_en_i2_START       (7)
#define SOC_UPACC_INT_EN_I2_addr6_error_en_i2_END         (7)
#define SOC_UPACC_INT_EN_I2_addr7_error_en_i2_START       (8)
#define SOC_UPACC_INT_EN_I2_addr7_error_en_i2_END         (8)
#define SOC_UPACC_INT_EN_I2_addr8_error_en_i2_START       (9)
#define SOC_UPACC_INT_EN_I2_addr8_error_en_i2_END         (9)
#define SOC_UPACC_INT_EN_I2_addr9_error_en_i2_START       (10)
#define SOC_UPACC_INT_EN_I2_addr9_error_en_i2_END         (10)
#define SOC_UPACC_INT_EN_I2_addr10_error_en_i2_START      (11)
#define SOC_UPACC_INT_EN_I2_addr10_error_en_i2_END        (11)
#define SOC_UPACC_INT_EN_I2_addr11_error_en_i2_START      (12)
#define SOC_UPACC_INT_EN_I2_addr11_error_en_i2_END        (12)
#define SOC_UPACC_INT_EN_I2_addr12_error_en_i2_START      (13)
#define SOC_UPACC_INT_EN_I2_addr12_error_en_i2_END        (13)
#define SOC_UPACC_INT_EN_I2_addr13_error_en_i2_START      (14)
#define SOC_UPACC_INT_EN_I2_addr13_error_en_i2_END        (14)
#define SOC_UPACC_INT_EN_I2_addr14_error_en_i2_START      (15)
#define SOC_UPACC_INT_EN_I2_addr14_error_en_i2_END        (15)
#define SOC_UPACC_INT_EN_I2_param_addr_error_en_i2_START  (16)
#define SOC_UPACC_INT_EN_I2_param_addr_error_en_i2_END    (16)
#define SOC_UPACC_INT_EN_I2_harq_addr_error_en_i2_START   (17)
#define SOC_UPACC_INT_EN_I2_harq_addr_error_en_i2_END     (17)
#define SOC_UPACC_INT_EN_I2_dest_addr_eorr_en_i2_START    (18)
#define SOC_UPACC_INT_EN_I2_dest_addr_eorr_en_i2_END      (18)
#define SOC_UPACC_INT_EN_I2_loch_num_error_en_i2_START    (19)
#define SOC_UPACC_INT_EN_I2_loch_num_error_en_i2_END      (19)
#define SOC_UPACC_INT_EN_I2_bus_error_en_i2_START         (20)
#define SOC_UPACC_INT_EN_I2_bus_error_en_i2_END           (20)
#define SOC_UPACC_INT_EN_I2_dsp_int_en_i2_START           (21)
#define SOC_UPACC_INT_EN_I2_dsp_int_en_i2_END             (21)
#define SOC_UPACC_INT_EN_I2_arm_int_en_12_START           (22)
#define SOC_UPACC_INT_EN_I2_arm_int_en_12_END             (22)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_INT_RAW_I2_UNION
 �ṹ˵��  : INT_RAW_I2 �Ĵ����ṹ���塣��ַƫ����:0x0234����ֵ:0x00000000�����:32
 �Ĵ���˵��: ԭʼ�ж�״̬�Ĵ��������ڹ�CPU��ѯ���ж��ź�������ǰ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  encap_end_raw_i2        : 1;  /* bit[0]    : MAC-i/is PDU��װ���ԭʼ�ж�λ����װ�������ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  trans_end_raw_i2        : 1;  /* bit[1]    : MAC-i/is PDU����װ���ԭʼ�ж�λ�����Ʋ������ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr1_error_raw_i2      : 1;  /* bit[2]    : MAC-i/is PDU�߼��ŵ�2����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr2_error_raw_i2      : 1;  /* bit[3]    : MAC-i/is PDU�߼��ŵ�1����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr3_error_raw_i2      : 1;  /* bit[4]    : MAC-i/is PDU�߼��ŵ�3����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr4_error_raw_i2      : 1;  /* bit[5]    : MAC-i/is PDU�߼��ŵ�4����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr5_error_raw_i2      : 1;  /* bit[6]    : MAC-i/is PDU�߼��ŵ�5����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr6_error_raw_i2      : 1;  /* bit[7]    : MAC-i/is PDU�߼��ŵ�6����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr7_error_raw_i2      : 1;  /* bit[8]    : MAC-i/is PDU�߼��ŵ�7����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr8_error_raw_i2      : 1;  /* bit[9]    : MAC-i/is PDU�߼��ŵ�8����ַ���ô���ԭʼ�ж�λ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr9_error_raw_i2      : 1;  /* bit[10]   : MAC-i/is PDU�߼��ŵ�9����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr10_error_raw_i2     : 1;  /* bit[11]   : MAC-i/is PDU�߼��ŵ�10����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr11_error_raw_i2     : 1;  /* bit[12]   : MAC-i/is PDU�߼��ŵ�11����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr12_error_raw_i2     : 1;  /* bit[13]   : MAC-i/is PDU�߼��ŵ�12����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr13_error_raw_i2     : 1;  /* bit[14]   : MAC-i/is PDU�߼��ŵ�13����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  addr14_error_raw_i2     : 1;  /* bit[15]   : MAC-i/is PDU�߼��ŵ�14����ַ���ô���ԭʼ�ж�λ��
                                                                   Դ���ݷ����鷽ʽʱ������ַ������ʼ��ַ����ֹ��ַ֮��ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  param_addr_error_raw_i2 : 1;  /* bit[16]   : MAC-i/is PDU���������ַ���ô���ԭʼ�ж�λ�����������ַ�����λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  harq_addr_error_raw_i2  : 1;  /* bit[17]   : MAC-i/is PDU��װĿ���ַҲ��������ʼ��ַ���ô���ԭʼ�ж�λ��Harq buufer��ʼ��ַ�������λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  dest_addr_eorr_raw_i2   : 1;  /* bit[18]   : MAC-i/is PDU����Ŀ���ַ���ô���ԭʼ�ж�λ��Bbp���뻺����ʼ��ַ�����λbit[2:0]��Ϊ3'b000ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  loch_num_error_raw_i2   : 1;  /* bit[19]   : �߼��ŵ��������ô���ԭʼ�ж�λ���߼��ŵ���������[0,14]��Χ֮��ʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  bus_error_raw_i2        : 1;  /* bit[20]   : UPACC�����ʵ�Slave�෵��ERROR��Ӧԭʼ�ж�λ��Slave�෵��ERROR��Ӧʱ��Ч��
                                                                   ����Ч�� */
        unsigned int  dsp_int_raw_i2          : 1;  /* bit[21]   : �ز�2�ĸ�����жϷ�����DSPԭʼ�ж�λ��
                                                                   ����Ч�� */
        unsigned int  arm_int_raw_i2          : 1;  /* bit[22]   : �ز�2�ĸ�����жϷ�����ARMԭʼ�ж�λ��
                                                                   ����Ч�� */
        unsigned int  reserved                : 9;  /* bit[23-31]: ���� */
    } reg;
} SOC_UPACC_INT_RAW_I2_UNION;
#endif
#define SOC_UPACC_INT_RAW_I2_encap_end_raw_i2_START         (0)
#define SOC_UPACC_INT_RAW_I2_encap_end_raw_i2_END           (0)
#define SOC_UPACC_INT_RAW_I2_trans_end_raw_i2_START         (1)
#define SOC_UPACC_INT_RAW_I2_trans_end_raw_i2_END           (1)
#define SOC_UPACC_INT_RAW_I2_addr1_error_raw_i2_START       (2)
#define SOC_UPACC_INT_RAW_I2_addr1_error_raw_i2_END         (2)
#define SOC_UPACC_INT_RAW_I2_addr2_error_raw_i2_START       (3)
#define SOC_UPACC_INT_RAW_I2_addr2_error_raw_i2_END         (3)
#define SOC_UPACC_INT_RAW_I2_addr3_error_raw_i2_START       (4)
#define SOC_UPACC_INT_RAW_I2_addr3_error_raw_i2_END         (4)
#define SOC_UPACC_INT_RAW_I2_addr4_error_raw_i2_START       (5)
#define SOC_UPACC_INT_RAW_I2_addr4_error_raw_i2_END         (5)
#define SOC_UPACC_INT_RAW_I2_addr5_error_raw_i2_START       (6)
#define SOC_UPACC_INT_RAW_I2_addr5_error_raw_i2_END         (6)
#define SOC_UPACC_INT_RAW_I2_addr6_error_raw_i2_START       (7)
#define SOC_UPACC_INT_RAW_I2_addr6_error_raw_i2_END         (7)
#define SOC_UPACC_INT_RAW_I2_addr7_error_raw_i2_START       (8)
#define SOC_UPACC_INT_RAW_I2_addr7_error_raw_i2_END         (8)
#define SOC_UPACC_INT_RAW_I2_addr8_error_raw_i2_START       (9)
#define SOC_UPACC_INT_RAW_I2_addr8_error_raw_i2_END         (9)
#define SOC_UPACC_INT_RAW_I2_addr9_error_raw_i2_START       (10)
#define SOC_UPACC_INT_RAW_I2_addr9_error_raw_i2_END         (10)
#define SOC_UPACC_INT_RAW_I2_addr10_error_raw_i2_START      (11)
#define SOC_UPACC_INT_RAW_I2_addr10_error_raw_i2_END        (11)
#define SOC_UPACC_INT_RAW_I2_addr11_error_raw_i2_START      (12)
#define SOC_UPACC_INT_RAW_I2_addr11_error_raw_i2_END        (12)
#define SOC_UPACC_INT_RAW_I2_addr12_error_raw_i2_START      (13)
#define SOC_UPACC_INT_RAW_I2_addr12_error_raw_i2_END        (13)
#define SOC_UPACC_INT_RAW_I2_addr13_error_raw_i2_START      (14)
#define SOC_UPACC_INT_RAW_I2_addr13_error_raw_i2_END        (14)
#define SOC_UPACC_INT_RAW_I2_addr14_error_raw_i2_START      (15)
#define SOC_UPACC_INT_RAW_I2_addr14_error_raw_i2_END        (15)
#define SOC_UPACC_INT_RAW_I2_param_addr_error_raw_i2_START  (16)
#define SOC_UPACC_INT_RAW_I2_param_addr_error_raw_i2_END    (16)
#define SOC_UPACC_INT_RAW_I2_harq_addr_error_raw_i2_START   (17)
#define SOC_UPACC_INT_RAW_I2_harq_addr_error_raw_i2_END     (17)
#define SOC_UPACC_INT_RAW_I2_dest_addr_eorr_raw_i2_START    (18)
#define SOC_UPACC_INT_RAW_I2_dest_addr_eorr_raw_i2_END      (18)
#define SOC_UPACC_INT_RAW_I2_loch_num_error_raw_i2_START    (19)
#define SOC_UPACC_INT_RAW_I2_loch_num_error_raw_i2_END      (19)
#define SOC_UPACC_INT_RAW_I2_bus_error_raw_i2_START         (20)
#define SOC_UPACC_INT_RAW_I2_bus_error_raw_i2_END           (20)
#define SOC_UPACC_INT_RAW_I2_dsp_int_raw_i2_START           (21)
#define SOC_UPACC_INT_RAW_I2_dsp_int_raw_i2_END             (21)
#define SOC_UPACC_INT_RAW_I2_arm_int_raw_i2_START           (22)
#define SOC_UPACC_INT_RAW_I2_arm_int_raw_i2_END             (22)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_INT_MASK_I2_UNION
 �ṹ˵��  : INT_MASK_I2 �Ĵ����ṹ���塣��ַƫ����:0x0238����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���κ��ж�״̬�Ĵ��������ڹ�CPU��ѯ���ж��ź������κ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  encap_end_msk_i2        : 1;  /* bit[0]    : MAC-i/is PDU��װ������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  trans_end_msk_i2        : 1;  /* bit[1]    : MAC-i/is PDU����װ������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr1_error_msk_i2      : 1;  /* bit[2]    : MAC-i/is PDU�߼��ŵ�2����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr2_error_msk_i2      : 1;  /* bit[3]    : MAC-i/is PDU�߼��ŵ�1����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr3_error_msk_i2      : 1;  /* bit[4]    : MAC-i/is PDU�߼��ŵ�3����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr4_error_msk_i2      : 1;  /* bit[5]    : MAC-i/is PDU�߼��ŵ�4����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr5_error_msk_i2      : 1;  /* bit[6]    : MAC-i/is PDU�߼��ŵ�5����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr6_error_msk_i2      : 1;  /* bit[7]    : MAC-i/is PDU�߼��ŵ�6����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr7_error_msk_i2      : 1;  /* bit[8]    : MAC-i/is PDU�߼��ŵ�7����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr8_error_msk_i2      : 1;  /* bit[9]    : MAC-i/is PDU�߼��ŵ�8����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr9_error_msk_i2      : 1;  /* bit[10]   : MAC-i/is PDU�߼��ŵ�9����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr10_error_msk_i2     : 1;  /* bit[11]   : MAC-i/is PDU�߼��ŵ�10����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr11_error_msk_i2     : 1;  /* bit[12]   : MAC-i/is PDU�߼��ŵ�11����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr12_error_msk_i2     : 1;  /* bit[13]   : MAC-i/is PDU�߼��ŵ�12����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr13_error_msk_i2     : 1;  /* bit[14]   : MAC-i/is PDU�߼��ŵ�13����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  addr14_error_msk_i2     : 1;  /* bit[15]   : MAC-i/is PDU�߼��ŵ�14����ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  param_addr_error_msk_i2 : 1;  /* bit[16]   : MAC-i/is PDU���������ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  harq_addr_error_msk_i2  : 1;  /* bit[17]   : MAC-i/is PDU��װĿ���ַҲ��������ʼ��ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  dest_addr_eorr_msk_i2   : 1;  /* bit[18]   : MAC-i/is PDU����Ŀ���ַ���ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  loch_num_error_msk_i2   : 1;  /* bit[19]   : �߼��ŵ��������ô������κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  bus_error_msk_i2        : 1;  /* bit[20]   : UPACC�����ʵ�Slave�෵��ERROR��Ӧ���κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  dsp_int_msk_i2          : 1;  /* bit[21]   : �ز�2�ĸ�����жϷ�����DSP���κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  arm_int_msk_i2          : 1;  /* bit[22]   : �ز�2�ĸ�����жϷ�����ARM���κ��ж�λ��
                                                                   ����Ч�� */
        unsigned int  reserved                : 9;  /* bit[23-31]: ���� */
    } reg;
} SOC_UPACC_INT_MASK_I2_UNION;
#endif
#define SOC_UPACC_INT_MASK_I2_encap_end_msk_i2_START         (0)
#define SOC_UPACC_INT_MASK_I2_encap_end_msk_i2_END           (0)
#define SOC_UPACC_INT_MASK_I2_trans_end_msk_i2_START         (1)
#define SOC_UPACC_INT_MASK_I2_trans_end_msk_i2_END           (1)
#define SOC_UPACC_INT_MASK_I2_addr1_error_msk_i2_START       (2)
#define SOC_UPACC_INT_MASK_I2_addr1_error_msk_i2_END         (2)
#define SOC_UPACC_INT_MASK_I2_addr2_error_msk_i2_START       (3)
#define SOC_UPACC_INT_MASK_I2_addr2_error_msk_i2_END         (3)
#define SOC_UPACC_INT_MASK_I2_addr3_error_msk_i2_START       (4)
#define SOC_UPACC_INT_MASK_I2_addr3_error_msk_i2_END         (4)
#define SOC_UPACC_INT_MASK_I2_addr4_error_msk_i2_START       (5)
#define SOC_UPACC_INT_MASK_I2_addr4_error_msk_i2_END         (5)
#define SOC_UPACC_INT_MASK_I2_addr5_error_msk_i2_START       (6)
#define SOC_UPACC_INT_MASK_I2_addr5_error_msk_i2_END         (6)
#define SOC_UPACC_INT_MASK_I2_addr6_error_msk_i2_START       (7)
#define SOC_UPACC_INT_MASK_I2_addr6_error_msk_i2_END         (7)
#define SOC_UPACC_INT_MASK_I2_addr7_error_msk_i2_START       (8)
#define SOC_UPACC_INT_MASK_I2_addr7_error_msk_i2_END         (8)
#define SOC_UPACC_INT_MASK_I2_addr8_error_msk_i2_START       (9)
#define SOC_UPACC_INT_MASK_I2_addr8_error_msk_i2_END         (9)
#define SOC_UPACC_INT_MASK_I2_addr9_error_msk_i2_START       (10)
#define SOC_UPACC_INT_MASK_I2_addr9_error_msk_i2_END         (10)
#define SOC_UPACC_INT_MASK_I2_addr10_error_msk_i2_START      (11)
#define SOC_UPACC_INT_MASK_I2_addr10_error_msk_i2_END        (11)
#define SOC_UPACC_INT_MASK_I2_addr11_error_msk_i2_START      (12)
#define SOC_UPACC_INT_MASK_I2_addr11_error_msk_i2_END        (12)
#define SOC_UPACC_INT_MASK_I2_addr12_error_msk_i2_START      (13)
#define SOC_UPACC_INT_MASK_I2_addr12_error_msk_i2_END        (13)
#define SOC_UPACC_INT_MASK_I2_addr13_error_msk_i2_START      (14)
#define SOC_UPACC_INT_MASK_I2_addr13_error_msk_i2_END        (14)
#define SOC_UPACC_INT_MASK_I2_addr14_error_msk_i2_START      (15)
#define SOC_UPACC_INT_MASK_I2_addr14_error_msk_i2_END        (15)
#define SOC_UPACC_INT_MASK_I2_param_addr_error_msk_i2_START  (16)
#define SOC_UPACC_INT_MASK_I2_param_addr_error_msk_i2_END    (16)
#define SOC_UPACC_INT_MASK_I2_harq_addr_error_msk_i2_START   (17)
#define SOC_UPACC_INT_MASK_I2_harq_addr_error_msk_i2_END     (17)
#define SOC_UPACC_INT_MASK_I2_dest_addr_eorr_msk_i2_START    (18)
#define SOC_UPACC_INT_MASK_I2_dest_addr_eorr_msk_i2_END      (18)
#define SOC_UPACC_INT_MASK_I2_loch_num_error_msk_i2_START    (19)
#define SOC_UPACC_INT_MASK_I2_loch_num_error_msk_i2_END      (19)
#define SOC_UPACC_INT_MASK_I2_bus_error_msk_i2_START         (20)
#define SOC_UPACC_INT_MASK_I2_bus_error_msk_i2_END           (20)
#define SOC_UPACC_INT_MASK_I2_dsp_int_msk_i2_START           (21)
#define SOC_UPACC_INT_MASK_I2_dsp_int_msk_i2_END             (21)
#define SOC_UPACC_INT_MASK_I2_arm_int_msk_i2_START           (22)
#define SOC_UPACC_INT_MASK_I2_arm_int_msk_i2_END             (22)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_INT_CLR_I2_UNION
 �ṹ˵��  : INT_CLR_I2 �Ĵ����ṹ���塣��ַƫ����:0x023C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж�״̬����Ĵ��������ڹ�CPU�����ж��ź�״̬���㡣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  encap_end_clr_i2        : 1;  /* bit[0]    : MAC-i/is PDU��װ����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  trans_end_clr_i2        : 1;  /* bit[1]    : MAC-i/is PDU����װ����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr1_error_clr_i2      : 1;  /* bit[2]    : MAC-i/is PDU�߼��ŵ�2����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr2_error_clr_i2      : 1;  /* bit[3]    : MAC-i/is PDU�߼��ŵ�1����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr3_error_clr_i2      : 1;  /* bit[4]    : MAC-i/is PDU�߼��ŵ�3����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr4_error_clr_i2      : 1;  /* bit[5]    : MAC-i/is PDU�߼��ŵ�4����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr5_error_clr_i2      : 1;  /* bit[6]    : MAC-i/is PDU�߼��ŵ�5����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr6_error_clr_i2      : 1;  /* bit[7]    : MAC-i/is PDU�߼��ŵ�6����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr7_error_clr_i2      : 1;  /* bit[8]    : MAC-i/is PDU�߼��ŵ�7����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr8_error_clr_i2      : 1;  /* bit[9]    : MAC-i/is PDU�߼��ŵ�8����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr9_error_clr_i2      : 1;  /* bit[10]   : MAC-i/is PDU�߼��ŵ�9����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr10_error_clr_i2     : 1;  /* bit[11]   : MAC-i/is PDU�߼��ŵ�10����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr11_error_clr_i2     : 1;  /* bit[12]   : MAC-i/is PDU�߼��ŵ�11����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr12_error_clr_i2     : 1;  /* bit[13]   : MAC-i/is PDU�߼��ŵ�12����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr13_error_clr_i2     : 1;  /* bit[14]   : MAC-i/is PDU�߼��ŵ�13����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  addr14_error_clr_i2     : 1;  /* bit[15]   : MAC-i/is PDU�߼��ŵ�14����ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  param_addr_error_clr_i2 : 1;  /* bit[16]   : ���������ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  harq_addr_error_clr_i2  : 1;  /* bit[17]   : MAC-i/is PDU��װĿ���ַҲ��������ʼ��ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  dest_addr_eorr_clr_i2   : 1;  /* bit[18]   : MAC-i/is PDU����Ŀ���ַ���ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  loch_num_error_clr_i2   : 1;  /* bit[19]   : �߼��ŵ��������ô����ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  bus_error_clr_i2        : 1;  /* bit[20]   : UPACC�����ʵ�Slave�෵��ERROR��Ӧ�ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  dsp_int_clr_i2          : 1;  /* bit[21]   : �ز�2�ĸ�����жϷ�����DSP�ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  arm_int_clr_i2          : 1;  /* bit[22]   : �ز�2�ĸ�����жϷ�����ARM�ж�����λ��
                                                                   CPUд1���㡣 */
        unsigned int  reserved                : 9;  /* bit[23-31]: ���� */
    } reg;
} SOC_UPACC_INT_CLR_I2_UNION;
#endif
#define SOC_UPACC_INT_CLR_I2_encap_end_clr_i2_START         (0)
#define SOC_UPACC_INT_CLR_I2_encap_end_clr_i2_END           (0)
#define SOC_UPACC_INT_CLR_I2_trans_end_clr_i2_START         (1)
#define SOC_UPACC_INT_CLR_I2_trans_end_clr_i2_END           (1)
#define SOC_UPACC_INT_CLR_I2_addr1_error_clr_i2_START       (2)
#define SOC_UPACC_INT_CLR_I2_addr1_error_clr_i2_END         (2)
#define SOC_UPACC_INT_CLR_I2_addr2_error_clr_i2_START       (3)
#define SOC_UPACC_INT_CLR_I2_addr2_error_clr_i2_END         (3)
#define SOC_UPACC_INT_CLR_I2_addr3_error_clr_i2_START       (4)
#define SOC_UPACC_INT_CLR_I2_addr3_error_clr_i2_END         (4)
#define SOC_UPACC_INT_CLR_I2_addr4_error_clr_i2_START       (5)
#define SOC_UPACC_INT_CLR_I2_addr4_error_clr_i2_END         (5)
#define SOC_UPACC_INT_CLR_I2_addr5_error_clr_i2_START       (6)
#define SOC_UPACC_INT_CLR_I2_addr5_error_clr_i2_END         (6)
#define SOC_UPACC_INT_CLR_I2_addr6_error_clr_i2_START       (7)
#define SOC_UPACC_INT_CLR_I2_addr6_error_clr_i2_END         (7)
#define SOC_UPACC_INT_CLR_I2_addr7_error_clr_i2_START       (8)
#define SOC_UPACC_INT_CLR_I2_addr7_error_clr_i2_END         (8)
#define SOC_UPACC_INT_CLR_I2_addr8_error_clr_i2_START       (9)
#define SOC_UPACC_INT_CLR_I2_addr8_error_clr_i2_END         (9)
#define SOC_UPACC_INT_CLR_I2_addr9_error_clr_i2_START       (10)
#define SOC_UPACC_INT_CLR_I2_addr9_error_clr_i2_END         (10)
#define SOC_UPACC_INT_CLR_I2_addr10_error_clr_i2_START      (11)
#define SOC_UPACC_INT_CLR_I2_addr10_error_clr_i2_END        (11)
#define SOC_UPACC_INT_CLR_I2_addr11_error_clr_i2_START      (12)
#define SOC_UPACC_INT_CLR_I2_addr11_error_clr_i2_END        (12)
#define SOC_UPACC_INT_CLR_I2_addr12_error_clr_i2_START      (13)
#define SOC_UPACC_INT_CLR_I2_addr12_error_clr_i2_END        (13)
#define SOC_UPACC_INT_CLR_I2_addr13_error_clr_i2_START      (14)
#define SOC_UPACC_INT_CLR_I2_addr13_error_clr_i2_END        (14)
#define SOC_UPACC_INT_CLR_I2_addr14_error_clr_i2_START      (15)
#define SOC_UPACC_INT_CLR_I2_addr14_error_clr_i2_END        (15)
#define SOC_UPACC_INT_CLR_I2_param_addr_error_clr_i2_START  (16)
#define SOC_UPACC_INT_CLR_I2_param_addr_error_clr_i2_END    (16)
#define SOC_UPACC_INT_CLR_I2_harq_addr_error_clr_i2_START   (17)
#define SOC_UPACC_INT_CLR_I2_harq_addr_error_clr_i2_END     (17)
#define SOC_UPACC_INT_CLR_I2_dest_addr_eorr_clr_i2_START    (18)
#define SOC_UPACC_INT_CLR_I2_dest_addr_eorr_clr_i2_END      (18)
#define SOC_UPACC_INT_CLR_I2_loch_num_error_clr_i2_START    (19)
#define SOC_UPACC_INT_CLR_I2_loch_num_error_clr_i2_END      (19)
#define SOC_UPACC_INT_CLR_I2_bus_error_clr_i2_START         (20)
#define SOC_UPACC_INT_CLR_I2_bus_error_clr_i2_END           (20)
#define SOC_UPACC_INT_CLR_I2_dsp_int_clr_i2_START           (21)
#define SOC_UPACC_INT_CLR_I2_dsp_int_clr_i2_END             (21)
#define SOC_UPACC_INT_CLR_I2_arm_int_clr_i2_START           (22)
#define SOC_UPACC_INT_CLR_I2_arm_int_clr_i2_END             (22)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_BUS_ERROR_ADDR_I2_UNION
 �ṹ˵��  : BUS_ERROR_ADDR_I2 �Ĵ����ṹ���塣��ַƫ����:0x0240����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ERROR��ַ�Ĵ��������ڼĴ�Slave�෵��ERROR��Ӧʱ�ĵ�ǰ������ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bus_error_addr_i2 : 32; /* bit[0-31]: ���ڼĴ�UPACC�����ʵ�Slave��Ż�ERROR��Ӧʱ�ĵ�ǰ������ַ�� */
    } reg;
} SOC_UPACC_BUS_ERROR_ADDR_I2_UNION;
#endif
#define SOC_UPACC_BUS_ERROR_ADDR_I2_bus_error_addr_i2_START  (0)
#define SOC_UPACC_BUS_ERROR_ADDR_I2_bus_error_addr_i2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_EN_I2_UNION
 �ṹ˵��  : EN_I2 �Ĵ����ṹ���塣��ַƫ����:0x0244����ֵ:0x00000000�����:32
 �Ĵ���˵��: MAC-i/is PDU��װ������ģ��ʹ�ܼĴ�������������MAC-i/is PDU��װ������ģ��ʹ�����
            UPACC_EN_I2ΪMAC-i/is PDU��װ������ģ�������Ĵ�������������MAC-i/is PDU��װ������ģ��ʹ�����
            DSP������������װ������ͨ�����øüĴ�����bit0Ϊ1����MAC-i/is PDU��װ�����Ʋ�������װ�����Ʋ�����ɺ�Ӳ�����Զ��ԸüĴ������㡣DSP�ڲ�������MAC-i/is PDU��װ������ģ��ʱ��ҲӦ���üĴ�����bit0��Ϊ0���Խ��͹��ġ�
            ������������ó�����INT_RAW_I2�е�addri_error_raw_I2��loch_loch_num_error_raw_I2��dest_addr_error_raw_I2������һ����Чʱ��Ӳ���߼���ԸüĴ�����bit0�Զ����㣬ͬʱ�ԼĴ���MAC_ENCAP_START_I2��bit[1:0]�������㣬�Ը�λUPACC�ڲ���MAC-i/is  PDU��װ������ģ�飬ʹ���ڲ�״̬������IDLE̬��
            ���������UPACC��װ�����˳�ʱ���쳣ʱ���ɶԸüĴ�����bit0д0����UPACC�ڲ�MAC-i/is PDU��װ������ģ���״̬����λ��ʹ�䷵�ص�IDLE̬����ʱ���������ԼĴ���MAC_ENCAP_START_I2��bit[1:0]�������㣬�Է�ֹ�쳣������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  upacc_en_i2 : 1;  /* bit[0]   : ��������MAC-I PDU��װ������ģ��ʹ�����
                                                      0����ֹ��UPACC�ڲ�MAC-I PDU��װ������ģ��UPACC_ACC_I���������ڲ�״̬�ص�IDLE״̬��
                                                      1��ʹ�ܡ�UPACC�ڲ�MAC-I PDU��װ������ģ��UPACC_ACC_I���ڹ���״̬�� */
        unsigned int  reserved    : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_UPACC_EN_I2_UNION;
#endif
#define SOC_UPACC_EN_I2_upacc_en_i2_START  (0)
#define SOC_UPACC_EN_I2_upacc_en_i2_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_HARQ_WRITE_ADDR_I2_UNION
 �ṹ˵��  : HARQ_WRITE_ADDR_I2 �Ĵ����ṹ���塣��ַƫ����:0x0248����ֵ:0x00000000�����:32
 �Ĵ���˵��: HARQ bufferд��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  harq_write_addr_i2 : 32; /* bit[0-31]: ���ڵ���ʱ���㵱�η�װ������ɺ�UPACCʵ��д��HARQ buffer������Byte������
                                                             ��������ʽΪ��װ�Ұ��ƻ��߽����ƣ��򵱷�װ�����������INT_RAW_I2��bit[0]��װ���ԭʼ�ж�λencap_end_raw_i2��Ч֮�󣬼Ĵ���HARQ_WRITE_ADDR_I2��ֵ��Ĵ���HARQ_BUF_ADDR_I2��ֵ����Ľ�������ǵ��η�װ��������У�UPACCʵ��д��HARQ buffer�е�����Byte������
                                                             ֵ��ע����ǣ�����BBP��֧��Word���ʣ����UPACC�ڲ��߼�����жԲ�����Word�����ݣ�ͨ���ڸ�λ����ճ���Word��д���ⲿMemory�����ԣ������Ĵ�����ֱֵ������Ľ������ȵ��η�װ������Ҫ���Ƶ�HARQ buffer�е�������Ҫ�Դ�һЩ�����ֵ���Ϊ7Byte���������ֵ��si_en_i2��padding_len_i2�ȷ�װ�����йء���ͬ�����µ����ֵ���㷽����μ���ʵ�ʷ�װ���ݸ����������װ���ݸ����ڲ�ͬ�����µ�����б�.xlsx���� */
    } reg;
} SOC_UPACC_HARQ_WRITE_ADDR_I2_UNION;
#endif
#define SOC_UPACC_HARQ_WRITE_ADDR_I2_harq_write_addr_i2_START  (0)
#define SOC_UPACC_HARQ_WRITE_ADDR_I2_harq_write_addr_i2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_BBP_WRITE_ADDR_I2_UNION
 �ṹ˵��  : BBP_WRITE_ADDR_I2 �Ĵ����ṹ���塣��ַƫ����:0x024C����ֵ:0x00000000�����:32
 �Ĵ���˵��: BBP ���뻺��д��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bbp_write_addr_i2 : 32; /* bit[0-31]: ���ڵ���ʱ���㵱�η�װ������ɺ�UPACCʵ��д��BBP buffer������Byte������
                                                            ��������ʽΪ��װ�Ұ��ƻ��߽����ƣ��򵱴η�װ�����������INT_RAW_I2��bit[1]�������ԭʼ�ж�λtrans_end_raw_i2��Ч�󣬼Ĵ���BBP_WRITE_ADDR_I2��ֵ��Ĵ���BBP_DEST_ADDR_I2��ֵ����Ľ�������ǵ��η�װ��������У�UPACCʵ��д��BBP���뻺���е�����Byte������
                                                            ֵ��ע����ǣ�����BBP��֧��Word���ʣ����UPACC�ڲ��߼�����жԲ�����Word�����ݣ�ͨ���ڸ�λ����ճ���Word��д���ⲿMemory�����ԣ������Ĵ�����ֱֵ������Ľ������ȵ��η�װ������Ҫ���Ƶ�BBP���뻺���е�������Ҫ�Դ�һЩ�����ֵ���Ϊ7Byte���������ֵ��si_en_i2��padding_len_i2�ȷ�װ��������trans_num_i2�йء���ͬ�����µ����ֵ���㷽����μ���ʵ�ʷ�װ���ݸ����������װ���ݸ����ڲ�ͬ�����µ�����б�.xlsx���� */
    } reg;
} SOC_UPACC_BBP_WRITE_ADDR_I2_UNION;
#endif
#define SOC_UPACC_BBP_WRITE_ADDR_I2_bbp_write_addr_i2_START  (0)
#define SOC_UPACC_BBP_WRITE_ADDR_I2_bbp_write_addr_i2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_UPACC_PDUARY_EN_I2_UNION
 �ṹ˵��  : PDUARY_EN_I2 �Ĵ����ṹ���塣��ַƫ����:0x0250����ֵ:0x00000000�����:32
 �Ĵ���˵��: Mac-i PDU�ز�2Դ�������鷽ʽ����ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pduary_en_i2 : 1;  /* bit[0]   : Mac-i PDU�ز�2��Դ�������鷽ʽ����ʹ���źš�
                                                       0����ֹ��Դ���ݲ��������鷽ʽ���ã�����UPACCV200��
                                                       1��ʹ�ܣ�Դ���ݲ������鷽ʽ���á� */
        unsigned int  reserved     : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_UPACC_PDUARY_EN_I2_UNION;
#endif
#define SOC_UPACC_PDUARY_EN_I2_pduary_en_i2_START  (0)
#define SOC_UPACC_PDUARY_EN_I2_pduary_en_i2_END    (0)






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

#endif /* end of soc_upacc_interface.h */
