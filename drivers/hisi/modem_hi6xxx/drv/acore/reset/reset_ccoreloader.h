/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : reset_ccoreloader.h
  �� �� ��   : ����
  ��    ��   : ¬��ʤ 00212112
  ��������   : 2013��4��22��
  ����޸�   :
  ��������   : reset_ccoreloader.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2012��8��29��
    ��    ��   : ¬��ʤ 00212112
    �޸�����   : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#ifndef RESET_CCORELOADER_H
#define RESET_CCORELOADER_H
#include <linux/hisi/reset.h>

/*#include  ###*/

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
���Լ���������
*****************************************************************************/
/*reference to copy from bootloader, fastboot, starts*/
#define MCU_SECTION_NUMBER_MAX 30
#define CCORE_SECTION_NUMBER_MAX MCU_SECTION_NUMBER_MAX

#define EFI_ENTRIES     128
#define EFI_ENTRY_SIZE  (sizeof(struct efi_entry))
#define EFI_MBR_SIZE    512
#define EFI_HEADER_SIZE 512
#define EFI_TOTAL_SIZE  (EFI_MBR_SIZE + EFI_HEADER_SIZE + EFI_ENTRY_SIZE*EFI_ENTRIES)
/* ֧�����ķ������� */
#define MAX_PTN 32

#define EMMC_BLOCK_SIZE    (512)
#define PTABLE_START_STR                "EFI PART"


/*****************************************************************************
 ʵ �� ��  : CCORE_IMAGE_SEC_TYPE_ENUM
 ��������  : ���������
*****************************************************************************/
enum CCORE_IMAGE_SEC_TYPE_ENUM
{
    CCORE_IMAGE_SEC_TYPE_CODE = 0,        /* ���� */
    CCORE_IMAGE_SEC_TYPE_DATA,            /* ���� */
    CCORE_IMAGE_SEC_TYPE_BUTT
};
typedef unsigned char CCORE_IMAGE_SEC_TYPE_ENUM_UINT8;

/*****************************************************************************
 ʵ �� ��  : CCORE_IMAGE_SEC_LOAD_ENUM
 ��������  : ����μ�������
*****************************************************************************/
enum CCORE_IMAGE_SEC_LOAD_ENUM
{
    CCORE_IMAGE_SEC_LOAD_STATIC           = 0,    /* ��̬����, �����ص����е�ַ */
    CCORE_IMAGE_SEC_LOAD_DYNAMIC          = 1,    /* ��̬����, ͬʱ���ص�����buffer�����е�ַ */
    CCORE_IMAGE_SEC_LOAD_BUFFER           = 2,    /* ��̬����, �����ص�����buffer */
    CCORE_IMAGE_SEC_LOAD_MODEM_ENTRY      = 3,    /* ��̬���أ���ΪMODEM������ʼ��ַ */

    CCORE_IMAGE_SEC_LOAD_BUTT
};
typedef unsigned char CCORE_IMAGE_SEC_LOAD_ENUM_UINT8;

/*****************************************************************************
 ʵ �� ��  : CCORE_IMAGE_SEC_STRU
 ��������  : ����ζ���
*****************************************************************************/
typedef struct _CCORE_IMAGE_SEC_STRU_TAG
{
    unsigned short                      uhwSn;              /* ��� */
    CCORE_IMAGE_SEC_TYPE_ENUM_UINT8       enType;             /* ���� */
    CCORE_IMAGE_SEC_LOAD_ENUM_UINT8       enLoadAttrib;       /* �������� */
    unsigned int                       uwSrcOffset;        /* ���ļ��е�ƫ��, bytes */
    unsigned int                       uwDesOffset;        /* ����Ŀ�ĵ�ַ, bytes */
    unsigned int                       uwSize;             /* �γ���, bytes */

}CCORE_IMAGE_SEC_STRU;

/*****************************************************************************
 ʵ �� ��  : CCORE_IMAGE_HEAD_STRU
 ��������  : �����ļ�ͷ����
*****************************************************************************/
typedef struct _CCORE_IMAGE_HEAD_STRU_TAG
{
    char                                szTimeStamp[24];                        /* �������ʱ�� */
    unsigned int                       uwImageSize;                            /* �����ļ���С, bytes */
    unsigned int                       uwSecNum;                               /* �ļ���������Ŀ */
    CCORE_IMAGE_SEC_STRU                  astSections[CCORE_SECTION_NUMBER_MAX];    /* ����Ϣ, ��uwSecNum�� */

}CCORE_IMAGE_HEAD_STRU;


/*ends*/

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif
