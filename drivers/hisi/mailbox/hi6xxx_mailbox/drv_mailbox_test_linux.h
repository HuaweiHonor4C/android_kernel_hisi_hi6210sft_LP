
#ifndef __TEST_DRV_MAILBOX_H__
#define __TEST_DRV_MAILBOX_H__

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/



#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define TEST_MAILBOX_INIT_FLAG          (0x5aa55aa5)

#define TM_MAILBOX_BYTE_PER_KB          (1024)

#define Second_To_Millisecond           (1000)
 /*�������ĳ˷�����*/
#define MAILBOX_BOARDST_BOUNDWIDTH_MUL_LIMIT   30

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
 ʵ �� ��  : struct tm_mb_handle
 ��������  : ������ģ����ƾ��
*****************************************************************************/
struct tm_mb_handle
{
    void *          mutex;
    unsigned int   init_flag;
};

/*****************************************************************************
 ʵ �� ��  : struct tm_mb_cb
 ��������  : �����Ե��û��ص����
*****************************************************************************/
struct tm_mb_cb
{
    void *           finish_sema;
    void *           sync_sema;
    unsigned int    start_slice;       /*for calculate boundwidth*/
    unsigned int    end_slice;         /*for calculate boundwidth*/
    unsigned int    prob_slice;        /*for calculate latency*/
    unsigned int    back_slice;        /*for calculate latency*/
    unsigned int    msg_count;
    unsigned int    task_count;
    unsigned int    check_ret;
};

/*****************************************************************************
 ʵ �� ��  : test_mailbox_send_proc_func
 ��������  : �����Ե���ں���
*****************************************************************************/
typedef void (*test_mailbox_send_proc_func)(
                unsigned int mailcode,
                unsigned int recvcode,
                unsigned int sendsize,
                unsigned int msgnum,
                unsigned int delaytick,
                unsigned int delaynum,
                unsigned int trytimes,
                struct tm_mb_cb * cb);

/*****************************************************************************
 ʵ �� ��  : struct test_mailbox_proc
 ��������  : �����Ե�������νṹ��
*****************************************************************************/
struct test_mailbox_proc
{
    test_mailbox_send_proc_func proc_cb;
    unsigned int mail_code;
    unsigned int recv_code;
    unsigned int send_size;
    unsigned int msg_num;
    unsigned int delay_tick;
    unsigned int delay_num;
    unsigned int try_times;
    struct tm_mb_cb * mb_cb;
};


/*****************************************************************************
  7 UNION����
*****************************************************************************/

/*****************************************************************************
  8 OTHERS����
*****************************************************************************/


extern unsigned int test_mailbox_msg_multi_send(
                unsigned int DstId,
                unsigned int CarrierID,
                unsigned int TaskNum,
                unsigned int MsgLen,
                unsigned int MsgNum,
                unsigned int Priority,
                unsigned int DelayTick,
                unsigned int DelayNum,
                unsigned int TryTimes
);

extern unsigned int test_mailbox_msg_multi_test(
                unsigned int DstId,
                unsigned int TaskNum,
                unsigned int MsgNum,
                unsigned int DelayNum);

extern unsigned int test_mailbox_msg_single_test(
                unsigned int DstId,
                unsigned int MsgLen,
                unsigned int MsgNum,
                unsigned int DelayNum);

extern void test_mailbox_msg_reg(unsigned int ChannelID);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif /* end of test_drv_mailbox.h */

