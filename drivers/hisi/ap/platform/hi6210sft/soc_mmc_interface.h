

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_MMC_INTERFACE_H__
#define __SOC_MMC_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/1) MMC
 ****************************************************************************/
/* �Ĵ���˵�������ƼĴ�����
   λ����UNION�ṹ:  SOC_MMC_CTRL_UNION */
#define SOC_MMC_CTRL_ADDR(base)                       ((base) + (0x0000))

/* �Ĵ���˵�����ӿ�ʱ�ӷ�Ƶ���ӼĴ�����
   λ����UNION�ṹ:  SOC_MMC_CLKDIV_UNION */
#define SOC_MMC_CLKDIV_ADDR(base)                     ((base) + (0x0008))

/* �Ĵ���˵����MMC�ӿ�ʱ��ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_MMC_CLKENA_UNION */
#define SOC_MMC_CLKENA_ADDR(base)                     ((base) + (0x0010))

/* �Ĵ���˵������ʱ�����Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_TMOUT_UNION */
#define SOC_MMC_TMOUT_ADDR(base)                      ((base) + (0x0014))

/* �Ĵ���˵�����ӿ�λ�����üĴ�����
   λ����UNION�ṹ:  SOC_MMC_CTYPE_UNION */
#define SOC_MMC_CTYPE_ADDR(base)                      ((base) + (0x0018))

/* �Ĵ���˵�������С���üĴ�����
   λ����UNION�ṹ:  SOC_MMC_BLKSIZ_UNION */
#define SOC_MMC_BLKSIZ_ADDR(base)                     ((base) + (0x001C))

/* �Ĵ���˵�����������ݴ�С�Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_BYTCNT_UNION */
#define SOC_MMC_BYTCNT_ADDR(base)                     ((base) + (0x0020))

/* �Ĵ���˵�����ж����μĴ�����
   λ����UNION�ṹ:  SOC_MMC_INTMASK_UNION */
#define SOC_MMC_INTMASK_ADDR(base)                    ((base) + (0x0024))

/* �Ĵ���˵����ָ������Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_CMDARG_UNION */
#define SOC_MMC_CMDARG_ADDR(base)                     ((base) + (0x0028))

/* �Ĵ���˵����ָ��Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_CMD_UNION */
#define SOC_MMC_CMD_ADDR(base)                        ((base) + (0x002C))

/* �Ĵ���˵����ָ����Ӧ�Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_RESP0_UNION */
#define SOC_MMC_RESP0_ADDR(base)                      ((base) + (0x0030))

/* �Ĵ���˵����ָ����Ӧ�Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_RESP1_UNION */
#define SOC_MMC_RESP1_ADDR(base)                      ((base) + (0x0034))

/* �Ĵ���˵����ָ����Ӧ�Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_RESP2_UNION */
#define SOC_MMC_RESP2_ADDR(base)                      ((base) + (0x0038))

/* �Ĵ���˵����ָ����Ӧ�Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_RESP3_UNION */
#define SOC_MMC_RESP3_ADDR(base)                      ((base) + (0x003C))

/* �Ĵ���˵�������κ���ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_MINTSTS_UNION */
#define SOC_MMC_MINTSTS_ADDR(base)                    ((base) + (0x0040))

/* �Ĵ���˵����ԭʼ�ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_RINTSTS_UNION */
#define SOC_MMC_RINTSTS_ADDR(base)                    ((base) + (0x0044))

/* �Ĵ���˵����MMC״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_STATUS_UNION */
#define SOC_MMC_STATUS_ADDR(base)                     ((base) + (0x0048))

/* �Ĵ���˵����MMC FIFO�����Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_FIFOTH_UNION */
#define SOC_MMC_FIFOTH_ADDR(base)                     ((base) + (0x004C))

/* �Ĵ���˵�����ӿڴ�������Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_TCBCNT_UNION */
#define SOC_MMC_TCBCNT_ADDR(base)                     ((base) + (0x005C))

/* �Ĵ���˵����FIFO��������Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_TBBCNT_UNION */
#define SOC_MMC_TBBCNT_ADDR(base)                     ((base) + (0x0060))

/* �Ĵ���˵����ȥ�������Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_DEBNCE_UNION */
#define SOC_MMC_DEBNCE_ADDR(base)                     ((base) + (0x0064))

/* �Ĵ���˵�����汾�Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_VERID_UNION */
#define SOC_MMC_VERID_ADDR(base)                      ((base) + (0x006C))

/* �Ĵ���˵����UHS-1�Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_UHSREG_UNION */
#define SOC_MMC_UHSREG_ADDR(base)                     ((base) + (0x0074))

/* �Ĵ���˵����Ӳ����λ�Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_RST_n_UNION */
#define SOC_MMC_RST_n_ADDR(base)                      ((base) + (0x0078))

/* �Ĵ���˵��������ģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_MMC_BMOD_UNION */
#define SOC_MMC_BMOD_ADDR(base)                       ((base) + (0x0080))

/* �Ĵ���˵����ͶƱ�Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_PLDMND_UNION */
#define SOC_MMC_PLDMND_ADDR(base)                     ((base) + (0x0084))

/* �Ĵ���˵���������ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_DBADDR_UNION */
#define SOC_MMC_DBADDR_ADDR(base)                     ((base) + (0x0088))

/* �Ĵ���˵����IDMAC״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_IDSTS_UNION */
#define SOC_MMC_IDSTS_ADDR(base)                      ((base) + (0x008C))

/* �Ĵ���˵����IDMAC�ж�ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_MMC_IDINTEN_UNION */
#define SOC_MMC_IDINTEN_ADDR(base)                    ((base) + (0x0090))

/* �Ĵ���˵������ǰDiscriptor��ַ�Ĵ���
   λ����UNION�ṹ:  SOC_MMC_DSCADDR_UNION */
#define SOC_MMC_DSCADDR_ADDR(base)                    ((base) + (0x0094))

/* �Ĵ���˵������ǰBuffer��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_MMC_BUFADDR_UNION */
#define SOC_MMC_BUFADDR_ADDR(base)                    ((base) + (0x0098))

/* �Ĵ���˵��������FIFO���޼Ĵ���
   λ����UNION�ṹ:  SOC_MMC_CARDTHRCTL_UNION */
#define SOC_MMC_CARDTHRCTL_ADDR(base)                 ((base) + (0x0100))

/* �Ĵ���˵����UHS�Ĵ���
   λ����UNION�ṹ:  SOC_MMC_UHS_REG_EXT_UNION */
#define SOC_MMC_UHS_REG_EXT_ADDR(base)                ((base) + (0x0108))

/* �Ĵ���˵����eMMC4.5 DDRģʽ��ʼλ���ƼĴ���
   λ����UNION�ṹ:  SOC_MMC_EMMC_DDR_REG_UNION */
#define SOC_MMC_EMMC_DDR_REG_ADDR(base)               ((base) + (0x010C))

/* �Ĵ���˵��������ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_MMC_ENABLE_SHIFT_UNION */
#define SOC_MMC_ENABLE_SHIFT_ADDR(base)               ((base) + (0x0110))





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
                     (1/1) MMC
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_MMC_CTRL_UNION
 �ṹ˵��  : CTRL �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  controller_reset  : 1;  /* bit[0]    : 0�����ı�
                                                             1����λ MMC/SD/SDIO HOST IP ģ��
                                                             �� 1 ʹ��ģ�鸴λ����λ������ cclk_in �����ڱ��Զ���λ����λ������
                                                             l BIU/CIU ģ��
                                                             l CIU ������״̬��
                                                             l Abort_read_data, send_irq_response, �� read_wait ����λ
                                                             l Start_cmd ����λ
                                                             ��Ӱ�������Ĵ���ֵ��DMA�ӿڣ�FIFO �� �жϡ� */
        unsigned int  fifo_reset        : 1;  /* bit[1]    : FIFO��λ����λ��
                                                             0������λFIFO��дָ�룻
                                                             1����λFIFO��дָ�롣
                                                             д1ʹ�ܸ�λ����bit����ɸ�λ���Զ���0�� */
        unsigned int  dma_reset         : 1;  /* bit[2]    : DMA�ӿڹ��ܸ�λ���ơ�
                                                             0������λ��
                                                             1����λ��
                                                             д1ʹ�ܸ�λ����bit����ɸ�λ���Զ���0�� */
        unsigned int  reserved_0        : 1;  /* bit[3]    : ������Ĭ��Ϊ0������д1�� */
        unsigned int  int_enable        : 1;  /* bit[4]    : ȫ���ж�ʹ��λ��
                                                             0����ֹ��
                                                             1��ʹ�ܡ�
                                                             ֻ�и�bit��Ч�����ж�Դ��ʹ�ܵ�����£��ж��������Ч�� */
        unsigned int  dma_enable        : 1;  /* bit[5]    : DMA����ģʽʹ��λ��
                                                             0����ֹ��
                                                             1��ʹ�ܡ�
                                                             ��ʹDMAģʽ�Ѿ�ʹ�ܣ�CPU��Ȼ���Զ�FIFO���ж�д������ʵ�ʲ�����Ӧ�ñ��⡣���DMA��CPUͬʱ��FIFO���ж�д��������δ�ٲ������ȼ��� */
        unsigned int  read_wait         : 1;  /* bit[6]    : 0��������ȴ�
                                                             1��ʹ�ܶ��ȴ�
                                                             ���Ͷ��ȴ��� SDIO�� */
        unsigned int  send_irq_response : 1;  /* bit[7]    : �Զ�IRQ��Ӧ���ơ�
                                                             0��Ĭ�ϱ���ֵ��
                                                             1�������Զ�IRQ��Ӧ��
                                                             ��bit�ڷ�����Ӧ���Զ���0��
                                                             Ϊ�˵ȴ�MMC�����жϣ�����������CMD40���ȴ�����MMC�ж���Ӧ��ͬʱ�����������ϣ������ͣ�����жϵȴ�״̬������ʹ�ܸ�bit���ͳ�CMD40��Ӧ���ص�IDLE״̬�� */
        unsigned int  abort_read_data   : 1;  /* bit[8]    : 0�����ı�
                                                             1�����ڶ�������������� suspend ָ���������ÿ�ȥ������ôʱ�� suspend ���֡�һ��suspend���֣�����Ѹ�bitʹ��ʹ���ݴ���״̬���ص���ʼ״̬IDLE�����ص��ȴ���һ�����ݴ��䡣��״̬���ص� IDLE �󣬸ñ��ػ��Զ�������� */
        unsigned int  reserved_1        : 16; /* bit[9-24] :  */
        unsigned int  use_internal_dmac : 1;  /* bit[25]   : 0���ⲿhost�ӿ�ͨ��slave �ӿڴ�������
                                                             1��ʹ���ڲ�DMA�������� */
        unsigned int  reserved_2        : 6;  /* bit[26-31]: ������ */
    } reg;
} SOC_MMC_CTRL_UNION;
#endif
#define SOC_MMC_CTRL_controller_reset_START   (0)
#define SOC_MMC_CTRL_controller_reset_END     (0)
#define SOC_MMC_CTRL_fifo_reset_START         (1)
#define SOC_MMC_CTRL_fifo_reset_END           (1)
#define SOC_MMC_CTRL_dma_reset_START          (2)
#define SOC_MMC_CTRL_dma_reset_END            (2)
#define SOC_MMC_CTRL_int_enable_START         (4)
#define SOC_MMC_CTRL_int_enable_END           (4)
#define SOC_MMC_CTRL_dma_enable_START         (5)
#define SOC_MMC_CTRL_dma_enable_END           (5)
#define SOC_MMC_CTRL_read_wait_START          (6)
#define SOC_MMC_CTRL_read_wait_END            (6)
#define SOC_MMC_CTRL_send_irq_response_START  (7)
#define SOC_MMC_CTRL_send_irq_response_END    (7)
#define SOC_MMC_CTRL_abort_read_data_START    (8)
#define SOC_MMC_CTRL_abort_read_data_END      (8)
#define SOC_MMC_CTRL_use_internal_dmac_START  (25)
#define SOC_MMC_CTRL_use_internal_dmac_END    (25)


/*****************************************************************************
 �ṹ��    : SOC_MMC_CLKDIV_UNION
 �ṹ˵��  : CLKDIV �Ĵ����ṹ���塣��ַƫ����:0x0008����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ӿ�ʱ�ӷ�Ƶ���ӼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_divider : 8;  /* bit[0-7] : �ӿ�ʱ�ӷ�Ƶϵ����ż����Ƶ��
                                                      ��0x0Ϊ�޷�Ƶ��0x1Ϊ2��Ƶ��0xFFΪ510��Ƶ��
                                                      ֻ�е�MMC_CMD[start_cmd]��MMC_CMD[Update_clk_only]��1�����Ĵ�����ֵ�Żᱻ���롣 */
        unsigned int  reserved    : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_MMC_CLKDIV_UNION;
#endif
#define SOC_MMC_CLKDIV_clk_divider_START  (0)
#define SOC_MMC_CLKDIV_clk_divider_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_MMC_CLKENA_UNION
 �ṹ˵��  : CLKENA �Ĵ����ṹ���塣��ַƫ����:0x0010����ֵ:0x00000000�����:32
 �Ĵ���˵��: MMC�ӿ�ʱ��ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cclk_enable    : 1;  /* bit[0]    : ����ʱ��ʹ�ܿ��ơ�
                                                          0��ʱ�ӹرգ�
                                                          1��ʱ��ʹ�ܡ� */
        unsigned int  reserved       : 15; /* bit[1-15] : ������ */
        unsigned int  cclk_low_power : 16; /* bit[16-31]: ���ĵ͹��Ŀ��ơ�
                                                          0���ǵ͹���ģʽ��
                                                          1���͹���ģʽ��
                                                          ��������IDLE״̬���������Զ��رսӿ�ʱ�ӡ��ù���һ��ֻʹ����MMC��SD�洢���� */
    } reg;
} SOC_MMC_CLKENA_UNION;
#endif
#define SOC_MMC_CLKENA_cclk_enable_START     (0)
#define SOC_MMC_CLKENA_cclk_enable_END       (0)
#define SOC_MMC_CLKENA_cclk_low_power_START  (16)
#define SOC_MMC_CLKENA_cclk_low_power_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MMC_TMOUT_UNION
 �ṹ˵��  : TMOUT �Ĵ����ṹ���塣��ַƫ����:0x0014����ֵ:0xFFFFFF40�����:32
 �Ĵ���˵��: ��ʱ�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  response_timeout : 8;  /* bit[0-7] : ��Ӧ��ʱ��������λΪ�ӿ�ʱ�����ڣ�����ֵΪ0xFF�� */
        unsigned int  data_timeout     : 24; /* bit[8-31]: ���ݶ�������ʱ��������ֵҲ��data starvation�жϳ�ʱ��������λΪ�ӿ�ʱ�����ڣ���������Ϊ0xFF_FFFF�� */
    } reg;
} SOC_MMC_TMOUT_UNION;
#endif
#define SOC_MMC_TMOUT_response_timeout_START  (0)
#define SOC_MMC_TMOUT_response_timeout_END    (7)
#define SOC_MMC_TMOUT_data_timeout_START      (8)
#define SOC_MMC_TMOUT_data_timeout_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_MMC_CTYPE_UNION
 �ṹ˵��  : CTYPE �Ĵ����ṹ���塣��ַƫ����:0x0018����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ӿ�λ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  card_width_l : 1;  /* bit[0]    : ���ÿ��ӿڵ����߿�ȡ�
                                                        0��1bitģʽ��
                                                        1��4bitģʽ�� */
        unsigned int  reserved_0   : 15; /* bit[1-15] : ������ */
        unsigned int  card_width   : 1;  /* bit[16]   : ���ÿ������߿�ȡ�
                                                        0���� 8-bit ģʽ
                                                        1��8-bit ģʽ */
        unsigned int  reserved_1   : 15; /* bit[17-31]: ������ */
    } reg;
} SOC_MMC_CTYPE_UNION;
#endif
#define SOC_MMC_CTYPE_card_width_l_START  (0)
#define SOC_MMC_CTYPE_card_width_l_END    (0)
#define SOC_MMC_CTYPE_card_width_START    (16)
#define SOC_MMC_CTYPE_card_width_END      (16)


/*****************************************************************************
 �ṹ��    : SOC_MMC_BLKSIZ_UNION
 �ṹ˵��  : BLKSIZ �Ĵ����ṹ���塣��ַƫ����:0x001C����ֵ:0x00000200�����:32
 �Ĵ���˵��: ���С���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  block_size : 16; /* bit[0-15] : ���С���á�
                                                      ������Ϊ0x0200����ʾ���СΪ512byte�� */
        unsigned int  reserved   : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_MMC_BLKSIZ_UNION;
#endif
#define SOC_MMC_BLKSIZ_block_size_START  (0)
#define SOC_MMC_BLKSIZ_block_size_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_MMC_BYTCNT_UNION
 �ṹ˵��  : BYTCNT �Ĵ����ṹ���塣��ַƫ����:0x0020����ֵ:0x00000200�����:32
 �Ĵ���˵��: �������ݴ�С�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  byte_count : 32; /* bit[0-31]: �����������ֽ�����
                                                     ������Ϊ0x0200����ʾ����������Ϊ512byte���鴫�䷽ʽʱӦ������Ϊblock size���������� */
    } reg;
} SOC_MMC_BYTCNT_UNION;
#endif
#define SOC_MMC_BYTCNT_byte_count_START  (0)
#define SOC_MMC_BYTCNT_byte_count_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MMC_INTMASK_UNION
 �ṹ˵��  : INTMASK �Ĵ����ṹ���塣��ַƫ����:0x0024����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж����μĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0    : 1;  /* bit[0]    : ������ */
        unsigned int  re_int_mask   : 1;  /* bit[1]    : RE��Response Error���ж����Ρ�
                                                         0�����θ��жϣ�
                                                         1�������θ��жϡ� */
        unsigned int  dd_int_mask   : 1;  /* bit[2]    : CD��Command Done���ж����Ρ�
                                                         0�����θ��жϣ�
                                                         1�������θ��жϡ� */
        unsigned int  dto_int_mask  : 1;  /* bit[3]    : DTO��Data Transfer Over���ж����Ρ�
                                                         0�����θ��жϣ�
                                                         1�������θ��жϡ� */
        unsigned int  txdr_int_mask : 1;  /* bit[4]    : TXDR��Transmit FIFO Data Request���ж����Ρ�
                                                         0�����θ��жϣ�
                                                         1�������θ��жϡ� */
        unsigned int  rxdr_int_mask : 1;  /* bit[5]    : RXDR��Receive FIFO Data Request���ж����Ρ�
                                                         0�����θ��жϣ�
                                                         1�������θ��жϡ� */
        unsigned int  rcrc_int_mask : 1;  /* bit[6]    : RCRC��Response CRC error���ж����Ρ�
                                                         0�����θ��жϣ�
                                                         1�������θ��жϡ� */
        unsigned int  dcrc_int_mask : 1;  /* bit[7]    : DCRC��Data CRC error���ж����Ρ�
                                                         0�����θ��жϣ�
                                                         1�������θ��жϡ� */
        unsigned int  rto_int_mask  : 1;  /* bit[8]    : RTO��Response Timeout���ж����Ρ�
                                                         0�����θ��жϣ�
                                                         1�������θ��жϡ� */
        unsigned int  drto_int_mask : 1;  /* bit[9]    : DRTO��Data Read Timeout���ж����Ρ�
                                                         0�����θ��жϣ�
                                                         1�������θ��жϡ� */
        unsigned int  hto_int_mask  : 1;  /* bit[10]   : HTO��Data starvation-by-host timeout /Volt_Switch_int���ж����Ρ�
                                                         0�����θ��жϣ�
                                                         1�������θ��жϡ� */
        unsigned int  frun_int_mask : 1;  /* bit[11]   : FRUN��FIFO underrun/overrun error���ж����Ρ�
                                                         0�����θ��жϣ�
                                                         1�������θ��жϡ� */
        unsigned int  hle_int_mask  : 1;  /* bit[12]   : HLE��Hardware Locked Write Error���ж����Ρ�
                                                         0�����θ��жϣ�
                                                         1�������θ��жϡ� */
        unsigned int  sbe_int_mask  : 1;  /* bit[13]   : SBE��Start-bit Error���ж����Ρ�
                                                         0�����θ��жϣ�
                                                         1�������θ��жϡ� */
        unsigned int  acd_int_mask  : 1;  /* bit[14]   : ACD��Auto Command Done���ж����Ρ�
                                                         0�����θ��жϣ�
                                                         1�������θ��жϡ� */
        unsigned int  ebe_int_mask  : 1;  /* bit[15]   : EBE��End-bit error���ж����Ρ�
                                                         0�����θ��жϣ�
                                                         1�������θ��жϡ� */
        unsigned int  sdio_int_mask : 1;  /* bit[16]   : SDIO �ж����Ρ�
                                                         0�����θ��жϣ�
                                                         1�������θ��жϡ� */
        unsigned int  reserved_1    : 15; /* bit[17-31]: ������ */
    } reg;
} SOC_MMC_INTMASK_UNION;
#endif
#define SOC_MMC_INTMASK_re_int_mask_START    (1)
#define SOC_MMC_INTMASK_re_int_mask_END      (1)
#define SOC_MMC_INTMASK_dd_int_mask_START    (2)
#define SOC_MMC_INTMASK_dd_int_mask_END      (2)
#define SOC_MMC_INTMASK_dto_int_mask_START   (3)
#define SOC_MMC_INTMASK_dto_int_mask_END     (3)
#define SOC_MMC_INTMASK_txdr_int_mask_START  (4)
#define SOC_MMC_INTMASK_txdr_int_mask_END    (4)
#define SOC_MMC_INTMASK_rxdr_int_mask_START  (5)
#define SOC_MMC_INTMASK_rxdr_int_mask_END    (5)
#define SOC_MMC_INTMASK_rcrc_int_mask_START  (6)
#define SOC_MMC_INTMASK_rcrc_int_mask_END    (6)
#define SOC_MMC_INTMASK_dcrc_int_mask_START  (7)
#define SOC_MMC_INTMASK_dcrc_int_mask_END    (7)
#define SOC_MMC_INTMASK_rto_int_mask_START   (8)
#define SOC_MMC_INTMASK_rto_int_mask_END     (8)
#define SOC_MMC_INTMASK_drto_int_mask_START  (9)
#define SOC_MMC_INTMASK_drto_int_mask_END    (9)
#define SOC_MMC_INTMASK_hto_int_mask_START   (10)
#define SOC_MMC_INTMASK_hto_int_mask_END     (10)
#define SOC_MMC_INTMASK_frun_int_mask_START  (11)
#define SOC_MMC_INTMASK_frun_int_mask_END    (11)
#define SOC_MMC_INTMASK_hle_int_mask_START   (12)
#define SOC_MMC_INTMASK_hle_int_mask_END     (12)
#define SOC_MMC_INTMASK_sbe_int_mask_START   (13)
#define SOC_MMC_INTMASK_sbe_int_mask_END     (13)
#define SOC_MMC_INTMASK_acd_int_mask_START   (14)
#define SOC_MMC_INTMASK_acd_int_mask_END     (14)
#define SOC_MMC_INTMASK_ebe_int_mask_START   (15)
#define SOC_MMC_INTMASK_ebe_int_mask_END     (15)
#define SOC_MMC_INTMASK_sdio_int_mask_START  (16)
#define SOC_MMC_INTMASK_sdio_int_mask_END    (16)


/*****************************************************************************
 �ṹ��    : SOC_MMC_CMDARG_UNION
 �ṹ˵��  : CMDARG �Ĵ����ṹ���塣��ַƫ����:0x0028����ֵ:0x00000000�����:32
 �Ĵ���˵��: ָ������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cmd_arg : 32; /* bit[0-31]: ���ô��������ָ�������
                                                  ָ�������Э����أ�ÿ��ָ���Ӧһ�������ָ������� */
    } reg;
} SOC_MMC_CMDARG_UNION;
#endif
#define SOC_MMC_CMDARG_cmd_arg_START  (0)
#define SOC_MMC_CMDARG_cmd_arg_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MMC_CMD_UNION
 �ṹ˵��  : CMD �Ĵ����ṹ���塣��ַƫ����:0x002C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ָ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cmd_index                   : 6;  /* bit[0-5]  : ָ����š� */
        unsigned int  response_expect             : 1;  /* bit[6]    : ������Ӧָ��ѡ��
                                                                       0������Ӧָ�
                                                                       1������Ӧָ� */
        unsigned int  response_length             : 1;  /* bit[7]    : ��Ӧ���ȡ�
                                                                       0������Ӧָ�
                                                                       1������Ӧָ�
                                                                       ��response��128bit����response��32bit�� */
        unsigned int  check_repsonse_crc          : 1;  /* bit[8]    : CRC��顣
                                                                       0�������ָ����ӦCRC��
                                                                       1�����ָ����ӦCRC��
                                                                       һЩָ��ظ�û�з�����Ч��CRC��Ϊ�˽�ֹ��������CRC���м�飬�����Ҫ�����Щָ���ֹ�ù��ܡ� */
        unsigned int  data_transfer_expected      : 1;  /* bit[9]    : ָ�����͡�
                                                                       0��������ָ�
                                                                       1������ָ� */
        unsigned int  read_write                  : 1;  /* bit[10]   : ��д���ơ�
                                                                       0���ӿ���ȡ���ݣ�
                                                                       1������д���ݡ�
                                                                       �ڷ����ݴ���ʱ����λ�����ԡ� */
        unsigned int  transfer_mode               : 1;  /* bit[11]   : ����ģʽ��
                                                                       0�����ڿ��дָ�
                                                                       1�����������ݶ�дָ�
                                                                       �ڷ����ݴ���ʱ����λ�����ԡ� */
        unsigned int  send_auto_stop              : 1;  /* bit[12]   : �Զ�ֹͣ����ָ����ơ�
                                                                       0�����ݴ����Ժ󲻻ᷢ��ָֹͣ�
                                                                       1�����ݴ����Ժ���ָֹͣ�
                                                                       ����ʹ���Ժ󣬿�������ÿ�����ݴ������Ժ�ͻ��Զ��ͳ�ָֹͣ�
                                                                       predefined block count��ʽ��cmd53�Ȳ�Ҫָֹͣ�
                                                                       open-ended���䷽ʽ��Ҫָֹͣ�
                                                                       �ڷ����ݴ���ʱ����λ�����ԡ� */
        unsigned int  wait_prvdata_complete       : 1;  /* bit[13]   : ָ���ʱ��ѡ��
                                                                       0����������ָ���ʹǰһ�����ݴ��仹û��ɣ���
                                                                       1���ȵ�ǰһ�����ݴ�����ɺ�ſ�ʼ����ָ�
                                                                       ��ָ���ʱ����λ����Ϊ0�����������ݴ���ʱ��ȡ��״̬����ֹ���δ��䡣 */
        unsigned int  stop_abort_cmd              : 1;  /* bit[14]   : ���ݶ�д״̬����λ����λ��
                                                                       0����Ӱ�죻
                                                                       1�������ݴ�������з���ָֹͣ���쳣��ֹ���δ���ʱ����λ��1�����ڽ������������ݴ���״̬�ָ���IDLE״̬�� */
        unsigned int  send_initialization         : 1;  /* bit[15]   : ���ͳ�ʼ�����ơ�
                                                                       0���ڷ��͸�ָ��ǰ��Ҫ�ͳ���ʼ���У�
                                                                       1���ڷ��͸�ָ��ǰ�ͳ���ʼ���У�80��ʱ�����ڣ���
                                                                       ���ϵ��Ժ󣬿���Ҫ80��ʱ�����ڽ��г�ʼ���������Ҫ���������͵�һ��ָ��ʱ���ø�λ�� */
        unsigned int  card_number                 : 5;  /* bit[16-20]: ����ʹ�õĿ�����ţ�Ӧ����Ϊ0�� */
        unsigned int  update_clock_registes_only_ : 1;  /* bit[21]   : ָ��˳����ơ�
                                                                       0������ָ��˳��
                                                                       1�������������������ӿ�ʱ�ӿ��ƼĴ�����MMC_CLKDIV��MMC_CLKENA����ֵ���ڲ���Ҫ��ָ�������ǰ���£����������ӿ�ʱ�ӵ�Ƶ�ʺͿ��ƽӿ�ʱ�ӵĿ��ء�
                                                                       ����������˳���У�����λ��Ϊ0������ļĴ���ֵ�ᱻ���������룺MMC_CMD��MMC_CMDARG��MMC_TMOUT��MMC_CTYPE��MMC_BLKSIZ��MMC_BYTCNT�����������µļĴ���ֵʹ�õ��µ�ָ����ȥ��
                                                                       �����bit��Ϊ1��ָ��ᴫ�����У��������Command Done�жϡ� */
        unsigned int  reserved_0                  : 2;  /* bit[22-23]: ������ */
        unsigned int  enable_boot                 : 1;  /* bit[24]   : ʹ��Bootģʽ����Bitֻ��[mandatory boot mode]����Ч������Bit��[start_cmd]һ����λʱ��CIU��ͨ������CMD�ź�������Boot���������ܽ�[disable_boot]��[enable_boot]ͬʱ��λ�� */
        unsigned int  expect_boot_ack             : 1;  /* bit[25]   : ʹ��BootӦ�𡣵���Bit��[enable_boot]һ����λʱ��CIU�����豸���͹����ԡ�0-1-0��Ϊ��ʼ��ʽ��Ӧ���źš� */
        unsigned int  disable_boot                : 1;  /* bit[26]   : ��ʹ��Bootģʽ������Bit��[start_cmd]һ����λʱ��CIU����ֹBoot���������ܽ�[disable_boot]��[enable_boot]ͬʱ��λ�� */
        unsigned int  boot_mode                   : 1;  /* bit[27]   : Bootģʽѡ��
                                                                       0��mandatory boot mode��
                                                                       1��alternative boot mode�� */
        unsigned int  volt_switch                 : 1;  /* bit[28]   : ���Ƶ�ѹ�л�
                                                                       0��û�е�ѹ�л�
                                                                       1����ѹ�л�ʹ�� */
        unsigned int  use_hold_reg                : 1;  /* bit[29]   : Hold �Ĵ���
                                                                       0��CMD��DATA���Ͳ���Ҫ����hold�Ĵ����ӳ١�
                                                                       1��CMD��DATA������Ҫ����hold�Ĵ����ӳ١�
                                                                       ��ʹ��SDR12��SDR25ģʽʱ��Ҫ���˼Ĵ�������Ϊ1��ʹ��SDR50��SDR100�ȸ���ģʽʱ��Ҫ���˼Ĵ�������Ϊ0�� */
        unsigned int  reserved_1                  : 1;  /* bit[30]   : ������ */
        unsigned int  start_cmd                   : 1;  /* bit[31]   : ָ��ִ�л���ؽӿ�ʱ�Ӳ�������λ��
                                                                       ��[update_clk_register_only]λ���ʹ�ã���[update_clk_register_only]Ϊ0ʱ����λ��1����������ָ��ִ�У���[update_clk_reg_only]Ϊ1ʱ����λ��1�����ڼ��ؽӿ�ʱ�Ӳ�����
                                                                       ��ָ�ִ�л�ʱ�Ӳ��������룬��bit�Զ���0������bitΪ1ʱ��CPU�������޸�ʱ�Ӻ�ָ����صļĴ���������޸ģ�hardware lock error�жϾͻ������ */
    } reg;
} SOC_MMC_CMD_UNION;
#endif
#define SOC_MMC_CMD_cmd_index_START                    (0)
#define SOC_MMC_CMD_cmd_index_END                      (5)
#define SOC_MMC_CMD_response_expect_START              (6)
#define SOC_MMC_CMD_response_expect_END                (6)
#define SOC_MMC_CMD_response_length_START              (7)
#define SOC_MMC_CMD_response_length_END                (7)
#define SOC_MMC_CMD_check_repsonse_crc_START           (8)
#define SOC_MMC_CMD_check_repsonse_crc_END             (8)
#define SOC_MMC_CMD_data_transfer_expected_START       (9)
#define SOC_MMC_CMD_data_transfer_expected_END         (9)
#define SOC_MMC_CMD_read_write_START                   (10)
#define SOC_MMC_CMD_read_write_END                     (10)
#define SOC_MMC_CMD_transfer_mode_START                (11)
#define SOC_MMC_CMD_transfer_mode_END                  (11)
#define SOC_MMC_CMD_send_auto_stop_START               (12)
#define SOC_MMC_CMD_send_auto_stop_END                 (12)
#define SOC_MMC_CMD_wait_prvdata_complete_START        (13)
#define SOC_MMC_CMD_wait_prvdata_complete_END          (13)
#define SOC_MMC_CMD_stop_abort_cmd_START               (14)
#define SOC_MMC_CMD_stop_abort_cmd_END                 (14)
#define SOC_MMC_CMD_send_initialization_START          (15)
#define SOC_MMC_CMD_send_initialization_END            (15)
#define SOC_MMC_CMD_card_number_START                  (16)
#define SOC_MMC_CMD_card_number_END                    (20)
#define SOC_MMC_CMD_update_clock_registes_only__START  (21)
#define SOC_MMC_CMD_update_clock_registes_only__END    (21)
#define SOC_MMC_CMD_enable_boot_START                  (24)
#define SOC_MMC_CMD_enable_boot_END                    (24)
#define SOC_MMC_CMD_expect_boot_ack_START              (25)
#define SOC_MMC_CMD_expect_boot_ack_END                (25)
#define SOC_MMC_CMD_disable_boot_START                 (26)
#define SOC_MMC_CMD_disable_boot_END                   (26)
#define SOC_MMC_CMD_boot_mode_START                    (27)
#define SOC_MMC_CMD_boot_mode_END                      (27)
#define SOC_MMC_CMD_volt_switch_START                  (28)
#define SOC_MMC_CMD_volt_switch_END                    (28)
#define SOC_MMC_CMD_use_hold_reg_START                 (29)
#define SOC_MMC_CMD_use_hold_reg_END                   (29)
#define SOC_MMC_CMD_start_cmd_START                    (31)
#define SOC_MMC_CMD_start_cmd_END                      (31)


/*****************************************************************************
 �ṹ��    : SOC_MMC_RESP0_UNION
 �ṹ˵��  : RESP0 �Ĵ����ṹ���塣��ַƫ����:0x0030����ֵ:0x00000000�����:32
 �Ĵ���˵��: ָ����Ӧ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  response0 : 32; /* bit[0-31]: 48bit����Ӧ��bit[39:8]��136bit����Ӧ��bit[31:0]�� */
    } reg;
} SOC_MMC_RESP0_UNION;
#endif
#define SOC_MMC_RESP0_response0_START  (0)
#define SOC_MMC_RESP0_response0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MMC_RESP1_UNION
 �ṹ˵��  : RESP1 �Ĵ����ṹ���塣��ַƫ����:0x0034����ֵ:0x00000000�����:32
 �Ĵ���˵��: ָ����Ӧ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  response1 : 32; /* bit[0-31]: ָ���Ӧbit[63:32]�������auto-stopָ�����Ӧ��
                                                    ������������auto-stopָ���Ӧ��bit[39:8]�ͻᱻ�����ڱ��Ĵ�������һ��ָ�����Ӧ��Ȼ�ᱻ������MMC_RESP0�Ĵ����ڡ�Auto-stopֻ�����ݴ���ʹ�ã����һظ����������Ƕ���Ӧ�� */
    } reg;
} SOC_MMC_RESP1_UNION;
#endif
#define SOC_MMC_RESP1_response1_START  (0)
#define SOC_MMC_RESP1_response1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MMC_RESP2_UNION
 �ṹ˵��  : RESP2 �Ĵ����ṹ���塣��ַƫ����:0x0038����ֵ:0x00000000�����:32
 �Ĵ���˵��: ָ����Ӧ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  response2 : 32; /* bit[0-31]: ָ���Ӧ��bit[95:64]�� */
    } reg;
} SOC_MMC_RESP2_UNION;
#endif
#define SOC_MMC_RESP2_response2_START  (0)
#define SOC_MMC_RESP2_response2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MMC_RESP3_UNION
 �ṹ˵��  : RESP3 �Ĵ����ṹ���塣��ַƫ����:0x003C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ָ����Ӧ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  response3 : 32; /* bit[0-31]: ָ���Ӧbit[127:96]�� */
    } reg;
} SOC_MMC_RESP3_UNION;
#endif
#define SOC_MMC_RESP3_response3_START  (0)
#define SOC_MMC_RESP3_response3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MMC_MINTSTS_UNION
 �ṹ˵��  : MINTSTS �Ĵ����ṹ���塣��ַƫ����:0x0040����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���κ���ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0: 1;  /* bit[0]    : ������ */
        unsigned int  re_int   : 1;  /* bit[1]    : RE��Response Error���ж����Ρ�
                                                    0��δ�����жϣ�
                                                    1���Ѳ����жϡ� */
        unsigned int  dd_int   : 1;  /* bit[2]    : CD��Command Done���ж����Ρ�
                                                    0��δ�����жϣ�
                                                    1���Ѳ����жϡ� */
        unsigned int  dto_int  : 1;  /* bit[3]    : DTO��Data Transfer Over���ж����Ρ�
                                                    0��δ�����жϣ�
                                                    1���Ѳ����жϡ� */
        unsigned int  txdr_int : 1;  /* bit[4]    : TXDR��Transmit FIFO Data Request���ж����Ρ�
                                                    0��δ�����жϣ�
                                                    1���Ѳ����жϡ� */
        unsigned int  rxdr_int : 1;  /* bit[5]    : RXDR��Receive FIFO Data Request���ж����Ρ�
                                                    0��δ�����жϣ�
                                                    1���Ѳ����жϡ� */
        unsigned int  rcrc_int : 1;  /* bit[6]    : RCRC��Response CRC error���ж����Ρ�
                                                    0��δ�����жϣ�
                                                    1���Ѳ����жϡ� */
        unsigned int  dcrc_int : 1;  /* bit[7]    : DCRC��Data CRC error���ж����Ρ�
                                                    0��δ�����жϣ�
                                                    1���Ѳ����жϡ� */
        unsigned int  rto_int  : 1;  /* bit[8]    : RTO��Response Timeout���ж����Ρ�
                                                    0��δ�����жϣ�
                                                    1���Ѳ����жϡ� */
        unsigned int  drto_int : 1;  /* bit[9]    : DRTO��Data Read Timeout���ж����Ρ�
                                                    0��δ�����жϣ�
                                                    1���Ѳ����жϡ� */
        unsigned int  hto_int  : 1;  /* bit[10]   : HTO��Data starvation-by-host timeout/Volt_switch_int���ж����Ρ�
                                                    0��δ�����жϣ�
                                                    1���Ѳ����жϡ� */
        unsigned int  frun_int : 1;  /* bit[11]   : FRUN��FIFO underrun/overrun error���ж����Ρ�
                                                    0��δ�����жϣ�
                                                    1���Ѳ����жϡ� */
        unsigned int  hle_int  : 1;  /* bit[12]   : HLE��Hardware Locked Write Error���ж����Ρ�
                                                    0��δ�����жϣ�
                                                    1���Ѳ����жϡ� */
        unsigned int  sbe_int  : 1;  /* bit[13]   : SBE��Start-bit Error���ж����Ρ�
                                                    0��δ�����жϣ�
                                                    1���Ѳ����жϡ� */
        unsigned int  acd_int  : 1;  /* bit[14]   : ACD��Auto Command Done���ж����Ρ�
                                                    0��δ�����жϣ�
                                                    1���Ѳ����жϡ� */
        unsigned int  ebe_int  : 1;  /* bit[15]   : EBE��End-bit error���ж����Ρ�
                                                    0��δ�����жϣ�
                                                    1���Ѳ����жϡ� */
        unsigned int  sdio_int : 1;  /* bit[16]   : SDIO�жϡ�
                                                    0����SDIO�жϴӿ������
                                                    1����SDIO�жϴӿ������ */
        unsigned int  reserved_1: 15; /* bit[17-31]: ������ */
    } reg;
} SOC_MMC_MINTSTS_UNION;
#endif
#define SOC_MMC_MINTSTS_re_int_START    (1)
#define SOC_MMC_MINTSTS_re_int_END      (1)
#define SOC_MMC_MINTSTS_dd_int_START    (2)
#define SOC_MMC_MINTSTS_dd_int_END      (2)
#define SOC_MMC_MINTSTS_dto_int_START   (3)
#define SOC_MMC_MINTSTS_dto_int_END     (3)
#define SOC_MMC_MINTSTS_txdr_int_START  (4)
#define SOC_MMC_MINTSTS_txdr_int_END    (4)
#define SOC_MMC_MINTSTS_rxdr_int_START  (5)
#define SOC_MMC_MINTSTS_rxdr_int_END    (5)
#define SOC_MMC_MINTSTS_rcrc_int_START  (6)
#define SOC_MMC_MINTSTS_rcrc_int_END    (6)
#define SOC_MMC_MINTSTS_dcrc_int_START  (7)
#define SOC_MMC_MINTSTS_dcrc_int_END    (7)
#define SOC_MMC_MINTSTS_rto_int_START   (8)
#define SOC_MMC_MINTSTS_rto_int_END     (8)
#define SOC_MMC_MINTSTS_drto_int_START  (9)
#define SOC_MMC_MINTSTS_drto_int_END    (9)
#define SOC_MMC_MINTSTS_hto_int_START   (10)
#define SOC_MMC_MINTSTS_hto_int_END     (10)
#define SOC_MMC_MINTSTS_frun_int_START  (11)
#define SOC_MMC_MINTSTS_frun_int_END    (11)
#define SOC_MMC_MINTSTS_hle_int_START   (12)
#define SOC_MMC_MINTSTS_hle_int_END     (12)
#define SOC_MMC_MINTSTS_sbe_int_START   (13)
#define SOC_MMC_MINTSTS_sbe_int_END     (13)
#define SOC_MMC_MINTSTS_acd_int_START   (14)
#define SOC_MMC_MINTSTS_acd_int_END     (14)
#define SOC_MMC_MINTSTS_ebe_int_START   (15)
#define SOC_MMC_MINTSTS_ebe_int_END     (15)
#define SOC_MMC_MINTSTS_sdio_int_START  (16)
#define SOC_MMC_MINTSTS_sdio_int_END    (16)


/*****************************************************************************
 �ṹ��    : SOC_MMC_RINTSTS_UNION
 �ṹ˵��  : RINTSTS �Ĵ����ṹ���塣��ַƫ����:0x0044����ֵ:0x00000000�����:32
 �Ĵ���˵��: ԭʼ�ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0      : 1;  /* bit[0]    : ������ */
        unsigned int  re_int_status   : 1;  /* bit[1]    : ����ǰ��RE��Response Error���жϡ�
                                                           0��δ�����жϣ�
                                                           1���յ���ָ����Ӧ�д���ʱ�����жϲ����� */
        unsigned int  dd_int_status   : 1;  /* bit[2]    : ����ǰ��CD��Command Done���жϡ�
                                                           0��δ�����жϣ�
                                                           1������ִ����ϲ��յ���Ӧ�����жϡ���ʹ����response error��response CRC error��response timeout�����ж���Ȼ������ */
        unsigned int  dto_int_status  : 1;  /* bit[3]    : ���κ��DTO��Data Transfer Over���жϡ�
                                                           0��δ�����жϣ�
                                                           1�����ݴ�������жϡ���ʹ������Start Bit Error��CRC error��Read Data Timeout�����ж���Ȼ������ */
        unsigned int  txdr_int_status : 1;  /* bit[4]    : ����ǰ��TXDR��Transmit FIFO Data Request���жϡ�
                                                           0��δ�����жϣ�
                                                           1��������д����ʱ��FIFO���������ڻ����FIFOд��ֵtx_wmarkʱ�����жϡ�ʹ��DMA�������ݴ���ʱ��Ӧ���θ��жϡ� */
        unsigned int  rxdr_int_status : 1;  /* bit[5]    : ����ǰ��RXDR��Receive FIFO Data Request���жϡ�
                                                           0��δ�����жϣ�
                                                           1�����ӿ�������ʱ��FIFO�����ݶ���FIFO����ֵrx_wmarkʱ�����жϡ�ʹ��DMA�������ݴ���ʱ��Ӧ���θ��жϡ� */
        unsigned int  rcrc_int_status : 1;  /* bit[6]    : ����ǰ��RCRC��Response CRC error���жϡ�
                                                           0��δ�����жϣ�
                                                           1��ָ����ӦCRCУ������жϡ� */
        unsigned int  dcrc_int_status : 1;  /* bit[7]    : ����ǰ��DCRC��Data CRC error���жϡ�
                                                           0��δ�����жϣ�
                                                           1����������CRCУ������жϡ� */
        unsigned int  rto_int_status  : 1;  /* bit[8]    : ����ǰRTO��Response Timeout���жϡ�
                                                           0��δ�����жϣ�
                                                           1��ָ����Ӧ��ʱ�жϣ�δ�յ���Ӧ���� */
        unsigned int  drto_int_status : 1;  /* bit[9]    : ����ǰ��DRTO��Data Read Timeout���жϡ�
                                                           0��δ�����жϣ�
                                                           1���������ݳ�ʱ�жϡ� */
        unsigned int  hto_int_status  : 1;  /* bit[10]   : ����ǰ��Data starvation-by-host timeout/Volt_switch_int��HTO���жϡ�
                                                           0��δ�����жϣ�
                                                           1��Ϊ�˷�ֹ���ݶ�ʧ������ڷ������ݸ���ʱFIFO�ǿյģ���ӿ���������ʱFIFO�����ģ����������ʱ�ӣ�MMC_CCLK���ᱻֹͣ����ʱ�ӱ�ֹͣ��data-starvation�������ͻ�����������������������������ʱϵͳ��Ȼû�����յ�FIFOд���ݻ������FIFO�����ݣ����жϲ�������ʱ����Ҫϵͳ��FIFO���ж�д���������ʱ�ӲŻ����������� */
        unsigned int  frun_int_status : 1;  /* bit[11]   : ����ǰ��FRUN��FIFO underrun/overrun error���жϡ�
                                                           0��δ�����жϣ�
                                                           1����FIFO��ʱ����FIFOд���ݣ���FIFO��ʱ�Դ�FIFO������ʱ���жϲ����� */
        unsigned int  hle_int_status  : 1;  /* bit[12]   : ����ǰ��HLE��Hardware Locked Write Error���жϡ�
                                                           0��δ�����жϣ�
                                                           1����Ӳ�������Ĵ���ֵʱ������ͼ����Щ�Ĵ�������д������ */
        unsigned int  sbe_int_status  : 1;  /* bit[13]   : ����ǰ��SBE��Start-bit Error���жϡ�
                                                           0��δ�����жϣ�
                                                           1�����ӿ���ȡ����ʱ�����ݵ�start bit�����жϡ���4bitģʽ�£�������ݶ�û��start bit�����жϲ����� */
        unsigned int  acd_int_status  : 1;  /* bit[14]   : ����ǰ��ACD�жϡ�
                                                           0��δ�����жϣ�
                                                           1���������Զ����͵�auto-stopָ��ִ���жϡ� */
        unsigned int  ebe_int_status  : 1;  /* bit[15]   : ����ǰ��EBE��End-bit error (read/Write�� no CRC���жϡ�
                                                           0��δ�����жϣ�
                                                           1��������ʱ����end bit����д����ʱ��δ����CRC״̬�򷵻ظ���CRC״̬ʱ�����жϲ����� */
        unsigned int  sdio_int_status : 1;  /* bit[16]   : SDIO�жϡ�
                                                           0����SDIO�жϴӿ������
                                                           1����SDIO�жϴӿ������
                                                           �ж�״̬λ����interrupt mask�޹ء� */
        unsigned int  reserved_1      : 15; /* bit[17-31]: ������ */
    } reg;
} SOC_MMC_RINTSTS_UNION;
#endif
#define SOC_MMC_RINTSTS_re_int_status_START    (1)
#define SOC_MMC_RINTSTS_re_int_status_END      (1)
#define SOC_MMC_RINTSTS_dd_int_status_START    (2)
#define SOC_MMC_RINTSTS_dd_int_status_END      (2)
#define SOC_MMC_RINTSTS_dto_int_status_START   (3)
#define SOC_MMC_RINTSTS_dto_int_status_END     (3)
#define SOC_MMC_RINTSTS_txdr_int_status_START  (4)
#define SOC_MMC_RINTSTS_txdr_int_status_END    (4)
#define SOC_MMC_RINTSTS_rxdr_int_status_START  (5)
#define SOC_MMC_RINTSTS_rxdr_int_status_END    (5)
#define SOC_MMC_RINTSTS_rcrc_int_status_START  (6)
#define SOC_MMC_RINTSTS_rcrc_int_status_END    (6)
#define SOC_MMC_RINTSTS_dcrc_int_status_START  (7)
#define SOC_MMC_RINTSTS_dcrc_int_status_END    (7)
#define SOC_MMC_RINTSTS_rto_int_status_START   (8)
#define SOC_MMC_RINTSTS_rto_int_status_END     (8)
#define SOC_MMC_RINTSTS_drto_int_status_START  (9)
#define SOC_MMC_RINTSTS_drto_int_status_END    (9)
#define SOC_MMC_RINTSTS_hto_int_status_START   (10)
#define SOC_MMC_RINTSTS_hto_int_status_END     (10)
#define SOC_MMC_RINTSTS_frun_int_status_START  (11)
#define SOC_MMC_RINTSTS_frun_int_status_END    (11)
#define SOC_MMC_RINTSTS_hle_int_status_START   (12)
#define SOC_MMC_RINTSTS_hle_int_status_END     (12)
#define SOC_MMC_RINTSTS_sbe_int_status_START   (13)
#define SOC_MMC_RINTSTS_sbe_int_status_END     (13)
#define SOC_MMC_RINTSTS_acd_int_status_START   (14)
#define SOC_MMC_RINTSTS_acd_int_status_END     (14)
#define SOC_MMC_RINTSTS_ebe_int_status_START   (15)
#define SOC_MMC_RINTSTS_ebe_int_status_END     (15)
#define SOC_MMC_RINTSTS_sdio_int_status_START  (16)
#define SOC_MMC_RINTSTS_sdio_int_status_END    (16)


/*****************************************************************************
 �ṹ��    : SOC_MMC_STATUS_UNION
 �ṹ˵��  : STATUS �Ĵ����ṹ���塣��ַƫ����:0x0048����ֵ:0x00000506�����:32
 �Ĵ���˵��: MMC״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  fifo_rx_watermark  : 1;  /* bit[0]    : FIFO�Ƿ񵽴�Receive watermark level��
                                                              0��δ�ﵽˮ�ߣ�
                                                              1���ﵽˮ�ߡ� */
        unsigned int  fifo_tx_watermark  : 1;  /* bit[1]    : FIFO�Ƿ񵽴�Transmit watermark level��
                                                              0��δ�ﵽˮ�ߣ�
                                                              1���ﵽˮ�ߡ� */
        unsigned int  fifo_empty         : 1;  /* bit[2]    : FIFO��״̬��־λ��
                                                              0��FIFO�ǿգ�
                                                              1��FIFO�ա� */
        unsigned int  fifo_full          : 1;  /* bit[3]    : FIFO��״̬��־λ��
                                                              0��FIFO������
                                                              1��FIFO���� */
        unsigned int  command_fsm_states : 4;  /* bit[4-7]  : ����������״̬��״̬��
                                                              0x0��Idle��
                                                              0x1��Send init sequence��
                                                              0x2��Tx cmd start bit��
                                                              0x3��Tx cmd tx bit��
                                                              0x4��Tx cmd index +arg��
                                                              0x5��Tx cmd crc7��
                                                              0x6��Tx cmd end bit��
                                                              0x7��Rx resp start bit��
                                                              0x8��Rx resp IRQ response��
                                                              0x9��Rx resp tx bit��
                                                              0xA��Rx resp cmd idx��
                                                              0xB��Rx resp data��
                                                              0xC��Rx resp crc7��
                                                              0xD��Rx resp end bit��
                                                              0xE��Cmd path wait NCC��
                                                              0xF��Wait��CMD-to-response turnaround�� */
        unsigned int  data_3_status      : 1;  /* bit[8]    : ��λֱ�ӷ�ӳ��������data[3]�ź�״̬�� */
        unsigned int  data_busy          : 1;  /* bit[9]    : æ״ָ̬ʾ��
                                                              0������������״̬��
                                                              1��ִ��д����������󿨴��ڷ�æ״̬��
                                                              ��״̬λֱ�ӷ�ӳ��������dat[0]�źŵ�ȡ����ִ��д������Ȳ��������������ѯ��λ��ֱ����λ��1��Ϊ0�󣬲��ܶԿ�������һ���Ĳ����� */
        unsigned int  data_state_mc_busy : 1;  /* bit[10]   : ���ݷ���/����״̬����״̬��
                                                              0�����ݷ���/����״̬����������״̬��
                                                              1�����ݷ���/����״̬�����ڷ�æ״̬�� */
        unsigned int  response_index     : 6;  /* bit[11-16]: ��һ��ָ����Ӧ����š�����auto-stopָ�����Ӧ�� */
        unsigned int  fifo_count         : 13; /* bit[17-29]: FIFO����������������wordΪ��λ�� */
        unsigned int  dma_ack            : 1;  /* bit[30]   : DMAȷ��״̬λ��
                                                              0��DMACδ���MMC/SD����������
                                                              1��DMAC���MMC/SD���������� */
        unsigned int  dma_req            : 1;  /* bit[31]   : DMA����״̬λ��
                                                              0��������δ����DMA���䣻
                                                              1��������������DMA���䡣 */
    } reg;
} SOC_MMC_STATUS_UNION;
#endif
#define SOC_MMC_STATUS_fifo_rx_watermark_START   (0)
#define SOC_MMC_STATUS_fifo_rx_watermark_END     (0)
#define SOC_MMC_STATUS_fifo_tx_watermark_START   (1)
#define SOC_MMC_STATUS_fifo_tx_watermark_END     (1)
#define SOC_MMC_STATUS_fifo_empty_START          (2)
#define SOC_MMC_STATUS_fifo_empty_END            (2)
#define SOC_MMC_STATUS_fifo_full_START           (3)
#define SOC_MMC_STATUS_fifo_full_END             (3)
#define SOC_MMC_STATUS_command_fsm_states_START  (4)
#define SOC_MMC_STATUS_command_fsm_states_END    (7)
#define SOC_MMC_STATUS_data_3_status_START       (8)
#define SOC_MMC_STATUS_data_3_status_END         (8)
#define SOC_MMC_STATUS_data_busy_START           (9)
#define SOC_MMC_STATUS_data_busy_END             (9)
#define SOC_MMC_STATUS_data_state_mc_busy_START  (10)
#define SOC_MMC_STATUS_data_state_mc_busy_END    (10)
#define SOC_MMC_STATUS_response_index_START      (11)
#define SOC_MMC_STATUS_response_index_END        (16)
#define SOC_MMC_STATUS_fifo_count_START          (17)
#define SOC_MMC_STATUS_fifo_count_END            (29)
#define SOC_MMC_STATUS_dma_ack_START             (30)
#define SOC_MMC_STATUS_dma_ack_END               (30)
#define SOC_MMC_STATUS_dma_req_START             (31)
#define SOC_MMC_STATUS_dma_req_END               (31)


/*****************************************************************************
 �ṹ��    : SOC_MMC_FIFOTH_UNION
 �ṹ˵��  : FIFOTH �Ĵ����ṹ���塣��ַƫ����:0x004C����ֵ:0x007F0000�����:32
 �Ĵ���˵��: MMC FIFO�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tx_wmark   : 12; /* bit[0-11] : ��������ʱ��FIFO��ֵ����FIFO�������ݸ���С�ڻ���ڸ�ֵʱ������DMA�������ж�ʹ�ܣ�������ж�����
                                                      ��DMAģʽ��transmit FIFO data request��TXDR���жϻᱻʹ�ܲ������ж����������ݴ���ĩβ���жϲ�������������ʣ���ֽڵĴ��͡�
                                                      DMAģʽ�£������ݴ���ĩβ����ʣ�������С��burst size��DMA��ͨ��burst��ʽ���ʣ�����ݵĴ��䡣
                                                      ���ƣ�Tx_wmark �� 1
                                                      ����ֵ��FIFO_DEPTH/2����С�ڻ����FIFO_DEPTH/2ʱ�������� */
        unsigned int  resevered  : 4;  /* bit[12-15]: ������ */
        unsigned int  rx_wmark   : 9;  /* bit[16-24]: ������ʱ��FIFO��ֵ����FIFO�������ݸ������ڸ�ֵʱ������DMA�������ж�ʹ�ܣ�������ж�����
                                                      ��DMAģʽ��receive FIFO data request��RXDR���жϻᱻʹ�ܲ������ж����������ݴ���ĩβ�����FIFO����û�д��ڸ�ֵ����������жϡ���Data Transfer Done�жϲ�������������ʣ�����ݵĶ�ȡ��
                                                      DMAģʽ�£������ݴ���ĩβ����ʣ������ݱ���ֵ�ͣ�DMA�Ի���Data Transfer Done�жϲ���֮ǰͨ��burst��ʽ�����ݶ�ȡ��
                                                      ���ƣ�Rx_wmark �� FIFO_DEPTH - 2
                                                      ����ֵ��(FIFO_DEPTH/2) �C 1��������(FIFO_DEPTH / 2) - 1)ʱ��������
                                                      ��MMC0��˵,rx_wmark�ķ�ΧΪ24��16����MMC1��MMC2�ķ�ΧΪ23��16�� */
        unsigned int  reserved_0 : 3;  /* bit[25-27]:  */
        unsigned int  burst_size : 3;  /* bit[28-30]: DMAһ��burst��������������wordΪ��λ��Ӧ�ñ�����Ϊ��DMAC��ͬ�Ĵ�С��
                                                      000��1��
                                                      001��4��
                                                      010��8��
                                                      ������������
                                                      ����ʹ�õ�burst_size��tx_wmark���Ϊ��
                                                      Burst_size = 1��Tx_wmark = 1��15
                                                      Burst_size = 4��Tx_wmark = 4
                                                      Burst_size = 4��Tx_wmark = 4
                                                      Burst_size = 4��Tx_wmark = 12
                                                      Burst_size = 8��Tx_wmark = 8
                                                      Burst_size = 8��Tx_wmark = 4
                                                      ����ʹ�õ�burst_size��rx_wmark���Ϊ��
                                                      Burst_size = 1��Rx_wmark = 0��14
                                                      Burst_size = 4��Rx_wmark = 3
                                                      Burst_size = 4��Rx_wmark = 7
                                                      Burst_size = 4��Rx_wmark = 11
                                                      Burst_size = 8��Rx_wmark = 7
                                                      Burst_size = 8��Rx_wmark = 11 */
        unsigned int  reserved_1 : 1;  /* bit[31]   : ������ */
    } reg;
} SOC_MMC_FIFOTH_UNION;
#endif
#define SOC_MMC_FIFOTH_tx_wmark_START    (0)
#define SOC_MMC_FIFOTH_tx_wmark_END      (11)
#define SOC_MMC_FIFOTH_resevered_START   (12)
#define SOC_MMC_FIFOTH_resevered_END     (15)
#define SOC_MMC_FIFOTH_rx_wmark_START    (16)
#define SOC_MMC_FIFOTH_rx_wmark_END      (24)
#define SOC_MMC_FIFOTH_burst_size_START  (28)
#define SOC_MMC_FIFOTH_burst_size_END    (30)


/*****************************************************************************
 �ṹ��    : SOC_MMC_TCBCNT_UNION
 �ṹ˵��  : TCBCNT �Ĵ����ṹ���塣��ַƫ����:0x005C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ӿڴ�������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  trans_card_byte_count : 32; /* bit[0-31]: �������뿨֮�����ݴ����ֽ���������ͳ�����һ�����ݴ���ָ���ӿڴ���������ֽ����������ݴ�������У����Ĵ�������ֵΪ0�����ݴ�������󱾼Ĵ�����ӳ�������뿨֮�����ݴ����ֽ��������Ĵ���������һ���µ����ݴ���ָ��ʱ��0�� */
    } reg;
} SOC_MMC_TCBCNT_UNION;
#endif
#define SOC_MMC_TCBCNT_trans_card_byte_count_START  (0)
#define SOC_MMC_TCBCNT_trans_card_byte_count_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MMC_TBBCNT_UNION
 �ṹ˵��  : TBBCNT �Ĵ����ṹ���塣��ַƫ����:0x0060����ֵ:0x00000000�����:32
 �Ĵ���˵��: FIFO��������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  trans_fifo_byte_count : 32; /* bit[0-31]: CPU/DMA�������FIFO֮�䴫�����ݵ��ֽ����� */
    } reg;
} SOC_MMC_TBBCNT_UNION;
#endif
#define SOC_MMC_TBBCNT_trans_fifo_byte_count_START  (0)
#define SOC_MMC_TBBCNT_trans_fifo_byte_count_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MMC_DEBNCE_UNION
 �ṹ˵��  : DEBNCE �Ĵ����ṹ���塣��ַƫ����:0x0064����ֵ:0x00FFFFFF�����:32
 �Ĵ���˵��: ȥ�������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  debounce_count : 24; /* bit[0-23] : ȥ������Ҫ��Clk������������ֵΪ5~25ns�� */
        unsigned int  reserved       : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_MMC_DEBNCE_UNION;
#endif
#define SOC_MMC_DEBNCE_debounce_count_START  (0)
#define SOC_MMC_DEBNCE_debounce_count_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_MMC_VERID_UNION
 �ṹ˵��  : VERID �Ĵ����ṹ���塣��ַƫ����:0x006C����ֵ:0x5342250A�����:32
 �Ĵ���˵��: �汾�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  version : 32; /* bit[0-31]: Synopsys IP �汾�� */
    } reg;
} SOC_MMC_VERID_UNION;
#endif
#define SOC_MMC_VERID_version_START  (0)
#define SOC_MMC_VERID_version_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MMC_UHSREG_UNION
 �ṹ˵��  : UHSREG �Ĵ����ṹ���塣��ַƫ����:0x0074����ֵ:0x00000000�����:32
 �Ĵ���˵��: UHS-1�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  VOLT_REG : 1;  /* bit[0]    : High voltag mode�������ⲿ�������ѹ��
                                                    0������3.3v��ѹ
                                                    1������1.8v��ѹ */
        unsigned int  reserved_0: 15; /* bit[1-15] : ���� */
        unsigned int  DDR_REG  : 1;  /* bit[16]   : DDRģʽ�������ڴ�ķ�����ѹ��
                                                    0����DDRģʽ
                                                    1��DDRģʽ */
        unsigned int  reserved_1: 15; /* bit[17-31]: ������ */
    } reg;
} SOC_MMC_UHSREG_UNION;
#endif
#define SOC_MMC_UHSREG_VOLT_REG_START  (0)
#define SOC_MMC_UHSREG_VOLT_REG_END    (0)
#define SOC_MMC_UHSREG_DDR_REG_START   (16)
#define SOC_MMC_UHSREG_DDR_REG_END     (16)


/*****************************************************************************
 �ṹ��    : SOC_MMC_RST_n_UNION
 �ṹ˵��  : RST_n �Ĵ����ṹ���塣��ַƫ����:0x0078����ֵ:0x00000001�����:32
 �Ĵ���˵��: Ӳ����λ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  card_reset : 1;  /* bit[0]   : Ӳ����λ��
                                                     0�� ��λģʽ��
                                                     1�� �⸴λ�� */
        unsigned int  reserved   : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_MMC_RST_n_UNION;
#endif
#define SOC_MMC_RST_n_card_reset_START  (0)
#define SOC_MMC_RST_n_card_reset_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MMC_BMOD_UNION
 �ṹ˵��  : BMOD �Ĵ����ṹ���塣��ַƫ����:0x0080����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ģʽ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  SWR      : 1;  /* bit[0]    : ��λ�Ĵ�����
                                                    1����λ����IDMAC �ڲ��Ĵ�����һ�����ں��Զ����㡣 */
        unsigned int  FB       : 1;  /* bit[1]    : �������䡣����AHB master �ӿ��Ƿ�ʹ�ö���ģʽ���䡣1�� burst���佫ʹ��single��incr4��incr8��incr16ģʽ���䡣
                                                    0����ʹ��Single ��incr ��ʽ���䡣 */
        unsigned int  DSL      : 5;  /* bit[2-6]  : Discriptor Skip ���ȡ� */
        unsigned int  DE       : 1;  /* bit[7]    : IDMACʹ�ܡ�����λʱΪʹ��IDMAC�� */
        unsigned int  PBL      : 3;  /* bit[8-10] : �ɱ��burst ���ȡ��Ĵ����е�������FIFOTH�Ĵ����е�Misze���ݡ� */
        unsigned int  reserved : 21; /* bit[11-31]: ������ */
    } reg;
} SOC_MMC_BMOD_UNION;
#endif
#define SOC_MMC_BMOD_SWR_START       (0)
#define SOC_MMC_BMOD_SWR_END         (0)
#define SOC_MMC_BMOD_FB_START        (1)
#define SOC_MMC_BMOD_FB_END          (1)
#define SOC_MMC_BMOD_DSL_START       (2)
#define SOC_MMC_BMOD_DSL_END         (6)
#define SOC_MMC_BMOD_DE_START        (7)
#define SOC_MMC_BMOD_DE_END          (7)
#define SOC_MMC_BMOD_PBL_START       (8)
#define SOC_MMC_BMOD_PBL_END         (10)


/*****************************************************************************
 �ṹ��    : SOC_MMC_PLDMND_UNION
 �ṹ˵��  : PLDMND �Ĵ����ṹ���塣��ַƫ����:0x0084����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͶƱ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  poll_demand : 32; /* bit[0-31]: ���Discriptor�е�OWNû����λ����FSM������suspend״̬����ʱhost�򱾼Ĵ���д���κ�ֵ����ʹFSM���½����ȡDiscriptor��״̬�����Ĵ���Ϊֻд�Ĵ����� */
    } reg;
} SOC_MMC_PLDMND_UNION;
#endif
#define SOC_MMC_PLDMND_poll_demand_START  (0)
#define SOC_MMC_PLDMND_poll_demand_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MMC_DBADDR_UNION
 �ṹ˵��  : DBADDR �Ĵ����ṹ���塣��ַƫ����:0x0088����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  SDL : 32; /* bit[0-31]: Discriptor �������ʼ��ַ��������һ��Discriptor�Ļ���ַ������bitֻ���� */
    } reg;
} SOC_MMC_DBADDR_UNION;
#endif
#define SOC_MMC_DBADDR_SDL_START  (0)
#define SOC_MMC_DBADDR_SDL_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MMC_IDSTS_UNION
 �ṹ˵��  : IDSTS �Ĵ����ṹ���塣��ַƫ����:0x008C����ֵ:0x00000000�����:32
 �Ĵ���˵��: IDMAC״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  TI       : 1;  /* bit[0]    : �����жϡ�ָʾһ�����������ݷ�����ɡ�д1���㡣 */
        unsigned int  RI       : 1;  /* bit[1]    : �����жϡ�ָʾһ�����������ݽ�����ɡ�д1���㡣 */
        unsigned int  FBE      : 1;  /* bit[2]    : �������ߴ����жϡ�ָʾ�����ߴ������(IDSTS[12:10])������bit��λ��DMAֹͣ��������ͨ����д1���㡣 */
        unsigned int  reserved_0: 1;  /* bit[3]    : ������ */
        unsigned int  DU       : 1;  /* bit[4]    : Discriptor���ɻ�ȡ�жϡ�������OWN bitΪ0����Discriptor���ܻ�ȡ���Ὣ��bit��λ��
                                                    д1����˼Ĵ����� */
        unsigned int  CES      : 1;  /* bit[5]    : ��������ϡ�ָʾ�򿨷������ݻ��ȡ���ݵĴ���״̬�������¼����������ϡ�
                                                    EBE �C End Bit Error 
                                                    RTO �C Response Timeout/Boot Ack Timeout 
                                                    RCRC �C Response CRC 
                                                    SBE �C Start Bit Error 
                                                    DRTO �C Data Read Timeout/BDS timeout 
                                                    DCRC �C Data CRC for Receive 
                                                    RE �C Response Error
                                                    д1����˼Ĵ����� */
        unsigned int  reserved_1: 2;  /* bit[6-7]  : ������ */
        unsigned int  NIS      : 1;  /* bit[8]    : һ���ж���ϡ��˼Ĵ��������¼����ж���ϡ�
                                                    IDSTS[0] �C Transmit Interrupt 
                                                    IDSTS[1] �C Receive Interrupt
                                                    ��bit�����ֶ������д1����˼Ĵ����� */
        unsigned int  AIS      : 1;  /* bit[9]    : �쳣�ж���ϡ��˼Ĵ��������¼����ж���ϡ�
                                                    IDSTS[2] �C Fatal Bus Interrupt 
                                                    IDSTS[4] �C DU bit Interrupt 
                                                    IDSTS[5] �C Card Error Summary Interrupt
                                                    ��bit�����ֶ������д1����˼Ĵ����� */
        unsigned int  EB       : 3;  /* bit[10-12]: ����bitָʾ��ָʾ���ߴ�������͡�ֻ�е�Fatal Bus Error bit (IDSTS[2])��λʱ��Ч��
                                                    3��b001 �C Host Abort received during transmission 
                                                    3��b010 �C Host Abort received during reception 
                                                    Others: Reserved */
        unsigned int  FSM      : 4;  /* bit[13-16]: DMAC FSM���ڵ�״̬��
                                                    0��DMA_IDLE
                                                    1��DMA_SUSPEND
                                                    2��DESC_RD
                                                    3��DESC_CHK
                                                    4��DMA_RD_REQ_WAIT
                                                    5��DMA_WR_REQ_WAIT
                                                    6��DMA_RD
                                                    7��DMA_WR
                                                    8��DESC_CLOSE
                                                    �˼Ĵ���ֻ���� */
        unsigned int  reserved_2: 15; /* bit[17-31]: ������ */
    } reg;
} SOC_MMC_IDSTS_UNION;
#endif
#define SOC_MMC_IDSTS_TI_START        (0)
#define SOC_MMC_IDSTS_TI_END          (0)
#define SOC_MMC_IDSTS_RI_START        (1)
#define SOC_MMC_IDSTS_RI_END          (1)
#define SOC_MMC_IDSTS_FBE_START       (2)
#define SOC_MMC_IDSTS_FBE_END         (2)
#define SOC_MMC_IDSTS_DU_START        (4)
#define SOC_MMC_IDSTS_DU_END          (4)
#define SOC_MMC_IDSTS_CES_START       (5)
#define SOC_MMC_IDSTS_CES_END         (5)
#define SOC_MMC_IDSTS_NIS_START       (8)
#define SOC_MMC_IDSTS_NIS_END         (8)
#define SOC_MMC_IDSTS_AIS_START       (9)
#define SOC_MMC_IDSTS_AIS_END         (9)
#define SOC_MMC_IDSTS_EB_START        (10)
#define SOC_MMC_IDSTS_EB_END          (12)
#define SOC_MMC_IDSTS_FSM_START       (13)
#define SOC_MMC_IDSTS_FSM_END         (16)


/*****************************************************************************
 �ṹ��    : SOC_MMC_IDINTEN_UNION
 �ṹ˵��  : IDINTEN �Ĵ����ṹ���塣��ַƫ����:0x0090����ֵ:0x00000000�����:32
 �Ĵ���˵��: IDMAC�ж�ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  TI       : 1;  /* bit[0]    : �����ж�ʹ�ܡ���bit����ͬNI��λ��TI�ж�ʹ�ܡ� */
        unsigned int  RI       : 1;  /* bit[1]    : �����ж�ʹ�ܡ���bit����ͬNI��λ��RI�ж�ʹ�ܡ� */
        unsigned int  FBE      : 1;  /* bit[2]    : �������ߴ����ж�ʹ�ܡ���bit����ͬAI��λ��FBE�ж�ʹ�ܡ� */
        unsigned int  reserved_0: 1;  /* bit[3]    : ������ */
        unsigned int  DU       : 1;  /* bit[4]    : Discriptor���ɻ�ȡ�ж�ʹ�ܡ���bit����ͬAI��λ��DU�ж�ʹ�ܡ� */
        unsigned int  CES      : 1;  /* bit[5]    : ����������ж�ʹ�ܡ�д1ʹ�ܿ���������жϡ� */
        unsigned int  reserved_1: 2;  /* bit[6-7]  : ������ */
        unsigned int  NI       : 1;  /* bit[8]    : һ������жϡ�д1ʹ��һ������жϡ���bitʹ�����¼���bit��
                                                    IDINTEN[0] �C Transmit Interrupt 
                                                    IDINTEN[1] �C Receive Interrupt */
        unsigned int  AI       : 1;  /* bit[9]    : �쳣����ж�ʹ�ܡ�д1ʹ���쳣����жϡ���bitʹ�����¼���bit��
                                                    IDINTEN[2] �C Fatal Bus Interrupt 
                                                    IDINTEN[4] �C DU bit Interrupt 
                                                    IDINTEN[5] �C Card Error Summary Interrupt */
        unsigned int  reserved_2: 22; /* bit[10-31]: ������ */
    } reg;
} SOC_MMC_IDINTEN_UNION;
#endif
#define SOC_MMC_IDINTEN_TI_START        (0)
#define SOC_MMC_IDINTEN_TI_END          (0)
#define SOC_MMC_IDINTEN_RI_START        (1)
#define SOC_MMC_IDINTEN_RI_END          (1)
#define SOC_MMC_IDINTEN_FBE_START       (2)
#define SOC_MMC_IDINTEN_FBE_END         (2)
#define SOC_MMC_IDINTEN_DU_START        (4)
#define SOC_MMC_IDINTEN_DU_END          (4)
#define SOC_MMC_IDINTEN_CES_START       (5)
#define SOC_MMC_IDINTEN_CES_END         (5)
#define SOC_MMC_IDINTEN_NI_START        (8)
#define SOC_MMC_IDINTEN_NI_END          (8)
#define SOC_MMC_IDINTEN_AI_START        (9)
#define SOC_MMC_IDINTEN_AI_END          (9)


/*****************************************************************************
 �ṹ��    : SOC_MMC_DSCADDR_UNION
 �ṹ˵��  : DSCADDR �Ĵ����ṹ���塣��ַƫ����:0x0094����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ǰDiscriptor��ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  HAD : 32; /* bit[0-31]: ��ǰDiscriptor��ַָ�롣��λ��˼Ĵ������㡣���Ĵ���ָʾDMA��ǰ��ȡ��Discriptor����ʼ��ַ�� */
    } reg;
} SOC_MMC_DSCADDR_UNION;
#endif
#define SOC_MMC_DSCADDR_HAD_START  (0)
#define SOC_MMC_DSCADDR_HAD_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MMC_BUFADDR_UNION
 �ṹ˵��  : BUFADDR �Ĵ����ṹ���塣��ַƫ����:0x0098����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ǰBuffer��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  HBA : 32; /* bit[0-31]: ��ǰBuffer ��ַָ�롣��λ��˼Ĵ������㡣���Ĵ���ָʾDMA��ǰ��ȡ��Buffer�ĵ�ַ */
    } reg;
} SOC_MMC_BUFADDR_UNION;
#endif
#define SOC_MMC_BUFADDR_HBA_START  (0)
#define SOC_MMC_BUFADDR_HBA_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MMC_CARDTHRCTL_UNION
 �ṹ˵��  : CARDTHRCTL �Ĵ����ṹ���塣��ַƫ����:0x0100����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����FIFO���޼Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  card_rd_thr_en    : 1;  /* bit[0]    : ����FIFO����ʹ�ܡ�
                                                             0����ʹ�ܶ���FIFO���ޣ�
                                                             1��ʹ�ܶ���FIFO���ޡ�
                                                             ��ʹ�ܶ���FIFO����ʱ��ֻ���ڶ�FIFO�����㹻�ռ�ʱ�Żᷢ������� */
        unsigned int  bsy_clr_int_en    : 1;  /* bit[1]    : ����æ״̬����ж�ʹ�ܡ�
                                                             0����ʹ������æ״̬����жϣ�
                                                             1��ʹ������æ״̬����жϡ� */
        unsigned int  reserved_0        : 14; /* bit[2-15] : ������ */
        unsigned int  card_rd_threshold : 12; /* bit[16-27]: ����FIFO����ֵ�����Ϊ512�ֽڡ� */
        unsigned int  reserved_1        : 4;  /* bit[28-31]: ������ */
    } reg;
} SOC_MMC_CARDTHRCTL_UNION;
#endif
#define SOC_MMC_CARDTHRCTL_card_rd_thr_en_START     (0)
#define SOC_MMC_CARDTHRCTL_card_rd_thr_en_END       (0)
#define SOC_MMC_CARDTHRCTL_bsy_clr_int_en_START     (1)
#define SOC_MMC_CARDTHRCTL_bsy_clr_int_en_END       (1)
#define SOC_MMC_CARDTHRCTL_card_rd_threshold_START  (16)
#define SOC_MMC_CARDTHRCTL_card_rd_threshold_END    (27)


/*****************************************************************************
 �ṹ��    : SOC_MMC_UHS_REG_EXT_UNION
 �ṹ˵��  : UHS_REG_EXT �Ĵ����ṹ���塣��ַƫ����:0x0108����ֵ:0x00000000�����:32
 �Ĵ���˵��: UHS�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0          : 16; /* bit[0-15] : ������ */
        unsigned int  clk_smpl_phase_ctrl : 7;  /* bit[16-22]: cclk_in_sampleʱ��������ơ�
                                                               ����bit[21]���Ʋ��Ƿ����delay buffer����������ϸ����bit[19:16]����������λ����������ֵ��� */
        unsigned int  clk_drv_phase_ctrl  : 7;  /* bit[23-29]: driverʱ�Ӳ�֧������ */
        unsigned int  reserved_1          : 2;  /* bit[30-31]: ������ */
    } reg;
} SOC_MMC_UHS_REG_EXT_UNION;
#endif
#define SOC_MMC_UHS_REG_EXT_clk_smpl_phase_ctrl_START  (16)
#define SOC_MMC_UHS_REG_EXT_clk_smpl_phase_ctrl_END    (22)
#define SOC_MMC_UHS_REG_EXT_clk_drv_phase_ctrl_START   (23)
#define SOC_MMC_UHS_REG_EXT_clk_drv_phase_ctrl_END     (29)


/*****************************************************************************
 �ṹ��    : SOC_MMC_EMMC_DDR_REG_UNION
 �ṹ˵��  : EMMC_DDR_REG �Ĵ����ṹ���塣��ַƫ����:0x010C����ֵ:0x00000000�����:32
 �Ĵ���˵��: eMMC4.5 DDRģʽ��ʼλ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  half_start_bit : 1;  /* bit[0]   : DDR50ģʽ����ʼλ���ơ�
                                                         0����ʼλΪһ��ʱ�����ڣ�
                                                         1����ʼλΪ���ʱ�����ڡ� */
        unsigned int  reserved       : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_MMC_EMMC_DDR_REG_UNION;
#endif
#define SOC_MMC_EMMC_DDR_REG_half_start_bit_START  (0)
#define SOC_MMC_EMMC_DDR_REG_half_start_bit_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MMC_ENABLE_SHIFT_UNION
 �ṹ˵��  : ENABLE_SHIFT �Ĵ����ṹ���塣��ַƫ����:0x0110����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enable_shift : 2;  /* bit[0-1] : ����ʹ�ܿ��ơ�
                                                       00��Ĭ�����ࣻ
                                                       01�����ൽ��һ�������أ�
                                                       10�����ൽ��һ���½��أ�
                                                       11��reserved�� */
        unsigned int  reserved     : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_MMC_ENABLE_SHIFT_UNION;
#endif
#define SOC_MMC_ENABLE_SHIFT_enable_shift_START  (0)
#define SOC_MMC_ENABLE_SHIFT_enable_shift_END    (1)






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

#endif /* end of soc_mmc_interface.h */
