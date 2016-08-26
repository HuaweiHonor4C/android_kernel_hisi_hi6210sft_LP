

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_NANDC_INTERFACE_H__
#define __SOC_NANDC_INTERFACE_H__

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
/* �Ĵ���˵�������ݶ�д��Ŀ�Ĵ���
   λ����UNION�ṹ:  SOC_NANDC_NfDataNum_UNION */
#define SOC_NANDC_NfDataNum_ADDR(base)                ((base) + (0x21000))

/* �Ĵ���˵�����ȴ����ƼĴ���
   λ����UNION�ṹ:  SOC_NANDC_NfWSC_UNION */
#define SOC_NANDC_NfWSC_ADDR(base)                    ((base) + (0x21004))

/* �Ĵ���˵�����������üĴ�����
   λ����UNION�ṹ:  SOC_NANDC_NfDeviceCfg_UNION */
#define SOC_NANDC_NfDeviceCfg_ADDR(base)              ((base) + (0x21008))

/* �Ĵ���˵�����������üĴ���
   λ����UNION�ṹ:  SOC_NANDC_NfCmdCfg_UNION */
#define SOC_NANDC_NfCmdCfg_ADDR(base)                 ((base) + (0x2100C))

/* �Ĵ���˵��������Ĵ���
   λ����UNION�ṹ:  SOC_NANDC_NfCmd_UNION */
#define SOC_NANDC_NfCmd_ADDR(base)                    ((base) + (0x21010))

/* �Ĵ���˵������λ��ַ�Ĵ���
   λ����UNION�ṹ:  SOC_NANDC_NfAddrL_UNION */
#define SOC_NANDC_NfAddrL_ADDR(base)                  ((base) + (0x21014))

/* �Ĵ���˵������λ��ַ�Ĵ���
   λ����UNION�ṹ:  SOC_NANDC_NfAddrH_UNION */
#define SOC_NANDC_NfAddrH_ADDR(base)                  ((base) + (0x21018))

/* �Ĵ���˵����NandC���üĴ���
   λ����UNION�ṹ:  SOC_NANDC_NfCfg_UNION */
#define SOC_NANDC_NfCfg_ADDR(base)                    ((base) + (0x2101C))

/* �Ĵ���˵����buffer��д���ƼĴ���
   λ����UNION�ṹ:  SOC_NANDC_NfBufReady_UNION */
#define SOC_NANDC_NfBufReady_ADDR(base)               ((base) + (0x21020))

/* �Ĵ���˵�����ж�ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_NANDC_NfIntEn_UNION */
#define SOC_NANDC_NfIntEn_ADDR(base)                  ((base) + (0x21024))

/* �Ĵ���˵�����ж�״̬�Ĵ���
   λ����UNION�ṹ:  SOC_NANDC_NfIntStatus_UNION */
#define SOC_NANDC_NfIntStatus_ADDR(base)              ((base) + (0x21028))

/* �Ĵ���˵�����ж�����Ĵ���
   λ����UNION�ṹ:  SOC_NANDC_NfIntClr_UNION */
#define SOC_NANDC_NfIntClr_ADDR(base)                 ((base) + (0x2102C))

/* �Ĵ���˵�����������Ĵ���
   λ����UNION�ṹ:  SOC_NANDC_StartRd_UNION */
#define SOC_NANDC_StartRd_ADDR(base)                  ((base) + (0x21030))

/* �Ĵ���˵����CS don��t careģʽʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_NANDC_CsdnEn_UNION */
#define SOC_NANDC_CsdnEn_ADDR(base)                   ((base) + (0x21034))

/* �Ĵ���˵����FlashLock��ʼ��ַ�Ĵ���1
   λ����UNION�ṹ:  SOC_NANDC_NfLockStartAddr1_UNION */
#define SOC_NANDC_NfLockStartAddr1_ADDR(base)         ((base) + (0x21038))

/* �Ĵ���˵����FlashLock��ʼ�����Ĵ���1
   λ����UNION�ṹ:  SOC_NANDC_NfLockEndAddr1_UNION */
#define SOC_NANDC_NfLockEndAddr1_ADDR(base)           ((base) + (0x2103C))

/* �Ĵ���˵����FlashLock��ʼ��ַ�Ĵ���2
   λ����UNION�ṹ:  SOC_NANDC_NfLockStartAddr2_UNION */
#define SOC_NANDC_NfLockStartAddr2_ADDR(base)         ((base) + (0x21040))

/* �Ĵ���˵����FlashLock��ʼ�����Ĵ���2
   λ����UNION�ṹ:  SOC_NANDC_NfLockEndAddr2_UNION */
#define SOC_NANDC_NfLockEndAddr2_ADDR(base)           ((base) + (0x21044))

/* �Ĵ���˵����FlashLock��ʼ��ַ�Ĵ���3
   λ����UNION�ṹ:  SOC_NANDC_NfLockStartAddr3_UNION */
#define SOC_NANDC_NfLockStartAddr3_ADDR(base)         ((base) + (0x21048))

/* �Ĵ���˵����FlashLock��ʼ�����Ĵ���3
   λ����UNION�ṹ:  SOC_NANDC_NfLockEndAddr3_UNION */
#define SOC_NANDC_NfLockEndAddr3_ADDR(base)           ((base) + (0x2104C))

/* �Ĵ���˵����FlashLock��ʼ��ַ�Ĵ���4
   λ����UNION�ṹ:  SOC_NANDC_NfLockStartAddr4_UNION */
#define SOC_NANDC_NfLockStartAddr4_ADDR(base)         ((base) + (0x21050))

/* �Ĵ���˵����FlashLock��ʼ�����Ĵ���4
   λ����UNION�ṹ:  SOC_NANDC_NfLockEndAddr4_UNION */
#define SOC_NANDC_NfLockEndAddr4_ADDR(base)           ((base) + (0x21054))

/* �Ĵ���˵����FlashLockʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_NANDC_NfLockEn_UNION */
#define SOC_NANDC_NfLockEn_ADDR(base)                 ((base) + (0x21058))

/* �Ĵ���˵����FlashLock���ƼĴ���
   λ����UNION�ṹ:  SOC_NANDC_NfLockCont_UNION */
#define SOC_NANDC_NfLockCont_ADDR(base)               ((base) + (0x2105C))

/* �Ĵ���˵����FlashLock�������üĴ���1
   λ����UNION�ṹ:  SOC_NANDC_NflockCommand1_UNION */
#define SOC_NANDC_NflockCommand1_ADDR(base)           ((base) + (0x21060))

/* �Ĵ���˵����FlashLock�������üĴ���2
   λ����UNION�ṹ:  SOC_NANDC_NflockCommand2_UNION */
#define SOC_NANDC_NflockCommand2_ADDR(base)           ((base) + (0x21064))





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
 �ṹ��    : SOC_NANDC_NfDataNum_UNION
 �ṹ˵��  : NfDataNum �Ĵ����ṹ���塣��ַƫ����:0x21000����ֵ:0x840�����:32
 �Ĵ���˵��: ���ݶ�д��Ŀ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  NfDataNum : 12; /* bit[0-11] : ��дbyte����Ŀ��0����д0��byte��
                                                     ȱʡ��д2112 (528*4) byte�� */
        unsigned int  reserved  : 20; /* bit[12-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfDataNum_UNION;
#endif
#define SOC_NANDC_NfDataNum_NfDataNum_START  (0)
#define SOC_NANDC_NfDataNum_NfDataNum_END    (11)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfWSC_UNION
 �ṹ˵��  : NfWSC �Ĵ����ṹ���塣��ַƫ����:0x21004����ֵ:0xF333�����:32
 �Ĵ���˵��: �ȴ����ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wt pulse          : 4;  /* bit[0-3]  : NandFlashд�źŵ͵�ƽ��ȡ�
                                                             4��b0000��һ��ʱ������
                                                             ��
                                                             4��b1111��16��ʱ������ */
        unsigned int  rd pulse          : 4;  /* bit[4-7]  : NandFlash���źŵ͵�ƽ��ȡ�
                                                             4��b0001��2��ʱ������
                                                             ��
                                                             4��b1111��16��ʱ������ */
        unsigned int  rd/wt high wide   : 4;  /* bit[8-11] : NandFlash��/д�źŸߵ�ƽ���
                                                             4��b0001��2��ʱ������
                                                             ��
                                                             4��b1111��16��ʱ������
                                                             ע����������Ϊ0 */
        unsigned int  wait busy delay   : 4;  /* bit[12-15]: NandFlash��������һ����ַ��busy״̬����ʱ��
                                                             4��h0��2��ʱ�����ڡ�
                                                             4��hF��32��ʱ������ */
        unsigned int  cs not care delay : 4;  /* bit[16-19]: cs don��t care�����ready/busy�ź����ͺ�cs��Ч���ӳ�ʱ�䣺
                                                             4��h0��0��ʱ�����ڡ�
                                                             4��hF��15��ʱ������ */
        unsigned int  reserved          : 12; /* bit[20-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfWSC_UNION;
#endif
#define SOC_NANDC_NfWSC_wt pulse_START           (0)
#define SOC_NANDC_NfWSC_wt pulse_END             (3)
#define SOC_NANDC_NfWSC_rd pulse_START           (4)
#define SOC_NANDC_NfWSC_rd pulse_END             (7)
#define SOC_NANDC_NfWSC_rd/wt high wide_START    (8)
#define SOC_NANDC_NfWSC_rd/wt high wide_END      (11)
#define SOC_NANDC_NfWSC_wait busy delay_START    (12)
#define SOC_NANDC_NfWSC_wait busy delay_END      (15)
#define SOC_NANDC_NfWSC_cs not care delay_START  (16)
#define SOC_NANDC_NfWSC_cs not care delay_END    (19)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfDeviceCfg_UNION
 �ṹ˵��  : NfDeviceCfg �Ĵ����ṹ���塣��ַƫ����:0x21008����ֵ:-�����:32
 �Ĵ���˵��: �������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  page size     : 1;  /* bit[0]   : NandFlash��ҳ��С��
                                                        0��512 byte/page
                                                        1��2K byte/page��
                                                        ��λֵ�ɹܽ�nand_page_sizeȡ������ */
        unsigned int  data bus wide : 1;  /* bit[1]   : NandFlash�������߿�ȡ�
                                                        0��8bit��1��16bit��
                                                        ��λֵ�ɹܽ�nand_bus_wide���� */
        unsigned int  reserved      : 30; /* bit[2-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfDeviceCfg_UNION;
#endif
#define SOC_NANDC_NfDeviceCfg_page size_START      (0)
#define SOC_NANDC_NfDeviceCfg_page size_END        (0)
#define SOC_NANDC_NfDeviceCfg_data bus wide_START  (1)
#define SOC_NANDC_NfDeviceCfg_data bus wide_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfCmdCfg_UNION
 �ṹ˵��  : NfCmdCfg �Ĵ����ṹ���塣��ַƫ����:0x2100C����ֵ:-�����:32
 �Ĵ���˵��: �������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  address cycles         : 3;  /* bit[0-2]  : Controller����NandFlash�ĵ�ַ������
                                                                  ȱʡֵ�ɹܽ�nand_addr_num[1:0]��������ϵ���¡�
                                                                  nand_addr_num��0����address cycles��5��nand_addr_num��1����address cycles��4��nand_addr_num��2����address cycles��3 */
        unsigned int  reserved_0             : 1;  /* bit[3]    : ���� */
        unsigned int  command address format : 1;  /* bit[4]    : Controller����NandFlash�������ַ��ʽ
                                                                  0�����͡�comand1����ַ��
                                                                  1�����͡�comand1����ַ��command2����
                                                                  ��λֵ�ɹܽ�nand_page_size������nand_page_size����0����λֵΪ0��nand_page_size����1����λֵΪ1 */
        unsigned int  command only           : 1;  /* bit[5]    : 0��Controller���������ַ�󣬸���Controller��ǰ�Ķ�д״̬��������д����״̬����
                                                                  1��Controllerֻ���������ַ����������д����״̬����
                                                                  ��CPUֱ�Ӷ�д����ʱ����λ��Ӧ1 */
        unsigned int  read/write mode        : 1;  /* bit[6]    : 0����NandFlash������
                                                                  1����NandFlashд����
                                                                  ��bootģʽ�£���λ��Ӳ����0��һ�����ڶ�״̬ */
        unsigned int  Busy Not Care          : 1;  /* bit[7]    : 0����busy״̬�²�����nand flash�������
                                                                  1����busy״̬�¿�����nand flash�������� */
        unsigned int  CSSEL                  : 2;  /* bit[8-9]  : CS select��
                                                                  00��ѡ��cs0_n��
                                                                  01��ѡ��cs1_n��
                                                                  10��ѡ��cs2_n��
                                                                  11��ѡ��cs3_n */
        unsigned int  EBI_N                  : 1;  /* bit[10]   : 0��CS don��t careʱEBI�����ͣ�
                                                                  1��CS don��t careʱEBIҲ���͡� */
        unsigned int  reserved_1             : 21; /* bit[11-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfCmdCfg_UNION;
#endif
#define SOC_NANDC_NfCmdCfg_address cycles_START          (0)
#define SOC_NANDC_NfCmdCfg_address cycles_END            (2)
#define SOC_NANDC_NfCmdCfg_command address format_START  (4)
#define SOC_NANDC_NfCmdCfg_command address format_END    (4)
#define SOC_NANDC_NfCmdCfg_command only_START            (5)
#define SOC_NANDC_NfCmdCfg_command only_END              (5)
#define SOC_NANDC_NfCmdCfg_read/write mode_START         (6)
#define SOC_NANDC_NfCmdCfg_read/write mode_END           (6)
#define SOC_NANDC_NfCmdCfg_Busy Not Care_START           (7)
#define SOC_NANDC_NfCmdCfg_Busy Not Care_END             (7)
#define SOC_NANDC_NfCmdCfg_CSSEL_START                   (8)
#define SOC_NANDC_NfCmdCfg_CSSEL_END                     (9)
#define SOC_NANDC_NfCmdCfg_EBI_N_START                   (10)
#define SOC_NANDC_NfCmdCfg_EBI_N_END                     (10)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfCmd_UNION
 �ṹ˵��  : NfCmd �Ĵ����ṹ���塣��ַƫ����:0x21010����ֵ:0x3000�����:32
 �Ĵ���˵��: ����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  command 1 : 8;  /* bit[0-7]  : Controller����NandFlash�ĵ�һ������ */
        unsigned int  command 2 : 8;  /* bit[8-15] : Controller����NandFlash�ĵڶ������� */
        unsigned int  reserved  : 16; /* bit[16-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfCmd_UNION;
#endif
#define SOC_NANDC_NfCmd_command 1_START  (0)
#define SOC_NANDC_NfCmd_command 1_END    (7)
#define SOC_NANDC_NfCmd_command 2_START  (8)
#define SOC_NANDC_NfCmd_command 2_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfAddrL_UNION
 �ṹ˵��  : NfAddrL �Ĵ����ṹ���塣��ַƫ����:0x21014����ֵ:0x0�����:32
 �Ĵ���˵��: ��λ��ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  low address : 32; /* bit[0-31]: NandFlash��32bit��ַ */
    } reg;
} SOC_NANDC_NfAddrL_UNION;
#endif
#define SOC_NANDC_NfAddrL_low address_START  (0)
#define SOC_NANDC_NfAddrL_low address_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfAddrH_UNION
 �ṹ˵��  : NfAddrH �Ĵ����ṹ���塣��ַƫ����:0x21018����ֵ:0x0�����:32
 �Ĵ���˵��: ��λ��ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  high address : 8;  /* bit[0-7] : NandFlash��8bit��ַ */
        unsigned int  reserved     : 24; /* bit[8-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfAddrH_UNION;
#endif
#define SOC_NANDC_NfAddrH_high address_START  (0)
#define SOC_NANDC_NfAddrH_high address_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfCfg_UNION
 �ṹ˵��  : NfCfg �Ĵ����ṹ���塣��ַƫ����:0x2101C����ֵ:0x0�����:32
 �Ĵ���˵��: NandC���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  boot mode disable         : 1;  /* bit[0]   : 0��NandFlash Controller����bootģʽ��
                                                                    1��NandFlash Controller����normalģʽ */
        unsigned int  ECC bypass                : 1;  /* bit[1]   : 0��ECCУ��ʹ�ܡ�1��ECCУ���ֹ�� */
        unsigned int  SECC bypass               : 1;  /* bit[2]   : 0��LSN����ECCУ��ʹ�ܡ�
                                                                    1��LSN����ECCУ���ֹ�� */
        unsigned int  ECC error correct disable : 1;  /* bit[3]   : 0��ECC 1bit����ʹ�ܡ�
                                                                    1��ECC 1bit�����ֹ */
        unsigned int  reserved                  : 28; /* bit[4-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfCfg_UNION;
#endif
#define SOC_NANDC_NfCfg_boot mode disable_START          (0)
#define SOC_NANDC_NfCfg_boot mode disable_END            (0)
#define SOC_NANDC_NfCfg_ECC bypass_START                 (1)
#define SOC_NANDC_NfCfg_ECC bypass_END                   (1)
#define SOC_NANDC_NfCfg_SECC bypass_START                (2)
#define SOC_NANDC_NfCfg_SECC bypass_END                  (2)
#define SOC_NANDC_NfCfg_ECC error correct disable_START  (3)
#define SOC_NANDC_NfCfg_ECC error correct disable_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfBufReady_UNION
 �ṹ˵��  : NfBufReady �Ĵ����ṹ���塣��ַƫ����:0x21020����ֵ:0xF�����:32
 �Ĵ���˵��: buffer��д���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  buffer ready : 4;  /* bit[0-3] : ÿ��bit��Ӧһ��buffer��
                                                       ������ʱ����NandFlash��ȡ�����ݣ�д����bit0��ʼ����һ��״̬Ϊ1��buffer�������һ��״̬Ϊ1��buffer��
                                                       д����ʱ����bit0��ʼ����һ��bitΪ1��buffer������д��NandFlash.
                                                       �üĴ���ֻ��512 byte page size������Ч */
        unsigned int  reserved     : 28; /* bit[4-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfBufReady_UNION;
#endif
#define SOC_NANDC_NfBufReady_buffer ready_START  (0)
#define SOC_NANDC_NfBufReady_buffer ready_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfIntEn_UNION
 �ṹ˵��  : NfIntEn �Ĵ����ṹ���塣��ַƫ����:0x21024����ֵ:0x0�����:32
 �Ĵ���˵��: �ж�ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  command done CS0    : 1;  /* bit[0]    : controller����������͵�ַ�󣬲����ж� */
        unsigned int  read done CS0       : 1;  /* bit[1]    : �����������������ж� */
        unsigned int  write done CS0      : 1;  /* bit[2]    : д���������������ж� */
        unsigned int  reserved_0          : 1;  /* bit[3]    : ����λ */
        unsigned int  command done CS1    : 1;  /* bit[4]    : controller����������͵�ַ�󣬲����ж� */
        unsigned int  read done CS1       : 1;  /* bit[5]    : �����������������ж� */
        unsigned int  write done CS1      : 1;  /* bit[6]    : д���������������ж� */
        unsigned int  reserved_1          : 1;  /* bit[7]    : ����λ */
        unsigned int  command done CS2    : 1;  /* bit[8]    : controller����������͵�ַ�󣬲����ж� */
        unsigned int  read done CS2       : 1;  /* bit[9]    : �����������������ж� */
        unsigned int  write done CS2      : 1;  /* bit[10]   : д���������������ж� */
        unsigned int  reserved_2          : 1;  /* bit[11]   : ����λ */
        unsigned int  command done CS3    : 1;  /* bit[12]   : controller����������͵�ַ�󣬲����ж� */
        unsigned int  read done CS3       : 1;  /* bit[13]   : �����������������ж� */
        unsigned int  write done CS3      : 1;  /* bit[14]   : Ecc 2bits �����жϣ�
                                                               ���bit[21]Ϊ1��ָʾ1bit�жϣ���ôbit[14]ͬʱָʾΪ0������������1bit error�жϣ�
                                                               ���bit[21]Ϊ1��ָʾ1bit�жϣ���bit[14]ҲΪ1����ô����1bit error�����������2bits error����Ϊ1bit error����� */
        unsigned int  reserved_3          : 1;  /* bit[15]   : ����λ */
        unsigned int  all buffer ready    : 1;  /* bit[16]   : ��״̬�£�����buffer������Ч */
        unsigned int  buffer1 ready       : 1;  /* bit[17]   : ��״̬�£�buffer1������Ч�������жϡ�ֻ��512 byte page size������Ч */
        unsigned int  buffer2 ready       : 1;  /* bit[18]   : ��״̬�£�buffer1������Ч�������жϡ�ֻ��512 byte page size������Ч */
        unsigned int  buffer3 ready       : 1;  /* bit[19]   : ��״̬�£�buffer1������Ч�������жϡ�ֻ��512 byte page size������Ч */
        unsigned int  buffer4 ready       : 1;  /* bit[20]   : ��״̬�£�buffer1������Ч�������жϡ�ֻ��512 byte page size������Ч */
        unsigned int  data ecc 1bit error : 1;  /* bit[21]   : eccУ��1bit���������ж� */
        unsigned int  data ecc 2bit error : 1;  /* bit[22]   : eccУ��2bit���ϳ��������ж� */
        unsigned int  lsn ecc 1bit error  : 1;  /* bit[23]   : lsn ����eccУ��1bit���������ж� */
        unsigned int  lsn ecc 2bit error  : 1;  /* bit[24]   : lsn ����eccУ��2bit���ϳ��������ж� */
        unsigned int  flashlock error     : 1;  /* bit[25]   : flashlockδ����ʱ��������Ĵ���д��� */
        unsigned int  reserved_4          : 6;  /* bit[26-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfIntEn_UNION;
#endif
#define SOC_NANDC_NfIntEn_command done CS0_START     (0)
#define SOC_NANDC_NfIntEn_command done CS0_END       (0)
#define SOC_NANDC_NfIntEn_read done CS0_START        (1)
#define SOC_NANDC_NfIntEn_read done CS0_END          (1)
#define SOC_NANDC_NfIntEn_write done CS0_START       (2)
#define SOC_NANDC_NfIntEn_write done CS0_END         (2)
#define SOC_NANDC_NfIntEn_command done CS1_START     (4)
#define SOC_NANDC_NfIntEn_command done CS1_END       (4)
#define SOC_NANDC_NfIntEn_read done CS1_START        (5)
#define SOC_NANDC_NfIntEn_read done CS1_END          (5)
#define SOC_NANDC_NfIntEn_write done CS1_START       (6)
#define SOC_NANDC_NfIntEn_write done CS1_END         (6)
#define SOC_NANDC_NfIntEn_command done CS2_START     (8)
#define SOC_NANDC_NfIntEn_command done CS2_END       (8)
#define SOC_NANDC_NfIntEn_read done CS2_START        (9)
#define SOC_NANDC_NfIntEn_read done CS2_END          (9)
#define SOC_NANDC_NfIntEn_write done CS2_START       (10)
#define SOC_NANDC_NfIntEn_write done CS2_END         (10)
#define SOC_NANDC_NfIntEn_command done CS3_START     (12)
#define SOC_NANDC_NfIntEn_command done CS3_END       (12)
#define SOC_NANDC_NfIntEn_read done CS3_START        (13)
#define SOC_NANDC_NfIntEn_read done CS3_END          (13)
#define SOC_NANDC_NfIntEn_write done CS3_START       (14)
#define SOC_NANDC_NfIntEn_write done CS3_END         (14)
#define SOC_NANDC_NfIntEn_all buffer ready_START     (16)
#define SOC_NANDC_NfIntEn_all buffer ready_END       (16)
#define SOC_NANDC_NfIntEn_buffer1 ready_START        (17)
#define SOC_NANDC_NfIntEn_buffer1 ready_END          (17)
#define SOC_NANDC_NfIntEn_buffer2 ready_START        (18)
#define SOC_NANDC_NfIntEn_buffer2 ready_END          (18)
#define SOC_NANDC_NfIntEn_buffer3 ready_START        (19)
#define SOC_NANDC_NfIntEn_buffer3 ready_END          (19)
#define SOC_NANDC_NfIntEn_buffer4 ready_START        (20)
#define SOC_NANDC_NfIntEn_buffer4 ready_END          (20)
#define SOC_NANDC_NfIntEn_data ecc 1bit error_START  (21)
#define SOC_NANDC_NfIntEn_data ecc 1bit error_END    (21)
#define SOC_NANDC_NfIntEn_data ecc 2bit error_START  (22)
#define SOC_NANDC_NfIntEn_data ecc 2bit error_END    (22)
#define SOC_NANDC_NfIntEn_lsn ecc 1bit error_START   (23)
#define SOC_NANDC_NfIntEn_lsn ecc 1bit error_END     (23)
#define SOC_NANDC_NfIntEn_lsn ecc 2bit error_START   (24)
#define SOC_NANDC_NfIntEn_lsn ecc 2bit error_END     (24)
#define SOC_NANDC_NfIntEn_flashlock error_START      (25)
#define SOC_NANDC_NfIntEn_flashlock error_END        (25)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfIntStatus_UNION
 �ṹ˵��  : NfIntStatus �Ĵ����ṹ���塣��ַƫ����:0x21028����ֵ:0x0�����:32
 �Ĵ���˵��: �ж�״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  command done CS0    : 1;  /* bit[0]    : controller����������͵�ַ�󣬲����ж� */
        unsigned int  read done CS0       : 1;  /* bit[1]    : �����������������ж� */
        unsigned int  write done CS0      : 1;  /* bit[2]    : д���������������ж� */
        unsigned int  reserved_0          : 1;  /* bit[3]    : ����λ */
        unsigned int  command done CS1    : 1;  /* bit[4]    : controller����������͵�ַ�󣬲����ж� */
        unsigned int  read done CS1       : 1;  /* bit[5]    : �����������������ж� */
        unsigned int  write done CS1      : 1;  /* bit[6]    : д���������������ж� */
        unsigned int  reserved_1          : 1;  /* bit[7]    : ����λ */
        unsigned int  command done CS2    : 1;  /* bit[8]    : controller����������͵�ַ�󣬲����ж� */
        unsigned int  read done CS2       : 1;  /* bit[9]    : �����������������ж� */
        unsigned int  write done CS2      : 1;  /* bit[10]   : д���������������ж� */
        unsigned int  reserved_2          : 1;  /* bit[11]   : ����λ */
        unsigned int  command done CS3    : 1;  /* bit[12]   : controller����������͵�ַ�󣬲����ж� */
        unsigned int  read done CS3       : 1;  /* bit[13]   : �����������������ж� */
        unsigned int  write done CS3      : 1;  /* bit[14]   : Ecc 2bits �����жϣ�
                                                               ���bit[21]Ϊ1��ָʾ1bit�жϣ���ôbit[14]ͬʱָʾΪ0������������1bit error�жϣ�
                                                               ���bit[21]Ϊ1��ָʾ1bit�жϣ���bit[14]ҲΪ1����ô����1bit error�����������2bits error����Ϊ1bit error����� */
        unsigned int  reserved_3          : 1;  /* bit[15]   : ����λ */
        unsigned int  all buffer ready    : 1;  /* bit[16]   : ��״̬�£�����buffer������Ч */
        unsigned int  buffer1 ready       : 1;  /* bit[17]   : ��״̬�£�buffer1������Ч�������жϡ�ֻ��512 byte page size������Ч */
        unsigned int  buffer2 ready       : 1;  /* bit[18]   : ��״̬�£�buffer1������Ч�������жϡ�ֻ��512 byte page size������Ч */
        unsigned int  buffer3 ready       : 1;  /* bit[19]   : ��״̬�£�buffer1������Ч�������жϡ�ֻ��512 byte page size������Ч */
        unsigned int  buffer4 ready       : 1;  /* bit[20]   : ��״̬�£�buffer1������Ч�������жϡ�ֻ��512 byte page size������Ч */
        unsigned int  data ecc 1bit error : 1;  /* bit[21]   : eccУ��1bit���������ж� */
        unsigned int  data ecc 2bit error : 1;  /* bit[22]   : eccУ��2bit���ϳ��������ж� */
        unsigned int  lsn ecc 1bit error  : 1;  /* bit[23]   : lsn ����eccУ��1bit���������ж� */
        unsigned int  lsn ecc 2bit error  : 1;  /* bit[24]   : lsn ����eccУ��2bit���ϳ��������ж� */
        unsigned int  flashlock error     : 1;  /* bit[25]   : flashlockδ����ʱ��������Ĵ���д��� */
        unsigned int  reserved_4          : 6;  /* bit[26-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfIntStatus_UNION;
#endif
#define SOC_NANDC_NfIntStatus_command done CS0_START     (0)
#define SOC_NANDC_NfIntStatus_command done CS0_END       (0)
#define SOC_NANDC_NfIntStatus_read done CS0_START        (1)
#define SOC_NANDC_NfIntStatus_read done CS0_END          (1)
#define SOC_NANDC_NfIntStatus_write done CS0_START       (2)
#define SOC_NANDC_NfIntStatus_write done CS0_END         (2)
#define SOC_NANDC_NfIntStatus_command done CS1_START     (4)
#define SOC_NANDC_NfIntStatus_command done CS1_END       (4)
#define SOC_NANDC_NfIntStatus_read done CS1_START        (5)
#define SOC_NANDC_NfIntStatus_read done CS1_END          (5)
#define SOC_NANDC_NfIntStatus_write done CS1_START       (6)
#define SOC_NANDC_NfIntStatus_write done CS1_END         (6)
#define SOC_NANDC_NfIntStatus_command done CS2_START     (8)
#define SOC_NANDC_NfIntStatus_command done CS2_END       (8)
#define SOC_NANDC_NfIntStatus_read done CS2_START        (9)
#define SOC_NANDC_NfIntStatus_read done CS2_END          (9)
#define SOC_NANDC_NfIntStatus_write done CS2_START       (10)
#define SOC_NANDC_NfIntStatus_write done CS2_END         (10)
#define SOC_NANDC_NfIntStatus_command done CS3_START     (12)
#define SOC_NANDC_NfIntStatus_command done CS3_END       (12)
#define SOC_NANDC_NfIntStatus_read done CS3_START        (13)
#define SOC_NANDC_NfIntStatus_read done CS3_END          (13)
#define SOC_NANDC_NfIntStatus_write done CS3_START       (14)
#define SOC_NANDC_NfIntStatus_write done CS3_END         (14)
#define SOC_NANDC_NfIntStatus_all buffer ready_START     (16)
#define SOC_NANDC_NfIntStatus_all buffer ready_END       (16)
#define SOC_NANDC_NfIntStatus_buffer1 ready_START        (17)
#define SOC_NANDC_NfIntStatus_buffer1 ready_END          (17)
#define SOC_NANDC_NfIntStatus_buffer2 ready_START        (18)
#define SOC_NANDC_NfIntStatus_buffer2 ready_END          (18)
#define SOC_NANDC_NfIntStatus_buffer3 ready_START        (19)
#define SOC_NANDC_NfIntStatus_buffer3 ready_END          (19)
#define SOC_NANDC_NfIntStatus_buffer4 ready_START        (20)
#define SOC_NANDC_NfIntStatus_buffer4 ready_END          (20)
#define SOC_NANDC_NfIntStatus_data ecc 1bit error_START  (21)
#define SOC_NANDC_NfIntStatus_data ecc 1bit error_END    (21)
#define SOC_NANDC_NfIntStatus_data ecc 2bit error_START  (22)
#define SOC_NANDC_NfIntStatus_data ecc 2bit error_END    (22)
#define SOC_NANDC_NfIntStatus_lsn ecc 1bit error_START   (23)
#define SOC_NANDC_NfIntStatus_lsn ecc 1bit error_END     (23)
#define SOC_NANDC_NfIntStatus_lsn ecc 2bit error_START   (24)
#define SOC_NANDC_NfIntStatus_lsn ecc 2bit error_END     (24)
#define SOC_NANDC_NfIntStatus_flashlock error_START      (25)
#define SOC_NANDC_NfIntStatus_flashlock error_END        (25)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfIntClr_UNION
 �ṹ˵��  : NfIntClr �Ĵ����ṹ���塣��ַƫ����:0x2102C����ֵ:-�����:32
 �Ĵ���˵��: �ж�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  command done CS0    : 1;  /* bit[0]    : controller����������͵�ַ�󣬲����ж� */
        unsigned int  read done CS0       : 1;  /* bit[1]    : �����������������ж� */
        unsigned int  write done CS0      : 1;  /* bit[2]    : д���������������ж� */
        unsigned int  reserved_0          : 1;  /* bit[3]    : ����λ */
        unsigned int  command done CS1    : 1;  /* bit[4]    : controller����������͵�ַ�󣬲����ж� */
        unsigned int  read done CS1       : 1;  /* bit[5]    : �����������������ж� */
        unsigned int  write done CS1      : 1;  /* bit[6]    : д���������������ж� */
        unsigned int  reserved_1          : 1;  /* bit[7]    : ����λ */
        unsigned int  command done CS2    : 1;  /* bit[8]    : controller����������͵�ַ�󣬲����ж� */
        unsigned int  read done CS2       : 1;  /* bit[9]    : �����������������ж� */
        unsigned int  write done CS2      : 1;  /* bit[10]   : д���������������ж� */
        unsigned int  reserved_2          : 1;  /* bit[11]   : ����λ */
        unsigned int  command done CS3    : 1;  /* bit[12]   : controller����������͵�ַ�󣬲����ж� */
        unsigned int  read done CS3       : 1;  /* bit[13]   : �����������������ж� */
        unsigned int  write done CS3      : 1;  /* bit[14]   : Ecc 2bits �����жϣ�
                                                               ���bit[21]Ϊ1��ָʾ1bit�жϣ���ôbit[14]ͬʱָʾΪ0������������1bit error�жϣ�
                                                               ���bit[21]Ϊ1��ָʾ1bit�жϣ���bit[14]ҲΪ1����ô����1bit error�����������2bits error����Ϊ1bit error����� */
        unsigned int  reserved_3          : 1;  /* bit[15]   : ����λ */
        unsigned int  all buffer ready    : 1;  /* bit[16]   : ��״̬�£�����buffer������Ч */
        unsigned int  buffer1 ready       : 1;  /* bit[17]   : ��״̬�£�buffer1������Ч�������жϡ�ֻ��512 byte page size������Ч */
        unsigned int  buffer2 ready       : 1;  /* bit[18]   : ��״̬�£�buffer1������Ч�������жϡ�ֻ��512 byte page size������Ч */
        unsigned int  buffer3 ready       : 1;  /* bit[19]   : ��״̬�£�buffer1������Ч�������жϡ�ֻ��512 byte page size������Ч */
        unsigned int  buffer4 ready       : 1;  /* bit[20]   : ��״̬�£�buffer1������Ч�������жϡ�ֻ��512 byte page size������Ч */
        unsigned int  data ecc 1bit error : 1;  /* bit[21]   : eccУ��1bit���������ж� */
        unsigned int  data ecc 2bit error : 1;  /* bit[22]   : eccУ��2bit���ϳ��������ж� */
        unsigned int  lsn ecc 1bit error  : 1;  /* bit[23]   : lsn ����eccУ��1bit���������ж� */
        unsigned int  lsn ecc 2bit error  : 1;  /* bit[24]   : lsn ����eccУ��2bit���ϳ��������ж� */
        unsigned int  flashlock error     : 1;  /* bit[25]   : flashlockδ����ʱ��������Ĵ���д��� */
        unsigned int  reserved_4          : 6;  /* bit[26-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfIntClr_UNION;
#endif
#define SOC_NANDC_NfIntClr_command done CS0_START     (0)
#define SOC_NANDC_NfIntClr_command done CS0_END       (0)
#define SOC_NANDC_NfIntClr_read done CS0_START        (1)
#define SOC_NANDC_NfIntClr_read done CS0_END          (1)
#define SOC_NANDC_NfIntClr_write done CS0_START       (2)
#define SOC_NANDC_NfIntClr_write done CS0_END         (2)
#define SOC_NANDC_NfIntClr_command done CS1_START     (4)
#define SOC_NANDC_NfIntClr_command done CS1_END       (4)
#define SOC_NANDC_NfIntClr_read done CS1_START        (5)
#define SOC_NANDC_NfIntClr_read done CS1_END          (5)
#define SOC_NANDC_NfIntClr_write done CS1_START       (6)
#define SOC_NANDC_NfIntClr_write done CS1_END         (6)
#define SOC_NANDC_NfIntClr_command done CS2_START     (8)
#define SOC_NANDC_NfIntClr_command done CS2_END       (8)
#define SOC_NANDC_NfIntClr_read done CS2_START        (9)
#define SOC_NANDC_NfIntClr_read done CS2_END          (9)
#define SOC_NANDC_NfIntClr_write done CS2_START       (10)
#define SOC_NANDC_NfIntClr_write done CS2_END         (10)
#define SOC_NANDC_NfIntClr_command done CS3_START     (12)
#define SOC_NANDC_NfIntClr_command done CS3_END       (12)
#define SOC_NANDC_NfIntClr_read done CS3_START        (13)
#define SOC_NANDC_NfIntClr_read done CS3_END          (13)
#define SOC_NANDC_NfIntClr_write done CS3_START       (14)
#define SOC_NANDC_NfIntClr_write done CS3_END         (14)
#define SOC_NANDC_NfIntClr_all buffer ready_START     (16)
#define SOC_NANDC_NfIntClr_all buffer ready_END       (16)
#define SOC_NANDC_NfIntClr_buffer1 ready_START        (17)
#define SOC_NANDC_NfIntClr_buffer1 ready_END          (17)
#define SOC_NANDC_NfIntClr_buffer2 ready_START        (18)
#define SOC_NANDC_NfIntClr_buffer2 ready_END          (18)
#define SOC_NANDC_NfIntClr_buffer3 ready_START        (19)
#define SOC_NANDC_NfIntClr_buffer3 ready_END          (19)
#define SOC_NANDC_NfIntClr_buffer4 ready_START        (20)
#define SOC_NANDC_NfIntClr_buffer4 ready_END          (20)
#define SOC_NANDC_NfIntClr_data ecc 1bit error_START  (21)
#define SOC_NANDC_NfIntClr_data ecc 1bit error_END    (21)
#define SOC_NANDC_NfIntClr_data ecc 2bit error_START  (22)
#define SOC_NANDC_NfIntClr_data ecc 2bit error_END    (22)
#define SOC_NANDC_NfIntClr_lsn ecc 1bit error_START   (23)
#define SOC_NANDC_NfIntClr_lsn ecc 1bit error_END     (23)
#define SOC_NANDC_NfIntClr_lsn ecc 2bit error_START   (24)
#define SOC_NANDC_NfIntClr_lsn ecc 2bit error_END     (24)
#define SOC_NANDC_NfIntClr_flashlock error_START      (25)
#define SOC_NANDC_NfIntClr_flashlock error_END        (25)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_StartRd_UNION
 �ṹ˵��  : StartRd �Ĵ����ṹ���塣��ַƫ����:0x21030����ֵ:-�����:32
 �Ĵ���˵��: �������Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  Start Read : 1;  /* bit[0]   : ����������״̬�� */
        unsigned int  reserved   : 31; /* bit[1-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_StartRd_UNION;
#endif
#define SOC_NANDC_StartRd_Start Read_START  (0)
#define SOC_NANDC_StartRd_Start Read_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_CsdnEn_UNION
 �ṹ˵��  : CsdnEn �Ĵ����ṹ���塣��ַƫ����:0x21034����ֵ:0x0�����:32
 �Ĵ���˵��: CS don��t careģʽʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  CS don��t care Enable : 1;  /* bit[0]   : ʹ��nand flash controller��cs don��t care����ģʽ
                                                                ע�������ܲ���ͬready/busy don��t care����ͬʱʹ�ã�������ܻᵼ��nand������� */
        unsigned int  reserved              : 31; /* bit[1-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_CsdnEn_UNION;
#endif
#define SOC_NANDC_CsdnEn_CS don��t care Enable_START  (0)
#define SOC_NANDC_CsdnEn_CS don��t care Enable_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfLockStartAddr1_UNION
 �ṹ˵��  : NfLockStartAddr1 �Ĵ����ṹ���塣��ַƫ����:0x21038����ֵ:0x0�����:32
 �Ĵ���˵��: FlashLock��ʼ��ַ�Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  flashlock start addr1 : 26; /* bit[0-25] : ��ʾflashlock��ʼ��ַ����2���ر�ʾflashƬѡ����24���ر�ʾnandflash��row��ַ */
        unsigned int  reserved              : 6;  /* bit[26-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfLockStartAddr1_UNION;
#endif
#define SOC_NANDC_NfLockStartAddr1_flashlock start addr1_START  (0)
#define SOC_NANDC_NfLockStartAddr1_flashlock start addr1_END    (25)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfLockEndAddr1_UNION
 �ṹ˵��  : NfLockEndAddr1 �Ĵ����ṹ���塣��ַƫ����:0x2103C����ֵ:0x0�����:32
 �Ĵ���˵��: FlashLock��ʼ�����Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  flashlock end addr1 : 26; /* bit[0-25] : ��ʾflashlock������ַ����2���ر�ʾflashƬѡ����24���ر�ʾnandflash��row��ַ */
        unsigned int  reserved            : 6;  /* bit[26-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfLockEndAddr1_UNION;
#endif
#define SOC_NANDC_NfLockEndAddr1_flashlock end addr1_START  (0)
#define SOC_NANDC_NfLockEndAddr1_flashlock end addr1_END    (25)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfLockStartAddr2_UNION
 �ṹ˵��  : NfLockStartAddr2 �Ĵ����ṹ���塣��ַƫ����:0x21040����ֵ:0x0�����:32
 �Ĵ���˵��: FlashLock��ʼ��ַ�Ĵ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  flashlock start addr2 : 26; /* bit[0-25] : ��ʾflashlock��ʼ��ַ����2���ر�ʾflashƬѡ����24���ر�ʾnandflash��row��ַ */
        unsigned int  reserved              : 6;  /* bit[26-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfLockStartAddr2_UNION;
#endif
#define SOC_NANDC_NfLockStartAddr2_flashlock start addr2_START  (0)
#define SOC_NANDC_NfLockStartAddr2_flashlock start addr2_END    (25)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfLockEndAddr2_UNION
 �ṹ˵��  : NfLockEndAddr2 �Ĵ����ṹ���塣��ַƫ����:0x21044����ֵ:0x0�����:32
 �Ĵ���˵��: FlashLock��ʼ�����Ĵ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  flashlock end addr2 : 26; /* bit[0-25] : ��ʾflashlock������ַ����2���ر�ʾflashƬѡ����24���ر�ʾnandflash��row��ַ */
        unsigned int  reserved            : 6;  /* bit[26-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfLockEndAddr2_UNION;
#endif
#define SOC_NANDC_NfLockEndAddr2_flashlock end addr2_START  (0)
#define SOC_NANDC_NfLockEndAddr2_flashlock end addr2_END    (25)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfLockStartAddr3_UNION
 �ṹ˵��  : NfLockStartAddr3 �Ĵ����ṹ���塣��ַƫ����:0x21048����ֵ:0x0�����:32
 �Ĵ���˵��: FlashLock��ʼ��ַ�Ĵ���3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  flashlock start addr3 : 26; /* bit[0-25] : ��ʾflashlock��ʼ��ַ����2���ر�ʾflashƬѡ����24���ر�ʾnandflash��row��ַ */
        unsigned int  reserved              : 6;  /* bit[26-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfLockStartAddr3_UNION;
#endif
#define SOC_NANDC_NfLockStartAddr3_flashlock start addr3_START  (0)
#define SOC_NANDC_NfLockStartAddr3_flashlock start addr3_END    (25)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfLockEndAddr3_UNION
 �ṹ˵��  : NfLockEndAddr3 �Ĵ����ṹ���塣��ַƫ����:0x2104C����ֵ:0x0�����:32
 �Ĵ���˵��: FlashLock��ʼ�����Ĵ���3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  flashlock end addr3 : 26; /* bit[0-25] : ��ʾflashlock������ַ����2���ر�ʾflashƬѡ����24���ر�ʾnandflash��row��ַ */
        unsigned int  reserved            : 6;  /* bit[26-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfLockEndAddr3_UNION;
#endif
#define SOC_NANDC_NfLockEndAddr3_flashlock end addr3_START  (0)
#define SOC_NANDC_NfLockEndAddr3_flashlock end addr3_END    (25)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfLockStartAddr4_UNION
 �ṹ˵��  : NfLockStartAddr4 �Ĵ����ṹ���塣��ַƫ����:0x21050����ֵ:0x0�����:32
 �Ĵ���˵��: FlashLock��ʼ��ַ�Ĵ���4
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  flashlock start addr4 : 26; /* bit[0-25] : ��ʾflashlock��ʼ��ַ����2���ر�ʾflashƬѡ����24���ر�ʾnandflash��row��ַ */
        unsigned int  reserved              : 6;  /* bit[26-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfLockStartAddr4_UNION;
#endif
#define SOC_NANDC_NfLockStartAddr4_flashlock start addr4_START  (0)
#define SOC_NANDC_NfLockStartAddr4_flashlock start addr4_END    (25)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfLockEndAddr4_UNION
 �ṹ˵��  : NfLockEndAddr4 �Ĵ����ṹ���塣��ַƫ����:0x21054����ֵ:0x0�����:32
 �Ĵ���˵��: FlashLock��ʼ�����Ĵ���4
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  flashlock end addr4 : 26; /* bit[0-25] : ��ʾflashlock������ַ����2���ر�ʾflashƬѡ����24���ر�ʾnandflash��row��ַ */
        unsigned int  reserved            : 6;  /* bit[26-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfLockEndAddr4_UNION;
#endif
#define SOC_NANDC_NfLockEndAddr4_flashlock end addr4_START  (0)
#define SOC_NANDC_NfLockEndAddr4_flashlock end addr4_END    (25)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfLockEn_UNION
 �ṹ˵��  : NfLockEn �Ĵ����ṹ���塣��ַƫ����:0x21058����ֵ:0x3�����:32
 �Ĵ���˵��: FlashLockʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  flashlock whole enable : 1;  /* bit[0]   : FlashLockȫ��ʹ��/��ֹ��
                                                                 0����ֹ��
                                                                 1��ʹ�ܣ�Ĭ��ֵ���� */
        unsigned int  flashlock enable       : 1;  /* bit[1]   : FlashLockʹ��/��ֹ��
                                                                 0����ֹ��
                                                                 1��ʹ�ܣ�Ĭ��ֵ�� */
        unsigned int  reserved               : 30; /* bit[2-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfLockEn_UNION;
#endif
#define SOC_NANDC_NfLockEn_flashlock whole enable_START  (0)
#define SOC_NANDC_NfLockEn_flashlock whole enable_END    (0)
#define SOC_NANDC_NfLockEn_flashlock enable_START        (1)
#define SOC_NANDC_NfLockEn_flashlock enable_END          (1)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NfLockCont_UNION
 �ṹ˵��  : NfLockCont �Ĵ����ṹ���塣��ַƫ����:0x2105C����ֵ:0x0�����:32
 �Ĵ���˵��: FlashLock���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  flashlock control : 1;  /* bit[0]   : ��ʾflashlockģʽ��
                                                            0��ʾ��lockģʽ��
                                                            1��ʾ��lock-downģʽ
                                                            �ñ���һ����д1���� */
        unsigned int  reserved          : 31; /* bit[1-31]: ����λ����ʱ����0��дʱ��Ӱ�졣 */
    } reg;
} SOC_NANDC_NfLockCont_UNION;
#endif
#define SOC_NANDC_NfLockCont_flashlock control_START  (0)
#define SOC_NANDC_NfLockCont_flashlock control_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NflockCommand1_UNION
 �ṹ˵��  : NflockCommand1 �Ĵ����ṹ���塣��ַƫ����:0x21060����ֵ:0x85816060�����:32
 �Ĵ���˵��: FlashLock�������üĴ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  Block_command1 : 8;  /* bit[0-7]  : ��ʾflashlock block��������Ĵ���1 */
        unsigned int  Block_command2 : 8;  /* bit[8-15] : ��ʾflashlock block��������Ĵ���2 */
        unsigned int  Page_command1  : 8;  /* bit[16-23]: ��ʾflashlock page��������Ĵ���1 */
        unsigned int  Page_command2  : 8;  /* bit[24-31]: ��ʾflashlock page��������Ĵ���2 */
    } reg;
} SOC_NANDC_NflockCommand1_UNION;
#endif
#define SOC_NANDC_NflockCommand1_Block_command1_START  (0)
#define SOC_NANDC_NflockCommand1_Block_command1_END    (7)
#define SOC_NANDC_NflockCommand1_Block_command2_START  (8)
#define SOC_NANDC_NflockCommand1_Block_command2_END    (15)
#define SOC_NANDC_NflockCommand1_Page_command1_START   (16)
#define SOC_NANDC_NflockCommand1_Page_command1_END     (23)
#define SOC_NANDC_NflockCommand1_Page_command2_START   (24)
#define SOC_NANDC_NflockCommand1_Page_command2_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_NANDC_NflockCommand2_UNION
 �ṹ˵��  : NflockCommand2 �Ĵ����ṹ���塣��ַƫ����:0x21064����ֵ:0x85858585�����:32
 �Ĵ���˵��: FlashLock�������üĴ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  Page_command3 : 8;  /* bit[0-7]  : ��ʾflashlock page��������Ĵ���3 */
        unsigned int  Page_command4 : 8;  /* bit[8-15] : ��ʾflashlock page��������Ĵ���4 */
        unsigned int  Page_command5 : 8;  /* bit[16-23]: ��ʾflashlock page��������Ĵ���5 */
        unsigned int  Page_command6 : 8;  /* bit[24-31]: ��ʾflashlock page��������Ĵ���6 */
    } reg;
} SOC_NANDC_NflockCommand2_UNION;
#endif
#define SOC_NANDC_NflockCommand2_Page_command3_START  (0)
#define SOC_NANDC_NflockCommand2_Page_command3_END    (7)
#define SOC_NANDC_NflockCommand2_Page_command4_START  (8)
#define SOC_NANDC_NflockCommand2_Page_command4_END    (15)
#define SOC_NANDC_NflockCommand2_Page_command5_START  (16)
#define SOC_NANDC_NflockCommand2_Page_command5_END    (23)
#define SOC_NANDC_NflockCommand2_Page_command6_START  (24)
#define SOC_NANDC_NflockCommand2_Page_command6_END    (31)






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

#endif /* end of soc_nandc_interface.h */
