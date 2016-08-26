/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : tsensor_driver.h
  �� �� ��   : ����
  ��    ��   : ����l00217270
  ��������   : 2013��5��14��
  ����޸�   :
  ��������   : tsensor_driver.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2013��5��14��
    ��    ��   : ����l00217270
    �޸�����   : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/


#ifndef __TSENSOR_DRVIER_H__
#define __TSENSOR_DRVIER_H__

#include <linux/err.h>
#include <linux/io.h>
#include <linux/debugfs.h>
#include <linux/delay.h>
#include <linux/platform_device.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/device.h>
#include <linux/stddef.h>
#include <linux/sysfs.h>
#include <linux/types.h>
#include <linux/mutex.h>

#include <linux/interrupt.h>
#include <asm/irq.h>
#include <linux/err.h>
#include <linux/module.h>
#include <linux/reboot.h>
#include <linux/slab.h>
//#include <linux/pm_qos_params.h>
#include <linux/pm_qos.h>
#include <linux/delay.h>
#include <linux/timer.h>
#ifdef CONFIG_DEBUG_FS
#include <linux/debugfs.h>
#include <linux/seq_file.h>
#include <linux/uaccess.h>
#endif

/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define TSENSOR_FEATURES_OFF        (0)
#define TSENSOR_FEATURES_ON         (1)

#define TSENSOR_DEBUG_OFF           (0)
#define TSENSOR_DEBUG_ON            (1)

#define TSENSOR_OK          (0)
#define TSENSOR_ERR         (-1)

#define FREQ_DOWN      (1)
#define FREQ_UP        (-1)

#define TSENSOR_INIT_NOT_OK   (0)
#define TSENSOR_INIT_OK       (1)

#define TSENSOR_INVALID_INDEX  (255)

#define TSENSOR_NORMAL_MONITORING_RATE  (1000)
#define TSENSOR_LATE_INIT_DELAY        (30000)

#define TSENSOR_READ_TEMP_COUNT         (3)

#define LOCK_FREQ_ON                    (1)
#define LOCK_FREQ_OFF                   (0)

/*tsensor����ֵת����*/
#define REMOTE_GPU_TRIM_DATA_OFFSET                  26
#define REMOTE_GPU_TRIM_DATA_MASK                    0x7C000000
#define REMOTE_GPU_TRIM_DATA_PLUSMINUS               0x80000000

#define REMOTE_ACPU_C1_TRIM_DATA_OFFSET              20
#define REMOTE_ACPU_C1_TRIM_DATA_MASK                0x01F00000
#define REMOTE_ACPU_C1_TRIM_DATA_PLUSMINUS           0x02000000

#define REMOTE_ACPU_C0_TRIM_DATA_OFFSET              14
#define REMOTE_ACPU_C0_TRIM_DATA_MASK                0x0007C000
#define REMOTE_ACPU_C0_TRIM_DATA_PLUSMINUS           0x00080000

#define LOCAL_TRIM_DATA_OFFSET                       8
#define LOCAL_TRIM_DATA_MASK                         0x00001F00
#define LOCAL_TRIM_DATA_PLUSMINUS                    0x00002000

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
typedef enum {
    TSENSOR_ALARAM_OFF = 0,
    TSENSOR_ALARAM_ON = 1,
    TSENSOR_ALARAM_BUFF,
}ENUM_TSENSOR_ALARM;

/*sensor_config[ID]:Tsensor ID*/
/*Tsensor Consumer*/
typedef enum {
    TSENSOR_TYPE_ACPU_CLUSTER0 = 0,
    TSENSOR_TYPE_ACPU_CLUSTER1 = 1,
    TSENSOR_TYPE_GPU,
    TSENSOR_TYPE_LOCAL,
    TSENSOR_TYPE_BUFF,
}ENUM_TSENSOR_TYPE;

/*****************************************************************************
  4 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  6 STRUCT����
*****************************************************************************/
typedef struct
{
    unsigned int sensor_type;   /*����:ENUM_TSENSOR_TYPE*/
    unsigned int sel;           /*Tsensor0����ģʽ����*/
    int          lag_value;     /*�ͻ��¶�*/
    int          thres_value;   /*�澯�¶�*/
    int          reset_value;   /*��λ�¶�*/

    int          lag_cfg_value;     /*�ͻ��¶ȶ�Ӧ�ļĴ�������ֵ*/
    int          thres_cfg_value;   /*�澯�¶ȶ�Ӧ�ļĴ�������ֵ*/
    int          reset_cfg_value;   /*��λ�¶ȶ�Ӧ�ļĴ�������ֵ*/

    unsigned int alarm_cur_cnt;
    unsigned int alarm_cnt;    /*�澯->��Ƶ����*/

    unsigned int recover_cur_cnt;
    unsigned int recover_cnt;  /*ȡ���澯����*/

    unsigned int is_alarm;     /*�Ƿ��ڸ澯״̬*/
    int temp_t0;
}SENSOR_INFO;

typedef struct
{
    unsigned int  enable;      /*�¶ȱ��������Ƿ�ʹ��*/
    unsigned int  init_flag;
    void __iomem  *virt_base_addr;

    unsigned int  num;         /*����*/
    SENSOR_INFO   *sensor_config;

    struct mutex  get_tmp_lock;    /*��ȡ�¶�ʱ�Ļ�����*/
    unsigned int  cur_cfg_index;   /*��ǰ����sensor*/
    unsigned int  cycle_cnt;       /*��ѯcount����*/

    unsigned int  temp_prt_vote;   /*�¶ȱ���ͶƱ��������һ�������£��ӿ���ѯ�ٶ�*/

    unsigned int  acpufreq_default_limit_value;
    int  acpu_freq_limit_num;
    unsigned int  *acpu_freq_limit_table;

    unsigned int  gpufreq_default_limit_value;
    unsigned int  gpu_freq_limit_num;
    unsigned int  *gpu_freq_limit_table;

    int  cur_acpu_freq_index;
    unsigned int  cur_gpu_freq_index;
    unsigned int  cur_ddr_freq_index;
    int  temp_offset_benchmark;

}TRMP_PRT_INFO;

struct tsensor_devinfo {
    struct platform_device *pdev;
    struct device *dev;
};

struct tsensor_governor {
    struct mutex lock;
    struct delayed_work tsensor_late_init_work;
    struct delayed_work tsensor_monitor_work;
    int average_period;
    int debug_switch;
    int warning_count;
};

struct efuse_trim
{
   unsigned int trimdata;
   int local;
   int remote_acpu_c0;
   int remote_acpu_c1;
   int remote_gpu;
};

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

int tsensor_temp_get(ENUM_TSENSOR_TYPE tsensor_type, int *temperature);
void tsensor_temp_check(void);
int tsensor_config_init(struct platform_device *pdev);
int tsensor_init(struct platform_device *pdev);
void tsensor_late_init(void);
int tsensor_suspend(void);
int tsensor_resume(void);
void efuse_trim_init(void);
void tsensor_monitor_work_fn(struct work_struct *work);
void tsensor_switch(int on_or_off);
int tsensor_status(void);


#endif /* end of tsensor_driver.h */
