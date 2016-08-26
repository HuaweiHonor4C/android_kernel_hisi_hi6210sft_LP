

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include <linux/kernel.h>
#include <linux/io.h>
#include "soc_baseaddr_interface.h"
#include "soc_mddrc_axi_interface.h"
#include "ddrc_qos_cfg.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/

/*****************************************************************************
 �� �� ��  : ddrc_set_port_pri
 ��������  : �˿ڶ�д���ȼ�����
 �������  : ddrc_port_id port,     �˿ں�
             unsigned int id_map,   ���ȼ�����master id map bitѡ��
             ddrc_qos_pri_level read_lvl,   �����ȼ�
             ddrc_qos_pri_level write_lvl,  д���ȼ�
 �������  : ��
 �� �� ֵ  : DDRC_QOS_CFG_OK ���óɹ�
             DDRC_QOS_CFG_ERROR ��������
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��6��12��
    ��    ��   : ��ׯ�� 59026
    �޸�����   : �����ɺ���

*****************************************************************************/
int ddrc_set_port_pri(
                ddrc_port_id port,
                unsigned int id_map,
                unsigned int read_lvl,
                unsigned int write_lvl)
{
    SOC_MDDRC_AXI_AXI_QOSCFG0_UNION *qos_cfg0;
    SOC_MDDRC_AXI_AXI_WRPRI_UNION   *write_pri;
    SOC_MDDRC_AXI_AXI_RDPRI_UNION   *read_pri;

    if ( (port >= DDRC_PORT_BUTT) || (id_map >= 0xfff) ){
        ddrc_printk("invalid input.\n");
        return DDRC_QOS_CFG_ERROR;
    }

    qos_cfg0 = DDRC_REG_MAP(SOC_MDDRC_AXI_AXI_QOSCFG0_ADDR(SOC_MDDRC_AXI_BASE_ADDR, port));
    read_pri = DDRC_REG_MAP(SOC_MDDRC_AXI_AXI_RDPRI_ADDR(SOC_MDDRC_AXI_BASE_ADDR, port));
    write_pri = DDRC_REG_MAP(SOC_MDDRC_AXI_AXI_WRPRI_ADDR(SOC_MDDRC_AXI_BASE_ADDR, port));

    qos_cfg0->reg.id_map = id_map;
    read_pri->value      = read_lvl;
    write_pri->value     = write_lvl;

    DDRC_REG_UNMAP(qos_cfg0);
    DDRC_REG_UNMAP(read_pri);
    DDRC_REG_UNMAP(write_pri);

    return DDRC_QOS_CFG_OK;

}



/*****************************************************************************
 �� �� ��  : ddrc_set_pri_deliver
 ��������  : �˿����ȼ�����ʹ��
 �������  : ddrc_port_id port,         �˿ں�
             ddrc_qos_enable enable��   ʹ�ܻ��߽�ֹ
 �������  : ��
 �� �� ֵ  : DDRC_QOS_CFG_ERROR ��������
             DDRC_QOS_CFG_OK    ���óɹ�
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��6��12��
    ��    ��   : ��ׯ�� 59026
    �޸�����   : �����ɺ���

*****************************************************************************/
int ddrc_set_pri_deliver(ddrc_port_id port, ddrc_qos_enable enable)
{
    SOC_MDDRC_AXI_AXI_QOSCFG0_UNION *qos_cfg0;

    if (port >= DDRC_PORT_BUTT ){
        ddrc_printk("invalid input.\n");
        return DDRC_QOS_CFG_ERROR;
    }

    qos_cfg0 = DDRC_REG_MAP(SOC_MDDRC_AXI_AXI_QOSCFG0_ADDR(SOC_MDDRC_AXI_BASE_ADDR, port));

    if (DDRC_QOS_DISABLE == enable) {
        qos_cfg0->reg.pri_deliver_en = 0;
    } else {
        qos_cfg0->reg.pri_deliver_en = 1;
    }

    DDRC_REG_UNMAP(qos_cfg0);
    return DDRC_QOS_CFG_OK;

}


