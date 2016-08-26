/*************************************************************************
*   ��Ȩ����(C) 1987-2004, ���ڻ�Ϊ�������޹�˾.
*
*   �� �� �� :  BSP_DRV_IPC.h
*
*   ��    �� :  wangjing
*
*   ��    �� :  IPCģ���û��ӿ��ļ�
*
*   �޸ļ�¼ :  2011��4��11��  v1.00  wangjing  ����
*************************************************************************/

#ifndef _BSP_DRV_IPC_H_
#define _BSP_DRV_IPC_H_

#include <asm/io.h>
#include "soc_baseaddr_interface.h"
#include "soc_irqs.h"
#include "soc_ipc_interface.h"
#ifdef __cplusplus
extern "C" {
#endif

/*********************************************************
*  �����IPC��Դ��ö��������ʽ:
*  IPC_<Ŀ�괦����>_INT_SRC_<Դ������>_<����/����>
*  Ŀ�괦����:ACPU��CCPU��MCU��HIFI��BBE16
*  Դ������  :ACPU��CCPU��MCU��HIFI��BBE16
*  ����/���� :
*********************************************************/
typedef enum tagNOSEC_IPC2_INT_LEV_E
{
    NOSEC_IPC2_INT_BUTTOM                      = 32,
}NOSEC_IPC2_INT_LEV_E;

#define SIZE_4K             (4096)
#define IPC_REG_SIZE	    (SIZE_4K)


#define BSP_RegRd(uwAddr)                                     (*((volatile int *)(uwAddr)))
#define BSP_RegWr(uwAddr, uwValue)                            (*((volatile int *)(uwAddr)) = uwValue)

#define IPC_CHECK_PARA(ulLvl) \
	do{\
		if(ulLvl >= 32)\
		{\
			printk("Wrong para , line:%d\n", __LINE__);\
			return -1;\
		}\
	}while(0)

	
int BSP_DRV_PRIVATE_IPCIntInit(void);
void clear_private_ipc_int(unsigned int  enTarget, unsigned int enIntSrc);
int BSP_PRIVATE_IPC_IntEnable (unsigned int ulLvl);
int BSP_PRIVATE_IPC_IntDisable (NOSEC_IPC2_INT_LEV_E ulLvl);
	
#ifdef __cplusplus
}
#endif

#endif /* end #define _BSP_IPC_H_*/

