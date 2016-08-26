

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_MDDRC_TEST_INTERFACE_H__
#define __SOC_MDDRC_TEST_INTERFACE_H__

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
/* �Ĵ���˵����phy��iotst_iotest�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_IOTEST_0_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_IOTEST_0_ADDR(base)  ((base) + (0x000))

/* �Ĵ���˵����phy��iotst_iotest�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_IOTEST_1_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_IOTEST_1_ADDR(base)  ((base) + (0x004))

/* �Ĵ���˵����phy��iotst_iotest�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_IOTEST_2_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_IOTEST_2_ADDR(base)  ((base) + (0x008))

/* �Ĵ���˵����phy��iotst_ietest�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_IETEST_0_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_IETEST_0_ADDR(base)  ((base) + (0x010))

/* �Ĵ���˵����phy��iotst_ietest�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_IETEST_1_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_IETEST_1_ADDR(base)  ((base) + (0x014))

/* �Ĵ���˵����phy��iotst_ietest�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_IETEST_2_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_IETEST_2_ADDR(base)  ((base) + (0x018))

/* �Ĵ���˵����phy��iotst_o�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_O_0_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_O_0_ADDR(base)       ((base) + (0x020))

/* �Ĵ���˵����phy��iotst_o�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_O_1_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_O_1_ADDR(base)       ((base) + (0x024))

/* �Ĵ���˵����phy��iotst_o�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_O_2_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_O_2_ADDR(base)       ((base) + (0x028))

/* �Ĵ���˵����phy��iotst_oe�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_OE_0_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_OE_0_ADDR(base)      ((base) + (0x030))

/* �Ĵ���˵����phy��iotst_oe�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_OE_1_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_OE_1_ADDR(base)      ((base) + (0x034))

/* �Ĵ���˵����phy��iotst_oe�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_OE_2_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_OE_2_ADDR(base)      ((base) + (0x038))

/* �Ĵ���˵����phy��iotst_ie�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_IE_0_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_IE_0_ADDR(base)      ((base) + (0x040))

/* �Ĵ���˵����phy��iotst_ie�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_IE_1_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_IE_1_ADDR(base)      ((base) + (0x044))

/* �Ĵ���˵����phy��iotst_ie�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_IE_2_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_IE_2_ADDR(base)      ((base) + (0x048))

/* �Ĵ���˵����phy��iotst_ne�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_NE_0_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_NE_0_ADDR(base)      ((base) + (0x050))

/* �Ĵ���˵����phy��iotst_ne�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_NE_1_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_NE_1_ADDR(base)      ((base) + (0x054))

/* �Ĵ���˵����phy��iotst_ne�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_NE_2_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_NE_2_ADDR(base)      ((base) + (0x058))

/* �Ĵ���˵����phy��iotst_odttest�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_0_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_0_ADDR(base) ((base) + (0x060))

/* �Ĵ���˵����phy��iotst_odttest�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_1_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_1_ADDR(base) ((base) + (0x064))

/* �Ĵ���˵����phy��iotst_odttest�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_2_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_2_ADDR(base) ((base) + (0x068))

/* �Ĵ���˵����phy��iotst_odten�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_ODTEN_0_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_ODTEN_0_ADDR(base)   ((base) + (0x070))

/* �Ĵ���˵����phy��iotst_odten�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_ODTEN_1_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_ODTEN_1_ADDR(base)   ((base) + (0x074))

/* �Ĵ���˵����phy��iotst_odten�źŵ����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_ODTEN_2_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_ODTEN_2_ADDR(base)   ((base) + (0x078))

/* �Ĵ���˵����phy��iotst_i�ź�״̬�Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_I_0_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_I_0_ADDR(base)       ((base) + (0x080))

/* �Ĵ���˵����phy��iotst_i�ź�״̬�Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_I_1_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_I_1_ADDR(base)       ((base) + (0x084))

/* �Ĵ���˵����phy��iotst_i�ź�״̬�Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PHY_IOTST_I_2_UNION */
#define SOC_MDDRC_TEST_PHY_IOTST_I_2_ADDR(base)       ((base) + (0x088))

/* �Ĵ���˵����pack��dbg_sel���üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PACK_DBG_SEL_UNION */
#define SOC_MDDRC_TEST_PACK_DBG_SEL_ADDR(base)        ((base) + (0x090))

/* �Ĵ���˵����pack��dbg״̬�Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_TEST_PACK_DBG_STATE_UNION */
#define SOC_MDDRC_TEST_PACK_DBG_STATE_ADDR(base)      ((base) + (0x094))

/* �Ĵ���˵����dbg���ʱ���ſ�
   λ����UNION�ṹ:  SOC_MDDRC_TEST_DBG_PCLK_GATED_UNION */
#define SOC_MDDRC_TEST_DBG_PCLK_GATED_ADDR(base)      ((base) + (0x098))





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
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_IOTEST_0_UNION
 �ṹ˵��  : PHY_IOTST_IOTEST_0 �Ĵ����ṹ���塣��ַƫ����:0x000����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_iotest�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_iotest_0 : 32; /* bit[0-31]: phy��iotst_iotest[31:0]������ֵ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_IOTEST_0_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IOTEST_0_iotst_iotest_0_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_IOTEST_0_iotst_iotest_0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_IOTEST_1_UNION
 �ṹ˵��  : PHY_IOTST_IOTEST_1 �Ĵ����ṹ���塣��ַƫ����:0x004����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_iotest�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_iotest_1 : 32; /* bit[0-31]: phy��iotst_iotest[63:32]������ֵ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_IOTEST_1_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IOTEST_1_iotst_iotest_1_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_IOTEST_1_iotst_iotest_1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_IOTEST_2_UNION
 �ṹ˵��  : PHY_IOTST_IOTEST_2 �Ĵ����ṹ���塣��ַƫ����:0x008����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_iotest�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_iotest_2 : 10; /* bit[0-9]  : phy��iotst_iotest[73:64]������ֵ */
        unsigned int  reserved       : 22; /* bit[10-31]: ������ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_IOTEST_2_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IOTEST_2_iotst_iotest_2_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_IOTEST_2_iotst_iotest_2_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_IETEST_0_UNION
 �ṹ˵��  : PHY_IOTST_IETEST_0 �Ĵ����ṹ���塣��ַƫ����:0x010����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_ietest�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_ietest_0 : 32; /* bit[0-31]: phy��iotst_ietest[31:0]������ֵ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_IETEST_0_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IETEST_0_iotst_ietest_0_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_IETEST_0_iotst_ietest_0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_IETEST_1_UNION
 �ṹ˵��  : PHY_IOTST_IETEST_1 �Ĵ����ṹ���塣��ַƫ����:0x014����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_ietest�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_ietest_1 : 32; /* bit[0-31]: phy��iotst_ietest[63:32]������ֵ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_IETEST_1_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IETEST_1_iotst_ietest_1_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_IETEST_1_iotst_ietest_1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_IETEST_2_UNION
 �ṹ˵��  : PHY_IOTST_IETEST_2 �Ĵ����ṹ���塣��ַƫ����:0x018����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_ietest�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_ietest_2 : 10; /* bit[0-9]  : phy��iotst_ietest[73:64]������ֵ */
        unsigned int  reserved       : 22; /* bit[10-31]: ������ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_IETEST_2_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IETEST_2_iotst_ietest_2_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_IETEST_2_iotst_ietest_2_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_O_0_UNION
 �ṹ˵��  : PHY_IOTST_O_0 �Ĵ����ṹ���塣��ַƫ����:0x020����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_o�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_o_0 : 32; /* bit[0-31]: phy��iotst_o[31:0]������ֵ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_O_0_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_O_0_iotst_o_0_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_O_0_iotst_o_0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_O_1_UNION
 �ṹ˵��  : PHY_IOTST_O_1 �Ĵ����ṹ���塣��ַƫ����:0x024����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_o�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_o_1 : 32; /* bit[0-31]: phy��iotst_o[63:32]������ֵ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_O_1_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_O_1_iotst_o_1_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_O_1_iotst_o_1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_O_2_UNION
 �ṹ˵��  : PHY_IOTST_O_2 �Ĵ����ṹ���塣��ַƫ����:0x028����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_o�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int            : 10; /* bit[0-9]  : phy��iotst_o[73:64]������ֵ */
        unsigned int  iotst_o_2 : 22; /* bit[10-31]: ������ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_O_2_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_O_2__START           (0)
#define SOC_MDDRC_TEST_PHY_IOTST_O_2__END             (9)
#define SOC_MDDRC_TEST_PHY_IOTST_O_2_iotst_o_2_START  (10)
#define SOC_MDDRC_TEST_PHY_IOTST_O_2_iotst_o_2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_OE_0_UNION
 �ṹ˵��  : PHY_IOTST_OE_0 �Ĵ����ṹ���塣��ַƫ����:0x030����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_oe�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_oe_0 : 32; /* bit[0-31]: phy��iotst_oe[31:0]������ֵ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_OE_0_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_OE_0_iotst_oe_0_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_OE_0_iotst_oe_0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_OE_1_UNION
 �ṹ˵��  : PHY_IOTST_OE_1 �Ĵ����ṹ���塣��ַƫ����:0x034����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_oe�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_oe_1 : 32; /* bit[0-31]: phy��iotst_oe[63:32]������ֵ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_OE_1_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_OE_1_iotst_oe_1_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_OE_1_iotst_oe_1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_OE_2_UNION
 �ṹ˵��  : PHY_IOTST_OE_2 �Ĵ����ṹ���塣��ַƫ����:0x038����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_oe�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_oe_2 : 10; /* bit[0-9]  : phy��iotst_oe[73:64]������ֵ */
        unsigned int  reserved   : 22; /* bit[10-31]: ������ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_OE_2_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_OE_2_iotst_oe_2_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_OE_2_iotst_oe_2_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_IE_0_UNION
 �ṹ˵��  : PHY_IOTST_IE_0 �Ĵ����ṹ���塣��ַƫ����:0x040����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_ie�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_ie_0 : 32; /* bit[0-31]: phy��iotst_ie[31:0]������ֵ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_IE_0_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IE_0_iotst_ie_0_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_IE_0_iotst_ie_0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_IE_1_UNION
 �ṹ˵��  : PHY_IOTST_IE_1 �Ĵ����ṹ���塣��ַƫ����:0x044����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_ie�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_ie_1 : 32; /* bit[0-31]: phy��iotst_ie[63:32]������ֵ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_IE_1_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IE_1_iotst_ie_1_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_IE_1_iotst_ie_1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_IE_2_UNION
 �ṹ˵��  : PHY_IOTST_IE_2 �Ĵ����ṹ���塣��ַƫ����:0x048����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_ie�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int           : 10; /* bit[0-9]  : phy��iotst_ie[73:64]������ֵ */
        unsigned int  reserved : 22; /* bit[10-31]: ������ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_IE_2_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IE_2__START          (0)
#define SOC_MDDRC_TEST_PHY_IOTST_IE_2__END            (9)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_NE_0_UNION
 �ṹ˵��  : PHY_IOTST_NE_0 �Ĵ����ṹ���塣��ַƫ����:0x050����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_ne�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_ne_0 : 32; /* bit[0-31]: phy��iotst_ne[31:0]������ֵ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_NE_0_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_NE_0_iotst_ne_0_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_NE_0_iotst_ne_0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_NE_1_UNION
 �ṹ˵��  : PHY_IOTST_NE_1 �Ĵ����ṹ���塣��ַƫ����:0x054����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_ne�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_ne_1 : 32; /* bit[0-31]: phy��iotst_ne[63:32]������ֵ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_NE_1_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_NE_1_iotst_ne_1_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_NE_1_iotst_ne_1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_NE_2_UNION
 �ṹ˵��  : PHY_IOTST_NE_2 �Ĵ����ṹ���塣��ַƫ����:0x058����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_ne�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_ne_2 : 10; /* bit[0-9]  : phy��iotst_ne[73:64]������ֵ */
        unsigned int  reserved   : 22; /* bit[10-31]: ������ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_NE_2_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_NE_2_iotst_ne_2_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_NE_2_iotst_ne_2_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_0_UNION
 �ṹ˵��  : PHY_IOTST_ODTTEST_0 �Ĵ����ṹ���塣��ַƫ����:0x060����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_odttest�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_odttest_0 : 32; /* bit[0-31]: phy��iotst_odttest[31:0]������ֵ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_0_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_0_iotst_odttest_0_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_0_iotst_odttest_0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_1_UNION
 �ṹ˵��  : PHY_IOTST_ODTTEST_1 �Ĵ����ṹ���塣��ַƫ����:0x064����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_odttest�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_odttest_1 : 32; /* bit[0-31]: phy��iotst_odttest[63:32]������ֵ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_1_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_1_iotst_odttest_1_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_1_iotst_odttest_1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_2_UNION
 �ṹ˵��  : PHY_IOTST_ODTTEST_2 �Ĵ����ṹ���塣��ַƫ����:0x068����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_odttest�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_odttest_2 : 10; /* bit[0-9]  : phy��iotst_odttest[73:64]������ֵ */
        unsigned int  reserved        : 22; /* bit[10-31]: ������ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_2_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_2_iotst_odttest_2_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_2_iotst_odttest_2_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_ODTEN_0_UNION
 �ṹ˵��  : PHY_IOTST_ODTEN_0 �Ĵ����ṹ���塣��ַƫ����:0x070����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_odten�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_odten_0 : 32; /* bit[0-31]: phy��iotst_odten[31:0]������ֵ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_ODTEN_0_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_ODTEN_0_iotst_odten_0_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_ODTEN_0_iotst_odten_0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_ODTEN_1_UNION
 �ṹ˵��  : PHY_IOTST_ODTEN_1 �Ĵ����ṹ���塣��ַƫ����:0x074����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_odten�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_odten_1 : 32; /* bit[0-31]: phy��iotst_odten[64:32]������ֵ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_ODTEN_1_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_ODTEN_1_iotst_odten_1_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_ODTEN_1_iotst_odten_1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_ODTEN_2_UNION
 �ṹ˵��  : PHY_IOTST_ODTEN_2 �Ĵ����ṹ���塣��ַƫ����:0x078����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_odten�źŵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_odten_2 : 10; /* bit[0-9]  : phy��iotst_odten[73:64]������ֵ */
        unsigned int  reserved      : 22; /* bit[10-31]: ������ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_ODTEN_2_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_ODTEN_2_iotst_odten_2_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_ODTEN_2_iotst_odten_2_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_I_0_UNION
 �ṹ˵��  : PHY_IOTST_I_0 �Ĵ����ṹ���塣��ַƫ����:0x080����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_i�ź�״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_i_0 : 32; /* bit[0-31]: phy��iotst_i[31:0]�ļĴ�ֵ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_I_0_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_I_0_iotst_i_0_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_I_0_iotst_i_0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_I_1_UNION
 �ṹ˵��  : PHY_IOTST_I_1 �Ĵ����ṹ���塣��ַƫ����:0x084����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_i�ź�״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_i_1 : 32; /* bit[0-31]: phy��iotst_i[63:32]�ļĴ�ֵ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_I_1_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_I_1_iotst_i_1_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_I_1_iotst_i_1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PHY_IOTST_I_2_UNION
 �ṹ˵��  : PHY_IOTST_I_2 �Ĵ����ṹ���塣��ַƫ����:0x088����ֵ:0x00000000�����:32
 �Ĵ���˵��: phy��iotst_i�ź�״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iotst_i_2 : 10; /* bit[0-9]  : phy��iotst_i[73:64]�ļĴ�ֵ */
        unsigned int  reserved  : 22; /* bit[10-31]: ������ */
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_I_2_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_I_2_iotst_i_2_START  (0)
#define SOC_MDDRC_TEST_PHY_IOTST_I_2_iotst_i_2_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PACK_DBG_SEL_UNION
 �ṹ˵��  : PACK_DBG_SEL �Ĵ����ṹ���塣��ַƫ����:0x090����ֵ:0x00000000�����:32
 �Ĵ���˵��: pack��dbg_sel���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dbg_sel  : 5;  /* bit[0-4] : 0x00:default
                                                   0x01:ѡ��dbg_mode00��Ϊ��� 0x02:dbg_mode01��Ϊ���
                                                   0x03:ѡ��dbg_mode02��Ϊ��� 0x04:dbg_mode03��Ϊ���
                                                   0x05:ѡ��dbg_mode04��Ϊ��� 0x06:dbg_mode05��Ϊ���
                                                   0x07:ѡ��dbg_mode06��Ϊ��� 0x08:dbg_mode07��Ϊ���
                                                   0x09:ѡ��dbg_mode08��Ϊ��� 0x0A:dbg_mode09��Ϊ���
                                                   0x0B:ѡ��dbg_mode10��Ϊ��� 0x0C:dbg_mode11��Ϊ���
                                                   0x0D:ѡ��dbg_mode12��Ϊ��� 0x0E:dbg_mode13��Ϊ���
                                                   0x0F:ѡ��dbg_mode14��Ϊ��� 0x10:dbg_mode15��Ϊ���
                                                   0x11:ѡ��dbg_mode16��Ϊ��� 0x12:dbg_mode17��Ϊ���
                                                   0x13:ѡ��dbg_mode18��Ϊ��� 0x14:dbg_mode19��Ϊ���
                                                   0x15:ѡ��dbg_mode20��Ϊ��� 0x16:dbg_mode21��Ϊ���
                                                   0x17:ѡ��dbg_mode22��Ϊ��� 0x18:dbg_mode23��Ϊ���
                                                   0x19:ѡ��dbg_mode24��Ϊ��� 0x1A:dbg_mode25��Ϊ���
                                                   0x1B:ѡ��dbg_mode26��Ϊ��� 0x1C:dbg_mode27��Ϊ���
                                                   0x1D:ѡ��dbg_mode28��Ϊ���
                                                   ע����ѡ���dbg�źżȻ����,Ҳ��Ĵ����洢 */
        unsigned int  reserved : 27; /* bit[5-31]: ������ */
    } reg;
} SOC_MDDRC_TEST_PACK_DBG_SEL_UNION;
#endif
#define SOC_MDDRC_TEST_PACK_DBG_SEL_dbg_sel_START   (0)
#define SOC_MDDRC_TEST_PACK_DBG_SEL_dbg_sel_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_PACK_DBG_STATE_UNION
 �ṹ˵��  : PACK_DBG_STATE �Ĵ����ṹ���塣��ַƫ����:0x094����ֵ:0x00000000�����:32
 �Ĵ���˵��: pack��dbg״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dbg_state : 16; /* bit[0-15] : �Ĵ����dbg_selѡ���dbg_modexx��ֵ */
        unsigned int  reserved  : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_MDDRC_TEST_PACK_DBG_STATE_UNION;
#endif
#define SOC_MDDRC_TEST_PACK_DBG_STATE_dbg_state_START  (0)
#define SOC_MDDRC_TEST_PACK_DBG_STATE_dbg_state_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_TEST_DBG_PCLK_GATED_UNION
 �ṹ˵��  : DBG_PCLK_GATED �Ĵ����ṹ���塣��ַƫ����:0x098����ֵ:0x00000000�����:32
 �Ĵ���˵��: dbg���ʱ���ſ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sta_ckg_dbg : 1;  /* bit[0-0] : 0���ر�dbg���ʱ��
                                                      1����dbg���ʱ�� */
        unsigned int  reserved    : 31; /* bit[1-31]:  */
    } reg;
} SOC_MDDRC_TEST_DBG_PCLK_GATED_UNION;
#endif
#define SOC_MDDRC_TEST_DBG_PCLK_GATED_sta_ckg_dbg_START  (0)
#define SOC_MDDRC_TEST_DBG_PCLK_GATED_sta_ckg_dbg_END    (0)






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

#endif /* end of soc_mddrc_test_interface.h */
