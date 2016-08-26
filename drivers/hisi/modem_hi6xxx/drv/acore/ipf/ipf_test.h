#ifndef __IPF_TEST_H__
#define __IPF_TEST_H__

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/kthread.h>
#include <linux/sched.h>
#include <linux/slab.h>
#include <asm/io.h>
/*#include <asm/system.h>*/
#include <linux/semaphore.h>
#include <linux/interrupt.h>
#include <linux/workqueue.h>
#include <linux/spinlock.h>
#include <linux/string.h>
#include <linux/mm.h>
#include <linux/mman.h>
#include <linux/delay.h>
#include <bsp_mem.h>
#include "BSP.h"
#include "ipf_driver.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

typedef struct tagIpfStFilterConfig_S
{
    BSP_BOOL bDataChain;
    IPF_MODE_E eIpfMode;
    BSP_U32 u32FilterNum;
    IPF_FILTER_CHAIN_TYPE_E eFilterChainType;
}IpfStFilterConfig_S;

typedef struct tagIpfStResultCheck_S
{
    /*RD����*/
    BSP_U16 u16Attribute;
    BSP_U16 u16Len;
    BSP_U32 u32InPtr;
    BSP_U32 u32OutPtr;
    BSP_U16 u16Result;
    BSP_U16 u16UsrField1;
    BSP_U32 u32UsrField2;
    BSP_U32 u32UsrField3;
    /*RD����*/
    BSP_U32 u32RdNum;
    /*ÿ�δ�����RD�Ƿ񲹳�AD*/
    BSP_BOOL bAdFlag;
}IpfStResultCheck_S;

typedef struct tagStreamIPv4Header
{
    BSP_U32 TOL:16;
    BSP_U32 TOS:8;
    BSP_U32 HeaderLen:4;
    BSP_U32 Vers:4;
    BSP_U32 offset:13;
    BSP_U32 MF:1;
    BSP_U32 DF:1;
    BSP_U32 ReservFlag:1;
    BSP_U32 ID:16;
    BSP_U32 Checksum:16;
    BSP_U32 Prot:8;
    BSP_U32 TTL:8;
    BSP_U32 SourceAddr;
    BSP_U32 DestAddr;
}StreamIPv4Header;

typedef struct tagStreamUDP
{
    BSP_U32 DstPort:16;
    BSP_U32 SrcPort:16;
    BSP_U32 Checksum:16;
    BSP_U32 Length:16;
}StreamUDP;

typedef struct tagIpfChanState
{
    IPF_CHANNEL_TYPE_E chanType;
    BSP_BOOL chanFlag;
}IpfChanState;

typedef enum tagIpfStModemId_E
{
    IPF_MODEM_0 = 0,
    IPF_MODEM_1

    //IPF_MODEM_MAX
}IpfStModemId_E;

typedef struct _TTF_NODE_ST
{
    struct _TTF_NODE_ST    *pNext;
    struct _TTF_NODE_ST    *pPrev;
} TTF_NODE_ST;
enum TTF_BLK_MEM_STATE_ENUM
{
    TTF_BLK_MEM_STATE_FREE,       /*���ڴ�δ����������ͷ�*/
    TTF_BLK_MEM_STATE_ALLOC,      /*���ڴ�������*/

    TTF_BLK_MEM_STATE_BUTT
};
typedef unsigned int TTF_BLK_MEM_STATE_ENUM_UINT32;

typedef struct
{
    TTF_BLK_MEM_STATE_ENUM_UINT32   enMemStateFlag;
    unsigned int                    ulAllocTick;        /* CPU tick when alloc or free */
    unsigned short                  usAllocFileId;      /* File ID when alloc or free */
    unsigned short                  usAllocLineNum;     /* File Line when alloc or free */
    unsigned short                  usTraceFileId;      /* File ID when traced */
    unsigned short                  usTraceLineNum;     /* File Line when traced */
    unsigned int                    ulTraceTick;        /* CPU tick when traced */
} TTF_BLK_MEM_DEBUG_ST;

