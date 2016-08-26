

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_TS_INTERFACE_H__
#define __SOC_TS_INTERFACE_H__

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
/* �Ĵ���˵�����ӿڼĴ�����
   λ����UNION�ṹ:  SOC_TS_DMX_INF_UNION */
#define SOC_TS_DMX_INF_ADDR(base)                     ((base) + (0x000))

/* �Ĵ���˵�������а������Ĵ�����
   λ����UNION�ṹ:  SOC_TS_COUNT_TSP_UNION */
#define SOC_TS_COUNT_TSP_ADDR(base)                   ((base) + (0x004))

/* �Ĵ���˵�������а����������ƼĴ�����
   λ����UNION�ṹ:  SOC_TS_COUNT_TSP_CTRL_UNION */
#define SOC_TS_COUNT_TSP_CTRL_ADDR(base)              ((base) + (0x008))

/* �Ĵ���˵��������������Ĵ�����
   λ����UNION�ṹ:  SOC_TS_COUNT_ETSP_UNION */
#define SOC_TS_COUNT_ETSP_ADDR(base)                  ((base) + (0x00C))

/* �Ĵ���˵������������������ƼĴ�����
   λ����UNION�ṹ:  SOC_TS_COUNT_ETSP_CTRL_UNION */
#define SOC_TS_COUNT_ETSP_CTRL_ADDR(base)             ((base) + (0x010))

/* �Ĵ���˵�����ӿ��첽FIFO���������־�Ĵ�����
   λ����UNION�ṹ:  SOC_TS_AFIFO_WFULL_ERR_UNION */
#define SOC_TS_AFIFO_WFULL_ERR_ADDR(base)             ((base) + (0x014))

/* �Ĵ���˵�����ӿ��첽FIFO����־�Ĵ�����
   λ����UNION�ṹ:  SOC_TS_AFIFO_WFULL_STATUS_UNION */
#define SOC_TS_AFIFO_WFULL_STATUS_ADDR(base)          ((base) + (0x018))

/* �Ĵ���˵�������ԼĴ���1���ڲ�ʹ�ã���
   λ����UNION�ṹ:  SOC_TS_TSSYNC_DEBUG1_UNION */
#define SOC_TS_TSSYNC_DEBUG1_ADDR(base)               ((base) + (0x020))

/* �Ĵ���˵�������ԼĴ���2���ڲ�ʹ�ã�(out_188_info)��
   λ����UNION�ṹ:  SOC_TS_TSSYNC_DEBUG2_UNION */
#define SOC_TS_TSSYNC_DEBUG2_ADDR(base)               ((base) + (0x024))

/* �Ĵ���˵�������ԼĴ���3���ڲ�ʹ�ã�(out_204_info)��
   λ����UNION�ṹ:  SOC_TS_TSSYNC_DEBUG3_UNION */
#define SOC_TS_TSSYNC_DEBUG3_ADDR(base)               ((base) + (0x028))

/* �Ĵ���˵�������ڲ�FIFO״̬���ĵ�ǰ״̬�����ԼĴ������ڲ�ʹ�ã���
   λ����UNION�ṹ:  SOC_TS_READ_FIFO_FSM_UNION */
#define SOC_TS_READ_FIFO_FSM_ADDR(base)               ((base) + (0x02C))

/* �Ĵ���˵����ͬ�����״̬����״̬�����ԼĴ������ڲ�ʹ�ã���
   λ����UNION�ṹ:  SOC_TS_SYNC_CHECK_FSM_UNION */
#define SOC_TS_SYNC_CHECK_FSM_ADDR(base)              ((base) + (0x030))

/* �Ĵ���˵����ͬ���ɹ���־�Ĵ�����
   λ����UNION�ṹ:  SOC_TS_SYNC_CHECK_FLAG_UNION */
#define SOC_TS_SYNC_CHECK_FLAG_ADDR(base)             ((base) + (0x034))

/* �Ĵ���˵�����ڲ�memory�洢״���Ĵ��������ԼĴ������ڲ�ʹ�ã���
   λ����UNION�ṹ:  SOC_TS_SWITCH_FB_INFO_UNION */
#define SOC_TS_SWITCH_FB_INFO_ADDR(base)              ((base) + (0x038))

/* �Ĵ���˵��������ʶ���������Ĵ�����debugʱʹ�á�
   λ����UNION�ṹ:  SOC_TS_DBG_PID_CTRL_UNION */
#define SOC_TS_DBG_PID_CTRL_ADDR(base)                ((base) + (0x040))

/* �Ĵ���˵������0�ְ���ʶ�����Ĵ�����debugʱʹ�á�
   λ����UNION�ṹ:  SOC_TS_DBG_PID0_UNION */
#define SOC_TS_DBG_PID0_ADDR(base)                    ((base) + (0x044))

/* �Ĵ���˵������1�ְ���ʶ�����Ĵ�����debugʱʹ�á�
   λ����UNION�ṹ:  SOC_TS_DBG_PID1_UNION */
#define SOC_TS_DBG_PID1_ADDR(base)                    ((base) + (0x048))

/* �Ĵ���˵������2�ְ���ʶ�����Ĵ�����debugʱʹ�á�
   λ����UNION�ṹ:  SOC_TS_DBG_PID2_UNION */
#define SOC_TS_DBG_PID2_ADDR(base)                    ((base) + (0x04C))

/* �Ĵ���˵������3�ְ���ʶ�����Ĵ�����debugʱʹ�á�
   λ����UNION�ṹ:  SOC_TS_DBG_PID3_UNION */
#define SOC_TS_DBG_PID3_ADDR(base)                    ((base) + (0x050))

/* �Ĵ���˵������4�ְ���ʶ�����Ĵ�����debugʱʹ�á�
   λ����UNION�ṹ:  SOC_TS_DBG_PID4_UNION */
#define SOC_TS_DBG_PID4_ADDR(base)                    ((base) + (0x054))

/* �Ĵ���˵������5�ְ���ʶ�����Ĵ�����debugʱʹ�á�
   λ����UNION�ṹ:  SOC_TS_DBG_PID5_UNION */
#define SOC_TS_DBG_PID5_ADDR(base)                    ((base) + (0x058))

/* �Ĵ���˵������6�ְ���ʶ�����Ĵ�����debugʱʹ�á�
   λ����UNION�ṹ:  SOC_TS_DBG_PID6_UNION */
#define SOC_TS_DBG_PID6_ADDR(base)                    ((base) + (0x05C))

/* �Ĵ���˵������7�ְ���ʶ�����Ĵ�����debugʱʹ�á�
   λ����UNION�ṹ:  SOC_TS_DBG_PID7_UNION */
#define SOC_TS_DBG_PID7_ADDR(base)                    ((base) + (0x060))

/* �Ĵ���˵����ͬ��ָ���������üĴ�����
   λ����UNION�ṹ:  SOC_TS_SYNC_LEN_UNION */
#define SOC_TS_SYNC_LEN_ADDR(base)                    ((base) + (0x064))

/* �Ĵ���˵��������nosyncģʽ��ͬ���������м��������ü�����ÿ256byte��1���������ֵ�Ĵ�����
   λ����UNION�ṹ:  SOC_TS_SYNC_CLR_TH_UNION */
#define SOC_TS_SYNC_CLR_TH_ADDR(base)                 ((base) + (0x068))

/* �Ĵ���˵�����Ѵ������������������ź�ѡ��Ĵ���������debug TS�����ʣ������һ��ʱ���ڽ����˶�����������������ͳ����cnt_sig[255:0]�б�ѡ�����ڴ������źŴ�����
   λ����UNION�ṹ:  SOC_TS_DBG_CNT_SEL_UNION */
#define SOC_TS_DBG_CNT_SEL_ADDR(base)                 ((base) + (0x06C))

/* �Ĵ���˵�����Ѵ�������������������ֵ����ʱ�������üĴ���������debug TS�����ʡ�
   λ����UNION�ṹ:  SOC_TS_DBG_TIMERCFG_UNION */
#define SOC_TS_DBG_TIMERCFG_ADDR(base)                ((base) + (0x070))

/* �Ĵ���˵������ǰ�Ѵ���������������������debug TS�����ʡ�
   λ����UNION�ṹ:  SOC_TS_DBG_RD_CNT_UNION */
#define SOC_TS_DBG_RD_CNT_ADDR(base)                  ((base) + (0x074))

/* �Ĵ���˵������ǰʱ��ֵ�Ĵ���������debug TS�����ʡ�
   λ����UNION�ṹ:  SOC_TS_DBG_RD_TIMER_UNION */
#define SOC_TS_DBG_RD_TIMER_ADDR(base)                ((base) + (0x078))

/* �Ĵ���˵�����Ѵ�������������������ֵ����������ֵ������debug TS�����ʡ�
   λ����UNION�ṹ:  SOC_TS_DBG_RD_SAMPLE_UNION */
#define SOC_TS_DBG_RD_SAMPLE_ADDR(base)               ((base) + (0x07C))

/* �Ĵ���˵��������������ͬ��ʧ��ָʾ����ؼ����Ĵ���������debug��
   λ����UNION�ṹ:  SOC_TS_DBG_UNIFY_0_UNION */
#define SOC_TS_DBG_UNIFY_0_ADDR(base)                 ((base) + (0x080))

/* �Ĵ���˵����TS�˿�ģʽ������źżĴ���������debug��
   λ����UNION�ṹ:  SOC_TS_DBG_UNIFY_1_UNION */
#define SOC_TS_DBG_UNIFY_1_ADDR(base)                 ((base) + (0x084))

/* �Ĵ���˵����TSԭʼ�жϼĴ�����
   λ����UNION�ṹ:  SOC_TS_INTR_RAW_UNION */
#define SOC_TS_INTR_RAW_ADDR(base)                    ((base) + (0x100))

/* �Ĵ���˵����TS�ж��������üĴ�����
   λ����UNION�ṹ:  SOC_TS_INTR_MASK_UNION */
#define SOC_TS_INTR_MASK_ADDR(base)                   ((base) + (0x104))

/* �Ĵ���˵����TS���κ��ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_TS_INTR_STATUS_UNION */
#define SOC_TS_INTR_STATUS_ADDR(base)                 ((base) + (0x108))

/* �Ĵ���˵����TS�ж�����Ĵ�����
   λ����UNION�ṹ:  SOC_TS_INTR_CLR_UNION */
#define SOC_TS_INTR_CLR_ADDR(base)                    ((base) + (0x10C))

/* �Ĵ���˵����TS�˿�ʱ�ӷ���ѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_TS_CLK_INV_SEL_UNION */
#define SOC_TS_CLK_INV_SEL_ADDR(base)                 ((base) + (0x110))

/* �Ĵ���˵�������ݰ�����ƼĴ�����
   λ����UNION�ṹ:  SOC_TS_DATA_MV_CTRL_UNION */
#define SOC_TS_DATA_MV_CTRL_ADDR(base)                ((base) + (0x114))

/* �Ĵ���˵�����ڲ�memory��ֵ���üĴ�����
   λ����UNION�ṹ:  SOC_TS_MEM_THRESHOLD_UNION */
#define SOC_TS_MEM_THRESHOLD_ADDR(base)               ((base) + (0x118))

/* �Ĵ���˵�����ڲ�memory����������С��ʾ�Ĵ�����
   λ����UNION�ṹ:  SOC_TS_MEM_COUNT_UNION */
#define SOC_TS_MEM_COUNT_ADDR(base)                   ((base) + (0x11C))

/* �Ĵ���˵�������һ�ΰ�����Ч����������10bitΪ��λ��
   λ����UNION�ṹ:  SOC_TS_LAST_INVALID_COUNT_UNION */
#define SOC_TS_LAST_INVALID_COUNT_ADDR(base)          ((base) + (0x120))

/* �Ĵ���˵����TS�˿ڹرպ�����ʱ���ſص���ʱ�����ڸ������üĴ�����
   λ����UNION�ṹ:  SOC_TS_CLK_GT_TIMEOUT_VALUE_UNION */
#define SOC_TS_CLK_GT_TIMEOUT_VALUE_ADDR(base)        ((base) + (0x124))

/* �Ĵ���˵�������һ�ΰ���������ƼĴ�����
   λ����UNION�ṹ:  SOC_TS_LAST_REQ_CTRL_UNION */
#define SOC_TS_LAST_REQ_CTRL_ADDR(base)               ((base) + (0x128))

/* �Ĵ���˵�������һ�ΰ����������Ч����ֵ���üĴ�����
   λ����UNION�ṹ:  SOC_TS_LAST_INVALID_DATA_UNION */
#define SOC_TS_LAST_INVALID_DATA_ADDR(base)           ((base) + (0x12C))

/* �Ĵ���˵�����ڲ�memory��������Ĵ�����
   λ����UNION�ṹ:  SOC_TS_MEM_DISABLE_UNION */
#define SOC_TS_MEM_DISABLE_ADDR(base)                 ((base) + (0x130))





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
 �ṹ��    : SOC_TS_DMX_INF_UNION
 �ṹ˵��  : DMX_INF �Ĵ����ṹ���塣��ַƫ����:0x000����ֵ:0x00100715�����:32
 �Ĵ���˵��: �ӿڼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sw_build_sync_188_th   : 3;  /* bit[0-2]  : ͬ�������жϵ�����ֵ����nosyncģʽ����Ч�� */
        unsigned int  reserved_0             : 1;  /* bit[3]    : ������ */
        unsigned int  sw_lose_sync_188_th    : 2;  /* bit[4-5]  : ͬ����ʧ�жϵ�����ֵ����nosyncģʽ����Ч�� */
        unsigned int  reserved_1             : 2;  /* bit[6-7]  : ������ */
        unsigned int  sw_afifo_rd_rate       : 3;  /* bit[8-10] : ������õĶ��첽FIFO��rd_rateֵ�� */
        unsigned int  sw_afifo_rd_mode       : 1;  /* bit[11]   : �������TS IP�ڲ��첽FIFO��ȡģʽѡ��
                                                                  0������Ӳ���̶�rd_rate���첽FIFO��
                                                                  1������������õ�sw_afifo_rd_rate���첽FIFO�� */
        unsigned int  sw_serial_2bit         : 1;  /* bit[12]   : ���з�ʽѡ��
                                                                  0��1bit���з�ʽ��
                                                                  1��2bit���з�ʽ�� */
        unsigned int  sw_serial_2bit_rev     : 1;  /* bit[13]   : 2bit���з�ʽbit�߷�תѡ��
                                                                  0��2bit�����߲���ת��
                                                                  1��2bit�����߷�ת��
                                                                  ֻ��serial_selΪ1��ser_2bit_modeΪ1ʱ��Ч�� */
        unsigned int  sw_serial_nosync       : 1;  /* bit[14]   : ����nosyncģʽѡ��
                                                                  0��sync����Ч��
                                                                  1��sync����Ч������Ӧͬ����
                                                                  ֻ��serial_selΪ1��ser_2bit_modeΪ1ʱ��Ч�� */
        unsigned int  reserved_2             : 1;  /* bit[15]   : ������ */
        unsigned int  sw_nosync_fixed_204    : 1;  /* bit[16]   : ֻ��nosync_fixedģʽ����Ч��
                                                                  0��ָ������188������⣻
                                                                  1��ָ������204������⡣ */
        unsigned int  sw_serial_syncbit      : 1;  /* bit[17]   : 0����������sync��ʶ�������أ����Դ���֮�󣩣�
                                                                  1����������sync��ʶ�ĵ�ƽ�����Դ���֮�󣩡� */
        unsigned int  sw_serial_syncbit_mode : 1;  /* bit[18]   : ����sync��ʶ�������ش���ʽ��
                                                                  0��ʹ�ü�������ʽ��
                                                                  1��ʹ��bit�ӳٷ�ʽ�� */
        unsigned int  reserved_3             : 1;  /* bit[19]   : ������ */
        unsigned int  sw_sync_mode           : 2;  /* bit[20-21]: ��������ģʽѡ��
                                                                  00��sync/burst��ʽ��
                                                                  01��sync/valid��ʽ��
                                                                  10��nosync_fixed��ʽ����nosync_fixed_204ָ����������
                                                                  11��nosync_188_204��ʽ��Ӳ����Ҫ�ж���204����188�� */
        unsigned int  sw_err_bypass          : 1;  /* bit[22]   : �˿�err�ź�����ѡ�����κ󽫲����������errֵ������Ч�ơ�
                                                                  0��err�źŲ����Σ�
                                                                  1��err�ź����Ρ� */
        unsigned int  sw_pol_sync            : 1;  /* bit[23]   : �˿�sync�źż���ѡ��
                                                                  0��sync�źŸ���Ч��
                                                                  1��sync�źŵ���Ч�� */
        unsigned int  sw_pol_vld             : 1;  /* bit[24]   : �˿�valid�źż���ѡ��
                                                                  0��valid�źŸ���Ч��
                                                                  1��valid�źŵ���Ч�� */
        unsigned int  sw_pol_err             : 1;  /* bit[25]   : �˿�err�źż���ѡ��
                                                                  0��err�ź�Ϊ��ʱ��ʾ���ݴ���
                                                                  1��err�ź�Ϊ��ʱ��ʾ���ݴ��� */
        unsigned int  sw_47_replace          : 1;  /* bit[26]   : 1���滻sync�ֽ�Ϊ0x47��
                                                                  0�����滻�� */
        unsigned int  sw_serial_lsb_1st      : 1;  /* bit[27]   : 1�����������ЧΪ�����롣
                                                                  0�����������Чλ�����롣 */
        unsigned int  sw_noworking           : 1;  /* bit[28]   : 1���������TS IP��������
                                                                  0�����û������TS IP�������� */
        unsigned int  sw_serial_in           : 1;  /* bit[29]   : ����/��������ѡ��
                                                                  0���������룻
                                                                  1���������롣 */
        unsigned int  sw_bit_sel             : 1;  /* bit[30]   : ����bitλѡ��
                                                                  0��cdata[7]Ϊ����MSB��bit���������ߣ�2bit����ģʽʱcdata[7:6]Ϊ�����ߡ�
                                                                  1��cdata[0]Ϊ����MSB��bit���������ߣ�2bit����ģʽʱcdata[0:1]Ϊ�����ߡ� */
        unsigned int  sw_port_open           : 1;  /* bit[31]   : �˿ڿ������ƣ�
                                                                  0���˿ڹرգ�
                                                                  1���˿ڿ�����
                                                                  ֻ���ڹرն˿�״̬�£����ܸ��Ķ˿ڵ����ò����� */
    } reg;
} SOC_TS_DMX_INF_UNION;
#endif
#define SOC_TS_DMX_INF_sw_build_sync_188_th_START    (0)
#define SOC_TS_DMX_INF_sw_build_sync_188_th_END      (2)
#define SOC_TS_DMX_INF_sw_lose_sync_188_th_START     (4)
#define SOC_TS_DMX_INF_sw_lose_sync_188_th_END       (5)
#define SOC_TS_DMX_INF_sw_afifo_rd_rate_START        (8)
#define SOC_TS_DMX_INF_sw_afifo_rd_rate_END          (10)
#define SOC_TS_DMX_INF_sw_afifo_rd_mode_START        (11)
#define SOC_TS_DMX_INF_sw_afifo_rd_mode_END          (11)
#define SOC_TS_DMX_INF_sw_serial_2bit_START          (12)
#define SOC_TS_DMX_INF_sw_serial_2bit_END            (12)
#define SOC_TS_DMX_INF_sw_serial_2bit_rev_START      (13)
#define SOC_TS_DMX_INF_sw_serial_2bit_rev_END        (13)
#define SOC_TS_DMX_INF_sw_serial_nosync_START        (14)
#define SOC_TS_DMX_INF_sw_serial_nosync_END          (14)
#define SOC_TS_DMX_INF_sw_nosync_fixed_204_START     (16)
#define SOC_TS_DMX_INF_sw_nosync_fixed_204_END       (16)
#define SOC_TS_DMX_INF_sw_serial_syncbit_START       (17)
#define SOC_TS_DMX_INF_sw_serial_syncbit_END         (17)
#define SOC_TS_DMX_INF_sw_serial_syncbit_mode_START  (18)
#define SOC_TS_DMX_INF_sw_serial_syncbit_mode_END    (18)
#define SOC_TS_DMX_INF_sw_sync_mode_START            (20)
#define SOC_TS_DMX_INF_sw_sync_mode_END              (21)
#define SOC_TS_DMX_INF_sw_err_bypass_START           (22)
#define SOC_TS_DMX_INF_sw_err_bypass_END             (22)
#define SOC_TS_DMX_INF_sw_pol_sync_START             (23)
#define SOC_TS_DMX_INF_sw_pol_sync_END               (23)
#define SOC_TS_DMX_INF_sw_pol_vld_START              (24)
#define SOC_TS_DMX_INF_sw_pol_vld_END                (24)
#define SOC_TS_DMX_INF_sw_pol_err_START              (25)
#define SOC_TS_DMX_INF_sw_pol_err_END                (25)
#define SOC_TS_DMX_INF_sw_47_replace_START           (26)
#define SOC_TS_DMX_INF_sw_47_replace_END             (26)
#define SOC_TS_DMX_INF_sw_serial_lsb_1st_START       (27)
#define SOC_TS_DMX_INF_sw_serial_lsb_1st_END         (27)
#define SOC_TS_DMX_INF_sw_noworking_START            (28)
#define SOC_TS_DMX_INF_sw_noworking_END              (28)
#define SOC_TS_DMX_INF_sw_serial_in_START            (29)
#define SOC_TS_DMX_INF_sw_serial_in_END              (29)
#define SOC_TS_DMX_INF_sw_bit_sel_START              (30)
#define SOC_TS_DMX_INF_sw_bit_sel_END                (30)
#define SOC_TS_DMX_INF_sw_port_open_START            (31)
#define SOC_TS_DMX_INF_sw_port_open_END              (31)


