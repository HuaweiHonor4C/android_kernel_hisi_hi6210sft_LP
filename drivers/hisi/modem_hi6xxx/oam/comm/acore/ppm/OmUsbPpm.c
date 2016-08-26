/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : OmUsbPpm.c
  �� �� ��   : ����
  ��    ��   :
  ��������   :
  ����޸�   :
  ��������   : OM��USB����˿ڹ���ģ��
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2014��5��31��
    ��    ��   : L00256032
    �޸�����   : V8R1 OM_Optimize��Ŀ����

***************************************************************************** */

/*****************************************************************************
  1 ͷ�ļ�����
**************************************************************************** */
#include "SCMProc.h"
#include "ombufmngr.h"
#include "OmCommonPpm.h"
#include "cpm.h"
#include "OmUsbPpm.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/* lint -e767  */
#define    THIS_FILE_ID        PS_FILE_ID_OM_USB_PPM_C
/* lint +e767  */

/* ****************************************************************************
  2 ȫ�ֱ�������
**************************************************************************** */
/* �˿ڵ�����Ϣ�����ݽṹ�� */
PPM_PORT_DEBUG_INFO_STUR                g_stPpmDebugInfo;
/*****************************************************************************
  3 �ⲿ��������
*****************************************************************************/


/*****************************************************************************
  4 ����ʵ��
*****************************************************************************/

/*****************************************************************************
 �� �� ��  :
 ��������  :
 �������  :
 �������  :
 �� �� ֵ  :
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��5��31��
    ��    ��   : XXXXXXXX
    �޸�����   : V8R1 OM_Optimize��Ŀ����

*****************************************************************************/

/*****************************************************************************
 �� �� ��  : PPM_UsbCfgSendData
 ��������  : �����������ͨ��USB(CFG��)���͸�PC��
 �������  : pucVirAddr:   �������ַ
             pucPhyAddr:   ����ʵ��ַ
             ulDataLen: ���ݳ���
 �������  : ��
 �� �� ֵ  : VOS_ERROR/VOS_OK
 �޸���ʷ  :
   1.��    ��  : 2014��5��24��
     ��    ��  : h59254
     �޸�����  : Creat Function
*****************************************************************************/
VOS_UINT32 PPM_UsbCfgSendData(VOS_UINT8 *pucVirAddr, VOS_UINT8 *pucPhyAddr, VOS_UINT32 ulDataLen)
{
    return PPM_PortSend(OM_USB_CFG_PORT_HANDLE, pucVirAddr, pucPhyAddr, ulDataLen);
}


/*****************************************************************************
 �� �� ��  : PPM_UsbCfgPortClose
 ��������  : USB���ص�OM CFG�˿��Ѿ���ʧ����Ҫ�ر�CFG�˿�
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 �޸���ʷ  :
   1.��    ��  : 2014��5��24��
     ��    ��  : h59254
     �޸�����  : Creat Function
*****************************************************************************/
VOS_VOID PPM_UsbCfgPortClose(VOS_VOID)
{
    PPM_PortCloseProc(OM_USB_CFG_PORT_HANDLE, CPM_CFG_PORT);

    return;
}

/*****************************************************************************
 �� �� ��  : GU_OamUsbCfgStatusCB
 ��������  : ����ACPU���洦��USB����˿ڶϿ����OM���ӶϿ�
 �������  : enPortState:�˿�״̬
 �������  : ��
 �� �� ֵ  : ��
 �޸���ʷ  :
   1.��    ��  : 2014��5��24��
     ��    ��  : h59254
     �޸�����  : V8R1 OM_Optimize��Ŀ����
*****************************************************************************/
VOS_VOID PPM_UsbCfgStatusCB(ACM_EVT_E enPortState)
{
    PPM_PortStatus(OM_USB_CFG_PORT_HANDLE, CPM_CFG_PORT, enPortState);

    return;
}

