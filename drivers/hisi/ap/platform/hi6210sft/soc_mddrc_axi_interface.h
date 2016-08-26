

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_MDDRC_AXI_INTERFACE_H__
#define __SOC_MDDRC_AXI_INTERFACE_H__

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
/* �Ĵ���˵��������������Ϣ
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_RTL_INF_UNION */
#define SOC_MDDRC_AXI_AXI_RTL_INF_ADDR(base)          ((base) + (0x000))

/* �Ĵ���˵�������üĴ�������
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_CFG_LOCK_UNION */
#define SOC_MDDRC_AXI_AXI_CFG_LOCK_ADDR(base)         ((base) + (0x004))

/* �Ĵ���˵����ģ���ʱ���ſ�
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_CKG_UNION */
#define SOC_MDDRC_AXI_AXI_CKG_ADDR(base)              ((base) + (0x008))

/* �Ĵ���˵����ģ����Ϊ
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_ACTION_UNION */
#define SOC_MDDRC_AXI_AXI_ACTION_ADDR(base)           ((base) + (0x020))

/* �Ĵ���˵������д�ٲý�ֹ
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_RW_ARB_DIS_UNION */
#define SOC_MDDRC_AXI_AXI_RW_ARB_DIS_ADDR(base)       ((base) + (0x024))

/* �Ĵ���˵������ַ����ӳ��
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_REGION_MAP_UNION */
#define SOC_MDDRC_AXI_AXI_REGION_MAP_ADDR(base, regions)  ((base) + (0x100+0x10*(regions)))

/* �Ĵ���˵������ַ��������
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_REGION_ATTRIB_UNION */
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ADDR(base, regions)  ((base) + (0x104+0x10*(regions)))

/* �Ĵ���˵������ַ�����ַ����ģʽ
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_REGION_SCRMBL_UNION */
#define SOC_MDDRC_AXI_AXI_REGION_SCRMBL_ADDR(base, regions)  ((base) + (0x108+0x10*(regions)))

/* �Ĵ���˵�����������ȼ�ӳ�䷽ʽ
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_QOS_MAP_UNION */
#define SOC_MDDRC_AXI_AXI_QOS_MAP_ADDR(base, ports)   ((base) + (0x200+0x10*(ports)))

/* �Ĵ���˵����д�������ȼ�ӳ���
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_QOS_WRPRI_UNION */
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_ADDR(base, ports)  ((base) + (0x204+0x10*(ports)))

/* �Ĵ���˵�������������ȼ�ӳ���
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_QOS_RDPRI_UNION */
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_ADDR(base, ports)  ((base) + (0x208+0x10*(ports)))

/* �Ĵ���˵�������ȼ�����Ӧ����ӳ���
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_QOS_ADPT_UNION */
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_ADDR(base, ports)  ((base) + (0x20C+0x10*(ports)))

/* �Ĵ���˵�����˿ڵ�����OSTD����
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_OSTD_PRT_UNION */
#define SOC_MDDRC_AXI_AXI_OSTD_PRT_ADDR(base, ports)  ((base) + (0x300+0x10*(ports)))

/* �Ĵ���˵�����˿ڵ�����OSTDͳ��״̬
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_OSTD_PRT_ST_UNION */
#define SOC_MDDRC_AXI_AXI_OSTD_PRT_ST_ADDR(base, ports)  ((base) + (0x304+0x10*(ports)))

/* �Ĵ���˵����ECC�ض���д��������
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_ECC_CMD_PRI_UNION */
#define SOC_MDDRC_AXI_AXI_ECC_CMD_PRI_ADDR(base, ports)  ((base) + (0x308+0x10*(ports)))

/* �Ĵ���˵�����˿ڷ��������OSTD����
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_OSTD_GROUP_UNION */
#define SOC_MDDRC_AXI_AXI_OSTD_GROUP_ADDR(base, groups)  ((base) + (0x400+0x10*(groups)))

/* �Ĵ���˵�������˿ڷ����ڻ������ȼ���
            ����OSTD����
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_OSTD_PRI0_UNION */
#define SOC_MDDRC_AXI_AXI_OSTD_PRI0_ADDR(base, groups)  ((base) + (0x404+0x10*(groups)))

/* �Ĵ���˵�������˿ڷ����ڻ������ȼ���
            ����OSTD����
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_OSTD_PRI1_UNION */
#define SOC_MDDRC_AXI_AXI_OSTD_PRI1_ADDR(base, groups)  ((base) + (0x408+0x10*(groups)))

/* �Ĵ���˵�����˿ڷ��������OSTDͳ��״̬
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_OSTD_GROUP_ST_UNION */
#define SOC_MDDRC_AXI_AXI_OSTD_GROUP_ST_ADDR(base, groups)  ((base) + (0x40C+0x10*(groups)))

/* �Ĵ���˵����д����ͬMID�������ȼ�����ʹ��
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_PUSH_WRMID_UNION */
#define SOC_MDDRC_AXI_AXI_PUSH_WRMID_ADDR(base, ports)  ((base) + (0x500+0x10*(ports)))

/* �Ĵ���˵����������ͬMID�������ȼ�����ʹ��
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_PUSH_RDMID_UNION */
#define SOC_MDDRC_AXI_AXI_PUSH_RDMID_ADDR(base, ports)  ((base) + (0x504+0x10*(ports)))

/* �Ĵ���˵���������˿ڵĹ���״̬
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_STATUS_UNION */
#define SOC_MDDRC_AXI_AXI_STATUS_ADDR(base)           ((base) + (0x600))

/* �Ĵ���˵�����ж�״̬
   λ����UNION�ṹ:  SOC_MDDRC_AXI_AXI_INT_STATUS_UNION */
