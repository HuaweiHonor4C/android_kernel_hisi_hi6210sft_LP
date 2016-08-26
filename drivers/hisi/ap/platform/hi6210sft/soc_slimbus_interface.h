/******************************************************************************

                 ��Ȩ���� (C), 2001-2012, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : soc_slimbus_interface.h
  �� �� ��   : ����
  ��    ��   : Excel2Code
  ��������   : 2012-08-09 20:06:19
  ����޸�   :
  ��������   : �ӿ�ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2012��8��9��
    ��    ��   : m53479
    �޸�����   : �ӡ�Hi6620V100SOC�Ĵ����ֲ�_SLIMBUS.xml���Զ�����

******************************************************************************/

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_SLIMBUS_INTERFACE_H__
#define __SOC_SLIMBUS_INTERFACE_H__

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
/* �Ĵ���˵�����ж�ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_SLIMBUS_INTEN_UNION */
#define SOC_SLIMBUS_INTEN_ADDR(base)                  ((base) + (0x0000))

/* �Ĵ���˵�����ж�״̬�Ĵ���
   λ����UNION�ṹ:  SOC_SLIMBUS_INTSTS_UNION */
#define SOC_SLIMBUS_INTSTS_ADDR(base)                 ((base) + (0x0004))

/* �Ĵ���˵���������ٲüĴ���1
   λ����UNION�ṹ:  SOC_SLIMBUS_TXARBI1_UNION */
#define SOC_SLIMBUS_TXARBI1_ADDR(base)                ((base) + (0x0008))

/* �Ĵ���˵���������ٲüĴ���2
   λ����UNION�ṹ:  SOC_SLIMBUS_TXARBI2_UNION */
#define SOC_SLIMBUS_TXARBI2_ADDR(base)                ((base) + (0x000C))

/* �Ĵ���˵����������Ϣͷ1
   λ����UNION�ṹ:  SOC_SLIMBUS_TXMSGHDR1_UNION */
#define SOC_SLIMBUS_TXMSGHDR1_ADDR(base)              ((base) + (0x0010))

/* �Ĵ���˵����������Ϣͷ2
   λ����UNION�ṹ:  SOC_SLIMBUS_TXMSGHDR2_UNION */
#define SOC_SLIMBUS_TXMSGHDR2_ADDR(base)              ((base) + (0x0014))

/* �Ĵ���˵����������Ϣͷ3
   λ����UNION�ṹ:  SOC_SLIMBUS_TXMSGHDR3_UNION */
#define SOC_SLIMBUS_TXMSGHDR3_ADDR(base)              ((base) + (0x0018))

/* �Ĵ���˵����������Ϣ����1
   ��      ��������Message Payload data(31:0)������ԴΪSLIMbus Active Manager
   UNION �ṹ���� */
#define SOC_SLIMBUS_TXMSGPLD1_ADDR(base)              ((base) + (0x001C))

/* �Ĵ���˵����������Ϣ����2
   ��      ��������Message Payload data(63:32)������ԴΪSLIMbus Active Manager
   UNION �ṹ���� */
#define SOC_SLIMBUS_TXMSGPLD2_ADDR(base)              ((base) + (0x0020))

/* �Ĵ���˵����������Ϣ����3
   λ����UNION�ṹ:  SOC_SLIMBUS_TXMSGPLD3_UNION */
#define SOC_SLIMBUS_TXMSGPLD3_ADDR(base)              ((base) + (0x0024))

/* �Ĵ���˵���������ٲüĴ���1
   λ����UNION�ṹ:  SOC_SLIMBUS_RXARBI1_UNION */
#define SOC_SLIMBUS_RXARBI1_ADDR(base)                ((base) + (0x0038))

/* �Ĵ���˵���������ٲüĴ���2
   λ����UNION�ṹ:  SOC_SLIMBUS_RXARBI2_UNION */
#define SOC_SLIMBUS_RXARBI2_ADDR(base)                ((base) + (0x003C))

/* �Ĵ���˵����������Ϣͷ1
   λ����UNION�ṹ:  SOC_SLIMBUS_RXMSGHDR1_UNION */
#define SOC_SLIMBUS_RXMSGHDR1_ADDR(base)              ((base) + (0x0040))

/* �Ĵ���˵����������Ϣͷ2
   λ����UNION�ṹ:  SOC_SLIMBUS_RXMSGHDR2_UNION */
#define SOC_SLIMBUS_RXMSGHDR2_ADDR(base)              ((base) + (0x0044))

/* �Ĵ���˵����������Ϣͷ3
   λ����UNION�ṹ:  SOC_SLIMBUS_RXMSGHDR3_UNION */
#define SOC_SLIMBUS_RXMSGHDR3_ADDR(base)              ((base) + (0x0048))

/* �Ĵ���˵����������Ϣ����1
   ��      ��������Message Payload data(31:0)������ԴΪSLIMbus Active Manager
   UNION �ṹ���� */
#define SOC_SLIMBUS_RXMSGPLD1_ADDR(base)              ((base) + (0x004C))

/* �Ĵ���˵����������Ϣ����2
   ��      ��������Message Payload data(63:32)������ԴΪSLIMbus Active Manager
   UNION �ṹ���� */
#define SOC_SLIMBUS_RXMSGPLD2_ADDR(base)              ((base) + (0x0050))

/* �Ĵ���˵�����ӿ��豸ö�ٵ�ַ
   ��      ����interface device��Enumeration Address [31:0]
   UNION �ṹ���� */
#define SOC_SLIMBUS_IFEA310_ADDR(base)                ((base) + (0x0068))

/* �Ĵ���˵�����ӿ��豸ö�ٵ�ַ
   λ����UNION�ṹ:  SOC_SLIMBUS_IFEA4732_UNION */
#define SOC_SLIMBUS_IFEA4732_ADDR(base)               ((base) + (0x006C))

/* �Ĵ���˵����Framer�豸ö�ٵ�ַ
   ��      ����Framer��Enumeration Address [31:0]
   UNION �ṹ���� */
#define SOC_SLIMBUS_FEA310_ADDR(base)                 ((base) + (0x0074))

/* �Ĵ���˵����Framer�豸ö�ٵ�ַ
   λ����UNION�ṹ:  SOC_SLIMBUS_FEA4732_UNION */
#define SOC_SLIMBUS_FEA4732_ADDR(base)                ((base) + (0x0078))

/* �Ĵ���˵�������üĴ���
   λ����UNION�ṹ:  SOC_SLIMBUS_CNFG_UNION */
#define SOC_SLIMBUS_CNFG_ADDR(base)                   ((base) + (0x0080))

/* �Ĵ���˵�����жϼĴ���
   λ����UNION�ṹ:  SOC_SLIMBUS_INTR_UNION */
#define SOC_SLIMBUS_INTR_ADDR(base)                   ((base) + (0x0084))

/* �Ĵ���˵����Report Present Enable
   λ����UNION�ṹ:  SOC_SLIMBUS_RPPREEN_UNION */
#define SOC_SLIMBUS_RPPREEN_ADDR(base)                ((base) + (0x0088))

/* �Ĵ���˵����ͨ���豸0ö�ٵ�ַ
   ��      ����GD0��Enumeration Address [31:0]
   UNION �ṹ���� */
#define SOC_SLIMBUS_GD0EA310_ADDR(base)               ((base) + (0x0150))

/* �Ĵ���˵����ͨ���豸0ö�ٵ�ַ
   λ����UNION�ṹ:  SOC_SLIMBUS_GD0EA4732_UNION */
#define SOC_SLIMBUS_GD0EA4732_ADDR(base)              ((base) + (0x0154))

/* �Ĵ���˵����ͨ���豸0�߼���ַ
   λ����UNION�ṹ:  SOC_SLIMBUS_GD0LA_UNION */
#define SOC_SLIMBUS_GD0LA_ADDR(base)                  ((base) + (0x0158))

/* �Ĵ���˵����ͨ���豸0�ж�ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_SLIMBUS_GD0INTEN_UNION */
#define SOC_SLIMBUS_GD0INTEN_ADDR(base)               ((base) + (0x015C))

/* �Ĵ���˵����ͨ���豸0�ж�״̬�Ĵ���
   λ����UNION�ṹ:  SOC_SLIMBUS_GD0INTSTS_UNION */
#define SOC_SLIMBUS_GD0INTSTS_ADDR(base)              ((base) + (0x0160))

/* �Ĵ���˵����ͨ���豸0�˿�i(0-15)�ж�ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_SLIMBUS_D0PiINTEN_UNION */
#define SOC_SLIMBUS_D0PiINTEN_ADDR(base)              ((base) + (0x0164+0x10*i))

/* �Ĵ���˵����ͨ���豸0�˿�i(0-15)�ж�״̬�Ĵ���
   λ����UNION�ṹ:  SOC_SLIMBUS_D0PiINTSTS_UNION */
#define SOC_SLIMBUS_D0PiINTSTS_ADDR(base)             ((base) + (0x0168+0x10*i))

/* �Ĵ���˵����ͨ���豸0�˿�i(0-15)���üĴ���
   λ����UNION�ṹ:  SOC_SLIMBUS_D0PiCNFG_UNION */
#define SOC_SLIMBUS_D0PiCNFG_ADDR(base)               ((base) + (0x016C+0x10*i))

/* �Ĵ���˵����ͨ���豸0�˿�i(0-15)���ݶ˿ڼĴ���
   ��      �������ڷ��ʶ˿�FIFO���ļĴ�������packed mode�£�alignment����Ҫ��unpacked mode�£�������FIFO����left aligned��
   UNION �ṹ���� */
#define SOC_SLIMBUS_D0PiDP_ADDR(base)                 ((base) + (0x0170+0x10*i))

/* �Ĵ���˵����SDMAi(0-15)���üĴ���
   λ����UNION�ṹ:  SOC_SLIMBUS_SDMAiCNFG_UNION */
#define SOC_SLIMBUS_SDMAiCNFG_ADDR(base)              ((base) + (0x0400+0x4*i))

/* �Ĵ���˵������Ƶ�˿�i(0-15)�Ĵ���
   λ����UNION�ṹ:  SOC_SLIMBUS_ADPRTi_UNION */
#define SOC_SLIMBUS_ADPRTi_ADDR(base)                 ((base) + (0x0500+0x4*i))

/* �Ĵ���˵����FL�����ı���Ĵ���
   λ����UNION�ṹ:  SOC_SLIMBUS_FLCONSAV1_UNION */
#define SOC_SLIMBUS_FLCONSAV1_ADDR(base)              ((base) + (0x0900))

/* �Ĵ���˵����MH�����ı���Ĵ���
   λ����UNION�ṹ:  SOC_SLIMBUS_MHCONSAV1_UNION */
#define SOC_SLIMBUS_MHCONSAV1_ADDR(base)              ((base) + (0x0934))

/* �Ĵ���˵����AF�����ı���Ĵ���1
   λ����UNION�ṹ:  SOC_SLIMBUS_AFCONSAV1_UNION */
#define SOC_SLIMBUS_AFCONSAV1_ADDR(base)              ((base) + (0x0948))

/* �Ĵ���˵����AF�����ı���Ĵ���2
   λ����UNION�ṹ:  SOC_SLIMBUS_AFCONSAV2_UNION */
#define SOC_SLIMBUS_AFCONSAV2_ADDR(base)              ((base) + (0x094C))

/* �Ĵ���˵����IF�����ı���Ĵ���
   λ����UNION�ṹ:  SOC_SLIMBUS_IFCONSAV1_UNION */
#define SOC_SLIMBUS_IFCONSAV1_ADDR(base)              ((base) + (0x0968))

/* �Ĵ���˵����GD0��Ϣ�����ı���Ĵ���1
   λ����UNION�ṹ:  SOC_SLIMBUS_GD0MSGCS1_UNION */
#define SOC_SLIMBUS_GD0MSGCS1_ADDR(base)              ((base) + (0x0978))

/* �Ĵ���˵����GD0��Ϣ�����ı���Ĵ���2
   λ����UNION�ṹ:  SOC_SLIMBUS_GD0MSGCS2_UNION */
#define SOC_SLIMBUS_GD0MSGCS2_ADDR(base)              ((base) + (0x097C))

/* �Ĵ���˵����GD0�˿�i(0-15)�����ı���Ĵ���1
   λ����UNION�ṹ:  SOC_SLIMBUS_GD0PRTiCS1_UNION */
#define SOC_SLIMBUS_GD0PRTiCS1_ADDR(base)             ((base) + (0x0980+0x4*i))

/* �Ĵ���˵����Channel i(1-16)�����ı���Ĵ���2
   λ����UNION�ṹ:  SOC_SLIMBUS_CHCONSAVi_UNION */
#define SOC_SLIMBUS_CHCONSAVi_ADDR(base)              ((base) + (0x0A00+0x8*(i-1)))

/* �Ĵ���˵����GD0�˿�i(0-15)�����ı���Ĵ���2
   λ����UNION�ṹ:  SOC_SLIMBUS_GD0PRTiCS2_UNION */
#define SOC_SLIMBUS_GD0PRTiCS2_ADDR(base)             ((base) + (0x0A04+0x8*i))

/* �Ĵ���˵����Channelӳ�������ı���Ĵ���i(1-16)
   λ����UNION�ṹ:  SOC_SLIMBUS_CHMAPCSi_UNION */
#define SOC_SLIMBUS_CHMAPCSi_ADDR(base)               ((base) + (0x0A80+0x4*(i-1)))





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
 �ṹ��    : SOC_SLIMBUS_INTEN_UNION
 �ṹ˵��  : INTEN �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x0000�����:32
 �Ĵ���˵��: �ж�ʹ�ܼĴ���
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tx_msg_pack_en    : 1;  /* bit[0]    : 1'b0:��ֹTransmit Message PACK�ж�
                                                             1'b1:ʹ��Transmit Message PACK�ж� */
        unsigned int  tx_msg_nack_en    : 1;  /* bit[1]    : 1'b0:��ֹTransmit Message NACK�ж�
                                                             1'b1:ʹ��Transmit Message NACK�ж� */
        unsigned int  tx_msg_nore_en    : 1;  /* bit[2]    : 1'b0:��ֹTransmit Message No Response�ж�
                                                             1'b1:ʹ��Transmit Message No Response�ж� */
        unsigned int  tx_msg_udef_en    : 1;  /* bit[3]    : 1'b0:��ֹTransmit Message Undefined�ж�
                                                             1'b1:ʹ��Transmit Message Undefined�ж� */
        unsigned int  rx_msg_pack_en    : 1;  /* bit[4]    : 1'b0:��ֹReceive Message PACK�ж�
                                                             1'b1:ʹ��Receive Message PACK�ж� */
        unsigned int  rx_msg_nack_en    : 1;  /* bit[5]    : 1'b0:��ֹReceive Message NACK�ж�
                                                             1'b1:ʹ��Receive Message NACK�ж� */
        unsigned int  rx_msg_nore_en    : 1;  /* bit[6]    : 1'b0:��ֹReceive Message No Response�ж�
                                                             1'b1:ʹ��Receive Message No Response�ж� */
        unsigned int  rx_msg_udef_en    : 1;  /* bit[7]    : 1'b0:��ֹTransmit Message Undefined�ж�
                                                             1'b1:ʹ��Transmit Message Undefined�ж� */
        unsigned int  reconfig_set_en   : 1;  /* bit[8]    : 1'b0:��ֹReconfiguration set�ж�
                                                             1'b1:ʹ��Reconfiguration set�ж� */
        unsigned int  reconfig_clear_en : 1;  /* bit[9]    : 1'b0:��ֹReconfiguration clear�ж�
                                                             1'b1:ʹ��Reconfiguration clear�ж� */
        unsigned int  ex_error_en       : 1;  /* bit[10]   : 1'b0:��ֹex error�ж�
                                                             1'b1:ʹ��ex error�ж� */
        unsigned int  data_tx_col_en    : 1;  /* bit[11]   : 1'b0:��ֹdata tx collision�ж�
                                                             1'b1:ʹ��data tx collision�ж� */
        unsigned int  unsprtd_msg_en    : 1;  /* bit[12]   : 1'b0:��ֹunsupported message�ж�
                                                             1'b1:ʹ��unsupported message�ж� */
        unsigned int  am_h_inta_n       : 1;  /* bit[13]   : 1'b0:��ֹActive manager device�ж�
                                                             1'b1:ʹ��Active manager device�ж� */
        unsigned int  gd0_h_inta_n      : 1;  /* bit[14]   : 1'b0:��ֹGeneric device0�ж�
                                                             1'b1:ʹ��Generic device0�ж� */
        unsigned int  reserved_0        : 4;  /* bit[15-18]: Reserved for Future Use */
        unsigned int  prep_cont_sts_en  : 1;  /* bit[19]   : 1'b0:��ֹNEXT_PREPARE_CONTEXT��Ϣ�����ж�
                                                             1'b1:ʹ��NEXT_PREPARE_CONTEXT��Ϣ�����ж� */
        unsigned int  Rx_Msg_OFL_en     : 1;  /* bit[20]   : 1'b0:��ֹRx_Msg_ofl�ж�
                                                             1'b1:ʹ��Rx_Msg_ofl�ж� */
        unsigned int  clk_pause_sts_en  : 1;  /* bit[21]   : 1'b0:��ֹclk_pause_sts�ж�
                                                             1'b1:ʹ��clk_pause_sts�ж� */
        unsigned int  reserved_1        : 10; /* bit[22-31]: Reserved for Future Use */
    } reg;
} SOC_SLIMBUS_INTEN_UNION;
#define SOC_SLIMBUS_INTEN_tx_msg_pack_en_START     (0)
#define SOC_SLIMBUS_INTEN_tx_msg_pack_en_END       (0)
#define SOC_SLIMBUS_INTEN_tx_msg_nack_en_START     (1)
#define SOC_SLIMBUS_INTEN_tx_msg_nack_en_END       (1)
#define SOC_SLIMBUS_INTEN_tx_msg_nore_en_START     (2)
#define SOC_SLIMBUS_INTEN_tx_msg_nore_en_END       (2)
#define SOC_SLIMBUS_INTEN_tx_msg_udef_en_START     (3)
#define SOC_SLIMBUS_INTEN_tx_msg_udef_en_END       (3)
#define SOC_SLIMBUS_INTEN_rx_msg_pack_en_START     (4)
#define SOC_SLIMBUS_INTEN_rx_msg_pack_en_END       (4)
#define SOC_SLIMBUS_INTEN_rx_msg_nack_en_START     (5)
#define SOC_SLIMBUS_INTEN_rx_msg_nack_en_END       (5)
#define SOC_SLIMBUS_INTEN_rx_msg_nore_en_START     (6)
#define SOC_SLIMBUS_INTEN_rx_msg_nore_en_END       (6)
#define SOC_SLIMBUS_INTEN_rx_msg_udef_en_START     (7)
#define SOC_SLIMBUS_INTEN_rx_msg_udef_en_END       (7)
#define SOC_SLIMBUS_INTEN_reconfig_set_en_START    (8)
#define SOC_SLIMBUS_INTEN_reconfig_set_en_END      (8)
#define SOC_SLIMBUS_INTEN_reconfig_clear_en_START  (9)
#define SOC_SLIMBUS_INTEN_reconfig_clear_en_END    (9)
#define SOC_SLIMBUS_INTEN_ex_error_en_START        (10)
#define SOC_SLIMBUS_INTEN_ex_error_en_END          (10)
#define SOC_SLIMBUS_INTEN_data_tx_col_en_START     (11)
#define SOC_SLIMBUS_INTEN_data_tx_col_en_END       (11)
#define SOC_SLIMBUS_INTEN_unsprtd_msg_en_START     (12)
#define SOC_SLIMBUS_INTEN_unsprtd_msg_en_END       (12)
#define SOC_SLIMBUS_INTEN_am_h_inta_n_START        (13)
#define SOC_SLIMBUS_INTEN_am_h_inta_n_END          (13)
#define SOC_SLIMBUS_INTEN_gd0_h_inta_n_START       (14)
#define SOC_SLIMBUS_INTEN_gd0_h_inta_n_END         (14)
#define SOC_SLIMBUS_INTEN_prep_cont_sts_en_START   (19)
#define SOC_SLIMBUS_INTEN_prep_cont_sts_en_END     (19)
#define SOC_SLIMBUS_INTEN_Rx_Msg_OFL_en_START      (20)
#define SOC_SLIMBUS_INTEN_Rx_Msg_OFL_en_END        (20)
#define SOC_SLIMBUS_INTEN_clk_pause_sts_en_START   (21)
#define SOC_SLIMBUS_INTEN_clk_pause_sts_en_END     (21)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_INTSTS_UNION
 �ṹ˵��  : INTSTS �Ĵ����ṹ���塣��ַƫ����:0x0004����ֵ:0x0000�����:32
 �Ĵ���˵��: �ж�״̬�Ĵ���
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tx_msg_pack    : 1;  /* bit[0]    : 1'b0:���ж�
                                                          1'b1:���жϣ���Transmit message�յ�positive ack */
        unsigned int  tx_msg_nack    : 1;  /* bit[1]    : 1'b0:���ж�
                                                          1'b1:���жϣ���Transmit message�յ�negative ack */
        unsigned int  tx_msg_nore    : 1;  /* bit[2]    : 1'b0:���ж�
                                                          1'b1:���жϣ���Transmit message�ղ���response */
        unsigned int  tx_msg_udef    : 1;  /* bit[3]    : 1'b0:���ж�
                                                          1'b1:���жϣ���Transmit message�յ�undefined response */
        unsigned int  rx_msg_pack    : 1;  /* bit[4]    : 1'b0:���ж�
                                                          1'b1:���жϣ���Received message�յ�positive ack */
        unsigned int  rx_msg_nack    : 1;  /* bit[5]    : 1'b0:���ж�
                                                          1'b1:���жϣ���Received message�յ�negative ack */
        unsigned int  rx_msg_nore    : 1;  /* bit[6]    : 1'b0:���ж�
                                                          1'b1:���жϣ���Received message�ղ���response */
        unsigned int  rx_msg_udef    : 1;  /* bit[7]    : 1'b0:���ж�
                                                          1'b1:���жϣ���Received message�յ�undefined response */
        unsigned int  reconfig_set   : 1;  /* bit[8]    : 1'b0:���ж�
                                                          1'b1:���жϣ���Bus reconfiguration��ʼʱ(&quot;Reconfiguration Pending&quot;λ������) */
        unsigned int  reconfig_clear : 1;  /* bit[9]    : 1'b0:���ж�
                                                          1'b1:���жϣ���Bus reconfiguration���ʱ(&quot;Reconfiguration Pending&quot;λ�����) */
        unsigned int  ex_error       : 1;  /* bit[10]   : 1'b0:���ж�
                                                          1'b1:���жϣ�������Message execution error */
        unsigned int  data_tx_col    : 1;  /* bit[11]   : 1'b0:���ж�
                                                          1'b1:���жϣ�������ͨ������Collision */
        unsigned int  unsprtd_msg    : 1;  /* bit[12]   : 1'b0:���ж�
                                                          1'b1:���жϣ����յ�unsupported message */
        unsigned int  prep_cont_sts  : 1;  /* bit[13]   : 1'b0:���ж�
                                                          1'b1:���жϣ���Context registers��׼���� */
        unsigned int  Rx_Msg_OFL_sts : 1;  /* bit[14]   : 1'b0:���ж�
                                                          1'b1:���жϣ���Rx message overflow */
        unsigned int  clk_pause_sts  : 1;  /* bit[15]   : 1'b0:���ж�
                                                          1'b1:���жϣ������ߴ�high power state�仯��low power state��clock pause or shut down�� */
        unsigned int  reserved       : 16; /* bit[16-31]: Reserved for Future Use */
    } reg;
} SOC_SLIMBUS_INTSTS_UNION;
#define SOC_SLIMBUS_INTSTS_tx_msg_pack_START     (0)
#define SOC_SLIMBUS_INTSTS_tx_msg_pack_END       (0)
#define SOC_SLIMBUS_INTSTS_tx_msg_nack_START     (1)
#define SOC_SLIMBUS_INTSTS_tx_msg_nack_END       (1)
#define SOC_SLIMBUS_INTSTS_tx_msg_nore_START     (2)
#define SOC_SLIMBUS_INTSTS_tx_msg_nore_END       (2)
#define SOC_SLIMBUS_INTSTS_tx_msg_udef_START     (3)
#define SOC_SLIMBUS_INTSTS_tx_msg_udef_END       (3)
#define SOC_SLIMBUS_INTSTS_rx_msg_pack_START     (4)
#define SOC_SLIMBUS_INTSTS_rx_msg_pack_END       (4)
#define SOC_SLIMBUS_INTSTS_rx_msg_nack_START     (5)
#define SOC_SLIMBUS_INTSTS_rx_msg_nack_END       (5)
#define SOC_SLIMBUS_INTSTS_rx_msg_nore_START     (6)
#define SOC_SLIMBUS_INTSTS_rx_msg_nore_END       (6)
#define SOC_SLIMBUS_INTSTS_rx_msg_udef_START     (7)
#define SOC_SLIMBUS_INTSTS_rx_msg_udef_END       (7)
#define SOC_SLIMBUS_INTSTS_reconfig_set_START    (8)
#define SOC_SLIMBUS_INTSTS_reconfig_set_END      (8)
#define SOC_SLIMBUS_INTSTS_reconfig_clear_START  (9)
#define SOC_SLIMBUS_INTSTS_reconfig_clear_END    (9)
#define SOC_SLIMBUS_INTSTS_ex_error_START        (10)
#define SOC_SLIMBUS_INTSTS_ex_error_END          (10)
#define SOC_SLIMBUS_INTSTS_data_tx_col_START     (11)
#define SOC_SLIMBUS_INTSTS_data_tx_col_END       (11)
#define SOC_SLIMBUS_INTSTS_unsprtd_msg_START     (12)
#define SOC_SLIMBUS_INTSTS_unsprtd_msg_END       (12)
#define SOC_SLIMBUS_INTSTS_prep_cont_sts_START   (13)
#define SOC_SLIMBUS_INTSTS_prep_cont_sts_END     (13)
#define SOC_SLIMBUS_INTSTS_Rx_Msg_OFL_sts_START  (14)
#define SOC_SLIMBUS_INTSTS_Rx_Msg_OFL_sts_END    (14)
#define SOC_SLIMBUS_INTSTS_clk_pause_sts_START   (15)
#define SOC_SLIMBUS_INTSTS_clk_pause_sts_END     (15)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_TXARBI1_UNION
 �ṹ˵��  : TXARBI1 �Ĵ����ṹ���塣��ַƫ����:0x0008����ֵ:0x0000�����:32
 �Ĵ���˵��: �����ٲüĴ���1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ArbitrationPriority : 3;  /* bit[0-2]  : Transmitted Message�ٲ����ȼ�
                                                               3'b000:Reserved
                                                               3'b001:�����ȼ���Ϣ
                                                               3'b010:Ĭ�����ȼ���Ϣ
                                                               3'b011:�����ȼ���Ϣ
                                                               3'b100:Manager assigned only */
        unsigned int  AE                  : 1;  /* bit[3]    : 1'b0:��ֹAE
                                                               1'b1:ʹ��Arbitration Extension */
        unsigned int  ArbitrationType     : 4;  /* bit[4-7]  : �ٲ�����
                                                               4'b0000:���ٲ�
                                                               b0001-b0100:Reserved
                                                               4'b0101:���ٲ�
                                                               b0110-b1110:Reserved
                                                               3'b1111:���ٲ� */
        unsigned int  Source_LA_EA        : 8;  /* bit[8-15] : Source Logical Address[7:0] ��
                                                               Enumeration Address[47:40] */
        unsigned int  Source_EA           : 16; /* bit[16-31]: Source Enumeration Address[39:24] */
    } reg;
} SOC_SLIMBUS_TXARBI1_UNION;
#define SOC_SLIMBUS_TXARBI1_ArbitrationPriority_START  (0)
#define SOC_SLIMBUS_TXARBI1_ArbitrationPriority_END    (2)
#define SOC_SLIMBUS_TXARBI1_AE_START                   (3)
#define SOC_SLIMBUS_TXARBI1_AE_END                     (3)
#define SOC_SLIMBUS_TXARBI1_ArbitrationType_START      (4)
#define SOC_SLIMBUS_TXARBI1_ArbitrationType_END        (7)
#define SOC_SLIMBUS_TXARBI1_Source_LA_EA_START         (8)
#define SOC_SLIMBUS_TXARBI1_Source_LA_EA_END           (15)
#define SOC_SLIMBUS_TXARBI1_Source_EA_START            (16)
#define SOC_SLIMBUS_TXARBI1_Source_EA_END              (31)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_TXARBI2_UNION
 �ṹ˵��  : TXARBI2 �Ĵ����ṹ���塣��ַƫ����:0x000C����ֵ:0x0000�����:32
 �Ĵ���˵��: �����ٲüĴ���2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  Source_EA : 16; /* bit[0-15] : Source Enumeration Address[23:8] */
        unsigned int  Source_EA : 8;  /* bit[16-23]: Source Enumeration Address[7:0] */
        unsigned int  reserved  : 8;  /* bit[24-31]: Reserved for Future Use */
    } reg;
} SOC_SLIMBUS_TXARBI2_UNION;
#define SOC_SLIMBUS_TXARBI2_Source_EA_START  (0)
#define SOC_SLIMBUS_TXARBI2_Source_EA_END    (15)
#define SOC_SLIMBUS_TXARBI2_Source_EA_START  (16)
#define SOC_SLIMBUS_TXARBI2_Source_EA_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_TXMSGHDR1_UNION
 �ṹ˵��  : TXMSGHDR1 �Ĵ����ṹ���塣��ַƫ����:0x0010����ֵ:0x0000�����:32
 �Ĵ���˵��: ������Ϣͷ1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  Remaininglength  : 5;  /* bit[0-4]  : Message��ʣ����ֽ���
                                                            5'b00000:ʣ��'0'
                                                            5'b00001:ʣ��'1'
                                                            ..
                                                            ..
                                                            5'b11111:ʣ��'31' */
        unsigned int  Messagetype      : 3;  /* bit[5-7]  : Message����
                                                            3'b000:Core Msg
                                                            3'b001:Destination-referred Device Class-specific Msg
                                                            3'b010:Destination-referred User Msg
                                                            3'b011:�Ƿ���
                                                            3'b100:Reserved
                                                            3'b101:Source-referred Device Class-specific Msg
                                                            3'b110:Source-referred User Msg
                                                            3'b111:Escape */
        unsigned int  Messagecode      : 7;  /* bit[8-14] : The nature of Message
                                                            ���磺
                                                            7'h01:Report Present Msg code
                                                            7'h02:����logical Address */
        unsigned int  PrimaryIntegrity : 5;  /* bit[15-19]: These 4 bits are invalid because primary integrity is calculated inside the Component. */
        unsigned int  DestinationType  : 2;  /* bit[20-21]: Destination Address interpreted��ʽ
                                                            2'b00:Destination��Logical Address
                                                            2'b01:Destination��Enumeration Address
                                                            2'b10:Reserved
                                                            2'b11:Header����Destination Address������Devices����Destinations */
        unsigned int  reserved         : 2;  /* bit[22-23]: Reserved */
        unsigned int  Dest_EA          : 8;  /* bit[24-31]: Enumeration Address[47:40] */
    } reg;
} SOC_SLIMBUS_TXMSGHDR1_UNION;
#define SOC_SLIMBUS_TXMSGHDR1_Remaininglength_START   (0)
#define SOC_SLIMBUS_TXMSGHDR1_Remaininglength_END     (4)
#define SOC_SLIMBUS_TXMSGHDR1_Messagetype_START       (5)
#define SOC_SLIMBUS_TXMSGHDR1_Messagetype_END         (7)
#define SOC_SLIMBUS_TXMSGHDR1_Messagecode_START       (8)
#define SOC_SLIMBUS_TXMSGHDR1_Messagecode_END         (14)
#define SOC_SLIMBUS_TXMSGHDR1_PrimaryIntegrity_START  (15)
#define SOC_SLIMBUS_TXMSGHDR1_PrimaryIntegrity_END    (19)
#define SOC_SLIMBUS_TXMSGHDR1_DestinationType_START   (20)
#define SOC_SLIMBUS_TXMSGHDR1_DestinationType_END     (21)
#define SOC_SLIMBUS_TXMSGHDR1_Dest_EA_START           (24)
#define SOC_SLIMBUS_TXMSGHDR1_Dest_EA_END             (31)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_TXMSGHDR2_UNION
 �ṹ˵��  : TXMSGHDR2 �Ĵ����ṹ���塣��ַƫ����:0x0014����ֵ:0x0000�����:32
 �Ĵ���˵��: ������Ϣͷ2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  Dest_EA : 8;  /* bit[0-7]  : Destination Enumeration Address[39:32] */
        unsigned int  Dest_EA : 8;  /* bit[8-15] : Destination Enumeration Address[31:24] */
        unsigned int  Dest_EA : 8;  /* bit[16-23]: Destination Enumeration Address[23:16] */
        unsigned int  Dest_EA : 8;  /* bit[24-31]: Destination Enumeration Address[15:8] */
    } reg;
} SOC_SLIMBUS_TXMSGHDR2_UNION;
#define SOC_SLIMBUS_TXMSGHDR2_Dest_EA_START  (0)
#define SOC_SLIMBUS_TXMSGHDR2_Dest_EA_END    (7)
#define SOC_SLIMBUS_TXMSGHDR2_Dest_EA_START  (8)
#define SOC_SLIMBUS_TXMSGHDR2_Dest_EA_END    (15)
#define SOC_SLIMBUS_TXMSGHDR2_Dest_EA_START  (16)
#define SOC_SLIMBUS_TXMSGHDR2_Dest_EA_END    (23)
#define SOC_SLIMBUS_TXMSGHDR2_Dest_EA_START  (24)
#define SOC_SLIMBUS_TXMSGHDR2_Dest_EA_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_TXMSGHDR3_UNION
 �ṹ˵��  : TXMSGHDR3 �Ĵ����ṹ���塣��ַƫ����:0x0018����ֵ:0x0000�����:32
 �Ĵ���˵��: ������Ϣͷ3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  Dest_LA_EA : 8;  /* bit[0-7] : Destination Logical Address[7:0] �� Destination Enumeration Address[7:0] */
        unsigned int  reserved   : 24; /* bit[8-31]: Reserved for Future Use */
    } reg;
} SOC_SLIMBUS_TXMSGHDR3_UNION;
#define SOC_SLIMBUS_TXMSGHDR3_Dest_LA_EA_START  (0)
#define SOC_SLIMBUS_TXMSGHDR3_Dest_LA_EA_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_TXMSGPLD3_UNION
 �ṹ˵��  : TXMSGPLD3 �Ĵ����ṹ���塣��ַƫ����:0x0024����ֵ:0x0000�����:32
 �Ĵ���˵��: ������Ϣ����3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tx_msg_payload3 : 8;  /* bit[0-7] : ����Message Payload data(71:64)������ԴΪSLIMbus Active Manager */
        unsigned int  msg_rdy         : 1;  /* bit[8]   : 1'b0:messageδ׼����
                                                          1'b1:message׼���ã���1����Message���͵������ϣ�set readyǰ��֤����register�����ã���λ��Ӳ���Զ������ */
        unsigned int                  : 23; /* bit[9-31]: ��Ч��only [8:0] */
    } reg;
} SOC_SLIMBUS_TXMSGPLD3_UNION;
#define SOC_SLIMBUS_TXMSGPLD3_tx_msg_payload3_START  (0)
#define SOC_SLIMBUS_TXMSGPLD3_tx_msg_payload3_END    (7)
#define SOC_SLIMBUS_TXMSGPLD3_msg_rdy_START          (8)
#define SOC_SLIMBUS_TXMSGPLD3_msg_rdy_END            (8)
#define SOC_SLIMBUS_TXMSGPLD3__START                 (9)
#define SOC_SLIMBUS_TXMSGPLD3__END                   (31)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_RXARBI1_UNION
 �ṹ˵��  : RXARBI1 �Ĵ����ṹ���塣��ַƫ����:0x0038����ֵ:0x0000�����:32
 �Ĵ���˵��: �����ٲüĴ���1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ArbitrationPriority : 3;  /* bit[0-2]  : Transmitted Message�ٲ����ȼ�
                                                               3'b000:Reserved
                                                               3'b001:�����ȼ���Ϣ
                                                               3'b010:Ĭ�����ȼ���Ϣ
                                                               3'b011:�����ȼ���Ϣ
                                                               3'b100:Manager assigned only */
        unsigned int  AE                  : 1;  /* bit[3]    : 1'b0:��ֹAE
                                                               1'b1:ʹ��Arbitration Extension */
        unsigned int  ArbitrationType     : 4;  /* bit[4-7]  : �ٲ�����
                                                               4'b0000:���ٲ�
                                                               b0001-b0100:Reserved
                                                               4'b0101:���ٲ�
                                                               b0110-b1110:Reserved
                                                               3'b1111:���ٲ� */
        unsigned int  Source_LA_EA        : 8;  /* bit[8-15] : Source Logical Address[7:0] �� 
                                                               Enumeration Address[47:40] */
        unsigned int  Source_EA           : 8;  /* bit[16-23]: Source Enumeration Address[39:32] */
        unsigned int  Source_EA           : 8;  /* bit[24-31]: Source Enumeration Address[31:24] */
    } reg;
} SOC_SLIMBUS_RXARBI1_UNION;
#define SOC_SLIMBUS_RXARBI1_ArbitrationPriority_START  (0)
#define SOC_SLIMBUS_RXARBI1_ArbitrationPriority_END    (2)
#define SOC_SLIMBUS_RXARBI1_AE_START                   (3)
#define SOC_SLIMBUS_RXARBI1_AE_END                     (3)
#define SOC_SLIMBUS_RXARBI1_ArbitrationType_START      (4)
#define SOC_SLIMBUS_RXARBI1_ArbitrationType_END        (7)
#define SOC_SLIMBUS_RXARBI1_Source_LA_EA_START         (8)
#define SOC_SLIMBUS_RXARBI1_Source_LA_EA_END           (15)
#define SOC_SLIMBUS_RXARBI1_Source_EA_START            (16)
#define SOC_SLIMBUS_RXARBI1_Source_EA_END              (23)
#define SOC_SLIMBUS_RXARBI1_Source_EA_START            (24)
#define SOC_SLIMBUS_RXARBI1_Source_EA_END              (31)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_RXARBI2_UNION
 �ṹ˵��  : RXARBI2 �Ĵ����ṹ���塣��ַƫ����:0x003C����ֵ:0x0000�����:32
 �Ĵ���˵��: �����ٲüĴ���2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  Source_EA : 8;  /* bit[0-7]  : Source Enumeration Address[23:16] */
        unsigned int  Source_EA : 8;  /* bit[8-15] : Source Enumeration Address[15:8] */
        unsigned int  Source_EA : 8;  /* bit[16-23]: Source Enumeration Address[7:0] */
        unsigned int  msg_resp  : 4;  /* bit[24-27]: ��Ӧ����
                                                     4'b0000:����Ӧ
                                                     4'b1010:PACK
                                                     4'b1111:NACK
                                                     b0001-b1001:δ����
                                                     b1011-b1110:δ���� */
        unsigned int  reserved  : 4;  /* bit[28-31]: Reserved for Future Use */
    } reg;
} SOC_SLIMBUS_RXARBI2_UNION;
#define SOC_SLIMBUS_RXARBI2_Source_EA_START  (0)
#define SOC_SLIMBUS_RXARBI2_Source_EA_END    (7)
#define SOC_SLIMBUS_RXARBI2_Source_EA_START  (8)
#define SOC_SLIMBUS_RXARBI2_Source_EA_END    (15)
#define SOC_SLIMBUS_RXARBI2_Source_EA_START  (16)
#define SOC_SLIMBUS_RXARBI2_Source_EA_END    (23)
#define SOC_SLIMBUS_RXARBI2_msg_resp_START   (24)
#define SOC_SLIMBUS_RXARBI2_msg_resp_END     (27)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_RXMSGHDR1_UNION
 �ṹ˵��  : RXMSGHDR1 �Ĵ����ṹ���塣��ַƫ����:0x0040����ֵ:0x0000�����:32
 �Ĵ���˵��: ������Ϣͷ1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  Remaininglength  : 5;  /* bit[0-4]  : Message��ʣ����ֽ���
                                                            5'b00000:ʣ��'0'
                                                            5'b00001:ʣ��'1'
                                                            ..
                                                            ..
                                                            5'b11111:ʣ��'31' */
        unsigned int  Messagetype      : 3;  /* bit[5-7]  : Message����
                                                            3'b000:Core Msg
                                                            3'b001:Destination-referred Device Class-specific Msg
                                                            3'b010:Destination-referred User Msg
                                                            3'b011:�Ƿ���
                                                            3'b100:Reserved
                                                            3'b101:Source-referred Device Class-specific Msg
                                                            3'b110:Source-referred User Msg
                                                            3'b111:Escape */
        unsigned int  Messagecode      : 7;  /* bit[8-14] : The nature of Message
                                                            ���磺
                                                            7'h01:Report Present Msg code
                                                            7'h02:����logical Address */
        unsigned int  reserved_0       : 1;  /* bit[15]   : Reserved */
        unsigned int  PrimaryIntegrity : 4;  /* bit[16-19]: Received primary integrity */
        unsigned int  DestinationType  : 2;  /* bit[20-21]: Destination Address interpreted��ʽ
                                                            2'b00:Destination��Logical Address
                                                            2'b01:Destination��Enumeration Address
                                                            2'b10:Reserved
                                                            2'b11:Header����Destination Address������Devices����Destinations */
        unsigned int  reserved_1       : 2;  /* bit[22-23]: Reserved */
        unsigned int  Dest_EA          : 8;  /* bit[24-31]: Enumeration Address[47:40] */
    } reg;
} SOC_SLIMBUS_RXMSGHDR1_UNION;
#define SOC_SLIMBUS_RXMSGHDR1_Remaininglength_START   (0)
#define SOC_SLIMBUS_RXMSGHDR1_Remaininglength_END     (4)
#define SOC_SLIMBUS_RXMSGHDR1_Messagetype_START       (5)
#define SOC_SLIMBUS_RXMSGHDR1_Messagetype_END         (7)
#define SOC_SLIMBUS_RXMSGHDR1_Messagecode_START       (8)
#define SOC_SLIMBUS_RXMSGHDR1_Messagecode_END         (14)
#define SOC_SLIMBUS_RXMSGHDR1_PrimaryIntegrity_START  (16)
#define SOC_SLIMBUS_RXMSGHDR1_PrimaryIntegrity_END    (19)
#define SOC_SLIMBUS_RXMSGHDR1_DestinationType_START   (20)
#define SOC_SLIMBUS_RXMSGHDR1_DestinationType_END     (21)
#define SOC_SLIMBUS_RXMSGHDR1_Dest_EA_START           (24)
#define SOC_SLIMBUS_RXMSGHDR1_Dest_EA_END             (31)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_RXMSGHDR2_UNION
 �ṹ˵��  : RXMSGHDR2 �Ĵ����ṹ���塣��ַƫ����:0x0044����ֵ:0x0000�����:32
 �Ĵ���˵��: ������Ϣͷ2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  Dest_EA : 8;  /* bit[0-7]  : Destination Enumeration Address[15:8] */
        unsigned int  Dest_EA : 8;  /* bit[8-15] : Destination Enumeration Address[23:16] */
        unsigned int  Dest_EA : 8;  /* bit[16-23]: Destination Enumeration Address[31:24] */
        unsigned int  Dest_EA : 8;  /* bit[24-31]: Destination Enumeration Address[39:32] */
    } reg;
} SOC_SLIMBUS_RXMSGHDR2_UNION;
#define SOC_SLIMBUS_RXMSGHDR2_Dest_EA_START  (0)
#define SOC_SLIMBUS_RXMSGHDR2_Dest_EA_END    (7)
#define SOC_SLIMBUS_RXMSGHDR2_Dest_EA_START  (8)
#define SOC_SLIMBUS_RXMSGHDR2_Dest_EA_END    (15)
#define SOC_SLIMBUS_RXMSGHDR2_Dest_EA_START  (16)
#define SOC_SLIMBUS_RXMSGHDR2_Dest_EA_END    (23)
#define SOC_SLIMBUS_RXMSGHDR2_Dest_EA_START  (24)
#define SOC_SLIMBUS_RXMSGHDR2_Dest_EA_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_RXMSGHDR3_UNION
 �ṹ˵��  : RXMSGHDR3 �Ĵ����ṹ���塣��ַƫ����:0x0048����ֵ:0x0000�����:32
 �Ĵ���˵��: ������Ϣͷ3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  Dest_LA_EA : 8;  /* bit[0-7] : Destination Logical Address[7:0] �� Destination Enumeration Address[7:0] */
        unsigned int  reserved   : 24; /* bit[8-31]: Reserved for Future Use */
    } reg;
} SOC_SLIMBUS_RXMSGHDR3_UNION;
#define SOC_SLIMBUS_RXMSGHDR3_Dest_LA_EA_START  (0)
#define SOC_SLIMBUS_RXMSGHDR3_Dest_LA_EA_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_IFEA4732_UNION
 �ṹ˵��  : IFEA4732 �Ĵ����ṹ���塣��ַƫ����:0x006C����ֵ:0x0000�����:32
 �Ĵ���˵��: �ӿ��豸ö�ٵ�ַ
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ifea_47_32 : 16; /* bit[0-15] : interface device��Enumeration Address [47:32] */
        unsigned int  reserved   : 16; /* bit[16-31]: Reserved for Future Use */
    } reg;
} SOC_SLIMBUS_IFEA4732_UNION;
#define SOC_SLIMBUS_IFEA4732_ifea_47_32_START  (0)
#define SOC_SLIMBUS_IFEA4732_ifea_47_32_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_FEA4732_UNION
 �ṹ˵��  : FEA4732 �Ĵ����ṹ���塣��ַƫ����:0x0078����ֵ:0x0000�����:32
 �Ĵ���˵��: Framer�豸ö�ٵ�ַ
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ifea_47_32 : 16; /* bit[0-15] : Framer��Enumeration Address [47:32] */
        unsigned int  reserved   : 16; /* bit[16-31]: Reserved for Future Use */
    } reg;
} SOC_SLIMBUS_FEA4732_UNION;
#define SOC_SLIMBUS_FEA4732_ifea_47_32_START  (0)
#define SOC_SLIMBUS_FEA4732_ifea_47_32_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_CNFG_UNION
 �ṹ˵��  : CNFG �Ĵ����ṹ���塣��ַƫ����:0x0080����ֵ:0x0000�����:32
 �Ĵ���˵��: ���üĴ���
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  fr_pri_sec        : 1;  /* bit[0]    : 1'b0:framer device��Ϊ���豸(inactive Framer)
                                                             1'b1:framer device��Ϊ���豸(active Framer) */
        unsigned int  am_en             : 1;  /* bit[1]    : 1'b0:�ر�AM
                                                             1'b1:����AM(Active Manager) */
        unsigned int  fr_en             : 1;  /* bit[2]    : 1'b0:�ر�Framer
                                                             1'b1:����Framer */
        unsigned int  gd0_en            : 1;  /* bit[3]    : 1'b0:�ر�GD0
                                                             1'b1:����GD0(Generic Device 0) */
        unsigned int  fr_clk_freq       : 4;  /* bit[4-7]  : ʱ�������root frequency
                                                             ���磺
                                                             4'b1000:Root Frequency 26 Mhz */
        unsigned int  fr_clk_gear       : 5;  /* bit[8-12] : ʱ�������gear
                                                             ���磺
                                                             4'b1010:Clock Gear 10 */
        unsigned int  fr_boot_mode      : 5;  /* bit[13-17]: ��Ϊ���豸��framer device�������ߵ�mode */
        unsigned int  fr_boot_gear      : 4;  /* bit[18-21]: ����ʱ��framer device��gear */
        unsigned int  fr_clk_pause      : 1;  /* bit[22]   : �����ڻ���slimbus clock
                                                             1'b1:framer����clock pause
                                                             1'b1:framer�˳�clock pause */
        unsigned int  if_en             : 1;  /* bit[23]   : 1'b0:disable IF
                                                             1'b1:enable IF(Interface Device) */
        unsigned int  framer_clk_on_off : 1;  /* bit[24]   : ת����'Active Framer'ǰ����Ϊ1��ע��ͬʱҪ�ṩslim_base_clk */
        unsigned int  reserved          : 7;  /* bit[25-31]: Reserved for Future Use */
    } reg;
} SOC_SLIMBUS_CNFG_UNION;
#define SOC_SLIMBUS_CNFG_fr_pri_sec_START         (0)
#define SOC_SLIMBUS_CNFG_fr_pri_sec_END           (0)
#define SOC_SLIMBUS_CNFG_am_en_START              (1)
#define SOC_SLIMBUS_CNFG_am_en_END                (1)
#define SOC_SLIMBUS_CNFG_fr_en_START              (2)
#define SOC_SLIMBUS_CNFG_fr_en_END                (2)
#define SOC_SLIMBUS_CNFG_gd0_en_START             (3)
#define SOC_SLIMBUS_CNFG_gd0_en_END               (3)
#define SOC_SLIMBUS_CNFG_fr_clk_freq_START        (4)
#define SOC_SLIMBUS_CNFG_fr_clk_freq_END          (7)
#define SOC_SLIMBUS_CNFG_fr_clk_gear_START        (8)
#define SOC_SLIMBUS_CNFG_fr_clk_gear_END          (12)
#define SOC_SLIMBUS_CNFG_fr_boot_mode_START       (13)
#define SOC_SLIMBUS_CNFG_fr_boot_mode_END         (17)
#define SOC_SLIMBUS_CNFG_fr_boot_gear_START       (18)
#define SOC_SLIMBUS_CNFG_fr_boot_gear_END         (21)
#define SOC_SLIMBUS_CNFG_fr_clk_pause_START       (22)
#define SOC_SLIMBUS_CNFG_fr_clk_pause_END         (22)
#define SOC_SLIMBUS_CNFG_if_en_START              (23)
#define SOC_SLIMBUS_CNFG_if_en_END                (23)
#define SOC_SLIMBUS_CNFG_framer_clk_on_off_START  (24)
#define SOC_SLIMBUS_CNFG_framer_clk_on_off_END    (24)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_INTR_UNION
 �ṹ˵��  : INTR �Ĵ����ṹ���塣��ַƫ����:0x0084����ֵ:0x0000�����:32
 �Ĵ���˵��: �жϼĴ���
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  am_if_int : 1;  /* bit[0]   : �ж�״̬λ:
                                                    1'b0:���ж�
                                                    1'b1:���ж�����AM��IF */
        unsigned int  gd0_int   : 1;  /* bit[1]   : �ж�״̬λ:
                                                    1'b0:���ж�
                                                    1'b1:���ж�����GD0 */
        unsigned int  reserved  : 30; /* bit[2-31]: Reserved for future use */
    } reg;
} SOC_SLIMBUS_INTR_UNION;
#define SOC_SLIMBUS_INTR_am_if_int_START  (0)
#define SOC_SLIMBUS_INTR_am_if_int_END    (0)
#define SOC_SLIMBUS_INTR_gd0_int_START    (1)
#define SOC_SLIMBUS_INTR_gd0_int_END      (1)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_RPPREEN_UNION
 �ṹ˵��  : RPPREEN �Ĵ����ṹ���塣��ַƫ����:0x0088����ֵ:0x0000�����:32
 �Ĵ���˵��: Report Present Enable
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  af_rp_pre_en   : 1;  /* bit[0]    : ��1'b1ʹFramer device�л���waiting_LA״̬ */
        unsigned int  if_rp_pre_en   : 1;  /* bit[1]    : ��1'b1ʹIF�л���waiting_LA״̬ */
        unsigned int  gd0_rp_pre_en  : 1;  /* bit[2]    : ��1'b1ʹGD0�л���waiting_LA״̬ */
        unsigned int  reserved_0     : 5;  /* bit[3-7]  : Reserved for future use */
        unsigned int  fr_enumerated  : 1;  /* bit[8]    : ��1'b1��ʾFramer device�ѽ���enumerated״̬ */
        unsigned int  if_enumerated  : 1;  /* bit[9]    : ��1'b1��ʾIF�ѽ���enumerated״̬ */
        unsigned int  gd0_enumerated : 1;  /* bit[10]   : ��1'b1��ʾGD0�ѽ���enumerated״̬ */
        unsigned int  reserved_1     : 21; /* bit[11-31]: Reserved for future use */
    } reg;
} SOC_SLIMBUS_RPPREEN_UNION;
#define SOC_SLIMBUS_RPPREEN_af_rp_pre_en_START    (0)
#define SOC_SLIMBUS_RPPREEN_af_rp_pre_en_END      (0)
#define SOC_SLIMBUS_RPPREEN_if_rp_pre_en_START    (1)
#define SOC_SLIMBUS_RPPREEN_if_rp_pre_en_END      (1)
#define SOC_SLIMBUS_RPPREEN_gd0_rp_pre_en_START   (2)
#define SOC_SLIMBUS_RPPREEN_gd0_rp_pre_en_END     (2)
#define SOC_SLIMBUS_RPPREEN_fr_enumerated_START   (8)
#define SOC_SLIMBUS_RPPREEN_fr_enumerated_END     (8)
#define SOC_SLIMBUS_RPPREEN_if_enumerated_START   (9)
#define SOC_SLIMBUS_RPPREEN_if_enumerated_END     (9)
#define SOC_SLIMBUS_RPPREEN_gd0_enumerated_START  (10)
#define SOC_SLIMBUS_RPPREEN_gd0_enumerated_END    (10)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_GD0EA4732_UNION
 �ṹ˵��  : GD0EA4732 �Ĵ����ṹ���塣��ַƫ����:0x0154����ֵ:0x0000�����:32
 �Ĵ���˵��: ͨ���豸0ö�ٵ�ַ
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  gd0ea_47_32 : 16; /* bit[0-15] : GD0��Enumeration Address [47:32] */
        unsigned int  reserved    : 16; /* bit[16-31]: Reserved for future use */
    } reg;
} SOC_SLIMBUS_GD0EA4732_UNION;
#define SOC_SLIMBUS_GD0EA4732_gd0ea_47_32_START  (0)
#define SOC_SLIMBUS_GD0EA4732_gd0ea_47_32_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_GD0LA_UNION
 �ṹ˵��  : GD0LA �Ĵ����ṹ���塣��ַƫ����:0x0158����ֵ:0x0000�����:32
 �Ĵ���˵��: ͨ���豸0�߼���ַ
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  gd0la    : 8;  /* bit[0-7] : Logical Address of generic device0 */
        unsigned int  reserved : 24; /* bit[8-31]: Reserved for future use */
    } reg;
} SOC_SLIMBUS_GD0LA_UNION;
#define SOC_SLIMBUS_GD0LA_gd0la_START     (0)
#define SOC_SLIMBUS_GD0LA_gd0la_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_GD0INTEN_UNION
 �ṹ˵��  : GD0INTEN �Ĵ����ṹ���塣��ַƫ����:0x015C����ֵ:0x0000�����:32
 �Ĵ���˵��: ͨ���豸0�ж�ʹ�ܼĴ���
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  gd0_p0_int_en  : 1;  /* bit[0]    : 1'b0:��ֹport 0�ж�
                                                          1'b1:ʹ��port 0�ж� */
        unsigned int  gd0_p1_int_en  : 1;  /* bit[1]    : 1'b0:��ֹport 1�ж�
                                                          1'b1:ʹ��port 1�ж� */
        unsigned int  gd0_p2_int_en  : 1;  /* bit[2]    : 1'b0:��ֹport 2�ж�
                                                          1'b1:ʹ��port 2�ж� */
        unsigned int  gd0_p3_int_en  : 1;  /* bit[3]    : 1'b0:��ֹport 3�ж�
                                                          1'b1:ʹ��port 3�ж� */
        unsigned int  gd0_p4_int_en  : 1;  /* bit[4]    : 1'b0:��ֹport 4�ж�
                                                          1'b1:ʹ��port 4�ж� */
        unsigned int  gd0_p5_int_en  : 1;  /* bit[5]    : 1'b0:��ֹport 5�ж�
                                                          1'b1:ʹ��port 5�ж� */
        unsigned int  gd0_p6_int_en  : 1;  /* bit[6]    : 1'b0:��ֹport 6�ж�
                                                          1'b1:ʹ��port 6�ж� */
        unsigned int  gd0_p7_int_en  : 1;  /* bit[7]    : 1'b0:��ֹport 7�ж�
                                                          1'b1:ʹ��port 7�ж� */
        unsigned int  gd0_p8_int_en  : 1;  /* bit[8]    : 1'b0:��ֹport 8�ж�
                                                          1'b1:ʹ��port 8�ж� */
        unsigned int  gd0_p9_int_en  : 1;  /* bit[9]    : 1'b0:��ֹport 9�ж�
                                                          1'b1:ʹ��port 9�ж� */
        unsigned int  gd0_p10_int_en : 1;  /* bit[10]   : 1'b0:��ֹport 10�ж�
                                                          1'b1:ʹ��port 10�ж� */
        unsigned int  gd0_p11_int_en : 1;  /* bit[11]   : 1'b0:��ֹport 11�ж�
                                                          1'b1:ʹ��port 11�ж� */
        unsigned int  gd0_p12_int_en : 1;  /* bit[12]   : 1'b0:��ֹport 12�ж�
                                                          1'b1:ʹ��port 12�ж� */
        unsigned int  gd0_p13_int_en : 1;  /* bit[13]   : 1'b0:��ֹport 13�ж�
                                                          1'b1:ʹ��port 13�ж� */
        unsigned int  gd0_p14_int_en : 1;  /* bit[14]   : 1'b0:��ֹport 14�ж�
                                                          1'b1:ʹ��port 14�ж� */
        unsigned int  gd0_p15_int_en : 1;  /* bit[15]   : 1'b0:��ֹport 15�ж�
                                                          1'b1:ʹ��port 15�ж� */
        unsigned int  reserved       : 16; /* bit[16-31]: Reserved for future use */
    } reg;
} SOC_SLIMBUS_GD0INTEN_UNION;
#define SOC_SLIMBUS_GD0INTEN_gd0_p0_int_en_START   (0)
#define SOC_SLIMBUS_GD0INTEN_gd0_p0_int_en_END     (0)
#define SOC_SLIMBUS_GD0INTEN_gd0_p1_int_en_START   (1)
#define SOC_SLIMBUS_GD0INTEN_gd0_p1_int_en_END     (1)
#define SOC_SLIMBUS_GD0INTEN_gd0_p2_int_en_START   (2)
#define SOC_SLIMBUS_GD0INTEN_gd0_p2_int_en_END     (2)
#define SOC_SLIMBUS_GD0INTEN_gd0_p3_int_en_START   (3)
#define SOC_SLIMBUS_GD0INTEN_gd0_p3_int_en_END     (3)
#define SOC_SLIMBUS_GD0INTEN_gd0_p4_int_en_START   (4)
#define SOC_SLIMBUS_GD0INTEN_gd0_p4_int_en_END     (4)
#define SOC_SLIMBUS_GD0INTEN_gd0_p5_int_en_START   (5)
#define SOC_SLIMBUS_GD0INTEN_gd0_p5_int_en_END     (5)
#define SOC_SLIMBUS_GD0INTEN_gd0_p6_int_en_START   (6)
#define SOC_SLIMBUS_GD0INTEN_gd0_p6_int_en_END     (6)
#define SOC_SLIMBUS_GD0INTEN_gd0_p7_int_en_START   (7)
#define SOC_SLIMBUS_GD0INTEN_gd0_p7_int_en_END     (7)
#define SOC_SLIMBUS_GD0INTEN_gd0_p8_int_en_START   (8)
#define SOC_SLIMBUS_GD0INTEN_gd0_p8_int_en_END     (8)
#define SOC_SLIMBUS_GD0INTEN_gd0_p9_int_en_START   (9)
#define SOC_SLIMBUS_GD0INTEN_gd0_p9_int_en_END     (9)
#define SOC_SLIMBUS_GD0INTEN_gd0_p10_int_en_START  (10)
#define SOC_SLIMBUS_GD0INTEN_gd0_p10_int_en_END    (10)
#define SOC_SLIMBUS_GD0INTEN_gd0_p11_int_en_START  (11)
#define SOC_SLIMBUS_GD0INTEN_gd0_p11_int_en_END    (11)
#define SOC_SLIMBUS_GD0INTEN_gd0_p12_int_en_START  (12)
#define SOC_SLIMBUS_GD0INTEN_gd0_p12_int_en_END    (12)
#define SOC_SLIMBUS_GD0INTEN_gd0_p13_int_en_START  (13)
#define SOC_SLIMBUS_GD0INTEN_gd0_p13_int_en_END    (13)
#define SOC_SLIMBUS_GD0INTEN_gd0_p14_int_en_START  (14)
#define SOC_SLIMBUS_GD0INTEN_gd0_p14_int_en_END    (14)
#define SOC_SLIMBUS_GD0INTEN_gd0_p15_int_en_START  (15)
#define SOC_SLIMBUS_GD0INTEN_gd0_p15_int_en_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_GD0INTSTS_UNION
 �ṹ˵��  : GD0INTSTS �Ĵ����ṹ���塣��ַƫ����:0x0160����ֵ:0x0000�����:32
 �Ĵ���˵��: ͨ���豸0�ж�״̬�Ĵ���
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  gd0_p0_int_sts  : 1;  /* bit[0]    : Port 0�ж�״̬
                                                           1'b0:���ж�
                                                           1'b1:���ж� */
        unsigned int  gd0_p1_int_sts  : 1;  /* bit[1]    : Port 1�ж�״̬
                                                           1'b0:���ж�
                                                           1'b1:���ж� */
        unsigned int  gd0_p2_int_sts  : 1;  /* bit[2]    : Port 2�ж�״̬
                                                           1'b0:���ж�
                                                           1'b1:���ж� */
        unsigned int  gd0_p3_int_sts  : 1;  /* bit[3]    : Port 3�ж�״̬
                                                           1'b0:���ж�
                                                           1'b1:���ж� */
        unsigned int  gd0_p4_int_sts  : 1;  /* bit[4]    : Port 4�ж�״̬
                                                           1'b0:���ж�
                                                           1'b1:���ж� */
        unsigned int  gd0_p5_int_sts  : 1;  /* bit[5]    : Port 5�ж�״̬
                                                           1'b0:���ж�
                                                           1'b1:���ж� */
        unsigned int  gd0_p6_int_sts  : 1;  /* bit[6]    : Port 6�ж�״̬
                                                           1'b0:���ж�
                                                           1'b1:���ж� */
        unsigned int  gd0_p7_int_sts  : 1;  /* bit[7]    : Port 7�ж�״̬
                                                           1'b0:���ж�
                                                           1'b1:���ж� */
        unsigned int  gd0_p8_int_sts  : 1;  /* bit[8]    : Port 8�ж�״̬
                                                           1'b0:���ж�
                                                           1'b1:���ж� */
        unsigned int  gd0_p9_int_sts  : 1;  /* bit[9]    : Port 9�ж�״̬
                                                           1'b0:���ж�
                                                           1'b1:���ж� */
        unsigned int  gd0_p10_int_sts : 1;  /* bit[10]   : Port 10�ж�״̬
                                                           1'b0:���ж�
                                                           1'b1:���ж� */
        unsigned int  gd0_p11_int_sts : 1;  /* bit[11]   : Port 11�ж�״̬
                                                           1'b0:���ж�
                                                           1'b1:���ж� */
        unsigned int  gd0_p12_int_sts : 1;  /* bit[12]   : Port 12�ж�״̬
                                                           1'b0:���ж�
                                                           1'b1:���ж� */
        unsigned int  gd0_p13_int_sts : 1;  /* bit[13]   : Port 13�ж�״̬
                                                           1'b0:���ж�
                                                           1'b1:���ж� */
        unsigned int  gd0_p14_int_sts : 1;  /* bit[14]   : Port 14�ж�״̬
                                                           1'b0:���ж�
                                                           1'b1:���ж� */
        unsigned int  gd0_p15_int_sts : 1;  /* bit[15]   : Port 15�ж�״̬
                                                           1'b0:���ж�
                                                           1'b1:���ж� */
        unsigned int  reserved        : 16; /* bit[16-31]: Reserved */
    } reg;
} SOC_SLIMBUS_GD0INTSTS_UNION;
#define SOC_SLIMBUS_GD0INTSTS_gd0_p0_int_sts_START   (0)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p0_int_sts_END     (0)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p1_int_sts_START   (1)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p1_int_sts_END     (1)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p2_int_sts_START   (2)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p2_int_sts_END     (2)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p3_int_sts_START   (3)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p3_int_sts_END     (3)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p4_int_sts_START   (4)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p4_int_sts_END     (4)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p5_int_sts_START   (5)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p5_int_sts_END     (5)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p6_int_sts_START   (6)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p6_int_sts_END     (6)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p7_int_sts_START   (7)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p7_int_sts_END     (7)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p8_int_sts_START   (8)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p8_int_sts_END     (8)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p9_int_sts_START   (9)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p9_int_sts_END     (9)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p10_int_sts_START  (10)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p10_int_sts_END    (10)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p11_int_sts_START  (11)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p11_int_sts_END    (11)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p12_int_sts_START  (12)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p12_int_sts_END    (12)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p13_int_sts_START  (13)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p13_int_sts_END    (13)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p14_int_sts_START  (14)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p14_int_sts_END    (14)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p15_int_sts_START  (15)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p15_int_sts_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_D0PiINTEN_UNION
 �ṹ˵��  : D0PiINTEN �Ĵ����ṹ���塣��ַƫ����:0x0164+0x10*i����ֵ:0x0000�����:32
 �Ĵ���˵��: ͨ���豸0�˿�i(0-15)�ж�ʹ�ܼĴ���
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  src_threshold     : 1;  /* bit[0]    : 1'b0:��ֹSource Threshold reached�ж�
                                                             1'b1:ʹ��Source Threshold reached�ж� */
        unsigned int  src_fifo_empty    : 1;  /* bit[1]    : 1'b0:��ֹsource FIFO empty�ж�
                                                             1'b1:ʹ��source FIFO empty�ж� */
        unsigned int  src_fifo_full     : 1;  /* bit[2]    : 1'b0:��ֹsource FIFO full�ж�
                                                             1'b1:ʹ��source FIFO full�ж� */
        unsigned int  src_fifo_underrun : 1;  /* bit[3]    : 1'b0:��ֹsource FIFO underrun�ж�
                                                             1'b1:ʹ��source FIFO underrun�ж� */
        unsigned int  reserved_0        : 12; /* bit[4-15] : Reserved for Future Use */
        unsigned int  sink_threshold    : 1;  /* bit[16]   : 1'b0:��ֹSink Threshold reached�ж�
                                                             1'b1:ʹ��Sink Threshold reached�ж� */
        unsigned int  sink_fifo_empty   : 1;  /* bit[17]   : 1'b0:��ֹSink FIFO empty�ж�
                                                             1'b1:ʹ��Sink FIFO empty�ж� */
        unsigned int  sink_fifo_full    : 1;  /* bit[18]   : 1'b0:��ֹSink FIFO full�ж�
                                                             1'b1:ʹ��Sink FIFO full�ж� */
        unsigned int  sink_fifo_overrun : 1;  /* bit[19]   : 1'b0:��ֹSink FIFO overrun�ж�
                                                             1'b1:ʹ��Sink FIFO overrun�ж� */
        unsigned int  reserved_1        : 11; /* bit[20-30]: Reserved for Future Use */
        unsigned int  Timeout_en        : 1;  /* bit[31]   : 1'b0:��ֹtimeout�ж�
                                                             1'b1:ʹ��timeout�ж� */
    } reg;
} SOC_SLIMBUS_D0PiINTEN_UNION;
#define SOC_SLIMBUS_D0PiINTEN_src_threshold_START      (0)
#define SOC_SLIMBUS_D0PiINTEN_src_threshold_END        (0)
#define SOC_SLIMBUS_D0PiINTEN_src_fifo_empty_START     (1)
#define SOC_SLIMBUS_D0PiINTEN_src_fifo_empty_END       (1)
#define SOC_SLIMBUS_D0PiINTEN_src_fifo_full_START      (2)
#define SOC_SLIMBUS_D0PiINTEN_src_fifo_full_END        (2)
#define SOC_SLIMBUS_D0PiINTEN_src_fifo_underrun_START  (3)
#define SOC_SLIMBUS_D0PiINTEN_src_fifo_underrun_END    (3)
#define SOC_SLIMBUS_D0PiINTEN_sink_threshold_START     (16)
#define SOC_SLIMBUS_D0PiINTEN_sink_threshold_END       (16)
#define SOC_SLIMBUS_D0PiINTEN_sink_fifo_empty_START    (17)
#define SOC_SLIMBUS_D0PiINTEN_sink_fifo_empty_END      (17)
#define SOC_SLIMBUS_D0PiINTEN_sink_fifo_full_START     (18)
#define SOC_SLIMBUS_D0PiINTEN_sink_fifo_full_END       (18)
#define SOC_SLIMBUS_D0PiINTEN_sink_fifo_overrun_START  (19)
#define SOC_SLIMBUS_D0PiINTEN_sink_fifo_overrun_END    (19)
#define SOC_SLIMBUS_D0PiINTEN_Timeout_en_START         (31)
#define SOC_SLIMBUS_D0PiINTEN_Timeout_en_END           (31)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_D0PiINTSTS_UNION
 �ṹ˵��  : D0PiINTSTS �Ĵ����ṹ���塣��ַƫ����:0x0168+0x10*i����ֵ:0x0000�����:32
 �Ĵ���˵��: ͨ���豸0�˿�i(0-15)�ж�״̬�Ĵ���
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  Src_Thresholdreached  : 1;  /* bit[0]    : 1'b0:���ж�
                                                                 1'b1:���жϣ���write transactionʱThreshold���AHB clock�账��active״̬�� */
        unsigned int  src_fifo_empty        : 1;  /* bit[1]    : 1'b0:���ж�
                                                                 1'b1:���жϣ���Source FIFO�������ݣ�FIFO�ǿ�ʱ��0 */
        unsigned int  src_fifo_full         : 1;  /* bit[2]    : 1'b0:���ж�
                                                                 1'b1:���жϣ���Source FIFO fullʱ��AHB clock�账��active״̬�� */
        unsigned int  src_fifo_underrun     : 1;  /* bit[3]    : 1'b0:���ж�
                                                                 1'b1:���жϣ���source port���Դӿ�FIFO�ж����ݣ�AHB clock�账��active״̬�� */
        unsigned int  src_fifo_empty_poll   : 1;  /* bit[4]    : 1'b0:���ж�
                                                                 1'b1:���жϣ���Source FIFO�������ݴ˱�־λ��1��FIFO�ǿ�ʱ��0 */
        unsigned int  reserved_0            : 11; /* bit[5-15] : Reserved for Future Use */
        unsigned int  sink_Thresholdreached : 1;  /* bit[16]   : 1'b0:���ж�
                                                                 1'b1:���жϣ���read transactionʱThreshold���AHB clock���봦��active״̬ */
        unsigned int  sink_fifo_empty       : 1;  /* bit[17]   : 1'b0:���ж�
                                                                 1'b1:���жϣ���Sink FIFO�������ݣ�FIFO�ǿ�ʱ��0 */
        unsigned int  sink_fifo_full        : 1;  /* bit[18]   : 1'b0:���ж�
                                                                 1'b1:���жϣ���Sink FIFO fullʱ��AHB clock�账��active״̬�� */
        unsigned int  sink_fifo_overrun     : 1;  /* bit[19]   : 1'b0:���ж�
                                                                 1'b1:���жϣ���sink port����д���ݵ�Full FIFO�У�AHB clock�账��active״̬�� */
        unsigned int  sink_fifo_empty_poll  : 1;  /* bit[20]   : 1'b0:���ж�
                                                                 1'b1:���жϣ���Sink FIFO�������ݣ�FIFO�ǿ�ʱ��0 */
        unsigned int  reserved_1            : 10; /* bit[21-30]: Reserved for Future Use */
        unsigned int  Timeout_sts           : 1;  /* bit[31]   : 1'b0:���ж�
                                                                 1'b1:���жϣ�������ֵ����0ʱ */
    } reg;
} SOC_SLIMBUS_D0PiINTSTS_UNION;
#define SOC_SLIMBUS_D0PiINTSTS_Src_Thresholdreached_START   (0)
#define SOC_SLIMBUS_D0PiINTSTS_Src_Thresholdreached_END     (0)
#define SOC_SLIMBUS_D0PiINTSTS_src_fifo_empty_START         (1)
#define SOC_SLIMBUS_D0PiINTSTS_src_fifo_empty_END           (1)
#define SOC_SLIMBUS_D0PiINTSTS_src_fifo_full_START          (2)
#define SOC_SLIMBUS_D0PiINTSTS_src_fifo_full_END            (2)
#define SOC_SLIMBUS_D0PiINTSTS_src_fifo_underrun_START      (3)
#define SOC_SLIMBUS_D0PiINTSTS_src_fifo_underrun_END        (3)
#define SOC_SLIMBUS_D0PiINTSTS_src_fifo_empty_poll_START    (4)
#define SOC_SLIMBUS_D0PiINTSTS_src_fifo_empty_poll_END      (4)
#define SOC_SLIMBUS_D0PiINTSTS_sink_Thresholdreached_START  (16)
#define SOC_SLIMBUS_D0PiINTSTS_sink_Thresholdreached_END    (16)
#define SOC_SLIMBUS_D0PiINTSTS_sink_fifo_empty_START        (17)
#define SOC_SLIMBUS_D0PiINTSTS_sink_fifo_empty_END          (17)
#define SOC_SLIMBUS_D0PiINTSTS_sink_fifo_full_START         (18)
#define SOC_SLIMBUS_D0PiINTSTS_sink_fifo_full_END           (18)
#define SOC_SLIMBUS_D0PiINTSTS_sink_fifo_overrun_START      (19)
#define SOC_SLIMBUS_D0PiINTSTS_sink_fifo_overrun_END        (19)
#define SOC_SLIMBUS_D0PiINTSTS_sink_fifo_empty_poll_START   (20)
#define SOC_SLIMBUS_D0PiINTSTS_sink_fifo_empty_poll_END     (20)
#define SOC_SLIMBUS_D0PiINTSTS_Timeout_sts_START            (31)
#define SOC_SLIMBUS_D0PiINTSTS_Timeout_sts_END              (31)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_D0PiCNFG_UNION
 �ṹ˵��  : D0PiCNFG �Ĵ����ṹ���塣��ַƫ����:0x016C+0x10*i����ֵ:0x0000�����:32
 �Ĵ���˵��: ͨ���豸0�˿�i(0-15)���üĴ���
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  FIFOWatermark : 6;  /* bit[0-5]  : ����ֵ�����ڲ���threshold reached interrupt����port����Ϊsource portʱ��FIFO�����ݿռ�ﵽ����ֵʱ�����жϣ�����Ϊsink portʱ����FIFO���ݴﵽ����ֵʱ�����жϡ�
                                                         6'b000000:1Byte
                                                         6'b000001:2Bytes
                                                         6'b000010:3Bytes
                                                         6'b000011:4Bytes
                                                         ..
                                                         6'b111111:1Bytes */
        unsigned int  reserved_0    : 10; /* bit[6-15] : Reserved for Future Use */
        unsigned int  dma_en        : 1;  /* bit[16]   : 1'b1:Data Transactionͨ��Slave DMA Interface */
        unsigned int  packed_en     : 1;  /* bit[17]   : 1'b0:zeros are stuffing���Ҵ���unpacked mode
                                                         1'b1:no zeros are stuffing���Ҵ���packed mode */
        unsigned int  Timeout       : 8;  /* bit[18-25]: ����ֵ������FIFO����д������FIFOʱ���ء�����0ʱ��timeout_sts��1�� */
        unsigned int  AHB_8_16_32   : 2;  /* bit[26-27]: port��AHB����λ��
                                                         2'b00:8 bit AHB access
                                                         2'b01:16 bit AHB access
                                                         2'b10:32 bit AHB access */
        unsigned int  wake_up_ena   : 1;  /* bit[28]   : 1'b0:disable system wakeup
                                                         1'b1:��sink mode��port level����thresholdʱ��ʹ��port i��system wakeup */
        unsigned int  wake_up_sts   : 1;  /* bit[29]   : 1'b0:�˿�i��wakeup signal����inactive
                                                         1'b1:�˿�i��wakeup signal����active */
        unsigned int  reserved_1    : 2;  /* bit[30-31]: Reserved for Future Use */
    } reg;
} SOC_SLIMBUS_D0PiCNFG_UNION;
#define SOC_SLIMBUS_D0PiCNFG_FIFOWatermark_START  (0)
#define SOC_SLIMBUS_D0PiCNFG_FIFOWatermark_END    (5)
#define SOC_SLIMBUS_D0PiCNFG_dma_en_START         (16)
#define SOC_SLIMBUS_D0PiCNFG_dma_en_END           (16)
#define SOC_SLIMBUS_D0PiCNFG_packed_en_START      (17)
#define SOC_SLIMBUS_D0PiCNFG_packed_en_END        (17)
#define SOC_SLIMBUS_D0PiCNFG_Timeout_START        (18)
#define SOC_SLIMBUS_D0PiCNFG_Timeout_END          (25)
#define SOC_SLIMBUS_D0PiCNFG_AHB_8_16_32_START    (26)
#define SOC_SLIMBUS_D0PiCNFG_AHB_8_16_32_END      (27)
#define SOC_SLIMBUS_D0PiCNFG_wake_up_ena_START    (28)
#define SOC_SLIMBUS_D0PiCNFG_wake_up_ena_END      (28)
#define SOC_SLIMBUS_D0PiCNFG_wake_up_sts_START    (29)
#define SOC_SLIMBUS_D0PiCNFG_wake_up_sts_END      (29)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_SDMAiCNFG_UNION
 �ṹ˵��  : SDMAiCNFG �Ĵ����ṹ���塣��ַƫ����:0x0400+0x4*i����ֵ:0x0000�����:32
 �Ĵ���˵��: SDMAi(0-15)���üĴ���
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0       : 4;  /* bit[0-3]  : Reserved for Future Use */
        unsigned int  DMATransferCount : 20; /* bit[4-23] : Total DMA Transfer Count��ÿ�����ݴ���ʱ�ݼ�����ֵ������ڻ����DMA burst size����ֵ����ʱSlave DMA�Ż�initiate the data transaction��
                                                            20'h01:1 (byte/halfword/word) to transfer
                                                            20'h02:2 (bytes/halfwords/words) to transfer
                                                            ...
                                                            20'hfffff:1048575 (bytes/halfwords/words) to transfer */
        unsigned int  DMAburstsize     : 2;  /* bit[24-25]: �������ݴ����DMA burst size
                                                            2'b00:1 (byte/halfword/word)
                                                            2'b01:4 (bytes/halfwords/words)
                                                            2'b10:8 (bytes/halfwords/words)
                                                            2'b11:Reserved for future use
                                                            DMA Transfer Count��С��DMA burst size����dma single����assert�� */
        unsigned int  reserved_1       : 6;  /* bit[26-31]: Reserved for Future Use */
    } reg;
} SOC_SLIMBUS_SDMAiCNFG_UNION;
#define SOC_SLIMBUS_SDMAiCNFG_DMATransferCount_START  (4)
#define SOC_SLIMBUS_SDMAiCNFG_DMATransferCount_END    (23)
#define SOC_SLIMBUS_SDMAiCNFG_DMAburstsize_START      (24)
#define SOC_SLIMBUS_SDMAiCNFG_DMAburstsize_END        (25)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_ADPRTi_UNION
 �ṹ˵��  : ADPRTi �Ĵ����ṹ���塣��ַƫ����:0x0500+0x4*i����ֵ:0x0000�����:32
 �Ĵ���˵��: ��Ƶ�˿�i(0-15)�Ĵ���
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  Period_value   : 13; /* bit[0-12] : �˿�i��period value */
        unsigned int  reserved       : 17; /* bit[13-29]: Reserved for future use */
        unsigned int  Smoother_en    : 1;  /* bit[30]   : 1'b0:��ֹSmoother bit
                                                          1'b1:ʹ��Smoother bit */
        unsigned int  Period_load_en : 1;  /* bit[31]   : 1'b0:��ֹPeriod load bit
                                                          1'b1:ʹ��Period load bit */
    } reg;
} SOC_SLIMBUS_ADPRTi_UNION;
#define SOC_SLIMBUS_ADPRTi_Period_value_START    (0)
#define SOC_SLIMBUS_ADPRTi_Period_value_END      (12)
#define SOC_SLIMBUS_ADPRTi_Smoother_en_START     (30)
#define SOC_SLIMBUS_ADPRTi_Smoother_en_END       (30)
#define SOC_SLIMBUS_ADPRTi_Period_load_en_START  (31)
#define SOC_SLIMBUS_ADPRTi_Period_load_en_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_FLCONSAV1_UNION
 �ṹ˵��  : FLCONSAV1 �Ĵ����ṹ���塣��ַƫ����:0x0900����ֵ:0x0000�����:32
 �Ĵ���˵��: FL�����ı���Ĵ���
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  next_frame_state     : 5;  /* bit[0-4]  : FL(Frame Logic)��Next Frame state */
        unsigned int  reserved_0           : 5;  /* bit[5-9]  : Reserved for future use */
        unsigned int  cell1_count_10_0     : 11; /* bit[10-20]: FL��cell count value */
        unsigned int  cell1_count_6_0      : 7;  /* bit[21-27]: FL��cell count value */
        unsigned int  current_clk_rx_state : 3;  /* bit[28-30]: FL��Current Clock Rx state */
        unsigned int  reserved_1           : 1;  /* bit[31]   : Reserved for future use */
    } reg;
} SOC_SLIMBUS_FLCONSAV1_UNION;
#define SOC_SLIMBUS_FLCONSAV1_next_frame_state_START      (0)
#define SOC_SLIMBUS_FLCONSAV1_next_frame_state_END        (4)
#define SOC_SLIMBUS_FLCONSAV1_cell1_count_10_0_START      (10)
#define SOC_SLIMBUS_FLCONSAV1_cell1_count_10_0_END        (20)
#define SOC_SLIMBUS_FLCONSAV1_cell1_count_6_0_START       (21)
#define SOC_SLIMBUS_FLCONSAV1_cell1_count_6_0_END         (27)
#define SOC_SLIMBUS_FLCONSAV1_current_clk_rx_state_START  (28)
#define SOC_SLIMBUS_FLCONSAV1_current_clk_rx_state_END    (30)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_MHCONSAV1_UNION
 �ṹ˵��  : MHCONSAV1 �Ĵ����ṹ���塣��ַƫ����:0x0934����ֵ:0x0000�����:32
 �Ĵ���˵��: MH�����ı���Ĵ���
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sig_guide_val  : 5;  /* bit[0-4]  : Guide Value */
        unsigned int  sig_clk_gear   : 4;  /* bit[5-8]  : Clock Gear value */
        unsigned int  sig_root_freq  : 4;  /* bit[9-12] : MH��root freq */
        unsigned int  sig_subfr_mode : 5;  /* bit[13-17]: MH(Message Handler)��subframe mode */
        unsigned int  reserved       : 14; /* bit[18-31]: Reserved for future use */
    } reg;
} SOC_SLIMBUS_MHCONSAV1_UNION;
#define SOC_SLIMBUS_MHCONSAV1_sig_guide_val_START   (0)
#define SOC_SLIMBUS_MHCONSAV1_sig_guide_val_END     (4)
#define SOC_SLIMBUS_MHCONSAV1_sig_clk_gear_START    (5)
#define SOC_SLIMBUS_MHCONSAV1_sig_clk_gear_END      (8)
#define SOC_SLIMBUS_MHCONSAV1_sig_root_freq_START   (9)
#define SOC_SLIMBUS_MHCONSAV1_sig_root_freq_END     (12)
#define SOC_SLIMBUS_MHCONSAV1_sig_subfr_mode_START  (13)
#define SOC_SLIMBUS_MHCONSAV1_sig_subfr_mode_END    (17)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_AFCONSAV1_UNION
 �ṹ˵��  : AFCONSAV1 �Ĵ����ṹ���塣��ַƫ����:0x0948����ֵ:0x0000�����:32
 �Ĵ���˵��: AF�����ı���Ĵ���1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  slim_fr_fl_info_cnt : 3;  /* bit[0-2]  : AF��Frame info count */
        unsigned int  sig_slim_fr_fl_info : 4;  /* bit[3-6]  : AF��Frame info */
        unsigned int  cur_boot_st         : 4;  /* bit[7-10] : AF��current boot state */
        unsigned int  fr_log_addr         : 7;  /* bit[11-17]: AF��logical address */
        unsigned int  root_supr_fr_cnt    : 14; /* bit[18-31]: AF��Root Super Frame Count */
    } reg;
} SOC_SLIMBUS_AFCONSAV1_UNION;
#define SOC_SLIMBUS_AFCONSAV1_slim_fr_fl_info_cnt_START  (0)
#define SOC_SLIMBUS_AFCONSAV1_slim_fr_fl_info_cnt_END    (2)
#define SOC_SLIMBUS_AFCONSAV1_sig_slim_fr_fl_info_START  (3)
#define SOC_SLIMBUS_AFCONSAV1_sig_slim_fr_fl_info_END    (6)
#define SOC_SLIMBUS_AFCONSAV1_cur_boot_st_START          (7)
#define SOC_SLIMBUS_AFCONSAV1_cur_boot_st_END            (10)
#define SOC_SLIMBUS_AFCONSAV1_fr_log_addr_START          (11)
#define SOC_SLIMBUS_AFCONSAV1_fr_log_addr_END            (17)
#define SOC_SLIMBUS_AFCONSAV1_root_supr_fr_cnt_START     (18)
#define SOC_SLIMBUS_AFCONSAV1_root_supr_fr_cnt_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_AFCONSAV2_UNION
 �ṹ˵��  : AFCONSAV2 �Ĵ����ṹ���塣��ַƫ����:0x094C����ֵ:0x0000�����:32
 �Ĵ���˵��: AF�����ı���Ĵ���2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  curr_enum_st : 2;  /* bit[0-1]  : AF��Current Enumeration State */
        unsigned int  cur_fr_st    : 2;  /* bit[2-3]  : AF��Current Frame State */
        unsigned int  core_info    : 3;  /* bit[4-6]  : AF��Core Information Element */
        unsigned int  dev_info     : 3;  /* bit[7-9]  : AF��Device Information Element */
        unsigned int  reserved     : 22; /* bit[10-31]: Reserved for future use */
    } reg;
} SOC_SLIMBUS_AFCONSAV2_UNION;
#define SOC_SLIMBUS_AFCONSAV2_curr_enum_st_START  (0)
#define SOC_SLIMBUS_AFCONSAV2_curr_enum_st_END    (1)
#define SOC_SLIMBUS_AFCONSAV2_cur_fr_st_START     (2)
#define SOC_SLIMBUS_AFCONSAV2_cur_fr_st_END       (3)
#define SOC_SLIMBUS_AFCONSAV2_core_info_START     (4)
#define SOC_SLIMBUS_AFCONSAV2_core_info_END       (6)
#define SOC_SLIMBUS_AFCONSAV2_dev_info_START      (7)
#define SOC_SLIMBUS_AFCONSAV2_dev_info_END        (9)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_IFCONSAV1_UNION
 �ṹ˵��  : IFCONSAV1 �Ĵ����ṹ���塣��ַƫ����:0x0968����ֵ:0x0000�����:32
 �Ĵ���˵��: IF�����ı���Ĵ���
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  logical_addr   : 8;  /* bit[0-7]  : IF��Logical Address value */
        unsigned int  receive_ala    : 1;  /* bit[8]    : IF��receive ala bit value */
        unsigned int  arb_pri        : 3;  /* bit[9-11] : IF��Arbitration Priority */
        unsigned int  curr_enu_state : 2;  /* bit[12-13]: IF��Current Enumeration State */
        unsigned int  reserved       : 18; /* bit[14-31]: Reserved for future use */
    } reg;
} SOC_SLIMBUS_IFCONSAV1_UNION;
#define SOC_SLIMBUS_IFCONSAV1_logical_addr_START    (0)
#define SOC_SLIMBUS_IFCONSAV1_logical_addr_END      (7)
#define SOC_SLIMBUS_IFCONSAV1_receive_ala_START     (8)
#define SOC_SLIMBUS_IFCONSAV1_receive_ala_END       (8)
#define SOC_SLIMBUS_IFCONSAV1_arb_pri_START         (9)
#define SOC_SLIMBUS_IFCONSAV1_arb_pri_END           (11)
#define SOC_SLIMBUS_IFCONSAV1_curr_enu_state_START  (12)
#define SOC_SLIMBUS_IFCONSAV1_curr_enu_state_END    (13)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_GD0MSGCS1_UNION
 �ṹ˵��  : GD0MSGCS1 �Ĵ����ṹ���塣��ַƫ����:0x0978����ֵ:0x0000�����:32
 �Ĵ���˵��: GD0��Ϣ�����ı���Ĵ���1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sig_channel_1      : 1;  /* bit[0] : GD0��sig_channel_1 value */
        unsigned int  sig_channel_2      : 1;  /* bit[1] : GD0��sig_channel_2 value */
        unsigned int  sig_channel_3      : 1;  /* bit[2] : GD0��sig_channel_3 value */
        unsigned int  sig_channel_4      : 1;  /* bit[3] : GD0��sig_channel_4 value */
        unsigned int  sig_channel_5      : 1;  /* bit[4] : GD0��sig_channel_5 value */
        unsigned int  sig_channel_6      : 1;  /* bit[5] : GD0��sig_channel_6 value */
        unsigned int  sig_channel_7      : 1;  /* bit[6] : GD0��sig_channel_7 value */
        unsigned int  sig_channel_8      : 1;  /* bit[7] : GD0��sig_channel_8 value */
        unsigned int  sig_channel_9      : 1;  /* bit[8] : GD0��sig_channel_9 value */
        unsigned int  sig_channel_10     : 1;  /* bit[9] : GD0��sig_channel_10 value */
        unsigned int  sig_channel_11     : 1;  /* bit[10]: GD0��sig_channel_11 value */
        unsigned int  sig_channel_12     : 1;  /* bit[11]: GD0��sig_channel_12 value */
        unsigned int  sig_channel_13     : 1;  /* bit[12]: GD0��sig_channel_13 value */
        unsigned int  sig_channel_14     : 1;  /* bit[13]: GD0��sig_channel_14 value */
        unsigned int  sig_channel_15     : 1;  /* bit[14]: GD0��sig_channel_15 value */
        unsigned int  sig_channel_16     : 1;  /* bit[15]: GD0��sig_channel_16 value */
        unsigned int  sig_act_channel_1  : 1;  /* bit[16]: GD0��sig_act_channel_1 value */
        unsigned int  sig_act_channel_2  : 1;  /* bit[17]: GD0��sig_act_channel_2 value */
        unsigned int  sig_act_channel_3  : 1;  /* bit[18]: GD0��sig_act_channel_3 value */
        unsigned int  sig_act_channel_4  : 1;  /* bit[19]: GD0��sig_act_channel_4 value */
        unsigned int  sig_act_channel_5  : 1;  /* bit[20]: GD0��sig_act_channel_5 value */
        unsigned int  sig_act_channel_6  : 1;  /* bit[21]: GD0��sig_act_channel_6 value */
        unsigned int  sig_act_channel_7  : 1;  /* bit[22]: GD0��sig_act_channel_7 value */
        unsigned int  sig_act_channel_8  : 1;  /* bit[23]: GD0��sig_act_channel_8 value */
        unsigned int  sig_act_channel_9  : 1;  /* bit[24]: GD0��sig_act_channel_9 value */
        unsigned int  sig_act_channel_10 : 1;  /* bit[25]: GD0��sig_act_channel_10 value */
        unsigned int  sig_act_channel_11 : 1;  /* bit[26]: GD0��sig_act_channel_11 value */
        unsigned int  sig_act_channel_12 : 1;  /* bit[27]: GD0��sig_act_channel_12 value */
        unsigned int  sig_act_channel_13 : 1;  /* bit[28]: GD0��sig_act_channel_13 value */
        unsigned int  sig_act_channel_14 : 1;  /* bit[29]: GD0��sig_act_channel_14 value */
        unsigned int  sig_act_channel_15 : 1;  /* bit[30]: GD0��sig_act_channel_15 value */
        unsigned int  sig_act_channel_16 : 1;  /* bit[31]: GD0��sig_act_channel_16 value */
    } reg;
} SOC_SLIMBUS_GD0MSGCS1_UNION;
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_1_START       (0)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_1_END         (0)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_2_START       (1)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_2_END         (1)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_3_START       (2)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_3_END         (2)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_4_START       (3)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_4_END         (3)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_5_START       (4)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_5_END         (4)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_6_START       (5)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_6_END         (5)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_7_START       (6)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_7_END         (6)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_8_START       (7)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_8_END         (7)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_9_START       (8)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_9_END         (8)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_10_START      (9)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_10_END        (9)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_11_START      (10)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_11_END        (10)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_12_START      (11)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_12_END        (11)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_13_START      (12)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_13_END        (12)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_14_START      (13)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_14_END        (13)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_15_START      (14)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_15_END        (14)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_16_START      (15)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_16_END        (15)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_1_START   (16)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_1_END     (16)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_2_START   (17)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_2_END     (17)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_3_START   (18)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_3_END     (18)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_4_START   (19)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_4_END     (19)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_5_START   (20)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_5_END     (20)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_6_START   (21)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_6_END     (21)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_7_START   (22)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_7_END     (22)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_8_START   (23)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_8_END     (23)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_9_START   (24)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_9_END     (24)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_10_START  (25)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_10_END    (25)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_11_START  (26)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_11_END    (26)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_12_START  (27)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_12_END    (27)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_13_START  (28)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_13_END    (28)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_14_START  (29)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_14_END    (29)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_15_START  (30)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_15_END    (30)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_16_START  (31)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_16_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_GD0MSGCS2_UNION
 �ṹ˵��  : GD0MSGCS2 �Ĵ����ṹ���塣��ַƫ����:0x097C����ֵ:0x0000�����:32
 �Ĵ���˵��: GD0��Ϣ�����ı���Ĵ���2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sig_gd_log_addr : 8;  /* bit[0-7]  : GD0��Logical Address value */
        unsigned int  receive_ala     : 1;  /* bit[8]    : GD0��receive ala bit value */
        unsigned int  arb_pri         : 3;  /* bit[9-11] : GD0��Arbitration Priority */
        unsigned int  curr_enu_state  : 2;  /* bit[12-13]: GD0��Current Enumeration State */
        unsigned int  reserved        : 18; /* bit[14-31]: Reserved for future use */
    } reg;
} SOC_SLIMBUS_GD0MSGCS2_UNION;
#define SOC_SLIMBUS_GD0MSGCS2_sig_gd_log_addr_START  (0)
#define SOC_SLIMBUS_GD0MSGCS2_sig_gd_log_addr_END    (7)
#define SOC_SLIMBUS_GD0MSGCS2_receive_ala_START      (8)
#define SOC_SLIMBUS_GD0MSGCS2_receive_ala_END        (8)
#define SOC_SLIMBUS_GD0MSGCS2_arb_pri_START          (9)
#define SOC_SLIMBUS_GD0MSGCS2_arb_pri_END            (11)
#define SOC_SLIMBUS_GD0MSGCS2_curr_enu_state_START   (12)
#define SOC_SLIMBUS_GD0MSGCS2_curr_enu_state_END     (13)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_GD0PRTiCS1_UNION
 �ṹ˵��  : GD0PRTiCS1 �Ĵ����ṹ���塣��ַƫ����:0x0980+0x4*i����ֵ:0x0000�����:32
 �Ĵ���˵��: GD0�˿�i(0-15)�����ı���Ĵ���1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sig_gd_pi_seg_length : 5;  /* bit[0-4]  : GD0�Ķ˿�i(0-15)��Segment Length value��pi��i=0-15 */
        unsigned int  sig_gd_pi_dat_len    : 5;  /* bit[5-9]  : GD0�Ķ˿�i(0-15)��Data Length value��pi��i=0-15 */
        unsigned int  sig_gd_pi_protocol   : 4;  /* bit[10-13]: GD0�Ķ˿�i(0-15)��Protocol value��pi��i=0-15 */
        unsigned int  sig_gd_pi_src        : 1;  /* bit[14]   : GD0�Ķ˿�i(0-15)��source bit��pi��i=0-15 */
        unsigned int  sig_gd_pi_sink       : 1;  /* bit[15]   : GD0�Ķ˿�i(0-15)��sink bit��pi��i=0-15 */
        unsigned int  sig_gd_pi_src_sink   : 1;  /* bit[16]   : GD0�Ķ˿�i(0-15)��source_sink bit��pi��i=0-15 */
        unsigned int  sig_gd_pi_rec_bound  : 1;  /* bit[17]   : GD0�Ķ˿�i(0-15)��reconfiguration boundary bit��pi��i=0-15 */
        unsigned int  sig_gd_pi_ch         : 4;  /* bit[18-21]: GD0�Ķ˿�i(0-15)��Channel number��pi��i=0-15 */
        unsigned int  sig_gd_pi_freq_lock  : 1;  /* bit[22]   : GD0�Ķ˿�i(0-15)��Frequency lock bit��pi��i=0-15 */
        unsigned int  reserved             : 9;  /* bit[23-31]: Reserved for future use */
    } reg;
} SOC_SLIMBUS_GD0PRTiCS1_UNION;
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_seg_length_START  (0)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_seg_length_END    (4)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_dat_len_START     (5)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_dat_len_END       (9)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_protocol_START    (10)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_protocol_END      (13)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_src_START         (14)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_src_END           (14)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_sink_START        (15)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_sink_END          (15)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_src_sink_START    (16)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_src_sink_END      (16)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_rec_bound_START   (17)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_rec_bound_END     (17)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_ch_START          (18)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_ch_END            (21)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_freq_lock_START   (22)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_freq_lock_END     (22)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_CHCONSAVi_UNION
 �ṹ˵��  : CHCONSAVi �Ĵ����ṹ���塣��ַƫ����:0x0A00+0x8*(i-1)����ֵ:0x0000�����:32
 �Ĵ���˵��: Channel i(1-16)�����ı���Ĵ���2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sig_slim_x_fl_seg_len_chi : 5;  /* bit[0-4]  : Channel i��Segment length value������chi��i=1-16������ch1 */
        unsigned int  sig_slim_x_fl_seg_off_chi : 11; /* bit[5-15] : Channel i��Segment Interval value������chi��i=1-16������ch1 */
        unsigned int  sig_slim_x_fl_seg_int_chi : 11; /* bit[16-26]: Channel i��Segment Offset value������chi��i=1-16������ch1 */
        unsigned int  reserved                  : 5;  /* bit[27-31]: Reserved for future use */
    } reg;
} SOC_SLIMBUS_CHCONSAVi_UNION;
#define SOC_SLIMBUS_CHCONSAVi_sig_slim_x_fl_seg_len_chi_START  (0)
#define SOC_SLIMBUS_CHCONSAVi_sig_slim_x_fl_seg_len_chi_END    (4)
#define SOC_SLIMBUS_CHCONSAVi_sig_slim_x_fl_seg_off_chi_START  (5)
#define SOC_SLIMBUS_CHCONSAVi_sig_slim_x_fl_seg_off_chi_END    (15)
#define SOC_SLIMBUS_CHCONSAVi_sig_slim_x_fl_seg_int_chi_START  (16)
#define SOC_SLIMBUS_CHCONSAVi_sig_slim_x_fl_seg_int_chi_END    (26)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_GD0PRTiCS2_UNION
 �ṹ˵��  : GD0PRTiCS2 �Ĵ����ṹ���塣��ַƫ����:0x0A04+0x8*i����ֵ:0x0000�����:32
 �Ĵ���˵��: GD0�˿�i(0-15)�����ı���Ĵ���2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sig_gd_presence_rate_d0_pi : 7;  /* bit[0-6] : Channel (i+1)��Presence Rate value������pi��i=0-15������p0����ӦΪchannel 1�� */
        unsigned int  reserved                   : 25; /* bit[7-31]: Reserved for future use */
    } reg;
} SOC_SLIMBUS_GD0PRTiCS2_UNION;
#define SOC_SLIMBUS_GD0PRTiCS2_sig_gd_presence_rate_d0_pi_START  (0)
#define SOC_SLIMBUS_GD0PRTiCS2_sig_gd_presence_rate_d0_pi_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SLIMBUS_CHMAPCSi_UNION
 �ṹ˵��  : CHMAPCSi �Ĵ����ṹ���塣��ַƫ����:0x0A80+0x4*(i-1)����ֵ:0x0000�����:32
 �Ĵ���˵��: Channelӳ�������ı���Ĵ���i(1-16)
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  channel_number  : 8;  /* bit[0-7] : Channel number */
        unsigned int  entry_valid_reg : 1;  /* bit[8]   : entry valid bit */
        unsigned int  reserved        : 23; /* bit[9-31]: Reserved for future use */
    } reg;
} SOC_SLIMBUS_CHMAPCSi_UNION;
#define SOC_SLIMBUS_CHMAPCSi_channel_number_START   (0)
#define SOC_SLIMBUS_CHMAPCSi_channel_number_END     (7)
#define SOC_SLIMBUS_CHMAPCSi_entry_valid_reg_START  (8)
#define SOC_SLIMBUS_CHMAPCSi_entry_valid_reg_END    (8)






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

#endif /* end of soc_slimbus_interface.h */