/*****************************************************************************
 �� �� ��  : ddrc_set_rd_pri_apt
 ��������  : �˿ڶ����ȼ�����Ӧ����
 �������  : ddrc_port_id port,     �˿ں�
             unsigned int clk_num,  ���ȼ���������(0-15),
                                    0��ʾ��ֹ����Ӧ, ����clk_num*16��ʱ������
 �������  : ��
 �� �� ֵ  : DDRC_QOS_CFG_ERROR ��������
             DDRC_QOS_CFG_OK    ���óɹ�
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��6��12��
    ��    ��   : ��ׯ�� 59026
    �޸�����   : �����ɺ���

*****************************************************************************/
int ddrc_set_rd_pri_apt(ddrc_port_id port, unsigned int clk_num)
{
    SOC_MDDRC_AXI_AXI_QOSCFG1_UNION *qos_cfg1;

    if ( (port >= DDRC_PORT_BUTT) || (clk_num > 0xf)){
        ddrc_printk("invalid input.\n");
        return DDRC_QOS_CFG_ERROR;
    }

    qos_cfg1 = DDRC_REG_MAP(SOC_MDDRC_AXI_AXI_QOSCFG1_ADDR(SOC_MDDRC_AXI_BASE_ADDR, port));
    qos_cfg1->reg.rd_pri_apt = clk_num;
    DDRC_REG_UNMAP(qos_cfg1);

    return DDRC_QOS_CFG_OK;

}

/*****************************************************************************
 �� �� ��  : ddrc_set_wr_pri_apt
 ��������  : �˿�д���ȼ�����Ӧ����
 �������  : ddrc_port_id port,     �˿ں�
             unsigned int clk_num,  ���ȼ���������(0-15),
                                    0��ʾ��ֹ����Ӧ, ����clk_num*16��ʱ������
 �������  : ��
 �� �� ֵ  : DDRC_QOS_CFG_ERROR ��������
             DDRC_QOS_CFG_OK    ���óɹ�
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��6��12��
    ��    ��   : ��ׯ�� 59026
    �޸�����   : �����ɺ���

*****************************************************************************/
int ddrc_set_wr_pri_apt(ddrc_port_id port, unsigned int clk_num)
{
    SOC_MDDRC_AXI_AXI_QOSCFG1_UNION *qos_cfg1;

    if ( (port >= DDRC_PORT_BUTT) || (clk_num > 0xf)){
        ddrc_printk("invalid input.\n");
        return DDRC_QOS_CFG_ERROR;
    }

    qos_cfg1 = DDRC_REG_MAP(SOC_MDDRC_AXI_AXI_QOSCFG1_ADDR(SOC_MDDRC_AXI_BASE_ADDR, port));
    qos_cfg1->reg.wr_pri_apt = clk_num;
    DDRC_REG_UNMAP(qos_cfg1);

    return DDRC_QOS_CFG_OK;
}

/*****************************************************************************
 �� �� ��  : ddrc_set_rd_age_prd
 ��������  : �˿ڶ������ϻ�����
 �������  : ddrc_port_id port,     �˿ں�
             unsigned int clk_num,  ���ȼ���������(0-15),
                                    0��ʾ��ֹ�ϻ�, �����ϻ�ʱ��Ϊclk_num*16��ʱ������
 �������  : ��
 �� �� ֵ  : DDRC_QOS_CFG_ERROR ��������
             DDRC_QOS_CFG_OK    ���óɹ�
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��6��12��
    ��    ��   : ��ׯ�� 59026
    �޸�����   : �����ɺ���

*****************************************************************************/
int ddrc_set_rd_age_prd(ddrc_port_id port, unsigned int clk_num)
{
    SOC_MDDRC_AXI_AXI_QOSCFG1_UNION *qos_cfg1;

    if ( (port >= DDRC_PORT_BUTT) || (clk_num > 0xf)){
        ddrc_printk("invalid input.\n");
        return DDRC_QOS_CFG_ERROR;
    }

    qos_cfg1 = DDRC_REG_MAP(SOC_MDDRC_AXI_AXI_QOSCFG1_ADDR(SOC_MDDRC_AXI_BASE_ADDR, port));
    qos_cfg1->reg.rd_age_prd = clk_num;
    DDRC_REG_UNMAP(qos_cfg1);

    return DDRC_QOS_CFG_OK;
}

/*****************************************************************************
 �� �� ��  : ddrc_set_wr_age_prd
 ��������  : �˿�д�����ϻ�����
 �������  : ddrc_port_id port,     �˿ں�
             unsigned int clk_num,  ���ȼ���������(0-15),
                                    0��ʾ��ֹ�ϻ�, �����ϻ�ʱ��Ϊclk_num*16��ʱ������
 �������  : ��
 �� �� ֵ  : DDRC_QOS_CFG_ERROR ��������
             DDRC_QOS_CFG_OK    ���óɹ�
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��6��12��
    ��    ��   : ��ׯ�� 59026
    �޸�����   : �����ɺ���

*****************************************************************************/
int ddrc_set_wr_age_prd(ddrc_port_id port, unsigned int clk_num)
{
    SOC_MDDRC_AXI_AXI_QOSCFG1_UNION *qos_cfg1;

    if ( (port >= DDRC_PORT_BUTT) || (clk_num > 0xf)){
        ddrc_printk("invalid input.\n");
        return DDRC_QOS_CFG_ERROR;
    }

    qos_cfg1 = DDRC_REG_MAP(SOC_MDDRC_AXI_AXI_QOSCFG1_ADDR(SOC_MDDRC_AXI_BASE_ADDR, port));
    qos_cfg1->reg.wr_age_prd = clk_num;
    DDRC_REG_UNMAP(qos_cfg1);

    return DDRC_QOS_CFG_OK;
}

/*****************************************************************************
 �� �� ��  : ddrc_set_wr_qos_tout
 ��������  : ����д���ʱ
 �������  : ddrc_port_id port,     �˿�
             ddrc_qos_enable enable,��ʱʹ��
             unsigned int qosl_tout,�����ȼ���ʱʱ��, 1~0x3ff��ʱ������
             unsigned int qosh_tout,�����ȼ���ʱʱ�䣬ͬ��
 �������  : ��
 �� �� ֵ  : DDRC_QOS_CFG_ERROR ��������
             DDRC_QOS_CFG_OK    ���óɹ�
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��6��12��
    ��    ��   : ��ׯ�� 59026
    �޸�����   : �����ɺ���

*****************************************************************************/
int ddrc_set_wr_qos_tout(
                ddrc_port_id port,
                ddrc_qos_enable enable,
                unsigned int qosl_tout,
                unsigned int qosh_tout)
{
    SOC_MDDRC_AXI_AXI_WRQOS_UNION *qos_timeout;

    if ( (port >= DDRC_PORT_BUTT) || (qosl_tout < 1) || (qosl_tout > 0x3ff)){
        ddrc_printk("invalid input.\n");
        return DDRC_QOS_CFG_ERROR;
    }

    qos_timeout = DDRC_REG_MAP(SOC_MDDRC_AXI_AXI_WRQOS_ADDR(SOC_MDDRC_AXI_BASE_ADDR, port));

    if (DDRC_QOS_DISABLE == enable){
        qos_timeout->reg.wr_qos_en = 0;
    } else {
        qos_timeout->reg.wr_qosl_tout = qosl_tout;
        qos_timeout->reg.wr_qosh_tout = qosh_tout;
        qos_timeout->reg.wr_qos_en = 1;
    }

    DDRC_REG_UNMAP(qos_timeout);

    return DDRC_QOS_CFG_OK;
}

/*****************************************************************************
 �� �� ��  : ddrc_set_wr_qos_tout
 ��������  : ����д���ʱ
 �������  : ddrc_port_id port,     �˿�
             ddrc_qos_enable enable,��ʱʹ��
             unsigned int qosl_tout,�����ȼ���ʱʱ��, 1~0x3ff��ʱ������
             unsigned int qosh_tout,�����ȼ���ʱʱ�䣬ͬ��
 �������  : ��
 �� �� ֵ  : DDRC_QOS_CFG_ERROR ��������
             DDRC_QOS_CFG_OK    ���óɹ�
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��6��12��
    ��    ��   : ��ׯ�� 59026
    �޸�����   : �����ɺ���

*****************************************************************************/
int ddrc_set_rd_qos_tout(
                ddrc_port_id port,
                ddrc_qos_enable enable,
                unsigned int qosl_tout,
                unsigned int qosh_tout)
{
    SOC_MDDRC_AXI_AXI_RDQOS_UNION *qos_timeout;

    if ( (port >= DDRC_PORT_BUTT) || (qosl_tout < 1) || (qosl_tout > 0x3ff)){
        ddrc_printk("invalid input.\n");
        return DDRC_QOS_CFG_ERROR;
    }

    qos_timeout = DDRC_REG_MAP(SOC_MDDRC_AXI_AXI_RDQOS_ADDR(SOC_MDDRC_AXI_BASE_ADDR, port));

    if (DDRC_QOS_DISABLE == enable){
        qos_timeout->reg.rd_qos_en = 0;
    } else {
        qos_timeout->reg.rd_qosl_tout = qosl_tout;
        qos_timeout->reg.rd_qosh_tout = qosh_tout;
        qos_timeout->reg.rd_qos_en = 1;
    }

    DDRC_REG_UNMAP(qos_timeout);

    return DDRC_QOS_CFG_OK;
}

