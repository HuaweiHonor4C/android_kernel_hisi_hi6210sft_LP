#ifndef __GPIOINTERFACE_H_
#define __GPIOINTERFACE_H_




#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/* --------------------------GPIO�Ĵ������б�<begin>------------------------- */


#define GPIO_SHINE_DB4                  ( DB4 )                                 /* GPIO����BIT */

/* GPIO�Ĵ�����ƫ�Ƶ�ַ�б� */
#define GPIODATA                        ( 0x00 )                                /* ���ݼĴ��� */
#define GPIODIR                         ( 0x04 )                                /* ������ƼĴ��� */
/* -------------------------- GPIO�Ĵ������б�<end> ------------------------- */


/* --------------------------UART�Ĵ������б�<begin>------------------------- */

#define UART_RBR_THR_DLL                ( UART_BASE_ADDR_LOW + 0x000 )          /* UART���շ������ݺͲ����ʵ�8λ�Ĵ����Ĵ��� */
#define UART_DLH_IER                    ( UART_BASE_ADDR_LOW + 0x004 )          /* UART�ж�ʹ�ܺͲ����ʸ�8λ�Ĵ��� */
#define UART_IIR_FCR                    ( UART_BASE_ADDR_LOW + 0x008 )          /* UART�ж�ID��fifo���ƼĴ��� */
#define UART_LCR                        ( UART_BASE_ADDR_LOW + 0x00C )          /* UART���Կ��ƼĴ��� */
#define UART_MCR                        ( UART_BASE_ADDR_LOW + 0x010 )          /* UART Modem���ƼĴ��� */
#define UART_LSR                        ( UART_BASE_ADDR_LOW + 0x014 )          /* UART����״̬�Ĵ��� */
#define UART_MSR                        ( UART_BASE_ADDR_LOW + 0x018 )          /* Modem״̬�Ĵ��� */
#define UART_SCR                        ( UART_BASE_ADDR_LOW + 0x01C )          /* �м����ݴ�Ĵ��� */
#define UART_FAR                        ( UART_BASE_ADDR_LOW + 0x070 )          /* FIFO���ʿ��ƼĴ��� */
#define UART_TFR                        ( UART_BASE_ADDR_LOW + 0x074 )          /* ����FIFO���Ĵ��� */
#define UART_RFW                        ( UART_BASE_ADDR_LOW + 0x078 )          /* ����FIFOд�Ĵ��� */
#define UART_USR                        ( UART_BASE_ADDR_LOW + 0x07C )          /* UART״̬�Ĵ��� */
#define UART_TFL                        ( UART_BASE_ADDR_LOW + 0x080 )          /* ����FIFO���ݸ����Ĵ��� */
#define UART_RFL                        ( UART_BASE_ADDR_LOW + 0x084 )          /* ����FIFO���ݸ����Ĵ��� */
#define UART_HTX                        ( UART_BASE_ADDR_LOW + 0x0A4 )          /* ��ͣ���ͼĴ��� */
#define UART_DMASA                      ( UART_BASE_ADDR_LOW + 0x0A8 )          /* DMA�����Ӧ�Ĵ��� */
#define UART_UCV                        ( UART_BASE_ADDR_LOW + 0x0F8 )          /* UART�汾�Ĵ��� */
#define UART_CTR                        ( UART_BASE_ADDR_LOW + 0x0FC )          /* ����ID�Ĵ��� */
/* --------------------------UART�Ĵ������б�<end>------------------------- */



#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif