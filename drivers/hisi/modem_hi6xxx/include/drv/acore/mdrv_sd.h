#ifndef __MDRV_ACORE_SD_H__
#define __MDRV_ACORE_SD_H__

#ifdef __cplusplus
extern "C"
{
#endif

    /*
       unsigned int DRV_SDMMC_GET_OPRT_STATUS(void);
       unsigned int  DRV_SDMMC_AT_PROCESS(unsigned int ulOp,
       unsigned int ulAddr,  unsigned int ulData, unsigned char *pucBuffer, unsigned int *pulErr);
       int DRV_SDMMC_GET_STATUS(void);
       int DRV_SD_GET_STATUS(void);
       int DRV_SD_GET_CAPACITY(void);
       int DRV_SD_SG_INIT_TABLE(const void *buf,unsigned int buflen);
       int DRV_SD_TRANSFER(struct scatterlist *sg,
       unsigned int dev_addr,unsigned int blocks, unsigned int blksz, int wrflags);
       int DRV_SD_MULTI_TRANSFER(unsigned int dev_addr,
       unsigned int blocks,unsigned int blksz,int write);
       static inline void DRV_SDMMC_CLEAR_WHOLE_SCREEN(void)
       {
       return;
       }
     */

#define WRFlAG     1
#define RDFlAG     0

enum SD_MMC_OPRT_ENUM
{
    SD_MMC_OPRT_FORMAT = 0,
    SD_MMC_OPRT_ERASE_ALL,
    SD_MMC_OPRT_ERASE_SPEC_ADDR,
    SD_MMC_OPRT_WRITE,
    SD_MMC_OPRT_READ,
    SD_MMC_OPRT_BUTT
};


    unsigned int mdrv_sd_get_opptstatus(void);

    /*****************************************************************************
      �� �� ��  : mdrv_sd_at_process
      ��������  : at^sd,SD��������д����������ʽ������
            0:
      �������  : �������� ulOp:
              0  ��ʽ��SD����
              1  ��������SD�����ݣ�
              2  ����ָ����ַ���ݵĲ���������ָ�����������ݳ���Ϊ512�ֽڡ�������ĵ�ַ��дȫ1
              3  д���ݵ�SD����ָ����ַ�У���Ҫ���ڶ����͵���������
              4  �����ݵ�SD����ָ����ַ��

              ulAddr < address >  ��ַ����512BYTEΪһ����λ��������n��ʾ

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
    unsigned int mdrv_sd_at_process(unsigned int ulOp, unsigned int ulAddr,
            unsigned int ulData, unsigned char *pucBuffer, unsigned int *pulErr);

    /*****************************************************************************
     * �� �� ��  : mdrv_sd_get_status
     * ��������  : ����λ��ѯ
     * �������  : ��
     * �������  : ��
     * �� �� ֵ  : 0 : ��λ��-1: ����λ
     *****************************************************************************/
    int mdrv_sd_get_status(void);

    /*****************************************************************************
     * �� �� ��  : mdrv_sd_get_capacity
     * ��������  : ��������ѯ
     * �������  : ��
     * �������  : ��
     * �� �� ֵ  : 0 : ʧ�ܣ�>0: ������
     *****************************************************************************/
    int mdrv_sd_get_capacity(void);

    int mdrv_sd_sg_init_table(const void *buf,unsigned int buflen);

    int mdrv_sd_multi_transfer(unsigned int dev_addr, unsigned int blocks,
                               unsigned int blksz,int write);

#ifdef __cplusplus
}
#endif
#endif
