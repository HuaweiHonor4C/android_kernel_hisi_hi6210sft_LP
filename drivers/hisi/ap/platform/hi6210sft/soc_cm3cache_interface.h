

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_CM3CACHE_INTERFACE_H__
#define __SOC_CM3CACHE_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/1) register_define
 ****************************************************************************/
/* �Ĵ���˵����Cache���ƼĴ���
   λ����UNION�ṹ:  SOC_CM3CACHE_CACHE_CTRL_UNION */
#define SOC_CM3CACHE_CACHE_CTRL_ADDR(base)            ((base) + (0x0))

/* �Ĵ���˵����Cache״̬�Ĵ���
   λ����UNION�ṹ:  SOC_CM3CACHE_CACHE_STAT_UNION */
#define SOC_CM3CACHE_CACHE_STAT_ADDR(base)            ((base) + (0x4))

/* �Ĵ���˵����Cache����Ĵ���
   λ����UNION�ṹ:  SOC_CM3CACHE_CACHE_CLR_UNION */
#define SOC_CM3CACHE_CACHE_CLR_ADDR(base)             ((base) + (0x8))

/* �Ĵ���˵����PU���ƼĴ���
   λ����UNION�ṹ:  SOC_CM3CACHE_PU_CTRL_UNION */
#define SOC_CM3CACHE_PU_CTRL_ADDR(base)               ((base) + (0xC))

/* �Ĵ���˵����PU Cacheable���ƼĴ���
   λ����UNION�ṹ:  SOC_CM3CACHE_PU_CACHEABLE_UNION */
#define SOC_CM3CACHE_PU_CACHEABLE_ADDR(base)          ((base) + (0x10))

/* �Ĵ���˵����PU Bufferable���ƼĴ���
   λ����UNION�ṹ:  SOC_CM3CACHE_PU_BUFFERABLE_UNION */
#define SOC_CM3CACHE_PU_BUFFERABLE_ADDR(base)         ((base) + (0x14))

/* �Ĵ���˵����PU Protection���ƼĴ���
   λ����UNION�ṹ:  SOC_CM3CACHE_PU_PROTECTION_UNION */
#define SOC_CM3CACHE_PU_PROTECTION_ADDR(base)         ((base) + (0x18))

/* �Ĵ���˵����PU��ַ�����üĴ���0
   λ����UNION�ṹ:  SOC_CM3CACHE_PU_AREA0_UNION */
#define SOC_CM3CACHE_PU_AREA0_ADDR(base)              ((base) + (0x1C))

/* �Ĵ���˵����PU��ַ�����üĴ���1
   λ����UNION�ṹ:  SOC_CM3CACHE_PU_AREA1_UNION */
#define SOC_CM3CACHE_PU_AREA1_ADDR(base)              ((base) + (0x20))

/* �Ĵ���˵����PU��ַ�����üĴ���2
   λ����UNION�ṹ:  SOC_CM3CACHE_PU_AREA2_UNION */
#define SOC_CM3CACHE_PU_AREA2_ADDR(base)              ((base) + (0x24))

/* �Ĵ���˵����PU��ַ�����üĴ���3
   λ����UNION�ṹ:  SOC_CM3CACHE_PU_AREA3_UNION */
#define SOC_CM3CACHE_PU_AREA3_ADDR(base)              ((base) + (0x28))





/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/



/*****************************************************************************
  4 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣ����
*****************************************************************************/



/*****************************************************************************
  6 STRUCT����
*****************************************************************************/



/*****************************************************************************
  7 UNION����
*****************************************************************************/

