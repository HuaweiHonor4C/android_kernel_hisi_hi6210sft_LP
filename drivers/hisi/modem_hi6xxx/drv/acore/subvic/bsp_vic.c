#include <linux/init.h>
#include <asm/io.h>
#include <asm/string.h>
#include <linux/interrupt.h>
#include "BSP.h"
#include "bsp_drv_vic.h"

/*modify by wangjing 2011-4-7*/
UINT32 g_subVicIntCheck=0;
VOIDFUNCPTR subVICIntHookPtr = (VOIDFUNCPTR) NULL;

static char g_subvic_irq_name[11] = "subvic_000";

/*modify by wangjing 2011-4-7 for ��ά�ɲ�*/
void subVICIntHook(VOIDFUNCPTR p_Func)
{
    subVICIntHookPtr = p_Func;
}

void subVICIntHookDel(void)
{
    subVICIntHookPtr = (VOIDFUNCPTR) NULL;
}


/*****************************************************************************
* �� �� ��  : SubVic_IntHandler
*
* ��������  : �����ж��ܹҽӺ���
*
* �������  : ��
* �������  : ��
*
* �� �� ֵ  : ��
*
* �޸ļ�¼  : 2009��3��5��   zhanghailun  creat
*****************************************************************************/
irqreturn_t BSP_DRV_SubVicIntHandler(int irq, void *dev_id)
{
    return IRQ_HANDLED;
}

/*****************************************************************************
* �� �� ��  : SubVic_Init
*
* ��������  : �����жϳ�ʼ��
*
* �������  : ��
* �������  : ��
*
* �� �� ֵ  : ��
*
* �޸ļ�¼  : 2009��3��5��   zhanghailun  creat
*****************************************************************************/
static int __init BSP_DRV_SubVicInit(void)
{
    return 0;
}

/*****************************************************************************
* �� �� ��  : BSP_INT_Enable
*
* ��������  : ʹ��ĳ���ж�
*
* �������  : BSP_S32 ulLvl Ҫʹ�ܵ��жϺţ�ȡֵ��Χ0��40
* �������  : ��
*
* �� �� ֵ  : OK&ERROR
*
* �޸ļ�¼  : 2009��3��5��   zhanghailun  creat
*****************************************************************************/

BSP_S32 BSP_INT_Enable ( BSP_S32 s32Lvl)
{
    BSP_S32 s32Result = OK;

    if(s32Lvl >= INT_LVL_MAX)
    {
        return ERROR;
    }

    if(s32Lvl < INT_LVL_MAX)
    {
        ;
    }

    return s32Result;
}/*lint !e529*/

int  mdrv_int_enable(int ulLev)
{
    return BSP_INT_Enable(ulLev);
}
/*****************************************************************************
 * �� �� ��  : BSP_INT_Disable
 *
 * ��������  : ȥʹ��ĳ���ж�
 *
 * �������  : BSP_S32 ulLvl Ҫʹ�ܵ��жϺţ�ȡֵ��Χ0��40
 * �������  : ��
 *
 * �� �� ֵ  : OK&ERROR
 *
 * �޸ļ�¼  : 2009��3��5��   zhanghailun  creat
 *****************************************************************************/
BSP_S32 BSP_INT_Disable ( BSP_S32 s32Lvl)
{
    BSP_S32 s32Result = OK;

    if(s32Lvl >= (INT_LVL_MAX))
    {
        return ERROR;
    }

    if(s32Lvl < INT_LVL_MAX)
    {
        ;
    }

    return s32Result;
}
int mdrv_int_disable(int ulLev)
{
    return BSP_INT_Disable(ulLev);
}

/*****************************************************************************
 * �� �� ��  : BSP_INT_Connect
 *
 * ��������  : ע��ĳ���ж�
 *
 * �������  : VOIDFUNCPTR * vector �ж������ţ�ȡֵ��Χ0��40
 *  		 VOIDFUNCPTR routine  �жϷ������
 *           BSP_S32 parameter      �жϷ���������
 * �������  : ��
 *
 * �� �� ֵ  : OK&ERROR
 *
 * �޸ļ�¼  : 2009��3��5��   zhanghailun  creat
 *****************************************************************************/
BSP_S32 BSP_INT_Connect  (VOIDFUNCPTR * vector,VOIDFUNCPTR routine, BSP_S32 parameter)
{
    BSP_S32 s32Result = OK;
    char *acTmp = g_subvic_irq_name;
    int iTmp;

    if(IVEC_TO_INUM(vector) >= (INT_LVL_MAX))
    {
        return ERROR;
    }

    if(IVEC_TO_INUM(vector) < INT_LVL_MAX)
    {
        iTmp = IVEC_TO_INUM(vector);
        acTmp[9] = (iTmp%10) + '0';
        acTmp[8] = ((iTmp/10)%10) + '0';
        acTmp[7] = (iTmp/100) + '0';

        s32Result = request_irq((unsigned int)vector, (irq_handler_t)routine, 0, acTmp, NULL);
    }

    return s32Result;
}
int mdrv_int_connect(int level, VOIDFUNCPTR routine, unsigned int parameter)
{
    return BSP_INT_Connect((VOIDFUNCPTR*)level, routine, parameter);
}

/*****************************************************************************
 * �� �� ��  : BSP_INT_DisConnect
 *
 * ��������  : ȡ��ע��ĳ���ж�
 *
 * �������  : VOIDFUNCPTR * vector �ж������ţ�ȡֵ��Χ0��40
 *  		 VOIDFUNCPTR routine  �жϷ������
 *           BSP_S32 parameter      �жϷ���������
 * �������  : ��
 *
 * �� �� ֵ  : OK&ERROR
 *
 * �޸ļ�¼  : 2009��3��5��   zhanghailun  creat
 *****************************************************************************/
BSP_S32 BSP_INT_DisConnect  (VOIDFUNCPTR * vector,VOIDFUNCPTR routine, BSP_S32 parameter)
{
    BSP_S32 s32Result = OK;

    if(IVEC_TO_INUM(vector) >= (INT_LVL_MAX))
    {
        return ERROR;
    }

    if(IVEC_TO_INUM(vector) < INT_LVL_MAX)
    {
        free_irq((unsigned int)vector, NULL);
        s32Result = OK;
    }

    return s32Result;
}

/*****************************************************************************
 * �� �� ��  : BSP_INT_Lock
 *
 * ��������  : ���������ж�
 *
 * �������  : ��
 *
 * �������  : ��
 *
 * �� �� ֵ  : �ж�����
 *
 * �޸ļ�¼  : 2009��3��5��   zhanghailun  creat
 *****************************************************************************/
BSP_S32 BSP_INT_Lock (BSP_VOID)
{
    unsigned long flag;

    local_irq_save(flag);

    return flag;
}

/*****************************************************************************
 * �� �� ��  : BSP_INT_UnLock
 *
 * ��������  : ���ж�
 *
 * �������  : BSP_S32 ulLocKKey  �ж����ţ�ǰһ��BSP_INT_Lock�ķ���ֵ
 *
 * �������  : ��
 *
 * �� �� ֵ  : �ж�����
 *
 * �޸ļ�¼  : 2009��3��5��   zhanghailun  creat
 *****************************************************************************/
BSP_VOID BSP_INT_UnLock ( BSP_S32 s32LocKKey)
{
    local_irq_restore((unsigned long)s32LocKKey);
}

arch_initcall(BSP_DRV_SubVicInit);

