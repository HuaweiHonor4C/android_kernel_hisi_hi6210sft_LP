

#ifndef __TTF_COMM_H_
#define __TTF_COMM_H_

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/******************************************************************************
  1 ����ͷ�ļ�����
******************************************************************************/
#include "vos.h"
#include "PsLogdef.h"
#include "PsCommonDef.h"
#include "PsLib.h"
#include "PsTypeDef.h"
#include "LPSCommon.h"
#include "product_config.h"

/******************************************************************************
  2 �궨��
******************************************************************************/

#define PS_UE_CAP_2507_SUPPT                  (PS_CAP_SUPPORT)
#define PS_UE_CAP_1144_SUPPT                  (PS_CAP_SUPPORT)
#define PS_UE_CAP_V42_SUPPT                   (PS_CAP_SUPPORT)

#define     STATIC  static


/*��λ��*/
#define TTF_BIT_MOVE_24  (24)
#define TTF_BIT_MOVE_16  (16)
#define TTF_BIT_MOVE_8   (8)

/*λ�����*/
#define TTF_BIT_OPR_8    (0xFF)
#define TTF_BIT_OPR_16   (0xFFFF)
#define TTF_BIT_OPR_24   (0xFFFFFF)
#define TTF_BIT_OPR_32   (0xFFFFFFFF)

/*��4����UINT8�����UINT32, UINT8�Ӹ�λ����λ*/
#define TTF_CONN_UINT32_FROM_UINT8(ulNum, ucNum1, ucNum2, ucNum3, ucNum4)   \
{       \
    (ulNum) = 0;        \
    (ulNum) |= (VOS_UINT32)(((VOS_UINT32)(ucNum1)) << TTF_BIT_MOVE_24);     \
    (ulNum) |= (VOS_UINT32)(((VOS_UINT32)(ucNum2)) << TTF_BIT_MOVE_16);     \
    (ulNum) |= (VOS_UINT32)(((VOS_UINT32)(ucNum3)) << TTF_BIT_MOVE_8);     \
    (ulNum) |= (VOS_UINT32)(ucNum4);     \
}

#define TTF_MOD_GET(x, y)                       ((x) % (y))
#ifdef _lint
#define TTF_MOD_ADD_GU(x, y, z)                    (((x) + (y)) % (z))
#define TTF_MOD_SUB_GU(x, y, z)                    ((((x) + (z)) - (y)) % (z))

#define TTF_MOD_ADD(x, y, z)                    (((x) + (y)) % (z))
#define TTF_MOD_SUB(x, y, z)                    ((((x) + (z)) - (y)) % (z))
#else
#define TTF_MOD_ADD_GU(x, y, z)                 (((x) + (y)) % (z))
#define TTF_MOD_SUB_GU(x, y, z)                 ((((x) + (z)) - (y)) % (z))

#define TTF_MOD_ADD(x, y, z)                    ((((x) + (y)) < (z))? ((x) + (y)):(((x) + (y)) - (z)))
#define TTF_MOD_SUB(x, y, z)                    (((x) < (y))?(((x) + (z)) - (y)):((x) - (y)))
#endif


/* X����Y������ȡ�� */
#define TTF_CEIL(x, y) \
            /*lint -e{961} */ \
            ((0==(x)%(y))?((x)/(y)):((x)/(y)+1))

#define TTF_MIN(x, y)                           (((x)<(y))?(x):(y))
#define TTF_MAX(x, y)                           (((x)>(y))?(x):(y))

/* SN��[lower, upper]������ */
#define TTF_SN_OUTSIDE_WINDOW(sn, lowerEdge, upperEdge, module)\
                                                            ((TTF_MOD_SUB(sn, lowerEdge, module) > TTF_MOD_SUB(sn, upperEdge, module))&&(sn != upperEdge))
/* SN��[lower, upper]�����ڣ���lower upper���±߽� */
#define TTF_SN_WITHIN_WINDOW(sn, lowerEdge, upperEdge, module)\
            /*lint -e{961} */ \
            ((TTF_MOD_SUB(sn, lowerEdge, module) < TTF_MOD_SUB(sn, upperEdge, module))||(sn == upperEdge))

#define TTF_SN1_BELOW_SN2_WITHIN_WINDOW(sn1, sn2, upperEdge, module)\
            (TTF_MOD_SUB(upperEdge, sn1, module) > TTF_MOD_SUB(upperEdge, sn2, module))

#define TTF_SN_IN_WINDOW(sn, lowerEdge, winSize, module) \
            ( TTF_MOD_SUB((sn), (lowerEdge), (module)) < (winSize) )
/*���ݿ��usSn����ȡ���ڴ����еĴ洢λ������:
usSns:��ŵ�ģ
usWndSize:���ڴ�С
usHeader:������ĳһ���ΪusHeaderSn�Ľڵ㣬�ڴ����ж�Ӧ�Ĵ洢λ������
usHeaderSn:������ĳһ�ڵ�Ŀ��
usSn:��ǰ������ȡ��洢λ�õĿ�Ŀ��*/
#define TTF_GET_WND_POS(usSns, usWndSize, usHeader, usHeaderSn, usSn)   \
    TTF_MOD_GET(((usHeader) + TTF_MOD_SUB((usSn), (usHeaderSn), (usSns))), (usWndSize))

/* change bit to byte */
#define TTF_BIT2BYTE(BitLen)        (((BitLen) + 7) >> 3)
/* change byte to bit */
#define TTF_BYTE2BIT(ByteLen)       (VOS_UINT32)(((VOS_UINT32)(ByteLen)) << 3)

/*=============*/   /*��ȡ�ṹ���Ա����offset�İ취*/
#define TTF_OFFSET_OF(s, m) /*lint -e(413)*/((VOS_SIZE_T)(VOS_UINT_PTR)(&(((s *)0)->m)))

#define TTF_GET_OFFSET(offset, s, m) \
{ \
    /*lint -e545*/ \
    /*lint -e413*/ \
    /*lint -e831*/ \
    offset  = TTF_OFFSET_OF(s, m); \
    /*lint +e831*/ \
    /*lint +e413*/ \
    /*lint +e545*/ \
}

/* ��һ����������ucSrc��������һ����������ucDest�д�bitstart(ȡֵ��Χ0��7)��ʼ��bitlen(ȡֵ��Χ1��8)���ȵ�IE��,
   �������Ч���������߱�֤,����ģ��������ƶ�������ֵ�ĺꡣ ucDest��ʹ��ǰ��Ҫ���㡣*/
#define TTF_SET_UC_BIT(ucSrc, ucDest, bitstart, bitlen) \
((ucDest) |= (VOS_UINT8)( (VOS_UINT8)((VOS_UINT32)(ucSrc) << (8 - bitlen)) >> ((8 - bitstart) - bitlen) ))

/* ��һ����������ucSrc��������һ����������ucDest�д����λ��ʼ��bitlen(ȡֵ��Χ1��8)���ȵ�IE��,
   �������Ч���������߱�֤,����ģ��������ƶ�������ֵ�ĺꡣ ucDest��ʹ��ǰ��Ҫ���㡣*/
#define TTF_SET_UC_HIGH_BIT(ucSrc, ucDest, bitlen) \
((ucDest) |= (VOS_UINT8)( (VOS_UINT8)((VOS_UINT32)(ucSrc) << (8 - bitlen)) ))

/* ��һ����������usSrc��������һ����������usDest�д�bitstart(ȡֵ��Χ0��15)��ʼ��bitlen(ȡֵ��Χ1��16)���ȵ�IE��,
   �������Ч���������߱�֤,����ģ��������ƶ�������ֵ�ĺꡣ usDest��ʹ��ǰ��Ҫ���㡣*/
#define TTF_SET_US_BIT(usSrc, usDest, bitstart, bitlen) \
((usDest) |= (VOS_UINT16)( (VOS_UINT16)((VOS_UINT32)(usSrc) << (16 - bitlen)) >> ((16 - bitstart) - bitlen) ))

/* ��һ����������usSrc��������һ����������usDest�д����λ��ʼ��bitlen(ȡֵ��Χ1��16)���ȵ�IE��,
   �������Ч���������߱�֤,����ģ��������ƶ�������ֵ�ĺꡣ ucDest��ʹ��ǰ��Ҫ���㡣*/
#define TTF_SET_US_HIGH_BIT(usSrc, usDest, bitlen) \
((usDest) |= (VOS_UINT16)( (VOS_UINT16)((VOS_UINT32)(usSrc) << (16 - bitlen)) ))

/* ��һ��US�������л�ȡ��bitstart(ȡֵ��Χ0��15)��ʼ��bitlen(ȡֵ��Χ1��16)���ȵ�ֵ,
   �������Ч���������߱�֤,����ģ��������ƶ�������ֵ�ĺ� */
#define TTF_GET_US_BIT(us, bitstart, bitlen) \
((VOS_UINT16)((VOS_UINT32)(us) << ((16 - (bitstart)) - (bitlen))) >> (16 - (bitlen)))

#define TTF_GET_US_HIGH_BIT(us, bitlen) \
((VOS_UINT16)((us)  >> (16 - (bitlen))))

/* ��һ��UC�������л�ȡ��bitstart(ȡֵ��Χ0��7)��ʼ��bitlen(ȡֵ��Χ1��8)���ȵ�ֵ,
   �������Ч���������߱�֤,����ģ��������ƶ�������ֵ�ĺ� */
#define TTF_GET_UC_BIT(uc, bitstart, bitlen) \
((VOS_UINT8)((VOS_UINT32)(uc) << ((8 - (bitstart)) - (bitlen))) >> (8 - (bitlen)))

/* ��һ����������uc�У���ȡ�����λ��ʼ��bitlen(ȡֵ��Χ1��8)���ȵ�IE,
   �������Ч���������߱�֤,����ģ��������ƶ�������ֵ�ĺꡣ */
#define TTF_GET_UC_HIGH_BIT(uc, bitlen) \
((VOS_UINT8)(uc) >> (8 - (bitlen)))

#define TTF_GET_HIGH_16BIT_FROM_32BIT(ul32BitValue) ((VOS_UINT16)((ul32BitValue) >> 16))
#define TTF_GET_LOW_16BIT_FROM_32BIT(ul32BitValue)  ((VOS_UINT16)((ul32BitValue) & 0xFFFF))
#define TTF_MAKE_32BIT(usHighVal, usLowVal)         ( (((VOS_UINT32)(usHighVal))<<16) | ((VOS_UINT32)((usLowVal) & 0xFFFF)) )
#define TTF_MAKE_16BIT(ucHighVal, ucLowVal)         ( (VOS_UINT16)(((VOS_UINT8)(ucLowVal)) | (((VOS_UINT16)((VOS_UINT8)(ucHighVal)))<<8)) )

#define TTF_SET_HIGH_16BIT_TO_32BIT(ul32BitVal, usHigh16BitVal) \
    ( (((VOS_UINT32)ul32BitVal) & 0xFFFF) | (((VOS_UINT32)usHigh16BitVal) << 16) )

#define TTF_GET_4BYTE_ALIGN_VALUE(ulSize)   ( ((ulSize) + 0x03) & (~0x03) )

#define TTF_GET_8BYTE_ALIGN_VALUE(ulSize)   ( ((ulSize) + 0x07) & (~0x07) )


/* ���ñ�־����λ��ֵΪ1��bitpos:[0..31] */
#define TTF_SET_A_BIT(value, bitpos)    ((value) |= (1UL << (bitpos)))

/* �����־����λ��ֵΪ0��bitpos:[0..31] */
#define TTF_CLEAR_A_BIT(value, bitpos)  ((value) &= (~(1UL << (bitpos))))

/* ��ȡ��־����λ��ֵ���������1��0��bitpos:[0..31] */
#define TTF_GET_A_BIT(value, bitpos)    (((value) & (1UL << (bitpos))) >> (bitpos))

/* ��ȡ����Ĵ�С */
#define TTF_GET_ARRAYSIZE(array)        (sizeof(array)/sizeof(array[0]))


/* ��һ����Ϣ�л�ȡ��Ϣ���͵ĺ꣬�����������Ч���������߱�֤ */
#define TTF_GET_MSGTYPE(pMsg) \
    (*(VOS_UINT16*)((VOS_UINT8*)(pMsg) + VOS_MSG_HEAD_LENGTH))

#if (OSA_CPU_CCPU == VOS_OSA_CPU)
#ifndef __PS_WIN32_RECUR__
#define TTF_TRACE_MSG(pMsg) OM_TraceMsgHook(pMsg)
#else
#define TTF_TRACE_MSG(pMsg) TTF_TraceMsgHook(pMsg)
#endif
#else
#define TTF_TRACE_MSG(pMsg)
#endif
/* �ط�ʱ��ʶ�Ƿ�ط�ST����ץ��Trace,UT����Ҳ��Ҫ */
#define RECUR_ST_TRACE      (1)
#define RECUR_OTHER_TRACE   (0)

/*����������ģ������ͬʱ��㵼��ȫ�ֱ���,������һ������ֵ
  ���е���ȫ�ֱ���ģ�飬NASÿһ���ӵ�һ�Σ�GRM��LLC����ʱ�����������
 */
#define GRM_MNTN_TIMER_PC_RECUR_LEN     60533
#define LLC_MNTN_TIMER_PC_RECUR_LEN     60503

/* 16bit 32 bit �Ĵ�����д */
#define TTF_WRITE_32REG(pAddr, value)       ( *((volatile VOS_UINT32 *)(pAddr)) = (value) )
#define TTF_WRITE_16REG(pAddr, value)       ( *((volatile VOS_UINT16 *)(pAddr)) = (value) )
#define TTF_READ_32REG(pAddr)               ( *((volatile VOS_UINT32 *)(pAddr)) )
#define TTF_READ_16REG(pAddr)               ( *((volatile VOS_UINT16 *)(pAddr)) )

/* 32 bit �Ĵ������� */
#define TTF_WRITE_32REG_MASK(pAddr,ulMask)  ( *(volatile VOS_UINT32 *)(pAddr) |= (ulMask) )

/* 32 bit �Ĵ������ */
#define TTF_CLEAR_32REG_MASK(pAddr,ulMask)  ( *(volatile VOS_UINT32 *)(pAddr) &= ~(ulMask) )

/* ��һ����Ϣ�л�ȡ��Ϣ���͵ĺ꣬�����������Ч���������߱�֤ */
#define TTF_GET_MSG_NAME(pRcvMsg)           (*((VOS_UINT32 *)(VOS_VOID *)((VOS_UINT8 *)(pRcvMsg) + VOS_MSG_HEAD_LENGTH)))
#define TTF_GET_MSG_SENDER_PID(pRcvMsg)     (*((VOS_UINT32 *)(VOS_VOID *)(pRcvMsg) + 1))
#define TTF_GET_MSG_RECV_PID(pRcvMsg)       (*((VOS_UINT32 *)(VOS_VOID *)(pRcvMsg) + 3))
#define TTF_GET_MSG_MSG_LEN(pRcvMsg)        (*((VOS_UINT32 *)(VOS_VOID *)(pRcvMsg) + 4))
#define TTF_GET_MSG_OPID(pRcvMsg)      (*(VOS_UINT16 *)(VOS_VOID*)((VOS_UINT8 *)pRcvMsg + 24))


