#ifndef __MDRV_ACORE_WDT_H__
#define __MDRV_ACORE_WDT_H__
#ifdef __cplusplus
extern "C"
{
#endif

    /*****************************************************************************
     *  �� �� ��  : mdrv_wdt_feed
     *  ��������  : ���ÿ��Ź�
     *  �������  : wdtId    ���Ź�ID
     *
     *  �������  : ��
     *  �� �� ֵ  :  0       �����ɹ���
     *               ����    ����ʧ�ܡ�
     *
     ******************************************************************************/
    int  mdrv_wdt_feed(unsigned char wdtId);

#ifdef __cplusplus
}
#endif

#endif
