

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_I2C_INTERFACE_H__
#define __SOC_I2C_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/1) Register_I2C
 ****************************************************************************/
/* �Ĵ���˵����I2C���ƼĴ�����
            (CH)I2C_CONֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
   λ����UNION�ṹ:  SOC_I2C_CON_UNION */
#define SOC_I2C_CON_ADDR(base)                        ((base) + (0x0000))

/* �Ĵ���˵����I2C����Slave��ַ�Ĵ�����
            (CH)I2C_TARֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
   λ����UNION�ṹ:  SOC_I2C_TAR_UNION */
#define SOC_I2C_TAR_ADDR(base)                        ((base) + (0x0004))

/* �Ĵ���˵����I2C��ΪSlaveʱ����ĵ�ַ�Ĵ�����
            (CH)I2C_SARֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
   λ����UNION�ṹ:  SOC_I2C_SAR_UNION */
#define SOC_I2C_SAR_ADDR(base)                        ((base) + (0x0008))

/* �Ĵ���˵����I2C����ģʽ�������ַ�Ĵ�����(CH)I2C_HS_MADDRֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
   λ����UNION�ṹ:  SOC_I2C_HS_MADDR_UNION */
#define SOC_I2C_HS_MADDR_ADDR(base)                   ((base) + (0x000C))

/* �Ĵ���˵����I2C����ͨ���Ĵ�����
   λ����UNION�ṹ:  SOC_I2C_DATA_CMD_UNION */
#define SOC_I2C_DATA_CMD_ADDR(base)                   ((base) + (0x0010))

/* �Ĵ���˵������׼�ٶ��µ�SCLʱ�Ӹߵ�ƽʱ�����üĴ�����
            (CH)I2C_SS_SCL_HCNTֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
   λ����UNION�ṹ:  SOC_I2C_SS_SCL_HCNT_UNION */
#define SOC_I2C_SS_SCL_HCNT_ADDR(base)                ((base) + (0x0014))

/* �Ĵ���˵������׼�ٶ��µ�SCLʱ�ӵ͵�ƽʱ�����üĴ�����
            (CH)I2C_SS_SCL_LCNTֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
   λ����UNION�ṹ:  SOC_I2C_SS_SCL_LCNT_UNION */
#define SOC_I2C_SS_SCL_LCNT_ADDR(base)                ((base) + (0x0018))

/* �Ĵ���˵���������ٶ��µ�SCLʱ�Ӹߵ�ƽʱ�����üĴ�����
            (CH)I2C_FS_SCL_HCNTֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
   λ����UNION�ṹ:  SOC_I2C_FS_SCL_HCNT_UNION */
#define SOC_I2C_FS_SCL_HCNT_ADDR(base)                ((base) + (0x001C))

/* �Ĵ���˵���������ٶ��µ�SCLʱ�ӵ͵�ƽʱ�����üĴ�����
            (CH)I2C_FS_SCL_LCNTֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
   λ����UNION�ṹ:  SOC_I2C_FS_SCL_LCNT_UNION */
#define SOC_I2C_FS_SCL_LCNT_ADDR(base)                ((base) + (0x0020))

/* �Ĵ���˵�����������ٶ��µ�SCLʱ�Ӹߵ�ƽʱ�����üĴ�����
            (CH)I2C_HS_SCL_HCNTֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
   λ����UNION�ṹ:  SOC_I2C_HS_SCL_HCNT_UNION */
#define SOC_I2C_HS_SCL_HCNT_ADDR(base)                ((base) + (0x0024))

/* �Ĵ���˵���������ٶ��µ�SCLʱ�Ӹߵ�ƽʱ�����üĴ�����
            (CH)I2C_HS_SCL_HCNTֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
   λ����UNION�ṹ:  SOC_I2C_HS_SCL_LCNT_UNION */
#define SOC_I2C_HS_SCL_LCNT_ADDR(base)                ((base) + (0x0028))

/* �Ĵ���˵�����ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_I2C_INTR_STAT_UNION */
#define SOC_I2C_INTR_STAT_ADDR(base)                  ((base) + (0x002C))

/* �Ĵ���˵�����ж����μĴ�����BitֵΪ0��ʾ���Σ�Ϊ1��ʾ�����Ρ�
   λ����UNION�ṹ:  SOC_I2C_INTR_MASK_UNION */
#define SOC_I2C_INTR_MASK_ADDR(base)                  ((base) + (0x0030))

/* �Ĵ���˵����ԭʼ�ж�״̬�Ĵ�����BitֵΪ0��ʾ���жϣ�Ϊ1��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_I2C_RAW_INTR_STAT_UNION */
#define SOC_I2C_RAW_INTR_STAT_ADDR(base)              ((base) + (0x0034))

/* �Ĵ���˵����RX_FIFO��ˮ�����üĴ�����
   λ����UNION�ṹ:  SOC_I2C_RX_TL_UNION */
#define SOC_I2C_RX_TL_ADDR(base)                      ((base) + (0x0038))

/* �Ĵ���˵����TX_FIFO��ˮ�����üĴ�����
   λ����UNION�ṹ:  SOC_I2C_TX_TL_UNION */
#define SOC_I2C_TX_TL_ADDR(base)                      ((base) + (0x003C))

/* �Ĵ���˵������ϼ������ж�����Ĵ�����
   λ����UNION�ṹ:  SOC_I2C_CLR_INTR_UNION */
#define SOC_I2C_CLR_INTR_ADDR(base)                   ((base) + (0x0040))

/* �Ĵ���˵����RX_UNDER�ж�����Ĵ�����
   λ����UNION�ṹ:  SOC_I2C_CLR_RX_UNDER_UNION */
#define SOC_I2C_CLR_RX_UNDER_ADDR(base)               ((base) + (0x0044))

/* �Ĵ���˵����RX_OVER�ж�����Ĵ�����
   λ����UNION�ṹ:  SOC_I2C_CLR_RX_OVER_UNION */
#define SOC_I2C_CLR_RX_OVER_ADDR(base)                ((base) + (0x0048))

/* �Ĵ���˵����TX_OVER�ж�����Ĵ�����
   λ����UNION�ṹ:  SOC_I2C_CLR_TX_OVER_UNION */
#define SOC_I2C_CLR_TX_OVER_ADDR(base)                ((base) + (0x004C))

/* �Ĵ���˵����RD_REQ�ж�����Ĵ�����
   λ����UNION�ṹ:  SOC_I2C_CLR_RD_REQ_UNION */
#define SOC_I2C_CLR_RD_REQ_ADDR(base)                 ((base) + (0x0050))

/* �Ĵ���˵����ABRT�ж�����Ĵ�����
   λ����UNION�ṹ:  SOC_I2C_CLR_TX_ABRT_UNION */
#define SOC_I2C_CLR_TX_ABRT_ADDR(base)                ((base) + (0x0054))

/* �Ĵ���˵����RX_DONE�ж�����Ĵ�����
   λ����UNION�ṹ:  SOC_I2C_CLR_RX_DONE_UNION */
#define SOC_I2C_CLR_RX_DONE_ADDR(base)                ((base) + (0x0058))

/* �Ĵ���˵����ACTIVITY״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_I2C_CLR_ACTIVITY_UNION */
#define SOC_I2C_CLR_ACTIVITY_ADDR(base)               ((base) + (0x005C))

/* �Ĵ���˵����STOP_DET�ж�����Ĵ�����
   λ����UNION�ṹ:  SOC_I2C_CLR_STOP_DET_UNION */
#define SOC_I2C_CLR_STOP_DET_ADDR(base)               ((base) + (0x0060))

/* �Ĵ���˵����START_DET�ж�����Ĵ�����
   λ����UNION�ṹ:  SOC_I2C_CLR_START_DET_UNION */
#define SOC_I2C_CLR_START_DET_ADDR(base)              ((base) + (0x0064))

/* �Ĵ���˵����GEN_CALL�ж�����Ĵ�����
   λ����UNION�ṹ:  SOC_I2C_CLR_GEN_CALL_UNION */
#define SOC_I2C_CLR_GEN_CALL_ADDR(base)               ((base) + (0x0068))

/* �Ĵ���˵����I2Cʹ�ܼĴ��������ڹرջ�ʹ��I2C��
            ��I2C�������ݴ���״̬ʱ����I2C_STATUS[activity]Ϊ1����I2C���Ա��رգ�����Ҫע�⣺
            (I)���I2C���ڷ���״̬ʱ�رգ���I2C����ɵ�ǰ�ֽڷ��ͺ�ֹͣ�������䣬ͬʱ���TX_FIFO�����ݡ�
            (I)���I2C���ڽ���״̬ʱ�رգ���I2C�ڽ����굱ǰ�ֽں���Ӧ��δ��䣬������NACK��
   λ����UNION�ṹ:  SOC_I2C_ENABLE_UNION */
#define SOC_I2C_ENABLE_ADDR(base)                     ((base) + (0x006C))

/* �Ĵ���˵����I2C״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_I2C_STATUS_UNION */
#define SOC_I2C_STATUS_ADDR(base)                     ((base) + (0x0070))

/* �Ĵ���˵����TX_FIFO�е����ݸ���ָʾ�Ĵ�����
   λ����UNION�ṹ:  SOC_I2C_TXFLR_UNION */
#define SOC_I2C_TXFLR_ADDR(base)                      ((base) + (0x0074))

/* �Ĵ���˵����RX_FIFO�е����ݸ���ָʾ�Ĵ�����
   λ����UNION�ṹ:  SOC_I2C_RXFLR_UNION */
#define SOC_I2C_RXFLR_ADDR(base)                      ((base) + (0x0078))

/* �Ĵ���˵����SDA����ʱ�䳤�ȼĴ���
   λ����UNION�ṹ:  SOC_I2C_SDA_HOLD_UNION */
#define SOC_I2C_SDA_HOLD_ADDR(base)                   ((base) + (0x007C))

/* �Ĵ���˵����TX_ABRT��Դͷ�жϼĴ�����
   λ����UNION�ṹ:  SOC_I2C_TX_ABRT_SOURCE_UNION */
#define SOC_I2C_TX_ABRT_SOURCE_ADDR(base)             ((base) + (0x0080))

/* �Ĵ���˵����I2C DMAͨ���������ƼĴ�����
   λ����UNION�ṹ:  SOC_I2C_DMA_CR_UNION */
#define SOC_I2C_DMA_CR_ADDR(base)                     ((base) + (0x0088))

/* �Ĵ���˵����TX_FIFO����DMA����ʱ��ˮ�����üĴ�����
   λ����UNION�ṹ:  SOC_I2C_DMA_TDLR_UNION */
#define SOC_I2C_DMA_TDLR_ADDR(base)                   ((base) + (0x008C))

/* �Ĵ���˵����RX_FIFO����DMA����ʱ��ˮ�����üĴ���
   λ����UNION�ṹ:  SOC_I2C_DMA_RDLR_UNION */
#define SOC_I2C_DMA_RDLR_ADDR(base)                   ((base) + (0x0090))

/* �Ĵ���˵����SDA����ʱ�䳤�ȼĴ���
   λ����UNION�ṹ:  SOC_I2C_SDA_SETUP_UNION */
#define SOC_I2C_SDA_SETUP_ADDR(base)                  ((base) + (0x0094))

/* �Ĵ���˵����ȫ������Ӧ�Ĵ���
   λ����UNION�ṹ:  SOC_I2C_ACK_GENERAL_CALL_UNION */
#define SOC_I2C_ACK_GENERAL_CALL_ADDR(base)           ((base) + (0x0098))

/* �Ĵ���˵����I2Cʹ��״̬�Ĵ���
   λ����UNION�ṹ:  SOC_I2C_ENABLE_STATUS_UNION */
#define SOC_I2C_ENABLE_STATUS_ADDR(base)              ((base) + (0x009C))

/* �Ĵ���˵�������ټ�ȫ��ģʽ��ë�����Ƴ��ȼĴ���
   λ����UNION�ṹ:  SOC_I2C_FS_SPKLEN_UNION */
#define SOC_I2C_FS_SPKLEN_ADDR(base)                  ((base) + (0x00A0))

/* �Ĵ���˵��������ģʽ��ë�����Ƴ��ȼĴ���
   λ����UNION�ṹ:  SOC_I2C_HS_SPKLEN_UNION */
#define SOC_I2C_HS_SPKLEN_ADDR(base)                  ((base) + (0x00A4))

/* �Ĵ���˵���������Ĵ���
   λ����UNION�ṹ:  SOC_I2C_COMP_PARAM_1_UNION */
#define SOC_I2C_COMP_PARAM_1_ADDR(base)               ((base) + (0x00F4))

/* �Ĵ���˵�����汾�Ĵ���
   λ����UNION�ṹ:  SOC_I2C_COMP_VERSION_UNION */
#define SOC_I2C_COMP_VERSION_ADDR(base)               ((base) + (0x00F8))

/* �Ĵ���˵����DesignWareIP���ͼĴ���
   λ����UNION�ṹ:  SOC_I2C_COMP_TYPE_UNION */
#define SOC_I2C_COMP_TYPE_ADDR(base)                  ((base) + (0x00FC))





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
                     (1/1) Register_I2C
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_I2C_CON_UNION
 �ṹ˵��  : CON �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x007F�����:16
 �Ĵ���˵��: I2C���ƼĴ�����
            (CH)I2C_CONֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  master_mode          : 1;  /* bit[0]   : Master����ʹ�ܡ�
                                                                 0����ֹ��
                                                                 1��ʹ�ܡ� */
        unsigned short  speed                : 2;  /* bit[1-2] : I2C�����ٶ�ѡ��
                                                                 00���Ƿ���
                                                                 01����׼�ٶȣ�0~100kbit/s����
                                                                 10�������ٶȣ�<=400kbit/s����
                                                                 11�������ٶȣ�<=3.4Mbit/s����&#13; */
        unsigned short  i2c_10bitaddr_slave  : 1;  /* bit[3]   : ������ */
        unsigned short  i2c_10bitaddr_master : 1;  /* bit[4]   : ����7bit��ַ/10bit��ַѡ��
                                                                 0��7bit��ַ��
                                                                 1��10bit��ַ�� */
        unsigned short  i2c_restart_en       : 1;  /* bit[5]   : Master���������¿�ʼ������ʹ�ܡ�
                                                                 0����ֹ����ʱ�޷�ʵ�֡����¿�ʼ�������Ĺ��ܣ�
                                                                 1��ʹ�ܡ� */
        unsigned short  i2c_slave_disable    : 1;  /* bit[6]   : ������
                                                                 ע�⣺��λֻ������Ϊ1�� */
        unsigned short  reserved             : 9;  /* bit[7-15]: ������ */
    } reg;
} SOC_I2C_CON_UNION;
#endif
#define SOC_I2C_CON_master_mode_START           (0)
#define SOC_I2C_CON_master_mode_END             (0)
#define SOC_I2C_CON_speed_START                 (1)
#define SOC_I2C_CON_speed_END                   (2)
#define SOC_I2C_CON_i2c_10bitaddr_slave_START   (3)
#define SOC_I2C_CON_i2c_10bitaddr_slave_END     (3)
#define SOC_I2C_CON_i2c_10bitaddr_master_START  (4)
#define SOC_I2C_CON_i2c_10bitaddr_master_END    (4)
#define SOC_I2C_CON_i2c_restart_en_START        (5)
#define SOC_I2C_CON_i2c_restart_en_END          (5)
#define SOC_I2C_CON_i2c_slave_disable_START     (6)
#define SOC_I2C_CON_i2c_slave_disable_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_I2C_TAR_UNION
 �ṹ˵��  : TAR �Ĵ����ṹ���塣��ַƫ����:0x0004����ֵ:0x0055�����:16
 �Ĵ���˵��: I2C����Slave��ַ�Ĵ�����
            (CH)I2C_TARֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  i2c_tar               : 10; /* bit[0-9]  : I2C��ΪMasterʱҪ���ʵ�Slave�ĵ�ַ�� */
        unsigned short  gc_or_start           : 1;  /* bit[10]   : bit[11]Ϊ1ʱ��λ��Ч������ִ�й�����general call����start byte��
                                                                   0��general call��
                                                                   1��start byte�� */
        unsigned short  special               : 1;  /* bit[11]   : General call��start byte����ʹ�ܡ�
                                                                   0����ֹ��
                                                                   1��ʹ�ܡ� */
        unsigned short  i2c_10bit_addr_master : 1;  /* bit[12]   : ���Ƶ�DW_apb_i2c��Ϊ����ʱ����7-bitѰַ����10-bitѰַģʽ��
                                                                   0��7-bitѰַ��
                                                                   1��10-bitѰַ */
        unsigned short  reserved              : 3;  /* bit[13-15]: ������ */
    } reg;
} SOC_I2C_TAR_UNION;
#endif
#define SOC_I2C_TAR_i2c_tar_START                (0)
#define SOC_I2C_TAR_i2c_tar_END                  (9)
#define SOC_I2C_TAR_gc_or_start_START            (10)
#define SOC_I2C_TAR_gc_or_start_END              (10)
#define SOC_I2C_TAR_special_START                (11)
#define SOC_I2C_TAR_special_END                  (11)
#define SOC_I2C_TAR_i2c_10bit_addr_master_START  (12)
#define SOC_I2C_TAR_i2c_10bit_addr_master_END    (12)


/*****************************************************************************
 �ṹ��    : SOC_I2C_SAR_UNION
 �ṹ˵��  : SAR �Ĵ����ṹ���塣��ַƫ����:0x0008����ֵ:0x0055�����:16
 �Ĵ���˵��: I2C��ΪSlaveʱ����ĵ�ַ�Ĵ�����
            (CH)I2C_SARֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  i2c_sar  : 10; /* bit[0-9]  : I2C��ΪSlaveʱ����ĵ�ַ������7bitѰַ��ֻ��i2c-sar[6:0]�ᱻʹ�� */
        unsigned short  reserved : 6;  /* bit[10-15]: ������ */
    } reg;
} SOC_I2C_SAR_UNION;
#endif
#define SOC_I2C_SAR_i2c_sar_START   (0)
#define SOC_I2C_SAR_i2c_sar_END     (9)


/*****************************************************************************
 �ṹ��    : SOC_I2C_HS_MADDR_UNION
 �ṹ˵��  : HS_MADDR �Ĵ����ṹ���塣��ַƫ����:0x000C����ֵ:0x0001�����:16
 �Ĵ���˵��: I2C����ģʽ�������ַ�Ĵ�����(CH)I2C_HS_MADDRֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  i2c_hs_mar : 3;  /* bit[0-2] : I2C����ģʽ���������롣ÿһ��master���Լ�������master code����ͬһ��I2Cϵͳ�У����֧�ֵ�8������ģʽ��master�� */
        unsigned short  reserved   : 13; /* bit[3-15]: ������ */
    } reg;
} SOC_I2C_HS_MADDR_UNION;
#endif
#define SOC_I2C_HS_MADDR_i2c_hs_mar_START  (0)
#define SOC_I2C_HS_MADDR_i2c_hs_mar_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_I2C_DATA_CMD_UNION
 �ṹ˵��  : DATA_CMD �Ĵ����ṹ���塣��ַƫ����:0x0010����ֵ:0x0000�����:16
 �Ĵ���˵��: I2C����ͨ���Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  dat      : 8;  /* bit[0-7]  : ��Ҫ��I2C�����Ϸ���/���յ����ݡ�
                                                      ����8bit�������I2C�����Ͻ��յ����ݣ�
                                                      д��8bit���д������ݷ��͵�I2C�����ϡ� */
        unsigned short  cmd      : 1;  /* bit[8]    : ��/д����λ��
                                                      
                                                      0��д��������ʾI2C��������Ҫ��I2C���߷������ݣ���ʱ��8λ��DAT����I2CҪ��I2C���߷��͵����ݣ�
                                                      1������������ʾI2C��������Ҫ��I2C���߶������ݡ� */
        unsigned short  stop     : 1;  /* bit[9]    : 1����ǰ�ֽ����ݴ�����ɺ󣬾�����STOP�����ܷ���FIFO�Ƿ�Ϊ�ա��������FIFO��Ϊ�գ����������̲���һ��START�����������ٲ��������µĴ��䣻
                                                      
                                                      0����ǰ�ֽ����ݴ�����ɺ󣬲�����STOP�����ܷ���FIFO�Ƿ�Ϊ�ա��������FIFO��Ϊ�գ�������������ǰ���䣬���ݷ��������ֵ����÷��ͻ�������ݡ��������FIFOΪ�գ���������SCL���ͣ�ֱ������FIFO�����µ���� */
        unsigned short  restart  : 1;  /* bit[10]   : 1�����ܴ��䷽����֮ǰ�Ƿ���ͬ������һ�δ���ǰ������RESTART��
                                                      0��ֻ�ڴ��䷽����֮ǰ����ͬʱ������һ�δ���ǰ����RESTART�� */
        unsigned short  reserved : 5;  /* bit[11-15]: ������ */
    } reg;
} SOC_I2C_DATA_CMD_UNION;
#endif
#define SOC_I2C_DATA_CMD_dat_START       (0)
#define SOC_I2C_DATA_CMD_dat_END         (7)
#define SOC_I2C_DATA_CMD_cmd_START       (8)
#define SOC_I2C_DATA_CMD_cmd_END         (8)
#define SOC_I2C_DATA_CMD_stop_START      (9)
#define SOC_I2C_DATA_CMD_stop_END        (9)
#define SOC_I2C_DATA_CMD_restart_START   (10)
#define SOC_I2C_DATA_CMD_restart_END     (10)


/*****************************************************************************
 �ṹ��    : SOC_I2C_SS_SCL_HCNT_UNION
 �ṹ˵��  : SS_SCL_HCNT �Ĵ����ṹ���塣��ַƫ����:0x0014����ֵ:0x0190�����:16
 �Ĵ���˵��: ��׼�ٶ��µ�SCLʱ�Ӹߵ�ƽʱ�����üĴ�����
            (CH)I2C_SS_SCL_HCNTֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  i2c_ss_scl_hcnt : 16; /* bit[0-15]: ��׼�ٶ��µ�SCL�źŸߵ�ƽ��ʱ����������ic_clk���ڣ���
                                                            
                                                            ע�⣺���õ���СֵΪ6��д��С��6��ֵʱ�ᱻ��Ϊ��6�� */
    } reg;
} SOC_I2C_SS_SCL_HCNT_UNION;
#endif
#define SOC_I2C_SS_SCL_HCNT_i2c_ss_scl_hcnt_START  (0)
#define SOC_I2C_SS_SCL_HCNT_i2c_ss_scl_hcnt_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_I2C_SS_SCL_LCNT_UNION
 �ṹ˵��  : SS_SCL_LCNT �Ĵ����ṹ���塣��ַƫ����:0x0018����ֵ:0x01D6�����:16
 �Ĵ���˵��: ��׼�ٶ��µ�SCLʱ�ӵ͵�ƽʱ�����üĴ�����
            (CH)I2C_SS_SCL_LCNTֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  i2c_ss_scl_lcnt : 16; /* bit[0-15]: ��׼�ٶ��µ�SCL�źŵ͵�ƽ��ʱ����������ic_clk���ڣ���
                                                            
                                                            ע�⣺���õ���СֵΪ8��д��С��8��ֵʱ�ᱻ��Ϊ��8�� */
    } reg;
} SOC_I2C_SS_SCL_LCNT_UNION;
#endif
#define SOC_I2C_SS_SCL_LCNT_i2c_ss_scl_lcnt_START  (0)
#define SOC_I2C_SS_SCL_LCNT_i2c_ss_scl_lcnt_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_I2C_FS_SCL_HCNT_UNION
 �ṹ˵��  : FS_SCL_HCNT �Ĵ����ṹ���塣��ַƫ����:0x001C����ֵ:0x003C�����:16
 �Ĵ���˵��: �����ٶ��µ�SCLʱ�Ӹߵ�ƽʱ�����üĴ�����
            (CH)I2C_FS_SCL_HCNTֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  i2c_fs_scl_hcnt : 16; /* bit[0-15]: �����ٶ��µ�SCL�źŸߵ�ƽ��ʱ����������ic_clk���ڣ���
                                                            
                                                            ע�⣺���õ���СֵΪ6��д��С��6��ֵʱ�ᱻ��Ϊ��6�� */
    } reg;
} SOC_I2C_FS_SCL_HCNT_UNION;
#endif
#define SOC_I2C_FS_SCL_HCNT_i2c_fs_scl_hcnt_START  (0)
#define SOC_I2C_FS_SCL_HCNT_i2c_fs_scl_hcnt_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_I2C_FS_SCL_LCNT_UNION
 �ṹ˵��  : FS_SCL_LCNT �Ĵ����ṹ���塣��ַƫ����:0x0020����ֵ:0x0082�����:16
 �Ĵ���˵��: �����ٶ��µ�SCLʱ�ӵ͵�ƽʱ�����üĴ�����
            (CH)I2C_FS_SCL_LCNTֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  i2c_fs_scl_lcnt : 16; /* bit[0-15]: �����ٶ��µ�SCL�źŵ͵�ƽ��ʱ����������ic_clk���ڣ���
                                                            
                                                            ע�⣺���õ���СֵΪ8��д��С��8��ֵʱ�ᱻ��Ϊ��8�� */
    } reg;
} SOC_I2C_FS_SCL_LCNT_UNION;
#endif
#define SOC_I2C_FS_SCL_LCNT_i2c_fs_scl_lcnt_START  (0)
#define SOC_I2C_FS_SCL_LCNT_i2c_fs_scl_lcnt_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_I2C_HS_SCL_HCNT_UNION
 �ṹ˵��  : HS_SCL_HCNT �Ĵ����ṹ���塣��ַƫ����:0x0024����ֵ:0x0006�����:16
 �Ĵ���˵��: �������ٶ��µ�SCLʱ�Ӹߵ�ƽʱ�����üĴ�����
            (CH)I2C_HS_SCL_HCNTֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  i2c_hs_scl_hcnt : 16; /* bit[0-15]: �����ٶ��µ�SCL�źŸߵ�ƽ��ʱ����������ic_clk���ڣ���
                                                            
                                                            ע�⣺���õ���СֵΪ6��д��С��6��ֵʱ�ᱻ��Ϊ��6�� */
    } reg;
} SOC_I2C_HS_SCL_HCNT_UNION;
#endif
#define SOC_I2C_HS_SCL_HCNT_i2c_hs_scl_hcnt_START  (0)
#define SOC_I2C_HS_SCL_HCNT_i2c_hs_scl_hcnt_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_I2C_HS_SCL_LCNT_UNION
 �ṹ˵��  : HS_SCL_LCNT �Ĵ����ṹ���塣��ַƫ����:0x0028����ֵ:0x0010�����:16
 �Ĵ���˵��: �����ٶ��µ�SCLʱ�Ӹߵ�ƽʱ�����üĴ�����
            (CH)I2C_HS_SCL_HCNTֻ��I2C����ֹ����I2C_ENABLE[enable]Ϊ0��ʱ�ſ����á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  i2c_hs_scl_lcnt : 16; /* bit[0-15]: �����ٶ��µ�SCL�źŵ͵�ƽ��ʱ����������ic_clk���ڣ���
                                                            
                                                            ע�⣺���õ���СֵΪ8��д��С��8��ֵʱ�ᱻ��Ϊ��8�� */
    } reg;
} SOC_I2C_HS_SCL_LCNT_UNION;
#endif
#define SOC_I2C_HS_SCL_LCNT_i2c_hs_scl_lcnt_START  (0)
#define SOC_I2C_HS_SCL_LCNT_i2c_hs_scl_lcnt_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_I2C_INTR_STAT_UNION
 �ṹ˵��  : INTR_STAT �Ĵ����ṹ���塣��ַƫ����:0x002C����ֵ:0x0000�����:16
 �Ĵ���˵��: �ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  rx_under  : 1;  /* bit[0]    : RX_UNDER�жϣ�������FIFOΪ��ʱ���ڲ����߽ӿڷ����˶�I2C_DATA_CMD������
                                                       0�������壻
                                                       1��RX_FIFOΪ��ʱ��CPU��I2C_DATA_CMD�� */
        unsigned short  rx_over   : 1;  /* bit[1]    : RX_OVER�жϣ�RX_FIFO�����־��
                                                       0��δ�����
                                                       1������� */
        unsigned short  rx_full   : 1;  /* bit[2]    : RX_FULL�жϣ�ָʾRX_FIFO�������Ƿ񵽴�����ˮ��ֵ��
                                                       0��С��ˮ�ߣ�
                                                       1�����ڻ����ˮ�ߡ� */
        unsigned short  tx_over   : 1;  /* bit[3]    : TX_OVER�жϣ�TX_FIFO�����־��
                                                       0��δ�����
                                                       1������� */
        unsigned short  tx_empty  : 1;  /* bit[4]    : TX_EMPTY�жϣ�ָʾTX_FIFO�������Ƿ񵽴�����ˮ��ֵ��
                                                       0������ˮ�ߣ�
                                                       1�����ڻ����ˮ�ߡ� */
        unsigned short  rd_req    : 1;  /* bit[5]    : RD_REQ�жϣ���I2C��ΪSlaveʱ��������λָʾ�Ƿ���Master�豸�������������
                                                       0��������
                                                       1�������� */
        unsigned short  tx_abrt   : 1;  /* bit[6]    : TX_ABRT�жϣ��ж���������Դ�����λ����ϸ������μ���I2C_TX_ABRT_SOURCE������ */
        unsigned short  rx_done   : 1;  /* bit[7]    : RX_DONE�жϣ���I2C��ΪSlaveʱ��������λָʾ���ݽ����Ƿ���ɡ�
                                                       0��δ��ɣ�
                                                       1����ɡ� */
        unsigned short  activity  : 1;  /* bit[8]    : ACTIVITY�жϣ�ָʾI2C��Activity״̬��
                                                       0�����У�
                                                       1��æ�� */
        unsigned short  stop_det  : 1;  /* bit[9]    : STOP_DET�жϣ�ָʾ��I2C�������Ƿ�����ֹͣ������
                                                       0��δ������
                                                       1���ѷ����� */
        unsigned short  start_det : 1;  /* bit[10]   : START_DET�жϣ�ָʾ��I2C�������Ƿ����˿�ʼ������
                                                       0��δ������
                                                       1���ѷ����� */
        unsigned short  gen_call  : 1;  /* bit[11]   : GEN_CALL�жϣ�һ��general call���󱻽���״̬��
                                                       0��δ�����գ�
                                                       1���ѱ����ա�&#13;I2C�����յ������ݷ���RX Buffer�С� */
        unsigned short  reserved  : 4;  /* bit[12-15]: ������ */
    } reg;
} SOC_I2C_INTR_STAT_UNION;
#endif
#define SOC_I2C_INTR_STAT_rx_under_START   (0)
#define SOC_I2C_INTR_STAT_rx_under_END     (0)
#define SOC_I2C_INTR_STAT_rx_over_START    (1)
#define SOC_I2C_INTR_STAT_rx_over_END      (1)
#define SOC_I2C_INTR_STAT_rx_full_START    (2)
#define SOC_I2C_INTR_STAT_rx_full_END      (2)
#define SOC_I2C_INTR_STAT_tx_over_START    (3)
#define SOC_I2C_INTR_STAT_tx_over_END      (3)
#define SOC_I2C_INTR_STAT_tx_empty_START   (4)
#define SOC_I2C_INTR_STAT_tx_empty_END     (4)
#define SOC_I2C_INTR_STAT_rd_req_START     (5)
#define SOC_I2C_INTR_STAT_rd_req_END       (5)
#define SOC_I2C_INTR_STAT_tx_abrt_START    (6)
#define SOC_I2C_INTR_STAT_tx_abrt_END      (6)
#define SOC_I2C_INTR_STAT_rx_done_START    (7)
#define SOC_I2C_INTR_STAT_rx_done_END      (7)
#define SOC_I2C_INTR_STAT_activity_START   (8)
#define SOC_I2C_INTR_STAT_activity_END     (8)
#define SOC_I2C_INTR_STAT_stop_det_START   (9)
#define SOC_I2C_INTR_STAT_stop_det_END     (9)
#define SOC_I2C_INTR_STAT_start_det_START  (10)
#define SOC_I2C_INTR_STAT_start_det_END    (10)
#define SOC_I2C_INTR_STAT_gen_call_START   (11)
#define SOC_I2C_INTR_STAT_gen_call_END     (11)


/*****************************************************************************
 �ṹ��    : SOC_I2C_INTR_MASK_UNION
 �ṹ˵��  : INTR_MASK �Ĵ����ṹ���塣��ַƫ����:0x0030����ֵ:0x08FF�����:16
 �Ĵ���˵��: �ж����μĴ�����BitֵΪ0��ʾ���Σ�Ϊ1��ʾ�����Ρ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  m_rx_under  : 1;  /* bit[0]    : RX_UNDER�ж����Ρ� */
        unsigned short  m_rx_over   : 1;  /* bit[1]    : RX_OVER�ж����Ρ� */
        unsigned short  m_rx_full   : 1;  /* bit[2]    : RX_FULL�ж����Ρ� */
        unsigned short  m_tx_over   : 1;  /* bit[3]    : TX_OVER�ж����Ρ� */
        unsigned short  m_tx_empty  : 1;  /* bit[4]    : TX_EMPTY�ж����Ρ� */
        unsigned short  m_rd_req    : 1;  /* bit[5]    : RD_REQ�ж����Ρ� */
        unsigned short  m_tx_abrt   : 1;  /* bit[6]    : TX_ABRT�ж����Ρ� */
        unsigned short  m_rx_done   : 1;  /* bit[7]    : RX_DONE�ж����Ρ� */
        unsigned short  m_activity  : 1;  /* bit[8]    : ACTIVITY�ж����Ρ� */
        unsigned short  m_stop_det  : 1;  /* bit[9]    : STOP_DET�ж����Ρ� */
        unsigned short  m_start_det : 1;  /* bit[10]   : START_DET�ж����Ρ� */
        unsigned short  m_gen_call  : 1;  /* bit[11]   : GEN_CALL�ж����Ρ� */
        unsigned short  reserved    : 4;  /* bit[12-15]: ������ */
    } reg;
} SOC_I2C_INTR_MASK_UNION;
#endif
#define SOC_I2C_INTR_MASK_m_rx_under_START   (0)
#define SOC_I2C_INTR_MASK_m_rx_under_END     (0)
#define SOC_I2C_INTR_MASK_m_rx_over_START    (1)
#define SOC_I2C_INTR_MASK_m_rx_over_END      (1)
#define SOC_I2C_INTR_MASK_m_rx_full_START    (2)
#define SOC_I2C_INTR_MASK_m_rx_full_END      (2)
#define SOC_I2C_INTR_MASK_m_tx_over_START    (3)
#define SOC_I2C_INTR_MASK_m_tx_over_END      (3)
#define SOC_I2C_INTR_MASK_m_tx_empty_START   (4)
#define SOC_I2C_INTR_MASK_m_tx_empty_END     (4)
#define SOC_I2C_INTR_MASK_m_rd_req_START     (5)
#define SOC_I2C_INTR_MASK_m_rd_req_END       (5)
#define SOC_I2C_INTR_MASK_m_tx_abrt_START    (6)
#define SOC_I2C_INTR_MASK_m_tx_abrt_END      (6)
#define SOC_I2C_INTR_MASK_m_rx_done_START    (7)
#define SOC_I2C_INTR_MASK_m_rx_done_END      (7)
#define SOC_I2C_INTR_MASK_m_activity_START   (8)
#define SOC_I2C_INTR_MASK_m_activity_END     (8)
#define SOC_I2C_INTR_MASK_m_stop_det_START   (9)
#define SOC_I2C_INTR_MASK_m_stop_det_END     (9)
#define SOC_I2C_INTR_MASK_m_start_det_START  (10)
#define SOC_I2C_INTR_MASK_m_start_det_END    (10)
#define SOC_I2C_INTR_MASK_m_gen_call_START   (11)
#define SOC_I2C_INTR_MASK_m_gen_call_END     (11)


/*****************************************************************************
 �ṹ��    : SOC_I2C_RAW_INTR_STAT_UNION
 �ṹ˵��  : RAW_INTR_STAT �Ĵ����ṹ���塣��ַƫ����:0x0034����ֵ:0x0000�����:16
 �Ĵ���˵��: ԭʼ�ж�״̬�Ĵ�����BitֵΪ0��ʾ���жϣ�Ϊ1��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  r_rx_under  : 1;  /* bit[0]    : RX_UNDERԭʼ�ж�״̬�� */
        unsigned short  r_rx_over   : 1;  /* bit[1]    : RX_OVERԭʼ�ж�״̬�� */
        unsigned short  r_rx_full   : 1;  /* bit[2]    : RX_FULLԭʼ�ж�״̬�� */
        unsigned short  r_tx_over   : 1;  /* bit[3]    : TX_OVERԭʼ�ж�״̬�� */
        unsigned short  r_tx_empty  : 1;  /* bit[4]    : R_TX_EMPTYԭʼ�ж�״̬�� */
        unsigned short  r_rd_req    : 1;  /* bit[5]    : RD_REQԭʼ�ж�״̬�� */
        unsigned short  r_tx_abrt   : 1;  /* bit[6]    : ԭʼ�ж�״̬�� */
        unsigned short  r_rx_done   : 1;  /* bit[7]    : RX_DONEԭʼ�ж�״̬�� */
        unsigned short  r_activity  : 1;  /* bit[8]    : ACTIVITYԭʼ�ж�״̬�� */
        unsigned short  r_stop_det  : 1;  /* bit[9]    : STOP_DETԭʼ�ж�״̬�� */
        unsigned short  r_start_det : 1;  /* bit[10]   : START_DETԭʼ�ж�״̬�� */
        unsigned short  r_gen_call  : 1;  /* bit[11]   : GEN_CALLԭʼ�ж�״̬�� */
        unsigned short  reserved    : 4;  /* bit[12-15]: ������ */
    } reg;
} SOC_I2C_RAW_INTR_STAT_UNION;
#endif
#define SOC_I2C_RAW_INTR_STAT_r_rx_under_START   (0)
#define SOC_I2C_RAW_INTR_STAT_r_rx_under_END     (0)
#define SOC_I2C_RAW_INTR_STAT_r_rx_over_START    (1)
#define SOC_I2C_RAW_INTR_STAT_r_rx_over_END      (1)
#define SOC_I2C_RAW_INTR_STAT_r_rx_full_START    (2)
#define SOC_I2C_RAW_INTR_STAT_r_rx_full_END      (2)
#define SOC_I2C_RAW_INTR_STAT_r_tx_over_START    (3)
#define SOC_I2C_RAW_INTR_STAT_r_tx_over_END      (3)
#define SOC_I2C_RAW_INTR_STAT_r_tx_empty_START   (4)
#define SOC_I2C_RAW_INTR_STAT_r_tx_empty_END     (4)
#define SOC_I2C_RAW_INTR_STAT_r_rd_req_START     (5)
#define SOC_I2C_RAW_INTR_STAT_r_rd_req_END       (5)
#define SOC_I2C_RAW_INTR_STAT_r_tx_abrt_START    (6)
#define SOC_I2C_RAW_INTR_STAT_r_tx_abrt_END      (6)
#define SOC_I2C_RAW_INTR_STAT_r_rx_done_START    (7)
#define SOC_I2C_RAW_INTR_STAT_r_rx_done_END      (7)
#define SOC_I2C_RAW_INTR_STAT_r_activity_START   (8)
#define SOC_I2C_RAW_INTR_STAT_r_activity_END     (8)
#define SOC_I2C_RAW_INTR_STAT_r_stop_det_START   (9)
#define SOC_I2C_RAW_INTR_STAT_r_stop_det_END     (9)
#define SOC_I2C_RAW_INTR_STAT_r_start_det_START  (10)
#define SOC_I2C_RAW_INTR_STAT_r_start_det_END    (10)
#define SOC_I2C_RAW_INTR_STAT_r_gen_call_START   (11)
#define SOC_I2C_RAW_INTR_STAT_r_gen_call_END     (11)


/*****************************************************************************
 �ṹ��    : SOC_I2C_RX_TL_UNION
 �ṹ˵��  : RX_TL �Ĵ����ṹ���塣��ַƫ����:0x0038����ֵ:0x0000�����:16
 �Ĵ���˵��: RX_FIFO��ˮ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  rx_tl    : 8;  /* bit[0-7] : RX_FIFO��ˮ��ֵ��ʵ��ֵ��������ֵ��1��
                                                     ע�⣺������ֵ����FIFO��ȣ�8��ʱ����Ϊ��8�� */
        unsigned short  reserved : 8;  /* bit[8-15]: ������ */
    } reg;
} SOC_I2C_RX_TL_UNION;
#endif
#define SOC_I2C_RX_TL_rx_tl_START     (0)
#define SOC_I2C_RX_TL_rx_tl_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_I2C_TX_TL_UNION
 �ṹ˵��  : TX_TL �Ĵ����ṹ���塣��ַƫ����:0x003C����ֵ:0x0000�����:16
 �Ĵ���˵��: TX_FIFO��ˮ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  tx_tl    : 8;  /* bit[0-7] : TX_FIFO��ˮ��ֵ��
                                                     ע�⣺������ֵ����FIFO��ȣ�8��ʱ����Ϊ��8�� */
        unsigned short  reserved : 8;  /* bit[8-15]: ������ */
    } reg;
} SOC_I2C_TX_TL_UNION;
#endif
#define SOC_I2C_TX_TL_tx_tl_START     (0)
#define SOC_I2C_TX_TL_tx_tl_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_I2C_CLR_INTR_UNION
 �ṹ˵��  : CLR_INTR �Ĵ����ṹ���塣��ַƫ����:0x0040����ֵ:0x0000�����:16
 �Ĵ���˵��: ��ϼ������ж�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  clr_intr : 1;  /* bit[0]   : ���˼Ĵ���������������жϺͶ����жϣ��Լ�I2C_TX_ABRT_SOURCE�Ĵ�����
                                                     ע�⣺I2C_TX_ABRT_SOURCE[abrt_sbyte_norstrt]��������������ж��޷�������� */
        unsigned short  reserved : 15; /* bit[1-15]: ������ */
    } reg;
} SOC_I2C_CLR_INTR_UNION;
#endif
#define SOC_I2C_CLR_INTR_clr_intr_START  (0)
#define SOC_I2C_CLR_INTR_clr_intr_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_I2C_CLR_RX_UNDER_UNION
 �ṹ˵��  : CLR_RX_UNDER �Ĵ����ṹ���塣��ַƫ����:0x0044����ֵ:0x0000�����:16
 �Ĵ���˵��: RX_UNDER�ж�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  clr_rx_under : 1;  /* bit[0]   : ���˼Ĵ�������RX_UNDER�жϡ� */
        unsigned short  reserved     : 15; /* bit[1-15]: ������ */
    } reg;
} SOC_I2C_CLR_RX_UNDER_UNION;
#endif
#define SOC_I2C_CLR_RX_UNDER_clr_rx_under_START  (0)
#define SOC_I2C_CLR_RX_UNDER_clr_rx_under_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_I2C_CLR_RX_OVER_UNION
 �ṹ˵��  : CLR_RX_OVER �Ĵ����ṹ���塣��ַƫ����:0x0048����ֵ:0x0000�����:16
 �Ĵ���˵��: RX_OVER�ж�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  clr_rx_over : 1;  /* bit[0]   : ���˼Ĵ�������RX_OVER�жϡ� */
        unsigned short  reserved    : 15; /* bit[1-15]: ������ */
    } reg;
} SOC_I2C_CLR_RX_OVER_UNION;
#endif
#define SOC_I2C_CLR_RX_OVER_clr_rx_over_START  (0)
#define SOC_I2C_CLR_RX_OVER_clr_rx_over_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_I2C_CLR_TX_OVER_UNION
 �ṹ˵��  : CLR_TX_OVER �Ĵ����ṹ���塣��ַƫ����:0x004C����ֵ:0x0000�����:16
 �Ĵ���˵��: TX_OVER�ж�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  clr_tx_over : 1;  /* bit[0]   : ���˼Ĵ�������TX_OVER�жϡ� */
        unsigned short  reserved    : 15; /* bit[1-15]: ������ */
    } reg;
} SOC_I2C_CLR_TX_OVER_UNION;
#endif
#define SOC_I2C_CLR_TX_OVER_clr_tx_over_START  (0)
#define SOC_I2C_CLR_TX_OVER_clr_tx_over_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_I2C_CLR_RD_REQ_UNION
 �ṹ˵��  : CLR_RD_REQ �Ĵ����ṹ���塣��ַƫ����:0x0050����ֵ:0x0000�����:16
 �Ĵ���˵��: RD_REQ�ж�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  clr_rd_req : 1;  /* bit[0]   : ���˼Ĵ�������RD_REQ�ж� */
        unsigned short  reserved   : 15; /* bit[1-15]: ������ */
    } reg;
} SOC_I2C_CLR_RD_REQ_UNION;
#endif
#define SOC_I2C_CLR_RD_REQ_clr_rd_req_START  (0)
#define SOC_I2C_CLR_RD_REQ_clr_rd_req_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_I2C_CLR_TX_ABRT_UNION
 �ṹ˵��  : CLR_TX_ABRT �Ĵ����ṹ���塣��ַƫ����:0x0054����ֵ:0x0000�����:16
 �Ĵ���˵��: ABRT�ж�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  clr_tx_abrt : 1;  /* bit[0]   : ���˼Ĵ�������TX_ABRT�жϺ�I2C_TX_ABRT_SOURCE�Ĵ����� */
        unsigned short  reserved    : 15; /* bit[1-15]: ������ */
    } reg;
} SOC_I2C_CLR_TX_ABRT_UNION;
#endif
#define SOC_I2C_CLR_TX_ABRT_clr_tx_abrt_START  (0)
#define SOC_I2C_CLR_TX_ABRT_clr_tx_abrt_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_I2C_CLR_RX_DONE_UNION
 �ṹ˵��  : CLR_RX_DONE �Ĵ����ṹ���塣��ַƫ����:0x0058����ֵ:0x0000�����:16
 �Ĵ���˵��: RX_DONE�ж�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  clr_rx_done : 1;  /* bit[0]   : ���˼Ĵ�������RX_DONE�жϡ� */
        unsigned short  reserved    : 15; /* bit[1-15]: ������ */
    } reg;
} SOC_I2C_CLR_RX_DONE_UNION;
#endif
#define SOC_I2C_CLR_RX_DONE_clr_rx_done_START  (0)
#define SOC_I2C_CLR_RX_DONE_clr_rx_done_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_I2C_CLR_ACTIVITY_UNION
 �ṹ˵��  : CLR_ACTIVITY �Ĵ����ṹ���塣��ַƫ����:0x005C����ֵ:0x0000�����:16
 �Ĵ���˵��: ACTIVITY״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  clr_activity : 1;  /* bit[0]   : ���˼Ĵ������ɻ��ACTIVITY�ж�״̬��Ӳ���Զ���0�� */
        unsigned short  reserved     : 15; /* bit[1-15]: ������ */
    } reg;
} SOC_I2C_CLR_ACTIVITY_UNION;
#endif
#define SOC_I2C_CLR_ACTIVITY_clr_activity_START  (0)
#define SOC_I2C_CLR_ACTIVITY_clr_activity_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_I2C_CLR_STOP_DET_UNION
 �ṹ˵��  : CLR_STOP_DET �Ĵ����ṹ���塣��ַƫ����:0x0060����ֵ:0x0000�����:16
 �Ĵ���˵��: STOP_DET�ж�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  clr_stop_det : 1;  /* bit[0]   : ���˼Ĵ�������STOP_DET�жϡ� */
        unsigned short  reserved     : 15; /* bit[1-15]: ������ */
    } reg;
} SOC_I2C_CLR_STOP_DET_UNION;
#endif
#define SOC_I2C_CLR_STOP_DET_clr_stop_det_START  (0)
#define SOC_I2C_CLR_STOP_DET_clr_stop_det_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_I2C_CLR_START_DET_UNION
 �ṹ˵��  : CLR_START_DET �Ĵ����ṹ���塣��ַƫ����:0x0064����ֵ:0x0000�����:16
 �Ĵ���˵��: START_DET�ж�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  clr_start_det : 1;  /* bit[0]   : ���˼Ĵ�������START_DET�жϡ� */
        unsigned short  reserved      : 15; /* bit[1-15]: ������ */
    } reg;
} SOC_I2C_CLR_START_DET_UNION;
#endif
#define SOC_I2C_CLR_START_DET_clr_start_det_START  (0)
#define SOC_I2C_CLR_START_DET_clr_start_det_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_I2C_CLR_GEN_CALL_UNION
 �ṹ˵��  : CLR_GEN_CALL �Ĵ����ṹ���塣��ַƫ����:0x0068����ֵ:0x0000�����:16
 �Ĵ���˵��: GEN_CALL�ж�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  clr_gen_call : 1;  /* bit[0]   : ���˼Ĵ�������GEN_CALL�жϡ� */
        unsigned short  reserved     : 15; /* bit[1-15]: ������ */
    } reg;
} SOC_I2C_CLR_GEN_CALL_UNION;
#endif
#define SOC_I2C_CLR_GEN_CALL_clr_gen_call_START  (0)
#define SOC_I2C_CLR_GEN_CALL_clr_gen_call_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_I2C_ENABLE_UNION
 �ṹ˵��  : ENABLE �Ĵ����ṹ���塣��ַƫ����:0x006C����ֵ:0x0000�����:16
 �Ĵ���˵��: I2Cʹ�ܼĴ��������ڹرջ�ʹ��I2C��
            ��I2C�������ݴ���״̬ʱ����I2C_STATUS[activity]Ϊ1����I2C���Ա��رգ�����Ҫע�⣺
            (I)���I2C���ڷ���״̬ʱ�رգ���I2C����ɵ�ǰ�ֽڷ��ͺ�ֹͣ�������䣬ͬʱ���TX_FIFO�����ݡ�
            (I)���I2C���ڽ���״̬ʱ�رգ���I2C�ڽ����굱ǰ�ֽں���Ӧ��δ��䣬������NACK��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  i2c_enable : 1;  /* bit[0]   : I2C��ʹ�ܼĴ�����
                                                       0����ֹ��
                                                       1��ʹ�ܡ� */
        unsigned short  reserved   : 15; /* bit[1-15]: ������ */
    } reg;
} SOC_I2C_ENABLE_UNION;
#endif
#define SOC_I2C_ENABLE_i2c_enable_START  (0)
#define SOC_I2C_ENABLE_i2c_enable_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_I2C_STATUS_UNION
 �ṹ˵��  : STATUS �Ĵ����ṹ���塣��ַƫ����:0x0070����ֵ:0x0006�����:16
 �Ĵ���˵��: I2C״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  activity     : 1;  /* bit[0]   : I2C����״̬��
                                                         0�����У�
                                                         1��æ�� */
        unsigned short  tfnf         : 1;  /* bit[1]   : TX_FIFO�Ƿ�������
                                                         0��������
                                                         1��δ���� */
        unsigned short  tfe          : 1;  /* bit[2]   : TX_FIFO�Ƿ��ѿա�
                                                         0��δ�գ�
                                                         1���ѿա� */
        unsigned short  rfne         : 1;  /* bit[3]   : RX_FIFO�Ƿ��ѿա�
                                                         0���ѿգ�
                                                         1��δ�ա� */
        unsigned short  rff          : 1;  /* bit[4]   : RX_FIFO�Ƿ�������
                                                         0��δ����
                                                         1�������� */
        unsigned short  mst_activity : 1;  /* bit[5]   : ����״̬���״̬��
                                                         0������״̬������IDLE̬��DW_apb_i2c��������Ϊ�ǻ�Ծ̬��
                                                         1������״̬�����ڷ�IDLE̬��DW_apb_i2c��������Ϊ��Ծ̬�� */
        unsigned short  slv_activity : 1;  /* bit[6]   : �ӻ�״̬���״̬��
                                                         0���ӻ�״̬������IDLE̬��DW_apb_i2c�ӻ�����Ϊ�ǻ�Ծ̬��
                                                         1���ӻ�״̬�����ڷ�IDLE̬��DW_apb_i2c�ӻ�����Ϊ��Ծ̬�� */
        unsigned short  reserved     : 9;  /* bit[7-15]: ������ */
    } reg;
} SOC_I2C_STATUS_UNION;
#endif
#define SOC_I2C_STATUS_activity_START      (0)
#define SOC_I2C_STATUS_activity_END        (0)
#define SOC_I2C_STATUS_tfnf_START          (1)
#define SOC_I2C_STATUS_tfnf_END            (1)
#define SOC_I2C_STATUS_tfe_START           (2)
#define SOC_I2C_STATUS_tfe_END             (2)
#define SOC_I2C_STATUS_rfne_START          (3)
#define SOC_I2C_STATUS_rfne_END            (3)
#define SOC_I2C_STATUS_rff_START           (4)
#define SOC_I2C_STATUS_rff_END             (4)
#define SOC_I2C_STATUS_mst_activity_START  (5)
#define SOC_I2C_STATUS_mst_activity_END    (5)
#define SOC_I2C_STATUS_slv_activity_START  (6)
#define SOC_I2C_STATUS_slv_activity_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_I2C_TXFLR_UNION
 �ṹ˵��  : TXFLR �Ĵ����ṹ���塣��ַƫ����:0x0074����ֵ:0x0000�����:16
 �Ĵ���˵��: TX_FIFO�е����ݸ���ָʾ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  txflr    : 7;  /* bit[0-6] : ָʾTX_FIFO�е����ݸ����� */
        unsigned short  reserved : 9;  /* bit[7-15]: ������ */
    } reg;
} SOC_I2C_TXFLR_UNION;
#endif
#define SOC_I2C_TXFLR_txflr_START     (0)
#define SOC_I2C_TXFLR_txflr_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_I2C_RXFLR_UNION
 �ṹ˵��  : RXFLR �Ĵ����ṹ���塣��ַƫ����:0x0078����ֵ:0x0000�����:16
 �Ĵ���˵��: RX_FIFO�е����ݸ���ָʾ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  rxflr    : 7;  /* bit[0-6] : ָʾRX_FIFO�е����ݸ����� */
        unsigned short  reserved : 9;  /* bit[7-15]: ������ */
    } reg;
} SOC_I2C_RXFLR_UNION;
#endif
#define SOC_I2C_RXFLR_rxflr_START     (0)
#define SOC_I2C_RXFLR_rxflr_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_I2C_SDA_HOLD_UNION
 �ṹ˵��  : SDA_HOLD �Ĵ����ṹ���塣��ַƫ����:0x007C����ֵ:0x00000001�����:32
 �Ĵ���˵��: SDA����ʱ�䳤�ȼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  i2c_sda_hold : 16; /* bit[0-15] : SDA ����ʱ�䣨��ic_clkΪ��λ�� */
        unsigned int  reserved     : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_I2C_SDA_HOLD_UNION;