#define SOC_MDDRC_AXI_AXI_INT_STATUS_ADDR(base)       ((base) + (0x610))





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
 �ṹ��    : SOC_MDDRC_AXI_AXI_RTL_INF_UNION
 �ṹ˵��  : AXI_RTL_INF �Ĵ����ṹ���塣��ַƫ����:0x000����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����������Ϣ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  addr_width       : 6;  /* bit[0-5]  : AXI���ߵ�ַλ��
                                                            0x00-0x1F��reserved��
                                                            0x20:32bits��
                                                            0x21:33bits��
                                                            0x22:34bits��
                                                            0x23:35bits��
                                                            0x24:36bits��
                                                            0x25:37bits��
                                                            0x26:38bits��
                                                            0x27:39bits��
                                                            0x28:40bits�� */
        unsigned int  no_of_chs        : 2;  /* bit[6-7]  : ����궨���DMC��ͨ��������
                                                            0x0��������1��DMC��
                                                            ����
                                                            0x3��������4��DMC�� */
        unsigned int  no_of_prts       : 4;  /* bit[8-11] : ����궨���AXI�˿ڸ�����
                                                            0x0��������1��AXI�˿ڣ�
                                                            ����
                                                            0xB��������12��AXI�˿ڣ�
                                                            ������reserved */
        unsigned int  no_of_exclus     : 8;  /* bit[12-19]: ��ͬʱ���ӵĲ�ͬexclusive�������������
                                                            0x00����֧��exclusive���
                                                            0x01��1����
                                                            0x02��2����
                                                            ����
                                                            0x1F��31����
                                                            0x20��32����
                                                            ������reserved */
        unsigned int  ecc_status       : 1;  /* bit[20]   : DMC��ECCУ�鹦��״̬��
                                                            0���رգ�
                                                            1��ʹ�ܡ� */
        unsigned int  reserved_0       : 3;  /* bit[21-23]: ������ */
        unsigned int  no_of_addr_rgns  : 4;  /* bit[24-27]: ����궨������ڵ�ַ����ӳ���regions������
                                                            0x0��������1��region��
                                                            0x1��������2��region��
                                                            ����
                                                            0xF��������16��region�� */
        unsigned int  no_of_ostd_group : 2;  /* bit[28-29]: ����궨�������ostdͳ�ƵĶ˿ڷ���ĸ�����
                                                            0x0��������1��ostd�˿ڷ��飻
                                                            ����
                                                            0x3��������4��ostd�˿ڷ��顣 */
        unsigned int  reserved_1       : 2;  /* bit[30-31]: ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_RTL_INF_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_RTL_INF_addr_width_START        (0)
#define SOC_MDDRC_AXI_AXI_RTL_INF_addr_width_END          (5)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_chs_START         (6)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_chs_END           (7)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_prts_START        (8)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_prts_END          (11)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_exclus_START      (12)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_exclus_END        (19)
#define SOC_MDDRC_AXI_AXI_RTL_INF_ecc_status_START        (20)
#define SOC_MDDRC_AXI_AXI_RTL_INF_ecc_status_END          (20)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_addr_rgns_START   (24)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_addr_rgns_END     (27)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_ostd_group_START  (28)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_ostd_group_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_CFG_LOCK_UNION
 �ṹ˵��  : AXI_CFG_LOCK �Ĵ����ṹ���塣��ַƫ����:0x004����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���üĴ�������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  apb_cfg_lock : 1;  /* bit[0]   : ����MDDRC�����еļĴ�������ģ��(AXI_IF/SEC/DMC/PUB)��
                                                       0����������
                                                       1�������������Ĵ����������AXI_IF���üĴ������޷����ʣ��ɽ��͹��ģ��� */
        unsigned int  reserved     : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_CFG_LOCK_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_CFG_LOCK_apb_cfg_lock_START  (0)
#define SOC_MDDRC_AXI_AXI_CFG_LOCK_apb_cfg_lock_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_CKG_UNION
 �ṹ˵��  : AXI_CKG �Ĵ����ṹ���塣��ַƫ����:0x008����ֵ:0x000F1FFF�����:32
 �Ĵ���˵��: ģ���ʱ���ſ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dyn_ckg_axi : 12; /* bit[0-11] : ����AXI�˿ڵĶ�̬ʱ���ſأ�
                                                       dyn_ckg_axi[n]=0��AXI�˿�n��ʱ�ӳ�����
                                                       dyn_ckg_axi[n]=1��AXI�˿�n�ڲ���ģ�����ʱ���Զ��ر�ʱ�ӡ� */
        unsigned int  dyn_ckg_rdr : 1;  /* bit[12]   : REORDERģ��Ķ�̬ʱ���ſأ�
                                                       0��ʱ�ӳ�����
                                                       1��ģ�����ʱ���Զ��ر�ʱ�ӡ� */
        unsigned int  reserved_0  : 3;  /* bit[13-15]: ������ */
        unsigned int  sta_ckg_dmc : 4;  /* bit[16-19]: ����DMC�ľ�̬ʱ���ſأ�
                                                       sta_ckg_dmc[n]=0���ر�DMCn����Ӧpub��ʱ�ӣ�
                                                       sta_ckg_dmc[n]=1����DMCn����Ӧpub��ʱ�ӡ� */
        unsigned int  reserved_1  : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_CKG_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_CKG_dyn_ckg_axi_START  (0)
#define SOC_MDDRC_AXI_AXI_CKG_dyn_ckg_axi_END    (11)
#define SOC_MDDRC_AXI_AXI_CKG_dyn_ckg_rdr_START  (12)
#define SOC_MDDRC_AXI_AXI_CKG_dyn_ckg_rdr_END    (12)
#define SOC_MDDRC_AXI_AXI_CKG_sta_ckg_dmc_START  (16)
#define SOC_MDDRC_AXI_AXI_CKG_sta_ckg_dmc_END    (19)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_ACTION_UNION
 �ṹ˵��  : AXI_ACTION �Ĵ����ṹ���塣��ַƫ����:0x020����ֵ:0x00000007�����:32
 �Ĵ���˵��: ģ����Ϊ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  exclusive_en     : 1;  /* bit[0]    : exclusive����ʹ�ܣ�
                                                            0����ֹ��
                                                            1��ʹ�ܡ� */
        unsigned int  rd_wrap_split_en : 1;  /* bit[1]    : wrap��������ʹ�ܣ�
                                                            0������֣���DMC���wrap��ַ���ƣ�
                                                            1����֡� */
        unsigned int  ecc_rmw_en       : 1;  /* bit[2]    : ECC����-��-д������ʹ�ܣ�
                                                            0����ֹ��
                                                            1��ʹ�ܡ�
                                                            ע�⣺
                                                            ������δ����ʹ��ECC���ܣ�����Դ˼Ĵ������á� */
        unsigned int  reserved_0       : 5;  /* bit[3-7]  : ������ */
        unsigned int  wr_rcv_mode      : 12; /* bit[8-19] : ������ģʽʹ�ܣ�
                                                            wr_rcv_mode[n]=0���˿�n�ķ�����ģʽ�رգ�
                                                            wr_rcv_mode[n]=1���˿�n�ķ�����ģʽʹ�ܡ�
                                                            ע�⣺
                                                            1.������ģʽʹ�����ȡ�������߹��ܵ�����
                                                            2.������ģʽʹ�ܺ󣬶���AXI�˿ڵ�д����outstanding������Ϊ1�� */
        unsigned int  reserved_1       : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_ACTION_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_ACTION_exclusive_en_START      (0)
#define SOC_MDDRC_AXI_AXI_ACTION_exclusive_en_END        (0)
#define SOC_MDDRC_AXI_AXI_ACTION_rd_wrap_split_en_START  (1)
#define SOC_MDDRC_AXI_AXI_ACTION_rd_wrap_split_en_END    (1)
#define SOC_MDDRC_AXI_AXI_ACTION_ecc_rmw_en_START        (2)
#define SOC_MDDRC_AXI_AXI_ACTION_ecc_rmw_en_END          (2)
#define SOC_MDDRC_AXI_AXI_ACTION_wr_rcv_mode_START       (8)
#define SOC_MDDRC_AXI_AXI_ACTION_wr_rcv_mode_END         (19)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_RW_ARB_DIS_UNION
 �ṹ˵��  : AXI_RW_ARB_DIS �Ĵ����ṹ���塣��ַƫ����:0x024����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��д�ٲý�ֹ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rw_arb_dis : 12; /* bit[0-11] : ��д�����ٲý�ֹ��
                                                      0����ʾ��ֹȡ����
                                                      1����ʾ��ֹ������ѹAXI���
                                                      
                                                      ע�⣬�üĴ�����λ���������Ŀ��axi���ø�����ȡ� */
        unsigned int  reserved   : 20; /* bit[12-31]: ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_RW_ARB_DIS_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_RW_ARB_DIS_rw_arb_dis_START  (0)
#define SOC_MDDRC_AXI_AXI_RW_ARB_DIS_rw_arb_dis_END    (11)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_REGION_MAP_UNION
 �ṹ˵��  : AXI_REGION_MAP �Ĵ����ṹ���塣��ַƫ����:0x100+0x10*(regions)����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ַ����ӳ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rgn_base_addr : 8;  /* bit[0-7]  : ��ǰ��ַ����Ļ���ַ���߰�λ����
                                                         ��rgn_size=0x1����rgn_base_addr[0] ��������Ϊ�㣻
                                                         ��rgn_size=0x2����rgn_base_addr[1:0]��������Ϊ�㣻
                                                         ��rgn_size=0x3����rgn_base_addr[2:0]��������Ϊ�㣻
                                                         ��rgn_size=0x4����rgn_base_addr[3:0]��������Ϊ�㣻
                                                         ��rgn_size=0x5����rgn_base_addr[4:0]��������Ϊ�㣻
                                                         ��rgn_size=0x6����rgn_base_addr[5:0]��������Ϊ�㣻
                                                         ��rgn_size=0x7����rgn_base_addr[6:0]��������Ϊ�㡣
                                                         ע�⣺����ֻ�����õ�ַ�ĸ߰�λ����������ַ��������Ȼ����ַλ��ͬ����ͬ�����磺
                                                         ����32bits��ַ����ַ����Ļ���ַ��24λΪ�㣬�����ַ��16MB���룻
                                                         ����40bits��ַ����ַ����Ļ���ַ��32λΪ�㣬�����ַ��4GB���롣 */
        unsigned int  rgn_size      : 3;  /* bit[8-10] : ��ǰ��ַ����Ĵ�С��
                                                         0x0�� 16MB��
                                                         0x1�� 32MB��
                                                         0x2�� 64MB��
                                                         0x3��128MB��
                                                         0x4��256MB��
                                                         0x5��512MB��
                                                         0x6�� 1GB��
                                                         0x7�� 2GB��
                                                         ע�⣺
                                                         1.����������32bits��ַΪ��������ַλ��ͬ�����ú��岻ͬ�����磺
                                                         ����40bits��ַ��
                                                         0x3�� 32GB��
                                                         2.˫ͨ����֯ʱ��rgn_size��������Ϊ0����ͨ����֯ʱ��rgn_size��������Ϊ0��1�� */
        unsigned int  reserved_0    : 1;  /* bit[11]   : ������ */
        unsigned int  rgn_en        : 1;  /* bit[12]   : ʹ�ܵ�ǰ��ַ����
                                                         0����ֹ��
                                                         1��ʹ�ܡ� */
        unsigned int  reserved_1    : 19; /* bit[13-31]: ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_REGION_MAP_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_REGION_MAP_rgn_base_addr_START  (0)
#define SOC_MDDRC_AXI_AXI_REGION_MAP_rgn_base_addr_END    (7)
#define SOC_MDDRC_AXI_AXI_REGION_MAP_rgn_size_START       (8)
#define SOC_MDDRC_AXI_AXI_REGION_MAP_rgn_size_END         (10)
#define SOC_MDDRC_AXI_AXI_REGION_MAP_rgn_en_START         (12)
#define SOC_MDDRC_AXI_AXI_REGION_MAP_rgn_en_END           (12)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_REGION_ATTRIB_UNION
 �ṹ˵��  : AXI_REGION_ATTRIB �Ĵ����ṹ���塣��ַƫ����:0x104+0x10*(regions)����ֵ:0x00010004�����:32
 �Ĵ���˵��: ��ַ��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch_start     : 2;  /* bit[0-1]  : ��ǰ��ַ�����ӳ����ʼͨ����
                                                        0x0��ͨ��0��
                                                        0x1��ͨ��1��
                                                        0x2��ͨ��2��
                                                        0x3��ͨ��3��
                                                        ע�⣺
                                                        ��ӳ��ģʽΪ��ͨ��ʱ��ӳ����ʼͨ����Ϊ����ͨ����
                                                        ��ӳ��ģʽΪ˫ͨ��ʱ��ӳ����ʼͨ������Ϊͨ��0��0/1ͨ����֯����ͨ��2��2/3ͨ����ַ��֯����
                                                        ��ӳ��ģʽΪ��ͨ��ʱ��ӳ����ʼͨ������Ϊͨ��0��0/1/2/3ͨ����ַ��֯���� */
        unsigned int  ch_mode      : 2;  /* bit[2-3]  : ��ǰ��ַ�����ͨ��ӳ��ģʽ��
                                                        0x0����ӳ�䣻
                                                        0x1��ӳ�䵽��ͨ������ַ������
                                                        0x2��ӳ�䵽˫ͨ������ַ��֯��
                                                        0x3��ӳ�䵽��ͨ������ַ��֯��
                                                        ע�⣺
                                                        ��ͼ����δӳ��ĵ�ַ���������ᱻ��������������ϱ��жϡ���¼������Ϣ��AXI���߷���SLVERR��Ӧ�� */
        unsigned int  ch_intlv     : 2;  /* bit[4-5]  : ��ǰ��ַ����ĵ�ַ��֯���ȣ���ͨ����ַ����ģʽ�£���������Ч����
                                                        0x0�� 64Byte��
                                                        0x1��128Byte��
                                                        0x2��256Byte��
                                                        0x3�� 4KByte��
                                                        ע�⣺
                                                        1.�����Դ�����Ϊ�߽磬������ַ������ͨ����
                                                        2.ͨ����֯ʱ����ַ��֯���ȱ�����ڵ��ڵ�ַ��������(addr_aligned)�� */
        unsigned int  reserved_0   : 2;  /* bit[6-7]  : ������ */
        unsigned int  ch_offset    : 8;  /* bit[8-15] : ��ǰ��ַ������ͨ���ڵ�ƫ�Ƶ�ַ���߰�λ����
                                                        (1)ch_mode=1������ͨ����ַ����ʱ��
                                                        ��rgn_size=0x1����ch_offset[0] ��������Ϊ�㣻
                                                        ��rgn_size=0x2����ch_offset[1:0]��������Ϊ�㣻
                                                        ��rgn_size=0x3����ch_offset[2:0]��������Ϊ�㣻
                                                        ��rgn_size=0x4����ch_offset[3:0]��������Ϊ�㣻
                                                        ��rgn_size=0x5����ch_offset[4:0]��������Ϊ�㣻
                                                        ��rgn_size=0x6����ch_offset[5:0]��������Ϊ�㣻
                                                        ��rgn_size=0x7����ch_offset[6:0]��������Ϊ�㡣
                                                        (2)ch_mode=2����˫ͨ����ַ��֯ʱ��
                                                        ��rgn_size=0x2����ch_offset[0] ��������Ϊ�㣻
                                                        ��rgn_size=0x3����ch_offset[1:0]��������Ϊ�㣻
                                                        ��rgn_size=0x4����ch_offset[2:0]��������Ϊ�㣻
                                                        ��rgn_size=0x5����ch_offset[3:0]��������Ϊ�㣻
                                                        ��rgn_size=0x6����ch_offset[4:0]��������Ϊ�㣻
                                                        ��rgn_size=0x7����ch_offset[5:0]��������Ϊ�㣻
                                                        (2)ch_mode=3������ͨ����ַ��֯ʱ��
                                                        ��rgn_size=0x3����ch_offset[0] ��������Ϊ�㣻
                                                        ��rgn_size=0x4����ch_offset[1:0]��������Ϊ�㣻
                                                        ��rgn_size=0x5����ch_offset[2:0]��������Ϊ�㣻
                                                        ��rgn_size=0x6����ch_offset[3:0]��������Ϊ�㣻
                                                        ��rgn_size=0x7����ch_offset[4:0]��������Ϊ�㣻
                                                        ע�⣺
                                                        �˵�ַ�����滻ͨ���ڵ�ַ�ĸ߰�λ����ʵ��ӳ���ַ��ͨ���ڵ�ƫ�ƣ������ַλ��ͬ����ͬ�����磺
                                                        ����32bits��ַ�����滻��ַch_addr[31:24]��
                                                        ����40bits��ַ�����滻��ַch_addr[39:32]�� */
        unsigned int  addr_aligned : 3;  /* bit[16-18]: ��ǰ��ַ����ĵ�ַ�߽�������ȣ�
                                                        0x0�� 8Byte(ֻ�е�DMC����λ��Ϊ64bitʱ���ſ�ѡ�����)��
                                                        0x1�� 16Byte��
                                                        0x2�� 32Byte��
                                                        0x3�� 64Byte��
                                                        0x4��128Byte��
                                                        0x5��256Byte��
                                                        0x6��512Byte��
                                                        0x7�� 1KByte��
                                                        ע�⣺
                                                        1.��Խ�˵�ַ����߽������ᱻ��֣�
                                                        2.��ַ�������ȱ���С�ڵ���bank��֯����(bnk_mod)��
                                                        3.��ַ��֯ʱ����ַ�������ȱ���С�ڵ��ڵ�ַ��֯����(ch_intlv)��
                                                        4.��ַ����ʱ����ַ�������ȱ���С�ڵ���DDR������PAGE��С�� */
        unsigned int  reserved_1   : 1;  /* bit[19]   : ������ */
        unsigned int  ecc_byp      : 1;  /* bit[20]   : ��ǰ��ַ�����ECCУ��BYPASSʹ�ܣ�
                                                        0��ECC BYPASS��ֹ��
                                                        1��ECC BYPASSʹ�ܡ�
                                                        ע�⣺
                                                        ������δ����ʹ��ECC���ܣ�����Դ˼Ĵ������á� */
        unsigned int  reserved_2   : 3;  /* bit[21-23]: ������ */
        unsigned int  rnk_mod      : 2;  /* bit[24-25]: ��ǰ��ַ�����ͨ����RANK��֯ģʽ��
                                                        0x0��ʹ��DMC�ڲ����ã�
                                                        0x1����RANK��ַ������
                                                        0x2��˫RANK��ַ��֯��
                                                        0x3����RANK��ַ��֯�� */
        unsigned int  reserved_3   : 2;  /* bit[26-27]: ������ */
        unsigned int  bnk_mod      : 3;  /* bit[28-30]: ��ǰ��ַ�����ͨ����BANK��֯���ȣ���֯������������ͬ����ͬ����
                                                        0~7�� 8Byte~1KByte( 8bit����)��
                                                        0~7��16Byte~2KByte(16bit����)��
                                                        0~7��32Byte~4KByte(32bit����)��
                                                        0~7��64Byte~8KByte(64bit����)��
                                                        ע�⣺
                                                        bank��֯���ȱ�����ڵ��ڵ�ַ��������(addr_aligned)�� */
        unsigned int  reserved_4   : 1;  /* bit[31]   : ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_REGION_ATTRIB_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ch_start_START      (0)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ch_start_END        (1)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ch_mode_START       (2)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ch_mode_END         (3)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ch_intlv_START      (4)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ch_intlv_END        (5)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ch_offset_START     (8)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ch_offset_END       (15)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_addr_aligned_START  (16)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_addr_aligned_END    (18)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ecc_byp_START       (20)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ecc_byp_END         (20)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_rnk_mod_START       (24)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_rnk_mod_END         (25)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_bnk_mod_START       (28)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_bnk_mod_END         (30)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_REGION_SCRMBL_UNION
 �ṹ˵��  : AXI_REGION_SCRMBL �Ĵ����ṹ���塣��ַƫ����:0x108+0x10*(regions)����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ַ�����ַ����ģʽ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bnk_scrmbl : 4;  /* bit[0-3]  : BANK��ַ����ģʽ��
                                                      0����ֹ��
                                                      1~15������ģʽ1~15��
                                                      ע�⣺
                                                      �˴�ֻ������ģʽ��ѡ�񣬾���ļ��ŷ�ʽΪ��Ŀ���ƣ���RTLģ��AXI_IF_SCRMBL�ж���ʵ�֡� */
        unsigned int  reserved_0 : 4;  /* bit[4-7]  : ������ */
        unsigned int  ch_scrmbl  : 4;  /* bit[8-11] : ͨ��ѡ������ģʽ��
                                                      0����ֹ��
                                                      1~15������ģʽ1~15��
                                                      ע�⣺
                                                      �˴�ֻ������ģʽ��ѡ�񣬾���ļ��ŷ�ʽΪ��Ŀ���ƣ���RTLģ��AXI_IF_SCRMBL�ж���ʵ�֡� */
        unsigned int  reserved_1 : 20; /* bit[12-31]: ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_REGION_SCRMBL_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_REGION_SCRMBL_bnk_scrmbl_START  (0)
#define SOC_MDDRC_AXI_AXI_REGION_SCRMBL_bnk_scrmbl_END    (3)
#define SOC_MDDRC_AXI_AXI_REGION_SCRMBL_ch_scrmbl_START   (8)
#define SOC_MDDRC_AXI_AXI_REGION_SCRMBL_ch_scrmbl_END     (11)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_QOS_MAP_UNION
 �ṹ˵��  : AXI_QOS_MAP �Ĵ����ṹ���塣��ַƫ����:0x200+0x10*(ports)����ֵ:0x00000000�����:32
 �Ĵ���˵��: �������ȼ�ӳ�䷽ʽ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  id_map_idx   : 12; /* bit[0-11] : ͨ������IDӳ�����ȼ�ʱ������IDѡ��
                                                        id_map_idx[11:8] ��ѡȡ����ID��16λ�е�����1bit����Ϊidx[2]��
                                                        id_map_idx[7:4] ��ѡȡ����ID��16λ�е�����1bit����Ϊidx[1]��
                                                        id_map_idx[3:0] ��ѡȡ����ID��16λ�е�����1bit����Ϊidx[0]��
                                                        ���磺
                                                        id_map_idx����Ϊ 0x3A0��������ID��{ID[3],ID[10],ID[0]}ƴ�ϳ�����idx[2:0]�����ڴ����ȼ����ұ���ӳ����������ȼ���
                                                        ע�⣺
                                                        �˴�������IDΪ�����ԭʼID����������λ��չ�Ķ˿�ID��Ϣ�� */
        unsigned int  pri_map_mode : 1;  /* bit[12]   : ��д�������ȼ�ӳ��ģʽ��
                                                        0������AxQOS[2:0]ӳ�䣻
                                                        1����������ID��16λ�е�����3bitsӳ�䡣
                                                        ˵����
                                                        ʹ���������ַ���֮һ���õ�ӳ����������ٴ����ȼ����ұ���ӳ����������ȼ� */
        unsigned int  reserved_0   : 3;  /* bit[13-15]: ������ */
        unsigned int  pri_push_en  : 1;  /* bit[16]   : �˿����ȼ�����ʹ�ܣ�
                                                        0����ֹ��
                                                        1��ʹ�ܡ�
                                                        ע�⣺
                                                        ���ȼ�����ʹ�ܺ󣬽��˿���ˮ�����Լ��ⲿ����Ķ�������е�������ȼ������ݸ���ǰ������˿��ٲõ�����԰��������Ӯ���ٲã������ı䱻����������������ȼ��� */
        unsigned int  push_qos_en  : 1;  /* bit[17]   : Pushed���ȼ�����ʹ�ܣ�
                                                        0����ֹ��
                                                        1��ʹ�ܡ�
                                                        ע�⣺
                                                        1.NOC���ߵ�Pressure�źţ������������߷�ѹʱ�������ȼ�������AXI_IF�ڲ������ȼ����ݣ�
                                                        2.��pri_push_en==1ʱ���˼Ĵ�����Ч�� */
        unsigned int  hurry_qos_en : 1;  /* bit[18]   : Hurry���ȼ�����ʹ�ܣ�
                                                        0����ֹ��
                                                        1��ʹ�ܡ�
                                                        ע�⣺
                                                        1.NOC���ߵ�Hurry�źţ������κ�ʱ�̴������ȼ�������AXI_IF�ڲ������ȼ����ݣ�
                                                        2.��pri_push_en==1ʱ���˼Ĵ�����Ч�� */
        unsigned int  reserved_1   : 1;  /* bit[19]   : ������ */
        unsigned int  rw_arb_mode  : 1;  /* bit[20]   : ͬһ�˿��ڶ�д�����ٲ�ģʽ��
                                                        0�����������д���ͣ�
                                                         a.�ȵ����ٲã�
                                                         b.ͬʱ�����ͬʱ����ѹ��ʱ�������ȶ������д�����˳�������ٲã�
                                                        1�������������ȼ���
                                                         a.�ȵ����ٲã�
                                                         b.ͬʱ�����ͬʱ����ѹ��ʱ�������������ȼ��ٲã�
                                                         c.�����ȼ���ͬ������LRUԭ���ٲø���һ��δ����ٲõ���� */
        unsigned int  qos_rever    : 1;  /* bit[21]   : QoS��תʹ�ܣ�����ͬһ�˿��ڶ�д��������ȼ��ٲã���
                                                        0��axqos=0ʱ��Ϊ������ȼ���
                                                        1��axqos=0ʱ��Ϊ������ȼ���
                                                        ע�⣺
                                                        ��rw_arb_mode==1ʱ���˼Ĵ�����Ч�� */
        unsigned int  reserved_2   : 10; /* bit[22-31]: ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_QOS_MAP_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_QOS_MAP_id_map_idx_START    (0)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_id_map_idx_END      (11)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_pri_map_mode_START  (12)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_pri_map_mode_END    (12)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_pri_push_en_START   (16)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_pri_push_en_END     (16)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_push_qos_en_START   (17)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_push_qos_en_END     (17)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_hurry_qos_en_START  (18)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_hurry_qos_en_END    (18)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_rw_arb_mode_START   (20)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_rw_arb_mode_END     (20)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_qos_rever_START     (21)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_qos_rever_END       (21)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_QOS_WRPRI_UNION
 �ṹ˵��  : AXI_QOS_WRPRI �Ĵ����ṹ���塣��ַƫ����:0x204+0x10*(ports)����ֵ:0x00000000�����:32
 �Ĵ���˵��: д�������ȼ�ӳ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wr_pri0  : 3;  /* bit[0-2]  : ��pri_map_mode==0ʱ��wr_pri0��awqos[2:0]Ϊ0ʱ��ӳ�����д�������ȼ���
                                                    ��pri_map_mode==1ʱ��wr_pri0��id_map��ʽ�õ���ID����Ϊ0ʱ��ӳ�����д�������ȼ���
                                                    ��DDRC�ڲ���
                                                    0x0��������ȼ���
                                                    ����
                                                    0x7��������ȼ��� */
        unsigned int  reserved_0: 1;  /* bit[3]    : ������ */
        unsigned int  wr_pri1  : 3;  /* bit[4-6]  : ͬwr_pri0������ */
        unsigned int  reserved_1: 1;  /* bit[7]    : ������ */
        unsigned int  wr_pri2  : 3;  /* bit[8-10] : ͬwr_pri0������ */
        unsigned int  reserved_2: 1;  /* bit[11]   : ������ */
        unsigned int  wr_pri3  : 3;  /* bit[12-14]: ͬwr_pri0������ */
        unsigned int  reserved_3: 1;  /* bit[15]   : ������ */
        unsigned int  wr_pri4  : 3;  /* bit[16-18]: ͬwr_pri0������ */
        unsigned int  reserved_4: 1;  /* bit[19]   : ������ */
        unsigned int  wr_pri5  : 3;  /* bit[20-22]: ͬwr_pri0������ */
        unsigned int  reserved_5: 1;  /* bit[23]   : ������ */
        unsigned int  wr_pri6  : 3;  /* bit[24-26]: ͬwr_pri0������ */
        unsigned int  reserved_6: 1;  /* bit[27]   : ������ */
        unsigned int  wr_pri7  : 3;  /* bit[28-30]: ͬwr_pri0������ */
        unsigned int  reserved_7: 1;  /* bit[31]   : ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_QOS_WRPRI_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri0_START   (0)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri0_END     (2)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri1_START   (4)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri1_END     (6)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri2_START   (8)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri2_END     (10)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri3_START   (12)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri3_END     (14)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri4_START   (16)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri4_END     (18)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri5_START   (20)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri5_END     (22)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri6_START   (24)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri6_END     (26)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri7_START   (28)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri7_END     (30)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_QOS_RDPRI_UNION
 �ṹ˵��  : AXI_QOS_RDPRI �Ĵ����ṹ���塣��ַƫ����:0x208+0x10*(ports)����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���������ȼ�ӳ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rd_pri0  : 3;  /* bit[0-2]  : ��pri_map_mode==0ʱ��rd_pri0��arqos[2:0]Ϊ0ʱ��ӳ����Ķ��������ȼ���
                                                    ��pri_map_mode==1ʱ��rd_pri0��id_map��ʽ�õ���ID����Ϊ0ʱ��ӳ����Ķ��������ȼ���
                                                    ��DDRC�ڲ���
                                                    0x0��������ȼ���
                                                    ����
                                                    0x7��������ȼ��� */
        unsigned int  reserved_0: 1;  /* bit[3]    : ������ */
        unsigned int  rd_pri1  : 3;  /* bit[4-6]  : ͬrd_pri0������ */
        unsigned int  reserved_1: 1;  /* bit[7]    : ������ */
        unsigned int  rd_pri2  : 3;  /* bit[8-10] : ͬrd_pri0������ */
        unsigned int  reserved_2: 1;  /* bit[11]   : ������ */
        unsigned int  rd_pri3  : 3;  /* bit[12-14]: ͬrd_pri0������ */
        unsigned int  reserved_3: 1;  /* bit[15]   : ������ */
        unsigned int  rd_pri4  : 3;  /* bit[16-18]: ͬrd_pri0������ */
        unsigned int  reserved_4: 1;  /* bit[19]   : ������ */
        unsigned int  rd_pri5  : 3;  /* bit[20-22]: ͬrd_pri0������ */
        unsigned int  reserved_5: 1;  /* bit[23]   : ������ */
        unsigned int  rd_pri6  : 3;  /* bit[24-26]: ͬrd_pri0������ */
        unsigned int  reserved_6: 1;  /* bit[27]   : ������ */
        unsigned int  rd_pri7  : 3;  /* bit[28-30]: ͬrd_pri0������ */
        unsigned int  reserved_7: 1;  /* bit[31]   : ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_QOS_RDPRI_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri0_START   (0)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri0_END     (2)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri1_START   (4)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri1_END     (6)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri2_START   (8)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri2_END     (10)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri3_START   (12)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri3_END     (14)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri4_START   (16)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri4_END     (18)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri5_START   (20)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri5_END     (22)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri6_START   (24)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri6_END     (26)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri7_START   (28)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri7_END     (30)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_QOS_ADPT_UNION
 �ṹ˵��  : AXI_QOS_ADPT �Ĵ����ṹ���塣��ַƫ����:0x20C+0x10*(ports)����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ȼ�����Ӧ����ӳ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rd_adpt_low  : 4;  /* bit[0-3]  : ���������ȼ�����Ӧ�������ã��͵�λ��
                                                        0x0����ֹ���ȼ�����Ӧ���ܣ�
                                                        0x1��0xF��N��16��ʱ�����ڡ�
                                                        ˵����
                                                        ÿ������Ӧ���ڵ�����������ȼ��Զ�����һ����ֱ����������������ȼ��� */
        unsigned int  rd_adpt_lvl  : 3;  /* bit[4-6]  : ���������ȼ�����Ӧ��������ˮ��
                                                        0x0��0x1��reserved��
                                                        0x2��0x7���������ȼ����ڵ��ڴ�ˮ��ʱ��ʹ�øߵ�λ���ã�����ʹ�õ͵�λ���á�
                                                        ������
                                                        0x5�����ȼ�2��5�Ķ�����ʹ��rd_pri_adpt_high�����ȼ�6��7�Ķ�����ʹ��rd_pri_adpt_low�� */
        unsigned int  reserved_0   : 1;  /* bit[7]    : ������ */
        unsigned int  rd_adpt_high : 4;  /* bit[8-11] : ���������ȼ�����Ӧ�������ã��ߵ�λ��
                                                        ͬrd_pri_adpt_low�����á� */
        unsigned int  reserved_1   : 4;  /* bit[12-15]: ������ */
        unsigned int  wr_adpt_low  : 4;  /* bit[16-19]: д�������ȼ�����Ӧ�������ã��͵�λ��
                                                        ͬrd_pri_adpt_low�����á� */
        unsigned int  wr_adpt_lvl  : 3;  /* bit[20-22]: д�������ȼ�����Ӧ��������ˮ��
                                                        ͬrd_pri_adpt_lvl�����á� */
        unsigned int  reserved_2   : 1;  /* bit[23]   : ������ */
        unsigned int  wr_adpt_high : 4;  /* bit[24-27]: д�������ȼ�����Ӧ�������ã��ߵ�λ��
                                                        ͬrd_pri_adpt_low�����á� */
        unsigned int  reserved_3   : 4;  /* bit[28-31]: ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_QOS_ADPT_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_rd_adpt_low_START   (0)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_rd_adpt_low_END     (3)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_rd_adpt_lvl_START   (4)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_rd_adpt_lvl_END     (6)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_rd_adpt_high_START  (8)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_rd_adpt_high_END    (11)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_wr_adpt_low_START   (16)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_wr_adpt_low_END     (19)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_wr_adpt_lvl_START   (20)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_wr_adpt_lvl_END     (22)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_wr_adpt_high_START  (24)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_wr_adpt_high_END    (27)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_OSTD_PRT_UNION
 �ṹ˵��  : AXI_OSTD_PRT �Ĵ����ṹ���塣��ַƫ����:0x300+0x10*(ports)����ֵ:0x00000000�����:32
 �Ĵ���˵��: �˿ڵ�����OSTD����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  prt_ostd_lvl : 7;  /* bit[0-6] : �˿ڵ�����OSTDˮ�ߣ�
                                                       0x00�������Ʊ��˿ڵ�����OSTD������
                                                       0x01��0x7F����ǰ�˿�������������OSTD������
                                                       ע�⣺
                                                       1.�˴���OSTD������������ʽ��ģ��QOSBUF�е������������ͬ����
                                                       2.ˮ�����ò��ܴ��ڲ������õ�QOSBUF�����������ȣ���ͬ���� */
        unsigned int  reserved     : 25; /* bit[7-31]: ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_OSTD_PRT_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_OSTD_PRT_prt_ostd_lvl_START  (0)
#define SOC_MDDRC_AXI_AXI_OSTD_PRT_prt_ostd_lvl_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_OSTD_PRT_ST_UNION
 �ṹ˵��  : AXI_OSTD_PRT_ST �Ĵ����ṹ���塣��ַƫ����:0x304+0x10*(ports)����ֵ:0x00000000�����:32
 �Ĵ���˵��: �˿ڵ�����OSTDͳ��״̬
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  prt_ostd_st : 7;  /* bit[0-6] : �˿ڵ�����OSTDͳ��״̬�� */
        unsigned int  reserved    : 25; /* bit[7-31]: ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_OSTD_PRT_ST_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_OSTD_PRT_ST_prt_ostd_st_START  (0)
#define SOC_MDDRC_AXI_AXI_OSTD_PRT_ST_prt_ostd_st_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_ECC_CMD_PRI_UNION
 �ṹ˵��  : AXI_ECC_CMD_PRI �Ĵ����ṹ���塣��ַƫ����:0x308+0x10*(ports)����ֵ:0x00000000�����:32
 �Ĵ���˵��: ECC�ض���д��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ecc_cmd_pri : 3;  /* bit[0-2] : ECC�ض����ȼ����á��üĴ����������ڷǶ���ECC�Ļض��ͻ�д��ͬʱ��������narrow ECC�Ļض���Narrow����Ļ�дʹ�����������ȼ��� */
        unsigned int  reserved    : 1;  /* bit[3]   : ������ */
        unsigned int  ecc_cmd_id  : 28; /* bit[4-31]: ECC�ض������ID������(������mid��port id)��
                                                      
                                                      ע�⣺axi��id���֧�ֵ�24bit,������ٸ���define�����ö����� */
    } reg;
} SOC_MDDRC_AXI_AXI_ECC_CMD_PRI_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_ECC_CMD_PRI_ecc_cmd_pri_START  (0)
#define SOC_MDDRC_AXI_AXI_ECC_CMD_PRI_ecc_cmd_pri_END    (2)
#define SOC_MDDRC_AXI_AXI_ECC_CMD_PRI_ecc_cmd_id_START   (4)
#define SOC_MDDRC_AXI_AXI_ECC_CMD_PRI_ecc_cmd_id_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_OSTD_GROUP_UNION
 �ṹ˵��  : AXI_OSTD_GROUP �Ĵ����ṹ���塣��ַƫ����:0x400+0x10*(groups)����ֵ:0x00000000�����:32
 �Ĵ���˵��: �˿ڷ��������OSTD����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  group_ostd_lvl : 7;  /* bit[0-6]  : ���������OSTDˮ�ߣ�
                                                          0x00�������Ʊ����������OSTD������
                                                          0x01��0x7F����ǰ�������������ۻ�����OSTD������
                                                          ע�⣺
                                                          1.��������OSTD�ǵ�ǰ������ѡ���˿ڵ�����OSTD֮�ͣ�
                                                          2.����ˮ�ߺ󣬷��������ж˿ڶ��ᱻ������ */
        unsigned int  reserved_0     : 9;  /* bit[7-15] : ������ */
        unsigned int  group_ostd_sel : 12; /* bit[16-27]: ����Ķ˿�ѡ��
                                                          group0_ostd_sel[n]=0���˿�nδ��ѡ����
                                                          group0_ostd_sel[n]=1���˿�n��ѡ����
                                                          ע�⣺
                                                          ֻ�б�ѡ���Ķ˿ڲŲ�������OSTDͳ�ơ� */
        unsigned int  reserved_1     : 4;  /* bit[28-31]: ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_OSTD_GROUP_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_OSTD_GROUP_group_ostd_lvl_START  (0)
#define SOC_MDDRC_AXI_AXI_OSTD_GROUP_group_ostd_lvl_END    (6)
#define SOC_MDDRC_AXI_AXI_OSTD_GROUP_group_ostd_sel_START  (16)
#define SOC_MDDRC_AXI_AXI_OSTD_GROUP_group_ostd_sel_END    (27)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_OSTD_PRI0_UNION
 �ṹ˵��  : AXI_OSTD_PRI0 �Ĵ����ṹ���塣��ַƫ����:0x404+0x10*(groups)����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���˿ڷ����ڻ������ȼ���
            ����OSTD����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0    : 8;  /* bit[0-7]  : ������ */
        unsigned int  pri1_ostd_lvl : 7;  /* bit[8-14] : ���ȼ�1������OSTDˮ�ߣ�
                                                         0x00��������ѡ��������ۻ�����OSTD������
                                                         0x01��0x7F��ѡ��������ۻ�����OSTD�����ﵽ��ˮ��ʱ��ֻ�������ȼ�����1������ͨ����
                                                         ע�⣺
                                                         1.����OSTD��ͳ�ƺ����ƶ��ǻ��ڶ˿ڷ���ģ�
                                                         2.��ʹ�����ȼ����ݹ��ܣ�������ȼ�������ܻ���Ϊ���ȼ������������ٱ������� */
        unsigned int  reserved_1    : 1;  /* bit[15]   : ������ */
        unsigned int  pri2_ostd_lvl : 7;  /* bit[16-22]: ���ȼ�2������OSTDˮ�ߣ�
                                                         ���÷�ʽͬpri0_ostd_lvl�� */
        unsigned int  reserved_2    : 1;  /* bit[23]   : ������ */
        unsigned int  pri3_ostd_lvl : 7;  /* bit[24-30]: ���ȼ�3������OSTDˮ�ߣ�
                                                         ���÷�ʽͬpri0_ostd_lvl�� */
        unsigned int  reserved_3    : 1;  /* bit[31]   : ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_OSTD_PRI0_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_OSTD_PRI0_pri1_ostd_lvl_START  (8)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI0_pri1_ostd_lvl_END    (14)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI0_pri2_ostd_lvl_START  (16)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI0_pri2_ostd_lvl_END    (22)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI0_pri3_ostd_lvl_START  (24)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI0_pri3_ostd_lvl_END    (30)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_OSTD_PRI1_UNION
 �ṹ˵��  : AXI_OSTD_PRI1 �Ĵ����ṹ���塣��ַƫ����:0x408+0x10*(groups)����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���˿ڷ����ڻ������ȼ���
            ����OSTD����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pri4_ostd_lvl : 7;  /* bit[0-6]  : ���ȼ�4������OSTDˮ�ߣ�
                                                         ���÷�ʽͬpri0_ostd_lvl�� */
        unsigned int  reserved_0    : 1;  /* bit[7]    : ������ */
        unsigned int  pri5_ostd_lvl : 7;  /* bit[8-14] : ���ȼ�5������OSTDˮ�ߣ�
                                                         ���÷�ʽͬpri0_ostd_lvl�� */
        unsigned int  reserved_1    : 1;  /* bit[15]   : ������ */
        unsigned int  pri6_ostd_lvl : 7;  /* bit[16-22]: ���ȼ�6������OSTDˮ�ߣ�
                                                         ���÷�ʽͬpri0_ostd_lvl�� */
        unsigned int  reserved_2    : 1;  /* bit[23]   : ������ */
        unsigned int  pri7_ostd_lvl : 7;  /* bit[24-30]: ���ȼ�7������OSTDˮ�ߣ�
                                                         ���÷�ʽͬpri0_ostd_lvl�� */
        unsigned int  reserved_3    : 1;  /* bit[31]   : ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_OSTD_PRI1_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_OSTD_PRI1_pri4_ostd_lvl_START  (0)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI1_pri4_ostd_lvl_END    (6)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI1_pri5_ostd_lvl_START  (8)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI1_pri5_ostd_lvl_END    (14)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI1_pri6_ostd_lvl_START  (16)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI1_pri6_ostd_lvl_END    (22)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI1_pri7_ostd_lvl_START  (24)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI1_pri7_ostd_lvl_END    (30)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_OSTD_GROUP_ST_UNION
 �ṹ˵��  : AXI_OSTD_GROUP_ST �Ĵ����ṹ���塣��ַƫ����:0x40C+0x10*(groups)����ֵ:0x00000000�����:32
 �Ĵ���˵��: �˿ڷ��������OSTDͳ��״̬
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  group_ostd_st : 7;  /* bit[0-6] : �˿ڷ��������OSTDͳ��״̬�� */
        unsigned int  reserved      : 25; /* bit[7-31]: ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_OSTD_GROUP_ST_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_OSTD_GROUP_ST_group_ostd_st_START  (0)
#define SOC_MDDRC_AXI_AXI_OSTD_GROUP_ST_group_ostd_st_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_PUSH_WRMID_UNION
 �ṹ˵��  : AXI_PUSH_WRMID �Ĵ����ṹ���塣��ַƫ����:0x500+0x10*(ports)����ֵ:0x00000000�����:32
 �Ĵ���˵��: д����ͬMID�������ȼ�����ʹ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wr_mid_sel : 32; /* bit[0-31]: д����MID�������λ���ı���ƥ��ѡ��
                                                     wr_mid_sel[n]=0������MID=n�������QOSBUF�н�ֹͬMIDд�������ȼ����ݹ��ܣ�
                                                     wr_mid_sel[n]=1������MID=n�������QOSBUF��ʹ��ͬMIDд�������ȼ����ݹ��ܡ� */
    } reg;
} SOC_MDDRC_AXI_AXI_PUSH_WRMID_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_PUSH_WRMID_wr_mid_sel_START  (0)
#define SOC_MDDRC_AXI_AXI_PUSH_WRMID_wr_mid_sel_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_PUSH_RDMID_UNION
 �ṹ˵��  : AXI_PUSH_RDMID �Ĵ����ṹ���塣��ַƫ����:0x504+0x10*(ports)����ֵ:0x00000000�����:32
 �Ĵ���˵��: ������ͬMID�������ȼ�����ʹ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rd_mid_sel : 32; /* bit[0-31]: ������MID�������λ���ı���ƥ��ѡ��
                                                     rd_mid_sel[n]=0������MID=n�������QOSBUF�н�ֹͬMID���������ȼ����ݹ��ܣ�
                                                     rd_mid_sel[n]=1������MID=n�������QOSBUF��ʹ��ͬMID���������ȼ����ݹ��ܡ� */
    } reg;
} SOC_MDDRC_AXI_AXI_PUSH_RDMID_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_PUSH_RDMID_rd_mid_sel_START  (0)
#define SOC_MDDRC_AXI_AXI_PUSH_RDMID_rd_mid_sel_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_STATUS_UNION
 �ṹ˵��  : AXI_STATUS �Ĵ����ṹ���塣��ַƫ����:0x600����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����˿ڵĹ���״̬
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  axi_if_busy : 12; /* bit[0-11] : ����AXI�˿ڵĹ���״̬��
                                                       axi_prt_busy[n]=0��AXI�˿�n���У�
                                                       axi_prt_busy[n]=1��AXI�˿�n���ڴ�����������ݣ� */
        unsigned int  reserved    : 20; /* bit[12-31]: ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_STATUS_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_STATUS_axi_if_busy_START  (0)
#define SOC_MDDRC_AXI_AXI_STATUS_axi_if_busy_END    (11)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_AXI_AXI_INT_STATUS_UNION
 �ṹ˵��  : AXI_INT_STATUS �Ĵ����ṹ���塣��ַƫ����:0x610����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж�״̬
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_ports : 12; /* bit[0-11] : �ж�Դָʾ��
                                                     interrupt_ports[n]=1���ж������ڶ˿�n��
                                                     ע�⣺
                                                     ������δͨ����ȫȨ�޼�����ж�ʹ��ʱ����Ӧ�˿ڻ�����жϡ� */
        unsigned int  reserved  : 20; /* bit[12-31]: ������ */
    } reg;
} SOC_MDDRC_AXI_AXI_INT_STATUS_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_INT_STATUS_int_ports_START  (0)
#define SOC_MDDRC_AXI_AXI_INT_STATUS_int_ports_END    (11)






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

#endif /* end of soc_mddrc_axi_interface.h */