/*****************************************************************************
 �� �� ��  : GU_OamUsbCfgWriteDataCB
 ��������  : ���ڴ���USB���ص�OM CFG�˿ڵ��첽�������ݵĻص�
 �������  : pucData:   ��Ҫ���͵���������
             ulDataLen: ���ݳ���
 �������  : ��
 �� �� ֵ  : ��
 �޸���ʷ  :
   1.��    ��  : 2014��5��24��
     ��    ��  : h59254
     �޸�����  : V8R1 OM_Optimize��Ŀ����
*****************************************************************************/
VOS_VOID PPM_UsbCfgWriteDataCB(VOS_UINT8* pucVirData, VOS_UINT8* pucPhyData, VOS_INT lLen)
{
    PPM_PortWriteAsyCB(OM_USB_CFG_PORT_HANDLE, pucVirData, lLen);

    return;
}

/*****************************************************************************
 �� �� ��  : GU_OamUsbCfgReadDataCB
 ��������  : ����ACPU��������USB���ص�OM CFG�˿�����ͨ��ICC���͸�OMģ��
 �������  : enPhyPort: ����˿�
             UdiHandle:�豸���
 �������  : ��
 �� �� ֵ  : VOS_ERR/VOS_OK
 �޸���ʷ  :
   1.��    ��  : 2014��5��24��
     ��    ��  : h59254
     �޸�����  : V8R1 OM_Optimize��Ŀ����
*****************************************************************************/
VOS_INT32 PPM_UsbCfgReadDataCB(VOS_VOID)
{
    return PPM_ReadPortData(CPM_CFG_PORT, g_astOMPortUDIHandle[OM_USB_CFG_PORT_HANDLE], OM_USB_CFG_PORT_HANDLE);
}

/*****************************************************************************
 �� �� ��  : GU_OamUsbCfgPortOpen
 ��������  : ���ڳ�ʼ��USB���ص�OM CFG�˿�
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 �޸���ʷ  :
   1.��    ��  : 2014��5��24��
     ��    ��  : h59254
     �޸�����  : Creat Function
*****************************************************************************/
VOS_VOID PPM_UsbCfgPortOpen(VOS_VOID)
{
    PPM_ReadPortDataInit(CPM_CFG_PORT,
                            OM_USB_CFG_PORT_HANDLE,
                            PPM_UsbCfgReadDataCB,
                            PPM_UsbCfgWriteDataCB,
                            PPM_UsbCfgStatusCB);

    return;
}

/*****************************************************************************
 �� �� ��  : PPM_UsbIndStatusCB
 ��������  : ����ACPU���洦��USB����˿ڶϿ����OM���ӶϿ�
 �������  : enPortState:   �˿�״̬
 �������  : ��
 �� �� ֵ  : ��
 �޸���ʷ  :
   1.��    ��  : 2014��5��24��
     ��    ��  : h59254
     �޸�����  : Creat Function
*****************************************************************************/
VOS_VOID PPM_UsbIndStatusCB(ACM_EVT_E enPortState)
{
    PPM_PortStatus(OM_USB_IND_PORT_HANDLE, CPM_IND_PORT, enPortState);

    return;
}

/*****************************************************************************
 �� �� ��  : GU_OamUsbIndWriteDataCB
 ��������  : ���ڴ���USB OM�����ϱ��˿ڵ��첽�������ݵĻص�
 �������  : pucData:   ��Ҫ���͵���������
             ulDataLen: ���ݳ���
 �������  : ��
 �� �� ֵ  : ��
 �޸���ʷ  :
   1.��    ��  : 2014��5��24��
     ��    ��  : h59254
     �޸�����  : Creat Function
*****************************************************************************/
VOS_VOID PPM_UsbIndWriteDataCB(VOS_UINT8* pucVirData, VOS_UINT8* pucPhyData, VOS_INT lLen)
{
    PPM_PortWriteAsyCB(OM_USB_IND_PORT_HANDLE, pucVirData, lLen);

    return;
}

/*****************************************************************************
 �� �� ��  : GU_OamUsbIndPortOpen
 ��������  : ���ڳ�ʼ��USB���ص�OM�����ϱ��˿�
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
   1.��    ��  : 2014��5��24��
     ��    ��  : h59254
     �޸�����  : Creat Function
*****************************************************************************/
VOS_VOID PPM_UsbIndPortOpen(VOS_VOID)
{
    PPM_ReadPortDataInit(CPM_IND_PORT,
                            OM_USB_IND_PORT_HANDLE,
                            VOS_NULL_PTR,
                            PPM_UsbIndWriteDataCB,
                            PPM_UsbIndStatusCB);

    return;
}

/*****************************************************************************
 �� �� ��  : PPM_UsbIndPortClose
 ��������  : USB���ص�OM�����ϱ��˿��Ѿ���ʧ����Ҫ�ر�USB�˿�
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 �޸���ʷ  :
   1.��    ��  : 2014��5��24��
     ��    ��  : h59254
     �޸�����  : Creat Function
*****************************************************************************/
VOS_VOID PPM_UsbIndPortClose(VOS_VOID)
{
    PPM_PortCloseProc(OM_USB_IND_PORT_HANDLE, CPM_IND_PORT);

    return;
}

/*****************************************************************************
 �� �� ��  : PPM_UsbIndSendData
 ��������  : �����������ͨ��USB�����ϱ��˿ڷ��͸�PC��
 �������  : pucVirAddr:   �������ַ
             pucPhyAddr:   ����ʵ��ַ
             ulDataLen: ���ݳ���
 �������  : ��
 �� �� ֵ  : VOS_ERROR/VOS_OK
 �޸���ʷ  :
   1.��    ��  : 2014��5��24��
     ��    ��  : h59254
     �޸�����  : Creat Function
*****************************************************************************/
VOS_UINT32 PPM_UsbIndSendData(VOS_UINT8 *pucVirAddr, VOS_UINT8 *pucPhyAddr, VOS_UINT32 ulDataLen)
{
    return PPM_PortSend(OM_USB_IND_PORT_HANDLE, pucVirAddr, pucPhyAddr, ulDataLen);
}

