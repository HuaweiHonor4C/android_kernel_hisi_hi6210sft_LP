
#include <linux/printk.h>
#include <linux/string.h>
#include <linux/ioport.h>
#include <linux/types.h>
#include <linux/io.h>
#include <linux/spinlock.h>
#include <linux/of.h>

#include "hi6xxx_hkadc_value.h"
#include "hi6xxx_hkadc_ctrl.h"
#include <linux/hisi/hi6xxx-iomap.h>


#ifdef _DRV_LLT_
//#include "stdio.h"
#endif

/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/
static unsigned int out_config_save[HKADC_CHAN_MAX];
static unsigned int have_config_save[HKADC_CHAN_MAX];
static unsigned short out_peroid_save[HKADC_CHAN_MAX];

void __iomem *g_hkadc_baseadddr = NULL;
spinlock_t g_hkadc_lock;

struct thermal_data_area *g_thermal_share_area = 0;


/*ACPU hkadcͨ�����ԣ���ѹ�¶�ת����*/
/*
unsigned int outconfig;   bit0-bit1 0:����� 1:������� 2:ѭ�����
                          bit2 1:������� 0:�ǻ������
                          bit3: 0:ֻ�����ѹ 1:��ѹ�¶Ⱦ����
                          bit8: A�����
                          bit9: C�����
unsigned short outperiod;         ѭ�����ʱ��ѭ�����ڣ���λ:��
unsigned short convertlistlen;    �¶�ת������
*/
struct hkadc_table_data acpu_hkadc_property[] =
{
    {
        /*���*/
        HKADC_TEMP_BATTERY,
        /*����ͨ��*/
        HKADC_CHAN_10,
        1,
        /*ͨ������*/
        {0x0102, 2, 0, {0, 0}},
        /*��ѹ�¶�ת������*/
        31,
        /*��ѹ�¶�ת����*/
        {
     		{-273, 1800}, {-40, 1672}, {-36, 1645}, {-32, 1615}, {-28, 1581},
            {-24, 1544}, {-20, 1503}, {-16, 1459}, {-12, 1411}, {-8, 1361},
            {-4, 1307}, {0, 1252}, {4, 1196}, {8, 1139}, {12, 1083},
            {16, 1028}, {20, 976}, {24, 926}, {28, 879}, {32, 835},
            {36, 794}, {40, 757}, {44, 723}, {48, 692}, {52, 664},
            {56, 639}, {60, 617}, {64, 596}, {74, 555}, {84, 523},
            {125, 457}, {0, 0},
        },
    },

     {
        /*���ID*/
        HKADC_TEMP_BATT_ID,
        /*����ͨ��*/
        HKADC_CHAN_11,
        1,
        /*ͨ������*/
        {0x0101, 2, 0, {0, 0}},
        /*��ѹ�¶�ת������*/
        28,
        /*��ѹ�¶�ת����*/
        {
            {-20, 2353}, {-15, 2282}, {-10, 2197}, {-5, 2173}, {0, 2058},
            {5, 1927}, {10, 1782}, {15, 1623}, {20, 1463}, {25, 1300},
            {30, 1141}, {35, 991}, {40, 853}, {45, 729}, {50, 619},
            {55, 523}, {60, 441}, {65, 372}, {70, 313}, {75, 263},
            {80, 222}, {85, 187}, {90, 158}, {95, 134}, {100, 113},
            {105, 97}, {110, 83}, {115, 71}, {0, 0}, {0, 0},
            {0, 0}, {0, 0},
        },
    },

    {
        /*CODEC��ѹ���*/
        HKADC_TEMP_CODEC,
        /*����ͨ��*/
        HKADC_CHAN_12,
        /*��Ҫ���ã�ʹ��*/
        0,
        /*ͨ������*/
        {0x0102, 1, 0, {0, 0}},
        /*��ѹ�¶�ת������*//*CODECֻ��Ҫ��ѹ*/
        1,
        /*��ѹ�¶�ת����*//*CODECֻ��Ҫ��ѹ*/
        {{0,0}},
    },

/*CAMERA_ID ϵͳ������������V8R1�϶���ȷ���Ƿ��У��еĻ���ʹ�õ��ĸ�ͨ��������w00251051*/
/*ͬʱ�������CODEC��ѹ���*/
#if 0
     {
        /*camera0 ID*/
        HKADC_TEMP_CAMERA0_ID,
        /*����ͨ��*/
        HKADC_CHAN_9,
        1,
        /*ͨ������*/
        {0x0101, 2, 0, {0, 0}},
        /*��ѹ�¶�ת������*/
        28,
        /*��ѹ�¶�ת����*/
        {
            {-20, 2353}, {-15, 2282}, {-10, 2197}, {-5, 2173}, {0, 2058},
            {5, 1927}, {10, 1782}, {15, 1623}, {20, 1463}, {25, 1300},
            {30, 1141}, {35, 991}, {40, 853}, {45, 729}, {50, 619},
            {55, 523}, {60, 441}, {65, 372}, {70, 313}, {75, 263},
            {80, 222}, {85, 187}, {90, 158}, {95, 134}, {100, 113},
            {105, 97}, {110, 83}, {115, 71}, {0, 0}, {0, 0},
            {0, 0}, {0, 0},
        },
    },

    {
        /*camera1 ID*/
        HKADC_TEMP_CAMERA1_ID,
        /*����ͨ��*/
        HKADC_CHAN_7,
        1,
        /*ͨ������*/
        {0x0101, 2, 0, {0, 0}},
        /*��ѹ�¶�ת������*/
        28,
        /*��ѹ�¶�ת����*/
        {
            {-20, 2353}, {-15, 2282}, {-10, 2197}, {-5, 2173}, {0, 2058},
            {5, 1927}, {10, 1782}, {15, 1623}, {20, 1463}, {25, 1300},
            {30, 1141}, {35, 991}, {40, 853}, {45, 729}, {50, 619},
            {55, 523}, {60, 441}, {65, 372}, {70, 313}, {75, 263},
            {80, 222}, {85, 187}, {90, 158}, {95, 134}, {100, 113},
            {105, 97}, {110, 83}, {115, 71}, {0, 0}, {0, 0},
            {0, 0}, {0, 0},
        },
    },
#endif
    {
        /*ϵͳ����*/
        HKADC_TEMP_SYSTEMH,
        /*����ͨ��*/
        HKADC_CHAN_8,
        1,
        /*ͨ������*/
        {0x0102, 2, 0, {0, 0}},
        /*��ѹ�¶�ת������*/
        32,
        /*��ѹ�¶�ת����*/
        {
            {-300,1728},{-250,1691},{-200,1654},{-150,1608},{-100,1551},{-50,1484},
            {0,1405},{50,1316},{100,1218},{150,1114},{200,1007},{250,900},
            {300,796},{350,697},{400,605},{450,522},{500,449},{550,384},
            {600,327},{650,279},{700,237},{750,202},{800,172},{850,147},
            {900,126},{950,108},{1000,92},{1050,80},{1100,69},{1150,59},
            {1200,52},{1250,45},
        },
    },

    {
        /*ϵͳ����*/
        HKADC_TEMP_SYSTEML,
        HKADC_CHAN_9,
        1,
        /*ͨ������*/
        {0x0102, 2, 0, {0, 0}},
        /*��ѹ�¶�ת������*/
        32,
        /*��ѹ�¶�ת����*/
        {
            {-300,1728},{-250,1691},{-200,1654},{-150,1608},{-100,1551},{-50,1484},
            {0,1405},{50,1316},{100,1218},{150,1114},{200,1007},{250,900},
            {300,796},{350,697},{400,605},{450,522},{500,449},{550,384},
            {600,327},{650,279},{700,237},{750,202},{800,172},{850,147},
            {900,126},{950,108},{1000,92},{1050,80},{1100,69},{1150,59},
            {1200,52},{1250,45},
        },
    },

     {
        /*ϵͳ����*/
        HKADC_TEMP_CHARGER_ID,
        HKADC_CHAN_9,
        1,
        /*ͨ������*/
        {0x0102, 2, 0, {0, 0}},
        /*��ѹ�¶�ת������*/
        32,
        /*��ѹ�¶�ת����*/
        {
            {-300,1728},{-250,1691},{-200,1654},{-150,1608},{-100,1551},{-50,1484},
            {0,1405},{50,1316},{100,1218},{150,1114},{200,1007},{250,900},
            {300,796},{350,697},{400,605},{450,522},{500,449},{550,384},
            {600,327},{650,279},{700,237},{750,202},{800,172},{850,147},
            {900,126},{950,108},{1000,92},{1050,80},{1100,69},{1150,59},
            {1200,52},{1250,45},
        },
    },

    {
        HKADC_TEMP_PA0,
        HKADC_CHAN_6,
        0,
        {0x0102, 2, 0, {0, 0}},
        32,
        {
            {-300,1728},{-250,1691},{-200,1654},{-150,1608},{-100,1551},{-50,1484},
            {0,1405},{50,1316},{100,1218},{150,1114},{200,1007},{250,900},
            {300,796},{350,697},{400,605},{450,522},{500,449},{550,384},
            {600,327},{650,279},{700,237},{750,202},{800,172},{850,147},
            {900,126},{950,108},{1000,92},{1050,80},{1100,69},{1150,59},
            {1200,52},{1250,45},
        },
    },

    {
        HKADC_TEMP_PA1,
        HKADC_CHAN_7,
        0,
        {0x0102, 2, 0, {0, 0}},
        32,
        {
            {-300,1728},{-250,1691},{-200,1654},{-150,1608},{-100,1551},{-50,1484},
            {0,1405},{50,1316},{100,1218},{150,1114},{200,1007},{250,900},
            {300,796},{350,697},{400,605},{450,522},{500,449},{550,384},
            {600,327},{650,279},{700,237},{750,202},{800,172},{850,147},
            {900,126},{950,108},{1000,92},{1050,80},{1100,69},{1150,59},
            {1200,52},{1250,45},
        },
    }
};

/*v9r1 ��طŵ��¶ȱ���*/
struct sys_temp_cfg default_bat_tempproc_conf =
{
    /*enable*/      0x0000,
    /*hkadc_id*/    2,
    /*high_thres*/  55,
    /*high_count*/  10,
    /*low_thres*/   -5,
    /*low_count*/   10,
    /*reserved[2]*/{ 0, 0}
};
static void hkadc_fill_channel_map(void)
{
    unsigned int l2p_table[HKADC_TEMP_BUTT];
    struct device_node *root = NULL;
    struct hkadc_table_data *p_hkadc_table = acpu_hkadc_property;
    unsigned int phy_chan;
    int index = 0;
    int ret = 0;

    root = of_find_compatible_node(NULL, NULL, "hisilicon,hi6xxx-hkadc-driver");
    if (!root)
    {
        printk(KERN_ERR "get hisilicon,hi6xxx-hkadc node err.\n");
        return;
    }

    ret = of_property_read_u32_array(root, "hkadc-l2p-table", l2p_table, sizeof(l2p_table)/sizeof(unsigned int));
    if(ret)
    {
        printk(KERN_ERR "get hi6xxx-hisilicon-hkadc_l2p_table err.\n");
        return;
    }

    for(index = 0; index < sizeof(acpu_hkadc_property)/sizeof(struct hkadc_table_data); index++)
    {
        phy_chan = l2p_table[p_hkadc_table->logic_chan];
        /*��ȡ����Ч��ͨ��ֵ���Ÿ���ȫ�ֱ���,��Ȼʹ��Ĭ�ϵ�*/
        if(HKADC_INVALID_CHAN_NUM != phy_chan)
        {
            p_hkadc_table->phy_chan = phy_chan;
        }
        p_hkadc_table++;
    }

    return;
}

unsigned short hkadc_tempvolt_trans(unsigned char ucChan,
                short tempvalue,
                unsigned short *hkAdcTable,
                unsigned short tempTableLen)
{
    unsigned short usTemNum = 0x00;          /*��¼�¶ȸ���*/
    unsigned short RetVal = 0x00;

    struct hkadc_tem_value *pstTemVoltTAble = (struct hkadc_tem_value *)hkAdcTable;
    struct hkadc_tem_value *pstTemp = (struct hkadc_tem_value *)hkAdcTable;

    /*need convert*/
    if(!hkAdcTable)
    {
        printk(KERN_ERR "hkadc_tempvolt_trans failed ucChan %d\n", ucChan);
        /*ֱ�ӷ��ص�ѹ*/
        return HKADC_VALUE_INVALID;
    }

    for(usTemNum=0; usTemNum< tempTableLen;usTemNum++)
    {
        if((0x00 == pstTemp->volt) && (0x00 == pstTemp->temp))
        {
            break;
        }
        pstTemp++;
    }

    /*NV����Ч��������Чֵ*/
    if((0x00 == pstTemVoltTAble->temp) && (0x00 == pstTemVoltTAble->volt) )
    {
        printk(KERN_ERR "hkadc_tempvolt_trans failed\n");

        return HKADC_VALUE_INVALID;
    }
    /*NV�����ݺϷ�*/

    /*�жϼ���ֵ*/
    if(tempvalue <= pstTemVoltTAble->temp)
    {
        RetVal =  pstTemVoltTAble->volt;
        return RetVal;
    }

    pstTemp =(struct hkadc_tem_value *)((pstTemVoltTAble + usTemNum) -1);
    if(tempvalue >= pstTemp->temp)
    {
        RetVal = pstTemp->volt;
        return RetVal;
    }

    /*�����¶�ֵ�����в�ֵ����*/
    while(tempvalue > pstTemVoltTAble->temp)
    {
        pstTemVoltTAble++;
    }

    pstTemp = (struct hkadc_tem_value *)(pstTemVoltTAble -1);
    /*ָ��ǰһ��Ԫ��*/

    RetVal = pstTemp->volt - (((tempvalue - pstTemp ->temp) * (pstTemp->volt - pstTemVoltTAble->volt)) \
                /(pstTemVoltTAble->temp - pstTemp->temp));

    printk(KERN_INFO "hkadc_tempvolt_trans %d\n", RetVal);

    return RetVal;

}

/*****************************************************************************
 �� �� ��  : bat_tempprotect_param_init
 ��������  : ��طŵ��±�������ʼ��
 �������  :
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��5��13��
    ��    ��   :
    �޸�����   : �����ɺ���

*****************************************************************************/
int bat_tempprotect_param_init(void)
{
    int ret = -1;
    struct hkadc_chan_config*  chan_cfg = g_thermal_share_area->chan_cfg;
    int bat_hkadc_id = 0;
    unsigned short volt_high_thres;
    unsigned short volt_low_thres;

    printk(KERN_ALERT"enter, enable %d, bat_hkadc_id %d, \
        high_thres %d, high_count %d, low_thres %d, low_count %d\n",
        g_thermal_share_area->sys_temp_cfg.enable,
        g_thermal_share_area->sys_temp_cfg.hkadc_id,
        g_thermal_share_area->sys_temp_cfg.high_thres,
        g_thermal_share_area->sys_temp_cfg.high_count,
        g_thermal_share_area->sys_temp_cfg.low_thres,
        g_thermal_share_area->sys_temp_cfg.low_count);


    /*������±����¶ȷ�ֵ���ĳɵ�ѹ*/
    bat_hkadc_id = g_thermal_share_area->sys_temp_cfg.hkadc_id;
    if (bat_hkadc_id >= HKADC_CHAN_MAX)
        return ret;

    /*���·�ֵת�� */
    volt_high_thres = hkadc_tempvolt_trans(bat_hkadc_id, g_thermal_share_area->sys_temp_cfg.high_thres,
                (unsigned short *)chan_cfg[bat_hkadc_id].temp_table, chan_cfg[bat_hkadc_id].temp_data_len);

    if (volt_high_thres == HKADC_VALUE_INVALID)
    {
        printk(KERN_ALERT"hkadc_tempvolt_trans failed\n");
        g_thermal_share_area->sys_temp_cfg.high_thres = 0;
    }
    else
    {
        g_thermal_share_area->sys_temp_cfg.high_thres = volt_high_thres;
        ret = 0;
    }

    /*���·�ֵת�� */
    volt_low_thres = hkadc_tempvolt_trans(bat_hkadc_id, g_thermal_share_area->sys_temp_cfg.low_thres,
                (unsigned short *)chan_cfg[bat_hkadc_id].temp_table, chan_cfg[bat_hkadc_id].temp_data_len);

    if (volt_low_thres == HKADC_VALUE_INVALID)
    {
        printk(KERN_ALERT"hkadc_tempvolt_trans failed\n");
        ret = -1;
    }
    /*���·�ֵ���ת��ʧ�ܣ�ֱ��ʹ��HKADC_VALUE_INVALID*/
    g_thermal_share_area->sys_temp_cfg.low_thres = volt_low_thres;

    printk(KERN_ALERT"after, enable %d, bat_hkadc_id %d, \
        high_thres %d, high_count %d, low_thres %d, low_count %d\n",
        g_thermal_share_area->sys_temp_cfg.enable,
        g_thermal_share_area->sys_temp_cfg.hkadc_id,
        g_thermal_share_area->sys_temp_cfg.high_thres,
        g_thermal_share_area->sys_temp_cfg.high_count,
        g_thermal_share_area->sys_temp_cfg.low_thres,
        g_thermal_share_area->sys_temp_cfg.low_count);


    return ret;
}

void acpu_hkadc_fill_chan_map(void)
{
    int i = 0;
    int logic_id;
    int phy_id;
    struct drv_hkadc_map * chan_map = NULL;

    for (i=0; i < sizeof(acpu_hkadc_property)/sizeof(struct hkadc_table_data); i++) {
        logic_id = acpu_hkadc_property[i].logic_chan;
        phy_id = acpu_hkadc_property[i].phy_chan;

        chan_map = bsp_hkadc_get_chan_map(logic_id);
        if (HKADC_NULL != chan_map) {
            printk(KERN_INFO"acpu_hkadc_fill_chan_map logic_id->phyID: %d -> %d \n",
                            logic_id, phy_id);
            chan_map->phy_chan = phy_id;
        } else {
            printk(KERN_ALERT"acpu_hkadc_fill_chan_map get map ERROR: logic_id %d \n",
                            logic_id);
        }   
    }
}

int thermal_data_init(void)
{
    int i = 0;
    int phy_chan;
    struct hkadc_chan_config*  chan_cfg;

    g_thermal_share_area = (struct thermal_data_area *)ioremap(MCU_HKADC_DDR_ADDR,MCU_HKADC_DDR_SIZE);

    chan_cfg = (struct hkadc_chan_config*)(&(g_thermal_share_area->chan_cfg[0]));

	g_hkadc_baseadddr = ioremap(SOC_HKADC_BASE_ADDR,0x1000);
	if (!g_hkadc_baseadddr) {
		printk("hkadc ioremap error!\n");
	}

    hkadc_fill_channel_map();
    /*1.���ACPUÿ��ͨ������������*/
    for (i=0; i < sizeof(acpu_hkadc_property)/sizeof(struct hkadc_table_data); i++) {
        /* PA0 PA1����Ҫ����wx206530 */
        if (acpu_hkadc_property[i].ctrlflag == 0)
            continue;

	 phy_chan = acpu_hkadc_property[i].phy_chan;
        chan_cfg[phy_chan].outcfg.out_config = acpu_hkadc_property[i].hkadc_conf.outconfig;
        chan_cfg[phy_chan].out_peroid = acpu_hkadc_property[i].hkadc_conf.outperiod;
        chan_cfg[phy_chan].temp_data_len = acpu_hkadc_property[i].table_len;
        hisi_io_memcpy(chan_cfg[phy_chan].temp_table, acpu_hkadc_property[i].temp_table,
            (sizeof(struct hkadc_tem_value) * acpu_hkadc_property[i].table_len));

        chan_cfg[phy_chan].have_config = 1;

        printk(KERN_INFO"phy [%d], out_config %x, out_period %d, temp_data_len %d\n", \
                acpu_hkadc_property[i].phy_chan, chan_cfg[acpu_hkadc_property[i].phy_chan].outcfg.out_config,  \
                chan_cfg[acpu_hkadc_property[i].phy_chan].out_peroid, chan_cfg[acpu_hkadc_property[i].phy_chan].temp_data_len);
    }

    /*2.���g_hkadc_chan_map�е�����ͨ����*/
    acpu_hkadc_fill_chan_map();
#if 0
    /*3.��ȡ�����ϵͳ�ŵ��±�����*/
    hisi_io_memcpy((void *)(&g_thermal_share_area->sys_temp_cfg), (void *)&default_bat_tempproc_conf, \
            sizeof(struct sys_temp_cfg));


    /*4.������±����¶ȷ�ֵ���ĳɵ�ѹ*/
    if (bat_tempprotect_param_init() != 0) {
        printk(KERN_ALERT"bat_tempprotect_param_init failed\n");
        //return -1;
    }
#endif

    spin_lock_init(&g_hkadc_lock);
    /*��֤A��M��ͬʱ��ȡHKADC�Ļ�����Ƴ�ʼ��*/
    g_thermal_share_area->last_slice = 0;

    /*5.������ɱ��, ��MCUͬ������±���������*/
    g_thermal_share_area->magic_end = HKADC_INIT_MAGIC_CODE;

    return 0;
}

int hkadc_debug_init(int chanid)
{
	struct hkadc_chan_config*  chan_cfg = g_thermal_share_area->chan_cfg;

	out_config_save[chanid] = chan_cfg[chanid].outcfg.out_config ;
	out_peroid_save[chanid] = chan_cfg[chanid].out_peroid;
	have_config_save[chanid] = chan_cfg[chanid].have_config;
	chan_cfg[chanid].outcfg.out_config = chan_cfg[chanid].outcfg.out_config | 0x0102;
	chan_cfg[chanid].out_peroid = 1;

	chan_cfg[chanid].have_config = 1;

	return 0;
}

int hkadc_debug_uninit(int chanid)
{
	struct hkadc_chan_config*  chan_cfg = g_thermal_share_area->chan_cfg;

	chan_cfg[chanid].outcfg.out_config = out_config_save[chanid];
	chan_cfg[chanid].out_peroid = out_peroid_save[chanid];

	chan_cfg[chanid].have_config = have_config_save[chanid];

	return 0;
}

int hkadc_get_shared_value(int chanid, unsigned short* volt)
{
    struct hkadc_chan_out * chan_out = g_thermal_share_area->chan_out;
    struct hkadc_chan_config *chan_cfg = g_thermal_share_area->chan_cfg;
    short  volt_l;
    short  volt_r;
    unsigned int count;
    int ret = 0;
    unsigned short voltvalue;
    OUT_PROP_CONFIG outConfig;

    /*���ͨ��û�����ã�ֱ�ӷ���HKADC_ERROR*/
    /* PA0 PA1 ͨ����have_config==0 */
    if (chan_cfg[chanid].have_config == 0)
        return -1;

    outConfig = chan_cfg[chanid].outcfg.bit_out_config;

    /*�Ƚϵ�ѹ��ԭʼֵ��ȡ��ֵ�����������򷵻�ԭʼֵ*/
    count = 5;
    do {
        volt_l = (short)chan_out[chanid].volt_l;
        volt_r = (short)chan_out[chanid].volt_r;
    } while ((count--) && (~volt_l != volt_r));

    if (~volt_l == volt_r) {
        voltvalue = volt_l;
    } else {
        return -1;
    }

    if (volt) {
        *volt = voltvalue;
    }

    return ret;
}

