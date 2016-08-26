#include <BSP.h>
#include <linux/string.h>
#include <linux/kernel.h>
#include <linux/delay.h>
#include "balong_nvim.h"
#include <linux/semaphore.h>
#include <linux/slab.h>
#include <linux/module.h>
#include <platdrv.h>

MPS_PROC_S om_msp_hooks = {NULL};

/*****************************************************************************
* �� �� ��  : DR_NV_Read
*
* ��������  : A�˶�NV�ӿں���
*
* �������  : usID -> NV ID
              *pItem -> Save NV data buffer
              ulLength -> buffer length
* �������  : ��
*
* �� �� ֵ  : NV_OK:    �����ɹ�
*             NV_ERROR: ����ʧ��
*
* ����˵��  : ��
*
*****************************************************************************/
int DR_NV_Read(unsigned short usID,void *pItem,unsigned int ulLength)
{
    int ret = NV_OK;
    if (NULL == om_msp_hooks.OM_read_nv)
    {
        printk( KERN_ERR " Kernel NV read function have NOT been configured!!! ");
        return NV_ERROR;
    }
    else
    {
        printk( KERN_INFO " Kernel NV read function have been configured!!! ");

        ret = ( *om_msp_hooks.OM_read_nv )(0,usID,pItem,ulLength);
    }
    return ret;
}
EXPORT_SYMBOL(DR_NV_Read);


/*****************************************************************************
* �� �� ��  : DR_NV_Write
*
* ��������  : A��дNV�ӿں���
*
* �������  : usID -> NV ID
              *pItem -> Save NV data buffer
              ulLength -> buffer length
* �������  : ��
*
* �� �� ֵ  : NV_OK:    �����ɹ�
*             NV_ERROR: ����ʧ��
*
* ����˵��  : ��
*
*****************************************************************************/
int DR_NV_Write(unsigned short usID,void *pItem,unsigned int ulLength)
{
    int ret = NV_OK;
    if (NULL == om_msp_hooks.OM_write_nv)
    {
        printk(KERN_ERR " Kernel NV write function have NOT been configured!!! ");
        return NV_ERROR;
    }
    else
    {
        printk(KERN_INFO " Kernel NV write function have been configured!!! ");

        ret = (*om_msp_hooks.OM_write_nv)(0,usID,pItem,ulLength);
    }
    return ret;
}
EXPORT_SYMBOL(DR_NV_Write);

