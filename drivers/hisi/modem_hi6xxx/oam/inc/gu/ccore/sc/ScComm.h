

#ifndef __SCCOMM_H__
#define __SCCOMM_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "vos.h"
#include "ScInterface.h"
#include "pslog.h"
#include "UsimPsInterface.h"
/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define   SC_KEY_LEN                (32)                                        /* ��Կ�ĳ��� */

#define   SC_HASH_LEN               (32)                                        /* HASH���������� */

#define SC_FILE_PATH_LEN            (128)

#define   SC_SSK_STRING             "Secure Storage Key"                        /* ����SSK���ַ��� */

#define   SC_SSK_STRLEN             (VOS_StrLen(SC_SSK_STRING))                 /* ����SSK���ַ������� */

#define   SC_DSSK_STRING            "Debug port protect Secure Storage Key"     /* ����DSSK���ַ��� */

#define   SC_DSSK_STRLEN            (VOS_StrLen(SC_DSSK_STRING))                /* ����DSSK���ַ������� */

#define   SC_IPK_STRING             "Integrity Protection Key"                  /* ����IPK���ַ��� */

#define   SC_IPK_STRLEN             (VOS_StrLen(SC_IPK_STRING))                 /* ����IPK���ַ������� */

#define   SC_ASSK_STRING            "AT Secure Storage Key"                     /* ����ASSK���ַ��� */

#define   SC_ASSK_STRLEN            (VOS_StrLen(SC_ASSK_STRING))                /* ����ASSK���ַ������� */

#define   SC_SATK_STRING            "Secure AT Key"                             /* ����SATK���ַ��� */

#define   SC_SATK_STRLEN            (VOS_StrLen(SC_SATK_STRING))                /* ����SATK���ַ������� */

#define   SC_NORMAL_LOG(string)                     SC_Printf("%s.\r\n",string)
#define   SC_INFO1_LOG(string, para1)               SC_Printf("%s %d.\r\n", string, para1)
#define   SC_NORMAL1_LOG(string, para1)             SC_Printf("%s %d.\r\n", string, para1)
#define   SC_WARNING1_LOG(string, para1)            SC_Printf("%s %d.\r\n", string, para1)
#define   SC_ERROR_LOG(string)                      SC_Printf("%s \r\n", string)
#define   SC_ERROR1_LOG(string, para1)              SC_Printf("%s %d.\r\n", string, para1)
#define   SC_ERROR2_LOG(string, para1, para2)       SC_Printf("%s %d, %d.\r\n", string, para1, para2)

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/

enum SC_KEY_TYPE_ENUM
{
    SC_KEY_TYPE_SSK                     = 0x00,             /* SSK */
    SC_KEY_TYPE_DSSK                    = 0x01,             /* DSSK */
    SC_KEY_TYPE_IPK                     = 0x02,             /* IPK */
    SC_KEY_TYPE_BUTT
};
typedef VOS_UINT8 SC_KEY_TYPE_ENUM_UINT8;
enum SC_CRYPTO_PASSWORD_TYPE_ENUM
{
    SC_CRYPTO_PASSWORD_TYPE_CK          = 0x00,             /* CK������ */
    SC_CRYPTO_PASSWORD_TYPE_DK          = 0x01,             /* DK������ */
    SC_CRYPTO_PASSWORD_TYPE_BUTT
};
typedef VOS_UINT8 SC_CRYPTO_PASSWORD_TYPE_ENUM_UINT8;


enum SC_SECRET_FILE_TYPE_ENUM
{
    SC_SECRET_FILE_TYPE_CK              = 0x00,             /* CK-FILE */
    SC_SECRET_FILE_TYPE_DK              = 0x01,             /* DK-FILE */
    SC_SECRET_FILE_TYPE_AK              = 0x02,             /* AK-FILE */
    SC_SECRET_FILE_TYPE_PI              = 0x03,             /* PI-FILE */
    SC_SECRET_FILE_TYPE_IMEI_I0         = 0x04,             /* IMEI-FILE ��0 */
    SC_SECRET_FILE_TYPE_IMEI_I1         = 0x05,             /* IMEI-FILE ��1 */

    SC_SECRET_FILE_TYPE_BUTT
};
typedef VOS_UINT8 SC_SECRET_FILE_TYPE_ENUM_UINT8;

/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/
/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/
/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/
/*****************************************************************************
  7 STRUCT����
*****************************************************************************/


typedef struct
{
    VOS_UINT32                          ulFileMagicMUM;
    VOS_UINT32                          ulFileLen;
    VOS_UINT32                          ulFileOffset;
    VOS_CHAR                            acFilePath[SC_FILE_PATH_LEN];
}SC_BACKUP_EACH_FILE_INFO_STRU;


typedef struct
{
    VOS_UINT32                         ulBackMagicMUM;
    VOS_UINT32                         ulTotaleSize;
    SC_BACKUP_EACH_FILE_INFO_STRU      astSCEachFileInfo[SC_SECRET_FILE_TYPE_BUTT*2];
    VOS_CHAR                           aucFileData[4];
}SC_BACKUP_FILE_INFO_STRU;

/*****************************************************************************
  8 UNION����
*****************************************************************************/
/*****************************************************************************
  9 OTHERS����
*****************************************************************************/
/*****************************************************************************
  10 ��������
*****************************************************************************/
extern SC_ERROR_CODE_ENUM_UINT32 SC_COMM_GenerateKey(
    VOS_CHAR                           *pcData,
    VOS_UINT32                          ulLen,
    VOS_UINT8                          *pucKey,
    VOS_UINT32                          ulKeyLen
);

extern SC_ERROR_CODE_ENUM_UINT32 SC_COMM_ReadSCFileAndCmpSign(
    SC_SECRET_FILE_TYPE_ENUM_UINT8      enFileType,
    VOS_UINT8                          *pucContent,
    VOS_UINT32                          ulContentLen
);

extern SC_ERROR_CODE_ENUM_UINT32 SC_COMM_WriteSecretFile(
    SC_SECRET_FILE_TYPE_ENUM_UINT8      enFileType,
    VOS_UINT8                          *pucContent,
    VOS_UINT32                          ulContentLen
);

extern SC_ERROR_CODE_ENUM_UINT32 SC_COMM_GenerateCryptoPwd(
    SC_CRYPTO_PASSWORD_TYPE_ENUM_UINT8  enPwdType,
    VOS_UINT8                          *pucPwd,
    VOS_UINT8                           ucPwdLen,
    VOS_UINT8                          *pucCryptoPwd,
    VOS_UINT32                          ulCryptoPwdLen
);

extern SC_ERROR_CODE_ENUM_UINT32 SC_COMM_RsaEncrypt(
    VOS_UINT8                          *pucRawData,
    VOS_UINT32                          ulLen,
    VOS_UINT8                          *pucCipherData,
    VOS_UINT32                         *pulCipherLen
);

extern SC_ERROR_CODE_ENUM_UINT32 SC_COMM_RsaDecrypt(
    VOS_UINT8                          *pucPwd,
    VOS_UINT32                          ulCipherLen,
    VOS_UINT8                          *pucPubContent,
    VOS_UINT32                         *pulPubLen
);


SC_ERROR_CODE_ENUM_UINT32 SC_COMM_GenerateSignCode(
    VOS_UINT8                          *pucContent,
    VOS_UINT32                          ulContentLen,
    VOS_UINT8                          *pucSignCode,
    VOS_UINT32                          ulSignCodeLen
);


extern SC_ERROR_CODE_ENUM_UINT32 SC_COMM_WriteFile(
    VOS_CHAR                           *pcFilePath,
    VOS_UINT8                          *pucContent,
    VOS_UINT32                          ulContentLen
);


extern SC_ERROR_CODE_ENUM_UINT32 SC_COMM_ReadFile(
    VOS_CHAR                           *pcFilePath,
    VOS_UINT8                          *pucContent,
    VOS_UINT32                          ulContentLen
);

/*****************************************************************************
 �� �� ��  : SC_COMM_GetUsimmCachedFile
 ��������  : SCģ���ȡUSIMMģ�黺���ļ���װ�ӿ�
 �������  :enModemID:Modem ID
 �������  :usFileID:��ȡ���ļ�ID
            pulDataLen:�����ļ������ݳ���
            ppucData:�����ļ����ݵĵ�ַ
            enAppType:Ӧ������
 �� �� ֵ  : VOS_OK/VOS_ERR
 �޸���ʷ      :
  1.��    ��   : 2013��8��15��
    ��    ��   : h59254
    �޸�����   : ��ʼ����
*****************************************************************************/
extern VOS_UINT32 SC_COMM_GetUsimmCachedFile(
    VOS_UINT16                          usFileID,
    VOS_UINT32                         *pulDataLen,
    VOS_UINT8                         **ppucData,
    USIMM_APP_TYPE_ENUM_UINT32          enAppType,
    MODEM_ID_ENUM_UINT16                enModemID);

/*****************************************************************************
�� �� ��  :SC_COMM_IsUsimServiceAvailable
��������  :��ȡ������״̬��
�������  :enModemID:Modem ID
           enService:����ID
�������  :��
�� �� ֵ  :PS_USIM_SERVICE_NOT_AVAILIABLE
           PS_USIM_SERVICE_NOT_AVAILIABLE
��������  :
�޶���¼  :
1.��    ��   : 2013��8��15��
  ��    ��   : h59254
  �޸�����   : ��ʼ����
*****************************************************************************/
extern VOS_UINT32 SC_COMM_IsUsimServiceAvailable(
    UICC_SERVICES_TYPE_ENUM_UINT32  enService,
    MODEM_ID_ENUM_UINT16            enModemID);

/*lint -e960 */
extern VOS_VOID SC_Printf(const VOS_CHAR *pcformat, ...);
/*lint +e960 */
#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif
