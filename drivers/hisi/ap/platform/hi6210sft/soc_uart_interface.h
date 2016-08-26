

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_UART_INTERFACE_H__
#define __SOC_UART_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/1) register_UART
 ****************************************************************************/
/* �Ĵ���˵����UART���ݼĴ�������Ž������ݺͷ��͵����ݣ�ͬʱ���ԴӸüĴ����ж�������״̬��
   λ����UNION�ṹ:  SOC_UART_DR_UNION */
#define SOC_UART_DR_ADDR(base)                        ((base) + (0x000))

/* �Ĵ���˵��������״̬�Ĵ���/��������Ĵ�����
            (I)�Ĵ�����ʱ��Ϊ����״̬�Ĵ�����
            (I)�Ĵ���дʱ��Ϊ��������Ĵ�����
            ����״̬Ҳ���Դ�UART_DR�ж�������UART_DR�ж�����break��frame��parity��״̬��ϢҪ�ȴ�UART_RSR��������Ϣ���ȼ��ߣ���UART_DR�е�״̬�仯��UART_RSR���죩��
            ��UART_RSR�Ĵ������κ�д���������UART_RSR�Ĵ������и�λ��
   λ����UNION�ṹ:  SOC_UART_RSR_UNION */
#define SOC_UART_RSR_ADDR(base)                       ((base) + (0x004))

/* �Ĵ���˵����UART��־�Ĵ�����
   λ����UNION�ṹ:  SOC_UART_FR_UNION */
#define SOC_UART_FR_ADDR(base)                        ((base) + (0x018))

/* �Ĵ���˵����IrDA��Infrared Data Association���͹��ļ������Ĵ�����
   λ����UNION�ṹ:  SOC_UART_UARTLPR_UNION */
#define SOC_UART_UARTLPR_ADDR(base)                   ((base) + (0x020))

/* �Ĵ���˵�������������ʼĴ�����
   λ����UNION�ṹ:  SOC_UART_IBRD_UNION */
#define SOC_UART_IBRD_ADDR(base)                      ((base) + (0x024))

/* �Ĵ���˵����С�������ʼĴ�����
            (CH)
            (CL)���������ʼĴ�����С�������ʼĴ�����ֵ����ȵ���ǰ���ݷ��ͺͽ�����ϲ��ܸ��¡�
            (CL)��С�ķ�ƵֵΪ1�����ķ�ƵֵΪ65535��216-1������UART_IBRD=0����Ч�ģ�����ʱUART_FBRD�������ԡ�ͬ�������UART_IBRD=65535��0xFFFF����UART_FBRD��ֻ����0�������0����ᵼ�·��ͺͽ��յ�ʧ��
            (CL)����UART_FBRD=0x1E��UART_IBRD=0x01����ͱ�ʾ��Ƶϵ������������Ϊ30��С������Ϊ0.015625��������Ƶϵ��Ϊ30.015625��
            (CL)UART�Ĳ�����=�ڲ�����Ƶ��/(16*��Ƶϵ��)=�ڲ�����Ƶ��/(16*30.015625)��
   λ����UNION�ṹ:  SOC_UART_FBRD_UNION */
#define SOC_UART_FBRD_ADDR(base)                      ((base) + (0x028))

/* �Ĵ���˵��������ģʽ���ƼĴ�����UART_LCR_H��UART_IBRD��UART_FBRD���һ��30bit��ļĴ������������UART_IBRD��UART_FBRD�����ݣ�����ͬʱ����UART_LCR_H��
   λ����UNION�ṹ:  SOC_UART_LCR_H_UNION */
#define SOC_UART_LCR_H_ADDR(base)                     ((base) + (0x02C))

/* �Ĵ���˵����UART���ƼĴ�����
            ����UART_CR��ѭ���²��裺
            (S)��UART_CR[0]д0����ֹUART��
            (S)�ȴ���ǰ���ݷ��ͻ���ս�����
            (S)��UART_LCR_H[fen]��0��
            (S)����UART_CR��
            (S)��UART_CR[0]д1��ʹ��UART��
            (SE)
   λ����UNION�ṹ:  SOC_UART_CR_UNION */
#define SOC_UART_CR_ADDR(base)                        ((base) + (0x030))

/* �Ĵ���˵�����ж�FIFO��ֵѡ��Ĵ�������������FIFO���жϣ�UART_TXINTR��UART_RXINTR�������ߡ�
   λ����UNION�ṹ:  SOC_UART_IFLS_UNION */
#define SOC_UART_IFLS_ADDR(base)                      ((base) + (0x034))

/* �Ĵ���˵�����ж����μĴ��������������жϡ�BitֵΪ0��ʾ�����жϣ�Ϊ1��ʾ�������жϡ�
   λ����UNION�ṹ:  SOC_UART_IMSC_UNION */
