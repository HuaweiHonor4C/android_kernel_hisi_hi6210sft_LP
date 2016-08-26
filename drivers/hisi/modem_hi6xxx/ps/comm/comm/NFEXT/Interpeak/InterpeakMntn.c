/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : InterpeakMntn.c
  �� �� ��   : ����
  ��    ��   : caikai
  ��������   : 2013��7��22��
  ����޸�   :
  ��������   : INTERPEAK MNTNģ��ʵ��
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2013��7��22��
    ��    ��   : caikai
    �޸�����   : �����ļ�

******************************************************************************/

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif



/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "vos.h"
#include <string.h>
#include "product_config.h"

#if( FEATURE_ON == FEATURE_IMS )
#if ((VOS_OS_VER == VOS_RTOSCK) || ((VOS_OS_VER == VOS_WIN32) && (VOS_PC_TEST == VOS_RTOSCK)))

#else

#if (!defined(__UT_CENTER__))
#include "ipcom_type.h"
#include "ipcom_clib.h"
#include "ipcom_sysctl.h"
#include "ipcom_pkt.h"
#include "ipcom_netif.h"
#include "ipcom_cmd.h"
#include "ipnet_routesock.h"

#endif
#include "InterpeakMntnOut.h"





/*****************************************************************************
    Э��ջ��ӡ��㷽ʽ�µ�.C�ļ��궨��
*****************************************************************************/


/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/
#define IP_AF_INET_6                          (28)



/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/
/*lint -save -e958 */


/*****************************************************************************
 �� �� ��  : IPS_MNTN_CCORE_GetSysInfo
 ��������  : ��ȡInterpeakϵͳ��Ϣ
 �������  : name           -   ϵͳ����
             pucData        -   ����ָ��
             pulTotalLen    -   ��ά�ɲ���Ϣ�ܳ���
 �������  : ��
 �� �� ֵ  : �ɹ�:IPS_MNTN_OK��ʧ��ΪIPS_MNTN_ERROR
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2011��8��3��
    ��    ��   : �����
    �޸�����   : �����ɺ���
  2.��    ��   : 2013��7��30��
    ��    ��   : caikai
    �޸�����   : VoLTE������Ҫ������ֲ��V9

*****************************************************************************/
IP_PUBLIC int IPS_MNTN_CCORE_GetSysInfo
(
    int                                *alName,
    Ip_u8                              *pucData,
    Ip_u32                             *pulTotalLen
)
{
    Ip_size_t               ulSysDataLen;
    Ip_u32                  ulLen;

    ulLen           =   0;
    ulSysDataLen    =   0;

    /*����ϵͳ���������Ԥȡϵͳ��Ϣ����*/
    if (ipcom_sysctl(alName, 6, IP_NULL, &ulSysDataLen, IP_NULL, 0) < 0)
    {
        ipcom_printf("IPS_MNTN_GetSysInfo: ipnet_sysctl() failed: %s"IP_LF, ipcom_strerror(ipcom_errno));
        return IPS_MNTN_CCORE_ERROR;
    }

    /*������������Ϣ����ά�ɲ���Ϣ�ܳ��ȳ�Ԥ�ڣ����ȡϵͳ��Ϣʧ��*/
    ulLen           =   *pulTotalLen + ulSysDataLen + IPS_MNTN_CCORE_INFO_LEN_OFFSET;
    if(IPS_MNTN_CCORE_INFO_LEN < ulLen)
    {
        ipcom_printf("IPS_MNTN_GetSysInfo: len is over expect."IP_LF);
        return IPS_MNTN_CCORE_ERROR;
    }

    /*���ϵͳ��Ϣ����*/
    ipcom_memcpy(pucData, &ulSysDataLen, IPS_MNTN_CCORE_INFO_LEN_OFFSET);
    pucData                 +=  IPS_MNTN_CCORE_INFO_LEN_OFFSET;

    if (ipcom_sysctl(alName, 6, pucData, &ulSysDataLen, IP_NULL, 0) < 0)
    {
        ipcom_printf("IPS_MNTN_GetSysInfo: ipnet_sysctl() failed: %s"IP_LF, ipcom_strerror(ipcom_errno));
        return IPS_MNTN_CCORE_ERROR;
    }

    /*ˢ�¿�ά�ɲ���Ϣ�ܳ���*/
    (*pulTotalLen)          +=  (ulSysDataLen + IPS_MNTN_CCORE_INFO_LEN_OFFSET);

    return IPS_MNTN_CCORE_OK;
}

/*****************************************************************************
 �� �� ��  : IPS_MNTN_CCORE_GetIfconfigInfo
 ��������  : ��ȡ������������Ϣ
 �������  : pucData        -   ����ָ��
             pulTotalLen    -   ����Ϣ����
 �������  : ��
 �� �� ֵ  : �ɹ�:IPS_MNTN_OK��ʧ��ΪIPS_MNTN_ERROR
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2011��8��3��
    ��    ��   : �����
    �޸�����   : �����ɺ���
  2.��    ��   : 2013��7��30��
    ��    ��   : caikai
    �޸�����   : VoLTE������Ҫ������ֲ��V9

*****************************************************************************/
int IPS_MNTN_CCORE_GetIfconfigInfo
(
    Ip_u8                              *pucData,
    Ip_u32                             *pulTotalLen,
    Ip_u16                              usType
)
{
    int                         alName[6];
    int                         usRslt;
    Ip_u8                      *pucDataCur;
    struct Ipnet_if_msghdr     *pstIfm;
    struct Ipnet_ifa_msghdr    *pstIfa;
    Ip_u16                      usCount;
    struct Ip_sockaddr_in      *addrs[IPNET_RTAX_MAX];
    Ip_size_t                   if_data_len;
    Ip_size_t                   offset;

    /*����ϵͳ����*/
    alName[0] = IP_CTL_NET;
    alName[1] = IP_AF_ROUTE;
    alName[2] = 0;    /* Always 0 */
    alName[3] = 0;
    alName[4] = IP_NET_RT_IFLIST;
    alName[5] = 0;

    /*�����Ϣ����*/
    ipcom_memcpy(pucData, &usType, IPS_MNTN_CCORE_INFO_TYPE_LEN);
    pucData                 +=  IPS_MNTN_CCORE_INFO_TYPE_OFFSET;
    (*pulTotalLen)          +=  IPS_MNTN_CCORE_INFO_TYPE_OFFSET;

    /*��ȡ������������Ϣ*/
    usRslt = IPS_MNTN_CCORE_GetSysInfo(alName, pucData, pulTotalLen);

    if(IPS_MNTN_CCORE_ERROR == usRslt)
    {
        ipcom_printf("IPS_MNTN_CCORE_GetIfconfigInfo: IPS_MNTN_CCORE_GetSysInfo failed"IP_LF);
        return usRslt;
    }

    offset          = 0;
    if_data_len     = (*pulTotalLen) - IPS_MNTN_CCORE_INFO_TYPE_OFFSET - IPS_MNTN_CCORE_INFO_LEN_OFFSET;
    pucDataCur      = pucData + IPS_MNTN_CCORE_INFO_LEN_OFFSET;

    /*Ϊ��ASN�������������ά�ɲ����ݣ���Ҫ�������������������˼���IP��ַ*/
    while (if_data_len > (offset + sizeof(struct Ipnet_if_msghdr)))
    {
        pstIfm      = (struct Ipnet_if_msghdr *) (pucDataCur + offset);
        offset      += pstIfm->ifm_msglen;
        usCount     = 0;

        /*Խ�籣��*/
        if(offset > if_data_len)
        {
            break;
        }

        while (offset < if_data_len)
        {
            pstIfa = (struct Ipnet_ifa_msghdr *) (pucDataCur + offset);

            ipnet_cmd_init_addrs(pstIfa + 1, pstIfa->ifam_addrs, (struct Ip_sockaddr **) addrs);

            if (pstIfa->ifam_type != IPNET_RTM_NEWADDR || (addrs[IPNET_RTAX_IFA]->sin_family != IP_AF_INET && addrs[IPNET_RTAX_IFA]->sin_family != IP_AF_INET_6))
            {
                break;
            }

            offset += pstIfa->ifam_msglen;
            usCount++;
        }

        pstIfm->ifm_msglen =   usCount;
    }

    return usRslt;
}

/*****************************************************************************
 �� �� ��  : IPS_MNTN_CCORE_GetNetstatRoutes
 ��������  : ��ȡ·����Ϣ
 �������  : pucData        -   ����ָ��
             pulTotalLen    -   ����Ϣ����
 �������  : ��
 �� �� ֵ  : �ɹ�:IPS_MNTN_OK��ʧ��ΪIPS_MNTN_ERROR
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2011��8��3��
    ��    ��   : �����
    �޸�����   : �����ɺ���
  2.��    ��   : 2013��7��30��
    ��    ��   : caikai
    �޸�����   : VoLTE������Ҫ������ֲ��V9

*****************************************************************************/
int IPS_MNTN_CCORE_GetNetstatRoutes
(
    Ip_u8                              *pucData,
    Ip_u32                             *pulTotalLen,
    Ip_u16                              usType
)
{
    int                     alName[6];
    int                     usRslt;

    /*����ϵͳ����*/
    alName[0] = IP_CTL_NET;
    alName[1] = IP_AF_ROUTE;
    alName[2] = 0;
    alName[3] = 0;
    alName[4] = IP_NET_RT_DUMP;
    alName[5] = 0;

    /*�����Ϣ����*/
    ipcom_memcpy(pucData, &usType, IPS_MNTN_CCORE_INFO_TYPE_LEN);
    pucData                 +=  IPS_MNTN_CCORE_INFO_TYPE_OFFSET;
    (*pulTotalLen)          +=  IPS_MNTN_CCORE_INFO_TYPE_OFFSET;

    /*��ȡ·����Ϣ*/
    usRslt = IPS_MNTN_CCORE_GetSysInfo(alName, pucData, pulTotalLen);

    return usRslt;
}

/*****************************************************************************
 �� �� ��  : IPS_MNTN_CCORE_GetIpsInfo
 ��������  : ��ȡInterpeakЭ��ջ������Ϣ
 �������  : pucData       ��ȡ����ָ��
             pusLen        ��ȡ���ݳ���
 �������  : ��
 �� �� ֵ  : �ɹ�:IPS_MNTN_OK��ʧ��ΪIPS_MNTN_ERROR
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2011��8��3��
    ��    ��   : �����
    �޸�����   : �����ɺ���
  2.��    ��   : 2013��7��30��
    ��    ��   : caikai
    �޸�����   : VoLTE������Ҫ������ֲ��V9

*****************************************************************************/
int IPS_MNTN_CCORE_GetIpsInfo
(
    unsigned char                      *pucData,
    unsigned int                       *pulLen,
    unsigned short                      usType
)
{
    (*pulLen)   = 0;

    switch(usType)
    {
        case ID_IPS_MNTN_CCORE_IFCONFIG_INFO :
            IPS_MNTN_CCORE_GetIfconfigInfo((Ip_u8 *)pucData, (Ip_u32 *)pulLen, (Ip_u16)usType);
            break;
        case ID_IPS_MNTN_CCORE_NETSTAT_ROUTES_INFO :
            IPS_MNTN_CCORE_GetNetstatRoutes((Ip_u8 *)pucData, (Ip_u32 *)pulLen, (Ip_u16)usType);
            break;
        case ID_IPS_MNTN_CCORE_NETSTAT_ENTRIES_INFO :
            IPS_MNTN_CCORE_GetNetstatEntries((Ip_u8 *)pucData, (Ip_u32 *)pulLen, (Ip_u16)usType);
            break;
        case ID_IPS_MNTN_CCORE_NAT_RULES_INFO :
            IPS_MNTN_CCORE_GetNatRules((Ip_u8 *)pucData, (Ip_u32 *)pulLen, (Ip_u16)usType);
            break;
        case ID_IPS_MNTN_CCORE_NAT_STATS_INFO :
            IPS_MNTN_CCORE_GetNatStats((Ip_u8 *)pucData, (Ip_u32 *)pulLen, (Ip_u16)usType);
            break;
        case ID_IPS_MNTN_CCORE_NAT_PROXIES_INFO:
            IPS_MNTN_CCORE_GetNatProxies((Ip_u8 *)pucData, (Ip_u32 *)pulLen, (Ip_u16)usType);
            break;
        default:
            break;
    }

    return IPS_MNTN_CCORE_OK;
}
/*lint -restore */

#endif
#endif  /*FEATURE_ON == FEATURE_IMS*/

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif




