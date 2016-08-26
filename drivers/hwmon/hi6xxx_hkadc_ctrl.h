
#ifndef __HI6XXX_HKADC_CTRL_H__
#define __HI6XXX_HKADC_CTRL_H__
#include "hi6xxx_hkadc_value.h"


#define HKADC_DEBUG(p) printk p


/*ͨ�����ԺͶ�Ӧ�¶ȵ�ѹת����*/
struct hkadc_table_data
{
    unsigned int logic_chan;
    unsigned int phy_chan;
    unsigned int ctrlflag;
    struct hkadc_nv_config hkadc_conf;
    unsigned int table_len;
    struct hkadc_tem_value temp_table[32];
};

/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/

extern int thermal_data_init(void);
extern int hkadc_debug_init(int chanid);
extern int hkadc_debug_uninit(int chanid);
extern int hkadc_get_shared_value(int chanid, unsigned short* volt);
#endif
