

#ifndef _DRV_MAILBOX_PORT_LINUX_H_
#define _DRV_MAILBOX_PORT_LINUX_H_

#include <linux/printk.h>
#include <linux/hisi/hi6xxx-iomap.h>                   /* For IO_ADDRESS access */

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*��ʵ��ַת���ӿڶ���*/
#ifndef _DRV_LLT_
//#include <mach/hardware.h>

/*ACPUʵ��ַ�������ַӳ���ת���ӿ�*/
#define MEM_CORE_SHARE_PHY2VIRT(phy)         HISI_VA_ADDRESS(phy)
#define MEM_CORE_SHARE_VIRT2PHY(virt)        HISI_PA_ADDRESS(virt)

#else

/*ACPUʵ��ַ�������ַӳ���ת���ӿ�*/
#define MEM_CORE_SHARE_PHY2VIRT(phy)         (phy)
#define MEM_CORE_SHARE_VIRT2PHY(virt)        (virt)
#endif

/*����ͨ�������ܣ��˵�������ýӿڶ���*/
/*������CPU��ID*/
#define MAILBOX_LOCAL_CPUID                         MAILBOX_CPUID_ACPU

/*����C��ƽ̨��ص� ����ͨ�� �����������շ�ͨ�� */
#define MAILBOX_CHANNEL_NUM \
    ( MAILBOX_CHANNEL_BUTT(ACPU, HIFI)   \
    + MAILBOX_CHANNEL_BUTT(ACPU, MCU)    \
    + MAILBOX_CHANNEL_BUTT(ACPU, CCPU)   \
    + MAILBOX_CHANNEL_BUTT(HIFI, ACPU)   \
    + MAILBOX_CHANNEL_BUTT(MCU,  ACPU)   \
    + MAILBOX_CHANNEL_BUTT(CCPU,  ACPU)  \
    )

/*����C��ƽ̨��ص� �ʼ� ���� , ֻ���Ľ���ͨ��*/
#define MAILBOX_USER_NUM    \
    ( MAILBOX_USER_BUTT(HIFI, ACPU, MSG) \
    + MAILBOX_USER_BUTT(MCU,  ACPU, MSG) \
    + MAILBOX_USER_BUTT(CCPU,  ACPU, MSG) \
    + MAILBOX_USER_BUTT(CCPU,  ACPU, IFC) \
    + MAILBOX_USER_BUTT(MCU,  ACPU, IFC) \
    )

/*��ӡ���������ö���*/
/*����̨��ӡ����ӿ�*/
#ifdef _DRV_LLT_
extern int printf (__const char *__restrict __format, ...);
#define mailbox_out(p)                              (printf p)
#else
#define mailbox_out(p)                              (printk p)
#endif

/*���������Ƿ��ӡ����*/
#define _MAILBOX_LINE_                              __LINE__

/*���������Ƿ��ӡ�ļ���,(����ӡ�ļ����ɽ�ʡ����ռ�)*/
#define _MAILBOX_FILE_                              (void*)(0) /*__FILE__*/

#define MAILBOX_LOG_LEVEL                           MAILBOX_LOG_INFO


/*������Թ���������ö���*/
/*�����ڴ�CPU�ϴ򿪿�ά�ɲ⹦��*/
#ifndef MAILBOX_OPEN_MNTN
#define MAILBOX_OPEN_MNTN
#endif

/*��ά�ɲ��¼�������ID��*/
#define MAILBOX_RECORD_USEID_NUM                    (64)
/*��ά�ɲ��¼�������¼����*/
#define MAILBOX_RECORD_RECENT_NUM                   (2)

#define RT  "\n"   /*��ӡ�س�����*/

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif  /*_DRV_MAILBOX_LINUX_H_*/

