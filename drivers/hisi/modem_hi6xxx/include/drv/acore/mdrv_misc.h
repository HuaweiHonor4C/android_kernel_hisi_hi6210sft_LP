/*************************************************************************
*   ��Ȩ����(C) 1987-2011, ���ڻ�Ϊ�������޹�˾.
*
*   �� �� �� :  misc.h
*
*   ��    �� :  yangzhi
*
*   ��    �� :  ���ļ�����Ϊ"mdrv.h", ����V7R1�����Э��ջ֮���API�ӿ�ͳ��
*
*   �޸ļ�¼ :  2011��1��18��  v1.00  yangzhi����
*************************************************************************/
#ifndef _MDRV_MISC_H_
#define _MDRV_MISC_H_

#ifdef _cplusplus
extern "C"
{
#endif

#ifdef __KERNEL__
#include <linux/notifier.h>
#endif

#include "mdrv_misc_comm.h"

/*A��SIM���Ȳ�Σ��ϲ�tafʹ��*/
typedef enum
{
    SIM_CARD_OUT = 0,
    SIM_CARD_IN  = 1
} SCI_DETECT_STATE_E;

#ifdef _cplusplus
}
#endif
#endif

