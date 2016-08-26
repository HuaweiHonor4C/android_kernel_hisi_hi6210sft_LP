#ifndef __MDRV_IPF_COMMON_H__
#define __MDRV_IPF_COMMON_H__

#ifdef __cplusplus
extern "C"
{
#endif

/* error code definition */
#define IPF_SUCCESS             0
#define IPF_ERROR               -1
#define BSP_ERR_IPF_INVALID_PARA            BSP_DEF_ERR(BSP_MODU_IPF, 0)
#define BSP_ERR_IPF_BDQ_NOT_ENOUGH          BSP_DEF_ERR(BSP_MODU_IPF, 1)
#define BSP_ERR_IPF_CDQ_NOT_ENOUGH          BSP_DEF_ERR(BSP_MODU_IPF, 2)
#define BSP_ERR_IPF_RDQ_EMPTY               BSP_DEF_ERR(BSP_MODU_IPF, 3)
#define BSP_ERR_IPF_FILTER_NOT_ENOUGH       BSP_DEF_ERR(BSP_MODU_IPF, 4)
#define BSP_ERR_IPF_NOT_INIT                BSP_DEF_ERR(BSP_MODU_IPF, 5)
#define BSP_ERR_IPF_RESUME_TIMEOUT          BSP_DEF_ERR(BSP_MODU_IPF, 6)
#define BSP_ERR_IPF_SEMTAKE_TIMEOUT         BSP_DEF_ERR(BSP_MODU_IPF, 7)
#define BSP_ERR_IPF_ADQ0_NOT_ENOUGH         BSP_DEF_ERR(BSP_MODU_IPF, 8)
#define BSP_ERR_IPF_ADQ1_NOT_ENOUGH         BSP_DEF_ERR(BSP_MODU_IPF, 9)
#define BSP_ERR_IPF_ALLOC_MEM_FAIL          BSP_DEF_ERR(BSP_MODU_IPF, 10)
#define BSP_ERR_IPF_CCORE_RESETTING         BSP_DEF_ERR(BSP_MODU_IPF, 11)
#define BSP_ERR_IPF_INVALID_DLRD            BSP_DEF_ERR(BSP_MODU_IPF, 12)
#define BSP_ERR_IPF_INVALID_ULRD            BSP_DEF_ERR(BSP_MODU_IPF, 13)

#define IPF_ULBD_DESC_SIZE         64   /* ����BD���� */
#define IPF_ULRD_DESC_SIZE         64   /* ����BD���� */
#define IPF_DLBD_DESC_SIZE         64   /* ����BD���� */
#define IPF_DLRD_DESC_SIZE         64   /* ����BD���� */
#if defined(CHIP_BB_HI6210)
#define IPF_ULAD0_DESC_SIZE        64   /* ����ADQ0��AD���� */
#define IPF_ULAD1_DESC_SIZE        64   /* ����ADQ1��AD���� */
#define IPF_DLAD0_DESC_SIZE        64   /* ����ADQ0��AD���� */
#define IPF_DLAD1_DESC_SIZE        64   /* ����ADQ1��AD���� */
#else
#define IPF_ULAD0_DESC_SIZE        128   /* ����ADQ0��AD���� */
#define IPF_ULAD1_DESC_SIZE        128   /* ����ADQ1��AD���� */
#define IPF_DLAD0_DESC_SIZE        128   /* ����ADQ0��AD���� */
#define IPF_DLAD1_DESC_SIZE        128   /* ����ADQ1��AD���� */
#endif
#define IPF_DLCD_DESC_SIZE         1024 /* �Ϻ����� */
#define IPF_FILTER_CHAIN_MAX_NUM   8    /* IPF�������������� */

/*ADQʹ��ö��ֵ*/
typedef enum tagIPF_ADQEN_E
{
    IPF_NONE_ADQ_EN = 0,    /*��ʹ��ADQ*/
    IPF_ONLY_ADQ0_EN = 1,   /*��ʹ��ADQ0*/
    IPF_ONLY_ADQ1_EN = 2,   /*��ʹ��ADQ1*/
    IPF_BOTH_ADQ_EN = 3,    /*ʹ��ADQ0��ADQ1*/

    IPF_ADQEN_BUTT          /*�߽�ֵ*/
}IPF_ADQEN_E;

/*ADSize*/
typedef enum tagIPF_ADSIZE_E
{
    IPF_ADSIZE_32 = 0,  /* AD���д�СΪ32 */
    IPF_ADSIZE_64,      /* AD���д�СΪ64 */
    IPF_ADSIZE_128,     /* AD���д�СΪ128 */
    IPF_ADSIZE_256,     /* AD���д�СΪ256*/

    IPF_ADSIZE_MAX
}IPF_ADSIZE_E;

/* ����ģʽ */
typedef enum tagIPF_MODE_E
{
	IPF_MODE_FILTERANDTRANS,
	IPF_MODE_FILTERONLY,
    IPF_MODE_TRANSONLY,
    IPF_MODE_TRANSONLY2,
    IPF_MODE_MAX
}IPF_MODE_E;

/*ADQ�ձ�־ö��ֵ*/
typedef enum tagIPF_ADQ_EMPTY_E
{
    IPF_EMPTY_ADQ0 = 0,
    IPF_EMPTY_ADQ1 = 1,
    IPF_EMPTY_ADQ = 2,
    IPF_EMPTY_MAX
}IPF_ADQ_EMPTY_E;

/* IPF״̬��ʶ */
typedef enum tagIPF_RESTORE_STATE_E
{
    IPF_STATE_UNRESTORE = 0,   /* δ�ָ� */
    IPF_STATE_RESTORING,       /* �ָ��� */
    IPF_STATE_RESTORED,        /* �ѻָ� */

    IPF_STATE_MAX
}IPF_RESTORE_STATE_E;

/* IP���� */
typedef enum tagIPF_IP_TYPE_E
{
    IPF_IPTYPE_V4 = 0,  /* IPV4 */
    IPF_IPTYPE_V6,      /* IPV6 */

    IPF_IPTYPE_MAX      /* �߽�ֵ */
}IPF_IP_TYPE_E;

typedef enum tagIPF_AD_TYPE_E
{
    IPF_AD_0 = 0,        /* AD0 ʹ������AD����ʱΪ�̰����У�ʹ��һ��AD����ʱΪ��������*/
    IPF_AD_1,            /* AD1 ��������*/
    IPF_AD_MAX           /* �߽�ֵ */
}IPF_AD_TYPE_E;

typedef enum tagIPF_CHANNEL_TYPE_E
{
    IPF_CHANNEL_UP	= 0,
    IPF_CHANNEL_DOWN,
    IPF_CHANNEL_MAX
}IPF_CHANNEL_TYPE_E;

typedef enum tagIPF_FILTER_CHAIN_TYPE_E
{
	IPF_MODEM0_ULFC = 0,
	IPF_MODEM1_ULFC,
	IPF_MODEM0_DLFC,
	IPF_MODEM1_DLFC,
	IPF_MODEM_MAX,
}IPF_FILTER_CHAIN_TYPE_E;

typedef struct
{
    unsigned short u16Len;         /* ��������Դ���� */
    unsigned short u16Attribute;   /* ����IP������ */
    unsigned int   u32Data;        /* ��������Դ��ַ */
    unsigned short u16UsrField1;   /* Usr field ��1 ,͸�� */
    unsigned short u16Reserved;    /* Ԥ�� */
    unsigned int   u32UsrField2;   /* Usr field ��2 ,͸�� */
    unsigned int   u32UsrField3;   /* Usr field ��3 ,͸��*/
}IPF_CONFIG_PARAM_S;

struct mdrv_ipf_ops {
    int (*adq_empty_cb)(IPF_ADQ_EMPTY_E eAdqEmpty);
    int (*rx_complete_cb)(void);
};

/* RD������ */
typedef struct
{
    unsigned short u16Attribute;
    unsigned short u16PktLen;
    unsigned int u32InPtr;
    unsigned int u32OutPtr;
    unsigned short u16Result;
    unsigned short u16UsrField1;
    unsigned int u32UsrField2;
    unsigned int u32UsrField3;
}IPF_RD_DESC_S;

/* BD������ */
typedef struct tagIPF_BD_DESC_S
{
    unsigned short u16Attribute;
    unsigned short u16PktLen;
    unsigned int u32InPtr;
    unsigned int u32OutPtr;
    unsigned short u16Result;
    unsigned short u16UsrField1;
    unsigned int u32UsrField2;
    unsigned int u32UsrField3;
} IPF_BD_DESC_S;

/* AD������ */
typedef struct tagIPF_AD_DESC_S
{
    unsigned int u32OutPtr0;
    unsigned int u32OutPtr1;
} IPF_AD_DESC_S;

/* CD������ */
typedef struct tagIPF_CD_DESC_S
{
    unsigned short u16Attribute;
    unsigned short u16PktLen;
    unsigned int u32Ptr;
}IPF_CD_DESC_S;

/* ͳ�Ƽ�����Ϣ�ṹ�� */
typedef struct tagIPF_FILTER_STAT_S
{
    unsigned int u32UlCnt0;
    unsigned int u32UlCnt1;
    unsigned int u32UlCnt2;
    unsigned int u32DlCnt0;
    unsigned int u32DlCnt1;
    unsigned int u32DlCnt2;
}IPF_FILTER_STAT_S;

typedef IPF_CONFIG_PARAM_S IPF_CONFIG_ULPARAM_S;
typedef IPF_CONFIG_PARAM_S IPF_CONFIG_DLPARAM_S;

/*****************************************************************************
* �� �� ��  : mdrv_ipf_register_ops
*
* ��������  : ע��ops������Ŀǰ����������/�������ݴ�����жϻص�������ADQ��
*             �жϵ���Ӧ����
*
* �������  : struct mdrv_ipf_ops *ops  ��Ӧ�Ļص�������
* �������  :
*
* �� �� ֵ  : IPF_SUCCESS ���óɹ�
*             IPF_ERROR ����ʧ��
* ����˵��  :
*
*****************************************************************************/
int mdrv_ipf_register_ops(struct mdrv_ipf_ops *ops);

#ifdef __cplusplus
}
#endif

#endif