#endif
#define SOC_I2C_SDA_HOLD_i2c_sda_hold_START  (0)
#define SOC_I2C_SDA_HOLD_i2c_sda_hold_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_I2C_TX_ABRT_SOURCE_UNION
 �ṹ˵��  : TX_ABRT_SOURCE �Ĵ����ṹ���塣��ַƫ����:0x0080����ֵ:0x00000000�����:32
 �Ĵ���˵��: TX_ABRT��Դͷ�жϼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  abrt_7b_addr_noack   : 1;  /* bit[0]    : �����ж�ԭ��ָʾ��
                                                                0����λֵ��
                                                                1����Ϊ���豸ʱ���͵�7bit��ַû����Ӧ�� */
        unsigned int  abrt_10addr1_noack   : 1;  /* bit[1]    : �����ж�ԭ��ָʾ��
                                                                0����λֵ��
                                                                1����Ϊ���豸ʱ���͵�10bit��ַ�ĵ�1�ֽ�û����Ӧ�� */
        unsigned int  abrt_10addr2_noack   : 1;  /* bit[2]    : �����ж�ԭ��ָʾ��
                                                                0����λֵ��
                                                                1����Ϊ���豸ʱ���͵�10bit��ַ�ĵ�2�ֽ�û����Ӧ�� */
        unsigned int  abrt_txdata_noack    : 1;  /* bit[3]    : �����ж�ԭ��ָʾ��
                                                                0����λֵ��
                                                                1����Ϊ���豸ʱ���͵ĵ�ַ�����豸��Ӧ�������͵�����û����Ӧ�� */
        unsigned int  abrt_gcall_noack     : 1;  /* bit[4]    : �����ж�ԭ��ָʾ��
                                                                0����λֵ��
                                                                1����Ϊ���豸ʱ����General call����û����Ӧ�� */
        unsigned int  abrt_gcall_read      : 1;  /* bit[5]    : �����ж�ԭ��ָʾ��
                                                                0����λֵ��
                                                                1����Ϊ���豸ʱ����General call����CPU��I2C��������� */
        unsigned int  abrt_hs_ackdet       : 1;  /* bit[6]    : �����ж�ԭ��ָʾ��
                                                                0����λֵ��
                                                                1����Ϊ���豸���и��ٴ���ʱ�����������뱻��Ӧ�� */
        unsigned int  abrt_sbyte_ackdet    : 1;  /* bit[7]    : �����ж�ԭ��ָʾ��
                                                                0����λֵ��
                                                                1����Ϊ���豸ʱ����Start byte������Ӧ�� */
        unsigned int  abrt_hs_norstrt      : 1;  /* bit[8]    : �����ж�ԭ��ָʾ��
                                                                0����λֵ��
                                                                1����Ϊ���豸��֧��Restart����ʱ�����и��ٲ����� */
        unsigned int  abrt_sbyte_norstrt   : 1;  /* bit[9]    : �����ж�ԭ��ָʾ��
                                                                0����λֵ��
                                                                1����Ϊ���豸��֧��Restart����ʱ������Start byte�� */
        unsigned int  abrt_10b_rd_norstrt  : 1;  /* bit[10]   : �����ж�ԭ��ָʾ��
                                                                0����λֵ��
                                                                1����Ϊ���豸��֧��Restart����ʱ����10bit��ַ�Ĵ��豸�����˶���� */
        unsigned int  abrt_master_dis      : 1;  /* bit[11]   : �����ж�ԭ��ָʾ��
                                                                0����λֵ��
                                                                1��Master���ܽ���ʱ������Master������ */
        unsigned int  abrt_lost            : 1;  /* bit[12]   : �����ٲö�ʧ�ж�ָʾ��
                                                                0����λֵ��
                                                                1�������ٲö�ʧ����I2C_TX_ABRT_SOURCE[14]������ʱ����ʾ�ӻ��Ĵ���ʧȥ�ٲá� */
        unsigned int  abrt_slvflush_txfifo : 1;  /* bit[13]   : 0����λֵ��
                                                                1���ڴӻ��յ�һ���������������ͬ�����ݴ����ڷ���FIFO��ʱ���ӻ��ᷢһ��TX_ARBT�жϣ����������FIFO�е�ԭ�����ݡ� */
        unsigned int  abrt_slv_arblost     : 1;  /* bit[14]   : 0����λֵ��
                                                                1���ӻ�����Զ��������������ʱ��ʧ�����ٲã���ʱI2C_TX_ABRT_SOURCE[14]ͬ�������á� */
        unsigned int  abrt_slvrd_intx      : 1;  /* bit[15]   : 0����λֵ��
                                                                1����������Ӧ�ӻ����������ݵ�Զ�����������û�������Ĵ���д1ʱ�������жϡ� */
        unsigned int  reserved             : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_I2C_TX_ABRT_SOURCE_UNION;
#endif
#define SOC_I2C_TX_ABRT_SOURCE_abrt_7b_addr_noack_START    (0)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_7b_addr_noack_END      (0)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_10addr1_noack_START    (1)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_10addr1_noack_END      (1)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_10addr2_noack_START    (2)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_10addr2_noack_END      (2)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_txdata_noack_START     (3)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_txdata_noack_END       (3)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_gcall_noack_START      (4)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_gcall_noack_END        (4)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_gcall_read_START       (5)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_gcall_read_END         (5)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_hs_ackdet_START        (6)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_hs_ackdet_END          (6)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_sbyte_ackdet_START     (7)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_sbyte_ackdet_END       (7)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_hs_norstrt_START       (8)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_hs_norstrt_END         (8)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_sbyte_norstrt_START    (9)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_sbyte_norstrt_END      (9)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_10b_rd_norstrt_START   (10)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_10b_rd_norstrt_END     (10)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_master_dis_START       (11)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_master_dis_END         (11)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_lost_START             (12)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_lost_END               (12)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_slvflush_txfifo_START  (13)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_slvflush_txfifo_END    (13)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_slv_arblost_START      (14)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_slv_arblost_END        (14)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_slvrd_intx_START       (15)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_slvrd_intx_END         (15)


/*****************************************************************************
 �ṹ��    : SOC_I2C_DMA_CR_UNION
 �ṹ˵��  : DMA_CR �Ĵ����ṹ���塣��ַƫ����:0x0088����ֵ:0x0000�����:16
 �Ĵ���˵��: I2C DMAͨ���������ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  rdmae    : 1;  /* bit[0]   : �Ƿ��RX_FIFO��DMAͨ����
                                                     0�����򿪣�
                                                     1���򿪡� */
        unsigned short  tdmae    : 1;  /* bit[1]   : �Ƿ��TX_FIFO��DMAͨ����
                                                     0�����򿪣�
                                                     1���򿪡� */
        unsigned short  reserved : 14; /* bit[2-15]: ������ */
    } reg;
} SOC_I2C_DMA_CR_UNION;
#endif
#define SOC_I2C_DMA_CR_rdmae_START     (0)
#define SOC_I2C_DMA_CR_rdmae_END       (0)
#define SOC_I2C_DMA_CR_tdmae_START     (1)
#define SOC_I2C_DMA_CR_tdmae_END       (1)


/*****************************************************************************
 �ṹ��    : SOC_I2C_DMA_TDLR_UNION
 �ṹ˵��  : DMA_TDLR �Ĵ����ṹ���塣��ַƫ����:0x008C����ֵ:0x0000�����:16
 �Ĵ���˵��: TX_FIFO����DMA����ʱ��ˮ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  dmatdl   : 6;  /* bit[0-5] : TX_FIFO DMA����ʱ��ˮ��ֵ�� */
        unsigned short  reserved : 10; /* bit[6-15]: ������ */
    } reg;
} SOC_I2C_DMA_TDLR_UNION;
#endif
#define SOC_I2C_DMA_TDLR_dmatdl_START    (0)
#define SOC_I2C_DMA_TDLR_dmatdl_END      (5)


/*****************************************************************************
 �ṹ��    : SOC_I2C_DMA_RDLR_UNION
 �ṹ˵��  : DMA_RDLR �Ĵ����ṹ���塣��ַƫ����:0x0090����ֵ:0x0000�����:16
 �Ĵ���˵��: RX_FIFO����DMA����ʱ��ˮ�����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  dmardl   : 6;  /* bit[0-5] : RX_FIFO DMA����ʱ��ˮ��ֵ��ʵ��ֵ��������ֵ��1�� */
        unsigned short  reserved : 10; /* bit[6-15]: ������ */
    } reg;
} SOC_I2C_DMA_RDLR_UNION;
#endif
#define SOC_I2C_DMA_RDLR_dmardl_START    (0)
#define SOC_I2C_DMA_RDLR_dmardl_END      (5)


/*****************************************************************************
 �ṹ��    : SOC_I2C_SDA_SETUP_UNION
 �ṹ˵��  : SDA_SETUP �Ĵ����ṹ���塣��ַƫ����:0x0094����ֵ:0x00000064�����:32
 �Ĵ���˵��: SDA����ʱ�䳤�ȼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  i2c_sda_setup : 8;  /* bit[0-7] : SDA����ʱ��Ĵ����� */
        unsigned int  reserved      : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_I2C_SDA_SETUP_UNION;
#endif
#define SOC_I2C_SDA_SETUP_i2c_sda_setup_START  (0)
#define SOC_I2C_SDA_SETUP_i2c_sda_setup_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_I2C_ACK_GENERAL_CALL_UNION
 �ṹ˵��  : ACK_GENERAL_CALL �Ĵ����ṹ���塣��ַƫ����:0x0098����ֵ:0x00000001�����:32
 �Ĵ���˵��: ȫ������Ӧ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ack_gen_call : 1;  /* bit[0]   : ȫ������Ӧ�Ĵ�����
                                                       0���յ�ȫ����ʱ������ȫ�����жϣ�
                                                       1���յ�ȫ����ʱ����һ��ACK�� */
        unsigned int  reserved     : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_I2C_ACK_GENERAL_CALL_UNION;
#endif
#define SOC_I2C_ACK_GENERAL_CALL_ack_gen_call_START  (0)
#define SOC_I2C_ACK_GENERAL_CALL_ack_gen_call_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_I2C_ENABLE_STATUS_UNION
 �ṹ˵��  : ENABLE_STATUS �Ĵ����ṹ���塣��ַƫ����:0x009C����ֵ:0x00000000�����:32
 �Ĵ���˵��: I2Cʹ��״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  i2c_en                  : 1;  /* bit[0]   : DW_apb_i2cʹ��״̬ */
        unsigned int  slv_disabled_while_busy : 1;  /* bit[1]   : ָʾ�ӻ������Ƿ���I2C_ENABlE��1��0������ֹ */
        unsigned int  slv_rx_data_lost        : 1;  /* bit[2]   : ָʾ�ӻ������������������յ�1�ֽ�����ʱ���Ƿ���I2C_ENABlE��1��0������ֹ */
        unsigned int  reserved                : 29; /* bit[3-31]: ������ */
    } reg;
} SOC_I2C_ENABLE_STATUS_UNION;
#endif
#define SOC_I2C_ENABLE_STATUS_i2c_en_START                   (0)
#define SOC_I2C_ENABLE_STATUS_i2c_en_END                     (0)
#define SOC_I2C_ENABLE_STATUS_slv_disabled_while_busy_START  (1)
#define SOC_I2C_ENABLE_STATUS_slv_disabled_while_busy_END    (1)
#define SOC_I2C_ENABLE_STATUS_slv_rx_data_lost_START         (2)
#define SOC_I2C_ENABLE_STATUS_slv_rx_data_lost_END           (2)


/*****************************************************************************
 �ṹ��    : SOC_I2C_FS_SPKLEN_UNION
 �ṹ˵��  : FS_SPKLEN �Ĵ����ṹ���塣��ַƫ����:0x00A0����ֵ:0x00000005�����:32
 �Ĵ���˵��: ���ټ�ȫ��ģʽ��ë�����Ƴ��ȼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  i2c_fs_spklen : 8;  /* bit[0-7] : ָ�����ټ�ȫ��ģʽ��ë�����Ƴ��� */
        unsigned int  reserved      : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_I2C_FS_SPKLEN_UNION;
#endif
#define SOC_I2C_FS_SPKLEN_i2c_fs_spklen_START  (0)
#define SOC_I2C_FS_SPKLEN_i2c_fs_spklen_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_I2C_HS_SPKLEN_UNION
 �ṹ˵��  : HS_SPKLEN �Ĵ����ṹ���塣��ַƫ����:0x00A4����ֵ:0x00000002�����:32
 �Ĵ���˵��: ����ģʽ��ë�����Ƴ��ȼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  i2c_hs_spklen : 8;  /* bit[0-7] : ָ������ģʽ��ë�����Ƴ��� */
        unsigned int  reserved      : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_I2C_HS_SPKLEN_UNION;
#endif
#define SOC_I2C_HS_SPKLEN_i2c_hs_spklen_START  (0)
#define SOC_I2C_HS_SPKLEN_i2c_hs_spklen_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_I2C_COMP_PARAM_1_UNION
 �ṹ˵��  : COMP_PARAM_1 �Ĵ����ṹ���塣��ַƫ����:0x00F4����ֵ:0x003F3FEE�����:32
 �Ĵ���˵��: �����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  apb_data_width     : 2;  /* bit[0-1]  : apb������λ�� */
        unsigned int  max_speed_mode     : 2;  /* bit[2-3]  : ����ٶ�ģʽ */
        unsigned int  hc_count_values    : 1;  /* bit[4]    : *CNT �Ĵ����Ƿ���д���� */
        unsigned int  intr_io            : 1;  /* bit[5]    : �ж���Ϸ�ʽ */
        unsigned int  has_dma            : 1;  /* bit[6]    : �Ƿ����DMA�ź� */
        unsigned int  add_encoded_params : 1;  /* bit[7]    : ���ӱ������ */
        unsigned int  rx_buffer_depth    : 8;  /* bit[8-15] : ����FIFO��� */
        unsigned int  tx_buffer_depth    : 8;  /* bit[16-23]: ����FIFO��� */
        unsigned int  reserved           : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_I2C_COMP_PARAM_1_UNION;
#endif
#define SOC_I2C_COMP_PARAM_1_apb_data_width_START      (0)
#define SOC_I2C_COMP_PARAM_1_apb_data_width_END        (1)
#define SOC_I2C_COMP_PARAM_1_max_speed_mode_START      (2)
#define SOC_I2C_COMP_PARAM_1_max_speed_mode_END        (3)
#define SOC_I2C_COMP_PARAM_1_hc_count_values_START     (4)
#define SOC_I2C_COMP_PARAM_1_hc_count_values_END       (4)
#define SOC_I2C_COMP_PARAM_1_intr_io_START             (5)
#define SOC_I2C_COMP_PARAM_1_intr_io_END               (5)
#define SOC_I2C_COMP_PARAM_1_has_dma_START             (6)
#define SOC_I2C_COMP_PARAM_1_has_dma_END               (6)
#define SOC_I2C_COMP_PARAM_1_add_encoded_params_START  (7)
#define SOC_I2C_COMP_PARAM_1_add_encoded_params_END    (7)
#define SOC_I2C_COMP_PARAM_1_rx_buffer_depth_START     (8)
#define SOC_I2C_COMP_PARAM_1_rx_buffer_depth_END       (15)
#define SOC_I2C_COMP_PARAM_1_tx_buffer_depth_START     (16)
#define SOC_I2C_COMP_PARAM_1_tx_buffer_depth_END       (23)


/*****************************************************************************
 �ṹ��    : SOC_I2C_COMP_VERSION_UNION
 �ṹ˵��  : COMP_VERSION �Ĵ����ṹ���塣��ַƫ����:0x00F8����ֵ:0x3131352A�����:32
 �Ĵ���˵��: �汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  i2c_comp_version : 32; /* bit[0-31]: DW_apb_i2c�汾��Ϣ */
    } reg;
} SOC_I2C_COMP_VERSION_UNION;
#endif
#define SOC_I2C_COMP_VERSION_i2c_comp_version_START  (0)
#define SOC_I2C_COMP_VERSION_i2c_comp_version_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_I2C_COMP_TYPE_UNION
 �ṹ˵��  : COMP_TYPE �Ĵ����ṹ���塣��ַƫ����:0x00FC����ֵ:0x44570140�����:32
 �Ĵ���˵��: DesignWareIP���ͼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  i2c_comp_type : 32; /* bit[0-31]: DesignWareIP���� */
    } reg;
} SOC_I2C_COMP_TYPE_UNION;
#endif
#define SOC_I2C_COMP_TYPE_i2c_comp_type_START  (0)
#define SOC_I2C_COMP_TYPE_i2c_comp_type_END    (31)






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

#endif /* end of soc_i2c_interface.h */
