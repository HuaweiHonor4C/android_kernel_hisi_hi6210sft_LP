
#include <linux/kernel.h>
#include <linux/kthread.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/io.h>
#include "rfilesystem_process.h"
#include <linux/hisi/reset.h>

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
���Լ���������
*****************************************************************************/

/*****************************************************************************
��������
*****************************************************************************/

/*****************************************************************************
��������
*****************************************************************************/

/*************************************************************************
*�ļ�ϵͳ�ӿ�
**************************************************************************/
/*************************************************************************
 �� �� ��   : BSP_fopen
 ��������   : ��һ���ļ�
 �������   : const char *path -Ҫ�򿪵��ļ�·�����ļ���
                            const char *mode-��ģʽ������̬
 �������   :
 �� �� ֵ   : �ɹ������ļ�ָ�룬ʧ�ܷ���NULL
*************************************************************************/
RFILE *BSP_fopen(const char *path, const char *mode)
{
    return (bsp_linux_fopen(path, mode));
}
/*************************************************************************
 �� �� ��   : BSP_fseek
 ��������   : �ض�λ�ļ��ڲ�λ��ָ��
 �������   : RFILE *stream-Ҫ�������ļ���
                            long offset-Ҫ�ƶ���ƫ�Ƶ�ַ
                            int whence-λ��ָ�����ʼλ��
 �������   :
 �� �� ֵ   : �ɹ�����0��ʧ�ܷ���-1
*************************************************************************/
int BSP_fseek(RFILE *stream, long offset, int whence)
{
    return (bsp_linux_fseek(stream, offset, whence));
}
/*************************************************************************
 �� �� ��   : BSP_ftell
 ��������   : ���ص�ǰ�ļ�λ�ã�Ҳ���Ƿ���FILEָ�뵱ǰλ��
 �������   : RFILE *stream-Ҫ�������ļ���
 �������   :
 �� �� ֵ   : �ɹ����ص�ǰ��дλ�ã�ʧ�ܷ���-1
*************************************************************************/
long BSP_ftell(RFILE *stream)
{
    return (bsp_linux_ftell(stream));
}
/*************************************************************************
 �� �� ��   : BSP_fread
 ��������   : ��һ���ļ����ж�ȡ����
                            ��ȡcount��Ԫ�أ�ÿ��Ԫ��size�ֽ�
 �������   : void *buffer-���ڽ������ݵ��ڴ��ַ
                                ��С������size*count�ֽ�
                            unsigned int size-����Ԫ�ش�С����λ���ֽ�
                            unsigned int count-�صĸ�����ÿ��Ԫ����size�ֽ�
                            RFILE *stream-������
 �������   :
 �� �� ֵ   : �ɹ�����ʵ�ʶ�ȡ��Ԫ������,ʧ�ܷ��� -1
                        �������ֵ��count������count*size������ͬ
                        ������ļ���β��������
*************************************************************************/
int BSP_fread(void*buf,unsigned int size,unsigned int count, RFILE *stream)
{
    int iresult = bsp_linux_fread(buf, (count*size), stream);

    iresult = ((iresult == (count*size))?count:iresult);
    return iresult;
}
/*************************************************************************
 �� �� ��   : BSP_fwrite
 ��������   : ��һ���ļ���д�����ݿ�
 �������   : const void *buffer-Ҫ������ݵĵ�ַ
                             unsigned int size-Ҫд�����ݵĵ��ֽ���
                             unsigned int count-Ҫ����д��size�ֽڵ�������ĸ���
                             RFILE *stream-Ŀ���ļ�ָ��
 �������   :
 �� �� ֵ   : �ɹ�����д�����������ʧ�ܷ���-1
*************************************************************************/
int BSP_fwrite(const void* buf,unsigned int size,unsigned int count,RFILE *stream)
{
    int iresult = bsp_linux_fwrite((void *)buf, (count*size), stream);

    iresult = ((iresult == (count*size))?count:iresult);
    return iresult;
}
/*************************************************************************
 �� �� ��   : BSP_fclose
 ��������   : �ر�һ���ļ���
 �������   : RFILE *fp-Ҫ�������ļ�ָ��
 �������   :
 �� �� ֵ   : �ɹ�����0��ʧ�ܷ���-1
*************************************************************************/
int BSP_fclose(RFILE *fp)
{
    return (bsp_linux_fclose(fp));
}

void *mdrv_file_open(const char *path, const char *mode)
{
    return (void *)BSP_fopen(path, mode);
}

int mdrv_file_seek(void *stream, long offset, int whence)
{
    return BSP_fseek((RFILE *)stream, offset, whence);
}

long mdrv_file_tell(void *stream)
{
    return BSP_ftell((RFILE *)stream);
}

int mdrv_file_read(void *ptr, unsigned int size, unsigned int number, void *stream)
{
    return BSP_fread(ptr,size,number, (RFILE *)stream) ;
}
int mdrv_file_write(void *ptr, unsigned int size, unsigned int number, void *stream)
{
    return BSP_fwrite(ptr,size,number,(RFILE *)stream);
}

int mdrv_file_close(void *fp)
{
    return BSP_fclose((RFILE *)fp);
}


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
