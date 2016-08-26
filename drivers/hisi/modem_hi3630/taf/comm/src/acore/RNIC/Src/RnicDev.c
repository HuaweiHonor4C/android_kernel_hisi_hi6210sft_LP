
#ifdef  __cplusplus
  #if  __cplusplus
  extern "C"{
  #endif
#endif

/******************************************************************************
   1 ͷ�ļ�����
******************************************************************************/
#include "RnicEntity.h"
#include "RnicDebug.h"
#include "RnicCtx.h"
#include "RnicDev.h"

/*****************************************************************************
    Э��ջ��ӡ��㷽ʽ�µ�.C�ļ��궨��
*****************************************************************************/

#define THIS_FILE_ID PS_FILE_ID_RNIC_DEV_C

/******************************************************************************
   2 �ⲿ������������
******************************************************************************/

/******************************************************************************
   3 ˽�ж���
******************************************************************************/

/******************************************************************************
   4 ȫ�ֱ�������
*****************************************************************************/
/* �������Ĳ������о�̬ӳ�� */
#if (VOS_OS_VER == VOS_WIN32)
    static struct net_device_ops rnic_ops;
#else
    static const struct net_device_ops rnic_ops = {
           .ndo_stop                = RNIC_StopNetCard,
           .ndo_open                = RNIC_OpenNetCard,
           .ndo_start_xmit          = RNIC_StartXmit,
           .ndo_set_mac_address     = RNIC_SetMacAddress,
           .ndo_change_mtu          = RNIC_ChangeMtu,
           .ndo_tx_timeout          = RNIC_ProcTxTimeout,
           .ndo_do_ioctl            = RNIC_Ioctrl,
           .ndo_get_stats           = RNIC_GetNetCardStats,
    };
#endif

#if (FEATURE_ON == FEATURE_RMNET_CUSTOM)
#define RNIC_DEV_NAME_PREFIX            "eth_x"
#else
#define RNIC_DEV_NAME_PREFIX            "rmnet"
#endif
    const RNIC_NETCARD_ELEMENT_TAB_STRU           g_astRnicManageTbl[RNIC_NET_ID_MAX_NUM] = {
        {
#if (FEATURE_ON == FEATURE_RMNET_CUSTOM)
        "",
#else
        "0",
#endif
          {{0x58, 0x02, 0x03, 0x04, 0x05, 0x06}, {0x00, 0x11, 0x09, 0x64, 0x01, 0x01}, 0x0008, {0, 0}},
          {{0x58, 0x02, 0x03, 0x04, 0x05, 0x06}, {0x00, 0x11, 0x09, 0x64, 0x01, 0x01}, 0xDD86, {0, 0}},
          MODEM_ID_0, RNIC_RM_NET_ID_0, {0, 0, 0, 0, 0}},

        { "1",
          {{0x58, 0x02, 0x03, 0x04, 0x05, 0x07}, {0x00, 0x11, 0x09, 0x64, 0x01, 0x02}, 0x0008, {0, 0}},
          {{0x58, 0x02, 0x03, 0x04, 0x05, 0x07}, {0x00, 0x11, 0x09, 0x64, 0x01, 0x02}, 0xDD86, {0, 0}},
          MODEM_ID_0, RNIC_RM_NET_ID_1, {0, 0, 0, 0, 0}},

        { "2",
          {{0x58, 0x02, 0x03, 0x04, 0x05, 0x08}, {0x00, 0x11, 0x09, 0x64, 0x01, 0x03}, 0x0008, {0, 0}},
          {{0x58, 0x02, 0x03, 0x04, 0x05, 0x08}, {0x00, 0x11, 0x09, 0x64, 0x01, 0x03}, 0xDD86, {0, 0}},
          MODEM_ID_0, RNIC_RM_NET_ID_2, {0, 0, 0, 0, 0}},
#if (FEATURE_ON == FEATURE_MULTI_MODEM)
        { "3",
          {{0x58, 0x02, 0x03, 0x04, 0x05, 0x09}, {0x00, 0x11, 0x09, 0x64, 0x01, 0x04}, 0x0008, {0, 0}},
          {{0x58, 0x02, 0x03, 0x04, 0x05, 0x09}, {0x00, 0x11, 0x09, 0x64, 0x01, 0x04}, 0xDD86, {0, 0}},
          MODEM_ID_1, RNIC_RM_NET_ID_3, {0, 0, 0, 0, 0}},

        { "4",
          {{0x58, 0x02, 0x03, 0x04, 0x05, 0x0a}, {0x00, 0x11, 0x09, 0x64, 0x01, 0x05}, 0x0008, {0, 0}},
          {{0x58, 0x02, 0x03, 0x04, 0x05, 0x0a}, {0x00, 0x11, 0x09, 0x64, 0x01, 0x05}, 0xDD86, {0, 0}},
          MODEM_ID_1, RNIC_RM_NET_ID_4, {0, 0, 0, 0, 0}},
#endif

        {
          "_ims",
          {{0x58, 0x02, 0x03, 0x04, 0x05, 0x0b}, {0x00, 0x11, 0x09, 0x64, 0x01, 0x06}, 0x0008, {0, 0}},
          {{0x58, 0x02, 0x03, 0x04, 0x05, 0x0b}, {0x00, 0x11, 0x09, 0x64, 0x01, 0x06}, 0xDD86, {0, 0}},
          MODEM_ID_0, RNIC_RM_NET_ID_VT, {0, 0, 0, 0, 0}},

    };

/******************************************************************************
   5 ����ʵ��
******************************************************************************/
/*****************************************************************************
 �� �� ��  : RNIC_StopNetCard
 ��������  : RNIC���ر�ʱ�Ĵ���
 �������  : pstNetDev:�����豸ָ��
 �������  : ��
 �� �� ֵ  : VOS_INT:RNIC_OK, RNIC_ERROR
 ���ú���  :
 ��������  :

 �޸���ʷ      :
 1.��    ��   : 2011��12��06��
   ��    ��   : ����
   �޸�����   : �����ɺ���
*****************************************************************************/
VOS_INT RNIC_StopNetCard(
    struct net_device                  *pstNetDev
)
{
    RNIC_NETCARD_DEV_INFO_STRU         *pstPriv;

    /* �������Ϊ�գ��򷵻ش��� */
    if (VOS_NULL_PTR == pstNetDev)
    {
        RNIC_DEV_ERR_PRINTK("RNIC_StopNetCard:net ptr is Null!");
        return RNIC_ERROR;
    }

    /* ��ȡ����˽������ */
    pstPriv = (RNIC_NETCARD_DEV_INFO_STRU *)netdev_priv(pstNetDev);
    if (VOS_NULL_PTR == pstPriv)
    {
        RNIC_DEV_ERR_PRINTK("RNIC_StopNetCard:priv ptr is Null!");
        return RNIC_ERROR;
    }

    /* ʹ��netif_stop_queue()ֹͣ�����������շ� */
    netif_stop_queue(pstNetDev);

    /* ��˽�������е�����״̬��־��Ϊ�ر� */
    pstPriv->enStatus = RNIC_NETCARD_STATUS_CLOSED;

    return RNIC_OK;

}

/*****************************************************************************
 �� �� ��  : RNIC_OpenNetCard
 ��������  : RNIC����ʱ�Ĵ���
 �������  : pstNetDev:�����豸ָ��
 �������  : ��
 �� �� ֵ  : VOS_INT:RNIC_OK, RNIC_ERR, RNIC_BUSY
 ���ú���  :
 ��������  :

 �޸���ʷ      :
 1.��    ��   : 2011��12��06��
   ��    ��   : ����
   �޸�����   : �����ɺ���
*****************************************************************************/
VOS_INT RNIC_OpenNetCard(
    struct net_device                  *pstNetDev
)
{
    RNIC_NETCARD_DEV_INFO_STRU         *pstPriv;

    /* �������Ϊ�գ��򷵻ش��� */
    if (VOS_NULL_PTR == pstNetDev)
    {
        RNIC_DEV_ERR_PRINTK("RNIC_OpenNetCard:net ptr is Null!");
        return RNIC_ERROR;
    }

    /* ��ȡ����˽������ */
    pstPriv = (RNIC_NETCARD_DEV_INFO_STRU *)netdev_priv(pstNetDev);
    if (VOS_NULL_PTR == pstPriv)
    {
        RNIC_DEV_ERR_PRINTK("RNIC_OpenNetCard:priv ptr is Null!");
        return RNIC_ERROR;
    }

    /* ���豸����Ѿ��� */
    if (RNIC_NETCARD_STATUS_OPENED == pstPriv->enStatus)
    {
        RNIC_DEV_ERR_PRINTK("RNIC_OpenNetCard:NetCard is opened");
        /* ���ش�����EBUSY */
        return RNIC_BUSY;
    }

    /* ���������������� */
    netif_start_queue(pstNetDev);

    /* ��˽�������е�����״̬��־��Ϊ�� */
    pstPriv->enStatus = RNIC_NETCARD_STATUS_OPENED;

    return RNIC_OK;

}


netdev_tx_t RNIC_StartXmit(
    struct sk_buff                     *pstSkb,
    struct net_device                  *pstNetDev
)
{
    RNIC_NETCARD_DEV_INFO_STRU         *pstPriv = VOS_NULL_PTR;
    VOS_UINT8                           ucNetIndex;


    /* ���������Ч�� */
    if (VOS_NULL == pstSkb)
    {
        /* �澯��Ϣ */
        RNIC_DEV_ERR_PRINTK("RNIC_StartXmit:skb is invalid!");

        return NETDEV_TX_OK;
    }

    /* ��������Ƿ�Ϊ�� */
    if (VOS_NULL == pstNetDev)
    {
        /* �ô���¼�����������󶪰�����,��������������ǲ�֪���ĸ����������
           Ŀǰ�����ֶ�����¼������0���� */
        RNIC_DBG_NETCAED_UL_DISCARD_NUM(1, RNIC_RM_NET_ID_0);

        /* �ͷ��ڴ� */
        IMM_ZcFree((IMM_ZC_STRU *)pstSkb);

        /* �澯��Ϣ */
        RNIC_DEV_ERR_PRINTK("RNIC_StartXmit:net ptr is Null!");

        return NETDEV_TX_OK;
    }
    /* ���������豸��˽�����ݻ�ȡ��Ӧ����ID */
    pstPriv    = (RNIC_NETCARD_DEV_INFO_STRU *)netdev_priv(pstNetDev);

    ucNetIndex = pstPriv->enRmNetId;

    if (ucNetIndex >= RNIC_NET_ID_MAX_NUM)
    {
        /* �ô���¼�����������󶪰�����,��������������ǲ�֪���ĸ����������
           Ŀǰ�����ֶ�����¼������0���� */
        RNIC_DBG_NET_ID_UL_DISCARD_NUM(1, RNIC_RM_NET_ID_0);

        /* �ͷ��ڴ� */
        IMM_ZcFree((IMM_ZC_STRU *)pstSkb);

        /* �澯��Ϣ */
        RNIC_DEV_ERR_PRINTK("RNIC_StartXmit:net index is Null!");

        return NETDEV_TX_OK;
    }
    /* Modified by l60609 for L-C��������Ŀ, 2014-01-06, Begin */

    /* ��ӡ�յ�TCP/IPЭ��ջ������ */
    /* RNIC �������ݴ�ӡ���أ���ӡ�յ�TCP/IPЭ��ջ������ */
    if (VOS_TRUE == g_ulRnicPrintUlDataFlg)
    {
        RNIC_ShowDataFromIpStack(pstSkb);
    }

    skb_pull(pstSkb, RNIC_ETH_HDR_SIZE);

    /* ��ӡȥmacͷ������ */
    /* RNIC �������ݴ�ӡ���أ���ӡȥmacͷ������ */
    if (VOS_TRUE == g_ulRnicPrintUlDataFlg)
    {
        RNIC_ShowDataDelMacHead(pstSkb);
    }

    if (RNIC_MODEM_TYPE_INSIDE == RNIC_GET_SPEC_NET_MODEM_TYPE(ucNetIndex))
    {
        return RNIC_RcvInsideModemUlData(pstSkb, pstNetDev, pstPriv, ucNetIndex);
    }
#if (FEATURE_ON == FEATURE_CL_INTERWORK)
    else if (RNIC_MODEM_TYPE_OUTSIDE == RNIC_GET_SPEC_NET_MODEM_TYPE(ucNetIndex))
    {
        return RNIC_RcvOutsideModemUlData(pstSkb, pstNetDev, pstPriv, ucNetIndex);
    }
#endif
    else
    {
        /* �ͷ��ڴ� */
        IMM_ZcFree((IMM_ZC_STRU *)pstSkb);
        /* �Ƿ��������ͳ�� */
        return NETDEV_TX_OK;
    }

    /* Modified by l60609 for L-C��������Ŀ, 2014-01-06, End */
}

/*****************************************************************************
 �� �� ��  : RNIC_SetMacAddress
 ��������  : RNIC����������MAC��ַ�Ĵ���
 �������  : pstNetDev:�����豸ָ��
             pMacAddr :MAC��ַ
 �������  : ��
 �� �� ֵ  : VOS_INT:RNIC_OK, RNIC_ADDR_INVALID
 ���ú���  :
 ��������  :

 �޸���ʷ     :
 1.��    ��   : 2011��12��06��
   ��    ��   : ����
   �޸�����   : �����ɺ���
*****************************************************************************/
VOS_INT RNIC_SetMacAddress(
    struct net_device                  *pstNetDev,
    void                               *pMacAddr
)
{
    struct sockaddr                    *pstAddr;
    VOS_INT                             lisValid;

    /* ����ת�� */
    pstAddr                             = (struct sockaddr *)pMacAddr;

    /* ����ָ��Ϊ�� */
    if (VOS_NULL_PTR == pstNetDev)
    {
        RNIC_DEV_ERR_PRINTK("RNIC_SetMacAddress:net ptr is Null!");

        return RNIC_ERROR;
    }

    /* MAC��ַΪ��Чֵ */
    lisValid = is_valid_ether_addr((VOS_UINT8 *)pstAddr->sa_data);
    if (VOS_FALSE == lisValid)
    {
        RNIC_DEV_ERR_PRINTK("RNIC_SetMacAddress:Ether addr is invalid!");

        return RNIC_ADDR_INVALID;
    }

    /* ����ָ���dev_addrΪ�� */
    if (VOS_NULL_PTR == pstNetDev->dev_addr)
    {
        RNIC_DEV_ERR_PRINTK("RNIC_SetMacAddress:Net dev addr is null!");

        return RNIC_ERROR;
    }

    /* ��MAC��ַ��ֵ������ */
    memcpy(pstNetDev->dev_addr, pstAddr->sa_data, pstNetDev->addr_len);

    return RNIC_OK;

}

/*****************************************************************************
 �� �� ��  : RNIC_ChangeMtu
 ��������  : RNIC��������MTU��С
 �������  : pstNetDev:�����豸ָ��
             lNewMtu  :MTUֵ
 �������  : ��
 �� �� ֵ  : VOS_INT:RNIC_OK, RNIC_ERROR, RNIC_OUT_RANGE
 ���ú���  :
 ��������  :

 �޸���ʷ     :
 1.��    ��   : 2011��12��06��
   ��    ��   : ����
   �޸�����   : �����ɺ���
*****************************************************************************/
VOS_INT RNIC_ChangeMtu(
    struct net_device                  *pstNetDev,
    VOS_INT                             lNewMtu
)
{
    /* ����ָ��Ϊ�� */
    if (VOS_NULL_PTR == pstNetDev)
    {
        RNIC_DEV_ERR_PRINTK("RNIC_ChangeMtu:net ptr is Null!");

        return RNIC_ERROR;
    }

    /* new_mtu���Ȳ�����Ч��Χ�� */
    if (lNewMtu > RNIC_MAX_PACKET)
    {
        RNIC_DEV_ERR_PRINTK("RNIC_ChangeMtu:Mtu out of range!");

        return RNIC_OUT_RANGE;
    }

    /* ����mtu��ɸ�ֵ */
    pstNetDev->mtu = (VOS_UINT)lNewMtu;

    return RNIC_OK;

}

/*****************************************************************************
 �� �� ��  : RNIC_Tx_Timeout
 ��������  : RNIC���ͳ�ʱ������,Ŀǰ��Ϊ������ַ��ͳ�ʱ���,�ݲ����κδ���
             �����Ժ���չʹ��
 �������  : pstNetDev:�����豸ָ��
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
 1.��    ��   : 2011��12��06��
   ��    ��   : ����
   �޸�����   : �����ɺ���
*****************************************************************************/
VOS_VOID RNIC_ProcTxTimeout(
    struct net_device                  *pstNetDev
)
{
    if (VOS_NULL_PTR == pstNetDev)
    {
        RNIC_DEV_ERR_PRINTK("RNIC_ProcTxTimeout:net ptr is Null!");

        return;
    }

    return;
}

/*****************************************************************************
 �� �� ��  : RNIC_Ioctrl
 ��������  : RNIC��ioctrl����,Ŀǰû�������ioctrl,�����Ժ���չ
 �������  : pstNetDev:�����豸ָ��
             pstIfr   :�û�����
             lCmd     :��������
 �������  : ��
 �� �� ֵ  : ������֧��  RNIC_NOTSUPP
 ���ú���  :
 ��������  :

 �޸���ʷ      :
 1.��    ��   : 2011��12��06��
   ��    ��   : ����
   �޸�����   : �����ɺ���
*****************************************************************************/
VOS_INT RNIC_Ioctrl(
    struct net_device                  *pstNetDev,
    struct ifreq                       *pstIfr,
    VOS_INT                             lCmd
)
{
    return RNIC_NOTSUPP;
}

/*****************************************************************************
 �� �� ��  : RNIC_GetNetCardStats
 ��������  : ��ȡRNIC����ͳ����Ϣ
 �������  : pstNetDev:�����豸ָ��
 �������  : ��
 �� �� ֵ  : net_device_stats
 ���ú���  :
 ��������  :

 �޸���ʷ     :
 1.��    ��   : 2011��12��06��
   ��    ��   : ����
   �޸�����   : �����ɺ���
*****************************************************************************/
struct net_device_stats *RNIC_GetNetCardStats(
    struct net_device                  *pstNetDev
)

{
    RNIC_NETCARD_DEV_INFO_STRU         *pstPriv ;

    if (VOS_NULL_PTR == pstNetDev)
    {
        RNIC_DEV_ERR_PRINTK("RNIC_GetNetCardStats:net ptr is Null!");

        return VOS_NULL_PTR;
    }

    /* ��ȡ˽������ */
    pstPriv = (RNIC_NETCARD_DEV_INFO_STRU *)netdev_priv(pstNetDev);
    if (VOS_NULL_PTR == pstPriv)
    {
        RNIC_DEV_ERR_PRINTK("RNIC_GetNetCardStats:Priv ptr is Null!");

        return VOS_NULL_PTR;
    }

    /* ���豸��ͳ����Ϣ���� */
    return &pstPriv->stStats;
}


VOS_VOID RNIC_DeinitNetCard(
    VOS_VOID                           *pNetDev
)
{
    struct net_device                  *pstNetDev;
    RNIC_NETCARD_DEV_INFO_STRU         *pstPriv;

    pstNetDev                           = (struct net_device *)pNetDev;

    if (VOS_NULL_PTR == pstNetDev)
    {
        RNIC_DEV_ERR_PRINTK("RNIC_DeinitNetCard:net ptr is Null!");

        return;
    }

    /* ��ȡ����˽������ */
    pstPriv = (RNIC_NETCARD_DEV_INFO_STRU *)netdev_priv(pstNetDev);
    if (pstPriv->enRmNetId >= RNIC_NET_ID_MAX_NUM)
    {
        return;
    }

    /* �ر��ز� */
    netif_carrier_off(pstNetDev);

    /* ֹͣ������������ */
    netif_stop_queue(pstNetDev);

    /* ȥע�������豸 */
    unregister_netdev(pstNetDev);

    /* �ͷ������豸 */
    RNIC_SetSpecNetCardPrivate(VOS_NULL_PTR, pstPriv->enRmNetId);

    free_netdev(pstNetDev);

    return;

}
VOS_INT __init RNIC_InitNetCard(VOS_VOID)
{
    struct net_device                  *pstNetDev   = VOS_NULL_PTR;
    VOS_INT                             lRegRst;
    RNIC_NETCARD_DEV_INFO_STRU         *pstPriv ;
    RNIC_NETCARD_DEV_INFO_STRU         *pstNetCardPrivate ;
    VOS_UINT8                           ucIndex;
    RNIC_CTX_STRU                      *pstRnicCtx;

#if (FEATURE_ON == FEATURE_MULTI_MODEM)
    VOS_UINT8                           aucAddr[RNIC_NET_ID_MAX_NUM][RNIC_MAC_ADDR_LEN] = {
                                                {0x58,0x02,0x03,0x04,0x05,0x06},
                                                {0x58,0x02,0x03,0x04,0x05,0x07},
                                                {0x58,0x02,0x03,0x04,0x05,0x08},
                                                {0x58,0x02,0x03,0x04,0x05,0x09},
                                                {0x58,0x02,0x03,0x04,0x05,0x0a},
                                                {0x58,0x02,0x03,0x04,0x05,0x0b}
                                               };
#else
    VOS_UINT8                           aucAddr[RNIC_NET_ID_MAX_NUM][RNIC_MAC_ADDR_LEN] = {
                                               {0x58,0x02,0x03,0x04,0x05,0x06},
                                               {0x58,0x02,0x03,0x04,0x05,0x07},
                                               {0x58,0x02,0x03,0x04,0x05,0x08},
                                               {0x58,0x02,0x03,0x04,0x05,0x0b}
                                               };
#endif

    printk("RNIC_InitNetCard,entry,%u",VOS_GetSlice());

    pstRnicCtx                          = VOS_NULL_PTR;
    pstRnicCtx = RNIC_GetRnicCtxAddr();
    for (ucIndex = 0 ; ucIndex < RNIC_NET_ID_MAX_NUM ; ucIndex++)
    {
        /* ��ʼ������˽����Ϣ */
        pstRnicCtx->astSpecCtx[ucIndex].pstNetDevInfo    = VOS_NULL_PTR;
    }

    for (ucIndex = 0 ; ucIndex < RNIC_NET_ID_MAX_NUM ; ucIndex++)
    {
        /* ���������豸netdev��˽������ */
        /* alloc_etherdev����ӿڷ�����net_device�� RNIC_NETCARD_DEV_INFO_STRU�����ӿڵ��ڴ�
           RNIC_NETCARD_DEV_INFO_STRU�ṹ�ҽ���net_device�ĺ��� */
        pstNetDev = alloc_etherdev(sizeof(RNIC_NETCARD_DEV_INFO_STRU));

        /*��������ʧ�ܣ������豸ָ��ΪNULL */
        if (VOS_NULL_PTR == pstNetDev)
        {
            RNIC_DEV_ERR_PRINTK("RNIC_InitNetCard:net ptr is Null!");
            return RNIC_NOMEM;
        }

        /* �����豸��ַΪ��ʱ */
        if (VOS_NULL_PTR == pstNetDev->dev_addr)
        {
            RNIC_DEV_ERR_PRINTK("RNIC_InitNetCard:net addr ptr is Null!");
            free_netdev(pstNetDev);
            return RNIC_NOMEM;
        }

        /* ���豸����MAC��ַ,�Ժ���Ҫ��̶�ֵ */
        VOS_MemCpy(pstNetDev->dev_addr, aucAddr[ucIndex], RNIC_MAC_ADDR_LEN);

        /* ����Ĭ�ϵ�MTUֵ */
        pstNetDev->mtu = RNIC_DEFAULT_MTU;

#if (VOS_OS_VER == VOS_WIN32)
        sprintf(pstNetDev->name, "%s%s",
            RNIC_DEV_NAME_PREFIX, g_astRnicManageTbl[ucIndex].pucRnicNetCardName);
#else
        snprintf(pstNetDev->name, sizeof(pstNetDev->name),
            "%s%s",
            RNIC_DEV_NAME_PREFIX, g_astRnicManageTbl[ucIndex].pucRnicNetCardName);
#endif

        /* �����뵽��net_device�ṹ���豸ָ��ĺ�������и�ֵ */
#if (VOS_OS_VER == VOS_WIN32)

#else
        pstNetDev->netdev_ops = &rnic_ops;
#endif

        /* ��ȡ����˽����������ַ������������������ */
        pstPriv = (RNIC_NETCARD_DEV_INFO_STRU *)netdev_priv(pstNetDev);
        pstPriv->enRmNetId = ucIndex;
        RNIC_SetSpecNetCardPrivate(pstPriv, ucIndex);

        /* ����������ַ������˽�������� */
        pstNetCardPrivate = RNIC_GetSpecNetCardPrivateAddr(ucIndex);
        pstNetCardPrivate->pstNetDev = pstNetDev;

        /* �ر��ز� */
        netif_carrier_off(pstNetDev);

        /* ֹͣ������������ */
        netif_stop_queue(pstNetDev);

        /* ����register_netdev������Netcard����ע�� */
        lRegRst = register_netdev(pstNetDev);
        if (VOS_OK != lRegRst)
        {
            /*  ע��ʧ���ͷŴ�����RNIC�豸 */
            free_netdev(pstNetDev);

            RNIC_DEV_ERR_PRINTK("RNIC_InitNetCard:Register netdev failed!");

            return RNIC_STATE;
        }

        /* ���ز� */
        netif_carrier_on(pstNetDev);

        /* ���������������� */
        netif_start_queue(pstNetDev);
    }

    printk("RNIC_InitNetCard,eixt,%u",VOS_GetSlice());

    /* ���سɹ� */
    return RNIC_OK;
}

#if (VOS_LINUX == VOS_OS_VER)
#if (FEATURE_ON == FEATURE_DELAY_MODEM_INIT)
module_init(RNIC_InitNetCard);
#endif
#endif



#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif


