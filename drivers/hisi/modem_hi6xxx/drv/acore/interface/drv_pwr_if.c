/*************************************************************************
*   ��Ȩ����(C) 1987-2011, ���ڻ�Ϊ�������޹�˾.
*
*   �� �� �� :  Drvinterface.c
*
*   ��    �� :  c61362
*
*   ��    �� :  ������ϲ������װ�Ľӿڲ�
*
*   �޸ļ�¼ :  2012��3��2�� ����
*************************************************************************/
#include "BSP.h"

/*****************************************************************************
 �� �� ��  : BSP_SOCP_SLEEPIN
 ��������  : SOCP����˯��
 �������  : pu32SrcChanID:����Դͨ��ID�б�
             uSrcChanNum:  ����Դͨ������
             pu32DstChanID:����Ŀ��ͨ��ID�б�
             uSrcChanNum:  ����Ŀ��ͨ������
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:����˯�߳ɹ���
             ����:   ����˯��ʧ��
*****************************************************************************/
BSP_U32 BSP_SOCP_SLEEPIN(BSP_U32 *pu32SrcChanID, BSP_U32 uSrcChanNum, BSP_U32 *pu32DstChanID, BSP_U32 uDstChanNum)
{
#if defined (BALONG_COMPILE_SEPATARE)
    return 0;
#else
    return 0;
#endif

}

/*****************************************************************************
 �� �� ��  : BSP_SOCP_SLEEPOUT
 ��������  : SOCP�˳�˯��
 �������  : pu32SrcChanID:����Դͨ��ID�б�
             uSrcChanNum:  ����Դͨ������
             pu32DstChanID:����Ŀ��ͨ��ID�б�
             uSrcChanNum:  ����Ŀ��ͨ������
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:����˯�߳ɹ���
             ����:   ����˯��ʧ��
*****************************************************************************/
BSP_U32 BSP_SOCP_SLEEPOUT(BSP_U32 *pu32SrcChanID, BSP_U32 uSrcChanNum, BSP_U32 *pu32DstChanID, BSP_U32 uDstChanNum)
{
#if defined (BALONG_COMPILE_SEPATARE)
    return 0;
#else
    return 0;
#endif
}


//monan for v9r1bbit
#if (defined(BOARD_SFT) && defined(VERSION_V9R1))//monan for v9r1bbit

#define printk(a)



int pmREGSet(BSP_U8 addr, BSP_U8 value, BSP_U8 mask)
{
    printk("stub  monan :pmREGSet. \n");
    return 0;
}


void PWRCTRL_BspInitial(void)
{
    printk("stub  monan :PWRCTRL_BspInitial. \n");
    return ;
}


int pmBUCKVoltSet(int buck_ID, BSP_U16 value)
{
    printk("stub  monan :pmBUCKVoltSet. \n");
    return 0;
}




#endif

/************************V9R1SFT START***********************/