/*������Ϣͷ������*/
#define TTF_SET_MSG_SENDER_PID(pRcvMsg, ulPid)          \
                                            (*((VOS_UINT32 *)(VOS_VOID *)(pRcvMsg) + 1) = (ulPid))
#define TTF_SET_MSG_RECV_PID(pRcvMsg, ulPid)          \
                                            (*((VOS_UINT32 *)(VOS_VOID *)(pRcvMsg) + 3) = (ulPid))
#define TTF_SET_MSG_LEN(pRcvMsg, ulLen)            \
                                            (*((VOS_UINT32 *)(VOS_VOID *)(pRcvMsg) + 4) = (ulLen))


#define  ETH_MAC_HEADER_LEN             (14)      /*��̫��֡ͷ����*/
/*Ethenet*/
#define ETH_MAC_ADDR_LEN                6         /*��̫��֡MAC��ַ����*/
#define ETH_MIN_FRAME_SIZE              60        /*��̫��֡��С����*/
#define ETH_CRC_LEN                     4
#define ETH_MAX_FRAME_SIZE              (1514)    /*��̫����󳤶�*/

/*ARP*/
#define ETH_ARP_REQ_TYPE                0x0100      /*ARP Request*/
#define ETH_ARP_RSP_TYPE                0x0200      /*ARP Reply*/
#define ETH_ARP_FIXED_MSG_LEN           8           /*ARP�̶����ֳ���*/

/*IP*/
/*#define IPPACKET_MIN_LEN                (1500)
 */
#define IPV4_FIX_HDR_LEN                (20)       /* IPV4�̶�ͷ����*/
#define IPV4_HDR_TTL                    (128)      /* IPV4 ͷ�е�TTL�ֶ�Ĭ��ֵ*/

#define IP_IPV4_VERSION                 (4)        /* IP V4�汾��      */
#define IP_PROTOCOL_UDP                 (0x11)     /* IP����Э����UDP  */
#define IP_PROTOCOL_TCP                 (0x06)     /* IP����Э����TCP  */
#define IP_PROTOCOL_ICMP                (0x01)     /* IP����Э����ICMP */

/*DHCP����Ŀ�Ķ˿�67,����Ϊ�����ֽ���*/
#define UDP_DHCP_SERVICE_PORT           (0x4300)   /* DHCP����Ķ˿ں� */
#define UDP_DHCP_CLIENT_PORT            (0x4400)   /* DHCP Client�Ķ˿ں�*/

#define TTF_L1_CACHE_SHIFT              (5)
#define TTF_L1_CACHE_BYTES              (1UL << TTF_L1_CACHE_SHIFT)


#define TTF_SMP_CACHE_BYTES             (TTF_L1_CACHE_BYTES)        /* Linux�汾�����ı�ʱ��Ҫ����check��ֵ */

#define TTF_DATA_ALIGN(X)	            (((X) + (TTF_SMP_CACHE_BYTES - 1)) & \
                                        ~(TTF_SMP_CACHE_BYTES - 1))

#if (FEATURE_ON == FEATURE_TCP_ACK_IN_FRONT)
#define IP_VER_MASK                     (0xF0)    /* ����ȡIPЭ��汾������ */
#define IP_HEADER_LEN_MASK              (0x0F)    /* ����ȡIP�ײ����ȵ����� */
#define IPV4_VER_VAL                    (0x40)    /* IP v4 */
#define IPV6_VER_VAL                    (0x60)    /* IP v6 */

#define PROTOCOL_POS                    (9)       /* Э���ʶ���IPͷ�����ֽ�Protocal ��ƫ�� */
#define NEXT_HEADER_POS                 (6)       /* Э���ʶ���IPͷ�����ֽ�Next header ��ƫ�� */