/*****************************************************************************
 �� �� ��  : ddrc_set_flux_cfg
 ��������  : �˿�������������
 �������  : ddrc_port_id port,         �˿ں�
             ddrc_qos_enable port_en,   ��������ʹ��
             unsigned int port_cfg,     �˿�����������(0~0x3ff)
             ddrc_qos_enable ovfl_en,   �������ʹ��
             unsigned int ovfl_lvl,     �������ˮ��
 �������  : ��
 �� �� ֵ  : DDRC_QOS_CFG_ERROR ��������
             DDRC_QOS_CFG_OK    ���óɹ�
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��6��12��
    ��    ��   : ��ׯ�� 59026
    �޸�����   : �����ɺ���

*****************************************************************************/
int ddrc_set_flux_cfg(
                ddrc_port_id port,
                ddrc_qos_enable port_en,
                unsigned int port_cfg,
                ddrc_qos_enable ovfl_en,
                unsigned int ovfl_lvl)
{
    SOC_MDDRC_AXI_AXI_FLUX0_UNION *flux0;

    if ( (port >= DDRC_PORT_BUTT) || (port_cfg > 0x3ff) || (ovfl_lvl > 0x10)){
        ddrc_printk("invalid input.\n");
        return DDRC_QOS_CFG_ERROR;
    }

    flux0 = DDRC_REG_MAP(SOC_MDDRC_AXI_AXI_FLUX0_ADDR(SOC_MDDRC_AXI_BASE_ADDR, port));

    if (DDRC_QOS_DISABLE == port_en){
        flux0->reg.flux_port_en0 = 0;
    } else {

        if (DDRC_QOS_DISABLE == ovfl_en) {
            flux0->reg.flux_ovfl_en0 = 0;
        } else {
            flux0->reg.flux_ovfl_lvl0 = ovfl_lvl;
            flux0->reg.flux_ovfl_en0 = 1;
        }

        flux0->reg.flux_cfg0 = port_cfg;
        flux0->reg.flux_port_en0 = 1;
    }

    DDRC_REG_UNMAP(flux0);

    return DDRC_QOS_CFG_OK;
}

/*****************************************************************************
 �� �� ��  : ddrc_set_ostd_mode
 ��������  : �˿���ɫͨ��ģʽ����
 �������  : ddrc_port_id port,         �˿ں�
             ddrc_qos_ostd_mode mode,   ģʽ
 �������  : ��
 �� �� ֵ  : DDRC_QOS_CFG_ERROR ��������
             DDRC_QOS_CFG_OK    ���óɹ�
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��6��12��
    ��    ��   : ��ׯ�� 59026
    �޸�����   : �����ɺ���

*****************************************************************************/
int ddrc_set_ostd_mode(ddrc_port_id port, ddrc_qos_ostd_mode mode)
{
    SOC_MDDRC_AXI_AXI_OSTDCFG2_UNION *ostdcfg2;
    unsigned int reg_value;

    if ( (port >= DDRC_PORT_BUTT) || (mode > DDRC_OSTD_MODE_BUTT) ){
        ddrc_printk("invalid input.\n");
        return DDRC_QOS_CFG_ERROR;
    }

    ostdcfg2 = DDRC_REG_MAP(SOC_MDDRC_AXI_AXI_OSTDCFG2_ADDR(SOC_MDDRC_AXI_BASE_ADDR));

    reg_value = readl(ostdcfg2);
    reg_value = reg_value & ~((unsigned int) 0x3 << port*2);
    reg_value = reg_value |  ((unsigned int)mode << port*2);
    writel(reg_value, ostdcfg2);

    DDRC_REG_UNMAP(ostdcfg2);

    return DDRC_QOS_CFG_OK;
}

/*****************************************************************************
 �� �� ��  : ddrc_set_ostd_lvl
 ��������  : �˿�ostdˮ������
 �������  : ddrc_port_id port,             �˿ں�
             unsigned int  port_ostd_lvl,   ˮ��(0~12)
 �������  : ��
 �� �� ֵ  : DDRC_QOS_CFG_ERROR ��������
             DDRC_QOS_CFG_OK    ���óɹ�
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��6��12��
    ��    ��   : ��ׯ�� 59026
    �޸�����   : �����ɺ���

*****************************************************************************/
int ddrc_set_ostd_lvl(ddrc_port_id port, unsigned int  port_ostd_lvl)
{
    SOC_MDDRC_AXI_AXI_OSTDCFG0_UNION *ostdcfg0;

    if ( (port >= DDRC_PORT_BUTT) || (port_ostd_lvl > 12)){
        ddrc_printk("invalid input.\n");
        return DDRC_QOS_CFG_ERROR;
    }

    ostdcfg0 = DDRC_REG_MAP(SOC_MDDRC_AXI_AXI_OSTDCFG0_ADDR(SOC_MDDRC_AXI_BASE_ADDR, port));

    ostdcfg0->reg.port_ostd_lvl0 = port_ostd_lvl;

    DDRC_REG_UNMAP(ostdcfg0);

    return DDRC_QOS_CFG_OK;
}

/*****************************************************************************
 �� �� ��  : ddrc_set_dmc_ostd_lvl
 ��������  : dmc ostdˮ������
 �������  : unsigned int dmc_ostd_lvl, dmcˮ��
 �������  : ��
 �� �� ֵ  : DDRC_QOS_CFG_ERROR ��������
             DDRC_QOS_CFG_OK    ���óɹ�
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��6��12��
    ��    ��   : ��ׯ�� 59026
    �޸�����   : �����ɺ���

*****************************************************************************/
int ddrc_set_dmc_ostd_lvl(unsigned int dmc_ostd_lvl)
{
    SOC_MDDRC_AXI_AXI_OSTDCFG1_UNION *ostdcfg1;

    if (dmc_ostd_lvl > 12){
        ddrc_printk("invalid input.\n");
        return DDRC_QOS_CFG_ERROR;
    }

    ostdcfg1 = DDRC_REG_MAP(SOC_MDDRC_AXI_AXI_OSTDCFG1_ADDR(SOC_MDDRC_AXI_BASE_ADDR));
    ostdcfg1->reg.dmc_ostd_lvl0 = dmc_ostd_lvl;
    DDRC_REG_UNMAP(ostdcfg1);

    return DDRC_QOS_CFG_OK;
}

/*****************************************************************************
 �� �� ��  : ddrc_qos_init
 ��������  : ddr qos ��ʼ������
 �������  : ��
 �� �� ֵ  : void
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��6��12��
    ��    ��   : ��ׯ�� 59026
    �޸�����   : �����ɺ���

*****************************************************************************/
void ddrc_qos_init(void)
{
    ddrc_set_port_pri(DDRC_PORT_AXI0, 0x210, 0x00000000, 0x00000000);
    ddrc_set_port_pri(DDRC_PORT_AXI1, 0x3a9, 0x11111111, 0x11111111);
    ddrc_set_port_pri(DDRC_PORT_AXI2, 0xedc, 0x22222222, 0x22222222);
    ddrc_set_port_pri(DDRC_PORT_AXI3, 0x3dc, 0x33333333, 0x33333333);
    ddrc_set_port_pri(DDRC_PORT_AXI4, 0x210, 0x44444444, 0x44444444);
    ddrc_set_port_pri(DDRC_PORT_AXI5, 0x210, 0x44444444, 0x44444444);
    ddrc_set_port_pri(DDRC_PORT_AXI6, 0xfed, 0x55555555, 0x55555555);
    ddrc_set_port_pri(DDRC_PORT_AXI7, 0x210, 0x66666666, 0x66666666);
    ddrc_set_port_pri(DDRC_PORT_AXI8, 0x210, 0x77777777, 0x77777777);
}

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif



