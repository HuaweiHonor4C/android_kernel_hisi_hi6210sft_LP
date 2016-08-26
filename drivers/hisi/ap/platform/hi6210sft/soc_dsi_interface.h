

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_DSI_INTERFACE_H__
#define __SOC_DSI_INTERFACE_H__

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
/* �Ĵ���˵�����汾ָʾ�Ĵ�����
   λ����UNION�ṹ:  SOC_DSI_VERSION_UNION */
#define SOC_DSI_VERSION_ADDR(base)                    ((base) + (0x0000))

/* �Ĵ���˵������λ���ƼĴ�����
   λ����UNION�ṹ:  SOC_DSI_PWR_UP_UNION */
#define SOC_DSI_PWR_UP_ADDR(base)                     ((base) + (0x0004))

/* �Ĵ���˵�����ڲ�ʱ�ӷ�Ƶ���ƼĴ�����
   λ����UNION�ṹ:  SOC_DSI_CLKMGR_CFG_UNION */
#define SOC_DSI_CLKMGR_CFG_ADDR(base)                 ((base) + (0x0008))

/* �Ĵ���˵����DPI Virtual Channel ID���üĴ�����
   λ����UNION�ṹ:  SOC_DSI_DPI_VCID_UNION */
#define SOC_DSI_DPI_VCID_ADDR(base)                   ((base) + (0x000C))

/* �Ĵ���˵����DPI��ɫ�������üĴ�����
   λ����UNION�ṹ:  SOC_DSI_DPI_COLOR_CODING_UNION */
#define SOC_DSI_DPI_COLOR_CODING_ADDR(base)           ((base) + (0x0010))

/* �Ĵ���˵����DPI�ӿ��źż������üĴ�����
   λ����UNION�ṹ:  SOC_DSI_DPI_CFG_POL_UNION */
#define SOC_DSI_DPI_CFG_POL_ADDR(base)                ((base) + (0x0014))

/* �Ĵ���˵����DPI LP Command����ʱ�����üĴ�����
   λ����UNION�ṹ:  SOC_DSI_DPI_LP_CMD_TIM_UNION */
#define SOC_DSI_DPI_LP_CMD_TIM_ADDR(base)             ((base) + (0x0018))

/* �Ĵ���˵����DSI���ݰ����üĴ�����
   λ����UNION�ṹ:  SOC_DSI_PCKHDL_CFG_UNION */
#define SOC_DSI_PCKHDL_CFG_ADDR(base)                 ((base) + (0x002C))

/* �Ĵ���˵����Generic�ӿ� Virtual Channel ID���üĴ�����
   λ����UNION�ṹ:  SOC_DSI_GEN_VCID_UNION */
#define SOC_DSI_GEN_VCID_ADDR(base)                   ((base) + (0x0030))

/* �Ĵ���˵����DSI����ģʽ���üĴ�����
   λ����UNION�ṹ:  SOC_DSI_MODE_CFG_UNION */
#define SOC_DSI_MODE_CFG_ADDR(base)                   ((base) + (0x0034))

/* �Ĵ���˵����Video Mode���üĴ�����
   λ����UNION�ṹ:  SOC_DSI_VID_MODE_CFG_UNION */
#define SOC_DSI_VID_MODE_CFG_ADDR(base)               ((base) + (0x0038))

/* �Ĵ���˵����Video���ߴ����üĴ�����
   λ����UNION�ṹ:  SOC_DSI_VID_PKT_SIZE_UNION */
#define SOC_DSI_VID_PKT_SIZE_ADDR(base)               ((base) + (0x003C))

/* �Ĵ���˵����Chunk�������üĴ�����
   λ����UNION�ṹ:  SOC_DSI_VID_NUM_CHUNKS_UNION */
#define SOC_DSI_VID_NUM_CHUNKS_ADDR(base)             ((base) + (0x0040))

/* �Ĵ���˵����Null���ߴ����üĴ�����
   λ����UNION�ṹ:  SOC_DSI_VID_NULL_SIZE_UNION */
#define SOC_DSI_VID_NULL_SIZE_ADDR(base)              ((base) + (0x0044))

/* �Ĵ���˵����HSAʱ�����üĴ�����
   λ����UNION�ṹ:  SOC_DSI_VID_HSA_TIME_UNION */
#define SOC_DSI_VID_HSA_TIME_ADDR(base)               ((base) + (0x0048))

/* �Ĵ���˵����HBPʱ�����üĴ�����
   λ����UNION�ṹ:  SOC_DSI_VID_HBP_TIME_UNION */
#define SOC_DSI_VID_HBP_TIME_ADDR(base)               ((base) + (0x004C))

/* �Ĵ���˵����Video��ʱ�����üĴ�����
   λ����UNION�ṹ:  SOC_DSI_VID_HLINE_TIME_UNION */
#define SOC_DSI_VID_HLINE_TIME_ADDR(base)             ((base) + (0x0050))

/* �Ĵ���˵����VSAʱ�����üĴ�����
   λ����UNION�ṹ:  SOC_DSI_VID_VSA_LINES_UNION */
#define SOC_DSI_VID_VSA_LINES_ADDR(base)              ((base) + (0x0054))

/* �Ĵ���˵����VBPʱ�����üĴ�����
   λ����UNION�ṹ:  SOC_DSI_VID_VBP_LINES_UNION */
#define SOC_DSI_VID_VBP_LINES_ADDR(base)              ((base) + (0x0058))

/* �Ĵ���˵����VFPʱ�����üĴ�����
   λ����UNION�ṹ:  SOC_DSI_VID_VFP_LINES_UNION */
#define SOC_DSI_VID_VFP_LINES_ADDR(base)              ((base) + (0x005C))

/* �Ĵ���˵����VACTʱ�����üĴ�����
   λ����UNION�ṹ:  SOC_DSI_VID_VACTIVE_LINES_UNION */
#define SOC_DSI_VID_VACTIVE_LINES_ADDR(base)          ((base) + (0x0060))

/* �Ĵ���˵����eDPI���ߴ����üĴ�����
   λ����UNION�ṹ:  SOC_DSI_EDPI_CMD_SIZE_UNION */
#define SOC_DSI_EDPI_CMD_SIZE_ADDR(base)              ((base) + (0x0064))

/* �Ĵ���˵����Command Mode���üĴ�����
   λ����UNION�ṹ:  SOC_DSI_CMD_MODE_CFG_UNION */
#define SOC_DSI_CMD_MODE_CFG_ADDR(base)               ((base) + (0x0068))

/* �Ĵ���˵����Generic��ͷ���üĴ�����
   λ����UNION�ṹ:  SOC_DSI_GEN_HDR_UNION */
#define SOC_DSI_GEN_HDR_ADDR(base)                    ((base) + (0x006C))

/* �Ĵ���˵����Generic�غ����ݼĴ�����
   λ����UNION�ṹ:  SOC_DSI_GEN_PLD_DATA_UNION */
#define SOC_DSI_GEN_PLD_DATA_ADDR(base)               ((base) + (0x0070))

/* �Ĵ���˵����Command Mode��״ָ̬ʾ�Ĵ�����
   λ����UNION�ṹ:  SOC_DSI_CMD_PKT_STATUS_UNION */
#define SOC_DSI_CMD_PKT_STATUS_ADDR(base)             ((base) + (0x0074))

/* �Ĵ���˵������ʱ���������üĴ�����
   λ����UNION�ṹ:  SOC_DSI_TO_CNT_CFG_UNION */
#define SOC_DSI_TO_CNT_CFG_ADDR(base)                 ((base) + (0x0078))

/* �Ĵ���˵����HS������������Ӧ��ʱ���üĴ�����
   λ����UNION�ṹ:  SOC_DSI_HS_RD_TO_CNT_UNION */
#define SOC_DSI_HS_RD_TO_CNT_ADDR(base)               ((base) + (0x007C))

/* �Ĵ���˵����LP������������Ӧ��ʱ���üĴ�����
   λ����UNION�ṹ:  SOC_DSI_LP_RD_TO_CNT_UNION */
#define SOC_DSI_LP_RD_TO_CNT_ADDR(base)               ((base) + (0x0080))

/* �Ĵ���˵����HSд����������Ӧ��ʱ���üĴ�����
   λ����UNION�ṹ:  SOC_DSI_HS_WR_TO_CNT_UNION */
#define SOC_DSI_HS_WR_TO_CNT_ADDR(base)               ((base) + (0x0084))

/* �Ĵ���˵����LPд����������Ӧ��ʱ���üĴ�����
   λ����UNION�ṹ:  SOC_DSI_LP_WR_TO_CNT_UNION */
#define SOC_DSI_LP_WR_TO_CNT_ADDR(base)               ((base) + (0x0088))

/* �Ĵ���˵����BTA����������Ӧ��ʱ���üĴ�����
   λ����UNION�ṹ:  SOC_DSI_BTA_TO_CNT_UNION */
#define SOC_DSI_BTA_TO_CNT_ADDR(base)                 ((base) + (0x008C))

/* �Ĵ���˵����Video Mode 3Dģʽ���üĴ�����
   λ����UNION�ṹ:  SOC_DSI_SDF_3D_UNION */
#define SOC_DSI_SDF_3D_ADDR(base)                     ((base) + (0x0090))

/* �Ĵ���˵����Clock Lane���üĴ�����
   λ����UNION�ṹ:  SOC_DSI_LPCLK_CTRL_UNION */
#define SOC_DSI_LPCLK_CTRL_ADDR(base)                 ((base) + (0x0094))

/* �Ĵ���˵����Clock Laneʱ�����üĴ�����
   λ����UNION�ṹ:  SOC_DSI_PHY_TMR_LPCLK_CFG_UNION */
#define SOC_DSI_PHY_TMR_LPCLK_CFG_ADDR(base)          ((base) + (0x0098))

/* �Ĵ���˵����Data Laneʱ�����üĴ�����
   λ����UNION�ṹ:  SOC_DSI_PHY_TMR_CFG_UNION */
#define SOC_DSI_PHY_TMR_CFG_ADDR(base)                ((base) + (0x009C))

/* �Ĵ���˵����DPHY��λ��PLL���ƼĴ�����
   λ����UNION�ṹ:  SOC_DSI_PHY_RSTZ_UNION */
#define SOC_DSI_PHY_RSTZ_ADDR(base)                   ((base) + (0x00A0))

/* �Ĵ���˵����DPHY�ӿ����üĴ�����
   λ����UNION�ṹ:  SOC_DSI_PHY_IF_CFG_UNION */
#define SOC_DSI_PHY_IF_CFG_ADDR(base)                 ((base) + (0x00A4))

/* �Ĵ���˵����DPHY ULPSģʽ���ƼĴ�����
   λ����UNION�ṹ:  SOC_DSI_PHY_ULPS_CTRL_UNION */
#define SOC_DSI_PHY_ULPS_CTRL_ADDR(base)              ((base) + (0x00A8))

/* �Ĵ���˵����DPHY TRIGGERS���üĴ�����
   λ����UNION�ṹ:  SOC_DSI_PHY_TX_TRIGGERS_UNION */
#define SOC_DSI_PHY_TX_TRIGGERS_ADDR(base)            ((base) + (0x00AC))

/* �Ĵ���˵����DPHY״ָ̬ʾ�Ĵ�����
   λ����UNION�ṹ:  SOC_DSI_PHY_STATUS_UNION */
#define SOC_DSI_PHY_STATUS_ADDR(base)                 ((base) + (0x00B0))

/* �Ĵ���˵����DPHY���ýӿڿ��ƼĴ���0��
   λ����UNION�ṹ:  SOC_DSI_PHY_TST_CTRL0_UNION */
#define SOC_DSI_PHY_TST_CTRL0_ADDR(base)              ((base) + (0x00B4))

/* �Ĵ���˵����DPHY���ýӿڿ��ƼĴ���1��
   λ����UNION�ṹ:  SOC_DSI_PHY_TST_CTRL1_UNION */
#define SOC_DSI_PHY_TST_CTRL1_ADDR(base)              ((base) + (0x00B8))

/* �Ĵ���˵�����ж�״̬�Ĵ���0��
   λ����UNION�ṹ:  SOC_DSI_INT_ST0_UNION */
#define SOC_DSI_INT_ST0_ADDR(base)                    ((base) + (0x00BC))

/* �Ĵ���˵�����ж�״̬�Ĵ���1��
   λ����UNION�ṹ:  SOC_DSI_INT_ST1_UNION */
#define SOC_DSI_INT_ST1_ADDR(base)                    ((base) + (0x00C0))

/* �Ĵ���˵�����ж����μĴ���0��
   λ����UNION�ṹ:  SOC_DSI_INT_MSK0_UNION */
#define SOC_DSI_INT_MSK0_ADDR(base)                   ((base) + (0x00C4))

/* �Ĵ���˵�����ж����μĴ���1��
   λ����UNION�ṹ:  SOC_DSI_INT_MSK1_UNION */
#define SOC_DSI_INT_MSK1_ADDR(base)                   ((base) + (0x00C8))





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
 �ṹ��    : SOC_DSI_VERSION_UNION
 �ṹ˵��  : VERSION �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x3132302A�����:32
 �Ĵ���˵��: �汾ָʾ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  version : 32; /* bit[0-31]: ָʾDSI Controller�İ汾�� */
    } reg;
} SOC_DSI_VERSION_UNION;
#endif
#define SOC_DSI_VERSION_version_START  (0)
#define SOC_DSI_VERSION_version_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_DSI_PWR_UP_UNION
 �ṹ˵��  : PWR_UP �Ĵ����ṹ���塣��ַƫ����:0x0004����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��λ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  shutdownz : 1;  /* bit[0]   : DSI Controller��λ���ơ�
                                                    0����λ��
                                                    1���⸴λ�� */
        unsigned int  reserved  : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_DSI_PWR_UP_UNION;
#endif
#define SOC_DSI_PWR_UP_shutdownz_START  (0)
#define SOC_DSI_PWR_UP_shutdownz_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_DSI_CLKMGR_CFG_UNION
 �ṹ˵��  : CLKMGR_CFG �Ĵ����ṹ���塣��ַƫ����:0x0008����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ�ʱ�ӷ�Ƶ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tx_esc_clk_division : 8;  /* bit[0-7]  : TX Escapeʱ�ӷ�Ƶ�ȣ����ڶ�DPHY������lanebyteclkʱ�ӽ��з�Ƶ����������TX_ESCʱ�ӡ�
                                                               ע�⣬����Ϊ0��1ʱ��ֹͣ����TX_ESCʱ�ӡ� */
        unsigned int  to_clk_division     : 8;  /* bit[8-15] : Timeoutʱ�ӷ�Ƶ�ȣ����ڶ�lanebyteclkʱ�ӽ��з�Ƶ��������ʱ�ӽ���ΪTimeout��������ʱ��Դ�����ڼ��HS to LP����LP to HS��ģʽת����ʱ�� */
        unsigned int  reserved            : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_DSI_CLKMGR_CFG_UNION;
#endif
#define SOC_DSI_CLKMGR_CFG_tx_esc_clk_division_START  (0)
#define SOC_DSI_CLKMGR_CFG_tx_esc_clk_division_END    (7)
#define SOC_DSI_CLKMGR_CFG_to_clk_division_START      (8)
#define SOC_DSI_CLKMGR_CFG_to_clk_division_END        (15)


/*****************************************************************************
 �ṹ��    : SOC_DSI_DPI_VCID_UNION
 �ṹ˵��  : DPI_VCID �Ĵ����ṹ���塣��ַƫ����:0x000C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DPI Virtual Channel ID���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dpi_vcid : 2;  /* bit[0-1] : Video Mode��DPI���ݰ���Virtual Channel ID�š� */
        unsigned int  reserved : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_DSI_DPI_VCID_UNION;
#endif
#define SOC_DSI_DPI_VCID_dpi_vcid_START  (0)
#define SOC_DSI_DPI_VCID_dpi_vcid_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_DSI_DPI_COLOR_CODING_UNION
 �ṹ˵��  : DPI_COLOR_CODING �Ĵ����ṹ���塣��ַƫ����:0x0010����ֵ:0x00000000�����:32
 �Ĵ���˵��: DPI��ɫ�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dpi_color_coding : 4;  /* bit[0-3] : DPI��ɫ���롣
                                                           0000��16-bit configuration 1��
                                                           0001��16-bit configuration 2��
                                                           0010��16-bit configuration 3��
                                                           0011��18-bit configuration 1��
                                                           0100��18-bit configuration 2��
                                                           0101��24-bit��
                                                           0110��20-bit YCbCr 4:2:2 loosely packed��
                                                           0111��24-bit YCbCr 4:2:2��
                                                           1000��16-bit YCbCr 4:2:2��
                                                           1001��30-bit��
                                                           1010��36-bit��
                                                           1011~1111��12-bit YCbCr 4:2:0�� */
        unsigned int  reserved_0       : 4;  /* bit[4-7] : ������ */
        unsigned int  loosely18_en     : 1;  /* bit[8]   : 18-bit loosely packetʹ�ܡ�
                                                           0����ʹ�ܣ�
                                                           1��ʹ�ܡ� */
        unsigned int  reserved_1       : 23; /* bit[9-31]: ������ */
    } reg;
} SOC_DSI_DPI_COLOR_CODING_UNION;
#endif
#define SOC_DSI_DPI_COLOR_CODING_dpi_color_coding_START  (0)
#define SOC_DSI_DPI_COLOR_CODING_dpi_color_coding_END    (3)
#define SOC_DSI_DPI_COLOR_CODING_loosely18_en_START      (8)
#define SOC_DSI_DPI_COLOR_CODING_loosely18_en_END        (8)


/*****************************************************************************
 �ṹ��    : SOC_DSI_DPI_CFG_POL_UNION
 �ṹ˵��  : DPI_CFG_POL �Ĵ����ṹ���塣��ַƫ����:0x0014����ֵ:0x00000000�����:32
 �Ĵ���˵��: DPI�ӿ��źż������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dataen_active_low : 1;  /* bit[0]   : dpidaten�ź���Ч��ƽ��
                                                            0������Ч��
                                                            1������Ч�� */
        unsigned int  vsync_active_low  : 1;  /* bit[1]   : dpivsync�ź���Ч��ƽ��
                                                            0������Ч��
                                                            1������Ч�� */
        unsigned int  hsync_active_low  : 1;  /* bit[2]   : dpihsync�ź���Ч��ƽ��
                                                            0������Ч��
                                                            1������Ч�� */
        unsigned int  shutd_active_low  : 1;  /* bit[3]   : dpishutdn�ź���Ч��ƽ��
                                                            0������Ч��
                                                            1������Ч�� */
        unsigned int  colorm_active_low : 1;  /* bit[4]   : dpicolcorm�ź���Ч��ƽ��
                                                            0������Ч��
                                                            1������Ч�� */
        unsigned int  reserved          : 27; /* bit[5-31]: ������ */
    } reg;
} SOC_DSI_DPI_CFG_POL_UNION;
#endif
#define SOC_DSI_DPI_CFG_POL_dataen_active_low_START  (0)
#define SOC_DSI_DPI_CFG_POL_dataen_active_low_END    (0)
#define SOC_DSI_DPI_CFG_POL_vsync_active_low_START   (1)
#define SOC_DSI_DPI_CFG_POL_vsync_active_low_END     (1)
#define SOC_DSI_DPI_CFG_POL_hsync_active_low_START   (2)
#define SOC_DSI_DPI_CFG_POL_hsync_active_low_END     (2)
#define SOC_DSI_DPI_CFG_POL_shutd_active_low_START   (3)
#define SOC_DSI_DPI_CFG_POL_shutd_active_low_END     (3)
#define SOC_DSI_DPI_CFG_POL_colorm_active_low_START  (4)
#define SOC_DSI_DPI_CFG_POL_colorm_active_low_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_DSI_DPI_LP_CMD_TIM_UNION
 �ṹ˵��  : DPI_LP_CMD_TIM �Ĵ����ṹ���塣��ַƫ����:0x0018����ֵ:0x00000000�����:32
 �Ĵ���˵��: DPI LP Command����ʱ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  invact_lpcmd_time  : 8;  /* bit[0-7]  : ��VACT�����ڵ�LP Command����ʱ����ֵ��������LPģʽ�£�VACT�����п�����������LP Command��������byte���� */
        unsigned int  reserved_0         : 8;  /* bit[8-15] : ������ */
        unsigned int  outvact_lpcmd_time : 8;  /* bit[16-23]: ��VACT�������LP Command����ʱ����ֵ��������LPģʽ�£�VSA/VBF/VFP�����п�����������LP Command��������byte���� */
        unsigned int  reserved_1         : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_DSI_DPI_LP_CMD_TIM_UNION;
#endif
#define SOC_DSI_DPI_LP_CMD_TIM_invact_lpcmd_time_START   (0)
#define SOC_DSI_DPI_LP_CMD_TIM_invact_lpcmd_time_END     (7)
#define SOC_DSI_DPI_LP_CMD_TIM_outvact_lpcmd_time_START  (16)
#define SOC_DSI_DPI_LP_CMD_TIM_outvact_lpcmd_time_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_DSI_PCKHDL_CFG_UNION
 �ṹ˵��  : PCKHDL_CFG �Ĵ����ṹ���塣��ַƫ����:0x002C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DSI���ݰ����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  eotp_tx_en : 1;  /* bit[0]   : EoT������ʹ�ܡ�
                                                     0����ʹ�ܣ�
                                                     1��ʹ�ܡ� */
        unsigned int  eotn_rx_en : 1;  /* bit[1]   : EoT������ʹ�ܡ�
                                                     0����ʹ�ܣ�
                                                     1��ʹ�ܡ� */
        unsigned int  bta_en     : 1;  /* bit[2]   : BTA����ʹ�ܡ�
                                                     0����ʹ�ܣ�
                                                     1��ʹ�ܡ� */
        unsigned int  ecc_rx_en  : 1;  /* bit[3]   : ECC���ա�����������ϱ�ʹ�ܡ�
                                                     0����ʹ�ܣ�
                                                     1��ʹ�ܡ� */
        unsigned int  crc_rx_en  : 1;  /* bit[4]   : CRC���պʹ����ϱ�ʹ�ܡ�
                                                     0����ʹ�ܣ�
                                                     1��ʹ�ܡ� */
        unsigned int  reserved   : 27; /* bit[5-31]: ������ */
    } reg;
} SOC_DSI_PCKHDL_CFG_UNION;
#endif
#define SOC_DSI_PCKHDL_CFG_eotp_tx_en_START  (0)
#define SOC_DSI_PCKHDL_CFG_eotp_tx_en_END    (0)
#define SOC_DSI_PCKHDL_CFG_eotn_rx_en_START  (1)
#define SOC_DSI_PCKHDL_CFG_eotn_rx_en_END    (1)
#define SOC_DSI_PCKHDL_CFG_bta_en_START      (2)
#define SOC_DSI_PCKHDL_CFG_bta_en_END        (2)
#define SOC_DSI_PCKHDL_CFG_ecc_rx_en_START   (3)
#define SOC_DSI_PCKHDL_CFG_ecc_rx_en_END     (3)
#define SOC_DSI_PCKHDL_CFG_crc_rx_en_START   (4)
#define SOC_DSI_PCKHDL_CFG_crc_rx_en_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_DSI_GEN_VCID_UNION
 �ṹ˵��  : GEN_VCID �Ĵ����ṹ���塣��ַƫ����:0x0030����ֵ:0x00000000�����:32
 �Ĵ���˵��: Generic�ӿ� Virtual Channel ID���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  gen_vid_rx : 2;  /* bit[0-1] : Generic�ӿڻض����ݵ�Virtual Channel ID�� */
        unsigned int  reserved   : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_DSI_GEN_VCID_UNION;
#endif
#define SOC_DSI_GEN_VCID_gen_vid_rx_START  (0)
#define SOC_DSI_GEN_VCID_gen_vid_rx_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_DSI_MODE_CFG_UNION
 �ṹ˵��  : MODE_CFG �Ĵ����ṹ���塣��ַƫ����:0x0034����ֵ:0x00000001�����:32
 �Ĵ���˵��: DSI����ģʽ���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cmd_video_mode : 1;  /* bit[0]   : DSI����ģʽѡ��
                                                         0��Video Mode��
                                                         1��Command Mode�� */
        unsigned int  reserved       : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_DSI_MODE_CFG_UNION;
#endif
#define SOC_DSI_MODE_CFG_cmd_video_mode_START  (0)
#define SOC_DSI_MODE_CFG_cmd_video_mode_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_DSI_VID_MODE_CFG_UNION
 �ṹ˵��  : VID_MODE_CFG �Ĵ����ṹ���塣��ַƫ����:0x0038����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video Mode���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vid_mode_type    : 2;  /* bit[0-1]  : Video Mode��������ѡ��
                                                            00��Non-burst with Sync pulses��
                                                            01��Non-burst with Sync events��
                                                            10~11��Burst with Sync pulses�� */
        unsigned int  reserved_0       : 6;  /* bit[2-7]  : ������ */
        unsigned int  lp_vsa_en        : 1;  /* bit[8]    : VSA�����������LP״̬��
                                                            0����ֹ��
                                                            1������ */
        unsigned int  lp_vbp_en        : 1;  /* bit[9]    : VBP�����������LP״̬��
                                                            0����ֹ��
                                                            1������ */
        unsigned int  lp_vfp_en        : 1;  /* bit[10]   : VFP�����������LP״̬��
                                                            0����ֹ��
                                                            1������ */
        unsigned int  lp_vact_en       : 1;  /* bit[11]   : VACT�����������LP״̬��
                                                            0����ֹ��
                                                            1������ */
        unsigned int  lp_hbp_en        : 1;  /* bit[12]   : HBP�����������LP״̬��
                                                            0����ֹ��
                                                            1������ */
        unsigned int  lp_hfp_en        : 1;  /* bit[13]   : HFP�����������LP״̬��
                                                            0����ֹ��
                                                            1������ */
        unsigned int  frame_bta_ack_en : 1;  /* bit[14]   : ����֡����ʱ����BTA����
                                                            0����ֹ��
                                                            1������ */
        unsigned int  lp_cmd_en        : 1;  /* bit[15]   : LP Command�Ĵ���ʹ�ܡ�
                                                            0����ʹ�ܣ�
                                                            1��ʹ�ܡ� */
        unsigned int  reserved_1       : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_DSI_VID_MODE_CFG_UNION;
#endif
#define SOC_DSI_VID_MODE_CFG_vid_mode_type_START     (0)
#define SOC_DSI_VID_MODE_CFG_vid_mode_type_END       (1)
#define SOC_DSI_VID_MODE_CFG_lp_vsa_en_START         (8)
#define SOC_DSI_VID_MODE_CFG_lp_vsa_en_END           (8)
#define SOC_DSI_VID_MODE_CFG_lp_vbp_en_START         (9)
#define SOC_DSI_VID_MODE_CFG_lp_vbp_en_END           (9)
#define SOC_DSI_VID_MODE_CFG_lp_vfp_en_START         (10)
#define SOC_DSI_VID_MODE_CFG_lp_vfp_en_END           (10)
#define SOC_DSI_VID_MODE_CFG_lp_vact_en_START        (11)
#define SOC_DSI_VID_MODE_CFG_lp_vact_en_END          (11)
#define SOC_DSI_VID_MODE_CFG_lp_hbp_en_START         (12)
#define SOC_DSI_VID_MODE_CFG_lp_hbp_en_END           (12)
#define SOC_DSI_VID_MODE_CFG_lp_hfp_en_START         (13)
#define SOC_DSI_VID_MODE_CFG_lp_hfp_en_END           (13)
#define SOC_DSI_VID_MODE_CFG_frame_bta_ack_en_START  (14)
#define SOC_DSI_VID_MODE_CFG_frame_bta_ack_en_END    (14)
#define SOC_DSI_VID_MODE_CFG_lp_cmd_en_START         (15)
#define SOC_DSI_VID_MODE_CFG_lp_cmd_en_END           (15)


/*****************************************************************************
 �ṹ��    : SOC_DSI_VID_PKT_SIZE_UNION
 �ṹ˵��  : VID_PKT_SIZE �Ĵ����ṹ���塣��ַƫ����:0x003C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video���ߴ����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vid_pkt_size : 14; /* bit[0-13] : ����Video���������������
                                                        ע�⣬�������Ϊ18-bit��loosely packed��ʽ�����������������4�����������������ΪYCbCr��ʽ�����������������2���������� */
        unsigned int  reserved     : 18; /* bit[14-31]: ������ */
    } reg;
} SOC_DSI_VID_PKT_SIZE_UNION;
#endif
#define SOC_DSI_VID_PKT_SIZE_vid_pkt_size_START  (0)
#define SOC_DSI_VID_PKT_SIZE_vid_pkt_size_END    (13)


/*****************************************************************************
 �ṹ��    : SOC_DSI_VID_NUM_CHUNKS_UNION
 �ṹ˵��  : VID_NUM_CHUNKS �Ĵ����ṹ���塣��ַƫ����:0x0040����ֵ:0x00000000�����:32
 �Ĵ���˵��: Chunk�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vid_num_chunks : 13; /* bit[0-12] : һ����������Ҫ�����Chunk��������Chunk����Video����Null������
                                                          ע�⣬�������Ϊ0��1��������Video�н�����һ��Video���д��䣬������֡��������Ϊ1����vid_null_size > 0����һ��Chunk������һ��Video����һ��Null������������£�һ��Video�н�����ֳ����ɸ�Chunk���䡣 */
        unsigned int  reserved       : 19; /* bit[13-31]: ������ */
    } reg;
} SOC_DSI_VID_NUM_CHUNKS_UNION;
#endif
#define SOC_DSI_VID_NUM_CHUNKS_vid_num_chunks_START  (0)
#define SOC_DSI_VID_NUM_CHUNKS_vid_num_chunks_END    (12)


/*****************************************************************************
 �ṹ��    : SOC_DSI_VID_NULL_SIZE_UNION
 �ṹ˵��  : VID_NULL_SIZE �Ĵ����ṹ���塣��ַƫ����:0x0044����ֵ:0x00000000�����:32
 �Ĵ���˵��: Null���ߴ����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vid_null_size : 13; /* bit[0-12] : Null���ĳ��ȣ���λΪ�ֽڡ�
                                                         ע�⣬����Ϊ0ʱ����ֹNull���Ĳ����� */
        unsigned int  reserved      : 19; /* bit[13-31]: ������ */
    } reg;
} SOC_DSI_VID_NULL_SIZE_UNION;
#endif
#define SOC_DSI_VID_NULL_SIZE_vid_null_size_START  (0)
#define SOC_DSI_VID_NULL_SIZE_vid_null_size_END    (12)


/*****************************************************************************
 �ṹ��    : SOC_DSI_VID_HSA_TIME_UNION
 �ṹ˵��  : VID_HSA_TIME �Ĵ����ṹ���塣��ַƫ����:0x0048����ֵ:0x00000000�����:32
 �Ĵ���˵��: HSAʱ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vid_hsa_time : 12; /* bit[0-11] : HSA���ڵĳ��ȣ���λΪlanebyteclk�� */
        unsigned int  reserved     : 20; /* bit[12-31]: ������ */
    } reg;
} SOC_DSI_VID_HSA_TIME_UNION;
#endif
#define SOC_DSI_VID_HSA_TIME_vid_hsa_time_START  (0)
#define SOC_DSI_VID_HSA_TIME_vid_hsa_time_END    (11)


/*****************************************************************************
 �ṹ��    : SOC_DSI_VID_HBP_TIME_UNION
 �ṹ˵��  : VID_HBP_TIME �Ĵ����ṹ���塣��ַƫ����:0x004C����ֵ:0x00000000�����:32
 �Ĵ���˵��: HBPʱ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vid_hbp_time : 12; /* bit[0-11] : HBP���ڵĳ��ȣ���λΪlanebyteclk�� */
        unsigned int  reserved     : 20; /* bit[12-31]: ������ */
    } reg;
} SOC_DSI_VID_HBP_TIME_UNION;
#endif
#define SOC_DSI_VID_HBP_TIME_vid_hbp_time_START  (0)
#define SOC_DSI_VID_HBP_TIME_vid_hbp_time_END    (11)


/*****************************************************************************
 �ṹ��    : SOC_DSI_VID_HLINE_TIME_UNION
 �ṹ˵��  : VID_HLINE_TIME �Ĵ����ṹ���塣��ַƫ����:0x0050����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video��ʱ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vid_hline_time : 15; /* bit[0-14] : ����Video�����ڵĳ��ȣ�HAS+HBP+HACT+HFP������λΪlanebyteclk�� */
        unsigned int  reserved       : 17; /* bit[15-31]: ������ */
    } reg;
} SOC_DSI_VID_HLINE_TIME_UNION;
#endif
#define SOC_DSI_VID_HLINE_TIME_vid_hline_time_START  (0)
#define SOC_DSI_VID_HLINE_TIME_vid_hline_time_END    (14)


/*****************************************************************************
 �ṹ��    : SOC_DSI_VID_VSA_LINES_UNION
 �ṹ˵��  : VID_VSA_LINES �Ĵ����ṹ���塣��ַƫ����:0x0054����ֵ:0x00000000�����:32
 �Ĵ���˵��: VSAʱ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vsa_lines : 10; /* bit[0-9]  : VSA���ڵĳ��ȣ���λΪ�С� */
        unsigned int  reserved  : 22; /* bit[10-31]: ������ */
    } reg;
} SOC_DSI_VID_VSA_LINES_UNION;
#endif
#define SOC_DSI_VID_VSA_LINES_vsa_lines_START  (0)
#define SOC_DSI_VID_VSA_LINES_vsa_lines_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_DSI_VID_VBP_LINES_UNION
 �ṹ˵��  : VID_VBP_LINES �Ĵ����ṹ���塣��ַƫ����:0x0058����ֵ:0x00000000�����:32
 �Ĵ���˵��: VBPʱ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vbp_lines : 10; /* bit[0-9]  : VBP���ڵĳ��ȣ���λΪ�С� */
        unsigned int  reserved  : 22; /* bit[10-31]: ������ */
    } reg;
} SOC_DSI_VID_VBP_LINES_UNION;
#endif
#define SOC_DSI_VID_VBP_LINES_vbp_lines_START  (0)
#define SOC_DSI_VID_VBP_LINES_vbp_lines_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_DSI_VID_VFP_LINES_UNION
 �ṹ˵��  : VID_VFP_LINES �Ĵ����ṹ���塣��ַƫ����:0x005C����ֵ:0x00000000�����:32
 �Ĵ���˵��: VFPʱ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vfp_lines : 10; /* bit[0-9]  : VFP���ڵĳ��ȣ���λΪ�С� */
        unsigned int  reserved  : 22; /* bit[10-31]: ������ */
    } reg;
} SOC_DSI_VID_VFP_LINES_UNION;
#endif
#define SOC_DSI_VID_VFP_LINES_vfp_lines_START  (0)
#define SOC_DSI_VID_VFP_LINES_vfp_lines_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_DSI_VID_VACTIVE_LINES_UNION
 �ṹ˵��  : VID_VACTIVE_LINES �Ĵ����ṹ���塣��ַƫ����:0x0060����ֵ:0x00000000�����:32
 �Ĵ���˵��: VACTʱ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_active_lines : 14; /* bit[0-13] : VACT���ڵĳ��ȣ���λΪ�С� */
        unsigned int  reserved       : 18; /* bit[14-31]: ������ */
    } reg;
} SOC_DSI_VID_VACTIVE_LINES_UNION;
#endif
#define SOC_DSI_VID_VACTIVE_LINES_v_active_lines_START  (0)
#define SOC_DSI_VID_VACTIVE_LINES_v_active_lines_END    (13)


/*****************************************************************************
 �ṹ��    : SOC_DSI_EDPI_CMD_SIZE_UNION
 �ṹ˵��  : EDPI_CMD_SIZE �Ĵ����ṹ���塣��ַƫ����:0x0064����ֵ:0x00000000�����:32
 �Ĵ���˵��: eDPI���ߴ����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  edpi_allowed_cmd_size : 16; /* bit[0-15] : eDPI Write Memory Command������������������������Ϊ��λ��eDPI���ݰ����Զ���ֹ�������ʹ�ܡ� */
        unsigned int  reserved              : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_DSI_EDPI_CMD_SIZE_UNION;
#endif
#define SOC_DSI_EDPI_CMD_SIZE_edpi_allowed_cmd_size_START  (0)
#define SOC_DSI_EDPI_CMD_SIZE_edpi_allowed_cmd_size_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_DSI_CMD_MODE_CFG_UNION
 �ṹ˵��  : CMD_MODE_CFG �Ĵ����ṹ���塣��ַƫ����:0x0068����ֵ:0x00000000�����:32
 �Ĵ���˵��: Command Mode���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tear_fx_en      : 1;  /* bit[0]    : Tearing Effect��Ӧ����ʹ�ܡ�
                                                           0����ʹ�ܣ�
                                                           1��ʹ�ܡ� */
        unsigned int  ack_rqst_en     : 1;  /* bit[1]    : �������������������Ӧʹ�ܡ�
                                                           0����ʹ�ܣ�
                                                           1��ʹ�ܡ� */
        unsigned int  reserved_0      : 6;  /* bit[2-7]  : ������ */
        unsigned int  gen_sw_0p_tx    : 1;  /* bit[8]    : Generic short write����0���������Ĵ���ģʽ��
                                                           0��HS��
                                                           1��LP�� */
        unsigned int  gen_sw_1p_tx    : 1;  /* bit[9]    : Generic short write����1���������Ĵ���ģʽ��
                                                           0��HS��
                                                           1��LP�� */
        unsigned int  gen_sw_2p_tx    : 1;  /* bit[10]   : Generic short write����2���������Ĵ���ģʽ��
                                                           0��HS��
                                                           1��LP�� */
        unsigned int  gen_sr_0p_tx    : 1;  /* bit[11]   : Generic short read����0���������Ĵ���ģʽ��
                                                           0��HS��
                                                           1��LP�� */
        unsigned int  gen_sr_1p_tx    : 1;  /* bit[12]   : Generic���̰���1���������Ĵ���ģʽ��
                                                           0��HS��
                                                           1��LP�� */
        unsigned int  gen_sr_2p_tx    : 1;  /* bit[13]   : Generic short read����2���������Ĵ���ģʽ��
                                                           0��HS��
                                                           1��LP�� */
        unsigned int  gen_lw_tx       : 1;  /* bit[14]   : Generic long write���Ĵ���ģʽ��
                                                           0��HS��
                                                           1��LP�� */
        unsigned int  reserved_1      : 1;  /* bit[15]   : ������ */
        unsigned int  dcs_sw_0p_tx    : 1;  /* bit[16]   : DCS short write����0���������Ĵ���ģʽ��
                                                           0��HS��
                                                           1��LP�� */
        unsigned int  dcs_sw_1p_tx    : 1;  /* bit[17]   : DCS short write����1���������Ĵ���ģʽ��
                                                           0��HS��
                                                           1��LP�� */
        unsigned int  dcs_sr_0p_tx    : 1;  /* bit[18]   : DCS short read����0���������Ĵ���ģʽ��
                                                           0��HS��
                                                           1��LP�� */
        unsigned int  dcs_lw_tx       : 1;  /* bit[19]   : DCS long write���Ĵ���ģʽ��
                                                           0��HS��
                                                           1��LP�� */
        unsigned int  reserved_2      : 4;  /* bit[20-23]: ������ */
        unsigned int  max_rd_pkt_size : 1;  /* bit[24]   : Maximum Read Packet Size����Ĵ���ģʽ��
                                                           0��HS��
                                                           1��LP�� */
        unsigned int  reserved_3      : 7;  /* bit[25-31]: ������ */
    } reg;
} SOC_DSI_CMD_MODE_CFG_UNION;
#endif
#define SOC_DSI_CMD_MODE_CFG_tear_fx_en_START       (0)
#define SOC_DSI_CMD_MODE_CFG_tear_fx_en_END         (0)
#define SOC_DSI_CMD_MODE_CFG_ack_rqst_en_START      (1)
#define SOC_DSI_CMD_MODE_CFG_ack_rqst_en_END        (1)
#define SOC_DSI_CMD_MODE_CFG_gen_sw_0p_tx_START     (8)
#define SOC_DSI_CMD_MODE_CFG_gen_sw_0p_tx_END       (8)
#define SOC_DSI_CMD_MODE_CFG_gen_sw_1p_tx_START     (9)
#define SOC_DSI_CMD_MODE_CFG_gen_sw_1p_tx_END       (9)
#define SOC_DSI_CMD_MODE_CFG_gen_sw_2p_tx_START     (10)
#define SOC_DSI_CMD_MODE_CFG_gen_sw_2p_tx_END       (10)
#define SOC_DSI_CMD_MODE_CFG_gen_sr_0p_tx_START     (11)
#define SOC_DSI_CMD_MODE_CFG_gen_sr_0p_tx_END       (11)
#define SOC_DSI_CMD_MODE_CFG_gen_sr_1p_tx_START     (12)
#define SOC_DSI_CMD_MODE_CFG_gen_sr_1p_tx_END       (12)
#define SOC_DSI_CMD_MODE_CFG_gen_sr_2p_tx_START     (13)
#define SOC_DSI_CMD_MODE_CFG_gen_sr_2p_tx_END       (13)
#define SOC_DSI_CMD_MODE_CFG_gen_lw_tx_START        (14)
#define SOC_DSI_CMD_MODE_CFG_gen_lw_tx_END          (14)
#define SOC_DSI_CMD_MODE_CFG_dcs_sw_0p_tx_START     (16)
#define SOC_DSI_CMD_MODE_CFG_dcs_sw_0p_tx_END       (16)
#define SOC_DSI_CMD_MODE_CFG_dcs_sw_1p_tx_START     (17)
#define SOC_DSI_CMD_MODE_CFG_dcs_sw_1p_tx_END       (17)
#define SOC_DSI_CMD_MODE_CFG_dcs_sr_0p_tx_START     (18)
#define SOC_DSI_CMD_MODE_CFG_dcs_sr_0p_tx_END       (18)
#define SOC_DSI_CMD_MODE_CFG_dcs_lw_tx_START        (19)
#define SOC_DSI_CMD_MODE_CFG_dcs_lw_tx_END          (19)
#define SOC_DSI_CMD_MODE_CFG_max_rd_pkt_size_START  (24)
#define SOC_DSI_CMD_MODE_CFG_max_rd_pkt_size_END    (24)


/*****************************************************************************
 �ṹ��    : SOC_DSI_GEN_HDR_UNION
 �ṹ˵��  : GEN_HDR �Ĵ����ṹ���塣��ַƫ����:0x006C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Generic��ͷ���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  gen_dt        : 6;  /* bit[0-5]  : ��ͷ����Data Type�� */
        unsigned int  gen_vc        : 2;  /* bit[6-7]  : ��ͷ����Virtual Channel ID�� */
        unsigned int  gen_wc_lsbyte : 8;  /* bit[8-15] : ��ͷ���ݵ�λ�ֽڡ� */
        unsigned int  gen_wc_msbyte : 8;  /* bit[16-23]: ��ͷ���ݸ�λ�ֽڡ� */
        unsigned int  reserved      : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_DSI_GEN_HDR_UNION;
#endif
#define SOC_DSI_GEN_HDR_gen_dt_START         (0)
#define SOC_DSI_GEN_HDR_gen_dt_END           (5)
#define SOC_DSI_GEN_HDR_gen_vc_START         (6)
#define SOC_DSI_GEN_HDR_gen_vc_END           (7)
#define SOC_DSI_GEN_HDR_gen_wc_lsbyte_START  (8)
#define SOC_DSI_GEN_HDR_gen_wc_lsbyte_END    (15)
#define SOC_DSI_GEN_HDR_gen_wc_msbyte_START  (16)
#define SOC_DSI_GEN_HDR_gen_wc_msbyte_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_DSI_GEN_PLD_DATA_UNION
 �ṹ˵��  : GEN_PLD_DATA �Ĵ����ṹ���塣��ַƫ����:0x0070����ֵ:0x00000000�����:32
 �Ĵ���˵��: Generic�غ����ݼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  gen_pld_data : 32; /* bit[0-31]: д����ʱ����Ҫ���͵�Generic�����غ����ݣ�������ʱ�������践�ص�Generic�����غ����ݡ� */
    } reg;
} SOC_DSI_GEN_PLD_DATA_UNION;
#endif
#define SOC_DSI_GEN_PLD_DATA_gen_pld_data_START  (0)
#define SOC_DSI_GEN_PLD_DATA_gen_pld_data_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_DSI_CMD_PKT_STATUS_UNION
 �ṹ˵��  : CMD_PKT_STATUS �Ĵ����ṹ���塣��ַƫ����:0x0074����ֵ:0x00000015�����:32
 �Ĵ���˵��: Command Mode��״ָ̬ʾ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  gen_cmd_empty   : 1;  /* bit[0]   : Generic����FIFO��״ָ̬ʾ��
                                                          0��δ�գ�
                                                          1���ա� */
        unsigned int  gen_cmd_full    : 1;  /* bit[1]   : Generic����FIFO��״ָ̬ʾ��
                                                          0��δ����
                                                          1������ */
        unsigned int  gen_pld_w_empty : 1;  /* bit[2]   : Genericд�غ�FIFO��״ָ̬ʾ��
                                                          0��δ�գ�
                                                          1���ա� */
        unsigned int  gen_pld_w_full  : 1;  /* bit[3]   : Genericд�غ�FIFO��״ָ̬ʾ��
                                                          0��δ����
                                                          1������ */
        unsigned int  gen_pld_r_empty : 1;  /* bit[4]   : Generic���غ�FIFO��״ָ̬ʾ��
                                                          0��δ�գ�
                                                          1���ա� */
        unsigned int  gen_pld_r_full  : 1;  /* bit[5]   : Generic���غ�FIFO��״ָ̬ʾ��
                                                          0��δ����
                                                          1������ */
        unsigned int  gen_rd_cmd_busy : 1;  /* bit[6]   : Generic������æָʾ��
                                                          0�����У�
                                                          1��æ�� */
        unsigned int  reserved        : 25; /* bit[7-31]: ������ */
    } reg;
} SOC_DSI_CMD_PKT_STATUS_UNION;
#endif
#define SOC_DSI_CMD_PKT_STATUS_gen_cmd_empty_START    (0)
#define SOC_DSI_CMD_PKT_STATUS_gen_cmd_empty_END      (0)
#define SOC_DSI_CMD_PKT_STATUS_gen_cmd_full_START     (1)
#define SOC_DSI_CMD_PKT_STATUS_gen_cmd_full_END       (1)
#define SOC_DSI_CMD_PKT_STATUS_gen_pld_w_empty_START  (2)
#define SOC_DSI_CMD_PKT_STATUS_gen_pld_w_empty_END    (2)
#define SOC_DSI_CMD_PKT_STATUS_gen_pld_w_full_START   (3)
#define SOC_DSI_CMD_PKT_STATUS_gen_pld_w_full_END     (3)
#define SOC_DSI_CMD_PKT_STATUS_gen_pld_r_empty_START  (4)
#define SOC_DSI_CMD_PKT_STATUS_gen_pld_r_empty_END    (4)
#define SOC_DSI_CMD_PKT_STATUS_gen_pld_r_full_START   (5)
#define SOC_DSI_CMD_PKT_STATUS_gen_pld_r_full_END     (5)
#define SOC_DSI_CMD_PKT_STATUS_gen_rd_cmd_busy_START  (6)
#define SOC_DSI_CMD_PKT_STATUS_gen_rd_cmd_busy_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_DSI_TO_CNT_CFG_UNION
 �ṹ˵��  : TO_CNT_CFG �Ĵ����ṹ���塣��ַƫ����:0x0078����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ʱ���������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  lprx_to_cnt : 16; /* bit[0-15] : LP���ճ�ʱ����������λΪTO_CLK_DIVISIONʱ�ӡ� */
        unsigned int  hstx_to_cnt : 16; /* bit[16-31]: HS���䳬ʱ����������λΪTO_CLK_DIVISIONʱ�ӡ�
                                                       ���Video��ʹ��non-burstģʽ���䣬��������֮��û���㹻��ʱ���HS�л���LP����֮������DSI��·ֻ����֡�����Ժ�ص�LP״̬����ʱTO_CLK_DIVISION��hstx_to_cnt������Ӧ��������������
                                                       hstx_to_cnt * lanebyteclkperiod * TO_CLK_DIVISION >= һ֡���ݴ���ʱ�� * (1 + 10%)��
                                                       ���Video��ʹ��burstģʽ���䣬һ�е�RGB��������ֻʹ��һ���������䣬����֮��Ϳ������㹻��ʱ���HS�л���LP����֮������DSI��·���������صĴ����϶�Ϳ��Իص�LP״̬���Խ��͹��ģ���ʱTO_CLK_DIVISION��hstx_to_cnt������Ӧ��������������
                                                       hstx_to_cnt * lanebyteclkperiod * TO_CLK_DIVISION >= һ�����ݴ���ʱ�� * (1 + 10%)�� */
    } reg;
} SOC_DSI_TO_CNT_CFG_UNION;
#endif
#define SOC_DSI_TO_CNT_CFG_lprx_to_cnt_START  (0)
#define SOC_DSI_TO_CNT_CFG_lprx_to_cnt_END    (15)
#define SOC_DSI_TO_CNT_CFG_hstx_to_cnt_START  (16)
#define SOC_DSI_TO_CNT_CFG_hstx_to_cnt_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_DSI_HS_RD_TO_CNT_UNION
 �ṹ˵��  : HS_RD_TO_CNT �Ĵ����ṹ���塣��ַƫ����:0x007C����ֵ:0x00000000�����:32
 �Ĵ���˵��: HS������������Ӧ��ʱ���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hs_rd_to_cnt : 16; /* bit[0-15] : DSI controller����HS�����������ȴ�ʱ�䣬��λΪlanebyteclkʱ�ӡ��������Ӷ�������������DPHY����STOP״̬ʱ��ʼ������ */
        unsigned int  reserved     : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_DSI_HS_RD_TO_CNT_UNION;
#endif
#define SOC_DSI_HS_RD_TO_CNT_hs_rd_to_cnt_START  (0)
#define SOC_DSI_HS_RD_TO_CNT_hs_rd_to_cnt_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_DSI_LP_RD_TO_CNT_UNION
 �ṹ˵��  : LP_RD_TO_CNT �Ĵ����ṹ���塣��ַƫ����:0x0080����ֵ:0x00000000�����:32
 �Ĵ���˵��: LP������������Ӧ��ʱ���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  lp_rd_to_cnt : 16; /* bit[0-15] : DSI controller����LP�����������ȴ�ʱ�䣬��λΪlanebyteclkʱ�ӡ��������Ӷ�������������DPHY����STOP״̬ʱ��ʼ������ */
        unsigned int  reserved     : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_DSI_LP_RD_TO_CNT_UNION;
#endif
#define SOC_DSI_LP_RD_TO_CNT_lp_rd_to_cnt_START  (0)
#define SOC_DSI_LP_RD_TO_CNT_lp_rd_to_cnt_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_DSI_HS_WR_TO_CNT_UNION
 �ṹ˵��  : HS_WR_TO_CNT �Ĵ����ṹ���塣��ַƫ����:0x0084����ֵ:0x00000000�����:32
 �Ĵ���˵��: HSд����������Ӧ��ʱ���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hs_wr_to_cnt  : 16; /* bit[0-15] : DSI controller����HSд���������ȴ�ʱ�䣬��λΪlanebyteclkʱ�ӡ���������д������������DPHY����STOP״̬ʱ��ʼ������ */
        unsigned int  reserved_0    : 8;  /* bit[16-23]: ������ */
        unsigned int  presp_to_mode : 1;  /* bit[24]   : ������Ӧ��ʱģʽ��������Ϊ1��������������ʱ����hs_wr_to_cnt���µĳ�ʱ�¼�ÿ��eDPIֻ֡����һ�Σ�
                                                         1���յ�dpivsync_edpiwms�����źţ�
                                                         2��eDPI��������ɣ�FIFOΪ�ա�
                                                         ����������£���eDPI�������ᷢ�͸�DPHY����ʹGeneric�ӿ��з�������DPHY������STOP״̬��PRESP_TO��������ʼ������ֻ�еȼ��������Ժ󣬷�eDPI���Żر����͡� */
        unsigned int  reserved_1    : 7;  /* bit[25-31]: ������ */
    } reg;
} SOC_DSI_HS_WR_TO_CNT_UNION;
#endif
#define SOC_DSI_HS_WR_TO_CNT_hs_wr_to_cnt_START   (0)
#define SOC_DSI_HS_WR_TO_CNT_hs_wr_to_cnt_END     (15)
#define SOC_DSI_HS_WR_TO_CNT_presp_to_mode_START  (24)
#define SOC_DSI_HS_WR_TO_CNT_presp_to_mode_END    (24)


/*****************************************************************************
 �ṹ��    : SOC_DSI_LP_WR_TO_CNT_UNION
 �ṹ˵��  : LP_WR_TO_CNT �Ĵ����ṹ���塣��ַƫ����:0x0088����ֵ:0x00000000�����:32
 �Ĵ���˵��: LPд����������Ӧ��ʱ���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  lp_wr_to_cnt : 16; /* bit[0-15] : DSI controller����LPд���������ȴ�ʱ�䣬��λΪlanebyteclkʱ�ӡ���������д������������DPHY����STOP״̬ʱ��ʼ������ */
        unsigned int  reserved     : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_DSI_LP_WR_TO_CNT_UNION;
#endif
#define SOC_DSI_LP_WR_TO_CNT_lp_wr_to_cnt_START  (0)
#define SOC_DSI_LP_WR_TO_CNT_lp_wr_to_cnt_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_DSI_BTA_TO_CNT_UNION
 �ṹ˵��  : BTA_TO_CNT �Ĵ����ṹ���塣��ַƫ����:0x008C����ֵ:0x00000000�����:32
 �Ĵ���˵��: BTA����������Ӧ��ʱ���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bta_to_cnt : 16; /* bit[0-15] : DSI controller����BTA���������ȴ�ʱ�䣬��λΪlanebyteclkʱ�ӡ���������BTA������������DPHY����STOP״̬ʱ��ʼ������ */
        unsigned int  reserved   : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_DSI_BTA_TO_CNT_UNION;
#endif
#define SOC_DSI_BTA_TO_CNT_bta_to_cnt_START  (0)
#define SOC_DSI_BTA_TO_CNT_bta_to_cnt_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_DSI_SDF_3D_UNION
 �ṹ˵��  : SDF_3D �Ĵ����ṹ���塣��ַƫ����:0x0090����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video Mode 3Dģʽ���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mode_3d      : 2;  /* bit[0-1]  : 3Dģʽ���غ���ʾ������ơ�
                                                        00��2Dģʽ��
                                                        01��3Dģʽ��������ʾ��
                                                        10��3Dģʽ��������ʾ��
                                                        11�������� */
        unsigned int  format_3d    : 2;  /* bit[2-3]  : 3Dͼ���ʽ��
                                                        00��Line by Line��
                                                        01��Frame by Frame��
                                                        10��Pixel by Pixel��
                                                        11�������� */
        unsigned int  second_vsync : 1;  /* bit[4]    : Frame by Frame 3D��ʽʱ����֡������֮֡���Ƿ���VSYNC�����źš�
                                                        0��û�У�
                                                        1���С� */
        unsigned int  right_first  : 1;  /* bit[5]    : ��������ʾ˳��
                                                        0��������ǰ��
                                                        1��������ǰ�� */
        unsigned int  reserved_0   : 10; /* bit[6-15] : ������ */
        unsigned int  send_3d_cfg  : 1;  /* bit[16]   : VSS���Ƿ������3D������Ϣ��
                                                        0����������
                                                        1�������� */
        unsigned int  reserved_1   : 15; /* bit[17-31]: ������ */
    } reg;
} SOC_DSI_SDF_3D_UNION;
#endif
#define SOC_DSI_SDF_3D_mode_3d_START       (0)
#define SOC_DSI_SDF_3D_mode_3d_END         (1)
#define SOC_DSI_SDF_3D_format_3d_START     (2)
#define SOC_DSI_SDF_3D_format_3d_END       (3)
#define SOC_DSI_SDF_3D_second_vsync_START  (4)
#define SOC_DSI_SDF_3D_second_vsync_END    (4)
#define SOC_DSI_SDF_3D_right_first_START   (5)
#define SOC_DSI_SDF_3D_right_first_END     (5)
#define SOC_DSI_SDF_3D_send_3d_cfg_START   (16)
#define SOC_DSI_SDF_3D_send_3d_cfg_END     (16)


/*****************************************************************************
 �ṹ��    : SOC_DSI_LPCLK_CTRL_UNION
 �ṹ˵��  : LPCLK_CTRL �Ĵ����ṹ���塣��ַƫ����:0x0094����ֵ:0x00000000�����:32
 �Ĵ���˵��: Clock Lane���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  phy_txrequestclkhs : 1;  /* bit[0]   : ��Clock Lane����HSʱ�Ӵ�������
                                                             0��������
                                                             1������ */
        unsigned int  auto_clklane_ctrl  : 1;  /* bit[1]   : non-continues clockʹ�ܣ�
                                                             0����ʹ�ܣ�
                                                             1��ʹ�ܡ� */
        unsigned int  reserved           : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_DSI_LPCLK_CTRL_UNION;
#endif
#define SOC_DSI_LPCLK_CTRL_phy_txrequestclkhs_START  (0)
#define SOC_DSI_LPCLK_CTRL_phy_txrequestclkhs_END    (0)
#define SOC_DSI_LPCLK_CTRL_auto_clklane_ctrl_START   (1)
#define SOC_DSI_LPCLK_CTRL_auto_clklane_ctrl_END     (1)


/*****************************************************************************
 �ṹ��    : SOC_DSI_PHY_TMR_LPCLK_CFG_UNION
 �ṹ˵��  : PHY_TMR_LPCLK_CFG �Ĵ����ṹ���塣��ַƫ����:0x0098����ֵ:0x00000000�����:32
 �Ĵ���˵��: Clock Laneʱ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  phy_clklp2hs_time : 10; /* bit[0-9]  : Clock Lane��LPģʽ�л���HSģʽ��Ҫ���ʱ�䣬��λΪlanebyteclkʱ�ӡ� */
        unsigned int  reserved_0        : 6;  /* bit[10-15]: ������ */
        unsigned int  phy_clkhs2lp_time : 10; /* bit[16-25]: Clock Lane��HSģʽ�л���LPģʽ��Ҫ���ʱ�䣬��λΪlanebyteclkʱ�ӡ� */
        unsigned int  reserved_1        : 6;  /* bit[26-31]: ������ */
    } reg;
} SOC_DSI_PHY_TMR_LPCLK_CFG_UNION;
#endif
#define SOC_DSI_PHY_TMR_LPCLK_CFG_phy_clklp2hs_time_START  (0)
#define SOC_DSI_PHY_TMR_LPCLK_CFG_phy_clklp2hs_time_END    (9)
#define SOC_DSI_PHY_TMR_LPCLK_CFG_phy_clkhs2lp_time_START  (16)
#define SOC_DSI_PHY_TMR_LPCLK_CFG_phy_clkhs2lp_time_END    (25)


/*****************************************************************************
 �ṹ��    : SOC_DSI_PHY_TMR_CFG_UNION
 �ṹ˵��  : PHY_TMR_CFG �Ĵ����ṹ���塣��ַƫ����:0x009C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Data Laneʱ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  max_rd_time    : 15; /* bit[0-14] : Data Lane���ж�������Ҫ���ʱ�䣬��λΪlanebyteclkʱ�ӡ�
                                                          ע�⣬�����������Ժ��ֹ���ô˼Ĵ����� */
        unsigned int  reserved       : 1;  /* bit[15]   : ������ */
        unsigned int  phy_lp2hs_time : 8;  /* bit[16-23]: Data Lane��LPģʽ�л���HSģʽ��Ҫ���ʱ�䣬��λΪlanebyteclkʱ�ӡ� */
        unsigned int  phy_hs2lp_time : 8;  /* bit[24-31]: Data Lane��HSģʽ�л���LPģʽ��Ҫ���ʱ�䣬��λΪlanebyteclkʱ�ӡ� */
    } reg;
} SOC_DSI_PHY_TMR_CFG_UNION;
#endif
#define SOC_DSI_PHY_TMR_CFG_max_rd_time_START     (0)
#define SOC_DSI_PHY_TMR_CFG_max_rd_time_END       (14)
#define SOC_DSI_PHY_TMR_CFG_phy_lp2hs_time_START  (16)
#define SOC_DSI_PHY_TMR_CFG_phy_lp2hs_time_END    (23)
#define SOC_DSI_PHY_TMR_CFG_phy_hs2lp_time_START  (24)
#define SOC_DSI_PHY_TMR_CFG_phy_hs2lp_time_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_DSI_PHY_RSTZ_UNION
 �ṹ˵��  : PHY_RSTZ �Ĵ����ṹ���塣��ַƫ����:0x00A0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DPHY��λ��PLL���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  phy_shutdownz : 1;  /* bit[0]   : DPHY�رտ��ơ�
                                                        0���رգ�
                                                        1���򿪡�
                                                        ����Ϊ0ʱ��ʹDPHY����Shutdown״̬�� */
        unsigned int  phy_rstz      : 1;  /* bit[1]   : DPHY��λ���ơ�
                                                        0����λ��
                                                        1���⸴λ��
                                                        ����Ϊ0ʱ����λDPHY�������߼��� */
        unsigned int  phy_enableclk : 1;  /* bit[2]   : DPHY Clock Laneʹ�ܡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  phy_forcepll  : 1;  /* bit[3]   : ��DPHY����ULPSģʽ��ѡ���Ƿ�ر�PLL��
                                                        0���ر�PLL��
                                                        1����PLL�� */
        unsigned int  reserved      : 28; /* bit[4-31]: ������ */
    } reg;
} SOC_DSI_PHY_RSTZ_UNION;
#endif
#define SOC_DSI_PHY_RSTZ_phy_shutdownz_START  (0)
#define SOC_DSI_PHY_RSTZ_phy_shutdownz_END    (0)
#define SOC_DSI_PHY_RSTZ_phy_rstz_START       (1)
#define SOC_DSI_PHY_RSTZ_phy_rstz_END         (1)
#define SOC_DSI_PHY_RSTZ_phy_enableclk_START  (2)
#define SOC_DSI_PHY_RSTZ_phy_enableclk_END    (2)
#define SOC_DSI_PHY_RSTZ_phy_forcepll_START   (3)
#define SOC_DSI_PHY_RSTZ_phy_forcepll_END     (3)


/*****************************************************************************
 �ṹ��    : SOC_DSI_PHY_IF_CFG_UNION
 �ṹ˵��  : PHY_IF_CFG �Ĵ����ṹ���塣��ַƫ����:0x00A4����ֵ:0x00000003�����:32
 �Ĵ���˵��: DPHY�ӿ����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  n_lanes            : 2;  /* bit[0-1]  : ���Data Lane��������
                                                              00��1 Data Lane (Lane 0)��
                                                              01��2 Data Lanes (Lane 0��1)��
                                                              10��3 Data Lanes (Lane 0��1��2)��
                                                              11��4 Data Lanes (Lane 0��1��2��3)�� */
        unsigned int  reserved_0         : 6;  /* bit[2-7]  : ������ */
        unsigned int  phy_stop_wait_time : 8;  /* bit[8-15] : DPHY��Stop״̬������HS������������ʱ�䣬��λΪlanebyteclk���ڡ� */
        unsigned int  reserved_1         : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_DSI_PHY_IF_CFG_UNION;
#endif
#define SOC_DSI_PHY_IF_CFG_n_lanes_START             (0)
#define SOC_DSI_PHY_IF_CFG_n_lanes_END               (1)
#define SOC_DSI_PHY_IF_CFG_phy_stop_wait_time_START  (8)
#define SOC_DSI_PHY_IF_CFG_phy_stop_wait_time_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_DSI_PHY_ULPS_CTRL_UNION
 �ṹ˵��  : PHY_ULPS_CTRL �Ĵ����ṹ���塣��ַƫ����:0x00A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: DPHY ULPSģʽ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  phy_txrequlpsclk  : 1;  /* bit[0]   : ��Clock Lane����ULPS��������
                                                            0��������
                                                            1������ */
        unsigned int  phy_txexitulpsclk : 1;  /* bit[1]   : ��Clock Lane����ULPS�˳�����
                                                            0��������
                                                            1������ */
        unsigned int  phy_txrequlpslan  : 1;  /* bit[2]   : ������Data Lane����ULPS��������
                                                            0��������
                                                            1������ */
        unsigned int  phy_txexitulpslan : 1;  /* bit[3]   : ������Data Lane����ULPS�˳�����
                                                            0��������
                                                            1������ */
        unsigned int  reserved          : 28; /* bit[4-31]: ������ */
    } reg;
} SOC_DSI_PHY_ULPS_CTRL_UNION;
#endif
#define SOC_DSI_PHY_ULPS_CTRL_phy_txrequlpsclk_START   (0)
#define SOC_DSI_PHY_ULPS_CTRL_phy_txrequlpsclk_END     (0)
#define SOC_DSI_PHY_ULPS_CTRL_phy_txexitulpsclk_START  (1)
#define SOC_DSI_PHY_ULPS_CTRL_phy_txexitulpsclk_END    (1)
#define SOC_DSI_PHY_ULPS_CTRL_phy_txrequlpslan_START   (2)
#define SOC_DSI_PHY_ULPS_CTRL_phy_txrequlpslan_END     (2)
#define SOC_DSI_PHY_ULPS_CTRL_phy_txexitulpslan_START  (3)
#define SOC_DSI_PHY_ULPS_CTRL_phy_txexitulpslan_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_DSI_PHY_TX_TRIGGERS_UNION
 �ṹ˵��  : PHY_TX_TRIGGERS �Ĵ����ṹ���塣��ַƫ����:0x00AC����ֵ:0x00000000�����:32
 �Ĵ���˵��: DPHY TRIGGERS���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  phy_tx_triggers : 4;  /* bit[0-3] : DPHY����Trigger����ʱ��ֵ�� */
        unsigned int  reserved        : 28; /* bit[4-31]: ������ */
    } reg;
} SOC_DSI_PHY_TX_TRIGGERS_UNION;
#endif
#define SOC_DSI_PHY_TX_TRIGGERS_phy_tx_triggers_START  (0)
#define SOC_DSI_PHY_TX_TRIGGERS_phy_tx_triggers_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_DSI_PHY_STATUS_UNION
 �ṹ˵��  : PHY_STATUS �Ĵ����ṹ���塣��ַƫ����:0x00B0����ֵ:0x00001528�����:32
 �Ĵ���˵��: DPHY״ָ̬ʾ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  phy_lock               : 1;  /* bit[0]    : ָʾDPHY PPI�ӿ��ź�phylock��״̬�� */
        unsigned int  phy_direction          : 1;  /* bit[1]    : ָʾDPHY PPI�ӿ��ź�phydirection��״̬�� */
        unsigned int  phy_stopstateclklane   : 1;  /* bit[2]    : ָʾDPHY PPI�ӿ��ź�phystopstateclklane��״̬�� */
        unsigned int  phy_ulpsactivenotclk   : 1;  /* bit[3]    : ָʾDPHY PPI�ӿ��ź�phyulpsactivenotclk��״̬�� */
        unsigned int  phy_stopstate0lane     : 1;  /* bit[4]    : ָʾDPHY PPI�ӿ��ź�phystopstate0lane��״̬�� */
        unsigned int  phy_ulpsactivenot0lane : 1;  /* bit[5]    : ָʾDPHY PPI�ӿ��ź�ulpsactivenot0lane��״̬�� */
        unsigned int  phy_rxulpsesc0lane     : 1;  /* bit[6]    : ָʾDPHY PPI�ӿ��ź�rxulpsesc0lane��״̬�� */
        unsigned int  phy_stopstate1lane     : 1;  /* bit[7]    : ָʾDPHY PPI�ӿ��ź�phystopstate1lane��״̬�� */
        unsigned int  phy_ulpsactivenot1lane : 1;  /* bit[8]    : ָʾDPHY PPI�ӿ��ź�ulpsactivenot1lane��״̬�� */
        unsigned int  phy_stopstate2lane     : 1;  /* bit[9]    : ָʾDPHY PPI�ӿ��ź�phystopstate2lane��״̬�� */
        unsigned int  phy_ulpsactivenot2lane : 1;  /* bit[10]   : ָʾDPHY PPI�ӿ��ź�ulpsactivenot2lane��״̬�� */
        unsigned int  phy_stopstate3lane     : 1;  /* bit[11]   : ָʾDPHY PPI�ӿ��ź�phystopstate3lane��״̬�� */
        unsigned int  phy_ulpsactivenot3lane : 1;  /* bit[12]   : ָʾDPHY PPI�ӿ��ź�ulpsactivenot3lane��״̬�� */
        unsigned int  reserved               : 19; /* bit[13-31]: ������ */
    } reg;
} SOC_DSI_PHY_STATUS_UNION;
#endif
#define SOC_DSI_PHY_STATUS_phy_lock_START                (0)
#define SOC_DSI_PHY_STATUS_phy_lock_END                  (0)
#define SOC_DSI_PHY_STATUS_phy_direction_START           (1)
#define SOC_DSI_PHY_STATUS_phy_direction_END             (1)
#define SOC_DSI_PHY_STATUS_phy_stopstateclklane_START    (2)
#define SOC_DSI_PHY_STATUS_phy_stopstateclklane_END      (2)
#define SOC_DSI_PHY_STATUS_phy_ulpsactivenotclk_START    (3)
#define SOC_DSI_PHY_STATUS_phy_ulpsactivenotclk_END      (3)
#define SOC_DSI_PHY_STATUS_phy_stopstate0lane_START      (4)
#define SOC_DSI_PHY_STATUS_phy_stopstate0lane_END        (4)
#define SOC_DSI_PHY_STATUS_phy_ulpsactivenot0lane_START  (5)
#define SOC_DSI_PHY_STATUS_phy_ulpsactivenot0lane_END    (5)
#define SOC_DSI_PHY_STATUS_phy_rxulpsesc0lane_START      (6)
#define SOC_DSI_PHY_STATUS_phy_rxulpsesc0lane_END        (6)
#define SOC_DSI_PHY_STATUS_phy_stopstate1lane_START      (7)
#define SOC_DSI_PHY_STATUS_phy_stopstate1lane_END        (7)
#define SOC_DSI_PHY_STATUS_phy_ulpsactivenot1lane_START  (8)
#define SOC_DSI_PHY_STATUS_phy_ulpsactivenot1lane_END    (8)
#define SOC_DSI_PHY_STATUS_phy_stopstate2lane_START      (9)
#define SOC_DSI_PHY_STATUS_phy_stopstate2lane_END        (9)
#define SOC_DSI_PHY_STATUS_phy_ulpsactivenot2lane_START  (10)
#define SOC_DSI_PHY_STATUS_phy_ulpsactivenot2lane_END    (10)
#define SOC_DSI_PHY_STATUS_phy_stopstate3lane_START      (11)
#define SOC_DSI_PHY_STATUS_phy_stopstate3lane_END        (11)
#define SOC_DSI_PHY_STATUS_phy_ulpsactivenot3lane_START  (12)
#define SOC_DSI_PHY_STATUS_phy_ulpsactivenot3lane_END    (12)