#define IPV4_HEAD_NORMAL_LEN            (20)      /* IPV4ͷ������ֵ */
#define IPV6_HEAD_NORMAL_LEN            (40)      /* IPV6ͷ������ֵ */

#define TCP_PROTOCOL_VAL                (0x06)    /* TCPЭ���ʶ��ֵ */
#define TCP_LEN_POS                     (12)      /* TCPͷ�������ֶ����TCPͷ�����ֽڵ�ƫ�� */
#define TCP_LEN_MASK                    (0xF0)    /* ����ȡTCPͷ�������ֶ�ֵ������ */

#define TCP_ACK_IPV4_MIN_LEN            (40)        /* TCP ACK��С����, �ֽ�Ϊ��λ, typically IP header 20 bytes and TCP header 20 bytes */
#define TCP_ACK_IPV4_MAX_LEN            (80)        /* TCP ACK��󳤶�, �ֽ�Ϊ��λ, typically IP header 20 bytes, and TCP header max size 60 bytes */

#define TCP_ACK_IPV6_MIN_LEN            (60)        /* TCP ACK��С����, �ֽ�Ϊ��λ, typically IP header 40 bytes and TCP header 20 bytes */
#define TCP_ACK_IPV6_MAX_LEN            (80)        /* ?? */
#define IP_VER_VAL                      (0x40)     /* IP v4 */
#define TCP_IP_OFFSET_LEN_POS           (32)       /* TCPͷ�������ֶ����IPͷ�����ֽڵ�ƫ�� */

#define IP_VER_VAL_V6                   (0x60)     /* IP v6 */

#define PROTOCOL_POS_V6                 (6)        /* Э���ʶ���IPͷ�����ֽڵ�ƫ�� */
#define IP_HEAD_NORMAL_LEN              (20)       /* IPͷ������ֵ */
#define IP_HEAD_NORMAL_LEN_V6           (40)       /* IPͷ������ֵ */

#define TCP_PROTOCOL_VAL_V6             (0x06)     /* TCPЭ���ʶ��ֵ */

#define TCP_LEN_POS_V6                  (52)       /* TCPͷ�������ֶ����IPͷ�����ֽڵ�ƫ�� */

#define TCP_ACK_MIN_LEN                 (40)       /* TCP ACK��С����, �ֽ�Ϊ��λ, typically IP header 20 bytes and TCP header 20 bytes */
#define TCP_ACK_MIN_LEN_V6              (60)       /* TCP ACK��С����, �ֽ�Ϊ��λ, typically IP header 40 bytes and TCP header 20 bytes */
#define TCP_ACK_MAX_LEN                 (80)       /* TCP ACK��󳤶�, �ֽ�Ϊ��λ, typically IP header 20 bytes, and TCP header max size 60 bytes */
#define TCP_ACK_MAX_LEN_V6              (100)       /* TCP ACK��󳤶�, �ֽ�Ϊ��λ, typically IP header 40 bytes, and TCP header max size 60 bytes */
#define ICMP_PROTOCOL_VAL               (0x01)     /* ICMPЭ���ʶ��ֵ */
#define ICMP_PROTOCOL_VAL_V6            (0x3A)     /* ICMPЭ���ʶ��ֵ */

#endif

/******************************************************************************
  3 ö�ٶ���
******************************************************************************/
/*****************************************************************************
 ö����    :
 Э����  :
 ASN.1���� :
 ö��˵��  :
*****************************************************************************/
enum APPITF_RTN_CODE_ENUM
{
    APPITF_SUCC                             = 0,
    APPITF_FAIL                             = 1,

    APPITF_PTR_NULL                         = 2,    /*��ָ��*/
    APPITF_PARA_ERR                         = 3,    /*��������*/
    APPITF_STATE_ERR                        = 4,    /*״̬����*/
    APPITF_MODE_ERR                         = 5,    /*ģʽ����*/
    APPITF_SCOPE_ERR                        = 6,    /*��Χ����*/
    APPITF_MEM_ALLOC_FAIL                   = 7,    /*�ڴ����ʧ��*/
    APPITF_MSG_ALLOC_FAIL                   = 8,    /*��Ϣ����ʧ��*/
    APPITF_MSG_SEND_FAIL                    = 9,    /*��Ϣ����ʧ��*/
    APPITF_TIMER_ERR                        = 10,   /*��ʱ������*/
    APPITF_TIMER_OUT                        = 11,   /*��ʱ����ʱ*/
    APPITF_QUE_FULL                         = 12,   /*������*/
    APPITF_QUE_EMPTY                        = 13,   /*���п�*/

    APPITF_SNDTOETH_FAIL                    = 14,
    APPITF_CPYMEM_ERR                       = 15,
    APPITF_TOOBIGIPPACKET                   = 16,

    APP_RTN_CODE_BUTT
};
typedef VOS_UINT32   APP_RTN_CODE_ENUM_UINT32;

/*****************************************************************************
 ö����    : TTF_SOFT_RESET_CAUSE_VALUE_ENUM
 Э����  :
 ASN.1���� :
 ö��˵��  : TTF  ��λԭ��ֵ
*****************************************************************************/
enum TTF_SOFT_RESET_CAUSE_VALUE_ENUM
{
    TTF_SOFT_RESET_CAUSE_NORMAL                      = 0x30000000,  /* ����������λ��Ŀǰֻʹ�ø�ֵ���պ����չ����0x3*******��ͷ */
    TTF_SOFT_RESET_CAUSE_BUTT
};
typedef VOS_INT32 TTF_SOFT_RESET_CAUSE_VALUE_ENUM_INT32;


/******************************************************************************
  4 ȫ�ֱ�������
******************************************************************************/


/******************************************************************************
  5 ��Ϣͷ����
******************************************************************************/


/******************************************************************************
  6 ��Ϣ����
******************************************************************************/


/******************************************************************************
  7 STRUCT����
******************************************************************************/
#pragma pack(4)

typedef struct
{
    VOS_MSG_HEADER                      /* ��Ϣͷ */

    VOS_UINT16 usMsgType;               /* ��Ϣ���� */
    VOS_UINT16 usTransId;               /* �ӽ��̱�ʶ,���ڶ�λ�ӽ��� */
#define TTF_MSG_HEAD    4               /* ������Ϣ��ͷ��������Ϣ����(usMsgType��usTransId) */

    VOS_UINT8  astMsg[4];               /* ��Ϣ�ṹָ�룬ָ������Я������Ϣ */
}TTF_COMM_MSG;

typedef struct
{
    VOS_MSG_HEADER                      /* ��Ϣͷ */

    VOS_UINT16 usMsgType;               /* ��Ϣ���� */
    VOS_UINT8  astMsg[2];               /* ��Ϣ�ṹָ�룬ָ������Я������Ϣ */
}WTF_COMM_MSG;


/* ��Ϣ����������
   pMsg:ģ���յ���������Ϣָ��
   pSelfDefinePara:ģ���Զ�����������ָ�� */
typedef VOS_UINT32 (*PTTFMSGPROC)(MsgBlock *pMsg, void *pSelfDefinePara);

typedef struct
{
    VOS_UINT16 usMsgType;               /* �յ�����ϢID */
    VOS_UINT8  ucState;                 /* �յ�����Ϣʱ��״̬ */
    VOS_UINT8  ucRsv;                   /* Ԥ����չ */
    PTTFMSGPROC pProcFun;               /* ��״̬���յ���Ϣ�Ĵ����� */
}TTF_COMM_STATUS;

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif
/******************************************************************************
  8 UNION����
******************************************************************************/


/******************************************************************************
  9 OTHERS����
******************************************************************************/
extern VOS_UINT32   OM_TraceMsgHook(VOS_VOID *pMsg);


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* TTFComm.h */


