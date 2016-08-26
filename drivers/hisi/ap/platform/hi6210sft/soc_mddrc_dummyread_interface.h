

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_MDDRC_DUMMYREAD_INTERFACE_H__
#define __SOC_MDDRC_DUMMYREAD_INTERFACE_H__

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
/* �Ĵ���˵����DDRC_DUMRD_CTRL��DDRC��dummy read���ƼĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_dummyread_DDRC_DUMRD_CTRL_UNION */
#define SOC_MDDRC_dummyread_DDRC_DUMRD_CTRL_ADDR(base) ((base) + (0x0))

/* �Ĵ���˵����DDRC_DUMRD_CNT��DDRC��dummy read��������Ĵ�����
   λ����UNION�ṹ:  SOC_MDDRC_dummyread_DDRC_DUMRD_CNT_UNION */
#define SOC_MDDRC_dummyread_DDRC_DUMRD_CNT_ADDR(base) ((base) + (0x4))

/* �Ĵ���˵����DDRC_DUMRD_NUM��DDRC��dummy read����������üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_dummyread_DDRC_DUMRD_NUM_UNION */
#define SOC_MDDRC_dummyread_DDRC_DUMRD_NUM_ADDR(base) ((base) + (0x8))

/* �Ĵ���˵����DDRC_DUMRD_RNKADD��DDRC��RANK��ַ�������üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_dummyread_DDRC_DUMRD_RNKADD_UNION */
#define SOC_MDDRC_dummyread_DDRC_DUMRD_RNKADD_ADDR(base, rnks)  ((base) + (0xC+0x4*(rnks)))

/* �Ĵ���˵����DDRC_DUMRD_QOS��DUMRD�������arqos�����ȼ�����
   λ����UNION�ṹ:  SOC_MDDRC_dummyread_DDRC_DUMRD_QOS_UNION */
#define SOC_MDDRC_dummyread_DDRC_DUMRD_QOS_ADDR(base) ((base) + (0x020))

/* �Ĵ���˵����DDRC_DUMRD_XID��DUMRD�������MID��ID���üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_dummyread_DDRC_DUMRD_XID_UNION */
#define SOC_MDDRC_dummyread_DDRC_DUMRD_XID_ADDR(base) ((base) + (0x024))





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
 �ṹ��    : SOC_MDDRC_dummyread_DDRC_DUMRD_CTRL_UNION
 �ṹ˵��  : DDRC_DUMRD_CTRL �Ĵ����ṹ���塣��ַƫ����:0x0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_DUMRD_CTRL��DDRC��dummy read���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dummy_rd_en : 1;  /* bit[0]   : DDR Dummy read����ʹ�ܡ�
                                                      1��dummy read����ʹ�ܣ�
                                                      0��dummy read���ܹرա� */
        unsigned int  reserved    : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_MDDRC_dummyread_DDRC_DUMRD_CTRL_UNION;
#endif
#define SOC_MDDRC_dummyread_DDRC_DUMRD_CTRL_dummy_rd_en_START  (0)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_CTRL_dummy_rd_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_dummyread_DDRC_DUMRD_CNT_UNION
 �ṹ˵��  : DDRC_DUMRD_CNT �Ĵ����ṹ���塣��ַƫ����:0x4����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_DUMRD_CNT��DDRC��dummy read��������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dummy_rd_cnt : 32; /* bit[0-31]: dummy read����������������ü�����˺󣬻����N������� */
    } reg;
} SOC_MDDRC_dummyread_DDRC_DUMRD_CNT_UNION;
#endif
#define SOC_MDDRC_dummyread_DDRC_DUMRD_CNT_dummy_rd_cnt_START  (0)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_CNT_dummy_rd_cnt_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_dummyread_DDRC_DUMRD_NUM_UNION
 �ṹ˵��  : DDRC_DUMRD_NUM �Ĵ����ṹ���塣��ַƫ����:0x8����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_DUMRD_NUM��DDRC��dummy read����������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dummy_rd_num : 8;  /* bit[0-7]  : dummy read��������󵽺����Ӧ��rank���͵Ķ�����ĸ����� */
        unsigned int  dummy_rd_gap : 8;  /* bit[8-15] : ÿ����������֮��ļ����
                                                        0���������ͣ�
                                                        1~255����������֮��ȴ�N������ */
        unsigned int  reserved     : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_MDDRC_dummyread_DDRC_DUMRD_NUM_UNION;
#endif
#define SOC_MDDRC_dummyread_DDRC_DUMRD_NUM_dummy_rd_num_START  (0)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_NUM_dummy_rd_num_END    (7)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_NUM_dummy_rd_gap_START  (8)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_NUM_dummy_rd_gap_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_dummyread_DDRC_DUMRD_RNKADD_UNION
 �ṹ˵��  : DDRC_DUMRD_RNKADD �Ĵ����ṹ���塣��ַƫ����:0xC+0x4*(rnks)����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_DUMRD_RNKADD��DDRC��RANK��ַ�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dummy_rd_rnk_addr : 32; /* bit[0-31]: �üĴ������õĵ�ַָ���Ӧ��rank���������rank0,�õ�ַҪ���ó�rank0�е�ĳһ����ַ�� */
    } reg;
} SOC_MDDRC_dummyread_DDRC_DUMRD_RNKADD_UNION;
#endif
#define SOC_MDDRC_dummyread_DDRC_DUMRD_RNKADD_dummy_rd_rnk_addr_START  (0)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_RNKADD_dummy_rd_rnk_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_dummyread_DDRC_DUMRD_QOS_UNION
 �ṹ˵��  : DDRC_DUMRD_QOS �Ĵ����ṹ���塣��ַƫ����:0x020����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_DUMRD_QOS��DUMRD�������arqos�����ȼ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dummy_rd_qos : 4;  /* bit[0-3] : dummy_read�������arqos���ã�Ӧ�ð���������ȼ����� */
        unsigned int  reserved     : 28; /* bit[4-31]: ������ */
    } reg;
} SOC_MDDRC_dummyread_DDRC_DUMRD_QOS_UNION;
#endif
#define SOC_MDDRC_dummyread_DDRC_DUMRD_QOS_dummy_rd_qos_START  (0)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_QOS_dummy_rd_qos_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_dummyread_DDRC_DUMRD_XID_UNION
 �ṹ˵��  : DDRC_DUMRD_XID �Ĵ����ṹ���塣��ַƫ����:0x024����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_DUMRD_XID��DUMRD�������MID��ID���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dummy_rd_id  : 16; /* bit[0-15] : dummy_read�������id���ã���ѡ��idӳ�����ȼ�ʱ��Ҫ��֤dummy_readӳ������ȼ���� */
        unsigned int  dummy_rd_mid : 16; /* bit[16-31]: dummy_read�������mid���� */
    } reg;
} SOC_MDDRC_dummyread_DDRC_DUMRD_XID_UNION;
#endif
#define SOC_MDDRC_dummyread_DDRC_DUMRD_XID_dummy_rd_id_START   (0)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_XID_dummy_rd_id_END     (15)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_XID_dummy_rd_mid_START  (16)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_XID_dummy_rd_mid_END    (31)






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

#endif /* end of soc_mddrc_dummyread_interface.h */