/*****************************************************************************
 �� �� ��  : PPM_UsbCfgPortInit
 ��������  : ����USB��OM���ö˿�ͨ���ĳ�ʼ��
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_ERR -- ��ʼ��ʧ��
             VOS_OK  -- ��ʼ���ɹ�
 �޸���ʷ  :
   1.��    ��  : 2014��5��24��
     ��    ��  : h59254
     �޸�����  : Creat Function
*****************************************************************************/
VOS_UINT32 PPM_UsbCfgPortInit(VOS_VOID)
{
    /* USB���ص�OM CFG�˿ڣ����õ�����첽�ӿڷ������ݣ�������Ҫα���ͬ���ӿڣ������ź��� */
    if(VOS_OK != VOS_SmCCreate("UCFG", 0, VOS_SEMA4_FIFO, &g_stUsbCfgPseudoSync.ulPseudoSyncSemId))
    {
        vos_printf("\r\nPPM_UsbCfgPortInit: create g_stUsbCnfPseudoSync.ulPseudoSyncSemId failedd\r\n");

        g_stPpmDebugInfo.ulUsbCnfSemErr++;

        return VOS_ERR;
    }

    mdrv_usb_reg_enablecb((USB_UDI_ENABLE_CB_T)PPM_UsbCfgPortOpen);

    vos_printf("\r\nPPM_UsbCfgPortInit mdrv_usb_reg_enablecb: reg %p", PPM_UsbCfgPortOpen);

    g_stPpmDebugInfo.ulUsbCnfRegOpen++;

    mdrv_usb_reg_disablecb((USB_UDI_DISABLE_CB_T)PPM_UsbCfgPortClose);

    vos_printf("\r\nPPM_UsbCfgPortInit mdrv_usb_reg_disablecb: reg %p", PPM_UsbCfgPortClose);

    g_stPpmDebugInfo.ulUsbCnfRegClose++;

    CPM_PhySendReg(CPM_CFG_PORT,  PPM_UsbCfgSendData);

    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : PPM_UsbIndPortInit
 ��������  : ����USB ��OM�����ϱ��˿�ͨ���ĳ�ʼ��
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_ERR -- ��ʼ��ʧ��
             VOS_OK  -- ��ʼ���ɹ�
 �޸���ʷ  :
  1.��    ��   : 2014��5��25��
    ��    ��   : L00256032
    �޸�����   : V8R1 OM_Optimize��Ŀ����
*****************************************************************************/
VOS_UINT32 PPM_UsbIndPortInit(VOS_VOID)
{
    /* USB���ص�OM IND�˿ڣ����õ�����첽�ӿڷ������ݣ�������Ҫα���ͬ���ӿڣ������ź��� */
    if(VOS_OK != VOS_SmCCreate("UIND", 0, VOS_SEMA4_FIFO, &g_stUsbIndPseudoSync.ulPseudoSyncSemId))
    {
        vos_printf("\r\nPPM_UsbIndPortInit: create g_stUsbIndPseudoSync.ulPseudoSyncSemId failedd\r\n");

        g_stPpmDebugInfo.ulUsbIndSemErr++;

        return VOS_ERR;
    }

    mdrv_usb_reg_enablecb((USB_UDI_ENABLE_CB_T)PPM_UsbIndPortOpen);

    vos_printf("\r\nPPM_UsbIndPortInit mdrv_usb_reg_enablecb: reg %p", PPM_UsbIndPortOpen);

    g_stPpmDebugInfo.ulUsbIndRegOpen++;

    mdrv_usb_reg_disablecb((USB_UDI_DISABLE_CB_T)PPM_UsbIndPortClose);

    vos_printf("\r\nPPM_UsbIndPortInit mdrv_usb_reg_disablecb: reg %p", PPM_UsbIndPortClose);

    g_stPpmDebugInfo.ulUsbIndRegClose++;

    CPM_PhySendReg(CPM_IND_PORT,  PPM_UsbIndSendData);

    return VOS_OK;
}


/*****************************************************************************
 �� �� ��  : PPM_UsbPortInit
 ��������  : USB���ص�����˿�ͨ���ĳ�ʼ��:����OM IND��OM CNF�ȶ˿�
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_OK   - ��ʼ���ɹ�
             VOS_ERR  - ��ʼ��ʧ��
 �޸���ʷ  :
  1.��    ��   : 2014��5��25��
    ��    ��   : L00256032
    �޸�����   : V8R1 OM_Optimize��Ŀ����
*****************************************************************************/
VOS_UINT32 PPM_UsbPortInit(VOS_VOID)
{
    /* USB ���ص�OM�����ϱ��˿ڵĳ�ʼ�� */
    if (VOS_OK != PPM_UsbIndPortInit())
    {
        return VOS_ERR;
    }

    /* USB ���ص�OM���ö˿ڵĳ�ʼ�� */
    if (VOS_OK != PPM_UsbCfgPortInit())
    {
        return VOS_ERR;
    }

    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : PPM_UsbDebugInfoShow
 ��������  : USB���ص�����˿�ͨ���ĵ�����Ϣ�������
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 �޸���ʷ  :
  1.��    ��   : 2015��3��20��
    ��    ��   : H00300778
    �޸�����   : V8R1 OM_Optimize��Ŀ����
*****************************************************************************/
VOS_VOID PPM_UsbDebugInfoShow(VOS_VOID)
{
    vos_printf("\r\nPPM_UsbDebugInfoShow:\r\n");

    vos_printf("USB Cnf Sem Err Times: %d\r\n",         g_stPpmDebugInfo.ulUsbCnfSemErr);
    vos_printf("USB Cnf Reg Open CB Times: %d\r\n",     g_stPpmDebugInfo.ulUsbCnfRegOpen);
    vos_printf("USB Cnf Reg Close CB Times: %d\r\n",    g_stPpmDebugInfo.ulUsbCnfRegClose);

    vos_printf("USB Ind Sem Err Times: %d\r\n",         g_stPpmDebugInfo.ulUsbIndSemErr);
    vos_printf("USB Ind Reg Open CB Times: %d\r\n",     g_stPpmDebugInfo.ulUsbIndRegOpen);
    vos_printf("USB Ind Reg Close CB Times: %d\r\n",    g_stPpmDebugInfo.ulUsbIndRegClose);

    return;
}

#ifdef __cplusplus
#if __cplusplus
    }
#endif
#endif




