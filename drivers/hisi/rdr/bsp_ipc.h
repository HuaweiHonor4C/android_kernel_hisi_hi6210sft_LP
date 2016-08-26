/*
 * bsp_ipc.h
 * description: ipc module interface
 *
 * Copyright (c) 2013 Hisilicon Technologies CO., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef _BSP_IPC_H_
#define _BSP_IPC_H_
#ifdef __ASSEMBLY__
#include <bsp_memmap.h>
#define  IPC_CPU_RAW_INT_M3   0x420
/* c->m send ipc_int  addr & bit  */
#define  PM_C2M_IPC_ADDR       (HI_IPCM_REGBASE_ADDR+IPC_CPU_RAW_INT_M3)
#define  PM_C2M_IPC_BIT        (0x1<<17)
/* a->m send ipc_int  addr & bit  */
#define  PM_A2M_IPC_ADDR       (HI_IPCM_REGBASE_ADDR+IPC_CPU_RAW_INT_M3)
#define  PM_A2M_IPC_BIT        (0x1<<16)

#else

#include <product_config.h>
#include <osl_common.h>
#include <drv_ipc.h>
#ifdef __cplusplus
extern "C" {
#endif
typedef void (*voidfun)(u32);
struct ipc_entry {
	voidfun routine;
	u32	arg;
};

#ifdef CONFIG_MODULE_IPC
/**
  \fn bsp_ipc_init
  \brief ipc module initial
  \return none
 */
void bsp_ipc_init(void);

/**
 \fn bsp_ipc_sem_create
 \brief create semaphore
 \param u32_signal_num the number of semaphore we want to create
 \return OK or error
 */
s32 bsp_ipc_sem_create(u32 u32_signal_num);

/**
 \fn bsp_ipc_sem_delete
 \brief remove semaphore
 \param u32_signal_num the number of semphore we want to delete
 \return ok or error
 */
s32 bsp_ipc_sem_delete(u32 u32_signal_num);

/**
 \fn bsp_ipc_int_enable
 \brief enable a interrupt
 \param ul_lvl the interrupt number we want to enable, from 0 to 31
 \return ok or error
 */
s32 bsp_ipc_int_enable(IPC_INT_LEV_E ul_lvl);

/**
 \fn bsp_ipc_int_disable
 \brief disable a interrupt
 \param ul_lvl the interrupt number we want to disable, from 0 to 31
 \return ok or error
 */
s32 bsp_ipc_int_disable(IPC_INT_LEV_E ul_lvl);

/**
 \fn bsp_ipc_int_connect
 \brief regist a interrupt to the system
 \param ul_lvl the interrupt number we want to regist, from 0 to 31
 \param routine the SR function
 \param param the paramter of the SR function
 \return ok or error
 */
s32 bsp_ipc_int_connect(IPC_INT_LEV_E ul_lvl, voidfun routine, u32 param);

/**
 \fn bsp_ipc_int_disconnect
 \brief unregist a interrupt from the system
 \param ul_lvl the interrupt number we want to unregist, from 0 to 31
 \param routine the SR function
 \param param the paramter of the SR function
 \return ok or error
 */
s32 bsp_ipc_int_disconnect(IPC_INT_LEV_E ul_lvl, voidfun routine, u32 param);

/**
 \fn bsp_ipc_int_send
 \param dst_core the core should receive and process the interrupt
 \param ul_lvl the interrupt number we want to send, from 0 to 31
 \return ok or error
 */
s32 bsp_ipc_int_send(IPC_INT_CORE_E dst_core, IPC_INT_LEV_E ul_lvl);

/*****************************************************************************
 * �� �� ��     : bsp_ipc_sem_take
 *
 * ��������  : ��ȡ�ź���
 *
 * �������  : u32SignalNum Ҫ��ȡ���ź���ID
s32timeout  ��ʱʱ��,tickΪ��λ��һ��tickΪ10ms
 * �������  : ��
 *
 * �� �� ֵ      : OK&ERROR
 *
 * �޸ļ�¼  : 2013��1��9�� lixiaojie
 *****************************************************************************/

s32 bsp_ipc_sem_take(u32 u32_signal_num, s32 s32timeout);

/*****************************************************************************
 * �� �� ��     : bsp_ipc_sem_give
 *
 * ��������  : �ͷ��ź���
 *
 * �������  : u32_signal_num Ҫ��ȡ���ź���
s32timeout  ��10msΪ��λ�ĳ�ʱʱ��
 * �������  : ��
 *
 * �� �� ֵ      :OK&&ERROR
 *
 * �޸ļ�¼  : 2013��1��9�� lixiaojie
 *****************************************************************************/

s32 bsp_ipc_sem_give(u32 u32_signal_num);

/*****************************************************************************
* �� �� ��     : bsp_ipc_spin_lock
*
* ��������  : ��ѯ�ȴ���ȡ�ź���,��ʹ�ñ�����ǰ��Ҫ���жϣ�
			����ʹ�ô����жϹ��ܵ�bsp_ipc_spin_lock_irqsave����
*
* �������  : u32_signal_num Ҫ��ȡ���ź���
* �������  : ��
*
* �� �� ֵ      :ERROR&OK
*
* �޸ļ�¼  :  2013��1��8�� lixiaojie
*****************************************************************************/

s32 bsp_ipc_spin_lock(u32 u32_signal_num);

/*****************************************************************************
* �� �� ��      : bsp_ipc_spin_unlock
*
* ��������  : �ͷ��ź�������bsp_ipc_spin_lock����ʹ�ã��ú���Ҫ���жϣ�
			����ʹ�ô����жϹ��ܵ�bsp_ipc_spin_unlock_irqrestore����
*
* �������  : u32SignalNum  Ҫ�ͷŵ��ź���
* �������  : ��
*
* �� �� ֵ      : OK&ERROR
*
* �޸ļ�¼  :  2013��1��9�� lixiaojie
*****************************************************************************/

s32 bsp_ipc_spin_unlock(u32 u32_signal_num);

/*****************************************************************************
* �� �� ��     : bsp_ipc_spin_lock_irqsave
*
* ��������  : ���жϲ���ѯ�ȴ���ȡ�ź���
*
* �������  : u32_signal_num Ҫ��ȡ���ź���
	flags:���жϱ�־����bsp_ipc_spin_unlock_irqrestore���ʹ�ã�
	��������ֻ����ͬһ�������ڲ�ͬʱǰ�󱻵��ã�
	�ο�spin_lock_irqsave�÷�
* �������  : ��
*
* �� �� ֵ      :ERROR&OK
*
* �޸ļ�¼  :  2013��5��8�� lixiaojie
*****************************************************************************/

#define bsp_ipc_spin_lock_irqsave(u32_signal_num, flags)  \
	do { \
		local_irq_save(flags); \
		(void)bsp_ipc_spin_lock(u32_signal_num); \
	} while (0)

/*****************************************************************************
* �� �� ��     : bsp_ipc_spin_unlock_irqrestore
*
* ��������  :���жϲ��ͷŻ�õ��ź���
*
* �������  : u32SignalNum Ҫ��ȡ���ź���
flags:���жϱ�־����bsp_ipc_spin_lock_irqsave���ʹ�ã�
��������ֻ����ͬһ�������ڲ�ͬʱǰ�󱻵��ã�
�ο�spin_unlock_irqrestore�÷�
* �������  : ��
*
* �� �� ֵ      :ERROR&OK
*
* �޸ļ�¼  :  2013��5��8�� lixiaojie
*****************************************************************************/

#define bsp_ipc_spin_unlock_irqrestore(u32_signal_num, flags) \
	do { \
		(void)bsp_ipc_spin_unlock(u32_signal_num); \
		local_irq_restore(flags); \
	} while (0)
#else
static inline s32 bsp_ipc_init(void) {return 0; }
static inline s32 bsp_ipc_sem_create(u32 u32_signal_num) {return 0; }
static inline s32 bsp_ipc_sem_delete(u32 u32_signal_num) {return 0; }
static inline s32 bsp_ipc_int_enable(IPC_INT_LEV_E ul_lvl) {return 0; }
static inline s32 bsp_ipc_int_disable(IPC_INT_LEV_E ul_lvl) {return 0; }
static inline s32 bsp_ipc_int_connect(IPC_INT_LEV_E ul_lvl,
			voidfun routine, u32 parameter) {return 0; }
static inline s32 bsp_ipc_int_disconnect(IPC_INT_LEV_E ul_lvl,
			voidfun routine, u32 parameter) {return 0; }
static inline s32 bsp_ipc_int_send(IPC_INT_CORE_E en_dst_core,
			IPC_INT_LEV_E ul_lvl) {return 0; }
static inline s32 bsp_ipc_sem_take(u32 u32_signal_num, s32 s32timeout)
{
	return 0;
}

static inline s32 bsp_ipc_sem_give(u32 u32_signal_num) {return 0; }
static inline s32 bsp_ipc_spin_lock(u32 u32_signal_num) {return 0; }
static inline s32 bsp_ipc_spin_unlock(u32 u32_signal_num) {return 0; }
#define bsp_ipc_spin_lock_irqsave(u32_signal_num, flags)  \
	do {} while (0)
#define bsp_ipc_spin_unlock_irqrestore(u32_signal_num, flags) \
	do {} while (0)

#endif
/*****************************************************************************
* �� �� ��     : bsp_int_send_info
*
* ��������  :�鿴��ÿ���˷���ÿ���жϴ���
*
* �������  : ��
* �������  : ��
*
* �� �� ֵ      :��
*
* �޸ļ�¼  :  2013��5��10�� lixiaojie
*****************************************************************************/

void bsp_int_send_info(void);

#ifdef __CMSIS_RTOS
/*****************************************************************************
* �� �� ��	: bsp_ipc_suspend
*
* ��������	:IPC�豸�µ�ǰ����Ĵ���
*
* �������	: ��
* �������	: ��
*
* �� �� ֵ		:
*
* �޸ļ�¼	:  2013��6��14�� lixiaojie
*****************************************************************************/
void bsp_ipc_suspend(void);

/**
 \fn bsp_ipc_resume
 \brief after ipc device power on, resume the register
 \return 0:success, -1:fail
 */
void bsp_ipc_resume(void);

#endif

#ifdef __cplusplus
}
#endif

#endif /*#ifdef __ASSEMBLY__*/

#endif /* end #define _BSP_IPC_H_*/
