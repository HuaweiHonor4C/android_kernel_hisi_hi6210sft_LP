/*************************************************************************
*   ��Ȩ����(C) 1987-2004, ���ڻ�Ϊ�������޹�˾.
*
*   �� �� �� :  BSP_DRV_VIC.h
*
*   ��    �� :  zhanghailun
*
*   ��    �� :  �ж�ģ���û��ӿ��ļ�
*
*   �޸ļ�¼ :  2009��3��5��  v1.00  zhanghailun  ����
*************************************************************************/

#ifndef _BSP_DRVVIC_H_
#define _BSP_DRVVIC_H_

#ifdef __cplusplus
extern "C" {
#endif

#define INT_LVL_MAX 160

/* �궨�� */
#ifndef IVEC_TO_INUM 
#define IVEC_TO_INUM(intVec)    ((int) (intVec))
#endif
#define INUM_TO_IVEC(intNum)    ((VOIDFUNCPTR *) (intNum))

/*****************************************************************************
* �� �� ��  : BSP_DRV_SubVicInit
*
* ��������  : �����жϳ�ʼ��
*
* �������  : ��
* �������  : ��
*
* �� �� ֵ  : ��
*
* �޸ļ�¼  : 2009��3��5��   zhanghailun  creat
*****************************************************************************/
static int __init BSP_DRV_SubVicInit(void);


#ifdef __cplusplus
}
#endif

#endif /* end #define _BSP_VIC_H_*/

