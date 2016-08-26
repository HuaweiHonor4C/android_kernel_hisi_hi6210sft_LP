/*************************************************************************
*   ��Ȩ����(C) 1987-2011, ���ڻ�Ϊ�������޹�˾.
*
*   �� �� �� :  dload.h
*
*   ��    �� :  yangzhi
*
*   ��    �� :  ���ļ�����Ϊ"mdrv.h", ����V7R1�����Э��ջ֮���API�ӿ�ͳ��
*
*   �޸ļ�¼ :  2011��1��18��  v1.00  yangzhi����
*************************************************************************/
#ifndef _MDRV_DLOAD_H_
#define _MDRV_DLOAD_H_

#ifdef _cplusplus
extern "C"
{
#endif


/* ����ģʽö�� */
typedef enum tagDLOAD_MODE_E
{
    DLOAD_MODE_DOWNLOAD = 0,
    DLOAD_MODE_NORMAL,
    DLOAD_MODE_DATA,
    DLOAD_MODE_MAX
}DLOAD_MODE_E;

typedef  struct  tagDLOAD_VER_INFO_S
{
        unsigned char*  productname;
        unsigned int  productnamelen;
        unsigned char*  softwarever;
        unsigned int  softwareverlen;
        unsigned char*  isover;
        unsigned int  isoverlen;
        unsigned char*  dloadver;
        unsigned int  dloadverlen;
} DLOAD_VER_INFO_S;


/*****************************************************************************
* �� �� ��  : mdrv_dload_set_curmode
*
* ��������  : ���õ�ǰ����ģʽ
*
* �������  : void
* �������  : DLOAD_MODE_NORMAL     :����ģʽ
*             DLOAD_MODE_DATA       :����ģʽ
*             DLOAD_MODE_DOWNLOAD   :����ģʽ
*
* �� �� ֵ  : ��
*
* ����˵��  : ATģ�����
*             ����ģʽ֧�ֵ���:
*                 BSP_DLOAD_GetCurMode(DLOAD_MODE_DOWNLOAD)
*             ����ģʽ֧�ֵ���:
*                 BSP_DLOAD_GetCurMode(DLOAD_MODE_DATA)
*
*****************************************************************************/
void mdrv_dload_set_curmode(DLOAD_MODE_E eDloadMode);
/*****************************************************************************
* �� �� ��  : BSP_DLOAD_GetCurMode
*
* ��������  : ��ȡ��ǰ����ģʽ
*
* �������  : void
* �������  : ��
*
* �� �� ֵ  : DLOAD_MODE_NORMAL     :����ģʽ
*             DLOAD_MODE_DATA       :����ģʽ
*             DLOAD_MODE_DOWNLOAD   :����ģʽ
*
* ����˵��  : ��
*
*****************************************************************************/
DLOAD_MODE_E mdrv_dload_get_curmode(void);
/*****************************************************************************
* �� �� ��  : mdrv_dload_set_softload
*
* ��������  : ����������־
*
* �������  : BSP_BOOL bSoftLoad  :
*             BSP_FALSE :��vxWorks����
*             BSP_TRUE  :��bootrom����
* �������  : ��
*
* �� �� ֵ  : ��
*
* ����˵��  : ��
*
*****************************************************************************/
void mdrv_dload_set_softload (int bSoftLoad);


/*****************************************************************************
* �� �� ��  : mdrv_dload_get_softload
*
* ��������  : ��ȡ������־
*
* �������  : void
* �������  : ��
*
* �� �� ֵ  : BSP_TRUE  :��bootrom����
*             BSP_FALSE :��vxWorks����
*
* ����˵��  : ��
*
*****************************************************************************/
int mdrv_dload_get_softload (void);    

/*****************************************************************************
* �� �� ��  : mdrv_dload_get_info
*
* ��������  : ���������汾��Ϣ
*
* �������  : ��
* �������  : ��
*
* �� �� ֵ  : ��Ϊ�� ���������汾��Ϣ
                    Ϊ�� ����ʧ��
*
* ����˵��  : ��
*
*****************************************************************************/
DLOAD_VER_INFO_S * mdrv_dload_get_info(void);


#ifdef _cplusplus
}
#endif
#endif

