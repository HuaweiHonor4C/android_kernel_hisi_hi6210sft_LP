/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : drv_sd.c
  �� �� ��   : ����
  ��    ��   : c61362
  ��������   : 2012��3��2��
  ����޸�   :
  ��������   : ������ϲ������װ�Ľӿڲ�
  �޸���ʷ   :
  1.��    ��   : 2012��3��2��
    ��    ��   : c61362
    �޸�����   : �½�Drvinterface.c

  2.��    ��   : 2013��2��19��
    ��    ��   : ��ϲ 220237
    �޸�����   : ��Drvinterface.c�������

******************************************************************************/

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/

#include "BSP.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
  2 ��������
*****************************************************************************/
#if (defined BSP_CORE_APP)
extern int sd_get_status(void);
extern int sd_get_capacity(void);
extern int sd_sg_init_table(const void *buf,unsigned int buflen);
extern int sd_multi_transfer(unsigned dev_addr, unsigned blocks, unsigned blksz, int write);
#endif

/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/

/*****************************************************************************
* �� �� ��  : DRV_SD_GET_STATUS
* ��������  : ����λ��ѯ
* �������  : ��
* �������  : ��
* �� �� ֵ  : 0 : ��λ��-1: ����λ
*****************************************************************************/
int DRV_SD_GET_STATUS(void)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
    return sd_get_status();
#endif
}

/*****************************************************************************
* �� �� ��  : DRV_SD_GET_CAPACITY
* ��������  : ��������ѯ
* �������  : ��
* �������  : ��
* �� �� ֵ  : 0 : ʧ�ܣ�>0: ������
*****************************************************************************/
int DRV_SD_GET_CAPACITY(void)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
    return sd_get_capacity();
#endif
}

/*****************************************************************************
* �� �� ��  : DRV_SD_TRANSFER
* ��������  : ���ݴ���
* �������  : struct scatterlist *sg    ���������ݽṹ��ָ��
                            unsigned dev_addr   ��д���SD block ��ַ
                            unsigned blocks    ��д���block����
                            unsigned blksz      ÿ��block�Ĵ�С����λ�ֽ�
                            int wrflags    ��д��־λ��д:WRFlAG ; ��:RDFlAG
* �������  : ��
*
* �� �� ֵ  : 0 : �ɹ�������: ʧ��
*****************************************************************************/
int DRV_SD_TRANSFER(struct scatterlist *sg, unsigned dev_addr,unsigned blocks, unsigned blksz, int wrflags)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
    return -1;
    /* return sd_transfer(sg, dev_addr, blocks, blksz, wrflags); */
#endif
}

/*****************************************************************************
* �� �� ��  : DRV_SD_SG_INIT_TABLE
*
* ��������  : SD������ݴ���sg list��ʼ��
*
* �������  :  const void *buf        ��������buffer��ַ
                             unsigned int buflen    ��������buffer��С��С��32K����СΪ512B����������
                                                            ����32K����СΪ32KB�������������bufferΪ128K��

* �������  : NA
*
* �� �� ֵ  : 0 : �ɹ�������: ʧ��
*
* ����˵��  : NA
*
*****************************************************************************/
int DRV_SD_SG_INIT_TABLE(const void *buf,unsigned int buflen)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
    return sd_sg_init_table(buf, buflen);
#endif
}

/*****************************************************************************
* �� �� ��     : DRV_SD_MULTI_TRANSFER
*
* ��������  : SD������ݴ��䡣
*
* �������  :  unsigned dev_addr   ��д���SD block ��ַ
               unsigned blocks     ��д���block����
               unsigned blksz      ÿ��block�Ĵ�С����λ�ֽ�
               int write           ��д��־λ��д:1 ; ��:0
* �������  : NA
*
* �� �� ֵ     : 0 : �ɹ�������: ʧ��
*
* ����˵��  : NA
*
*****************************************************************************/
int DRV_SD_MULTI_TRANSFER(unsigned dev_addr, unsigned blocks, unsigned blksz, int write)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
    return sd_multi_transfer(dev_addr, blocks, blksz, write);
#endif
}

unsigned int BSP_SDMMC_UsbGetStatus(void)
{
    return 0;
}

void sdmmc_ClearWholeScreen(void)
{
    return ;
}

#if 0
/*****************************************************************************
 �� �� ��  : BSP_SDMMC_ATProcess
 ��������  : at^sd,SD��������д����������ʽ������
 �������  : �������� ulOp:
            0  ��ʽ��SD��
            1  ��������SD�����ݣ�
            2  ����ָ����ַ���ݵĲ���������ָ�����������ݳ���Ϊ512�ֽڡ�������ĵ�ַ��дȫ1
            3  д���ݵ�SD����ָ����ַ�У���Ҫ���ڶ����͵���������
            4  ��ȡdev_addrָ���ĵ�ַ(dev_addr*512)��512���ֽڵ����ݵ�pucBuffer��

            dev_addr < address >  ��ַ����512BYTEΪһ����λ��������n��ʾ

            ulData
             < data >            �������ݣ���ʾ512BYTE�����ݣ�ÿ���ֽڵ����ݾ���ͬ��
             0       �ֽ�����Ϊ0x00
             1       �ֽ�����Ϊ0x55
             2       �ֽ�����Ϊ0xAA
             3       �ֽ�����Ϊ0xFF

 �������  : pulErr
 �� �� ֵ  : 0 ��OK  �� 0 ��Error

            ����Ĵ���ֵ�����*pulErr��
            0 ��ʾSD������λ
            1 ��ʾSD����ʼ��ʧ��
            2 ��ʾ<opr>�����Ƿ�����Ӧ������֧��(�ô�����ATʹ��,����Ҫ����ʹ��)
            3 ��ʾ<address>��ַ�Ƿ�������SD����������
            4 ����δ֪����
*****************************************************************************/
unsigned int  BSP_SDMMC_ATProcess(SD_MMC_OPRT_ENUM_UINT32 ulOp,
    unsigned int dev_addr,  unsigned int ulData,unsigned char *pucBuffer,unsigned int *pulErr)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
    if (BSP_NULL != pulErr) {
        *pulErr = 2;
    }
    return BSP_ERROR;
#endif
}
#endif

/*****************************************************************************
 �� �� ��  : BSP_SDMMC_GetOprtStatus
 ��������  : at^sd,SD����ǰ����״̬
 �������  : ��
 �������  : ��
 �� �� ֵ  :
            0: δ����������Ѿ����;
            1: ������
            2: �ϴβ���ʧ��
*****************************************************************************/
unsigned int BSP_SDMMC_GetOprtStatus(void)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
    return 0;
#endif
}

unsigned int mdrv_sd_get_opptstatus(void)
{
    return 0;
}

unsigned int mdrv_sd_at_process(unsigned int ulOp, unsigned int ulAddr,
            unsigned int ulData, unsigned char *pucBuffer, unsigned int *pulErr)
{
    if (NULL != pulErr) {
        *pulErr = 2;
    }
    return -1;
}

/*****************************************************************************
* �� �� ��  : mdrv_sd_get_status
* ��������  : ����λ��ѯ
* �������  : ��
* �������  : ��
* �� �� ֵ  : 0 : ��λ��-1: ����λ
*****************************************************************************/
int mdrv_sd_get_status(void)
{
    return DRV_SD_GET_STATUS();
}

int mdrv_sd_get_capacity(void)
{
    return DRV_SD_GET_CAPACITY();
}
int mdrv_sd_sg_init_table(const void *buf,unsigned int buflen)
{
    return DRV_SD_SG_INIT_TABLE(buf, buflen);
}

int mdrv_sd_multi_transfer(unsigned int dev_addr, unsigned int blocks,
                               unsigned int blksz,int write)
{
    return DRV_SD_MULTI_TRANSFER(dev_addr, blocks, blksz,write);
}



#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

