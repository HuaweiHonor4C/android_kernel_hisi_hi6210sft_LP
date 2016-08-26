/******************************************************************************

                 ��Ȩ���� (C), 2001-2012, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : soc_ssi_interface.h
  �� �� ��   : ����
  ��    ��   : Excel2Code
  ��������   : 2012-06-05 19:58:59
  ����޸�   :
  ��������   : �ӿ�ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2012��6��5��
    ��    ��   : m53479
    �޸�����   : �ӡ�Hi6620V100SOC�Ĵ����ֲ�_SSI.xml���Զ�����

******************************************************************************/

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_SSI_INTERFACE_H__
#define __SOC_SSI_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/1) SSI
 ****************************************************************************/
/* �Ĵ���˵�������ƼĴ������������õ�ַλ��������λ��
   λ����UNION�ṹ:  SOC_SSI_SSICR0_UNION */
#define SOC_SSI_SSICR0_ADDR(base)                     ((base) + (0x0000))

/* �Ĵ���˵�������ƼĴ�������Ҫ����SSI�е�ʹ���źš����ź���������SSI���շ����߼�������λ��ʹ�䲻�ܹ����ͻ�������ݡ�
   λ����UNION�ṹ:  SOC_SSI_SSICR1_UNION */
#define SOC_SSI_SSICR1_ADDR(base)                     ((base) + (0x0004))

/* �Ĵ���˵�������ƼĴ�������Ҫ����SSI�еĶ�д�ж��źš����ź���������SSI���ж�д�жϵĲ�����
   λ����UNION�ṹ:  SOC_SSI_SSICR2_UNION */
#define SOC_SSI_SSICR2_ADDR(base)                     ((base) + (0x0008))

/* �Ĵ���˵�������ƼĴ�������������SSI�еĽ���FIFO�Լ�����FIFO��ˮ�ߡ�
   λ����UNION�ṹ:  SOC_SSI_SSICR3_UNION */
#define SOC_SSI_SSICR3_ADDR(base)                     ((base) + (0x000C))

/* �Ĵ���˵�������ƼĴ�������������SSI�г�ʱ�ȴ�ʱ��WAIT_TIME�Լ�master check��ͬ��λ��ʱ�䡣
   λ����UNION�ṹ:  SOC_SSI_SSICR4_UNION */
#define SOC_SSI_SSICR4_ADDR(base)                     ((base) + (0x0010))

/* �Ĵ���˵����32λ������ݼĴ�����
            ��SSIDR����ʱ������FIFO�����ʣ�����ǰFIFO��ָ����ָ����������ֵ��SSI�����߼������������֡�Ƴ������Ǳ��ŵ�����FIFO�У�����ǰFIFOдָ����ָ����
            ��SSIDR��дʱ������FIFO��д�루����ǰFIFO��дָ����ָ��������ֵ�ӷ���FIFO�б������߼����������Ǳ�װ�ص����ʹ��е���λ����Ȼ���ڵ��ߴ����Ƴ���
            ���У���ַ��Ϣ�ڵ�λ��������Ϣ�ڸ�λ��
   ��      �����Է���/����FIFO��д���ݡ�
               ������ʱ��������FIFO��д��ַ��Ϣ���ȴ�һ��ʱ�䣬Ȼ��ӽ���FIFO�ж����ݡ�
               д����ʱ������FIFO��д��ַ��������Ϣ��
               ���е�λ��ŵ��ǵ�ַ��Ϣ����λ��ŵ���������Ϣ��
   UNION �ṹ���� */
#define SOC_SSI_SSIDR_ADDR(base)                      ((base) + (0x0014))

/* �Ĵ���˵����SSI״̬�Ĵ�����ֻ�����üĴ����з�ӳ�˵�ǰFIFO�Ŀ���״̬���Լ�SSI�Ƿ���æ״̬��
   λ����UNION�ṹ:  SOC_SSI_SSISR_UNION */
#define SOC_SSI_SSISR_ADDR(base)                      ((base) + (0x0018))

/* �Ĵ���˵����SSI�ж�������λ����Ĵ�����
            �����Ĵ�����������ж����εĵ�ǰֵ��
   λ����UNION�ṹ:  SOC_SSI_SSIIMSC_UNION */
#define SOC_SSI_SSIIMSC_ADDR(base)                    ((base) + (0x001C))

/* �Ĵ���˵����SSIԭʼ�ж�״̬�Ĵ�����ֻ�����洢����֮ǰ�ĳ�ʼ�жϵ��ж�״̬��
   λ����UNION�ṹ:  SOC_SSI_SSIRIS_UNION */
#define SOC_SSI_SSIRIS_ADDR(base)                     ((base) + (0x0020))

/* �Ĵ���˵����SSI�����ж�״̬�Ĵ�����ֻ�����洢�������κ���ж�״̬��
   λ����UNION�ṹ:  SOC_SSI_SSIMIS_UNION */
#define SOC_SSI_SSIMIS_ADDR(base)                     ((base) + (0x0024))

/* �Ĵ���˵����SSI�ж�����Ĵ�����ֻд��
   λ����UNION�ṹ:  SOC_SSI_SSIICR_UNION */
#define SOC_SSI_SSIICR_ADDR(base)                     ((base) + (0x0028))





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
                     (1/1) SSI
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_SSI_SSICR0_UNION
 �ṹ˵��  : SSICR0 �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ƼĴ������������õ�ַλ��������λ��
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ass      : 3;  /* bit[0-2] : ���õ�ַλ��
                                                   ֧��1bit��8bit
                                                   000��1bit�� 001��2bit��
                                                   010��3bit�� 011��4bit��
                                                   100��5bit�� 101��6bit��
                                                   110��7bit�� 111��8bit�� */
        unsigned int  dss      : 5;  /* bit[3-7] : ��������λ��
                                                   ֧��2bit��24bit��
                                                   00001��2bit�� 00010��3bit��
                                                   00011��4bit�� 00100��5bit��
                                                   00101��6bit�� 00110��7bit��
                                                   00111��8bit�� 01000��9bit��
                                                   01001��10bit��01010��11bit��
                                                   01011��12bit��01100��13bit��
                                                   01101��14bit��01110��15bit��
                                                   01111��16bit��10000��17bit��
                                                   10001��18bit��10010��19bit��
                                                   10011��20bit��10100��21bit��
                                                   10101��22bit��10110��23bit��
                                                   10111��24bit��
                                                   ������������ */
        unsigned int  reserved : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_SSI_SSICR0_UNION;
#define SOC_SSI_SSICR0_ass_START       (0)
#define SOC_SSI_SSICR0_ass_END         (2)
#define SOC_SSI_SSICR0_dss_START       (3)
#define SOC_SSI_SSICR0_dss_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_SSI_SSICR1_UNION
 �ṹ˵��  : SSICR1 �Ĵ����ṹ���塣��ַƫ����:0x0004����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ƼĴ�������Ҫ����SSI�е�ʹ���źš����ź���������SSI���շ����߼�������λ��ʹ�䲻�ܹ����ͻ�������ݡ�
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ssi_en   : 1;  /* bit[0]   : ����SSIʹ�ܡ�
                                                   0����ʹ�ܣ�
                                                   1��ʹ�ܡ� */
        unsigned int  reserved : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_SSI_SSICR1_UNION;
#define SOC_SSI_SSICR1_ssi_en_START    (0)
#define SOC_SSI_SSICR1_ssi_en_END      (0)


/*****************************************************************************
 �ṹ��    : SOC_SSI_SSICR2_UNION
 �ṹ˵��  : SSICR2 �Ĵ����ṹ���塣��ַƫ����:0x0008����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ƼĴ�������Ҫ����SSI�еĶ�д�ж��źš����ź���������SSI���ж�д�жϵĲ�����
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ssi_rw   : 1;  /* bit[0]   : ��д�����ж�λ��
                                                   0��д������
                                                   1���������� */
        unsigned int  reserved : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_SSI_SSICR2_UNION;
#define SOC_SSI_SSICR2_ssi_rw_START    (0)
#define SOC_SSI_SSICR2_ssi_rw_END      (0)


/*****************************************************************************
 �ṹ��    : SOC_SSI_SSICR3_UNION
 �ṹ˵��  : SSICR3 �Ĵ����ṹ���塣��ַƫ����:0x000C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ƼĴ�������������SSI�еĽ���FIFO�Լ�����FIFO��ˮ�ߡ�
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  txfifo_wl : 3;  /* bit[0-2] : ���÷���FIFOˮ�ߡ�
                                                    000��1�� 001��2��
                                                    010��3�� 011��4��
                                                    100��5�� 101��6��
                                                    110��7�� 111��8�� */
        unsigned int  rxfifo_wl : 3;  /* bit[3-5] : ���ý���FIFOˮ�ߡ�
                                                    000��1�� 001��2��
                                                    010��3�� 011��4��
                                                    100��5�� 101��6��
                                                    110��7�� 111��8�� */
        unsigned int  reserved  : 26; /* bit[6-31]: ������ */
    } reg;
} SOC_SSI_SSICR3_UNION;
#define SOC_SSI_SSICR3_txfifo_wl_START  (0)
#define SOC_SSI_SSICR3_txfifo_wl_END    (2)
#define SOC_SSI_SSICR3_rxfifo_wl_START  (3)
#define SOC_SSI_SSICR3_rxfifo_wl_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SSI_SSICR4_UNION
 �ṹ˵��  : SSICR4 �Ĵ����ṹ���塣��ַƫ����:0x0010����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ƼĴ�������������SSI�г�ʱ�ȴ�ʱ��WAIT_TIME�Լ�master check��ͬ��λ��ʱ�䡣
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wait_time  : 4;  /* bit[0-3] : ���ó�ʱ�ȴ�ʱ�䣬��λΪcycle��
                                                     0000��1�� 0001��2��
                                                     0010��3�� 0011��4��
                                                     0100��5�� 0101��6��
                                                     0110��7�� 0111��8��
                                                     1000��9�� 1001��10��
                                                     1010��11��1011��12��
                                                     1100��13��1101��14��
                                                     1110��15��1111��16�� */
        unsigned int  mst_ck_cfg : 3;  /* bit[4-6] : ��ֵ�������ö�����ʱ,master check��ͬ��λ��ʱ�䡣
                                                     000:1.5 clk 001:2.0 clk
                                                     010:2.5 clk 011:3.0 clk
                                                     100:3.5 clk 101:4.0 clk
                                                     110:4.5 clk 111:5.0 clk */
        unsigned int  reserved   : 25; /* bit[7-31]: ������ */
    } reg;
} SOC_SSI_SSICR4_UNION;
#define SOC_SSI_SSICR4_wait_time_START   (0)
#define SOC_SSI_SSICR4_wait_time_END     (3)
#define SOC_SSI_SSICR4_mst_ck_cfg_START  (4)
#define SOC_SSI_SSICR4_mst_ck_cfg_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_SSI_SSISR_UNION
 �ṹ˵��  : SSISR �Ĵ����ṹ���塣��ַƫ����:0x0018����ֵ:0x00000000�����:32
 �Ĵ���˵��: SSI״̬�Ĵ�����ֻ�����üĴ����з�ӳ�˵�ǰFIFO�Ŀ���״̬���Լ�SSI�Ƿ���æ״̬��
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tfe       : 1;  /* bit[0]    : ����FIFO �Ƿ��ѿա�
                                                     0��δ�գ�
                                                     1���ѿա� */
        unsigned int  tnf       : 1;  /* bit[1]    : ����FIFO �Ƿ�δ����
                                                     0��������
                                                     1��δ���� */
        unsigned int  rne       : 1;  /* bit[2]    : ����FIFO �Ƿ�δ�ա�
                                                     0���ѿգ�
                                                     1��δ�ա� */
        unsigned int  rff       : 1;  /* bit[3]    : ����FIFO�Ƿ�������
                                                     0��δ����
                                                     1�������� */
        unsigned int  bsy       : 1;  /* bit[4]    : SSI æ��ǡ�
                                                     0�����У�
                                                     1��æµ�� */
        unsigned int  rxfifl_lv : 3;  /* bit[5-7]  : ����FIFO��ȣ�������Ϊ8����
                                                     000��0�� 001��1��
                                                     010��2�� 011��3��
                                                     100��4�� 101��5��
                                                     110��6�� 111��7�� */
        unsigned int  txfifo_lv : 3;  /* bit[8-10] : ����FIFO��ȣ�������Ϊ8����
                                                     000��0�� 001��1��
                                                     010��2�� 011��3��
                                                     100��4�� 101��5��
                                                     110��6�� 111��7�� */
        unsigned int  reserved  : 21; /* bit[11-31]: ������ */
    } reg;
} SOC_SSI_SSISR_UNION;
#define SOC_SSI_SSISR_tfe_START        (0)
#define SOC_SSI_SSISR_tfe_END          (0)
#define SOC_SSI_SSISR_tnf_START        (1)
#define SOC_SSI_SSISR_tnf_END          (1)
#define SOC_SSI_SSISR_rne_START        (2)
#define SOC_SSI_SSISR_rne_END          (2)
#define SOC_SSI_SSISR_rff_START        (3)
#define SOC_SSI_SSISR_rff_END          (3)
#define SOC_SSI_SSISR_bsy_START        (4)
#define SOC_SSI_SSISR_bsy_END          (4)
#define SOC_SSI_SSISR_rxfifl_lv_START  (5)
#define SOC_SSI_SSISR_rxfifl_lv_END    (7)
#define SOC_SSI_SSISR_txfifo_lv_START  (8)
#define SOC_SSI_SSISR_txfifo_lv_END    (10)


/*****************************************************************************
 �ṹ��    : SOC_SSI_SSIIMSC_UNION
 �ṹ˵��  : SSIIMSC �Ĵ����ṹ���塣��ַƫ����:0x001C����ֵ:0x00000000�����:32
 �Ĵ���˵��: SSI�ж�������λ����Ĵ�����
            �����Ĵ�����������ж����εĵ�ǰֵ��
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rorim    : 1;  /* bit[0]   : ����FIFO����ж����Ρ�
                                                   0:���Ρ�
                                                   1:�����Ρ� */
        unsigned int  rtim     : 1;  /* bit[1]   : ���ճ�ʱ�ж����Ρ�
                                                   0:���Ρ�
                                                   1:�����Ρ� */
        unsigned int  rxim     : 1;  /* bit[2]   : ����FIFO�ж����Ρ�
                                                   0:���Ρ�
                                                   1:�����Ρ� */
        unsigned int  txim     : 1;  /* bit[3]   : ����FIFO�ж����Ρ�
                                                   0:���Ρ�
                                                   1:�����Ρ� */
        unsigned int  reserved : 28; /* bit[4-31]: ������ */
    } reg;
} SOC_SSI_SSIIMSC_UNION;
#define SOC_SSI_SSIIMSC_rorim_START     (0)
#define SOC_SSI_SSIIMSC_rorim_END       (0)
#define SOC_SSI_SSIIMSC_rtim_START      (1)
#define SOC_SSI_SSIIMSC_rtim_END        (1)
#define SOC_SSI_SSIIMSC_rxim_START      (2)
#define SOC_SSI_SSIIMSC_rxim_END        (2)
#define SOC_SSI_SSIIMSC_txim_START      (3)
#define SOC_SSI_SSIIMSC_txim_END        (3)


/*****************************************************************************
 �ṹ��    : SOC_SSI_SSIRIS_UNION
 �ṹ˵��  : SSIRIS �Ĵ����ṹ���塣��ַƫ����:0x0020����ֵ:0x00000000�����:32
 �Ĵ���˵��: SSIԭʼ�ж�״̬�Ĵ�����ֻ�����洢����֮ǰ�ĳ�ʼ�жϵ��ж�״̬��
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rorris   : 1;  /* bit[0]   : ��������жϵ�ԭʼ�ж�״̬��
                                                   0�����жϣ�
                                                   1�����жϡ� */
        unsigned int  rtris    : 1;  /* bit[1]   : ���ճ�ʱ�жϵ�ԭʼ�ж�״̬��
                                                   0�����жϣ�
                                                   1�����жϡ� */
        unsigned int  rxris    : 1;  /* bit[2]   : ����FIFO�жϵ�ԭʼ�ж�״̬��
                                                   0�����жϣ�
                                                   1�����жϡ� */
        unsigned int  txris    : 1;  /* bit[3]   : ����FIFO�жϵ�ԭʼ�ж�״̬��
                                                   0�����жϣ�
                                                   1�����жϡ� */
        unsigned int  reserved : 28; /* bit[4-31]: ������ */
    } reg;
} SOC_SSI_SSIRIS_UNION;
#define SOC_SSI_SSIRIS_rorris_START    (0)
#define SOC_SSI_SSIRIS_rorris_END      (0)
#define SOC_SSI_SSIRIS_rtris_START     (1)
#define SOC_SSI_SSIRIS_rtris_END       (1)
#define SOC_SSI_SSIRIS_rxris_START     (2)
#define SOC_SSI_SSIRIS_rxris_END       (2)
#define SOC_SSI_SSIRIS_txris_START     (3)
#define SOC_SSI_SSIRIS_txris_END       (3)