typedef struct _TTF_MEM_ST
{
    TTF_NODE_ST                     stNode;
    unsigned char                   ucPoolId;       /*���ڴ�������һ���ڴ�� */
    unsigned char                   ucClusterId;    /*���ڴ���������һ������*/
    unsigned char                   ucReserve[2];
    struct _TTF_MEM_ST             *pNext;          /* �����ݵ���һ�� */
    unsigned short                  usType;         /* �ڴ����ͣ�DYN��BLK��EXT���� */
    unsigned short                  usLen;          /* �������ݵ��ܳ��ȣ�����һ��ȫ����ʹ�� */
    unsigned short                  usUsed;         /* �Ѿ�ʹ�õ����ݳ���   */
    unsigned short                  usApp;          /* ʹ���߿���ʹ�õ����� */

    TTF_BLK_MEM_DEBUG_ST           *pstDbgInfo;

    unsigned char                  *pOrigData;      /* ��¼���ݵ�ԭʼָ�� */
    unsigned char                  *pData;          /* ������ݵ�ָ�룬������ָ��ṹ��������ڴ� */
    void                           *pExtBuffAddr;   /* ����extern���͵��ڴ��ַ�����ͷ� */
    unsigned int                   ulForCds[1];    /*Ԥ����CDSʹ�ã�GUģ���ó�ʼ��*/

#if( FEATURE_LTE == FEATURE_ON )
    unsigned int                   ulForLte[6];    /*Ԥ����LTEʹ�ã�GUģ���ó�ʼ��*/
#endif
} TTF_MEM_ST;
/*****************************************************************************
  10 ��������
*****************************************************************************/
extern BSP_S32 BSP_IPF_ST_001(BSP_VOID);
extern BSP_S32 BSP_IPF_ST_002(BSP_VOID);
extern BSP_S32 BSP_IPF_ST_003(BSP_U32 u32Count);
extern BSP_S32 BSP_IPF_ST_004(IPF_AD_TYPE_E eAdType);
extern BSP_S32 BSP_IPF_ST_101(BSP_U32 u32PacketNum);
extern BSP_S32 BSP_IPF_ST_102(BSP_VOID);
extern BSP_S32 BSP_IPF_ST_103(BSP_VOID);
extern BSP_S32 BSP_IPF_ST_104(BSP_VOID);
extern BSP_S32 BSP_IPF_ST_105(BSP_VOID);
extern BSP_S32 BSP_IPF_ST_108(BSP_U32 u32PacketNum);
extern BSP_S32 BSP_IPF_ST_109(BSP_U32 u32PacketNum);
extern BSP_S32 BSP_IPF_ST_110(BSP_U32 u32PacketNum);
extern BSP_S32 BSP_IPF_ST_301(BSP_U32 u32PacketNum);
extern BSP_S32 BSP_IPF_ST_302(BSP_VOID);
extern BSP_S32 BSP_IPF_ST_303(BSP_VOID);
extern BSP_S32 BSP_IPF_ST_304(BSP_VOID);
extern BSP_S32 BSP_IPF_ST_305(BSP_VOID);
extern BSP_S32 BSP_IPF_ST_308(BSP_U32 u32PacketNum);
extern BSP_S32 BSP_IPF_ST_309(BSP_U32 u32PacketNum);
extern BSP_S32 BSP_IPF_ST_310(BSP_U32 u32PacketNum);
extern BSP_S32 BSP_IPF_ST_401(BSP_U32 u32Count, BSP_U32 u32Tick);
extern BSP_S32 BSP_IPF_ST_401_Ex(BSP_U32 u32Count, BSP_U32 u32Tick);
extern BSP_S32 BSP_IPF_ST_402(BSP_U32 u32Count, BSP_U32 u32Tick);
extern BSP_S32 BSP_IPF_ST_402_Ex(BSP_U32 u32Count, BSP_U32 u32Tick);
extern BSP_S32 BSP_IPF_ST_501(BSP_U32 u32PacketNum);
extern BSP_S32 BSP_IPF_ST_502(BSP_U32 u32PacketNum);
extern BSP_S32 BSP_IPF_ST_503(BSP_U32 u32PacketNum);
extern BSP_S32 BSP_IPF_ST_504(BSP_U32 u32PacketNum);
extern BSP_S32 BSP_IPF_ST_505_Step1(BSP_U32 u32PacketNum);
extern BSP_S32 BSP_IPF_ST_505_Step2(BSP_U32 u32PacketNum);
extern BSP_S32 BSP_IPF_ST_506_Step1(BSP_U32 u32PacketNum);
extern BSP_S32 BSP_IPF_ST_506_Step2(BSP_U32 u32PacketNum);
extern BSP_S32 BSP_IPF_ST_601(BSP_VOID);
extern BSP_S32 BSP_IPF_ST_602(BSP_VOID);
extern BSP_S32 BSP_IPF_ST_109_603(BSP_U32 u32PacketNum);
extern BSP_S32 BSP_IPF_ST_309_604(BSP_U32 u32PacketNum);
extern BSP_S32 BSP_IPF_ST_401_605(BSP_U32 u32Count, BSP_U32 u32Tick);

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif/*__IPF_TEST_H_)*/
