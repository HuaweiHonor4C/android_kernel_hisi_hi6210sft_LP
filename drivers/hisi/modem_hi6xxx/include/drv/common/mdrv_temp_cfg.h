/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : drv_temp_cfg.h
  �� �� ��   : ����
  ��    ��   : ����l00217270
  ��������   : 2013��5��6��
  ����޸�   :
  ��������   : drv_temp_cfg.h ��ͷ�ļ�,����DDR�����ڴ����ݽṹ
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2013��5��6��
    ��    ��   : ����l00217270
    �޸�����   : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#ifndef __DRV_TEMP_CFG_H__
#define __DRV_TEMP_CFG_H__


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  2 �궨��
*****************************************************************************/

#define HKADC_LOGIC_CHAN_MAX 32 /* ����߼�ͨ���� */

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
/*����hkadc����ͨ����*/
#if defined(CHIP_BB_HI6210)
typedef enum hkadcChan
{
    HKADC_CHAN_INVALID = -1,
    HKADC_CHAN_0 = 0x00,
    HKADC_CHAN_1,
    HKADC_CHAN_2,
    HKADC_CHAN_3,
    HKADC_CHAN_4,
    HKADC_CHAN_5,
    HKADC_CHAN_6,
    HKADC_CHAN_7,
    HKADC_CHAN_8,
	HKADC_CHAN_9,
	HKADC_CHAN_10,
    HKADC_CHAN_11,
	HKADC_CHAN_12,

    HKADC_CHAN_MAX
}HKADCCHANNUM;
#else
#define HKADC_CHAN_MAX 16
#define TSENS_REGION_MAX 3
#endif
/*****************************************************************************
  4 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  6 STRUCT����
*****************************************************************************/
struct drv_hkadc_map
{
    unsigned int logic_chan;
    unsigned int phy_chan;
    unsigned int nv_id;
    unsigned int nv_len;
    unsigned int modem_id;
    char * name;
};

/* �¶�������ṹ */
typedef struct hkadc_chan_out
{
    unsigned short volt_l;    /* ���ص�HKADC��ѹֵ����λ:���� */
    unsigned short volt_r;   /* ���ص�HKADC��ѹֵȡ�� */
    short          temp_l;     /* ���ص��¶�ֵ����λ:���϶� */
    short          temp_r;    /* ���ص��¶�ֵȡ�� */
}DRV_CHANNEL_OUTPUT;

/* �¶ȵ�ѹ��Ӧ��ṹ */
typedef struct hkadc_tem_value
{
    short   temp;             /* �¶ȵ㣬��λ:���϶� */
    unsigned short volt;      /* ��ѹ�㣬��λ:���� */
}TEM_VOLT_TABLE;

/* �������bit�ṹ */
typedef struct hkadc_out_config
{
   unsigned int out_prop:2;
   unsigned int out_wake:1;
   unsigned int out_vol_temp:1;
   unsigned int out_reserv1:4;
   unsigned int out_acore:1;
   unsigned int out_ccore:1;
   unsigned int out_reserv2:22;
} OUT_PROP_CONFIG;

/* �¶��������ṹ */
typedef struct hkadc_chan_config
{
    union
    {
        unsigned int out_config;       /* bit0-bit1 0:����� 1:������� 2:ѭ����� */
                                       /* bit2 1:������� 0:�ǻ������ */
                                       /* bit3: 0:ֻ�����ѹ 1:��ѹ�¶Ⱦ���� */
                                       /* bit8: A����� */
                                       /* bit9: C����� */
        struct hkadc_out_config bit_out_config;
    } outcfg;

    unsigned int have_config;
    unsigned short out_peroid;     /* ѭ�����ʱ��ѭ�����ڣ���λ:�� */
    unsigned short temp_data_len;  /* �¶�ת������ */
    struct hkadc_tem_value temp_table[32]; /* �¶�ת����ʵ�ʳ��Ȳμ�temp_data_len */
} DRV_CHANNEL_CONFIG;

#if defined(CHIP_BB_HI6210)
/* ϵͳ�ŵ��¶ȱ������ýṹ */
typedef struct sys_temp_cfg
{
    unsigned short enable;       /* bit0:���±���ʹ�� bit1:���±���ʹ�� 1 ʹ�� 0 �ر�*/
    unsigned short hkadc_id;      /* ϵͳ�ŵ��¶ȱ�����hkadcͨ��ID */
    unsigned short high_thres;     /* ϵͳ�ŵ���±����ĵ�ѹ��ֵ ���¶�Խ�ߣ���ѹԽ��*/
    unsigned short high_count;    /* ϵͳ�ŵ���±����������ޣ����˺�ϵͳ�ػ� */
    unsigned short low_thres;      /* ϵͳ�ŵ���±����ĵ�ѹ��ֵ ���¶�Խ�ͣ���ѹԽ��*/
    unsigned short low_count;     /* ϵͳ�ŵ���±����������ޣ����˺�ϵͳ�ػ� */
    unsigned int   reserved[2];   /*����*/
} DRV_SYS_TEMP_PRO;

struct hkadc_nv_config
{
    unsigned int outconfig;         /* bit0-bit1 0:����� 1:������� 2:ѭ����� */
                                       /* bit2 1:������� 0:�ǻ������ */
                                       /* bit3: 0:ֻ�����ѹ 1:��ѹ�¶Ⱦ���� */
                                       /* bit8: A����� */
                                       /* bit9: C����� */
    unsigned short outperiod;          /* ѭ�����ʱ��ѭ�����ڣ���λ:�� */
    unsigned short convertlistlen;     /* �¶�ת������ */
    unsigned int   reserved[2];        /* �¶�ת����ʵ�ʳ��Ȳμ�usTempDataLen */
};


typedef struct thermal_data_area
{
    unsigned int       magic_start;    /* ������ʼMagic Code 0x5A5A5A5A*/
    struct hkadc_chan_out chan_out[HKADC_CHAN_MAX];  /* ��ͨ���������,0x4��ʼ*/ /*monan:16 �Ƿ��ΪHKADC_CHAN_MAX ?*/
    struct hkadc_chan_config chan_cfg[HKADC_CHAN_MAX];  /* ��ͨ���������� */
    struct sys_temp_cfg   sys_temp_cfg;    /* ϵͳ�ŵ��±����� */
    unsigned int       hw_ver_id;       /* �汾ID */
    unsigned char      phy_tbl[HKADC_LOGIC_CHAN_MAX];  /*����ͨ��->�߼�ͨ����ӳ���ϵ*/
    unsigned int       debug_flag;     /* ���⿪�� */
    unsigned short     adc_value[HKADC_CHAN_MAX];
    unsigned short     acpu_temp;
    unsigned short     gpu_temp;
    unsigned int       last_slice;     /*A��M��ͬʱ��HKADC��Ҫ��֤�������ζ�HKADC�ļ������1���룬ͨ�������¼��֤A��M��ȡ�ļ��*/
    unsigned int       magic_end;      /* ��������Magic Code 0x5A5A5A5A*/
} DRV_HKADC_DATA_AREA;
#else
/* ϵͳ�ŵ��¶ȱ������ýṹ */
typedef struct sys_temp_cfg
{
    unsigned short enable;        /* bit0:���±���ʹ�� bit1:���±���ʹ�� 1 ʹ�� 0 �ر�*/
    unsigned short hkadc_id;      /* ϵͳ�ŵ��¶ȱ�����hkadcͨ��ID */
    short          high_thres;    /* ϵͳ�ŵ���±����ĵ�ѹ��ֵ ���¶�Խ�ߣ���ѹԽ��*/
    unsigned short high_count;    /* ϵͳ�ŵ���±����������ޣ����˺�ϵͳ�ػ� */
    short          low_thres;     /* ϵͳ�ŵ���±����ĵ�ѹ��ֵ ���¶�Խ�ͣ���ѹԽ��*/
    unsigned short low_count;     /* ϵͳ�ŵ���±����������ޣ����˺�ϵͳ�ػ� */

    unsigned int   reserved[2];   /*����*/
} DRV_SYS_TEMP_PRO;

/* TSENEOR�¶ȱ������ýṹ */
typedef struct tsens_region_cfg
{
    unsigned short enable;         /* bit0:���±���ʹ�� bit1:���±���ʹ�� 1 ʹ�� 0 �ر�*/
    unsigned short high_thres;     /* ϵͳ�ŵ���±���*/
    unsigned short high_count;     /* ϵͳ�ŵ���±����������ޣ�ϵͳ�ػ� */
    unsigned short reserved;
    /*unsigned short low_thres;*/     /* ϵͳ�ŵ���±���*/
    /*unsigned short low_count;*/     /* ϵͳ�ŵ���±����������ޣ�ϵͳ�ػ� */
} TSENS_REGION_CFG;

typedef struct tsens_region_config
{
    short temp[256];

}TSENS_REGION_CONFIG;

/* �����¶������ݽṹ */
typedef struct thermal_data_area
{
    unsigned long               magic_start;                 /* ������ʼMagic Code 0x5A5A5A5A*/
    struct hkadc_chan_out       chan_out[HKADC_CHAN_MAX];    /* ��ͨ���������*/
    struct hkadc_chan_config    chan_cfg[HKADC_CHAN_MAX];    /* ��ͨ���������� */
    struct sys_temp_cfg         sys_temp_cfg;                /* ϵͳ�ŵ��±����� */
    unsigned long               hw_ver_id;                   /* �汾ID */
    unsigned char               phy_tbl[HKADC_LOGIC_CHAN_MAX];     /* HKADC�߼�ͨ��������ͨ����Ӧ�� */
    unsigned long               debug_flag;                  /* ���⿪�� */
    struct tsens_region_cfg     tens_cfg[TSENS_REGION_MAX];  /* TSENSOR�±����� */
    struct tsens_region_config  region_cfg;                  /* TSENSOR�������������Ϣ*/
    short                       tsens_out[TSENS_REGION_MAX]; /* TSENSOR������������Ϣ*/
    short                       reserved;                    /* ������Ϣ*/
    unsigned long               magic_end;                   /* ��������Magic Code 0x5A5A5A5A*/
} DRV_HKADC_DATA_AREA;
#endif

/*****************************************************************************
  7 UNION����
*****************************************************************************/


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

#endif

