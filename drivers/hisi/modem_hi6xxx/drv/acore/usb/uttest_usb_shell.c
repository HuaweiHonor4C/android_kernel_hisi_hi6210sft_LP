/*******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 *******************************************************************************
  �� �� ��   : _usb_shell.c
  �� �� ��   : ����
  ��    ��   : ������ 00145324
  ��������   : 2012��11��13��
  ����޸�   :
  ��������   : ����ʵ��A SHELL / C SHELL���⴮��ģ��
  �޸���ʷ   :
  1.��    ��   : 2012��11��13��
    ��    ��   : ������ 00145324
    �޸�����   : �����ļ�

*******************************************************************************/

/*******************************************************************************
  1 ͷ�ļ�����
*******************************************************************************/

#include "usb_shell.c"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*******************************************************************************
  2 ȫ�ֱ�������
*******************************************************************************/
static void test_tty_write_cb(struct console *cons, const char *buf, unsigned count);

struct tty_struct g_tty_ut;
const struct tty_operations g_tty_ops_ut_write_null = {
	.write = NULL,
};
const struct tty_operations g_tty_ops_ut = {
	.write = test_tty_write_cb,
};

/*******************************************************************************
  3 ��������
*******************************************************************************/

/*******************************************************************************
  4 ����ʵ��
*******************************************************************************/

/*******************************************************************************
 �� �� ��: test_tty_write_cb
 ��������: ttyд�ص�
 �������: ��
 �������: ��
 �� �� ֵ: -1 ʧ�� 0 �ɹ�
*******************************************************************************/
static void test_tty_write_cb(struct console *cons, const char *buf, unsigned count)
{
    /* just a stub, do nothing */;
    return 0;
}

/*******************************************************************************
 �� �� ��: test_ashell_console_write_fail1
 ��������: ����������ʧ��
 �������: ��
 �������: ��
 �� �� ֵ: -1 ʧ�� 0 �ɹ�
*******************************************************************************/
int test_ashell_console_write_fail1(void)
{
    ashell_console_write((struct console *)NULL, NULL, 0);
    return -1;
}

/*******************************************************************************
 �� �� ��: test_ashell_console_write_fail2
 ��������: ttyΪ�յ���ʧ��
 �������: ��
 �������: ��
 �� �� ֵ: -1 ʧ�� 0 �ɹ�
*******************************************************************************/
int test_ashell_console_write_fail2(void)
{
    char *buf = "abcd";

    g_ashell_ctx.tty = NULL;
    ashell_console_write((struct console *)(&(g_ashell_ctx.port_console)), buf, 4);
    return -1;
}

/*******************************************************************************
 �� �� ��: test_ashell_console_write_fail3
 ��������: deviceΪ�յ���ʧ��
 �������: ��
 �������: ��
 �� �� ֵ: -1 ʧ�� 0 �ɹ�
*******************************************************************************/
int test_ashell_console_write_fail3(void)
{

    struct tty_driver *device = NULL;
    char *buf = "abcd";


    device = g_ashell_ctx.port_console.device;
    g_ashell_ctx.port_console.device = NULL;
    ashell_console_write((struct console *)(&(g_ashell_ctx.port_console)), buf, 4);
    g_ashell_ctx.port_console.device = device;
    return -1;
}

/*******************************************************************************
 �� �� ��: test_ashell_console_write_fail4
 ��������: writeΪ�յ���ʧ��
 �������: ��
 �������: ��
 �� �� ֵ: -1 ʧ�� 0 �ɹ�
*******************************************************************************/
int test_ashell_console_write_fail4(void)
{
    struct tty_struct *tty = NULL;
    struct tty_driver *device = NULL;
    int *write = NULL;
    char *buf = "abcd";

    g_ashell_ctx.tty = &g_tty_ut;
    g_ashell_ctx.tty->ops = &g_tty_ops_ut_write_null;

    ashell_console_write((struct console *)(&(g_ashell_ctx.port_console)), buf, 4);

    return -1;
}

/*******************************************************************************
 �� �� ��: test_ashell_console_write_ok
 ��������: ashell д�ɹ�
 �������: ��
 �������: ��
 �� �� ֵ: -1 ʧ�� 0 �ɹ�
*******************************************************************************/
int test_ashell_console_write_ok(void)
{
    struct tty_struct *tty = NULL;
    struct tty_driver *device = NULL;
    char *buf = "abcd";

    g_ashell_ctx.tty = &g_tty_ut;
    g_ashell_ctx.tty->ops = &g_tty_ops_ut;

    ashell_console_write((struct console *)(&(g_ashell_ctx.port_console)), buf, 4);

    return 0;
}


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

