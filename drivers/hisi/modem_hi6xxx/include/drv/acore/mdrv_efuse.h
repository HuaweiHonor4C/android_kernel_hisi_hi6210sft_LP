#ifndef __MDRV_ACORE_EFUSE_H__
#define __MDRV_ACORE_EFUSE_H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "mdrv_efuse_common.h"

    /*************************************************
     *  �� �� ��   : mdrv_efuse_get_chipid
     *  ��������   : mdrv_efuse_get_chipid
     *  �������   : buf: data buffer
     *               len: length of the group
     *  �������   :
     *  �� �� ֵ   : OK                (0)
     *               BUF_ERROR         (-55)
     *               LEN_ERROR         (-56)
     *               READ_EFUSE_ERROR  (-57)
     *  �޸���ʷ   :
     *  ��    �� : 2013��8��12��
     *  ��    �� : l00225826
     *  �޸����� : �����ɺ���
     *************************************************/
    int mdrv_efuse_get_chipid(unsigned char* buf,int length);

    /*************************************************
     *  �� �� ��   : mdrv_efuse_get_dieid
     *  ��������   : mdrv_efuse_get_dieid
     *  �������   : buf: data buffer
     *               len: length of the group
     *  �������   :
     *  �� �� ֵ   : OK                (0)
     *               BUF_ERROR         (-55)
     *               LEN_ERROR         (-56)
     *               READ_EFUSE_ERROR  (-57)

     *  �޸���ʷ   :
     *  ��    �� : 2013��8��12��
     *  ��    �� : l00225826
     *  �޸����� : �����ɺ���
     *************************************************/
    int mdrv_efuse_get_dieid(unsigned char* buf, int length);


#ifdef __cplusplus
}
#endif
#endif