/*****************************************************************************
 �ṹ��    : SOC_DSI_PHY_TST_CTRL0_UNION
 �ṹ˵��  : PHY_TST_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x00B4����ֵ:0x00000001�����:32
 �Ĵ���˵��: DPHY���ýӿڿ��ƼĴ���0��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  phy_testclr : 1;  /* bit[0]   : DPHY���Խӿڸ�λ��
                                                      0���⸴λ��
                                                      1����λ�� */
        unsigned int  phy_testclk : 1;  /* bit[1]   : DPHY���Խӿ�ʱ�ӣ���phy_testen��ͬ���в���ѡ�� */
        unsigned int  reserved    : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_DSI_PHY_TST_CTRL0_UNION;
#endif
#define SOC_DSI_PHY_TST_CTRL0_phy_testclr_START  (0)
#define SOC_DSI_PHY_TST_CTRL0_phy_testclr_END    (0)
#define SOC_DSI_PHY_TST_CTRL0_phy_testclk_START  (1)
#define SOC_DSI_PHY_TST_CTRL0_phy_testclk_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_DSI_PHY_TST_CTRL1_UNION
 �ṹ˵��  : PHY_TST_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x00B8����ֵ:0x00000000�����:32
 �Ĵ���˵��: DPHY���ýӿڿ��ƼĴ���1��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  phy_testdin  : 8;  /* bit[0-7]  : DPHY���ýӿ�8-bit�������롣 */
        unsigned int  phy_testdout : 8;  /* bit[8-15] : DPHY���ýӿ�8-bit��������� */
        unsigned int  phy_testen   : 1;  /* bit[16]   : DPHY���ýӿڲ���ģʽѡ��
                                                        0��phy_testclk������д���ݣ�
                                                        1��phy_testclk�½���д��ַ�� */
        unsigned int  reserved     : 15; /* bit[17-31]: ������ */
    } reg;
} SOC_DSI_PHY_TST_CTRL1_UNION;
#endif
#define SOC_DSI_PHY_TST_CTRL1_phy_testdin_START   (0)
#define SOC_DSI_PHY_TST_CTRL1_phy_testdin_END     (7)
#define SOC_DSI_PHY_TST_CTRL1_phy_testdout_START  (8)
#define SOC_DSI_PHY_TST_CTRL1_phy_testdout_END    (15)
#define SOC_DSI_PHY_TST_CTRL1_phy_testen_START    (16)
#define SOC_DSI_PHY_TST_CTRL1_phy_testen_END      (16)


/*****************************************************************************
 �ṹ��    : SOC_DSI_INT_ST0_UNION
 �ṹ˵��  : INT_ST0 �Ĵ����ṹ���塣��ַƫ����:0x00BC����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж�״̬�Ĵ���0��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ack_with_err_0  : 1;  /* bit[0]    : SoT����ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  ack_with_err_1  : 1;  /* bit[1]    : SoTͬ������ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  ack_with_err_2  : 1;  /* bit[2]    : EoTͬ������ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  ack_with_err_3  : 1;  /* bit[3]    : Escapeģʽ����������ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  ack_with_err_4  : 1;  /* bit[4]    : LP����ͬ������ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  ack_with_err_5  : 1;  /* bit[5]    : ���賬ʱ����ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  ack_with_err_6  : 1;  /* bit[6]    : �ٿ��ƴ���ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  ack_with_err_7  : 1;  /* bit[7]    : ������ */
        unsigned int  ack_with_err_8  : 1;  /* bit[8]    : ������ECC���󣨿ɾ�����ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  ack_with_err_9  : 1;  /* bit[9]    : �����ECC���󣨲��ɾ�����ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  ack_with_err_10 : 1;  /* bit[10]   : ����Checksum����ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  ack_with_err_11 : 1;  /* bit[11]   : DSIδ֪�������ʹ���ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  ack_with_err_12 : 1;  /* bit[12]   : DSI VC ID��Ч����ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  ack_with_err_13 : 1;  /* bit[13]   : ���䳤����Ч����ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  ack_with_err_14 : 1;  /* bit[14]   : ������ */
        unsigned int  ack_with_err_15 : 1;  /* bit[15]   : DSIЭ��Υ�����ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  dphy_errors_0   : 1;  /* bit[16]   : Lane 0 Escape��ڴ���ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  dphy_errors_1   : 1;  /* bit[17]   : Lane 0 LP���ݴ���ͬ������ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  dphy_errors_2   : 1;  /* bit[18]   : Lane 0 ���ƴ���ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  dphy_errors_3   : 1;  /* bit[19]   : Lane 0 LP0���ô���ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  dphy_errors_4   : 1;  /* bit[20]   : Lane 0 LP1���ô���ָʾ��
                                                           0���޴���
                                                           1������ */
        unsigned int  reserved        : 11; /* bit[21-31]: ������ */
    } reg;
} SOC_DSI_INT_ST0_UNION;
#endif
#define SOC_DSI_INT_ST0_ack_with_err_0_START   (0)
#define SOC_DSI_INT_ST0_ack_with_err_0_END     (0)
#define SOC_DSI_INT_ST0_ack_with_err_1_START   (1)
#define SOC_DSI_INT_ST0_ack_with_err_1_END     (1)
#define SOC_DSI_INT_ST0_ack_with_err_2_START   (2)
#define SOC_DSI_INT_ST0_ack_with_err_2_END     (2)
#define SOC_DSI_INT_ST0_ack_with_err_3_START   (3)
#define SOC_DSI_INT_ST0_ack_with_err_3_END     (3)
#define SOC_DSI_INT_ST0_ack_with_err_4_START   (4)
#define SOC_DSI_INT_ST0_ack_with_err_4_END     (4)
#define SOC_DSI_INT_ST0_ack_with_err_5_START   (5)
#define SOC_DSI_INT_ST0_ack_with_err_5_END     (5)
#define SOC_DSI_INT_ST0_ack_with_err_6_START   (6)
#define SOC_DSI_INT_ST0_ack_with_err_6_END     (6)
#define SOC_DSI_INT_ST0_ack_with_err_7_START   (7)
#define SOC_DSI_INT_ST0_ack_with_err_7_END     (7)
#define SOC_DSI_INT_ST0_ack_with_err_8_START   (8)
#define SOC_DSI_INT_ST0_ack_with_err_8_END     (8)
#define SOC_DSI_INT_ST0_ack_with_err_9_START   (9)
#define SOC_DSI_INT_ST0_ack_with_err_9_END     (9)
#define SOC_DSI_INT_ST0_ack_with_err_10_START  (10)
#define SOC_DSI_INT_ST0_ack_with_err_10_END    (10)
#define SOC_DSI_INT_ST0_ack_with_err_11_START  (11)
#define SOC_DSI_INT_ST0_ack_with_err_11_END    (11)
#define SOC_DSI_INT_ST0_ack_with_err_12_START  (12)
#define SOC_DSI_INT_ST0_ack_with_err_12_END    (12)
#define SOC_DSI_INT_ST0_ack_with_err_13_START  (13)
#define SOC_DSI_INT_ST0_ack_with_err_13_END    (13)
#define SOC_DSI_INT_ST0_ack_with_err_14_START  (14)
#define SOC_DSI_INT_ST0_ack_with_err_14_END    (14)
#define SOC_DSI_INT_ST0_ack_with_err_15_START  (15)
#define SOC_DSI_INT_ST0_ack_with_err_15_END    (15)
#define SOC_DSI_INT_ST0_dphy_errors_0_START    (16)
#define SOC_DSI_INT_ST0_dphy_errors_0_END      (16)
#define SOC_DSI_INT_ST0_dphy_errors_1_START    (17)
#define SOC_DSI_INT_ST0_dphy_errors_1_END      (17)
#define SOC_DSI_INT_ST0_dphy_errors_2_START    (18)
#define SOC_DSI_INT_ST0_dphy_errors_2_END      (18)
#define SOC_DSI_INT_ST0_dphy_errors_3_START    (19)
#define SOC_DSI_INT_ST0_dphy_errors_3_END      (19)
#define SOC_DSI_INT_ST0_dphy_errors_4_START    (20)
#define SOC_DSI_INT_ST0_dphy_errors_4_END      (20)


/*****************************************************************************
 �ṹ��    : SOC_DSI_INT_ST1_UNION
 �ṹ˵��  : INT_ST1 �Ĵ����ṹ���塣��ַƫ����:0x00C0����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж�״̬�Ĵ���1��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  to_hs_tx         : 1;  /* bit[0]    : HS���䳬ʱ���󣨼�⵽���ã�ָʾ��
                                                            0���޴���
                                                            1������ */
        unsigned int  to_lp_rx         : 1;  /* bit[1]    : LP���ճ�ʱ���󣨼�⵽���ã�ָʾ��
                                                            0���޴���
                                                            1������ */
        unsigned int  ecc_single_err   : 1;  /* bit[2]    : ���յİ�������ECC����ָʾ��
                                                            0���޴���
                                                            1������ */
        unsigned int  ecc_multi_err    : 1;  /* bit[3]    : ���յİ������ECC����ָʾ��
                                                            0���޴���
                                                            1������ */
        unsigned int  crc_err          : 1;  /* bit[4]    : ���յİ�CRC����ָʾ��
                                                            0���޴���
                                                            1������ */
        unsigned int  pkt_size_err     : 1;  /* bit[5]    : ���չ����а�������ָʾ��
                                                            0���޴���
                                                            1������ */
        unsigned int  eopt_err         : 1;  /* bit[6]    : ���贫����ɺ�δ�յ����贫���EoT������ָʾ��
                                                            0���޴���
                                                            1������ */
        unsigned int  dpi_pld_wr_err   : 1;  /* bit[7]    : DPI��������FIFO�������ָʾ��
                                                            0���޴���
                                                            1������ */
        unsigned int  gen_cmd_wr_err   : 1;  /* bit[8]    : Genericд����FIFO�������ָʾ��
                                                            0���޴���
                                                            1������ */
        unsigned int  gen_pld_wr_err   : 1;  /* bit[9]    : Genericд����FIFO�������ָʾ��
                                                            0���޴���
                                                            1������ */
        unsigned int  gen_pld_send_err : 1;  /* bit[10]   : Generic���ݷ���FIFO�������ָʾ��
                                                            0���޴���
                                                            1������ */
        unsigned int  gen_pld_rd_err   : 1;  /* bit[11]   : Generic���ݻض�FIFO�������ָʾ��
                                                            0���޴���
                                                            1������ */
        unsigned int  gen_pld_recv_err : 1;  /* bit[12]   : Generic���ݻض�FIFO�������ָʾ��
                                                            0���޴���
                                                            1������ */
        unsigned int  reserved         : 19; /* bit[13-31]: ������ */
    } reg;
} SOC_DSI_INT_ST1_UNION;
#endif
#define SOC_DSI_INT_ST1_to_hs_tx_START          (0)
#define SOC_DSI_INT_ST1_to_hs_tx_END            (0)
#define SOC_DSI_INT_ST1_to_lp_rx_START          (1)
#define SOC_DSI_INT_ST1_to_lp_rx_END            (1)
#define SOC_DSI_INT_ST1_ecc_single_err_START    (2)
#define SOC_DSI_INT_ST1_ecc_single_err_END      (2)
#define SOC_DSI_INT_ST1_ecc_multi_err_START     (3)
#define SOC_DSI_INT_ST1_ecc_multi_err_END       (3)
#define SOC_DSI_INT_ST1_crc_err_START           (4)
#define SOC_DSI_INT_ST1_crc_err_END             (4)
#define SOC_DSI_INT_ST1_pkt_size_err_START      (5)
#define SOC_DSI_INT_ST1_pkt_size_err_END        (5)
#define SOC_DSI_INT_ST1_eopt_err_START          (6)
#define SOC_DSI_INT_ST1_eopt_err_END            (6)
#define SOC_DSI_INT_ST1_dpi_pld_wr_err_START    (7)
#define SOC_DSI_INT_ST1_dpi_pld_wr_err_END      (7)
#define SOC_DSI_INT_ST1_gen_cmd_wr_err_START    (8)
#define SOC_DSI_INT_ST1_gen_cmd_wr_err_END      (8)
#define SOC_DSI_INT_ST1_gen_pld_wr_err_START    (9)
#define SOC_DSI_INT_ST1_gen_pld_wr_err_END      (9)
#define SOC_DSI_INT_ST1_gen_pld_send_err_START  (10)
#define SOC_DSI_INT_ST1_gen_pld_send_err_END    (10)
#define SOC_DSI_INT_ST1_gen_pld_rd_err_START    (11)
#define SOC_DSI_INT_ST1_gen_pld_rd_err_END      (11)
#define SOC_DSI_INT_ST1_gen_pld_recv_err_START  (12)
#define SOC_DSI_INT_ST1_gen_pld_recv_err_END    (12)


/*****************************************************************************
 �ṹ��    : SOC_DSI_INT_MSK0_UNION
 �ṹ˵��  : INT_MSK0 �Ĵ����ṹ���塣��ַƫ����:0x00C4����ֵ:0x001FFFFF�����:32
 �Ĵ���˵��: �ж����μĴ���0��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mask_ack_with_err_0  : 1;  /* bit[0]    : ack_with_err_0�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_ack_with_err_1  : 1;  /* bit[1]    : ack_with_err_1�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_ack_with_err_2  : 1;  /* bit[2]    : ack_with_err_2�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_ack_with_err_3  : 1;  /* bit[3]    : ack_with_err_3�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_ack_with_err_4  : 1;  /* bit[4]    : ack_with_err_4�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_ack_with_err_5  : 1;  /* bit[5]    : ack_with_err_5�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_ack_with_err_6  : 1;  /* bit[6]    : ack_with_err_6�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_ack_with_err_7  : 1;  /* bit[7]    : ack_with_err_7�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_ack_with_err_8  : 1;  /* bit[8]    : ack_with_err_8�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_ack_with_err_9  : 1;  /* bit[9]    : ack_with_err_9�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_ack_with_err_10 : 1;  /* bit[10]   : ack_with_err_10�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_ack_with_err_11 : 1;  /* bit[11]   : ack_with_err_11�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_ack_with_err_12 : 1;  /* bit[12]   : ack_with_err_12�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_ack_with_err_13 : 1;  /* bit[13]   : ack_with_err_13�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_ack_with_err_14 : 1;  /* bit[14]   : ack_with_err_14�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_ack_with_err_15 : 1;  /* bit[15]   : ack_with_err_15�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_dphy_errors_0   : 1;  /* bit[16]   : dphy_errors_0�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_dphy_errors_1   : 1;  /* bit[17]   : dphy_errors_1�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_dphy_errors_2   : 1;  /* bit[18]   : dphy_errors_2�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_dphy_errors_3   : 1;  /* bit[19]   : dphy_errors_3�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  mask_dphy_errors_4   : 1;  /* bit[20]   : dphy_errors_4�ж����Ρ�
                                                                0�������Σ�
                                                                1�����Ρ� */
        unsigned int  reserved             : 11; /* bit[21-31]: ������ */
    } reg;
} SOC_DSI_INT_MSK0_UNION;
#endif
#define SOC_DSI_INT_MSK0_mask_ack_with_err_0_START   (0)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_0_END     (0)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_1_START   (1)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_1_END     (1)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_2_START   (2)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_2_END     (2)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_3_START   (3)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_3_END     (3)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_4_START   (4)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_4_END     (4)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_5_START   (5)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_5_END     (5)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_6_START   (6)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_6_END     (6)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_7_START   (7)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_7_END     (7)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_8_START   (8)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_8_END     (8)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_9_START   (9)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_9_END     (9)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_10_START  (10)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_10_END    (10)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_11_START  (11)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_11_END    (11)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_12_START  (12)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_12_END    (12)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_13_START  (13)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_13_END    (13)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_14_START  (14)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_14_END    (14)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_15_START  (15)
#define SOC_DSI_INT_MSK0_mask_ack_with_err_15_END    (15)
#define SOC_DSI_INT_MSK0_mask_dphy_errors_0_START    (16)
#define SOC_DSI_INT_MSK0_mask_dphy_errors_0_END      (16)
#define SOC_DSI_INT_MSK0_mask_dphy_errors_1_START    (17)
#define SOC_DSI_INT_MSK0_mask_dphy_errors_1_END      (17)
#define SOC_DSI_INT_MSK0_mask_dphy_errors_2_START    (18)
#define SOC_DSI_INT_MSK0_mask_dphy_errors_2_END      (18)
#define SOC_DSI_INT_MSK0_mask_dphy_errors_3_START    (19)
#define SOC_DSI_INT_MSK0_mask_dphy_errors_3_END      (19)
#define SOC_DSI_INT_MSK0_mask_dphy_errors_4_START    (20)
#define SOC_DSI_INT_MSK0_mask_dphy_errors_4_END      (20)


/*****************************************************************************
 �ṹ��    : SOC_DSI_INT_MSK1_UNION
 �ṹ˵��  : INT_MSK1 �Ĵ����ṹ���塣��ַƫ����:0x00C8����ֵ:0x00001FFF�����:32
 �Ĵ���˵��: �ж����μĴ���1��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mask_to_hs_tx         : 1;  /* bit[0]    : to_hs_tx�ж����Ρ�
                                                                 0�������Σ�
                                                                 1�����Ρ� */
        unsigned int  mask_to_lp_rx         : 1;  /* bit[1]    : to_lp_rx�ж����Ρ�
                                                                 0�������Σ�
                                                                 1�����Ρ� */
        unsigned int  mask_ecc_single_err   : 1;  /* bit[2]    : ecc_single_err�ж����Ρ�
                                                                 0�������Σ�
                                                                 1�����Ρ� */
        unsigned int  mask_ecc_multi_err    : 1;  /* bit[3]    : ecc_multi_err�ж����Ρ�
                                                                 0�������Σ�
                                                                 1�����Ρ� */
        unsigned int  mask_crc_err          : 1;  /* bit[4]    : crc_err�ж����Ρ�
                                                                 0�������Σ�
                                                                 1�����Ρ� */
        unsigned int  mask_pkt_size_err     : 1;  /* bit[5]    : pkt_size_err�ж����Ρ�
                                                                 0�������Σ�
                                                                 1�����Ρ� */
        unsigned int  mask_eopt_err         : 1;  /* bit[6]    : eopt_err�ж����Ρ�
                                                                 0�������Σ�
                                                                 1�����Ρ� */
        unsigned int  mask_dpi_pld_wr_err   : 1;  /* bit[7]    : dpi_pld_wr_err�ж����Ρ�
                                                                 0�������Σ�
                                                                 1�����Ρ� */
        unsigned int  mask_gen_cmd_wr_err   : 1;  /* bit[8]    : gen_cmd_wr_err�ж����Ρ�
                                                                 0�������Σ�
                                                                 1�����Ρ� */
        unsigned int  mask_gen_pld_wr_err   : 1;  /* bit[9]    : gen_pld_wr_err�ж����Ρ�
                                                                 0�������Σ�
                                                                 1�����Ρ� */
        unsigned int  mask_gen_pld_send_err : 1;  /* bit[10]   : gen_pld_send_err�ж����Ρ�
                                                                 0�������Σ�
                                                                 1�����Ρ� */
        unsigned int  mask_gen_pld_rd_err   : 1;  /* bit[11]   : gen_pld_rd_err�ж����Ρ�
                                                                 0�������Σ�
                                                                 1�����Ρ� */
        unsigned int  mask_gen_pld_recv_err : 1;  /* bit[12]   : gen_pld_recv_err�ж����Ρ�
                                                                 0�������Σ�
                                                                 1�����Ρ� */
        unsigned int  reserved              : 19; /* bit[13-31]: ������ */
    } reg;
} SOC_DSI_INT_MSK1_UNION;
#endif
#define SOC_DSI_INT_MSK1_mask_to_hs_tx_START          (0)
#define SOC_DSI_INT_MSK1_mask_to_hs_tx_END            (0)
#define SOC_DSI_INT_MSK1_mask_to_lp_rx_START          (1)
#define SOC_DSI_INT_MSK1_mask_to_lp_rx_END            (1)
#define SOC_DSI_INT_MSK1_mask_ecc_single_err_START    (2)
#define SOC_DSI_INT_MSK1_mask_ecc_single_err_END      (2)
#define SOC_DSI_INT_MSK1_mask_ecc_multi_err_START     (3)
#define SOC_DSI_INT_MSK1_mask_ecc_multi_err_END       (3)
#define SOC_DSI_INT_MSK1_mask_crc_err_START           (4)
#define SOC_DSI_INT_MSK1_mask_crc_err_END             (4)
#define SOC_DSI_INT_MSK1_mask_pkt_size_err_START      (5)
#define SOC_DSI_INT_MSK1_mask_pkt_size_err_END        (5)
#define SOC_DSI_INT_MSK1_mask_eopt_err_START          (6)
#define SOC_DSI_INT_MSK1_mask_eopt_err_END            (6)
#define SOC_DSI_INT_MSK1_mask_dpi_pld_wr_err_START    (7)
#define SOC_DSI_INT_MSK1_mask_dpi_pld_wr_err_END      (7)
#define SOC_DSI_INT_MSK1_mask_gen_cmd_wr_err_START    (8)
#define SOC_DSI_INT_MSK1_mask_gen_cmd_wr_err_END      (8)
#define SOC_DSI_INT_MSK1_mask_gen_pld_wr_err_START    (9)
#define SOC_DSI_INT_MSK1_mask_gen_pld_wr_err_END      (9)
#define SOC_DSI_INT_MSK1_mask_gen_pld_send_err_START  (10)
#define SOC_DSI_INT_MSK1_mask_gen_pld_send_err_END    (10)
#define SOC_DSI_INT_MSK1_mask_gen_pld_rd_err_START    (11)
#define SOC_DSI_INT_MSK1_mask_gen_pld_rd_err_END      (11)
#define SOC_DSI_INT_MSK1_mask_gen_pld_recv_err_START  (12)
#define SOC_DSI_INT_MSK1_mask_gen_pld_recv_err_END    (12)






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

#endif /* end of soc_dsi_interface.h */
