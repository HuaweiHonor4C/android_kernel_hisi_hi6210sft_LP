#ifndef __MDRV_SYNC_COMM_H__
#define __MDRV_SYNC_COMM_H__
#ifdef __cplusplus
extern "C"
{
#endif

/*�궨��*/
#define BSP_ERR_SYNC_BASE                (BSP_S32)(0x80000000 | (BSP_DEF_ERR(BSP_MODU_SYNC, 0)))
#define BSP_ERR_SYNC_TIMEOUT             (BSP_ERR_SYNC_BASE + 0x0)

typedef enum tagSYNC_MODULE_E
{
    SYNC_MODULE_MEM     = 0,
    SYNC_MODULE_NANDC,
    SYNC_MODULE_PMU,
    SYNC_MODULE_SOCP,
    SYNC_MODULE_DMA,
    SYNC_MODULE_IPF,
    SYNC_MODULE_NV,
    SYNC_MODULE_YAFFS,
    SYNC_MODULE_MSP,
    SYNC_MODULE_GPIO,
    SYNC_MODULE_CSHELL,
    SYNC_MODULE_MNTN,
	SYNC_MODULE_MSPNV,
	SYNC_MODULE_ONLINE,
	SYNC_MODULE_CHG,
	SYNC_MODULE_TFUPDATE,
    SYNC_MODULE_BUTT,
}SYNC_MODULE_E;



/*****************************************************************************
* �� �� ��  : mdrv_sync_lock
*
* ��������  : ��������ѯģ��ĳ�ʼ��״̬
*
* �������  : SYNC_MODULE_E u32Module ģ��ID
*             unsigned int *pState         ģ��ĳ�ʼ��״̬
*             unsigned int u32TimeOut      ��ʱֵ��0Ϊ��Զ�ȴ�
* �������  :
*
* �� �� ֵ  : 0���ɹ���-1��������������ֵ���ȴ���ʱ
*
* ����˵��  :
*
*****************************************************************************/
int mdrv_sync_lock(SYNC_MODULE_E u32Module, unsigned int *pState, unsigned int u32TimeOut);

/*****************************************************************************
* �� �� ��  : mdrv_sync_unlock
*
* ��������  : ����������ģ���ʼ��״̬
*
* �������  : SYNC_MODULE_E u32Module  ģ��ID
*             unsigned int u32State         ����ģ���ʼ��״̬
* �������  :
*
* �� �� ֵ  : 0���ɹ���������ʧ��
*
* ����˵��  :
*
*****************************************************************************/
int mdrv_sync_unlock(SYNC_MODULE_E u32Module, unsigned int u32State);

/*****************************************************************************
* �� �� ��  : mdrv_sync_wait
*
* ��������  : �Ӻ˵ȴ����˲�����ɺ���
*
* �������  : SYNC_MODULE_E u32Module  ģ��ID
*             unsigned int u32TimeOut       ��ʱֵ��0Ϊ��Զ�ȴ�
* �������  :
*
* �� �� ֵ  : 0���ɹ���-1��������������ֵ���ȴ���ʱ
*
* ����˵��  :
*
*****************************************************************************/
int mdrv_sync_wait(SYNC_MODULE_E u32Module, unsigned int u32TimeOut);

/*****************************************************************************
* �� �� ��  : mdrv_sync_give
*
* ��������  : ����֪ͨ�Ӻ˲����Ѿ����
*
* �������  : SYNC_MODULE_E u32Module ģ��ID
* �������  :
*
* �� �� ֵ  : 0���ɹ���������ʧ��
*
* ����˵��  :
*
*****************************************************************************/
int mdrv_sync_give(SYNC_MODULE_E u32Module);

#ifdef __cplusplus
}
#endif
#endif
