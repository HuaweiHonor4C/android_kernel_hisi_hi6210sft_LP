


#define MERROR_LEVEL    1
#define MWARNING_LEVEL  1
#define MNOTICE_LEVEL   1
#define MINFO_LEVEL     0
#define MDEBUG_LEVEL    0
#define MLOG_TAG        "watchpoint"


#include <linux/cpumask.h>
#include <linux/smp.h>
#include <linux/slab.h>
#include "watchpoint_if.h"
#include "watchpoint_common.h"
#include "mntn_log.h"


extern void wp_write_register(unsigned int value, unsigned int reg ,unsigned int cpu);
extern unsigned int wp_read_register(unsigned int reg , unsigned int cpu);
static unsigned int max_watchpoint;
static watchpoint_t watchpoint_ctrl_block[MAX_CPU][MAX_DUBUG_MATCHPOINT];
void show_watchpoint_regs(unsigned int cpu, char *buf);
void show_watchpoint_info(unsigned int cpu, char *buf);

/* mask��Χ�ڵ�size */
#define WP_ADDR_MAX_SIZE(wp)    (0x01 << (wp->addr_mask_bits > 2 ? wp->addr_mask_bits : 3))


/*****************************************************************************
 �� �� ��  : write_watchpoint_register
 �ӿ�����  : ���ڽӿ�
 ��������  : ����watchpoint�����ͺͼ�ص�ַ��maskֵ������Ĵ������ݣ���д��
 �������  : unsigned int        cpu_idx - cpu��ʶ
             unsigned int        wp_idx - watchpoint��ʶ
             watchpoint_t        wp    - watchpoint
 �������  : ��
 �� �� ֵ  : void
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��3��4��
    �޸�����   : �����ɺ���

*****************************************************************************/
static inline void write_watchpoint_register(unsigned int cpu_idx, unsigned int wp_idx, watchpoint_t *wp)
{
    unsigned int reg_value = 0;

    /*
    *Matching on PL1 and unprivileged in both secure and normal state. 
    *Refer to p2257 on ARM architecture reference book
    */
    reg_value |= (0x3 << DBGWCR_PAC_SHIFT);      
    reg_value |= (0xff << DBGWCR_BAS_SHIFT);   
    reg_value |= ((wp->point_type & 0x03) << DBGWCR_LSC_SHIFT);    /* read/write mode */
    reg_value |= ((wp->addr_mask_bits & 0x1F) << DBGWCR_MASK_SHIFT); 
    reg_value |= (wp->enable & 0x01);    /*En/Dis the watchpoint */

    wp_write_register(wp->addr & (~0x03), (DBGWVR + wp_idx), cpu_idx);
    wp_write_register(reg_value, (DBGWCR + wp_idx), cpu_idx); 
}

/*****************************************************************************
 �� �� ��  : direct_enable_monitor_mode
 �ӿ�����  : ���ڽӿ�
 ��������  : ��Բ�ͬ��cpu����monitor�Ĵ���
 �������  : unsigned int        cpu - cpu��ʶ
            
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��3��4��
    �޸�����   : �����ɺ���

*****************************************************************************/
void direct_enable_monitor_mode(unsigned int cpu)
{
    unsigned int reg_value;

    /* writing 0xC5ACCE55 clears the Software Lock, enabling write access through mem-mapped interface */
    wp_write_register(0xC5ACCE55, DBGLAR, cpu);
    /* writing other value unlocks the debug registers */
    wp_write_register(0x0,DBGOSLAR, cpu); 

    reg_value = wp_read_register(DBGDSCR, cpu);
    if (WP_READ_VALUE_ERROR == reg_value) {
        mlog_w("read reg_value=0x%x, monitor NOT enabled", reg_value);
        return;
    }
    /*enable monitoring-mode debug*/
    wp_write_register(reg_value | (1 << DBGDSCR_MDBGen_SHIFT), DBGDSCR, cpu);
}

/*****************************************************************************
 �� �� ��  : direct_set_all_watchpoints_one_cpu
 �ӿ�����  : ���ڽӿ�
 ��������  : ����ͬһ��cpu�ϵ�����watchpoint
             ֱд�Ĵ���������cpu_idle_notifier��do_debug_exceptionʹ��
             ���߷ǲ���ʹ��
 �������  : unsigned int        cpu - cpu��ʶ
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��3��4��
    �޸�����   : �����ɺ���

*****************************************************************************/
void direct_set_all_watchpoints_one_cpu(unsigned int cpu)
{
    unsigned int i;
    watchpoint_t *wp ;

    for (i = 0; i < max_watchpoint; i++) {
        wp = &watchpoint_ctrl_block[cpu][i];

        if (wp->addr != DEBUG_INVALID_ADDR) {
            write_watchpoint_register(cpu, i, wp);
        }
    }
}

/*****************************************************************************
 �� �� ��  : stop_all_watchpoint_one_cpu
 �ӿ�����  : ���ڽӿ�
 ��������  : ֹͣͬһ��cpu�ϵ�����watchpoint
 �������  : unsigned int        cpu - cpu��ʶ
             enum wp_cfg_type    ct  - config type
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��3��4��
    �޸�����   : �����ɺ���

*****************************************************************************/

void stop_all_watchpoint_one_cpu(unsigned int cpu, enum wp_cfg_type ct)
{
    unsigned int i;
    watchpoint_t *wp;

    for (i = 0; i < max_watchpoint; i++) {
        wp = &watchpoint_ctrl_block[cpu][i];

        if (wp->addr != DEBUG_INVALID_ADDR) {
            /* disable */
            wp->enable = DBGWCR_DIS;

            if (WP_WT == ct) {
                write_watchpoint_register(cpu, i, wp);
            }
        }
    }
}

/*****************************************************************************
 �� �� ��  : start_all_watchpoint_one_cpu
 �ӿ�����  : ���ڽӿ�
 ��������  : ʹ��ͬһ��cpu�ϵ�����watchpoint
 �������  : unsigned int        cpu - cpu��ʶ
             enum wp_cfg_type    ct  - config type
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��3��4��
    �޸�����   : �����ɺ���

*****************************************************************************/
void start_all_watchpoint_one_cpu(unsigned int cpu, enum wp_cfg_type ct)
{
    unsigned int i;
    watchpoint_t *wp ;

    for (i = 0; i < max_watchpoint; i++) {
        wp = &watchpoint_ctrl_block[cpu][i];

        if (wp->addr != DEBUG_INVALID_ADDR) {
            /* enable */
            wp->enable = DBGWCR_EN;

            if (WP_WT == ct) {
                write_watchpoint_register(cpu, i, wp);
            }
        }
    }
}

/*****************************************************************************
 �� �� ��  : find_and_init_one_watchpoint
 �ӿ�����  : ���ڽӿ�
 ��������  : ��cpu��Ӧ��watchpoint���ƿ��������ҵ�һ������Ԫ�أ�ͬʱ����watchpoint����
 �������  : unsigned int        cpu - cpu��ʶ
             enum wp_cfg_type    ct  - config type
 �������  : ��
 �� �� ֵ  : watchpoint���ƿ��������
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��3��4��
    �޸�����   : �����ɺ���

*****************************************************************************/
unsigned int find_and_init_one_watchpoint(watchpoint_t* wpi, unsigned int cpu, enum wp_cfg_type ct)
{
    unsigned int i;
    watchpoint_t *wp;

    /* ʵ�ʼĴ�����д��ֻ�ڱ�cpu��idle endʱ���� */
    for (i = 0; i < max_watchpoint; i++) {
        wp = &watchpoint_ctrl_block[cpu][i];

        if (DEBUG_INVALID_ADDR == wp->addr) {
            wp->addr = wpi->addr;
            wp->enable = DBGWCR_EN;
            wp->point_type = wpi->point_type;
            wp->addr_mask_bits = wpi->addr_mask_bits;
            wp->user_param = wpi->user_param;
            wp->watchpoint_callback = wpi->watchpoint_callback;

            if (WP_WT == ct) {
                write_watchpoint_register(cpu, i, wp);
            }
            break;
        }
    }
    
    return i;
}
/*****************************************************************************
 �� �� ��  : find_and_clear_one_watchpoint
 �ӿ�����  : ���ڽӿ�
 ��������  : ��cpu��Ӧ��watchpoint���ƿ��������ҵ�һ������Ԫ�أ�ͬʱ���watchpoint����
 �������  : unsigned int        cpu - cpu��ʶ
             enum wp_cfg_type    ct  - config type
 �������  : ��
 �� �� ֵ  : watchpoint���ƿ��������
 ���ú���  :
 ��������  :
*********************************************************************************/
unsigned int find_and_clear_one_watchpoint(unsigned int addr, unsigned int cpu, enum wp_cfg_type ct)
{
    unsigned int i;
    watchpoint_t *wp;
    
    /* ʵ�ʼĴ�����д��ֻ�ڱ�cpu��idle endʱ���� */
    for (i = 0; i < max_watchpoint; i++) {
        wp = &watchpoint_ctrl_block[cpu][i];

        if (addr == wp->addr) {
            wp->addr = DEBUG_INVALID_ADDR;
            wp->enable = DBGWCR_DIS;
            wp->point_type = WP_RESERVED;
            wp->addr_mask_bits = 0;
            wp->user_param = 0;
            wp->watchpoint_callback = 0;

            if (WP_WT == ct) {
                /* clearʱ�����һ��wp�����wp�����޷�ɾ��*/
                write_watchpoint_register(cpu, i, wp);
            }
            break;
        }
    }
    
    return i;
}
/*****************************************************************************
 �� �� ��  : clear_all_watchpoint_one_cpu
 �ӿ�����  : ���ڽӿ�
 ��������  : ���cpu��Ӧ��watchpoint���ƿ������е�Ԫ�أ�ͬʱ���watchpoint����
 �������  : unsigned int   cpu - cpu��ʶ    
             enum wp_cfg_type    ct  - config type
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��3��4��
    �޸�����   : �����ɺ���

*****************************************************************************/
void clear_all_watchpoint_one_cpu(unsigned int cpu, enum wp_cfg_type ct)
{
    unsigned int i;
    watchpoint_t *wp;
    
    for (i = 0; i < max_watchpoint; i++) {
        wp = &watchpoint_ctrl_block[cpu][i];

        wp->addr = DEBUG_INVALID_ADDR;
        wp->enable = DBGWCR_DIS;
        wp->point_type = WP_RESERVED;
        wp->addr_mask_bits = 0;
        wp->user_param = 0;
        wp->watchpoint_callback = 0; 

        if (WP_WT == ct) {
            write_watchpoint_register(cpu, i, wp);
        }
    }

}
/*****************************************************************************
 �� �� ��  : do_watchpoint_callback
 �ӿ�����  : ���ڽӿ�
 ��������  : ���cpu��Ӧ��watchpoint���ƿ������е�Ԫ�أ�ͬʱ���watchpoint����
 �������  : unsigned int        addr - �쳣���ֵĵ�ַ
             unsigned int        cpu  - �����쳣��cpu
             void*               regs - �쳣ʱ�ļĴ�����ָ��
 �������  : ��
 �� �� ֵ  : watchpoint�ص������ķ���ֵ
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��3��4��
    �޸�����   : �����ɺ���

*****************************************************************************/
int do_watchpoint_callback(unsigned int addr, unsigned int cpu, void* regs)
{
    unsigned int i;
    watchpoint_t* wp;
    int ret= -1;

    mlog_i("cpu %d, addr=0x%08x", cpu, addr);

    /* callback �ڼ�ֹͣ */
    stop_all_watchpoint_one_cpu(cpu, WP_WT);

    for (i = 0; i < max_watchpoint; i++) {
        wp = &watchpoint_ctrl_block[cpu][i];
        if (wp->watchpoint_callback) {
            /*��ַ��Χ�ж�*/
            if ((addr >= wp->addr) && (addr < wp->addr + WP_ADDR_MAX_SIZE(wp))) {
                ret = wp->watchpoint_callback(addr, regs, wp->user_param);
            }
        }
    }

    /* callback �ڼ�ֹͣ�ָ�, WP_WB: let idle notifier to take effect */
    start_all_watchpoint_one_cpu(cpu, WP_WB);

    return ret;
}

/*****************************************************************************
 �� �� ��  : get_max_watchpoint_number
 �ӿ�����  : ���ڽӿ�
 ��������  : ��ȡ֧�ֵ����watchpoint��Ŀ
 �������  : unsigned int    cpu  - �����쳣��cpu       
 �������  : ��
 �� �� ֵ  : ���֧�ֵ�watchpoint��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��3��4��
    �޸�����   : �����ɺ���

*****************************************************************************/

unsigned int get_max_watchpoint_number(unsigned int cpu)
{
    unsigned int reg_value;
    unsigned int watchpoint_num;

    reg_value = wp_read_register(DBGDIDR, cpu);
    if (WP_READ_VALUE_ERROR == reg_value) {
        mlog_w("read reg_value=0x%x, number may wrong", reg_value);
    }
    watchpoint_num = (reg_value >> DBGDIDR_WRPs_SHIFT) + 1;

    if (watchpoint_num > MAX_DUBUG_MATCHPOINT) {
        mlog_e("watchpoint_num(%d) is larger than %d", watchpoint_num, MAX_DUBUG_MATCHPOINT);
        return 0;
    }

    max_watchpoint = watchpoint_num;
    mlog_n("watchpoint_num is %d", watchpoint_num);

    return watchpoint_num ;
    
}
/*****************************************************************************
 �� �� ��  : recover_other_watchpoint_one_cpu
 �ӿ�����  : ���ڽӿ�
 ��������  : �ָ�cpu�����г�addr��Ӧ��watchpoint�����watchpoint
 �������  : unsigned int        addr - �쳣���ֵĵ�ַ
             unsigned int        cpu  - �����쳣��cpu
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��3��4��
    �޸�����   : �����ɺ���

****************************************************************************
void recover_other_watchpoint_one_cpu(unsigned int cpu, unsigned int addr)
{
    unsigned int i;
    watchpoint_t *wp ;

    for (i = 0; i < max_watchpoint; i++) {
        wp = &watchpoint_ctrl_block[cpu][i];
        if ((wp->addr != DEBUG_INVALID_ADDR) && 
            // ��ַ��Χ���ж�
            ((addr < wp->addr) || (addr >= wp->addr + WP_ADDR_MAX_SIZE(wp)))) {
            // enable
            wp->enable = DBGWCR_EN;

            if (raw_smp_processor_id() == cpu) {
                write_watchpoint_register(cpu, i, wp);
            }
        }
    }

}*/
/*****************************************************************************
 �� �� ��  : show_watchpoint_regs
 �ӿ�����  : ���ڽӿ�
 ��������  : ������ʾ��ؼĴ������ݣ�������
 �������  : unsigned int  scpu - cpu ��ʶ      
             char         *buf - buffer to save info
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��3��4��
    �޸�����   : �����ɺ���

*****************************************************************************/
void show_watchpoint_regs(unsigned int cpu, char *buf)
{
    unsigned int index;
    unsigned cpu_raw;
    unsigned int reg_DBGDIDR, reg_DBGWFAR, reg_DBGDSCR;
    unsigned int reg_DBGOSLAR, reg_DBGPRCR, reg_DBGLAR;
    unsigned int reg_DBGLSR, reg_DBGAUTHSTATUS, reg_DBGDEVID;
    unsigned int reg_DBGWVR[MAX_CPU], reg_DBGWCR[MAX_CPU];
    char *kbuf, *kmbuf = NULL;

    /* check buffer */
    if (NULL == buf) {
        kmbuf = kmalloc(WP_DBG_SIZE_PAGE, GFP_KERNEL);
        if (NULL == kmbuf) {
            mlog_e("kmbuf is null");
            return;
        }
        kbuf = kmbuf;
    } else {
        kbuf = buf;
    }

    if (cpu >= MAX_CPU) {
        snprintf(kbuf, WP_DBG_SIZE_PAGE, "%scpuid %d, should less %d\n", kbuf, cpu, MAX_CPU);
        goto print;
    }

    cpu_raw = raw_smp_processor_id();
    if (cpu != cpu_raw) {
        snprintf(kbuf, WP_DBG_SIZE_PAGE, "%scpu not matched : %d vs %d\n", kbuf, cpu, cpu_raw);
        goto print;
    }

    for (index=0; index < max_watchpoint; index++ ) {
        reg_DBGWVR[index] = wp_read_register((DBGWVR+index), cpu);
        reg_DBGWCR[index] = wp_read_register((DBGWCR+index), cpu);
    }

    reg_DBGDIDR = wp_read_register(DBGDIDR, cpu);
    reg_DBGWFAR = wp_read_register(DBGWFAR, cpu);
    reg_DBGDSCR = wp_read_register(DBGDSCR, cpu);

    reg_DBGOSLAR = wp_read_register(DBGOSLAR, cpu);
    reg_DBGPRCR = wp_read_register(DBGPRCR, cpu);
    reg_DBGLAR = wp_read_register(DBGLAR, cpu);

    reg_DBGLSR = wp_read_register(DBGLSR, cpu);
    reg_DBGAUTHSTATUS = wp_read_register(DBGAUTHSTATUS, cpu);
    reg_DBGDEVID = wp_read_register(DBGDEVID, cpu);


    /* print */
    snprintf(kbuf, WP_DBG_SIZE_PAGE, "%s>> cpu %d info\n", kbuf, cpu);
//    mlog_n(">> cpu %u regs", cpu);
//    mlog_n("DBGDIDR= 0x%08X, DBGWFAR= 0x%08X, DBGDSCR= 0x%08X", 
//            reg_DBGDIDR, reg_DBGWFAR, reg_DBGDSCR);
    snprintf(kbuf, WP_DBG_SIZE_PAGE, "%sDBGDIDR= 0x%08X, DBGWFAR= 0x%08X, DBGDSCR= 0x%08X\n", 
            kbuf, reg_DBGDIDR, reg_DBGWFAR, reg_DBGDSCR);

    for (index=0; index < max_watchpoint; index++ ) {
//        mlog_n("<%d> DBGWVR= 0x%08x, DBGWCR= 0x%08X", 
//            index, reg_DBGWVR[index], reg_DBGWCR[index]);
        snprintf(kbuf, WP_DBG_SIZE_PAGE, "%s<%d> DBGWVR= 0x%08x, DBGWCR= 0x%08X\n", 
            kbuf, index, reg_DBGWVR[index], reg_DBGWCR[index]);
    }
    
//    mlog_n("DBGOSLAR= 0x%08X, DBGPRCR= 0x%08X, DBGLAR= 0x%08X", 
//            reg_DBGOSLAR, reg_DBGPRCR, reg_DBGLAR);
    snprintf(kbuf, WP_DBG_SIZE_PAGE, "%sDBGOSLAR= 0x%08X, DBGPRCR= 0x%08X, DBGLAR= 0x%08X\n", 
            kbuf, reg_DBGOSLAR, reg_DBGPRCR, reg_DBGLAR);
//    mlog_n("<< DBGLSR= 0x%08X, DBGAUTHSTATUS= 0x%08X, DBGDEVID= 0x%08X", 
//            reg_DBGLSR, reg_DBGAUTHSTATUS, reg_DBGDEVID);
    snprintf(kbuf, WP_DBG_SIZE_PAGE, "%sDBGLSR= 0x%08X, DBGAUTHSTATUS= 0x%08X, DBGDEVID= 0x%08X\n", 
            kbuf, reg_DBGLSR, reg_DBGAUTHSTATUS, reg_DBGDEVID);

    snprintf(kbuf, WP_DBG_SIZE_PAGE, "%s<< cpu %d info\n\n", kbuf, cpu);

print:
    if (NULL != kmbuf) {
        /* ������� */
        mlog_n("%s", kmbuf);

        /* �Է��䣬free */
        kfree(kmbuf);
        kmbuf = NULL;

    } else {
        /* do nothing */
    }
}

/*****************************************************************************
 �� �� ��  : show_watchpoint_info
 �ӿ�����  : ���ڽӿ�
 ��������  : ������ʾ���watchpoint����Ϣ,���ڲ���
 �������  : unsigned int  cpu - cpu ��ʶ
             char         *buf - buffer to save info
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��3��4��
    �޸�����   : �����ɺ���

*****************************************************************************/
void show_watchpoint_info(unsigned int cpu, char *buf)
{
    unsigned int i;
    unsigned int sum = 0; 
    unsigned int size; 
    watchpoint_t* wp;
    char *kbuf, *kmbuf = NULL;

    /* check buffer */
    if (NULL == buf) {
        kmbuf = kmalloc(WP_DBG_SIZE_PAGE, GFP_KERNEL);
        if (NULL == kmbuf) {
            mlog_e("kmbuf is null");
            return;
        }
        kbuf = kmbuf;
    } else {
        kbuf = buf;
    }


    if (cpu >= MAX_CPU) {
        snprintf(kbuf, WP_DBG_SIZE_PAGE, "%scpuid %d, should less %d\n", kbuf, cpu, MAX_CPU);
        goto print;
    }

    snprintf(kbuf, WP_DBG_SIZE_PAGE, "%s>> cpu %d info\n", kbuf, cpu);

    /* no write-read concurrency, no need to protect */
    for (i = 0; i < max_watchpoint; i++) {
        wp = &watchpoint_ctrl_block[cpu][i];
        if(DEBUG_INVALID_ADDR != wp->addr) {
            sum++;

            /* at least 8 byte */
            size = WP_ADDR_MAX_SIZE(wp);
//            mlog_n("<%d> addr = 0x%08x, size=0x%02x, en=%d", i, wp->addr, size, wp->enable);
            snprintf(kbuf, WP_DBG_SIZE_PAGE, "%s<%d> addr = 0x%08x, size=0x%02x, EN=%d\n", 
                            kbuf, i, wp->addr, size, wp->enable);
            
            switch(wp->point_type) {
            case WP_RESERVED:
//                mlog_n("<%d> type is WP_RESERVED", i);
                snprintf(kbuf, WP_DBG_SIZE_PAGE, "%s<%d> type is WP_RESERVED\n", kbuf, i);
                break;
            case WP_MATCH_READ:
//                mlog_n("<%d> type is WP_READ", i);
                snprintf(kbuf, WP_DBG_SIZE_PAGE, "%s<%d> type is WP_READ\n", kbuf, i);
                break;
            case WP_MATCH_WRITE:
  //              mlog_n("<%d> type is WP_WRITE", i);
                snprintf(kbuf, WP_DBG_SIZE_PAGE, "%s<%d> type is WP_WRITE\n", kbuf, i);
                break;
            case WP_MATCH_RW:
    //            mlog_n("<%d> type is WP_RW", i);
                snprintf(kbuf, WP_DBG_SIZE_PAGE, "%s<%d> type is WP_RW\n", kbuf, i);
                break;
            default:
      //          mlog_e("<%d> type(%d) is unknown", i, wp->point_type);
                snprintf(kbuf, WP_DBG_SIZE_PAGE, "%s<%d> type(%d) is unknown\n", kbuf, i, wp->point_type);
                break;
            }

//            mlog_n("<%d> callback   is 0x%p", i, wp->watchpoint_callback);
//            mlog_n("<%d> user_param is 0x%p", i, wp->user_param);
            snprintf(kbuf, WP_DBG_SIZE_PAGE, "%s<%d> callback   is 0x%p\n", kbuf, i, wp->watchpoint_callback);
            snprintf(kbuf, WP_DBG_SIZE_PAGE, "%s<%d> user_param is 0x%p\n", kbuf, i, wp->user_param);
        }
    }

//    mlog_n("<< cpu %d, total number of watchpoint is %d", cpu, sum);
    snprintf(kbuf, WP_DBG_SIZE_PAGE, "%s<< cpu %d, total number of watchpoint is %d\n\n", kbuf, cpu, sum);

print:
    if (NULL != kmbuf) {
        /* ������� */
        mlog_n("%s", kmbuf);

        /* �Է��䣬free */
        kfree(kmbuf);
        kmbuf = NULL;

    } else {
        /* do nothing */
    }
}