/*****************************************************************************
 �ṹ��    : SOC_TS_COUNT_TSP_UNION
 �ṹ˵��  : COUNT_TSP �Ĵ����ṹ���塣��ַƫ����:0x004����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���а������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  count_tsp : 32; /* bit[0-31]: TS���������а��������� */
    } reg;
} SOC_TS_COUNT_TSP_UNION;
#endif
#define SOC_TS_COUNT_TSP_count_tsp_START  (0)
#define SOC_TS_COUNT_TSP_count_tsp_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TS_COUNT_TSP_CTRL_UNION
 �ṹ˵��  : COUNT_TSP_CTRL �Ĵ����ṹ���塣��ַƫ����:0x008����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���а����������ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  count_tsp_ctrl : 2;  /* bit[0-1] : ���а��������ƣ�
                                                         00��ͳ�Ƽ�������λ��
                                                         01��ͳ�Ƽ�����ʹ�ܣ�
                                                         10��ͳ�Ƽ�����ֹͣ��
                                                         11�������� */
        unsigned int  reserved       : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_TS_COUNT_TSP_CTRL_UNION;
#endif
#define SOC_TS_COUNT_TSP_CTRL_count_tsp_ctrl_START  (0)
#define SOC_TS_COUNT_TSP_CTRL_count_tsp_ctrl_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_TS_COUNT_ETSP_UNION
 �ṹ˵��  : COUNT_ETSP �Ĵ����ṹ���塣��ַƫ����:0x00C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  count_etsp : 32; /* bit[0-31]: TS������������������ */
    } reg;
} SOC_TS_COUNT_ETSP_UNION;
#endif
#define SOC_TS_COUNT_ETSP_count_etsp_START  (0)
#define SOC_TS_COUNT_ETSP_count_etsp_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TS_COUNT_ETSP_CTRL_UNION
 �ṹ˵��  : COUNT_ETSP_CTRL �Ĵ����ṹ���塣��ַƫ����:0x010����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��������������ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  count_etsp_ctrl : 2;  /* bit[0-1] : ������������ƣ�
                                                          00��ͳ�Ƽ�������λ��
                                                          01��ͳ�Ƽ�����ʹ�ܣ�
                                                          10��ͳ�Ƽ�����ֹͣ��
                                                          11�������� */
        unsigned int  reserved        : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_TS_COUNT_ETSP_CTRL_UNION;
#endif
#define SOC_TS_COUNT_ETSP_CTRL_count_etsp_ctrl_START  (0)
#define SOC_TS_COUNT_ETSP_CTRL_count_etsp_ctrl_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_TS_AFIFO_WFULL_ERR_UNION
 �ṹ˵��  : AFIFO_WFULL_ERR �Ĵ����ṹ���塣��ַƫ����:0x014����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ӿ��첽FIFO���������־�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wfull_err : 1;  /* bit[0]   : �ӿ��첽FIFO�Ƿ���������������󡣶��塣 */
        unsigned int  reserved  : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_TS_AFIFO_WFULL_ERR_UNION;
#endif
#define SOC_TS_AFIFO_WFULL_ERR_wfull_err_START  (0)
#define SOC_TS_AFIFO_WFULL_ERR_wfull_err_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_TS_AFIFO_WFULL_STATUS_UNION
 �ṹ˵��  : AFIFO_WFULL_STATUS �Ĵ����ṹ���塣��ַƫ����:0x018����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ӿ��첽FIFO����־�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wfull_dmx : 1;  /* bit[0]   : �ӿ��첽FIFO�����־��
                                                    0������FIFOδ�������
                                                    1������FIFO������� */
        unsigned int  reserved  : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_TS_AFIFO_WFULL_STATUS_UNION;
#endif
#define SOC_TS_AFIFO_WFULL_STATUS_wfull_dmx_START  (0)
#define SOC_TS_AFIFO_WFULL_STATUS_wfull_dmx_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_TS_TSSYNC_DEBUG1_UNION
 �ṹ˵��  : TSSYNC_DEBUG1 �Ĵ����ṹ���塣��ַƫ����:0x020����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ԼĴ���1���ڲ�ʹ�ã���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  select_188 : 1;  /* bit[0]   : Ӳ���Լ��ж���204����188��������188ͬ���� */
        unsigned int  select_204 : 1;  /* bit[1]   : Ӳ���Լ��ж���204����188��������204ͬ���� */
        unsigned int  reserved   : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_TS_TSSYNC_DEBUG1_UNION;
#endif
#define SOC_TS_TSSYNC_DEBUG1_select_188_START  (0)
#define SOC_TS_TSSYNC_DEBUG1_select_188_END    (0)
#define SOC_TS_TSSYNC_DEBUG1_select_204_START  (1)
#define SOC_TS_TSSYNC_DEBUG1_select_204_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_TS_TSSYNC_DEBUG2_UNION
 �ṹ˵��  : TSSYNC_DEBUG2 �Ĵ����ṹ���塣��ַƫ����:0x024����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ԼĴ���2���ڲ�ʹ�ã�(out_188_info)��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  out_sync_off_ins     : 1;  /* bit[0]    : 188ͬ��ģ��ͬ����ʧָʾ�����ź� */
        unsigned int  out_sync_on_ins      : 1;  /* bit[1]    : 188ͬ��ģ��ͬ������ָʾ�����ź� */
        unsigned int  out_valid_ins        : 1;  /* bit[2]    : 188ͬ��ģ��������ڲ�memory����Ч�ź� */
        unsigned int  out_sync_ins         : 1;  /* bit[3]    : 188ͬ��ģ��������ڲ�memory��ͬ���ź� */
        unsigned int  case_cnt0_tsp188_end : 1;  /* bit[4]    : 188ͬ��ģ��byte_count_0������8'd187ָʾ */
        unsigned int  case_cnt0_tsp_end    : 1;  /* bit[5]    : 188ͬ��ģ��byte_count_0������ͬ��ָ������ָʾ */
        unsigned int  state_cur_valid      : 1;  /* bit[6]    : �첽FIFO��188ͬ��ģ�����Ч�ź�״̬ */
        unsigned int  state_cur_sync       : 1;  /* bit[7]    : �첽FIFO��188ͬ��ģ���ͬ���ź�״̬ */
        unsigned int  reserved             : 8;  /* bit[8-15] : ������ */
        unsigned int  byte_count_0         : 8;  /* bit[16-23]: 188ͬ��ģ���Ѵ���һ��TS�����ֽ��� */
        unsigned int  state_cur_data       : 8;  /* bit[24-31]: ��ǰ���첽FIFO����188ͬ��ģ������� */
    } reg;
} SOC_TS_TSSYNC_DEBUG2_UNION;
#endif
#define SOC_TS_TSSYNC_DEBUG2_out_sync_off_ins_START      (0)
#define SOC_TS_TSSYNC_DEBUG2_out_sync_off_ins_END        (0)
#define SOC_TS_TSSYNC_DEBUG2_out_sync_on_ins_START       (1)
#define SOC_TS_TSSYNC_DEBUG2_out_sync_on_ins_END         (1)
#define SOC_TS_TSSYNC_DEBUG2_out_valid_ins_START         (2)
#define SOC_TS_TSSYNC_DEBUG2_out_valid_ins_END           (2)
#define SOC_TS_TSSYNC_DEBUG2_out_sync_ins_START          (3)
#define SOC_TS_TSSYNC_DEBUG2_out_sync_ins_END            (3)
#define SOC_TS_TSSYNC_DEBUG2_case_cnt0_tsp188_end_START  (4)
#define SOC_TS_TSSYNC_DEBUG2_case_cnt0_tsp188_end_END    (4)
#define SOC_TS_TSSYNC_DEBUG2_case_cnt0_tsp_end_START     (5)
#define SOC_TS_TSSYNC_DEBUG2_case_cnt0_tsp_end_END       (5)
#define SOC_TS_TSSYNC_DEBUG2_state_cur_valid_START       (6)
#define SOC_TS_TSSYNC_DEBUG2_state_cur_valid_END         (6)
#define SOC_TS_TSSYNC_DEBUG2_state_cur_sync_START        (7)
#define SOC_TS_TSSYNC_DEBUG2_state_cur_sync_END          (7)
#define SOC_TS_TSSYNC_DEBUG2_byte_count_0_START          (16)
#define SOC_TS_TSSYNC_DEBUG2_byte_count_0_END            (23)
#define SOC_TS_TSSYNC_DEBUG2_state_cur_data_START        (24)
#define SOC_TS_TSSYNC_DEBUG2_state_cur_data_END          (31)


/*****************************************************************************
 �ṹ��    : SOC_TS_TSSYNC_DEBUG3_UNION
 �ṹ˵��  : TSSYNC_DEBUG3 �Ĵ����ṹ���塣��ַƫ����:0x028����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ԼĴ���3���ڲ�ʹ�ã�(out_204_info)��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  out_sync_off_ins     : 1;  /* bit[0]    : 204ͬ��ģ��ͬ����ʧָʾ�����ź� */
        unsigned int  out_sync_on_ins      : 1;  /* bit[1]    : 204ͬ��ģ��ͬ������ָʾ�����ź� */
        unsigned int  out_valid_ins        : 1;  /* bit[2]    : 204ͬ��ģ��������ڲ�memory����Ч�ź� */
        unsigned int  out_sync_ins         : 1;  /* bit[3]    : 204ͬ��ģ��������ڲ�memory��ͬ���ź� */
        unsigned int  case_cnt0_tsp188_end : 1;  /* bit[4]    : 204ͬ��ģ��byte_count_0������8'd187ָʾ */
        unsigned int  case_cnt0_tsp_end    : 1;  /* bit[5]    : 204ͬ��ģ��byte_count_0������ͬ��ָ������ָʾ */
        unsigned int  state_cur_valid      : 1;  /* bit[6]    : �첽FIFO��204ͬ��ģ�����Ч�ź�״̬ */
        unsigned int  state_cur_sync       : 1;  /* bit[7]    : �첽FIFO��204ͬ��ģ���ͬ���ź�״̬ */
        unsigned int  reserved             : 8;  /* bit[8-15] : ������ */
        unsigned int  byte_count_0         : 8;  /* bit[16-23]: 204ͬ��ģ���Ѵ���һ��TS�����ֽ��� */
        unsigned int  state_cur_data       : 8;  /* bit[24-31]: ��ǰ���첽FIFO����204ͬ��ģ������� */
    } reg;
} SOC_TS_TSSYNC_DEBUG3_UNION;
#endif
#define SOC_TS_TSSYNC_DEBUG3_out_sync_off_ins_START      (0)
#define SOC_TS_TSSYNC_DEBUG3_out_sync_off_ins_END        (0)
#define SOC_TS_TSSYNC_DEBUG3_out_sync_on_ins_START       (1)
#define SOC_TS_TSSYNC_DEBUG3_out_sync_on_ins_END         (1)
#define SOC_TS_TSSYNC_DEBUG3_out_valid_ins_START         (2)
#define SOC_TS_TSSYNC_DEBUG3_out_valid_ins_END           (2)
#define SOC_TS_TSSYNC_DEBUG3_out_sync_ins_START          (3)
#define SOC_TS_TSSYNC_DEBUG3_out_sync_ins_END            (3)
#define SOC_TS_TSSYNC_DEBUG3_case_cnt0_tsp188_end_START  (4)
#define SOC_TS_TSSYNC_DEBUG3_case_cnt0_tsp188_end_END    (4)
#define SOC_TS_TSSYNC_DEBUG3_case_cnt0_tsp_end_START     (5)
#define SOC_TS_TSSYNC_DEBUG3_case_cnt0_tsp_end_END       (5)
#define SOC_TS_TSSYNC_DEBUG3_state_cur_valid_START       (6)
#define SOC_TS_TSSYNC_DEBUG3_state_cur_valid_END         (6)
#define SOC_TS_TSSYNC_DEBUG3_state_cur_sync_START        (7)
#define SOC_TS_TSSYNC_DEBUG3_state_cur_sync_END          (7)
#define SOC_TS_TSSYNC_DEBUG3_byte_count_0_START          (16)
#define SOC_TS_TSSYNC_DEBUG3_byte_count_0_END            (23)
#define SOC_TS_TSSYNC_DEBUG3_state_cur_data_START        (24)
#define SOC_TS_TSSYNC_DEBUG3_state_cur_data_END          (31)


/*****************************************************************************
 �ṹ��    : SOC_TS_READ_FIFO_FSM_UNION
 �ṹ˵��  : READ_FIFO_FSM �Ĵ����ṹ���塣��ַƫ����:0x02C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ڲ�FIFO״̬���ĵ�ǰ״̬�����ԼĴ������ڲ�ʹ�ã���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  read_fifo_curr_state : 4;  /* bit[0-3] : ���ڲ�FIFO״̬���ĵ�ǰ״̬�������ϱ仯ʱ˵�������ݽ��գ�����һ��ͣ����0��7��15λ�á� */
        unsigned int  reserved             : 28; /* bit[4-31]: ������ */
    } reg;
} SOC_TS_READ_FIFO_FSM_UNION;
#endif
#define SOC_TS_READ_FIFO_FSM_read_fifo_curr_state_START  (0)
#define SOC_TS_READ_FIFO_FSM_read_fifo_curr_state_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_TS_SYNC_CHECK_FSM_UNION
 �ṹ˵��  : SYNC_CHECK_FSM �Ĵ����ṹ���塣��ַƫ����:0x030����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͬ�����״̬����״̬�����ԼĴ������ڲ�ʹ�ã���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sync_204_curr_state : 4;  /* bit[0-3]  : 204ͬ��ģ��ͬ�����״̬���ĵ�ǰ״̬��
                                                               0x0��WAIT_SYNC��
                                                               0x1~0x7��SYNC_1~SYNC_7��
                                                               0x8��SYNC_ON��
                                                               0x9~0xB��LOSE_SYNC_1~3��
                                                               ��0x8~0xB����Ϊ��ʧ��״̬��
                                                               ������������ */
        unsigned int  reserved_0          : 4;  /* bit[4-7]  : ������ */
        unsigned int  sync_188_curr_state : 4;  /* bit[8-11] : 188ͬ��ģ��ͬ�����״̬���ĵ�ǰ״̬��
                                                               0x0��WAIT_SYNC��
                                                               0x1~0x7��SYNC_1~SYNC_7��
                                                               0x8��SYNC_ON��
                                                               0x9~0xB��LOSE_SYNC_1~3��
                                                               ��0x8~0xB����Ϊ��ʧ��״̬��
                                                               ������������ */
        unsigned int  reserved_1          : 4;  /* bit[12-15]: ������ */
        unsigned int  switch2inf_info     : 3;  /* bit[16-18]: �ڲ�memory�洢�����{clr,full,afull} */
        unsigned int  reserved_2          : 5;  /* bit[19-23]: ������ */
        unsigned int  period_sync_on      : 1;  /* bit[24]   : ͬ������ָʾ��ƽ�ź� */
        unsigned int  reserved_3          : 3;  /* bit[25-27]: ������ */
        unsigned int  period_sync_off     : 1;  /* bit[28]   : ͬ����ʧָʾ��ƽ�ź� */
        unsigned int  reserved_4          : 3;  /* bit[29-31]: ������ */
    } reg;
} SOC_TS_SYNC_CHECK_FSM_UNION;
#endif
#define SOC_TS_SYNC_CHECK_FSM_sync_204_curr_state_START  (0)
#define SOC_TS_SYNC_CHECK_FSM_sync_204_curr_state_END    (3)
#define SOC_TS_SYNC_CHECK_FSM_sync_188_curr_state_START  (8)
#define SOC_TS_SYNC_CHECK_FSM_sync_188_curr_state_END    (11)
#define SOC_TS_SYNC_CHECK_FSM_switch2inf_info_START      (16)
#define SOC_TS_SYNC_CHECK_FSM_switch2inf_info_END        (18)
#define SOC_TS_SYNC_CHECK_FSM_period_sync_on_START       (24)
#define SOC_TS_SYNC_CHECK_FSM_period_sync_on_END         (24)
#define SOC_TS_SYNC_CHECK_FSM_period_sync_off_START      (28)
#define SOC_TS_SYNC_CHECK_FSM_period_sync_off_END        (28)


/*****************************************************************************
 �ṹ��    : SOC_TS_SYNC_CHECK_FLAG_UNION
 �ṹ˵��  : SYNC_CHECK_FLAG �Ĵ����ṹ���塣��ַƫ����:0x034����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͬ���ɹ���־�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  check_204_success : 1;  /* bit[0]   : 204ͬ��ģ��ͬ���ɹ�ָʾ��
                                                            0��204ͬ����ⲻ�ɹ���
                                                            1��204ͬ�����ɹ��� */
        unsigned int  check_188_success : 1;  /* bit[1]   : 188ͬ��ģ��ͬ���ɹ�ָʾ��
                                                            0��188ͬ����ⲻ�ɹ���
                                                            1��188ͬ�����ɹ��� */
        unsigned int  reserved          : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_TS_SYNC_CHECK_FLAG_UNION;
#endif
#define SOC_TS_SYNC_CHECK_FLAG_check_204_success_START  (0)
#define SOC_TS_SYNC_CHECK_FLAG_check_204_success_END    (0)
#define SOC_TS_SYNC_CHECK_FLAG_check_188_success_START  (1)
#define SOC_TS_SYNC_CHECK_FLAG_check_188_success_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_TS_SWITCH_FB_INFO_UNION
 �ṹ˵��  : SWITCH_FB_INFO �Ĵ����ṹ���塣��ַƫ����:0x038����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ�memory�洢״���Ĵ��������ԼĴ������ڲ�ʹ�ã���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dmx_buf_afull : 1;  /* bit[0]   : �ڲ�memory almost full״̬ */
        unsigned int  dmx_buf_full  : 1;  /* bit[1]   : �ڲ�memory full״̬ */
        unsigned int  dmx_buf_clr   : 1;  /* bit[2]   : �ڲ�memory clr״̬ */
        unsigned int  reserved      : 29; /* bit[3-31]: ������ */
    } reg;
} SOC_TS_SWITCH_FB_INFO_UNION;
#endif
#define SOC_TS_SWITCH_FB_INFO_dmx_buf_afull_START  (0)
#define SOC_TS_SWITCH_FB_INFO_dmx_buf_afull_END    (0)
#define SOC_TS_SWITCH_FB_INFO_dmx_buf_full_START   (1)
#define SOC_TS_SWITCH_FB_INFO_dmx_buf_full_END     (1)
#define SOC_TS_SWITCH_FB_INFO_dmx_buf_clr_START    (2)
#define SOC_TS_SWITCH_FB_INFO_dmx_buf_clr_END      (2)


/*****************************************************************************
 �ṹ��    : SOC_TS_DBG_PID_CTRL_UNION
 �ṹ˵��  : DBG_PID_CTRL �Ĵ����ṹ���塣��ַƫ����:0x040����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʶ���������Ĵ�����debugʱʹ�á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sw_pid_detect_clr : 1;  /* bit[0]   : ������ð���ʶ�����״̬����IDLE̬�����ǰ���ѼĴ�İ���ʶ��ֵ */
        unsigned int  reserved          : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_TS_DBG_PID_CTRL_UNION;
#endif
#define SOC_TS_DBG_PID_CTRL_sw_pid_detect_clr_START  (0)
#define SOC_TS_DBG_PID_CTRL_sw_pid_detect_clr_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_TS_DBG_PID0_UNION
 �ṹ˵��  : DBG_PID0 �Ĵ����ṹ���塣��ַƫ����:0x044����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��0�ְ���ʶ�����Ĵ�����debugʱʹ�á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dbg_pid0_value : 13; /* bit[0-12] : ��0�ֱ�ʶ������ֵ */
        unsigned int  reserved_0     : 3;  /* bit[13-15]: ������ */
        unsigned int  dbg_pid0_vld   : 1;  /* bit[16]   : ��0�ְ���ʶ���������� */
        unsigned int  reserved_1     : 7;  /* bit[17-23]: ������ */
        unsigned int  dbg_pid0_cnt   : 8;  /* bit[24-31]: ��0�ְ���ʶ���ļ����� */
    } reg;
} SOC_TS_DBG_PID0_UNION;
#endif
#define SOC_TS_DBG_PID0_dbg_pid0_value_START  (0)
#define SOC_TS_DBG_PID0_dbg_pid0_value_END    (12)
#define SOC_TS_DBG_PID0_dbg_pid0_vld_START    (16)
#define SOC_TS_DBG_PID0_dbg_pid0_vld_END      (16)
#define SOC_TS_DBG_PID0_dbg_pid0_cnt_START    (24)
#define SOC_TS_DBG_PID0_dbg_pid0_cnt_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_TS_DBG_PID1_UNION
 �ṹ˵��  : DBG_PID1 �Ĵ����ṹ���塣��ַƫ����:0x048����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��1�ְ���ʶ�����Ĵ�����debugʱʹ�á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dbg_pid1_value : 13; /* bit[0-12] : ��1�ֱ�ʶ������ֵ */
        unsigned int  reserved_0     : 3;  /* bit[13-15]: ������ */
        unsigned int  dbg_pid1_vld   : 1;  /* bit[16]   : ��1�ְ���ʶ���������� */
        unsigned int  reserved_1     : 7;  /* bit[17-23]: ������ */
        unsigned int  dbg_pid1_cnt   : 8;  /* bit[24-31]: ��1�ְ���ʶ���ļ����� */
    } reg;
} SOC_TS_DBG_PID1_UNION;
#endif
#define SOC_TS_DBG_PID1_dbg_pid1_value_START  (0)
#define SOC_TS_DBG_PID1_dbg_pid1_value_END    (12)
#define SOC_TS_DBG_PID1_dbg_pid1_vld_START    (16)
#define SOC_TS_DBG_PID1_dbg_pid1_vld_END      (16)
#define SOC_TS_DBG_PID1_dbg_pid1_cnt_START    (24)
#define SOC_TS_DBG_PID1_dbg_pid1_cnt_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_TS_DBG_PID2_UNION
 �ṹ˵��  : DBG_PID2 �Ĵ����ṹ���塣��ַƫ����:0x04C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��2�ְ���ʶ�����Ĵ�����debugʱʹ�á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dbg_pid2_value : 13; /* bit[0-12] : ��2�ֱ�ʶ������ֵ */
        unsigned int  reserved_0     : 3;  /* bit[13-15]: ������ */
        unsigned int  dbg_pid2_vld   : 1;  /* bit[16]   : ��2�ְ���ʶ���������� */
        unsigned int  reserved_1     : 7;  /* bit[17-23]: ������ */
        unsigned int  dbg_pid2_cnt   : 8;  /* bit[24-31]: ��2�ְ���ʶ���ļ����� */
    } reg;
} SOC_TS_DBG_PID2_UNION;
#endif
#define SOC_TS_DBG_PID2_dbg_pid2_value_START  (0)
#define SOC_TS_DBG_PID2_dbg_pid2_value_END    (12)
#define SOC_TS_DBG_PID2_dbg_pid2_vld_START    (16)
#define SOC_TS_DBG_PID2_dbg_pid2_vld_END      (16)
#define SOC_TS_DBG_PID2_dbg_pid2_cnt_START    (24)
#define SOC_TS_DBG_PID2_dbg_pid2_cnt_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_TS_DBG_PID3_UNION
 �ṹ˵��  : DBG_PID3 �Ĵ����ṹ���塣��ַƫ����:0x050����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��3�ְ���ʶ�����Ĵ�����debugʱʹ�á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dbg_pid3_value : 13; /* bit[0-12] : ��3�ֱ�ʶ������ֵ */
        unsigned int  reserved_0     : 3;  /* bit[13-15]: ������ */
        unsigned int  dbg_pid3_vld   : 1;  /* bit[16]   : ��3�ְ���ʶ���������� */
        unsigned int  reserved_1     : 7;  /* bit[17-23]: ������ */
        unsigned int  dbg_pid3_cnt   : 8;  /* bit[24-31]: ��3�ְ���ʶ���ļ����� */
    } reg;
} SOC_TS_DBG_PID3_UNION;
#endif
#define SOC_TS_DBG_PID3_dbg_pid3_value_START  (0)
#define SOC_TS_DBG_PID3_dbg_pid3_value_END    (12)
#define SOC_TS_DBG_PID3_dbg_pid3_vld_START    (16)
#define SOC_TS_DBG_PID3_dbg_pid3_vld_END      (16)
#define SOC_TS_DBG_PID3_dbg_pid3_cnt_START    (24)
#define SOC_TS_DBG_PID3_dbg_pid3_cnt_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_TS_DBG_PID4_UNION
 �ṹ˵��  : DBG_PID4 �Ĵ����ṹ���塣��ַƫ����:0x054����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��4�ְ���ʶ�����Ĵ�����debugʱʹ�á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dbg_pid4_value : 13; /* bit[0-12] : ��4�ֱ�ʶ������ֵ */
        unsigned int  reserved_0     : 3;  /* bit[13-15]: ������ */
        unsigned int  dbg_pid4_vld   : 1;  /* bit[16]   : ��4�ְ���ʶ���������� */
        unsigned int  reserved_1     : 7;  /* bit[17-23]: ������ */
        unsigned int  dbg_pid4_cnt   : 8;  /* bit[24-31]: ��4�ְ���ʶ���ļ����� */
    } reg;
} SOC_TS_DBG_PID4_UNION;
#endif
#define SOC_TS_DBG_PID4_dbg_pid4_value_START  (0)
#define SOC_TS_DBG_PID4_dbg_pid4_value_END    (12)
#define SOC_TS_DBG_PID4_dbg_pid4_vld_START    (16)
#define SOC_TS_DBG_PID4_dbg_pid4_vld_END      (16)
#define SOC_TS_DBG_PID4_dbg_pid4_cnt_START    (24)
#define SOC_TS_DBG_PID4_dbg_pid4_cnt_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_TS_DBG_PID5_UNION
 �ṹ˵��  : DBG_PID5 �Ĵ����ṹ���塣��ַƫ����:0x058����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��5�ְ���ʶ�����Ĵ�����debugʱʹ�á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dbg_pid5_value : 13; /* bit[0-12] : ��5�ֱ�ʶ������ֵ */
        unsigned int  reserved_0     : 3;  /* bit[13-15]: ������ */
        unsigned int  dbg_pid5_vld   : 1;  /* bit[16]   : ��5�ְ���ʶ���������� */
        unsigned int  reserved_1     : 7;  /* bit[17-23]: ������ */
        unsigned int  dbg_pid5_cnt   : 8;  /* bit[24-31]: ��5�ְ���ʶ���ļ����� */
    } reg;
} SOC_TS_DBG_PID5_UNION;
#endif
#define SOC_TS_DBG_PID5_dbg_pid5_value_START  (0)
#define SOC_TS_DBG_PID5_dbg_pid5_value_END    (12)
#define SOC_TS_DBG_PID5_dbg_pid5_vld_START    (16)
#define SOC_TS_DBG_PID5_dbg_pid5_vld_END      (16)
#define SOC_TS_DBG_PID5_dbg_pid5_cnt_START    (24)
#define SOC_TS_DBG_PID5_dbg_pid5_cnt_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_TS_DBG_PID6_UNION
 �ṹ˵��  : DBG_PID6 �Ĵ����ṹ���塣��ַƫ����:0x05C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��6�ְ���ʶ�����Ĵ�����debugʱʹ�á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dbg_pid6_value : 13; /* bit[0-12] : ��6�ֱ�ʶ������ֵ */
        unsigned int  reserved_0     : 3;  /* bit[13-15]: ������ */
        unsigned int  dbg_pid6_vld   : 1;  /* bit[16]   : ��6�ְ���ʶ���������� */
        unsigned int  reserved_1     : 7;  /* bit[17-23]: ������ */
        unsigned int  dbg_pid6_cnt   : 8;  /* bit[24-31]: ��6�ְ���ʶ���ļ����� */
    } reg;
} SOC_TS_DBG_PID6_UNION;
#endif
#define SOC_TS_DBG_PID6_dbg_pid6_value_START  (0)
#define SOC_TS_DBG_PID6_dbg_pid6_value_END    (12)
#define SOC_TS_DBG_PID6_dbg_pid6_vld_START    (16)
#define SOC_TS_DBG_PID6_dbg_pid6_vld_END      (16)
#define SOC_TS_DBG_PID6_dbg_pid6_cnt_START    (24)
#define SOC_TS_DBG_PID6_dbg_pid6_cnt_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_TS_DBG_PID7_UNION
 �ṹ˵��  : DBG_PID7 �Ĵ����ṹ���塣��ַƫ����:0x060����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��7�ְ���ʶ�����Ĵ�����debugʱʹ�á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dbg_pid7_value : 13; /* bit[0-12] : ��7�ֱ�ʶ������ֵ */
        unsigned int  reserved_0     : 3;  /* bit[13-15]: ������ */
        unsigned int  dbg_pid7_vld   : 1;  /* bit[16]   : ��7�ְ���ʶ���������� */
        unsigned int  reserved_1     : 7;  /* bit[17-23]: ������ */
        unsigned int  dbg_pid7_cnt   : 8;  /* bit[24-31]: ��7�ְ���ʶ���ļ����� */
    } reg;
} SOC_TS_DBG_PID7_UNION;
#endif
#define SOC_TS_DBG_PID7_dbg_pid7_value_START  (0)
#define SOC_TS_DBG_PID7_dbg_pid7_value_END    (12)
#define SOC_TS_DBG_PID7_dbg_pid7_vld_START    (16)
#define SOC_TS_DBG_PID7_dbg_pid7_vld_END      (16)
#define SOC_TS_DBG_PID7_dbg_pid7_cnt_START    (24)
#define SOC_TS_DBG_PID7_dbg_pid7_cnt_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_TS_SYNC_LEN_UNION
 �ṹ˵��  : SYNC_LEN �Ĵ����ṹ���塣��ַƫ����:0x064����ֵ:0x0000CCBC�����:32
 �Ĵ���˵��: ͬ��ָ���������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sw_188_tsp_len : 8;  /* bit[0-7]  : 188ͬ��ָ����������ֵ��nosyncģʽ��ʹ�� */
        unsigned int  sw_204_tsp_len : 8;  /* bit[8-15] : 204ͬ��ָ����������ֵ��nosyncģʽ��ʹ�� */
        unsigned int  reserved       : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_TS_SYNC_LEN_UNION;
#endif
#define SOC_TS_SYNC_LEN_sw_188_tsp_len_START  (0)
#define SOC_TS_SYNC_LEN_sw_188_tsp_len_END    (7)
#define SOC_TS_SYNC_LEN_sw_204_tsp_len_START  (8)
#define SOC_TS_SYNC_LEN_sw_204_tsp_len_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_TS_SYNC_CLR_TH_UNION
 �ṹ˵��  : SYNC_CLR_TH �Ĵ����ṹ���塣��ַƫ����:0x068����ֵ:0x0000000A�����:32
 �Ĵ���˵��: ����nosyncģʽ��ͬ���������м��������ü�����ÿ256byte��1���������ֵ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sw_nosync_clrth : 4;  /* bit[0-3] : ����nosyncģʽ��ͬ���������м��������ü�����ÿ256byte��1���������ֵ��Ҳ�Ǵ���ת��״̬����BIT_X�����ת������ */
        unsigned int  reserved        : 28; /* bit[4-31]: ������ */
    } reg;
} SOC_TS_SYNC_CLR_TH_UNION;
#endif
#define SOC_TS_SYNC_CLR_TH_sw_nosync_clrth_START  (0)
#define SOC_TS_SYNC_CLR_TH_sw_nosync_clrth_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_TS_DBG_CNT_SEL_UNION
 �ṹ˵��  : DBG_CNT_SEL �Ĵ����ṹ���塣��ַƫ����:0x06C����ֵ:0xFFFFFF00�����:32
 �Ĵ���˵��: �Ѵ������������������ź�ѡ��Ĵ���������debug TS�����ʣ������һ��ʱ���ڽ����˶�����������������ͳ����cnt_sig[255:0]�б�ѡ�����ڴ������źŴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sw_cnt_sel0 : 8;  /* bit[0-7]  : ѡ��cnt_sig[255:0]�и�ֵ����Ӧbit���ź���Ϊcnt0��������������
                                                       ����cnt_sig[255:0]��ʵ����Ч��ֻ�����5bit��{cnt_o_timer_clr,unify2fifo_sync,unify2fifo_valid,inf2parse_sync,inf2parse_valid}�������ֵΪ255ʱѡ���λ�ź�carry_low0��254ʱ����cnt0������� */
        unsigned int  sw_cnt_sel1 : 8;  /* bit[8-15] : ѡ��cnt_sig[255:0]�и�ֵ����Ӧbit���ź���Ϊcnt1��������������
                                                       ����cnt_sig[255:0]��ʵ����Ч��ֻ�����5bit��{cnt_o_timer_clr,unify2fifo_sync,unify2fifo_valid,inf2parse_sync,inf2parse_valid}�������ֵΪ255ʱѡ���λ�ź�carry_low1��254ʱ����cnt1������� */
        unsigned int  sw_cnt_sel2 : 8;  /* bit[16-23]: ѡ��cnt_sig[255:0]�и�ֵ����Ӧbit���ź���Ϊcnt2��������������
                                                       ����cnt_sig[255:0]��ʵ����Ч��ֻ�����5bit��{cnt_o_timer_clr,unify2fifo_sync,unify2fifo_valid,inf2parse_sync,inf2parse_valid}�������ֵΪ255ʱѡ���λ�ź�carry_low2��254ʱ����cnt2������� */
        unsigned int  sw_cnt_sel3 : 8;  /* bit[24-31]: ѡ��cnt_sig[255:0]�и�ֵ����Ӧbit���ź���Ϊcnt3��������������
                                                       ����cnt_sig[255:0]��ʵ����Ч��ֻ�����5bit��{cnt_o_timer_clr,unify2fifo_sync,unify2fifo_valid,inf2parse_sync,inf2parse_valid}�������ֵΪ255ʱѡ���λ�ź�carry_low3��254ʱ����cnt3������� */
    } reg;
} SOC_TS_DBG_CNT_SEL_UNION;
#endif
#define SOC_TS_DBG_CNT_SEL_sw_cnt_sel0_START  (0)
#define SOC_TS_DBG_CNT_SEL_sw_cnt_sel0_END    (7)
#define SOC_TS_DBG_CNT_SEL_sw_cnt_sel1_START  (8)
#define SOC_TS_DBG_CNT_SEL_sw_cnt_sel1_END    (15)
#define SOC_TS_DBG_CNT_SEL_sw_cnt_sel2_START  (16)
#define SOC_TS_DBG_CNT_SEL_sw_cnt_sel2_END    (23)
#define SOC_TS_DBG_CNT_SEL_sw_cnt_sel3_START  (24)
#define SOC_TS_DBG_CNT_SEL_sw_cnt_sel3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TS_DBG_TIMERCFG_UNION
 �ṹ˵��  : DBG_TIMERCFG �Ĵ����ṹ���塣��ַƫ����:0x070����ֵ:0x0CC16180�����:32
 �Ĵ���˵��: �Ѵ�������������������ֵ����ʱ�������üĴ���������debug TS�����ʡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sw_timer_cfg : 32; /* bit[0-31]: ����������ֵ����ʱ�������üĴ��� */
    } reg;
} SOC_TS_DBG_TIMERCFG_UNION;
#endif
#define SOC_TS_DBG_TIMERCFG_sw_timer_cfg_START  (0)
#define SOC_TS_DBG_TIMERCFG_sw_timer_cfg_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TS_DBG_RD_CNT_UNION
 �ṹ˵��  : DBG_RD_CNT �Ĵ����ṹ���塣��ַƫ����:0x074����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ǰ�Ѵ���������������������debug TS�����ʡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cnt_o_value : 32; /* bit[0-31]: ����{cnt3,cnt2,cnt1,cnt0}�����ĸ��������ϲ����ɣ�cnt0����cnt1��λ��cnt1����cnt2��λ��cnt2����cnt3��λ */
    } reg;
} SOC_TS_DBG_RD_CNT_UNION;
#endif
#define SOC_TS_DBG_RD_CNT_cnt_o_value_START  (0)
#define SOC_TS_DBG_RD_CNT_cnt_o_value_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TS_DBG_RD_TIMER_UNION
 �ṹ˵��  : DBG_RD_TIMER �Ĵ����ṹ���塣��ַƫ����:0x078����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ǰʱ��ֵ�Ĵ���������debug TS�����ʡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cnt_o_timer : 32; /* bit[0-31]: ��sw_timer_cfg��ʼÿ�����ڼ�1 */
    } reg;
} SOC_TS_DBG_RD_TIMER_UNION;
#endif
#define SOC_TS_DBG_RD_TIMER_cnt_o_timer_START  (0)
#define SOC_TS_DBG_RD_TIMER_cnt_o_timer_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TS_DBG_RD_SAMPLE_UNION
 �ṹ˵��  : DBG_RD_SAMPLE �Ĵ����ṹ���塣��ַƫ����:0x07C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �Ѵ�������������������ֵ����������ֵ������debug TS�����ʡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cnt_o_sample : 32; /* bit[0-31]: ��sw_timer_cfg��ʼÿ�����ڼ�1��������0ʱ����{cnt3,cnt2,cnt1,cnt0}�Ĵ� */
    } reg;
} SOC_TS_DBG_RD_SAMPLE_UNION;
#endif
#define SOC_TS_DBG_RD_SAMPLE_cnt_o_sample_START  (0)
#define SOC_TS_DBG_RD_SAMPLE_cnt_o_sample_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TS_DBG_UNIFY_0_UNION
 �ṹ˵��  : DBG_UNIFY_0 �Ĵ����ṹ���塣��ַƫ����:0x080����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����������ͬ��ʧ��ָʾ����ؼ����Ĵ���������debug��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  c_s_cntb                  : 8;  /* bit[0-7]  : ����nosync����ģʽ��������Ч�ֽ��������� */
        unsigned int  c_s_cntp                  : 4;  /* bit[8-11] : ����nosync����ģʽ������256���ֽڵĸ�����������case_serial_2step����Ὣ������ */
        unsigned int  dbg_cnt_clr               : 4;  /* bit[12-15]: ����nosync����ģʽ��ͬ������ǰcase_serial_2step������������� */
        unsigned int  dbg_cnt_serial_in_valid   : 5;  /* bit[16-20]: ����������valid�ź�Ϊ�߸�����������sync�źŻὫ������ */
        unsigned int  reserved_0                : 3;  /* bit[21-23]: ������ */
        unsigned int  dbg_serial_nosync_failure : 1;  /* bit[24]   : ����nosync����ģʽ��ͬ��ʧ��ָʾ */
        unsigned int  reserved_1                : 7;  /* bit[25-31]: ������ */
    } reg;
} SOC_TS_DBG_UNIFY_0_UNION;
#endif
#define SOC_TS_DBG_UNIFY_0_c_s_cntb_START                   (0)
#define SOC_TS_DBG_UNIFY_0_c_s_cntb_END                     (7)
#define SOC_TS_DBG_UNIFY_0_c_s_cntp_START                   (8)
#define SOC_TS_DBG_UNIFY_0_c_s_cntp_END                     (11)
#define SOC_TS_DBG_UNIFY_0_dbg_cnt_clr_START                (12)
#define SOC_TS_DBG_UNIFY_0_dbg_cnt_clr_END                  (15)
#define SOC_TS_DBG_UNIFY_0_dbg_cnt_serial_in_valid_START    (16)
#define SOC_TS_DBG_UNIFY_0_dbg_cnt_serial_in_valid_END      (20)
#define SOC_TS_DBG_UNIFY_0_dbg_serial_nosync_failure_START  (24)
#define SOC_TS_DBG_UNIFY_0_dbg_serial_nosync_failure_END    (24)


/*****************************************************************************
 �ṹ��    : SOC_TS_DBG_UNIFY_1_UNION
 �ṹ˵��  : DBG_UNIFY_1 �Ĵ����ṹ���塣��ַƫ����:0x084����ֵ:0x00000000�����:32
 �Ĵ���˵��: TS�˿�ģʽ������źżĴ���������debug��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  c_port_mode          : 16; /* bit[0-15] : TS�˿�ģʽ��������DMX_INF�Ĵ����в����źŵ���ϣ�{sw_serial_syncbit[1:0],sw_serial_lsb_1st,sw_47_replace,sw_serial_nosync,sw_serial_2bit_rev,sw_serial_2bit,sw_port_open,sw_bit_sel,sw_serial_in,sw_pol_err,sw_pol_vld,sw_pol_sync,sw_err_bypass,sw_sync_mode} */
        unsigned int  port_datapassed_flag : 1;  /* bit[16]   : TS�˿���������ͨ����ǣ�
                                                                ����sync/burst����ģʽ����syncΪ�ߺ���1������ģʽ�½⸴λ�����1 */
        unsigned int  cerr_n               : 1;  /* bit[17]   : TS�˿������err�ź� */
        unsigned int  reserved             : 14; /* bit[18-31]: ������ */
    } reg;
} SOC_TS_DBG_UNIFY_1_UNION;
#endif
#define SOC_TS_DBG_UNIFY_1_c_port_mode_START           (0)
#define SOC_TS_DBG_UNIFY_1_c_port_mode_END             (15)
#define SOC_TS_DBG_UNIFY_1_port_datapassed_flag_START  (16)
#define SOC_TS_DBG_UNIFY_1_port_datapassed_flag_END    (16)
#define SOC_TS_DBG_UNIFY_1_cerr_n_START                (17)
#define SOC_TS_DBG_UNIFY_1_cerr_n_END                  (17)


/*****************************************************************************
 �ṹ��    : SOC_TS_INTR_RAW_UNION
 �ṹ˵��  : INTR_RAW �Ĵ����ṹ���塣��ַƫ����:0x100����ֵ:0x00000000�����:32
 �Ĵ���˵��: TSԭʼ�жϼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ts_sync_on_raw       : 1;  /* bit[0]   : nosyncģʽ��TSͬ������ԭʼ�жϣ�
                                                               0����ԭʼ�ж�
                                                               1����ԭʼ�ж� */
        unsigned int  ts_sync_off_raw      : 1;  /* bit[1]   : nosyncģʽ��TSͬ����ʧԭʼ�жϣ�
                                                               0����ԭʼ�ж�
                                                               1����ԭʼ�ж� */
        unsigned int  ts_rx_intr_raw       : 1;  /* bit[2]   : �ڲ�meory�����ݸ�����ֵԭʼ�жϣ�
                                                               0����ԭʼ�ж�
                                                               1����ԭʼ�ж� */
        unsigned int  ts_mem_over_raw      : 1;  /* bit[3]   : �ڲ�memory���ԭʼ�жϣ�
                                                               0����ԭʼ�ж�
                                                               1����ԭʼ�ж� */
        unsigned int  p_close_cnt_ceil_raw : 1;  /* bit[4]   : TS�˿ڹرպ�ʱ���������ﵽreq_ref_memwr_valueʱԭʼ�жϣ�
                                                               0����ԭʼ�ж�
                                                               1����ԭʼ�ж� */
        unsigned int  m_no_wr_cnt_ceil_raw : 1;  /* bit[5]   : ���ڲ�memory��д����ʱ���������ﵽreq_ref_port_valueʱԭʼ�жϣ�
                                                               0����ԭʼ�ж�
                                                               1����ԭʼ�ж� */
        unsigned int  ts_inf2mem_err_raw   : 1;  /* bit[6]   : ��TS��Ϊ�����ԭʼ�жϣ�
                                                               0����ԭʼ�ж�
                                                               1����ԭʼ�ж� */
        unsigned int  reserved             : 25; /* bit[7-31]: ������ */
    } reg;
} SOC_TS_INTR_RAW_UNION;
#endif
#define SOC_TS_INTR_RAW_ts_sync_on_raw_START        (0)
#define SOC_TS_INTR_RAW_ts_sync_on_raw_END          (0)
#define SOC_TS_INTR_RAW_ts_sync_off_raw_START       (1)
#define SOC_TS_INTR_RAW_ts_sync_off_raw_END         (1)
#define SOC_TS_INTR_RAW_ts_rx_intr_raw_START        (2)
#define SOC_TS_INTR_RAW_ts_rx_intr_raw_END          (2)
#define SOC_TS_INTR_RAW_ts_mem_over_raw_START       (3)
#define SOC_TS_INTR_RAW_ts_mem_over_raw_END         (3)
#define SOC_TS_INTR_RAW_p_close_cnt_ceil_raw_START  (4)
#define SOC_TS_INTR_RAW_p_close_cnt_ceil_raw_END    (4)
#define SOC_TS_INTR_RAW_m_no_wr_cnt_ceil_raw_START  (5)
#define SOC_TS_INTR_RAW_m_no_wr_cnt_ceil_raw_END    (5)
#define SOC_TS_INTR_RAW_ts_inf2mem_err_raw_START    (6)
#define SOC_TS_INTR_RAW_ts_inf2mem_err_raw_END      (6)


/*****************************************************************************
 �ṹ��    : SOC_TS_INTR_MASK_UNION
 �ṹ˵��  : INTR_MASK �Ĵ����ṹ���塣��ַƫ����:0x104����ֵ:0x00000000�����:32
 �Ĵ���˵��: TS�ж��������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ts_sync_on_mask       : 1;  /* bit[0]   : nosyncģʽ��TSͬ�������ж����Σ�
                                                                0����ֹ�ж��ϱ�
                                                                1�������ж��ϱ� */
        unsigned int  ts_sync_off_mask      : 1;  /* bit[1]   : nosyncģʽ��TSͬ����ʧ�ж����Σ�
                                                                0����ֹ�ж��ϱ�
                                                                1�������ж��ϱ� */
        unsigned int  ts_rx_intr_mask       : 1;  /* bit[2]   : �ڲ�meory�����ݸ�����ֵ�ж����Σ�
                                                                0����ֹ�ж��ϱ�
                                                                1�������ж��ϱ� */
        unsigned int  ts_mem_over_mask      : 1;  /* bit[3]   : �ڲ�memory����ж��������ã�
                                                                0����ֹ�ж��ϱ�
                                                                1�������ж��ϱ� */
        unsigned int  p_close_cnt_ceil_mask : 1;  /* bit[4]   : TS�˿ڹرպ�ʱ���������ﵽreq_ref_memwr_valueʱ�ж����Σ�
                                                                0����ֹ�ж��ϱ�
                                                                1�������ж��ϱ� */
        unsigned int  m_no_wr_cnt_ceil_mask : 1;  /* bit[5]   : ���ڲ�memory��д����ʱ���������ﵽreq_ref_port_valueʱ�ж����Σ�
                                                                0����ֹ�ж��ϱ�
                                                                1�������ж��ϱ� */
        unsigned int  ts_inf2mem_err_mask   : 1;  /* bit[6]   : ��TS��Ϊ������ж��������ã�
                                                                0����ֹ�ж��ϱ�
                                                                1�������ж��ϱ� */
        unsigned int  reserved              : 25; /* bit[7-31]: ������ */
    } reg;
} SOC_TS_INTR_MASK_UNION;
#endif
#define SOC_TS_INTR_MASK_ts_sync_on_mask_START        (0)
#define SOC_TS_INTR_MASK_ts_sync_on_mask_END          (0)
#define SOC_TS_INTR_MASK_ts_sync_off_mask_START       (1)
#define SOC_TS_INTR_MASK_ts_sync_off_mask_END         (1)
#define SOC_TS_INTR_MASK_ts_rx_intr_mask_START        (2)
#define SOC_TS_INTR_MASK_ts_rx_intr_mask_END          (2)
#define SOC_TS_INTR_MASK_ts_mem_over_mask_START       (3)
#define SOC_TS_INTR_MASK_ts_mem_over_mask_END         (3)
#define SOC_TS_INTR_MASK_p_close_cnt_ceil_mask_START  (4)
#define SOC_TS_INTR_MASK_p_close_cnt_ceil_mask_END    (4)
#define SOC_TS_INTR_MASK_m_no_wr_cnt_ceil_mask_START  (5)
#define SOC_TS_INTR_MASK_m_no_wr_cnt_ceil_mask_END    (5)
#define SOC_TS_INTR_MASK_ts_inf2mem_err_mask_START    (6)
#define SOC_TS_INTR_MASK_ts_inf2mem_err_mask_END      (6)


/*****************************************************************************
 �ṹ��    : SOC_TS_INTR_STATUS_UNION
 �ṹ˵��  : INTR_STATUS �Ĵ����ṹ���塣��ַƫ����:0x108����ֵ:0x00000000�����:32
 �Ĵ���˵��: TS���κ��ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ts_sync_on_status       : 1;  /* bit[0]   : nosyncģʽ��TSͬ���������κ��ж�״̬��
                                                                  0�������κ��ж�
                                                                  1�������κ��ж� */
        unsigned int  ts_sync_off_status      : 1;  /* bit[1]   : nosyncģʽ��TSͬ����ʧ���κ��ж�״̬��
                                                                  0�������κ��ж�
                                                                  1�������κ��ж� */
        unsigned int  ts_rx_intr_status       : 1;  /* bit[2]   : �ڲ�meory�����ݸ�����ֵ���κ��ж�״̬��
                                                                  0�������κ��ж�
                                                                  1�������κ��ж� */
        unsigned int  ts_mem_over_status      : 1;  /* bit[3]   : �ڲ�memory������κ��ж�״̬��
                                                                  0�������κ��ж�
                                                                  1�������κ��ж� */
        unsigned int  p_close_cnt_ceil_status : 1;  /* bit[4]   : TS�˿ڹرպ�ʱ���������ﵽreq_ref_memwr_valueʱ���κ��ж�״̬��
                                                                  0�������κ��ж�
                                                                  1�������κ��ж� */
        unsigned int  m_no_wr_cnt_ceil_status : 1;  /* bit[5]   : ���ڲ�memory��д����ʱ���������ﵽreq_ref_port_valueʱ���κ��ж�״̬��
                                                                  0�������κ��ж�
                                                                  1�������κ��ж� */
        unsigned int  ts_inf2mem_err_status   : 1;  /* bit[6]   : ��TS��Ϊ��������κ��ж�״̬��
                                                                  0�������κ��ж�
                                                                  1�������κ��ж� */
        unsigned int  reserved                : 25; /* bit[7-31]: ������ */
    } reg;
} SOC_TS_INTR_STATUS_UNION;
#endif
#define SOC_TS_INTR_STATUS_ts_sync_on_status_START        (0)
#define SOC_TS_INTR_STATUS_ts_sync_on_status_END          (0)
#define SOC_TS_INTR_STATUS_ts_sync_off_status_START       (1)
#define SOC_TS_INTR_STATUS_ts_sync_off_status_END         (1)
#define SOC_TS_INTR_STATUS_ts_rx_intr_status_START        (2)
#define SOC_TS_INTR_STATUS_ts_rx_intr_status_END          (2)
#define SOC_TS_INTR_STATUS_ts_mem_over_status_START       (3)
#define SOC_TS_INTR_STATUS_ts_mem_over_status_END         (3)
#define SOC_TS_INTR_STATUS_p_close_cnt_ceil_status_START  (4)
#define SOC_TS_INTR_STATUS_p_close_cnt_ceil_status_END    (4)
#define SOC_TS_INTR_STATUS_m_no_wr_cnt_ceil_status_START  (5)
#define SOC_TS_INTR_STATUS_m_no_wr_cnt_ceil_status_END    (5)
#define SOC_TS_INTR_STATUS_ts_inf2mem_err_status_START    (6)
#define SOC_TS_INTR_STATUS_ts_inf2mem_err_status_END      (6)


/*****************************************************************************
 �ṹ��    : SOC_TS_INTR_CLR_UNION
 �ṹ˵��  : INTR_CLR �Ĵ����ṹ���塣��ַƫ����:0x10C����ֵ:0x00000000�����:32
 �Ĵ���˵��: TS�ж�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ts_sync_on_clr       : 1;  /* bit[0]   : nosyncģʽ��TSͬ���������κ��ж������д1�����д0���� */
        unsigned int  ts_sync_off_clr      : 1;  /* bit[1]   : nosyncģʽ��TSͬ����ʧ���κ��ж������д1�����д0���� */
        unsigned int  ts_rx_intr_clr       : 1;  /* bit[2]   : �ڲ�meory�����ݸ�����ֵ�ж������д1�����д0���� */
        unsigned int  ts_mem_over_clr      : 1;  /* bit[3]   : �ڲ�memory����ж������д1�����д0���� */
        unsigned int  p_close_cnt_ceil_clr : 1;  /* bit[4]   : TS�˿ڹرպ�ʱ���������ﵽreq_ref_memwr_value�ж������д1�����д0���� */
        unsigned int  m_no_wr_cnt_ceil_clr : 1;  /* bit[5]   : ���ڲ�memory��д����ʱ���������ﵽreq_ref_port_valueʱ�ж������д1�����д0���� */
        unsigned int  ts_inf2mem_err_clr   : 1;  /* bit[6]   : ��TS��Ϊ������ж������д1�����д0���� */
        unsigned int  reserved             : 25; /* bit[7-31]: ������ */
    } reg;
} SOC_TS_INTR_CLR_UNION;
#endif
#define SOC_TS_INTR_CLR_ts_sync_on_clr_START        (0)
#define SOC_TS_INTR_CLR_ts_sync_on_clr_END          (0)
#define SOC_TS_INTR_CLR_ts_sync_off_clr_START       (1)
#define SOC_TS_INTR_CLR_ts_sync_off_clr_END         (1)
#define SOC_TS_INTR_CLR_ts_rx_intr_clr_START        (2)
#define SOC_TS_INTR_CLR_ts_rx_intr_clr_END          (2)
#define SOC_TS_INTR_CLR_ts_mem_over_clr_START       (3)
#define SOC_TS_INTR_CLR_ts_mem_over_clr_END         (3)
#define SOC_TS_INTR_CLR_p_close_cnt_ceil_clr_START  (4)
#define SOC_TS_INTR_CLR_p_close_cnt_ceil_clr_END    (4)
#define SOC_TS_INTR_CLR_m_no_wr_cnt_ceil_clr_START  (5)
#define SOC_TS_INTR_CLR_m_no_wr_cnt_ceil_clr_END    (5)
#define SOC_TS_INTR_CLR_ts_inf2mem_err_clr_START    (6)
#define SOC_TS_INTR_CLR_ts_inf2mem_err_clr_END      (6)


/*****************************************************************************
 �ṹ��    : SOC_TS_CLK_INV_SEL_UNION
 �ṹ˵��  : CLK_INV_SEL �Ĵ����ṹ���塣��ַƫ����:0x110����ֵ:0x00000000�����:32
 �Ĵ���˵��: TS�˿�ʱ�ӷ���ѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ts_clk_inv_sel : 1;  /* bit[0]   : TS�˿�ʱ�ӷ���ѡ��Ĵ�����
                                                         0��������
                                                         1������ */
        unsigned int  reserved       : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_TS_CLK_INV_SEL_UNION;
#endif
#define SOC_TS_CLK_INV_SEL_ts_clk_inv_sel_START  (0)
#define SOC_TS_CLK_INV_SEL_ts_clk_inv_sel_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_TS_DATA_MV_CTRL_UNION
 �ṹ˵��  : DATA_MV_CTRL �Ĵ����ṹ���塣��ַƫ����:0x114����ֵ:0x00000002�����:32
 �Ĵ���˵��: ���ݰ�����ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  data_with_sync_err : 1;  /* bit[0]   : ��������Ƿ����TS��·�ź�sync��err��
                                                             0������sync��err
                                                             1������sync��err */
        unsigned int  data_mv_by_dma     : 1;  /* bit[1]   : ���ݰ�������DMA����CPU�����
                                                             0����CPU���
                                                             1����DMA��� */
        unsigned int  reserved           : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_TS_DATA_MV_CTRL_UNION;
#endif
#define SOC_TS_DATA_MV_CTRL_data_with_sync_err_START  (0)
#define SOC_TS_DATA_MV_CTRL_data_with_sync_err_END    (0)
#define SOC_TS_DATA_MV_CTRL_data_mv_by_dma_START      (1)
#define SOC_TS_DATA_MV_CTRL_data_mv_by_dma_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_TS_MEM_THRESHOLD_UNION
 �ṹ˵��  : MEM_THRESHOLD �Ĵ����ṹ���塣��ַƫ����:0x118����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ�memory��ֵ���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ts_mem_threshold : 16; /* bit[0-15] : �ڲ�memory��ֵ���üĴ��� */
        unsigned int  reserved         : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_TS_MEM_THRESHOLD_UNION;
#endif
#define SOC_TS_MEM_THRESHOLD_ts_mem_threshold_START  (0)
#define SOC_TS_MEM_THRESHOLD_ts_mem_threshold_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_TS_MEM_COUNT_UNION
 �ṹ˵��  : MEM_COUNT �Ĵ����ṹ���塣��ַƫ����:0x11C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ�memory����������С��ʾ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ts_mem_count : 16; /* bit[0-15] : �ڲ�memory����������С��ʾ�Ĵ��� */
        unsigned int  reserved     : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_TS_MEM_COUNT_UNION;
#endif
#define SOC_TS_MEM_COUNT_ts_mem_count_START  (0)
#define SOC_TS_MEM_COUNT_ts_mem_count_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_TS_LAST_INVALID_COUNT_UNION
 �ṹ˵��  : LAST_INVALID_COUNT �Ĵ����ṹ���塣��ַƫ����:0x120����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���һ�ΰ�����Ч����������10bitΪ��λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ts_last_invalid_count : 5;  /* bit[0-4] : ���һ�ΰ�����Ч����������10bitΪ��λ */
        unsigned int  reserved              : 27; /* bit[5-31]: ������ */
    } reg;
} SOC_TS_LAST_INVALID_COUNT_UNION;
#endif
#define SOC_TS_LAST_INVALID_COUNT_ts_last_invalid_count_START  (0)
#define SOC_TS_LAST_INVALID_COUNT_ts_last_invalid_count_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_TS_CLK_GT_TIMEOUT_VALUE_UNION
 �ṹ˵��  : CLK_GT_TIMEOUT_VALUE �Ĵ����ṹ���塣��ַƫ����:0x124����ֵ:0x00000040�����:32
 �Ĵ���˵��: TS�˿ڹرպ�����ʱ���ſص���ʱ�����ڸ������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ts_clk_gt_timeout_value : 12; /* bit[0-11] : TS�˿ڹرպ���ʱ������һ����������ʼ����(�˿ڴ򿪺��0���Ƶ�ts_clk_gt_timeout_value�󱣳�)����������ts_clk_gt_timeout_valueʱ������ڲ�memory��û�����ݣ���ôʱ���ſ������ź�busy_condition_meet��0�� */
        unsigned int  reserved                : 20; /* bit[12-31]: ������ */
    } reg;
} SOC_TS_CLK_GT_TIMEOUT_VALUE_UNION;
#endif
#define SOC_TS_CLK_GT_TIMEOUT_VALUE_ts_clk_gt_timeout_value_START  (0)
#define SOC_TS_CLK_GT_TIMEOUT_VALUE_ts_clk_gt_timeout_value_END    (11)


/*****************************************************************************
 �ṹ��    : SOC_TS_LAST_REQ_CTRL_UNION
 �ṹ˵��  : LAST_REQ_CTRL �Ĵ����ṹ���塣��ַƫ����:0x128����ֵ:0x00400040�����:32
 �Ĵ���˵��: ���һ�ΰ���������ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  req_ref_memwr_value : 12; /* bit[0-11] : û�ж��ڲ�memory����д��������ʱ������һ����������ʼ����(��Щ������0���Ƶ�req_ref_memwr_value�󱣳�)����������req_ref_memwr_valueʱ������ڲ�memory���������Ҳ���ˮ�ߣ�����DMA�������� */
        unsigned int  reserved_0          : 4;  /* bit[12-15]: ������ */
        unsigned int  req_ref_port_value  : 12; /* bit[16-27]: TS�˿ڹرպ���ʱ������һ����������ʼ����(�˿ڴ򿪺��0���Ƶ�req_ref_port_value�󱣳�)����������req_ref_port_valueʱ������ڲ�memory���������Ҳ���ˮ�ߣ�����DMA�������� */
        unsigned int  req_ref_port_close  : 1;  /* bit[28]   : 0����req_ref_memwr_value��ʱ��û�ж��ڲ�memory����д������Ϊ����DMA�������������
                                                               1����TS�˿ڹرպ�req_ref_port_value��ʱ����Ϊ����DMA������������� */
        unsigned int  reserved_1          : 3;  /* bit[29-31]: ������ */
    } reg;
} SOC_TS_LAST_REQ_CTRL_UNION;
#endif
#define SOC_TS_LAST_REQ_CTRL_req_ref_memwr_value_START  (0)
#define SOC_TS_LAST_REQ_CTRL_req_ref_memwr_value_END    (11)
#define SOC_TS_LAST_REQ_CTRL_req_ref_port_value_START   (16)
#define SOC_TS_LAST_REQ_CTRL_req_ref_port_value_END     (27)
#define SOC_TS_LAST_REQ_CTRL_req_ref_port_close_START   (28)
#define SOC_TS_LAST_REQ_CTRL_req_ref_port_close_END     (28)


/*****************************************************************************
 �ṹ��    : SOC_TS_LAST_INVALID_DATA_UNION
 �ṹ˵��  : LAST_INVALID_DATA �Ĵ����ṹ���塣��ַƫ����:0x12C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���һ�ΰ����������Ч����ֵ���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ts_last_invalid_data : 10; /* bit[0-9]  : ���һ�ΰ����������Ч����ֵ���üĴ��� */
        unsigned int  reserved             : 22; /* bit[10-31]: ������ */
    } reg;
} SOC_TS_LAST_INVALID_DATA_UNION;
#endif
#define SOC_TS_LAST_INVALID_DATA_ts_last_invalid_data_START  (0)
#define SOC_TS_LAST_INVALID_DATA_ts_last_invalid_data_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_TS_MEM_DISABLE_UNION
 �ṹ˵��  : MEM_DISABLE �Ĵ����ṹ���塣��ַƫ����:0x130����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ�memory��������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ts_mem_disable : 1;  /* bit[0]   : д1����ڲ�memory���ݺ���д0 */
        unsigned int  reserved       : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_TS_MEM_DISABLE_UNION;
#endif
#define SOC_TS_MEM_DISABLE_ts_mem_disable_START  (0)
#define SOC_TS_MEM_DISABLE_ts_mem_disable_END    (0)






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

#endif /* end of soc_ts_interface.h */
