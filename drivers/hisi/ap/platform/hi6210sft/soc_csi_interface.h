

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_CSI_INTERFACE_H__
#define __SOC_CSI_INTERFACE_H__

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
/* �Ĵ���˵����Controller�汾�Ĵ�����
   λ����UNION�ṹ:  SOC_CSI_VERSION_UNION */
#define SOC_CSI_VERSION_ADDR(base)                    ((base) + (0x0000))

/* �Ĵ���˵����Data Lane�������üĴ�����
   λ����UNION�ṹ:  SOC_CSI_N_LANES_UNION */
#define SOC_CSI_N_LANES_ADDR(base)                    ((base) + (0x0004))

/* �Ĵ���˵����PHY�رտ��ƼĴ�����
   λ����UNION�ṹ:  SOC_CSI_PHY_SHUTDOWNZ_UNION */
#define SOC_CSI_PHY_SHUTDOWNZ_ADDR(base)              ((base) + (0x0008))

/* �Ĵ���˵����PHY��λ���ƼĴ�����
   λ����UNION�ṹ:  SOC_CSI_DPHY_RSTZ_UNION */
#define SOC_CSI_DPHY_RSTZ_ADDR(base)                  ((base) + (0x000C))

/* �Ĵ���˵����Controller��λ���ƼĴ�����
   λ����UNION�ṹ:  SOC_CSI_CSI2_RESETN_UNION */
#define SOC_CSI_CSI2_RESETN_ADDR(base)                ((base) + (0x0010))

/* �Ĵ���˵����PHY״ָ̬ʾ�Ĵ�����
   λ����UNION�ṹ:  SOC_CSI_PHY_STATE_UNION */
#define SOC_CSI_PHY_STATE_ADDR(base)                  ((base) + (0x0014))

/* �Ĵ���˵�����б߽�ƥ�����Data ID�Ĵ���1��
            ע�⣬���Ӳ��û������Data ID����˼Ĵ��������ڡ�
   λ����UNION�ṹ:  SOC_CSI_DATA_IDS_1_UNION */
#define SOC_CSI_DATA_IDS_1_ADDR(base)                 ((base) + (0x0018))

/* �Ĵ���˵�����б߽�ƥ�����Data ID�Ĵ���2��
            ע�⣬���Ӳ��û������Data ID���������õ�Data ID������Ϊ4����˼Ĵ��������ڡ�
   λ����UNION�ṹ:  SOC_CSI_DATA_IDS_2_UNION */
#define SOC_CSI_DATA_IDS_2_ADDR(base)                 ((base) + (0x001C))

/* �Ĵ���˵��������״ָ̬ʾ�Ĵ���1��
   λ����UNION�ṹ:  SOC_CSI_ERR1_UNION */
#define SOC_CSI_ERR1_ADDR(base)                       ((base) + (0x0020))

/* �Ĵ���˵��������״ָ̬ʾ�Ĵ���2��
   λ����UNION�ṹ:  SOC_CSI_ERR2_UNION */
#define SOC_CSI_ERR2_ADDR(base)                       ((base) + (0x0024))

/* �Ĵ���˵����ERR1�ж����μĴ�����
   λ����UNION�ṹ:  SOC_CSI_MASK1_UNION */
#define SOC_CSI_MASK1_ADDR(base)                      ((base) + (0x0028))

/* �Ĵ���˵����ERR2�ж����μĴ�����
   λ����UNION�ṹ:  SOC_CSI_MASK2_UNION */
#define SOC_CSI_MASK2_ADDR(base)                      ((base) + (0x002C))

/* �Ĵ���˵����PHY���Խӿڿ��ƼĴ���0��
   λ����UNION�ṹ:  SOC_CSI_PHY_TST_CTRL0_UNION */
#define SOC_CSI_PHY_TST_CTRL0_ADDR(base)              ((base) + (0x0030))

/* �Ĵ���˵����PHY���Խӿڿ��ƼĴ���1��
   λ����UNION�ṹ:  SOC_CSI_PHY_TST_CTRL1_UNION */
#define SOC_CSI_PHY_TST_CTRL1_ADDR(base)              ((base) + (0x0034))





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
 �ṹ��    : SOC_CSI_VERSION_UNION
 �ṹ˵��  : VERSION �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x3130322A�����:32
 �Ĵ���˵��: Controller�汾�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  version : 32; /* bit[0-31]: ָʾCSI-2 Host Controller�İ汾�� */
    } reg;
} SOC_CSI_VERSION_UNION;
#endif
#define SOC_CSI_VERSION_version_START  (0)
#define SOC_CSI_VERSION_version_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_CSI_N_LANES_UNION
 �ṹ˵��  : N_LANES �Ĵ����ṹ���塣��ַƫ����:0x0004����ֵ:0x00000003�����:32
 �Ĵ���˵��: Data Lane�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  n_lanes  : 2;  /* bit[0-1] : ���û��Data Lane��������
                                                   00��1��Lane 0����
                                                   01��2��Lane 0��1����
                                                   10��3��Lane 0��1��2����
                                                   11��4��Lane 0��1��2��3����
                                                   ע�⣬����Ĵ����ĸ�λֵ��Ӳ�����õ�Data Lane����CSI_N_LANES�йأ�ֻ�ܵ�PHY����Stop״̬ʱ���ܽ������á����CSI_N_LANES=Ϊ1����˼Ĵ��������ڡ� */
        unsigned int  reserved : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_CSI_N_LANES_UNION;
#endif
#define SOC_CSI_N_LANES_n_lanes_START   (0)
#define SOC_CSI_N_LANES_n_lanes_END     (1)


/*****************************************************************************
 �ṹ��    : SOC_CSI_PHY_SHUTDOWNZ_UNION
 �ṹ˵��  : PHY_SHUTDOWNZ �Ĵ����ṹ���塣��ַƫ����:0x0008����ֵ:0x00000000�����:32
 �Ĵ���˵��: PHY�رտ��ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  phy_shutdownz : 1;  /* bit[0]   : PHY�رտ��ơ�
                                                        0���ر�PHY��
                                                        1������PHY��
                                                        �ر�PHY��ʹPHY�����µ�״̬��PHY��ģ�ⲿ�ֽ����µ磬�����߼�������λ�� */
        unsigned int  reserved      : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_CSI_PHY_SHUTDOWNZ_UNION;
#endif
#define SOC_CSI_PHY_SHUTDOWNZ_phy_shutdownz_START  (0)
#define SOC_CSI_PHY_SHUTDOWNZ_phy_shutdownz_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_CSI_DPHY_RSTZ_UNION
 �ṹ˵��  : DPHY_RSTZ �Ĵ����ṹ���塣��ַƫ����:0x000C����ֵ:0x00000000�����:32
 �Ĵ���˵��: PHY��λ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dphy_rstz : 1;  /* bit[0]   : PHY��λ���ơ�
                                                    0����λPHY��
                                                    1���⸴λPHY��
                                                    �˼Ĵ���ʹPHY�������߼�����λ�� */
        unsigned int  reserved  : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_CSI_DPHY_RSTZ_UNION;
#endif
#define SOC_CSI_DPHY_RSTZ_dphy_rstz_START  (0)
#define SOC_CSI_DPHY_RSTZ_dphy_rstz_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_CSI_CSI2_RESETN_UNION
 �ṹ˵��  : CSI2_RESETN �Ĵ����ṹ���塣��ַƫ����:0x0010����ֵ:0x00000000�����:32
 �Ĵ���˵��: Controller��λ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  csi2_resetn : 1;  /* bit[0]   : CSI-2 Controller��λ���ơ�
                                                      0����λ��
                                                      1���⸴λ�� */
        unsigned int  reserved    : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_CSI_CSI2_RESETN_UNION;
#endif
#define SOC_CSI_CSI2_RESETN_csi2_resetn_START  (0)
#define SOC_CSI_CSI2_RESETN_csi2_resetn_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_CSI_PHY_STATE_UNION
 �ṹ˵��  : PHY_STATE �Ĵ����ṹ���塣��ַƫ����:0x0014����ֵ:0x00000200�����:32
 �Ĵ���˵��: PHY״ָ̬ʾ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  phy_rxulpsesc_0     : 1;  /* bit[0]    : ָʾLane 0����ULP״̬��
                                                               0����ULP״̬��
                                                               1��ULP״̬�� */
        unsigned int  phy_rxulpsesc_1     : 1;  /* bit[1]    : ָʾLane 1����ULP״̬��
                                                               0����ULP״̬��
                                                               1��ULP״̬�� */
        unsigned int  phy_rxulpsesc_2     : 1;  /* bit[2]    : ָʾLane 2����ULP״̬��
                                                               0����ULP״̬��
                                                               1��ULP״̬�� */
        unsigned int  phy_rxulpsesc_3     : 1;  /* bit[3]    : ָʾLane 3����ULP״̬��
                                                               0����ULP״̬��
                                                               1��ULP״̬�� */
        unsigned int  phy_stopstatedata_0 : 1;  /* bit[4]    : ָʾLane 0����STOP״̬��
                                                               0����STOP״̬��
                                                               1��STOP״̬�� */
        unsigned int  phy_stopstatedata_1 : 1;  /* bit[5]    : ָʾLane 1����STOP״̬��
                                                               0����STOP״̬��
                                                               1��STOP״̬�� */
        unsigned int  phy_stopstatedata_2 : 1;  /* bit[6]    : ָʾLane 2����STOP״̬��
                                                               0����STOP״̬��
                                                               1��STOP״̬�� */
        unsigned int  phy_stopstatedata_3 : 1;  /* bit[7]    : ָʾLane 3����STOP״̬��
                                                               0����STOP״̬��
                                                               1��STOP״̬�� */
        unsigned int  phy_rxclkactivehs   : 1;  /* bit[8]    : ָʾClock Lane���ڽ���DDRʱ�ӡ�
                                                               0��û�н��գ�
                                                               1�����ڽ��ա� */
        unsigned int  phy_rxulpsclknot    : 1;  /* bit[9]    : ָʾClock Lane����ULP״̬��
                                                               0��ULP״̬��
                                                               1����ULP״̬�� */
        unsigned int  phy_stopstateclk    : 1;  /* bit[10]   : ָʾClock Lane����STOP״̬��
                                                               0����STOP״̬��
                                                               1��STOP״̬�� */
        unsigned int  bypass_2ecc_tst     : 1;  /* bit[11]   : Double ECC�����µ��غ���·����ģʽ���ơ� */
        unsigned int  reserved            : 20; /* bit[12-31]: ������ */
    } reg;
} SOC_CSI_PHY_STATE_UNION;
#endif
#define SOC_CSI_PHY_STATE_phy_rxulpsesc_0_START      (0)
#define SOC_CSI_PHY_STATE_phy_rxulpsesc_0_END        (0)
#define SOC_CSI_PHY_STATE_phy_rxulpsesc_1_START      (1)
#define SOC_CSI_PHY_STATE_phy_rxulpsesc_1_END        (1)
#define SOC_CSI_PHY_STATE_phy_rxulpsesc_2_START      (2)
#define SOC_CSI_PHY_STATE_phy_rxulpsesc_2_END        (2)
#define SOC_CSI_PHY_STATE_phy_rxulpsesc_3_START      (3)
#define SOC_CSI_PHY_STATE_phy_rxulpsesc_3_END        (3)
#define SOC_CSI_PHY_STATE_phy_stopstatedata_0_START  (4)
#define SOC_CSI_PHY_STATE_phy_stopstatedata_0_END    (4)
#define SOC_CSI_PHY_STATE_phy_stopstatedata_1_START  (5)
#define SOC_CSI_PHY_STATE_phy_stopstatedata_1_END    (5)
#define SOC_CSI_PHY_STATE_phy_stopstatedata_2_START  (6)
#define SOC_CSI_PHY_STATE_phy_stopstatedata_2_END    (6)
#define SOC_CSI_PHY_STATE_phy_stopstatedata_3_START  (7)
#define SOC_CSI_PHY_STATE_phy_stopstatedata_3_END    (7)
#define SOC_CSI_PHY_STATE_phy_rxclkactivehs_START    (8)
#define SOC_CSI_PHY_STATE_phy_rxclkactivehs_END      (8)
#define SOC_CSI_PHY_STATE_phy_rxulpsclknot_START     (9)
#define SOC_CSI_PHY_STATE_phy_rxulpsclknot_END       (9)
#define SOC_CSI_PHY_STATE_phy_stopstateclk_START     (10)
#define SOC_CSI_PHY_STATE_phy_stopstateclk_END       (10)
#define SOC_CSI_PHY_STATE_bypass_2ecc_tst_START      (11)
#define SOC_CSI_PHY_STATE_bypass_2ecc_tst_END        (11)


/*****************************************************************************
 �ṹ��    : SOC_CSI_DATA_IDS_1_UNION
 �ṹ˵��  : DATA_IDS_1 �Ĵ����ṹ���塣��ַƫ����:0x0018����ֵ:0x00000000�����:32
 �Ĵ���˵��: �б߽�ƥ�����Data ID�Ĵ���1��
            ע�⣬���Ӳ��û������Data ID����˼Ĵ��������ڡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  di0_dt : 6;  /* bit[0-5]  : Data ID 0 Data Type */
        unsigned int  di0_vc : 2;  /* bit[6-7]  : Data ID 0 Virtual channel */
        unsigned int  di1_dt : 6;  /* bit[8-13] : Data ID 1 Data Type */
        unsigned int  di1_vc : 2;  /* bit[14-15]: Data ID 1 Virtual channel */
        unsigned int  di2_dt : 6;  /* bit[16-21]: Data ID 2 Data Type */
        unsigned int  di2_vc : 2;  /* bit[22-23]: Data ID 2 Virtual channel */
        unsigned int  di3_dt : 6;  /* bit[24-29]: Data ID 3 Data Type */
        unsigned int  di3_vc : 2;  /* bit[30-31]: Data ID 3 Virtual channel */
    } reg;
} SOC_CSI_DATA_IDS_1_UNION;
#endif
#define SOC_CSI_DATA_IDS_1_di0_dt_START  (0)
#define SOC_CSI_DATA_IDS_1_di0_dt_END    (5)
#define SOC_CSI_DATA_IDS_1_di0_vc_START  (6)
#define SOC_CSI_DATA_IDS_1_di0_vc_END    (7)
#define SOC_CSI_DATA_IDS_1_di1_dt_START  (8)
#define SOC_CSI_DATA_IDS_1_di1_dt_END    (13)
#define SOC_CSI_DATA_IDS_1_di1_vc_START  (14)
#define SOC_CSI_DATA_IDS_1_di1_vc_END    (15)
#define SOC_CSI_DATA_IDS_1_di2_dt_START  (16)
#define SOC_CSI_DATA_IDS_1_di2_dt_END    (21)
#define SOC_CSI_DATA_IDS_1_di2_vc_START  (22)
#define SOC_CSI_DATA_IDS_1_di2_vc_END    (23)
#define SOC_CSI_DATA_IDS_1_di3_dt_START  (24)
#define SOC_CSI_DATA_IDS_1_di3_dt_END    (29)
#define SOC_CSI_DATA_IDS_1_di3_vc_START  (30)
#define SOC_CSI_DATA_IDS_1_di3_vc_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_CSI_DATA_IDS_2_UNION
 �ṹ˵��  : DATA_IDS_2 �Ĵ����ṹ���塣��ַƫ����:0x001C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �б߽�ƥ�����Data ID�Ĵ���2��
            ע�⣬���Ӳ��û������Data ID���������õ�Data ID������Ϊ4����˼Ĵ��������ڡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  di4_dt : 6;  /* bit[0-5]  : Data ID 4 Data Type */
        unsigned int  di4_vc : 2;  /* bit[6-7]  : Data ID 4 Virtual channel */
        unsigned int  di5_dt : 6;  /* bit[8-13] : Data ID 5 Data Type */
        unsigned int  di5_vc : 2;  /* bit[14-15]: Data ID 5 Virtual channel */
        unsigned int  di6_dt : 6;  /* bit[16-21]: Data ID 6 Data Type */
        unsigned int  di6_vc : 2;  /* bit[22-23]: Data ID 6 Virtual channel */
        unsigned int  di7_dt : 6;  /* bit[24-29]: Data ID 7 Data Type */
        unsigned int  di7_vc : 2;  /* bit[30-31]: Data ID 7 Virtual channel */
    } reg;
} SOC_CSI_DATA_IDS_2_UNION;
#endif
#define SOC_CSI_DATA_IDS_2_di4_dt_START  (0)
#define SOC_CSI_DATA_IDS_2_di4_dt_END    (5)
#define SOC_CSI_DATA_IDS_2_di4_vc_START  (6)
#define SOC_CSI_DATA_IDS_2_di4_vc_END    (7)
#define SOC_CSI_DATA_IDS_2_di5_dt_START  (8)
#define SOC_CSI_DATA_IDS_2_di5_dt_END    (13)
#define SOC_CSI_DATA_IDS_2_di5_vc_START  (14)
#define SOC_CSI_DATA_IDS_2_di5_vc_END    (15)
#define SOC_CSI_DATA_IDS_2_di6_dt_START  (16)
#define SOC_CSI_DATA_IDS_2_di6_dt_END    (21)
#define SOC_CSI_DATA_IDS_2_di6_vc_START  (22)
#define SOC_CSI_DATA_IDS_2_di6_vc_END    (23)
#define SOC_CSI_DATA_IDS_2_di7_dt_START  (24)
#define SOC_CSI_DATA_IDS_2_di7_dt_END    (29)
#define SOC_CSI_DATA_IDS_2_di7_vc_START  (30)
#define SOC_CSI_DATA_IDS_2_di7_vc_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_CSI_ERR1_UNION
 �ṹ˵��  : ERR1 �Ĵ����ṹ���塣��ַƫ����:0x0020����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����״ָ̬ʾ�Ĵ���1��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  phy_errsotsynchs_0    : 1;  /* bit[0]    : Data Lane 0 SoT����ָʾ��ͬ��ʧ�ܣ���
                                                                 0���޴���
                                                                 1������ */
        unsigned int  phy_errsotsynchs_1    : 1;  /* bit[1]    : Data Lane 1 SoT����ָʾ��ͬ��ʧ�ܣ���
                                                                 0���޴���
                                                                 1������ */
        unsigned int  phy_errsotsynchs_2    : 1;  /* bit[2]    : Data Lane 2 SoT����ָʾ��ͬ��ʧ�ܣ���
                                                                 0���޴���
                                                                 1������ */
        unsigned int  phy_errsotsynchs_3    : 1;  /* bit[3]    : Data Lane 3 SoT����ָʾ��ͬ��ʧ�ܣ���
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_f_bndry_match_vc0 : 1;  /* bit[4]    : Virtual Channel 0 FS��FEƥ�����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_f_bndry_match_vc1 : 1;  /* bit[5]    : Virtual Channel 1 FS��FEƥ�����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_f_bndry_match_vc2 : 1;  /* bit[6]    : Virtual Channel 2 FS��FEƥ�����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_f_bndry_match_vc3 : 1;  /* bit[7]    : Virtual Channel 3 FS��FEƥ�����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_f_seq_vc0         : 1;  /* bit[8]    : Virtual Channel 0 ֡���д���ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_f_seq_vc1         : 1;  /* bit[9]    : Virtual Channel 1 ֡���д���ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_f_seq_vc2         : 1;  /* bit[10]   : Virtual Channel 2 ֡���д���ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_f_seq_vc3         : 1;  /* bit[11]   : Virtual Channel 3 ֡���д���ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_frame_data_vc0    : 1;  /* bit[12]   : Virtual Channel 0 ���һ֡����CRC����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_frame_data_vc1    : 1;  /* bit[13]   : Virtual Channel 1 ���һ֡����CRC����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_frame_data_vc2    : 1;  /* bit[14]   : Virtual Channel 2 ���һ֡����CRC����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_frame_data_vc3    : 1;  /* bit[15]   : Virtual Channel 3 ���һ֡����CRC����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_l_bndry_match_di0 : 1;  /* bit[16]   : Data ID 0 LS��LEƥ�����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_l_bndry_match_di1 : 1;  /* bit[17]   : Data ID 1 LS��LEƥ�����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_l_bndry_match_di2 : 1;  /* bit[18]   : Data ID 2 LS��LEƥ�����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_l_bndry_match_di3 : 1;  /* bit[19]   : Data ID 3 LS��LEƥ�����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_l_seq_di0         : 1;  /* bit[20]   : Data ID 0 �����д���ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_l_seq_di1         : 1;  /* bit[21]   : Data ID 1 �����д���ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_l_seq_di2         : 1;  /* bit[22]   : Data ID 2 �����д���ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_l_seq_di3         : 1;  /* bit[23]   : Data ID 3 �����д���ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  vc0_err_crc           : 1;  /* bit[24]   : Virtual Channel 0 CRC����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  vc1_err_crc           : 1;  /* bit[25]   : Virtual Channel 1 CRC����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  vc2_err_crc           : 1;  /* bit[26]   : Virtual Channel 2 CRC����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  vc3_err_crc           : 1;  /* bit[27]   : Virtual Channel 3 CRC����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_ecc_double        : 1;  /* bit[28]   : ��ͷECC 2-bit����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  reserved              : 3;  /* bit[29-31]: ������ */
    } reg;
} SOC_CSI_ERR1_UNION;
#endif
#define SOC_CSI_ERR1_phy_errsotsynchs_0_START     (0)
#define SOC_CSI_ERR1_phy_errsotsynchs_0_END       (0)
#define SOC_CSI_ERR1_phy_errsotsynchs_1_START     (1)
#define SOC_CSI_ERR1_phy_errsotsynchs_1_END       (1)
#define SOC_CSI_ERR1_phy_errsotsynchs_2_START     (2)
#define SOC_CSI_ERR1_phy_errsotsynchs_2_END       (2)
#define SOC_CSI_ERR1_phy_errsotsynchs_3_START     (3)
#define SOC_CSI_ERR1_phy_errsotsynchs_3_END       (3)
#define SOC_CSI_ERR1_err_f_bndry_match_vc0_START  (4)
#define SOC_CSI_ERR1_err_f_bndry_match_vc0_END    (4)
#define SOC_CSI_ERR1_err_f_bndry_match_vc1_START  (5)
#define SOC_CSI_ERR1_err_f_bndry_match_vc1_END    (5)
#define SOC_CSI_ERR1_err_f_bndry_match_vc2_START  (6)
#define SOC_CSI_ERR1_err_f_bndry_match_vc2_END    (6)
#define SOC_CSI_ERR1_err_f_bndry_match_vc3_START  (7)
#define SOC_CSI_ERR1_err_f_bndry_match_vc3_END    (7)
#define SOC_CSI_ERR1_err_f_seq_vc0_START          (8)
#define SOC_CSI_ERR1_err_f_seq_vc0_END            (8)
#define SOC_CSI_ERR1_err_f_seq_vc1_START          (9)
#define SOC_CSI_ERR1_err_f_seq_vc1_END            (9)
#define SOC_CSI_ERR1_err_f_seq_vc2_START          (10)
#define SOC_CSI_ERR1_err_f_seq_vc2_END            (10)
#define SOC_CSI_ERR1_err_f_seq_vc3_START          (11)
#define SOC_CSI_ERR1_err_f_seq_vc3_END            (11)
#define SOC_CSI_ERR1_err_frame_data_vc0_START     (12)
#define SOC_CSI_ERR1_err_frame_data_vc0_END       (12)
#define SOC_CSI_ERR1_err_frame_data_vc1_START     (13)
#define SOC_CSI_ERR1_err_frame_data_vc1_END       (13)
#define SOC_CSI_ERR1_err_frame_data_vc2_START     (14)
#define SOC_CSI_ERR1_err_frame_data_vc2_END       (14)
#define SOC_CSI_ERR1_err_frame_data_vc3_START     (15)
#define SOC_CSI_ERR1_err_frame_data_vc3_END       (15)
#define SOC_CSI_ERR1_err_l_bndry_match_di0_START  (16)
#define SOC_CSI_ERR1_err_l_bndry_match_di0_END    (16)
#define SOC_CSI_ERR1_err_l_bndry_match_di1_START  (17)
#define SOC_CSI_ERR1_err_l_bndry_match_di1_END    (17)
#define SOC_CSI_ERR1_err_l_bndry_match_di2_START  (18)
#define SOC_CSI_ERR1_err_l_bndry_match_di2_END    (18)
#define SOC_CSI_ERR1_err_l_bndry_match_di3_START  (19)
#define SOC_CSI_ERR1_err_l_bndry_match_di3_END    (19)
#define SOC_CSI_ERR1_err_l_seq_di0_START          (20)
#define SOC_CSI_ERR1_err_l_seq_di0_END            (20)
#define SOC_CSI_ERR1_err_l_seq_di1_START          (21)
#define SOC_CSI_ERR1_err_l_seq_di1_END            (21)
#define SOC_CSI_ERR1_err_l_seq_di2_START          (22)
#define SOC_CSI_ERR1_err_l_seq_di2_END            (22)
#define SOC_CSI_ERR1_err_l_seq_di3_START          (23)
#define SOC_CSI_ERR1_err_l_seq_di3_END            (23)
#define SOC_CSI_ERR1_vc0_err_crc_START            (24)
#define SOC_CSI_ERR1_vc0_err_crc_END              (24)
#define SOC_CSI_ERR1_vc1_err_crc_START            (25)
#define SOC_CSI_ERR1_vc1_err_crc_END              (25)
#define SOC_CSI_ERR1_vc2_err_crc_START            (26)
#define SOC_CSI_ERR1_vc2_err_crc_END              (26)
#define SOC_CSI_ERR1_vc3_err_crc_START            (27)
#define SOC_CSI_ERR1_vc3_err_crc_END              (27)
#define SOC_CSI_ERR1_err_ecc_double_START         (28)
#define SOC_CSI_ERR1_err_ecc_double_END           (28)


/*****************************************************************************
 �ṹ��    : SOC_CSI_ERR2_UNION
 �ṹ˵��  : ERR2 �Ĵ����ṹ���塣��ַƫ����:0x0024����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����״ָ̬ʾ�Ĵ���2��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  phy_erresc_0          : 1;  /* bit[0]    : Data Lane 0 Escape��ڴ���ULPM��ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  phy_erresc_1          : 1;  /* bit[1]    : Data Lane 1 Escape��ڴ���ULPM��ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  phy_erresc_2          : 1;  /* bit[2]    : Data Lane 2 Escape��ڴ���ULPM��ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  phy_erresc_3          : 1;  /* bit[3]    : Data Lane 3 Escape��ڴ���ULPM��ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  phy_errsoths_0        : 1;  /* bit[4]    : Data Lane 0 SoT����ָʾ��ͬ���ɹ�����
                                                                 0���޴���
                                                                 1������ */
        unsigned int  phy_errsoths_1        : 1;  /* bit[5]    : Data Lane 1 SoT����ָʾ��ͬ���ɹ�����
                                                                 0���޴���
                                                                 1������ */
        unsigned int  phy_errsoths_2        : 1;  /* bit[6]    : Data Lane 2 SoT����ָʾ��ͬ���ɹ�����
                                                                 0���޴���
                                                                 1������ */
        unsigned int  phy_errsoths_3        : 1;  /* bit[7]    : Data Lane 3 SoT����ָʾ��ͬ���ɹ�����
                                                                 0���޴���
                                                                 1������ */
        unsigned int  vc0_err_ecc_corrected : 1;  /* bit[8]    : Virtual Channel 0 ��ͷECC 1-bit����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  vc1_err_ecc_corrected : 1;  /* bit[9]    : Virtual Channel 1 ��ͷECC 1-bit����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  vc2_err_ecc_corrected : 1;  /* bit[10]   : Virtual Channel 2 ��ͷECC 1-bit����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  vc3_err_ecc_corrected : 1;  /* bit[11]   : Virtual Channel 3 ��ͷECC 1-bit����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_id_vc0            : 1;  /* bit[12]   : Virtual Channel 0 δ֪�������ʹ���ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_id_vc1            : 1;  /* bit[13]   : Virtual Channel 1 δ֪�������ʹ���ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_id_vc2            : 1;  /* bit[14]   : Virtual Channel 2 δ֪�������ʹ���ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_id_vc3            : 1;  /* bit[15]   : Virtual Channel 3 δ֪�������ʹ���ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_l_bndry_match_di4 : 1;  /* bit[16]   : Data ID 4 LS��LEƥ�����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_l_bndry_match_di5 : 1;  /* bit[17]   : Data ID 5 LS��LEƥ�����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_l_bndry_match_di6 : 1;  /* bit[18]   : Data ID 6 LS��LEƥ�����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_l_bndry_match_di7 : 1;  /* bit[19]   : Data ID 7 LS��LEƥ�����ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_l_seq_di4         : 1;  /* bit[20]   : Data ID 4 �����д���ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_l_seq_di5         : 1;  /* bit[21]   : Data ID 5 �����д���ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_l_seq_di6         : 1;  /* bit[22]   : Data ID 6 �����д���ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  err_l_seq_di7         : 1;  /* bit[23]   : Data ID 7 �����д���ָʾ��
                                                                 0���޴���
                                                                 1������ */
        unsigned int  reserved              : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_CSI_ERR2_UNION;
#endif
#define SOC_CSI_ERR2_phy_erresc_0_START           (0)
#define SOC_CSI_ERR2_phy_erresc_0_END             (0)
#define SOC_CSI_ERR2_phy_erresc_1_START           (1)
#define SOC_CSI_ERR2_phy_erresc_1_END             (1)
#define SOC_CSI_ERR2_phy_erresc_2_START           (2)
#define SOC_CSI_ERR2_phy_erresc_2_END             (2)
#define SOC_CSI_ERR2_phy_erresc_3_START           (3)
#define SOC_CSI_ERR2_phy_erresc_3_END             (3)
#define SOC_CSI_ERR2_phy_errsoths_0_START         (4)
#define SOC_CSI_ERR2_phy_errsoths_0_END           (4)
#define SOC_CSI_ERR2_phy_errsoths_1_START         (5)
#define SOC_CSI_ERR2_phy_errsoths_1_END           (5)
#define SOC_CSI_ERR2_phy_errsoths_2_START         (6)
#define SOC_CSI_ERR2_phy_errsoths_2_END           (6)
#define SOC_CSI_ERR2_phy_errsoths_3_START         (7)
#define SOC_CSI_ERR2_phy_errsoths_3_END           (7)
#define SOC_CSI_ERR2_vc0_err_ecc_corrected_START  (8)
#define SOC_CSI_ERR2_vc0_err_ecc_corrected_END    (8)
#define SOC_CSI_ERR2_vc1_err_ecc_corrected_START  (9)
#define SOC_CSI_ERR2_vc1_err_ecc_corrected_END    (9)
#define SOC_CSI_ERR2_vc2_err_ecc_corrected_START  (10)
#define SOC_CSI_ERR2_vc2_err_ecc_corrected_END    (10)
#define SOC_CSI_ERR2_vc3_err_ecc_corrected_START  (11)
#define SOC_CSI_ERR2_vc3_err_ecc_corrected_END    (11)
#define SOC_CSI_ERR2_err_id_vc0_START             (12)
#define SOC_CSI_ERR2_err_id_vc0_END               (12)
#define SOC_CSI_ERR2_err_id_vc1_START             (13)
#define SOC_CSI_ERR2_err_id_vc1_END               (13)
#define SOC_CSI_ERR2_err_id_vc2_START             (14)
#define SOC_CSI_ERR2_err_id_vc2_END               (14)
#define SOC_CSI_ERR2_err_id_vc3_START             (15)
#define SOC_CSI_ERR2_err_id_vc3_END               (15)
#define SOC_CSI_ERR2_err_l_bndry_match_di4_START  (16)
#define SOC_CSI_ERR2_err_l_bndry_match_di4_END    (16)
#define SOC_CSI_ERR2_err_l_bndry_match_di5_START  (17)
#define SOC_CSI_ERR2_err_l_bndry_match_di5_END    (17)
#define SOC_CSI_ERR2_err_l_bndry_match_di6_START  (18)
#define SOC_CSI_ERR2_err_l_bndry_match_di6_END    (18)
#define SOC_CSI_ERR2_err_l_bndry_match_di7_START  (19)
#define SOC_CSI_ERR2_err_l_bndry_match_di7_END    (19)
#define SOC_CSI_ERR2_err_l_seq_di4_START          (20)
#define SOC_CSI_ERR2_err_l_seq_di4_END            (20)
#define SOC_CSI_ERR2_err_l_seq_di5_START          (21)
#define SOC_CSI_ERR2_err_l_seq_di5_END            (21)
#define SOC_CSI_ERR2_err_l_seq_di6_START          (22)
#define SOC_CSI_ERR2_err_l_seq_di6_END            (22)
#define SOC_CSI_ERR2_err_l_seq_di7_START          (23)
#define SOC_CSI_ERR2_err_l_seq_di7_END            (23)


/*****************************************************************************
 �ṹ��    : SOC_CSI_MASK1_UNION
 �ṹ˵��  : MASK1 �Ĵ����ṹ���塣��ַƫ����:0x0028����ֵ:0x00000000�����:32
 �Ĵ���˵��: ERR1�ж����μĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mask_phy_errsotsynchs_0    : 1;  /* bit[0]    : phy_errsotsynchs_0�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_phy_errsotsynchs_1    : 1;  /* bit[1]    : phy_errsotsynchs_1�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_phy_errsotsynchs_2    : 1;  /* bit[2]    : phy_errsotsynchs_2�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_phy_errsotsynchs_3    : 1;  /* bit[3]    : phy_errsotsynchs_3�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_f_bndry_match_vc0 : 1;  /* bit[4]    : err_f_bndry_match_vc0�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_f_bndry_match_vc1 : 1;  /* bit[5]    : err_f_bndry_match_vc1�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_f_bndry_match_vc2 : 1;  /* bit[6]    : err_f_bndry_match_vc2�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_f_bndry_match_vc3 : 1;  /* bit[7]    : err_f_bndry_match_vc3�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_f_seq_vc0         : 1;  /* bit[8]    : err_f_seq_vc0�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_f_seq_vc1         : 1;  /* bit[9]    : err_f_seq_vc1�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_f_seq_vc2         : 1;  /* bit[10]   : err_f_seq_vc2�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_f_seq_vc3         : 1;  /* bit[11]   : err_f_seq_vc3�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_frame_data_vc0    : 1;  /* bit[12]   : err_frame_data_vc0�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_frame_data_vc1    : 1;  /* bit[13]   : err_frame_data_vc1�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_frame_data_vc2    : 1;  /* bit[14]   : err_frame_data_vc2�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_frame_data_vc3    : 1;  /* bit[15]   : err_frame_data_vc3�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_l_bndry_match_di0 : 1;  /* bit[16]   : err_l_bndry_match_di0�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_l_bndry_match_di1 : 1;  /* bit[17]   : err_l_bndry_match_di1�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_l_bndry_match_di2 : 1;  /* bit[18]   : err_l_bndry_match_di2�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_l_bndry_match_di3 : 1;  /* bit[19]   : err_l_bndry_match_di3�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_l_seq_di0         : 1;  /* bit[20]   : err_l_seq_di0�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_l_seq_di1         : 1;  /* bit[21]   : err_l_seq_di1�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_l_seq_di2         : 1;  /* bit[22]   : err_l_seq_di2�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_l_seq_di3         : 1;  /* bit[23]   : err_l_seq_di3�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_vc0_err_crc           : 1;  /* bit[24]   : vc0_err_crc�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_vc1_err_crc           : 1;  /* bit[25]   : vc1_err_crc�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_vc2_err_crc           : 1;  /* bit[26]   : vc2_err_crc�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_vc3_err_crc           : 1;  /* bit[27]   : vc3_err_crc�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_ecc_double        : 1;  /* bit[28]   : err_ecc_double�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  reserved                   : 3;  /* bit[29-31]: ������ */
    } reg;
} SOC_CSI_MASK1_UNION;
#endif
#define SOC_CSI_MASK1_mask_phy_errsotsynchs_0_START     (0)
#define SOC_CSI_MASK1_mask_phy_errsotsynchs_0_END       (0)
#define SOC_CSI_MASK1_mask_phy_errsotsynchs_1_START     (1)
#define SOC_CSI_MASK1_mask_phy_errsotsynchs_1_END       (1)
#define SOC_CSI_MASK1_mask_phy_errsotsynchs_2_START     (2)
#define SOC_CSI_MASK1_mask_phy_errsotsynchs_2_END       (2)
#define SOC_CSI_MASK1_mask_phy_errsotsynchs_3_START     (3)
#define SOC_CSI_MASK1_mask_phy_errsotsynchs_3_END       (3)
#define SOC_CSI_MASK1_mask_err_f_bndry_match_vc0_START  (4)
#define SOC_CSI_MASK1_mask_err_f_bndry_match_vc0_END    (4)
#define SOC_CSI_MASK1_mask_err_f_bndry_match_vc1_START  (5)
#define SOC_CSI_MASK1_mask_err_f_bndry_match_vc1_END    (5)
#define SOC_CSI_MASK1_mask_err_f_bndry_match_vc2_START  (6)
#define SOC_CSI_MASK1_mask_err_f_bndry_match_vc2_END    (6)
#define SOC_CSI_MASK1_mask_err_f_bndry_match_vc3_START  (7)
#define SOC_CSI_MASK1_mask_err_f_bndry_match_vc3_END    (7)
#define SOC_CSI_MASK1_mask_err_f_seq_vc0_START          (8)
#define SOC_CSI_MASK1_mask_err_f_seq_vc0_END            (8)
#define SOC_CSI_MASK1_mask_err_f_seq_vc1_START          (9)
#define SOC_CSI_MASK1_mask_err_f_seq_vc1_END            (9)
#define SOC_CSI_MASK1_mask_err_f_seq_vc2_START          (10)
#define SOC_CSI_MASK1_mask_err_f_seq_vc2_END            (10)
#define SOC_CSI_MASK1_mask_err_f_seq_vc3_START          (11)
#define SOC_CSI_MASK1_mask_err_f_seq_vc3_END            (11)
#define SOC_CSI_MASK1_mask_err_frame_data_vc0_START     (12)
#define SOC_CSI_MASK1_mask_err_frame_data_vc0_END       (12)
#define SOC_CSI_MASK1_mask_err_frame_data_vc1_START     (13)
#define SOC_CSI_MASK1_mask_err_frame_data_vc1_END       (13)
#define SOC_CSI_MASK1_mask_err_frame_data_vc2_START     (14)
#define SOC_CSI_MASK1_mask_err_frame_data_vc2_END       (14)
#define SOC_CSI_MASK1_mask_err_frame_data_vc3_START     (15)
#define SOC_CSI_MASK1_mask_err_frame_data_vc3_END       (15)
#define SOC_CSI_MASK1_mask_err_l_bndry_match_di0_START  (16)
#define SOC_CSI_MASK1_mask_err_l_bndry_match_di0_END    (16)
#define SOC_CSI_MASK1_mask_err_l_bndry_match_di1_START  (17)
#define SOC_CSI_MASK1_mask_err_l_bndry_match_di1_END    (17)
#define SOC_CSI_MASK1_mask_err_l_bndry_match_di2_START  (18)
#define SOC_CSI_MASK1_mask_err_l_bndry_match_di2_END    (18)
#define SOC_CSI_MASK1_mask_err_l_bndry_match_di3_START  (19)
#define SOC_CSI_MASK1_mask_err_l_bndry_match_di3_END    (19)
#define SOC_CSI_MASK1_mask_err_l_seq_di0_START          (20)
#define SOC_CSI_MASK1_mask_err_l_seq_di0_END            (20)
#define SOC_CSI_MASK1_mask_err_l_seq_di1_START          (21)
#define SOC_CSI_MASK1_mask_err_l_seq_di1_END            (21)
#define SOC_CSI_MASK1_mask_err_l_seq_di2_START          (22)
#define SOC_CSI_MASK1_mask_err_l_seq_di2_END            (22)
#define SOC_CSI_MASK1_mask_err_l_seq_di3_START          (23)
#define SOC_CSI_MASK1_mask_err_l_seq_di3_END            (23)
#define SOC_CSI_MASK1_mask_vc0_err_crc_START            (24)
#define SOC_CSI_MASK1_mask_vc0_err_crc_END              (24)
#define SOC_CSI_MASK1_mask_vc1_err_crc_START            (25)
#define SOC_CSI_MASK1_mask_vc1_err_crc_END              (25)
#define SOC_CSI_MASK1_mask_vc2_err_crc_START            (26)
#define SOC_CSI_MASK1_mask_vc2_err_crc_END              (26)
#define SOC_CSI_MASK1_mask_vc3_err_crc_START            (27)
#define SOC_CSI_MASK1_mask_vc3_err_crc_END              (27)
#define SOC_CSI_MASK1_mask_err_ecc_double_START         (28)
#define SOC_CSI_MASK1_mask_err_ecc_double_END           (28)


/*****************************************************************************
 �ṹ��    : SOC_CSI_MASK2_UNION
 �ṹ˵��  : MASK2 �Ĵ����ṹ���塣��ַƫ����:0x002C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ERR2�ж����μĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mask_phy_erresc_0          : 1;  /* bit[0]    : phy_erresc_0�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_phy_erresc_1          : 1;  /* bit[1]    : phy_erresc_1�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_phy_erresc_2          : 1;  /* bit[2]    : phy_erresc_2�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_phy_erresc_3          : 1;  /* bit[3]    : phy_erresc_3�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_phy_errsoths_0        : 1;  /* bit[4]    : phy_errsoths_0�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_phy_errsoths_1        : 1;  /* bit[5]    : phy_errsoths_1�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_phy_errsoths_2        : 1;  /* bit[6]    : phy_errsoths_2�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_phy_errsoths_3        : 1;  /* bit[7]    : phy_errsoths_3�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_vc0_err_ecc_corrected : 1;  /* bit[8]    : vc0_err_ecc_corrected�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_vc1_err_ecc_corrected : 1;  /* bit[9]    : vc1_err_ecc_corrected�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_vc2_err_ecc_corrected : 1;  /* bit[10]   : vc2_err_ecc_corrected�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_vc3_err_ecc_corrected : 1;  /* bit[11]   : vc3_err_ecc_corrected�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_id_vc0            : 1;  /* bit[12]   : err_id_vc0�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_id_vc1            : 1;  /* bit[13]   : err_id_vc1�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_id_vc2            : 1;  /* bit[14]   : err_id_vc2�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_id_vc3            : 1;  /* bit[15]   : err_id_vc3�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_l_bndry_match_di4 : 1;  /* bit[16]   : err_l_bndry_match_di4�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_l_bndry_match_di5 : 1;  /* bit[17]   : err_l_bndry_match_di5�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_l_bndry_match_di6 : 1;  /* bit[18]   : err_l_bndry_match_di6�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_l_bndry_match_di7 : 1;  /* bit[19]   : err_l_bndry_match_di7�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_l_seq_di4         : 1;  /* bit[20]   : err_l_seq_di4�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_l_seq_di5         : 1;  /* bit[21]   : err_l_seq_di5�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_l_seq_di6         : 1;  /* bit[22]   : err_l_seq_di6�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  mask_err_l_seq_di7         : 1;  /* bit[23]   : err_l_seq_di7�ж����Ρ�
                                                                      0�������Σ�
                                                                      1�����Ρ� */
        unsigned int  reserved                   : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_CSI_MASK2_UNION;
#endif
#define SOC_CSI_MASK2_mask_phy_erresc_0_START           (0)
#define SOC_CSI_MASK2_mask_phy_erresc_0_END             (0)
#define SOC_CSI_MASK2_mask_phy_erresc_1_START           (1)
#define SOC_CSI_MASK2_mask_phy_erresc_1_END             (1)
#define SOC_CSI_MASK2_mask_phy_erresc_2_START           (2)
#define SOC_CSI_MASK2_mask_phy_erresc_2_END             (2)
#define SOC_CSI_MASK2_mask_phy_erresc_3_START           (3)
#define SOC_CSI_MASK2_mask_phy_erresc_3_END             (3)
#define SOC_CSI_MASK2_mask_phy_errsoths_0_START         (4)
#define SOC_CSI_MASK2_mask_phy_errsoths_0_END           (4)
#define SOC_CSI_MASK2_mask_phy_errsoths_1_START         (5)
#define SOC_CSI_MASK2_mask_phy_errsoths_1_END           (5)
#define SOC_CSI_MASK2_mask_phy_errsoths_2_START         (6)
#define SOC_CSI_MASK2_mask_phy_errsoths_2_END           (6)
#define SOC_CSI_MASK2_mask_phy_errsoths_3_START         (7)
#define SOC_CSI_MASK2_mask_phy_errsoths_3_END           (7)
#define SOC_CSI_MASK2_mask_vc0_err_ecc_corrected_START  (8)
#define SOC_CSI_MASK2_mask_vc0_err_ecc_corrected_END    (8)
#define SOC_CSI_MASK2_mask_vc1_err_ecc_corrected_START  (9)
#define SOC_CSI_MASK2_mask_vc1_err_ecc_corrected_END    (9)
#define SOC_CSI_MASK2_mask_vc2_err_ecc_corrected_START  (10)
#define SOC_CSI_MASK2_mask_vc2_err_ecc_corrected_END    (10)
#define SOC_CSI_MASK2_mask_vc3_err_ecc_corrected_START  (11)
#define SOC_CSI_MASK2_mask_vc3_err_ecc_corrected_END    (11)
#define SOC_CSI_MASK2_mask_err_id_vc0_START             (12)
#define SOC_CSI_MASK2_mask_err_id_vc0_END               (12)
#define SOC_CSI_MASK2_mask_err_id_vc1_START             (13)
#define SOC_CSI_MASK2_mask_err_id_vc1_END               (13)
#define SOC_CSI_MASK2_mask_err_id_vc2_START             (14)
#define SOC_CSI_MASK2_mask_err_id_vc2_END               (14)
#define SOC_CSI_MASK2_mask_err_id_vc3_START             (15)
#define SOC_CSI_MASK2_mask_err_id_vc3_END               (15)
#define SOC_CSI_MASK2_mask_err_l_bndry_match_di4_START  (16)
#define SOC_CSI_MASK2_mask_err_l_bndry_match_di4_END    (16)
#define SOC_CSI_MASK2_mask_err_l_bndry_match_di5_START  (17)
#define SOC_CSI_MASK2_mask_err_l_bndry_match_di5_END    (17)
#define SOC_CSI_MASK2_mask_err_l_bndry_match_di6_START  (18)
#define SOC_CSI_MASK2_mask_err_l_bndry_match_di6_END    (18)
#define SOC_CSI_MASK2_mask_err_l_bndry_match_di7_START  (19)
#define SOC_CSI_MASK2_mask_err_l_bndry_match_di7_END    (19)
#define SOC_CSI_MASK2_mask_err_l_seq_di4_START          (20)
#define SOC_CSI_MASK2_mask_err_l_seq_di4_END            (20)
#define SOC_CSI_MASK2_mask_err_l_seq_di5_START          (21)
#define SOC_CSI_MASK2_mask_err_l_seq_di5_END            (21)
#define SOC_CSI_MASK2_mask_err_l_seq_di6_START          (22)
#define SOC_CSI_MASK2_mask_err_l_seq_di6_END            (22)
#define SOC_CSI_MASK2_mask_err_l_seq_di7_START          (23)
#define SOC_CSI_MASK2_mask_err_l_seq_di7_END            (23)


/*****************************************************************************
 �ṹ��    : SOC_CSI_PHY_TST_CTRL0_UNION
 �ṹ˵��  : PHY_TST_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x0030����ֵ:0x00000000�����:32
 �Ĵ���˵��: PHY���Խӿڿ��ƼĴ���0��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  phy_testclr : 1;  /* bit[0]   : PHY���Խӿڸ�λ��
                                                      0���⸴λ��
                                                      1����λ�� */
        unsigned int  phy_testclk : 1;  /* bit[1]   : PHY���Խӿ�ʱ�ӣ���phy_testen��ͬ���в���ѡ�� */
        unsigned int  reserved    : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_CSI_PHY_TST_CTRL0_UNION;
#endif
#define SOC_CSI_PHY_TST_CTRL0_phy_testclr_START  (0)
#define SOC_CSI_PHY_TST_CTRL0_phy_testclr_END    (0)
#define SOC_CSI_PHY_TST_CTRL0_phy_testclk_START  (1)
#define SOC_CSI_PHY_TST_CTRL0_phy_testclk_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_CSI_PHY_TST_CTRL1_UNION
 �ṹ˵��  : PHY_TST_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x0034����ֵ:0x00000000�����:32
 �Ĵ���˵��: PHY���Խӿڿ��ƼĴ���1��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  phy_testdin  : 8;  /* bit[0-7]  : PHY���Խӿ�8-bit�������롣 */
        unsigned int  phy_testdout : 8;  /* bit[8-15] : PHY���Խӿ�8-bit��������� */
        unsigned int  phy_testen   : 1;  /* bit[16]   : PHY���Խӿڲ���ģʽѡ��
                                                        0��phy_testclk������д���ݣ�
                                                        1��phy_testclk�½���д��ַ�� */
        unsigned int  reserved     : 15; /* bit[17-31]: ������ */
    } reg;
} SOC_CSI_PHY_TST_CTRL1_UNION;
#endif
#define SOC_CSI_PHY_TST_CTRL1_phy_testdin_START   (0)
#define SOC_CSI_PHY_TST_CTRL1_phy_testdin_END     (7)
#define SOC_CSI_PHY_TST_CTRL1_phy_testdout_START  (8)
#define SOC_CSI_PHY_TST_CTRL1_phy_testdout_END    (15)
#define SOC_CSI_PHY_TST_CTRL1_phy_testen_START    (16)
#define SOC_CSI_PHY_TST_CTRL1_phy_testen_END      (16)






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

#endif /* end of soc_csi_interface.h */