#define SOC_UART_IMSC_ADDR(base)                      ((base) + (0x038))

/* �Ĵ���˵����ԭʼ�ж�״̬�Ĵ����������ݲ����ж����μĴ�����Ӱ�졣BitֵΪ0��ʾ���жϣ�Ϊ1��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_UART_RIS_UNION */
#define SOC_UART_RIS_ADDR(base)                       ((base) + (0x03C))

/* �Ĵ���˵�������κ��ж�״̬�Ĵ�����������Ϊԭʼ�ж�״̬���ж����ν��С��롱������Ľ����BitֵΪ0��ʾ���жϣ�Ϊ1��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_UART_MIS_UNION */
#define SOC_UART_MIS_ADDR(base)                       ((base) + (0x040))

/* �Ĵ���˵�����ж�����Ĵ�����Bitֵд1ʱ��Ӧ���жϱ������д0�������á�
   λ����UNION�ṹ:  SOC_UART_ICR_UNION */
#define SOC_UART_ICR_ADDR(base)                       ((base) + (0x044))

/* �Ĵ���˵����DMA���ƼĴ������������÷���FIFO�ͽ���FIFO��DMAʹ�ܡ�
   λ����UNION�ṹ:  SOC_UART_DMACR_UNION */
#define SOC_UART_DMACR_ADDR(base)                     ((base) + (0x048))





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
                     (1/1) register_UART
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_UART_DR_UNION
 �ṹ˵��  : DR �Ĵ����ṹ���塣��ַƫ����:0x000����ֵ:0x0000�����:16
 �Ĵ���˵��: UART���ݼĴ�������Ž������ݺͷ��͵����ݣ�ͬʱ���ԴӸüĴ����ж�������״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  data     : 8;  /* bit[0-7]  : �������ݺͷ������ݡ� */
        unsigned short  fe       : 1;  /* bit[8]    : ֡����
                                                      0����֡����
                                                      1�����յ������ݵ�֡���󣨴����ֹͣλ���� */
        unsigned short  pe       : 1;  /* bit[9]    : У�����
                                                      0����У�����
                                                      1���������ݵ�У����� */
        unsigned short  be       : 1;  /* bit[10]   : break����
                                                      0����break����
                                                      1����⵽break���󣬼��������ݵ����뱣�ֵ͵�ʱ���һ��ȫ�ִ��䣨����start��data��parity��stop bit����Ҫ���� */
        unsigned short  oe       : 1;  /* bit[11]   : �������
                                                      0�����������
                                                      1��������󣬽���FIFO���ҽ�����һ�����ݡ� */
        unsigned short  reserved : 4;  /* bit[12-15]: ������ */
    } reg;
} SOC_UART_DR_UNION;
#endif
#define SOC_UART_DR_data_START      (0)
#define SOC_UART_DR_data_END        (7)
#define SOC_UART_DR_fe_START        (8)
#define SOC_UART_DR_fe_END          (8)
#define SOC_UART_DR_pe_START        (9)
#define SOC_UART_DR_pe_END          (9)
#define SOC_UART_DR_be_START        (10)
#define SOC_UART_DR_be_END          (10)
#define SOC_UART_DR_oe_START        (11)
#define SOC_UART_DR_oe_END          (11)


/*****************************************************************************
 �ṹ��    : SOC_UART_RSR_UNION
 �ṹ˵��  : RSR �Ĵ����ṹ���塣��ַƫ����:0x004����ֵ:0x00�����:8
 �Ĵ���˵��: ����״̬�Ĵ���/��������Ĵ�����
            (I)�Ĵ�����ʱ��Ϊ����״̬�Ĵ�����
            (I)�Ĵ���дʱ��Ϊ��������Ĵ�����
            ����״̬Ҳ���Դ�UART_DR�ж�������UART_DR�ж�����break��frame��parity��״̬��ϢҪ�ȴ�UART_RSR��������Ϣ���ȼ��ߣ���UART_DR�е�״̬�仯��UART_RSR���죩��
            ��UART_RSR�Ĵ������κ�д���������UART_RSR�Ĵ������и�λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char      value;
    struct
    {
        unsigned char  fe       : 1;  /* bit[0]  : ֡����
                                                   0����֡����
                                                   1�����յ������ݵ�ֹͣλ������Ч��ֹͣλΪ1���� */
        unsigned char  pe       : 1;  /* bit[1]  : У�����
                                                   0����У�����
                                                   1���������ݵ�У�����&#13;FIFOģʽ�£��ô�����FIFO����������������� */
        unsigned char  be       : 1;  /* bit[2]  : Break����
                                                   0����break����
                                                   1��break����&#13;Break���������������ݵ����뱣�ֵ͵�ʱ���һ��ȫ�ִ��䣨������start��data��parity��stop bit����Ҫ���� */
        unsigned char  oe       : 1;  /* bit[3]  : �������
                                                   0�����������
                                                   1���������&#13;��FIFO��ʱ��FIFO�е����ݱ�����Ч����Ϊ��������һ������д��FIFO�У�ֻ����λ�Ĵ����������CPU�������̶��������ڿ�FIFO�� */
        unsigned char  reserved : 4;  /* bit[4-7]: ������ */
    } reg;
} SOC_UART_RSR_UNION;
#endif
#define SOC_UART_RSR_fe_START        (0)
#define SOC_UART_RSR_fe_END          (0)
#define SOC_UART_RSR_pe_START        (1)
#define SOC_UART_RSR_pe_END          (1)
#define SOC_UART_RSR_be_START        (2)
#define SOC_UART_RSR_be_END          (2)
#define SOC_UART_RSR_oe_START        (3)
#define SOC_UART_RSR_oe_END          (3)