/****************************************************************************
                     (1/1) register_define
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_CM3CACHE_CACHE_CTRL_UNION
 �ṹ˵��  : CACHE_CTRL �Ĵ����ṹ���塣��ַƫ����:0x0����ֵ:0x00000000�����:32
 �Ĵ���˵��: Cache���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  CACHEEN      : 1;  /* bit[0]   : Cacheʹ��λ
                                                       1��Cacheʹ��
                                                       0��Cacheδʹ�� */
        unsigned int  CACHEFLUSH   : 1;  /* bit[1]   : Cache Flush��Clear����λ
                                                       1����Cache_CLR�Ĵ�������Flush����
                                                       0����Cache_CLR�Ĵ���ΪClear���� */
        unsigned int  LOCKABORTDIS : 1;  /* bit[2]   : SWPʹ��λ
                                                       1��SWP���κε�ַ����ִ��
                                                       0��Non-cacheable��Non-bufferable��ַ��SWP������������ִ�У���Cacheable��Bufferable��SWP����������ֹ������ */
        unsigned int  CACHEABORT   : 1;  /* bit[3]   : �Ĵ�����ֹλ����ʾCPU��һ�ζԼĴ����ķ���Ϊ�Ƿ���������λ��Ҫ������㣬���⣬��λ�������λ�� */
        unsigned int  LOCKABORT    : 1;  /* bit[4]   : LOCK��ֹλ����ʾCPU��һ��SWP�����Ƿ�������ַΪCacheable��Bufferable��SWPʹ��δ�򿪣���λ��Ҫ������㣬���⣬��λ�������λ�� */
        unsigned int  USERABORT    : 1;  /* bit[5]   : ������ֹλ����ʾCPU��һ�η��ʵ�ַ�Ƿ�����CPU���û�ģʽ���ʱ���������Ȩģʽ��ַ����λ��Ҫ������㣬���⣬��λ�������λ�� */
        unsigned int  AHBABORT     : 1;  /* bit[6]   : AHB��ֹλ����ʾCPU��һ�ζ������ַ�ķ���Ϊ�Ƿ�������AHB���ߵķ��ʷ�����ϢΪ���󣬸�λ��Ҫ������㣬���⣬��λ�������λ�� */
        unsigned int  reserved     : 25; /* bit[7-31]: Reserved */
    } reg;
} SOC_CM3CACHE_CACHE_CTRL_UNION;
#endif
#define SOC_CM3CACHE_CACHE_CTRL_CACHEEN_START       (0)
#define SOC_CM3CACHE_CACHE_CTRL_CACHEEN_END         (0)
#define SOC_CM3CACHE_CACHE_CTRL_CACHEFLUSH_START    (1)
#define SOC_CM3CACHE_CACHE_CTRL_CACHEFLUSH_END      (1)
#define SOC_CM3CACHE_CACHE_CTRL_LOCKABORTDIS_START  (2)
#define SOC_CM3CACHE_CACHE_CTRL_LOCKABORTDIS_END    (2)
#define SOC_CM3CACHE_CACHE_CTRL_CACHEABORT_START    (3)
#define SOC_CM3CACHE_CACHE_CTRL_CACHEABORT_END      (3)
#define SOC_CM3CACHE_CACHE_CTRL_LOCKABORT_START     (4)
#define SOC_CM3CACHE_CACHE_CTRL_LOCKABORT_END       (4)
#define SOC_CM3CACHE_CACHE_CTRL_USERABORT_START     (5)
#define SOC_CM3CACHE_CACHE_CTRL_USERABORT_END       (5)
#define SOC_CM3CACHE_CACHE_CTRL_AHBABORT_START      (6)
#define SOC_CM3CACHE_CACHE_CTRL_AHBABORT_END        (6)


/*****************************************************************************
 �ṹ��    : SOC_CM3CACHE_CACHE_STAT_UNION
 �ṹ˵��  : CACHE_STAT �Ĵ����ṹ���塣��ַƫ����:0x4����ֵ:0x4�����:32
 �Ĵ���˵��: Cache״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  CACHESIZE : 3;  /* bit[0-2] : ָʾ��ǰCache�Ĵ�С
                                                    3'b010: 4KB
                                                    3'b011: 8KB
                                                    3'b100: 16KB */
        unsigned int  reserved  : 29; /* bit[3-31]: Reserved */
    } reg;
} SOC_CM3CACHE_CACHE_STAT_UNION;
#endif
#define SOC_CM3CACHE_CACHE_STAT_CACHESIZE_START  (0)
#define SOC_CM3CACHE_CACHE_STAT_CACHESIZE_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_CM3CACHE_CACHE_CLR_UNION
 �ṹ˵��  : CACHE_CLR �Ĵ����ṹ���塣��ַƫ����:0x8����ֵ:0x00000000�����:32
 �Ĵ���˵��: Cache����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  FLUSHEDWAY  : 2;  /* bit[0-1] :  */
        unsigned int  FLUSHEDLINE : 7;  /* bit[2-8] : Cache����Ĵ������üĴ����ɶ�д��
                                                      д�üĴ�����ʾ���ö�Cache�����������ʼ��ַ�����üĴ�������ʵ�ʵ����������������������ʱ���Զ���һ������ʾ���úó�ʼ��ַ�󲻶϶�����ж��������������Cache��Flush��Clear������
                                                      Clear������һ�ζ��������ĳ�ض�Line����·ȫ�������Clear����ֻ��Ҫ����Line��ַ��Way��ַ��Ч������Cache��СΪ16KB������Ҫ128�ζ������������Cache��Clear���ò�����Reset�������С�
                                                      Flush������һ�ζ��������ĳ�ض�Line��ĳһ·��ȫд�����ò����жϱ�ѡ������ݿ��Ƿ�Valid���Ƿ�Dirty�����Valid��Dirty���򽫸����ݿ�д�����档Flush������Ҫ����Line��ַ��Way��ַ��Way��ַΪ�����λ������Cache��СΪ16KB������Ҫ512�ζ������������Cache��Flush��Ϊ��֤���ݵ�һ���ԣ��ò�����Cache ʹ�ܹر�ǰ������С�
                                                      Clear������ɺ󣬱�������4·���ݿ��Validλ�����㣬Dirtyλ���㣬LRUλ���㣬����һ���滻ʱ�����滻����Ϊ����·��
                                                      Flush������ɺ󣬱����������ݿ��Validλ���㣬Dirtyλ���㣬LRUλҲ���㡣 */
        unsigned int  reserved    : 23; /* bit[9-31]: Reserved */
    } reg;
} SOC_CM3CACHE_CACHE_CLR_UNION;
#endif
#define SOC_CM3CACHE_CACHE_CLR_FLUSHEDWAY_START   (0)
#define SOC_CM3CACHE_CACHE_CLR_FLUSHEDWAY_END     (1)
#define SOC_CM3CACHE_CACHE_CLR_FLUSHEDLINE_START  (2)
#define SOC_CM3CACHE_CACHE_CLR_FLUSHEDLINE_END    (8)


/*****************************************************************************
 �ṹ��    : SOC_CM3CACHE_PU_CTRL_UNION
 �ṹ˵��  : PU_CTRL �Ĵ����ṹ���塣��ַƫ����:0xC����ֵ:0x00000000�����:32
 �Ĵ���˵��: PU���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  PUENABLE : 1;  /* bit[0]   : PUʹ��λ���üĴ����ɶ�д��ʹ��λʹ��ʱ��PU�������ݽ���Cacheable��Bufferable��Protection�����ж����罫��λ�رգ���PU���������ж������е�ַ����Non-cacheable��Non-bufferable����Protection�Ĳ����� */
        unsigned int  PUAMBUF  : 1;  /* bit[1]   : PUδ����Bufferable����λ��PU����Area�ξ�δ����ʱPU��Bufferable���ƣ���λĬ��Ϊ�㣬��ʱPU���δ������ΪNon-bufferable��ַ����һʱδ����ΪBufferable��ַ�� */
        unsigned int  PUAMCAC  : 1;  /* bit[2]   : PUδ����Cacheable����λ��PU����Area�ξ�δ����ʱPU��Cacheable���ƣ���λĬ��Ϊ�㣬��ʱPU���δ������ΪNon-cacheable����һʱδ����ΪCacheable��ַ�� */
        unsigned int  PUAMPRO  : 1;  /* bit[3]   : PUδ���б�������λ��PU����Area�ξ�δ����ʱPU�ı������ƣ���λĬ��Ϊ�㣬��ʱPU���δ������Ϊ�Ǳ�����ַ����һʱδ����Ϊ������ַ�� */
        unsigned int  reserved : 28; /* bit[4-31]: Reserved */
    } reg;
} SOC_CM3CACHE_PU_CTRL_UNION;
#endif
#define SOC_CM3CACHE_PU_CTRL_PUENABLE_START  (0)
#define SOC_CM3CACHE_PU_CTRL_PUENABLE_END    (0)
#define SOC_CM3CACHE_PU_CTRL_PUAMBUF_START   (1)
#define SOC_CM3CACHE_PU_CTRL_PUAMBUF_END     (1)
#define SOC_CM3CACHE_PU_CTRL_PUAMCAC_START   (2)
#define SOC_CM3CACHE_PU_CTRL_PUAMCAC_END     (2)
#define SOC_CM3CACHE_PU_CTRL_PUAMPRO_START   (3)
#define SOC_CM3CACHE_PU_CTRL_PUAMPRO_END     (3)


/*****************************************************************************
 �ṹ��    : SOC_CM3CACHE_PU_CACHEABLE_UNION
 �ṹ˵��  : PU_CACHEABLE �Ĵ����ṹ���塣��ַƫ����:0x10����ֵ:0x00000000�����:32
 �Ĵ���˵��: PU Cacheable���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  CACHEABLE0 : 1;  /* bit[0]   :  */
        unsigned int  CACHEABLE1 : 1;  /* bit[1]   :  */
        unsigned int  CACHEABLE2 : 1;  /* bit[2]   :  */
        unsigned int  CACHEABLE3 : 1;  /* bit[3]   : Cacheable���ã��ɶ�д��4����־λ����Ӧһ����ַ�ˣ���ʾ�õ�ַ���Ƿ�ΪCacheable��ַ�Ρ� */
        unsigned int  reserved   : 28; /* bit[4-31]: Reserved */
    } reg;
} SOC_CM3CACHE_PU_CACHEABLE_UNION;
#endif
#define SOC_CM3CACHE_PU_CACHEABLE_CACHEABLE0_START  (0)
#define SOC_CM3CACHE_PU_CACHEABLE_CACHEABLE0_END    (0)
#define SOC_CM3CACHE_PU_CACHEABLE_CACHEABLE1_START  (1)
#define SOC_CM3CACHE_PU_CACHEABLE_CACHEABLE1_END    (1)
#define SOC_CM3CACHE_PU_CACHEABLE_CACHEABLE2_START  (2)
#define SOC_CM3CACHE_PU_CACHEABLE_CACHEABLE2_END    (2)
#define SOC_CM3CACHE_PU_CACHEABLE_CACHEABLE3_START  (3)
#define SOC_CM3CACHE_PU_CACHEABLE_CACHEABLE3_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_CM3CACHE_PU_BUFFERABLE_UNION
 �ṹ˵��  : PU_BUFFERABLE �Ĵ����ṹ���塣��ַƫ����:0x14����ֵ:0x00000000�����:32
 �Ĵ���˵��: PU Bufferable���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  BUFFERABLE0 : 1;  /* bit[0]   :  */
        unsigned int  BUFFERABLE1 : 1;  /* bit[1]   :  */
        unsigned int  BUFFERABLE2 : 1;  /* bit[2]   :  */
        unsigned int  BUFFERABLE3 : 1;  /* bit[3]   : Bufferable���ã��ɶ�д��4����־λ����Ӧһ����ַ�ˣ���ʾ�õ�ַ���Ƿ�ΪBufferable��ַ�Ρ� */
        unsigned int  reserved    : 28; /* bit[4-31]: Reserved */
    } reg;
} SOC_CM3CACHE_PU_BUFFERABLE_UNION;
#endif
#define SOC_CM3CACHE_PU_BUFFERABLE_BUFFERABLE0_START  (0)
#define SOC_CM3CACHE_PU_BUFFERABLE_BUFFERABLE0_END    (0)
#define SOC_CM3CACHE_PU_BUFFERABLE_BUFFERABLE1_START  (1)
#define SOC_CM3CACHE_PU_BUFFERABLE_BUFFERABLE1_END    (1)
#define SOC_CM3CACHE_PU_BUFFERABLE_BUFFERABLE2_START  (2)
#define SOC_CM3CACHE_PU_BUFFERABLE_BUFFERABLE2_END    (2)
#define SOC_CM3CACHE_PU_BUFFERABLE_BUFFERABLE3_START  (3)
#define SOC_CM3CACHE_PU_BUFFERABLE_BUFFERABLE3_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_CM3CACHE_PU_PROTECTION_UNION
 �ṹ˵��  : PU_PROTECTION �Ĵ����ṹ���塣��ַƫ����:0x18����ֵ:0x00000000�����:32
 �Ĵ���˵��: PU Protection���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  PERMISSION0 : 1;  /* bit[0]   :  */
        unsigned int  PERMISSION1 : 1;  /* bit[1]   :  */
        unsigned int  PERMISSION2 : 1;  /* bit[2]   :  */
        unsigned int  PERMISSION3 : 1;  /* bit[3]   : Protection���ã��ɶ�д��4����־λ����Ӧһ����ַ�ˣ���ʾ�õ�ַ���Ƿ���Ҫ���û�ģʽ�½��б����� */
        unsigned int  reserved    : 28; /* bit[4-31]: Reserved */
    } reg;
} SOC_CM3CACHE_PU_PROTECTION_UNION;
#endif
#define SOC_CM3CACHE_PU_PROTECTION_PERMISSION0_START  (0)
#define SOC_CM3CACHE_PU_PROTECTION_PERMISSION0_END    (0)
#define SOC_CM3CACHE_PU_PROTECTION_PERMISSION1_START  (1)
#define SOC_CM3CACHE_PU_PROTECTION_PERMISSION1_END    (1)
#define SOC_CM3CACHE_PU_PROTECTION_PERMISSION2_START  (2)
#define SOC_CM3CACHE_PU_PROTECTION_PERMISSION2_END    (2)
#define SOC_CM3CACHE_PU_PROTECTION_PERMISSION3_START  (3)
#define SOC_CM3CACHE_PU_PROTECTION_PERMISSION3_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_CM3CACHE_PU_AREA0_UNION
 �ṹ˵��  : PU_AREA0 �Ĵ����ṹ���塣��ַƫ����:0x1C����ֵ:0x00000000�����:32
 �Ĵ���˵��: PU��ַ�����üĴ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  AREAENABLE : 1;  /* bit[0]    : ʹ��λ,��ʾ�õ�ַ���Ƿ����PU�ж� */
        unsigned int  AREASIZE   : 5;  /* bit[1-5]  : ��ַ��С5 bits�����������±���ʾ��Sizeֵ�������01011�����С��01010����Ϊ01010�����õ�ַ�Ĵ�С�ͻ���ַ������룬���磬��Size����Ϊ16KBʱ��0x8000�ǺϷ��Ļ���ַ��0x5000�ǷǷ���ַ��������λ��Ϊ0x4000��
                                                      5'b01011: 4KB 5'b01100: 8KB 5'b01101: 16KB
                                                      5'b01110:32KB 5'b01111: 64KB 5'b10000:128KB
                                                      5'b10001:256KB 5'b10010:512KB 5'b10011:1MB
                                                      5'b10100:2MB 5'b10101:4MB 5'b10110:8MB
                                                      5'b10111:16MB 5'b11000:32MB 5'b11001:64MB
                                                      5'b11010:128MB 5'b11011:256MB 5'b11100:512MB
                                                      5'b11101:1GB 5'b11110:2GB 5'b11111:4GB */
        unsigned int  reserved   : 6;  /* bit[6-11] : reserved */
        unsigned int  BASE       : 20; /* bit[12-31]: ��ַ�εĻ���ַ����ֻ�����õ�ַ�ĸ�20λ������С���Ϊ4KB�� */
    } reg;
} SOC_CM3CACHE_PU_AREA0_UNION;
#endif
#define SOC_CM3CACHE_PU_AREA0_AREAENABLE_START  (0)
#define SOC_CM3CACHE_PU_AREA0_AREAENABLE_END    (0)
#define SOC_CM3CACHE_PU_AREA0_AREASIZE_START    (1)
#define SOC_CM3CACHE_PU_AREA0_AREASIZE_END      (5)
#define SOC_CM3CACHE_PU_AREA0_BASE_START        (12)
#define SOC_CM3CACHE_PU_AREA0_BASE_END          (31)


/*****************************************************************************
 �ṹ��    : SOC_CM3CACHE_PU_AREA1_UNION
 �ṹ˵��  : PU_AREA1 �Ĵ����ṹ���塣��ַƫ����:0x20����ֵ:0x00000000�����:32
 �Ĵ���˵��: PU��ַ�����üĴ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  AREAENABLE : 1;  /* bit[0]    : ʹ��λ,��ʾ�õ�ַ���Ƿ����PU�ж� */
        unsigned int  AREASIZE   : 5;  /* bit[1-5]  : ��ַ��С5 bits�����������±���ʾ��Sizeֵ�������01011�����С��01010����Ϊ01010�����õ�ַ�Ĵ�С�ͻ���ַ������룬���磬��Size����Ϊ16KBʱ��0x8000�ǺϷ��Ļ���ַ��0x5000�ǷǷ���ַ��������λ��Ϊ0x4000��
                                                      5'b01011: 4KB 5'b01100: 8KB 5'b01101: 16KB
                                                      5'b01110:32KB 5'b01111: 64KB 5'b10000:128KB
                                                      5'b10001:256KB 5'b10010:512KB 5'b10011:1MB
                                                      5'b10100:2MB 5'b10101:4MB 5'b10110:8MB
                                                      5'b10111:16MB 5'b11000:32MB 5'b11001:64MB
                                                      5'b11010:128MB 5'b11011:256MB 5'b11100:512MB
                                                      5'b11101:1GB 5'b11110:2GB 5'b11111:4GB */
        unsigned int  reserved   : 6;  /* bit[6-11] : reserved */
        unsigned int  BASE       : 20; /* bit[12-31]: ��ַ�εĻ���ַ����ֻ�����õ�ַ�ĸ�20λ������С���Ϊ4KB�� */
    } reg;
} SOC_CM3CACHE_PU_AREA1_UNION;
#endif
#define SOC_CM3CACHE_PU_AREA1_AREAENABLE_START  (0)
#define SOC_CM3CACHE_PU_AREA1_AREAENABLE_END    (0)
#define SOC_CM3CACHE_PU_AREA1_AREASIZE_START    (1)
#define SOC_CM3CACHE_PU_AREA1_AREASIZE_END      (5)
#define SOC_CM3CACHE_PU_AREA1_BASE_START        (12)
#define SOC_CM3CACHE_PU_AREA1_BASE_END          (31)


/*****************************************************************************
 �ṹ��    : SOC_CM3CACHE_PU_AREA2_UNION
 �ṹ˵��  : PU_AREA2 �Ĵ����ṹ���塣��ַƫ����:0x24����ֵ:0x00000000�����:32
 �Ĵ���˵��: PU��ַ�����üĴ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  AREAENABLE : 1;  /* bit[0]    : ʹ��λ,��ʾ�õ�ַ���Ƿ����PU�ж� */
        unsigned int  AREASIZE   : 5;  /* bit[1-5]  : ��ַ��С5 bits�����������±���ʾ��Sizeֵ�������01011�����С��01010����Ϊ01010�����õ�ַ�Ĵ�С�ͻ���ַ������룬���磬��Size����Ϊ16KBʱ��0x8000�ǺϷ��Ļ���ַ��0x5000�ǷǷ���ַ��������λ��Ϊ0x4000��
                                                      5'b01011: 4KB 5'b01100: 8KB 5'b01101: 16KB
                                                      5'b01110:32KB 5'b01111: 64KB 5'b10000:128KB
                                                      5'b10001:256KB 5'b10010:512KB 5'b10011:1MB
                                                      5'b10100:2MB 5'b10101:4MB 5'b10110:8MB
                                                      5'b10111:16MB 5'b11000:32MB 5'b11001:64MB
                                                      5'b11010:128MB 5'b11011:256MB 5'b11100:512MB
                                                      5'b11101:1GB 5'b11110:2GB 5'b11111:4GB */
        unsigned int  reserved   : 6;  /* bit[6-11] : reserved */
        unsigned int  BASE       : 20; /* bit[12-31]: ��ַ�εĻ���ַ����ֻ�����õ�ַ�ĸ�20λ������С���Ϊ4KB�� */
    } reg;
} SOC_CM3CACHE_PU_AREA2_UNION;
#endif
#define SOC_CM3CACHE_PU_AREA2_AREAENABLE_START  (0)
#define SOC_CM3CACHE_PU_AREA2_AREAENABLE_END    (0)
#define SOC_CM3CACHE_PU_AREA2_AREASIZE_START    (1)
#define SOC_CM3CACHE_PU_AREA2_AREASIZE_END      (5)
#define SOC_CM3CACHE_PU_AREA2_BASE_START        (12)
#define SOC_CM3CACHE_PU_AREA2_BASE_END          (31)


/*****************************************************************************
 �ṹ��    : SOC_CM3CACHE_PU_AREA3_UNION
 �ṹ˵��  : PU_AREA3 �Ĵ����ṹ���塣��ַƫ����:0x28����ֵ:0x00000000�����:32
 �Ĵ���˵��: PU��ַ�����üĴ���3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  AREAENABLE : 1;  /* bit[0]    : ʹ��λ,��ʾ�õ�ַ���Ƿ����PU�ж� */
        unsigned int  AREASIZE   : 5;  /* bit[1-5]  : ��ַ��С5 bits�����������±���ʾ��Sizeֵ�������01011�����С��01010����Ϊ01010�����õ�ַ�Ĵ�С�ͻ���ַ������룬���磬��Size����Ϊ16KBʱ��0x8000�ǺϷ��Ļ���ַ��0x5000�ǷǷ���ַ��������λ��Ϊ0x4000��
                                                      5'b01011: 4KB 5'b01100: 8KB 5'b01101: 16KB
                                                      5'b01110:32KB 5'b01111: 64KB 5'b10000:128KB
                                                      5'b10001:256KB 5'b10010:512KB 5'b10011:1MB
                                                      5'b10100:2MB 5'b10101:4MB 5'b10110:8MB
                                                      5'b10111:16MB 5'b11000:32MB 5'b11001:64MB
                                                      5'b11010:128MB 5'b11011:256MB 5'b11100:512MB
                                                      5'b11101:1GB 5'b11110:2GB 5'b11111:4GB */
        unsigned int  reserved   : 6;  /* bit[6-11] : reserved */
        unsigned int  BASE       : 20; /* bit[12-31]: ��ַ�εĻ���ַ����ֻ�����õ�ַ�ĸ�20λ������С���Ϊ4KB�� */
    } reg;
} SOC_CM3CACHE_PU_AREA3_UNION;
#endif
#define SOC_CM3CACHE_PU_AREA3_AREAENABLE_START  (0)
#define SOC_CM3CACHE_PU_AREA3_AREAENABLE_END    (0)
#define SOC_CM3CACHE_PU_AREA3_AREASIZE_START    (1)
#define SOC_CM3CACHE_PU_AREA3_AREASIZE_END      (5)
#define SOC_CM3CACHE_PU_AREA3_BASE_START        (12)
#define SOC_CM3CACHE_PU_AREA3_BASE_END          (31)






/*****************************************************************************
  8 OTHERS����
*****************************************************************************/



/*****************************************************************************
  9 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of soc_cm3cache_interface.h */