/*****************************************************************************
 �ṹ��    : SOC_SSI_SSIMIS_UNION
 �ṹ˵��  : SSIMIS �Ĵ����ṹ���塣��ַƫ����:0x0024����ֵ:0x00000000�����:32
 �Ĵ���˵��: SSI�����ж�״̬�Ĵ�����ֻ�����洢�������κ���ж�״̬��
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rormis   : 1;  /* bit[0]   : ��������ж����κ��״̬��
                                                   0�����жϣ�
                                                   1�����жϡ� */
        unsigned int  rtmis    : 1;  /* bit[1]   : ���ճ�ʱ�ж����κ��״̬��
                                                   0�����жϣ�
                                                   1�����жϡ� */
        unsigned int  rxmis    : 1;  /* bit[2]   : ����FIFO�ж����κ��״̬��
                                                   0�����жϣ�
                                                   1�����ж� */
        unsigned int  txmis    : 1;  /* bit[3]   : ����FIFO�ж����κ��״̬��
                                                   0�����жϣ�
                                                   1�����жϡ� */
        unsigned int  reserved : 28; /* bit[4-31]: ������ */
    } reg;
} SOC_SSI_SSIMIS_UNION;
#define SOC_SSI_SSIMIS_rormis_START    (0)
#define SOC_SSI_SSIMIS_rormis_END      (0)
#define SOC_SSI_SSIMIS_rtmis_START     (1)
#define SOC_SSI_SSIMIS_rtmis_END       (1)
#define SOC_SSI_SSIMIS_rxmis_START     (2)
#define SOC_SSI_SSIMIS_rxmis_END       (2)
#define SOC_SSI_SSIMIS_txmis_START     (3)
#define SOC_SSI_SSIMIS_txmis_END       (3)


/*****************************************************************************
 �ṹ��    : SOC_SSI_SSIICR_UNION
 �ṹ˵��  : SSIICR �Ĵ����ṹ���塣��ַƫ����:0x0028����ֵ:0x00000000�����:32
 �Ĵ���˵��: SSI�ж�����Ĵ�����ֻд��
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rorim    : 1;  /* bit[0]   : �����������жϡ�
                                                   0����Ӱ�죻
                                                   1������жϡ� */
        unsigned int  rtim     : 1;  /* bit[1]   : ������ճ�ʱ�жϡ�
                                                   0����Ӱ�죻
                                                   1������жϡ� */
        unsigned int  rxim     : 1;  /* bit[2]   : ��������жϡ�
                                                   0����Ӱ�죻
                                                   1������жϡ� */
        unsigned int  txim     : 1;  /* bit[3]   : ��������жϡ�
                                                   0����Ӱ�죻
                                                   1������жϡ� */
        unsigned int  reserved : 28; /* bit[4-31]: ������ */
    } reg;
} SOC_SSI_SSIICR_UNION;
#define SOC_SSI_SSIICR_rorim_START     (0)
#define SOC_SSI_SSIICR_rorim_END       (0)
#define SOC_SSI_SSIICR_rtim_START      (1)
#define SOC_SSI_SSIICR_rtim_END        (1)
#define SOC_SSI_SSIICR_rxim_START      (2)
#define SOC_SSI_SSIICR_rxim_END        (2)
#define SOC_SSI_SSIICR_txim_START      (3)
#define SOC_SSI_SSIICR_txim_END        (3)






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

#endif /* end of soc_ssi_interface.h */
