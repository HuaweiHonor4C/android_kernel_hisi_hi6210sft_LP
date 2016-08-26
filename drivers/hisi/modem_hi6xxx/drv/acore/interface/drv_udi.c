

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/

#include "mdrv_udi.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
  2 ��������
*****************************************************************************/

/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/

/*****************************************************************************
* �� �� ��  : mdrv_udi_open
*
* ��������  : ���豸(����ͨ��)
*
* �������  : pParam: �豸�Ĵ����ò���
* �������  : ��
* �� �� ֵ  : -1:ʧ�� / ����:�ɹ�
*****************************************************************************/
extern UDI_HANDLE udi_open(UDI_OPEN_PARAM_S *pParam);
UDI_HANDLE mdrv_udi_open(UDI_OPEN_PARAM_S *pParam)
{
    return udi_open(pParam);
}


/*****************************************************************************
* �� �� ��  : mdrv_udi_close
*
* ��������  : �ر��豸(����ͨ��)
*
* �������  : handle: �豸��handle
* �������  : ��
* �� �� ֵ  : ��
*****************************************************************************/
extern int udi_close(UDI_HANDLE handle);
int mdrv_udi_close(UDI_HANDLE handle)
{
    return udi_close(handle);
}

/*****************************************************************************
* �� �� ��  : mdrv_udi_write
*
* ��������  : ����д
*
* �������  : handle:  �豸��handle
*             pMemObj: buffer�ڴ� �� �ڴ��������
*             u32Size: ����д�ߴ� �� �ڴ��������ɲ�����
* �������  :
*
* �� �� ֵ  : ����ֽ��� �� �ɹ�/ʧ��
*****************************************************************************/
extern int udi_write(UDI_HANDLE handle, void* pMemObj, unsigned int u32Size);
int mdrv_udi_write(UDI_HANDLE handle, void* pMemObj, unsigned int u32Size)
{
    return udi_write(handle, pMemObj, u32Size);
}


/*****************************************************************************
* �� �� ��  : mdrv_udi_read
*
* ��������  : ���ݶ�
*
* �������  : handle:  �豸��handle
*             pMemObj: buffer�ڴ� �� �ڴ��������
*             u32Size: ���ݶ��ߴ� �� �ڴ��������ɲ�����
* �������  :
*
* �� �� ֵ  : ����ֽ��� �� �ɹ�/ʧ��
*****************************************************************************/
extern int udi_read(UDI_HANDLE handle, void* pMemObj, unsigned int u32Size);
int mdrv_udi_read(UDI_HANDLE handle, void* pMemObj, unsigned int u32Size)
{
    return udi_read( handle,  pMemObj,  u32Size);
}


/*****************************************************************************
* �� �� ��  : mdrv_udi_ioctl
*
* ��������  : ����ͨ����������
*
* �������  : handle: �豸��handle
*             u32Cmd: IOCTL������
*             pParam: ��������
* �������  :
*
* �� �� ֵ  : �ɹ�/ʧ��
*****************************************************************************/
extern int udi_ioctl(UDI_HANDLE handle, unsigned int u32Cmd, void* pParam);
int mdrv_udi_ioctl(UDI_HANDLE handle, unsigned int u32Cmd, void* pParam)
{
    return udi_ioctl( handle,  u32Cmd, pParam);
}



#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