/*****************************************************************************
 �ṹ��    : SOC_UART_FR_UNION
 �ṹ˵��  : FR �Ĵ����ṹ���塣��ַƫ����:0x018����ֵ:0x0010�����:16
 �Ĵ���˵��: UART��־�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  cts      : 1;  /* bit[0]   : ��λ��nUARTCTS����UARTx_CTS_N����ȡ������modem״̬������Ϊ0����λΪ1�� */
        unsigned short  reserved_0: 2;  /* bit[1-2] : ������ */
        unsigned short  busy     : 1;  /* bit[3]   : UARTæ��״̬λ��
                                                     0��UART���л�����ɷ������ݣ�
                                                     1��UART��æ�ڷ������ݡ�
                                                     ��λһ����λ����״̬һֱ���ֵ������ֽڣ��������е�ֹͣλ����ȫ����λ�Ĵ����з��ͳ�ȥ��&#13;һ������FIFO�ǿո�λ����λ������UARTʹ����� */
        unsigned short  rxfe     : 1;  /* bit[4]   : ��λ�ĺ�����UART_LCR_H[FEN]��״̬������
                                                     ���UART_LCR_H[fen]Ϊ0���򵱽���holding register��ʱ��bit��1��&#13;���UART_LCR_H[fen]Ϊ1���򵱽���FIFOΪ��ʱ��λ����1�� */
        unsigned short  txff     : 1;  /* bit[5]   : ��λ�ĺ�����UART_LCR_H[FEN]��״̬������
                                                     ���UART_LCR_H[fen]Ϊ0���򵱷���holding register��ʱ��λ��1��&#13;���UART_LCR_H[fen]Ϊ1��������FIFOΪ��ʱ��λ��1�� */
        unsigned short  rxff     : 1;  /* bit[6]   : ��λ�ĺ�����UART_LCR_H[FEN]��״̬������
                                                     ���UART_LCR_H[fen]Ϊ0���򵱽���holding register��ʱ��λ��1��&#13;���UART_LCR_H[fen]Ϊ1���򵱽���FIFOΪ��ʱ��λ��1�� */
        unsigned short  txfe     : 1;  /* bit[7]   : ��λ�ĺ�����UART_LCR_H[fen]��״̬������
                                                     ���UART_LCR_H[fen]Ϊ0���򵱷���holding register��ʱ��λ��1��&#13;���UART_LCR_H[fen]Ϊ1���򵱷���FIFOΪ��ʱ��λ��1�� */
        unsigned short  reserved_1: 8;  /* bit[8-15]: ������ */
    } reg;
} SOC_UART_FR_UNION;
#endif
#define SOC_UART_FR_cts_START       (0)
#define SOC_UART_FR_cts_END         (0)
#define SOC_UART_FR_busy_START      (3)
#define SOC_UART_FR_busy_END        (3)
#define SOC_UART_FR_rxfe_START      (4)
#define SOC_UART_FR_rxfe_END        (4)
#define SOC_UART_FR_txff_START      (5)
#define SOC_UART_FR_txff_END        (5)
#define SOC_UART_FR_rxff_START      (6)
#define SOC_UART_FR_rxff_END        (6)
#define SOC_UART_FR_txfe_START      (7)
#define SOC_UART_FR_txfe_END        (7)


/*****************************************************************************
 �ṹ��    : SOC_UART_UARTLPR_UNION
 �ṹ˵��  : UARTLPR �Ĵ����ṹ���塣��ַƫ����:0x020����ֵ:0x0000�����:16
 �Ĵ���˵��: IrDA��Infrared Data Association���͹��ļ������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  irda     : 8;  /* bit[0-7] : 8λ�͹��ķ�Ƶֵ�� */
        unsigned short  reserved : 8;  /* bit[8-15]: ������ */
    } reg;
} SOC_UART_UARTLPR_UNION;
#endif
#define SOC_UART_UARTLPR_irda_START      (0)
#define SOC_UART_UARTLPR_irda_END        (7)


/*****************************************************************************
 �ṹ��    : SOC_UART_IBRD_UNION
 �ṹ˵��  : IBRD �Ĵ����ṹ���塣��ַƫ����:0x024����ֵ:0x0000�����:16
 �Ĵ���˵��: ���������ʼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  bauddivint : 16; /* bit[0-15]: ���������ʷ�Ƶֵ����λʱȫ����0�� */
    } reg;
} SOC_UART_IBRD_UNION;
#endif
#define SOC_UART_IBRD_bauddivint_START  (0)
#define SOC_UART_IBRD_bauddivint_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_UART_FBRD_UNION
 �ṹ˵��  : FBRD �Ĵ����ṹ���塣��ַƫ����:0x028����ֵ:0x0000�����:16
 �Ĵ���˵��: С�������ʼĴ�����
            (CH)
            (CL)���������ʼĴ�����С�������ʼĴ�����ֵ����ȵ���ǰ���ݷ��ͺͽ�����ϲ��ܸ��¡�
            (CL)��С�ķ�ƵֵΪ1�����ķ�ƵֵΪ65535��216-1������UART_IBRD=0����Ч�ģ�����ʱUART_FBRD�������ԡ�ͬ�������UART_IBRD=65535��0xFFFF����UART_FBRD��ֻ����0�������0����ᵼ�·��ͺͽ��յ�ʧ��
            (CL)����UART_FBRD=0x1E��UART_IBRD=0x01����ͱ�ʾ��Ƶϵ������������Ϊ30��С������Ϊ0.015625��������Ƶϵ��Ϊ30.015625��
            (CL)UART�Ĳ�����=�ڲ�����Ƶ��/(16*��Ƶϵ��)=�ڲ�����Ƶ��/(16*30.015625)��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  banddivfrac : 16; /* bit[0-15]: С�������ʷ�Ƶֵ�� */
    } reg;
} SOC_UART_FBRD_UNION;
#endif
#define SOC_UART_FBRD_banddivfrac_START  (0)
#define SOC_UART_FBRD_banddivfrac_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_UART_LCR_H_UNION
 �ṹ˵��  : LCR_H �Ĵ����ṹ���塣��ַƫ����:0x02C����ֵ:0x0000�����:16
 �Ĵ���˵��: ����ģʽ���ƼĴ�����UART_LCR_H��UART_IBRD��UART_FBRD���һ��30bit��ļĴ������������UART_IBRD��UART_FBRD�����ݣ�����ͬʱ����UART_LCR_H��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  brk      : 1;  /* bit[0]   : ����break��
                                                     0����Ч��
                                                     1������ɵ�ǰ���ݵķ��ͺ�UTXD��������͵�ƽ��
                                                     <B>ע�⣺Ҫ��ȷ��ִ��break����������λ��1��ʱ����볬��2������֡��������ʹ���У���λ������0��</B> */
        unsigned short  pen      : 1;  /* bit[1]   : У��ѡ��λ��
                                                     0������У�飻
                                                     1�����ͷ������У�飬���շ�����У���顣 */
        unsigned short  eps      : 1;  /* bit[2]   : ���ͺͽ��չ����е���żУ��ѡ��
                                                     0���ڷ��ͺͽ��չ�����������У�������У�飻
                                                     1���ڷ��ͺͽ��չ���������żУ�����żУ�顣&#13;��UART_LCR_H[fen]Ϊ0ʱ����λ�������á� */
        unsigned short  stp2     : 1;  /* bit[3]   : ����֡β2bitֹͣλ�жϡ�
                                                     0�����͵�֡βû��2bitֹͣλ��
                                                     1�����͵�֡β��2bitֹͣλ��&#13;�����߼��ڽ���ʱ�����2bit��ֹͣλ�� */
        unsigned short  fen      : 1;  /* bit[4]   : ���ͺͽ���FIFOʹ�ܿ��ơ�
                                                     0�����ͺͽ���FIFO��ֹ��
                                                     1�����ͺͽ���FIFOʹ�ܡ� */
        unsigned short  wlen     : 2;  /* bit[5-6] : ָʾ���ͺͽ���һ��֡�����ݱ��ص���Ŀ��
                                                     00��5bit��
                                                     01��6bit��
                                                     10��7bit��
                                                     11��8bit�� */
        unsigned short  sps      : 1;  /* bit[7]   : У��ѡ��
                                                     �����Ĵ�����bit[1]��bit[2]��bit[7]����λʱ��У��λ�ͻ���Ϊ0���ͺͼ�⡣
                                                     �����Ĵ�����bit[1]��bit[7]����λ��bit[2]Ϊ0ʱ��У��λ�ͻ���Ϊ1���ͺͼ�⡣
                                                     ��bit[1]��bit[2]��bit[7]����0����ôstick parity��ֹ�� */
        unsigned short  reserved : 8;  /* bit[8-15]: ������ */
    } reg;
} SOC_UART_LCR_H_UNION;
#endif
#define SOC_UART_LCR_H_brk_START       (0)
#define SOC_UART_LCR_H_brk_END         (0)
#define SOC_UART_LCR_H_pen_START       (1)
#define SOC_UART_LCR_H_pen_END         (1)
#define SOC_UART_LCR_H_eps_START       (2)
#define SOC_UART_LCR_H_eps_END         (2)
#define SOC_UART_LCR_H_stp2_START      (3)
#define SOC_UART_LCR_H_stp2_END        (3)
#define SOC_UART_LCR_H_fen_START       (4)
#define SOC_UART_LCR_H_fen_END         (4)
#define SOC_UART_LCR_H_wlen_START      (5)
#define SOC_UART_LCR_H_wlen_END        (6)
#define SOC_UART_LCR_H_sps_START       (7)
#define SOC_UART_LCR_H_sps_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_UART_CR_UNION
 �ṹ˵��  : CR �Ĵ����ṹ���塣��ַƫ����:0x030����ֵ:0x0300�����:16
 �Ĵ���˵��: UART���ƼĴ�����
            ����UART_CR��ѭ���²��裺
            (S)��UART_CR[0]д0����ֹUART��
            (S)�ȴ���ǰ���ݷ��ͻ���ս�����
            (S)��UART_LCR_H[fen]��0��
            (S)����UART_CR��
            (S)��UART_CR[0]д1��ʹ��UART��
            (SE)
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  uarten   : 1;  /* bit[0]    : UARTʹ�ܡ�
                                                      0����ֹ��
                                                      1��ʹ�ܡ�&#13;����ڷ��ͺͽ��չ����н�UART��ֹ�����������ֹ֮ͣǰ������ǰ���ݵĴ��͡� */
        unsigned short  reserved_0: 6;  /* bit[1-6]  : ������ */
        unsigned short  lbe      : 1;  /* bit[7]    : ����ʹ�ܡ�
                                                      0����ֹ��
                                                      1��UARTTXD������ص�UARTRXD�� */
        unsigned short  txe      : 1;  /* bit[8]    : UART����ʹ�ܡ�
                                                      0����ֹ��
                                                      1��ʹ�ܡ�&#13;�ڷ��͵Ĺ��������UART����ֹ����ô��ǰ���ݵķ��;ͻ�������ֹ֮ͣǰ������ */
        unsigned short  rxe      : 1;  /* bit[9]    : UART����ʹ�ܡ�
                                                      0����ֹ��
                                                      1��ʹ�ܡ�&#13;�ڽ��յĹ��������UART����ֹ����ô��ǰ���ݵĽ��վͻ�������ֹ֮ͣǰ������ */
        unsigned short  dtr      : 1;  /* bit[10]   : ���ݷ���׼����
                                                      ��bitΪUART modem״̬����ź�nUARTDTR��ȡ����
                                                      0������źŲ��䣻
                                                      1������bit����Ϊ1��������ź�Ϊ0�� */
        unsigned short  rts      : 1;  /* bit[11]   : �����͡�
                                                      ��bitΪUART modem״̬����ź�nUARTRTS��ȡ����
                                                      0������źŲ��䣻
                                                      1������bit����Ϊ1��������ź�Ϊ0�� */
        unsigned short  reserved_1: 2;  /* bit[12-13]: ������ */
        unsigned short  rtsen    : 1;  /* bit[14]   : RTSӲ������ʹ�ܡ�
                                                      0����ʹ��RTSӲ�����أ�
                                                      1��ʹ��RTSӲ�����أ�ֻ�е�����FIFO�пռ�ʱ������������ݡ� */
        unsigned short  ctsen    : 1;  /* bit[15]   : CTSӲ������ʹ�ܡ�
                                                      0����ʹ��CTSӲ�����أ�
                                                      1��ʹ��CTSӲ�����أ�ֻ�е�nUARTCTS�ź���Чʱ�ŷ������ݡ� */
    } reg;
} SOC_UART_CR_UNION;
#endif
#define SOC_UART_CR_uarten_START    (0)
#define SOC_UART_CR_uarten_END      (0)
#define SOC_UART_CR_lbe_START       (7)
#define SOC_UART_CR_lbe_END         (7)
#define SOC_UART_CR_txe_START       (8)
#define SOC_UART_CR_txe_END         (8)
#define SOC_UART_CR_rxe_START       (9)
#define SOC_UART_CR_rxe_END         (9)
#define SOC_UART_CR_dtr_START       (10)
#define SOC_UART_CR_dtr_END         (10)
#define SOC_UART_CR_rts_START       (11)
#define SOC_UART_CR_rts_END         (11)
#define SOC_UART_CR_rtsen_START     (14)
#define SOC_UART_CR_rtsen_END       (14)
#define SOC_UART_CR_ctsen_START     (15)
#define SOC_UART_CR_ctsen_END       (15)


/*****************************************************************************
 �ṹ��    : SOC_UART_IFLS_UNION
 �ṹ˵��  : IFLS �Ĵ����ṹ���塣��ַƫ����:0x034����ֵ:0x0012�����:16
 �Ĵ���˵��: �ж�FIFO��ֵѡ��Ĵ�������������FIFO���жϣ�UART_TXINTR��UART_RXINTR�������ߡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  txiflsel : 3;  /* bit[0-2] : �����ж�FIFO����ֵѡ�񣬷����жϵĴ��������¡�
                                                     000������FIFO��1/8full��
                                                     001������FIFO��1/4full��
                                                     011������FIFO��3/4full��
                                                     010������FIFO��1/2full��
                                                     100������FIFO��7/8full��
                                                     101��111�������� */
        unsigned short  rxiflsel : 3;  /* bit[3-5] : �����ж�FIFO����ֵѡ�񣬽����жϵĴ��������¡�
                                                     000������FIFO��1/8full��
                                                     001������FIFO��1/4full��
                                                     010������FIFO��1/2full��
                                                     011������FIFO��3/4full��
                                                     100������FIFO��7/8full��
                                                     101��111�������� */
        unsigned short  rtsflsel : 3;  /* bit[6-8] : RTS���ض�Ӧ�Ľ���FIFO��levelѡ��RTS�Ĵ��������£�
                                                     000������FIFO��ʼ>=1/8 full
                                                     001������FIFO��ʼ>=1/4 full
                                                     010������FIFO��ʼ>=1/2 full
                                                     011������FIFO��ʼ>=3/4 full
                                                     100������FIFO��ʼ>=7/8 full
                                                     101������FIFO��ʼ>=full-2
                                                     110~111������
                                                     ע�⣺RTS����ˮ�����ò��ܵ��ڽ����ж�ˮ�ߣ��Ƽ�����Ϊ��101��
                                                     ����λ��ֻ���ϵͳ�е�HI6210V100�ж�UART1/2�� */
        unsigned short  reserved : 7;  /* bit[9-15]: ������ */
    } reg;
} SOC_UART_IFLS_UNION;
#endif
#define SOC_UART_IFLS_txiflsel_START  (0)
#define SOC_UART_IFLS_txiflsel_END    (2)
#define SOC_UART_IFLS_rxiflsel_START  (3)
#define SOC_UART_IFLS_rxiflsel_END    (5)
#define SOC_UART_IFLS_rtsflsel_START  (6)
#define SOC_UART_IFLS_rtsflsel_END    (8)


/*****************************************************************************
 �ṹ��    : SOC_UART_IMSC_UNION
 �ṹ˵��  : IMSC �Ĵ����ṹ���塣��ַƫ����:0x038����ֵ:0x0000�����:16
 �Ĵ���˵��: �ж����μĴ��������������жϡ�BitֵΪ0��ʾ�����жϣ�Ϊ1��ʾ�������жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  reserved_0: 4;  /* bit[0-3]  : ������ */
        unsigned short  rxim     : 1;  /* bit[4]    : �����жϵ�����״̬�� */
        unsigned short  txim     : 1;  /* bit[5]    : �����жϵ�����״̬�� */
        unsigned short  rtim     : 1;  /* bit[6]    : ���ճ�ʱ�жϵ�����״̬�� */
        unsigned short  feim     : 1;  /* bit[7]    : ֡�����жϵ�����״̬�� */
        unsigned short  peim     : 1;  /* bit[8]    : У���жϵ�����״̬�� */
        unsigned short  beim     : 1;  /* bit[9]    : break�����жϵ�����״̬�� */
        unsigned short  oeim     : 1;  /* bit[10]   : ��������жϵ�����״̬�� */
        unsigned short  reserved_1: 5;  /* bit[11-15]: ������ */
    } reg;
} SOC_UART_IMSC_UNION;
#endif
#define SOC_UART_IMSC_rxim_START      (4)
#define SOC_UART_IMSC_rxim_END        (4)
#define SOC_UART_IMSC_txim_START      (5)
#define SOC_UART_IMSC_txim_END        (5)
#define SOC_UART_IMSC_rtim_START      (6)
#define SOC_UART_IMSC_rtim_END        (6)
#define SOC_UART_IMSC_feim_START      (7)
#define SOC_UART_IMSC_feim_END        (7)
#define SOC_UART_IMSC_peim_START      (8)
#define SOC_UART_IMSC_peim_END        (8)
#define SOC_UART_IMSC_beim_START      (9)
#define SOC_UART_IMSC_beim_END        (9)
#define SOC_UART_IMSC_oeim_START      (10)
#define SOC_UART_IMSC_oeim_END        (10)


/*****************************************************************************
 �ṹ��    : SOC_UART_RIS_UNION
 �ṹ˵��  : RIS �Ĵ����ṹ���塣��ַƫ����:0x03C����ֵ:0x0000�����:16
 �Ĵ���˵��: ԭʼ�ж�״̬�Ĵ����������ݲ����ж����μĴ�����Ӱ�졣BitֵΪ0��ʾ���жϣ�Ϊ1��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  reserved_0: 4;  /* bit[0-3]  : ������ */
        unsigned short  rxris    : 1;  /* bit[4]    : ԭʼ�Ľ����ж�״̬�� */
        unsigned short  txris    : 1;  /* bit[5]    : ԭʼ�ķ����ж�״̬�� */
        unsigned short  rtris    : 1;  /* bit[6]    : ԭʼ�Ľ��ճ�ʱ�ж�״̬�� */
        unsigned short  feris    : 1;  /* bit[7]    : ԭʼ�Ĵ����ж�״̬�� */
        unsigned short  peris    : 1;  /* bit[8]    : ԭʼ��У���ж�״̬�� */
        unsigned short  beris    : 1;  /* bit[9]    : ԭʼ��break�����ж�״̬�� */
        unsigned short  oeris    : 1;  /* bit[10]   : ԭʼ����������ж�״̬�� */
        unsigned short  reserved_1: 5;  /* bit[11-15]: ������ */
    } reg;
} SOC_UART_RIS_UNION;
#endif
#define SOC_UART_RIS_rxris_START     (4)
#define SOC_UART_RIS_rxris_END       (4)
#define SOC_UART_RIS_txris_START     (5)
#define SOC_UART_RIS_txris_END       (5)
#define SOC_UART_RIS_rtris_START     (6)
#define SOC_UART_RIS_rtris_END       (6)
#define SOC_UART_RIS_feris_START     (7)
#define SOC_UART_RIS_feris_END       (7)
#define SOC_UART_RIS_peris_START     (8)
#define SOC_UART_RIS_peris_END       (8)
#define SOC_UART_RIS_beris_START     (9)
#define SOC_UART_RIS_beris_END       (9)
#define SOC_UART_RIS_oeris_START     (10)
#define SOC_UART_RIS_oeris_END       (10)


/*****************************************************************************
 �ṹ��    : SOC_UART_MIS_UNION
 �ṹ˵��  : MIS �Ĵ����ṹ���塣��ַƫ����:0x040����ֵ:0x0000�����:16
 �Ĵ���˵��: ���κ��ж�״̬�Ĵ�����������Ϊԭʼ�ж�״̬���ж����ν��С��롱������Ľ����BitֵΪ0��ʾ���жϣ�Ϊ1��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  reserved_0: 4;  /* bit[0-3]  : ������ */
        unsigned short  rxmis    : 1;  /* bit[4]    : ���κ�Ľ����ж�״̬�� */
        unsigned short  txmis    : 1;  /* bit[5]    : ���κ�ķ����ж�״̬�� */
        unsigned short  rtmis    : 1;  /* bit[6]    : ���κ�Ľ��ճ�ʱ�ж�״̬�� */
        unsigned short  femis    : 1;  /* bit[7]    : ���κ�Ĵ����ж�״̬�� */
        unsigned short  pemis    : 1;  /* bit[8]    : ���κ��У���ж�״̬�� */
        unsigned short  bemis    : 1;  /* bit[9]    : ���κ��break�����ж�״̬�� */
        unsigned short  oemis    : 1;  /* bit[10]   : ���κ����������ж�״̬�� */
        unsigned short  reserved_1: 5;  /* bit[11-15]: ������ */
    } reg;
} SOC_UART_MIS_UNION;
#endif
#define SOC_UART_MIS_rxmis_START     (4)
#define SOC_UART_MIS_rxmis_END       (4)
#define SOC_UART_MIS_txmis_START     (5)
#define SOC_UART_MIS_txmis_END       (5)
#define SOC_UART_MIS_rtmis_START     (6)
#define SOC_UART_MIS_rtmis_END       (6)
#define SOC_UART_MIS_femis_START     (7)
#define SOC_UART_MIS_femis_END       (7)
#define SOC_UART_MIS_pemis_START     (8)
#define SOC_UART_MIS_pemis_END       (8)
#define SOC_UART_MIS_bemis_START     (9)
#define SOC_UART_MIS_bemis_END       (9)
#define SOC_UART_MIS_oemis_START     (10)
#define SOC_UART_MIS_oemis_END       (10)


/*****************************************************************************
 �ṹ��    : SOC_UART_ICR_UNION
 �ṹ˵��  : ICR �Ĵ����ṹ���塣��ַƫ����:0x044����ֵ:0x0000�����:16
 �Ĵ���˵��: �ж�����Ĵ�����Bitֵд1ʱ��Ӧ���жϱ������д0�������á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  reserved_0: 4;  /* bit[0-3]  : ������ */
        unsigned short  rxic     : 1;  /* bit[4]    : ��������жϡ� */
        unsigned short  txic     : 1;  /* bit[5]    : ��������жϡ� */
        unsigned short  rtic     : 1;  /* bit[6]    : ������ճ�ʱ�жϡ� */
        unsigned short  feic     : 1;  /* bit[7]    : ��������жϡ� */
        unsigned short  peic     : 1;  /* bit[8]    : ���У���жϡ� */
        unsigned short  beic     : 1;  /* bit[9]    : ���break�����жϡ� */
        unsigned short  oeic     : 1;  /* bit[10]   : �����������жϡ� */
        unsigned short  reserved_1: 5;  /* bit[11-15]: ������ */
    } reg;
} SOC_UART_ICR_UNION;
#endif
#define SOC_UART_ICR_rxic_START      (4)
#define SOC_UART_ICR_rxic_END        (4)
#define SOC_UART_ICR_txic_START      (5)
#define SOC_UART_ICR_txic_END        (5)
#define SOC_UART_ICR_rtic_START      (6)
#define SOC_UART_ICR_rtic_END        (6)
#define SOC_UART_ICR_feic_START      (7)
#define SOC_UART_ICR_feic_END        (7)
#define SOC_UART_ICR_peic_START      (8)
#define SOC_UART_ICR_peic_END        (8)
#define SOC_UART_ICR_beic_START      (9)
#define SOC_UART_ICR_beic_END        (9)
#define SOC_UART_ICR_oeic_START      (10)
#define SOC_UART_ICR_oeic_END        (10)


/*****************************************************************************
 �ṹ��    : SOC_UART_DMACR_UNION
 �ṹ˵��  : DMACR �Ĵ����ṹ���塣��ַƫ����:0x048����ֵ:0x0000�����:16
 �Ĵ���˵��: DMA���ƼĴ������������÷���FIFO�ͽ���FIFO��DMAʹ�ܡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short      value;
    struct
    {
        unsigned short  rxdmae   : 1;  /* bit[0]   : ����FIFO��DMAʹ�ܿ��ơ�
                                                     0����ֹ��
                                                     1��ʹ�ܡ� */
        unsigned short  txdmae   : 1;  /* bit[1]   : ����FIFO��DMAʹ�ܿ��ơ�
                                                     0����ֹ��
                                                     1��ʹ�ܡ� */
        unsigned short  dmaonerr : 1;  /* bit[2]   : UART�����жϣ�UARTEINTR������ʱ�Ľ���ͨ��DMAʹ�ܿ��ơ�
                                                     0����UART�����жϣ�UARTEINTR����Чʱ������ͨ��DMA�����������UARTRXDMASREQ��UARRTXDMABREQ����Ч��
                                                     1����UART�����жϣ�UARTEINTR����Чʱ������ͨ��DMA�����������UARTRXDMASREQ��UARRTXDMABREQ����Ч�� */
        unsigned short  reserved : 13; /* bit[3-15]: ������ */
    } reg;
} SOC_UART_DMACR_UNION;
#endif
#define SOC_UART_DMACR_rxdmae_START    (0)
#define SOC_UART_DMACR_rxdmae_END      (0)
#define SOC_UART_DMACR_txdmae_START    (1)
#define SOC_UART_DMACR_txdmae_END      (1)
#define SOC_UART_DMACR_dmaonerr_START  (2)
#define SOC_UART_DMACR_dmaonerr_END    (2)






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

#endif /* end of soc_uart_interface.h */
