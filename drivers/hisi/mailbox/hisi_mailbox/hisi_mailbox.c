/*
 * mailbox core driver
 *
 * Copyright (c) 2013- Hisilicon Technologies CO., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/module.h>
#include <linux/interrupt.h>
#include <linux/slab.h>
#include <linux/err.h>
#include <linux/notifier.h>
#include <linux/init.h>
#include <linux/delay.h>
#include <linux/wakelock.h>
#include <linux/hisi/hisi_mailbox.h>
#include "hisi_mailbox_debugfs.h"

#define MBOX_PR_ERR(fmt, args ...)	\
	({				\
		pr_err("%s(%d):" fmt "\n", \
			MODULE_NAME, __LINE__, ##args); \
	})
#define MBOX_PR_INFO(fmt, args ...)	\
	({				\
		pr_info("%s(%d):" fmt "\n", \
			MODULE_NAME, __LINE__, ##args); \
	})
#define MBOX_PR_DEBUG(fmt, args ...)	\
	({				\
		; \
	})

#define MODULE_NAME "hisi_mailbox"

/* debugfs tts for ipc performance */
#ifdef CONFIG_HISI_MAILBOX_PERFORMANCE_DEBUG
#define PERFORMANCE_DEBUG(tx_task, timing)		\
do {							\
	if (tx_task->perf_debug)			\
		getnstimeofday(&tx_task->tts[timing]);	\
} while (0)

#define TASK_DEBUG_ON(tx_task)		(tx_task->perf_debug =	\
						PERFORMANCE_DEBUG_ON)
#define TASK_DEBUG_OFF(tx_task)		(tx_task->perf_debug =	\
						PERFORMANCE_DEBUG_OFF)
#define START_TTS(tx_task)		PERFORMANCE_DEBUG(tx_task, IPC_START)
#define SEND_TTS(tx_task)		PERFORMANCE_DEBUG(tx_task, IPC_SEND)
#define RECEIVE_TTS(tx_task)		PERFORMANCE_DEBUG(tx_task, IPC_RECEIVE)
#define BH_TTS(tx_task)			PERFORMANCE_DEBUG(tx_task, IPC_BH)
#define COMPLETE_TTS(tx_task)		PERFORMANCE_DEBUG(tx_task, IPC_COMPLETE)
#define PRINT_TTS(tx_task)		\
do {					\
	if (tx_task->perf_debug)	\
		dump_tts(tx_task);	\
} while (0)
#else
#define TASK_DEBUG_ON(tx_task)		do {} while (0)
#define TASK_DEBUG_OFF(tx_task)		do {} while (0)
#define START_TTS(tx_task)		do {} while (0)
#define SEND_TTS(tx_task)		do {} while (0)
#define RECEIVE_TTS(tx_task)		do {} while (0)
#define BH_TTS(tx_task)			do {} while (0)
#define COMPLETE_TTS(tx_task)		do {} while (0)
#define PRINT_TTS(tx_task)		do {} while (0)
#endif

/* max 256 simultaneous tasks for every mailbox device */
#define MAILBOX_MAX_TX_BUFFER (256 * sizeof(struct hisi_mbox_task *))

/*
 * timeout for waiting auto ack, 300ms.
 * timeout for waiting manual ack, 300ms.
 */
#define MAILBOX_AUTOACK_TIMEOUT msecs_to_jiffies(300)
#define MAILBOX_MANUACK_TIMEOUT msecs_to_jiffies(300)

enum {NOCOMPLETION = 0, COMPLETING, COMPLETED};
enum {TX_TASK = 0, RX_TASK};

/* mailbox device resource pool */
static struct hisi_mbox_device **mdevices;

#ifdef CONFIG_HISI_MAILBOX_PERFORMANCE_DEBUG
static void dump_tts(struct hisi_mbox_task *tx_task)
{
	struct timespec *tts = tx_task->tts;

	MBOX_PR_INFO("\n=======  current IPC time stamp  =======\n  [START]    : %lu.%lu\n  [SEND]     : %lu.%lu\n  [RECEIVE]  : %lu.%lu\n  [BHalf]    : %lu.%lu\n  [COMPLETE] : %lu.%lu\n  [SEND  -> COMPLETE] : %lus %luns\n  [START -> COMPLETE] : %lus %luns\n=================  end  ================\n\n",
		tts[IPC_START].tv_sec, tts[IPC_START].tv_nsec,
		tts[IPC_SEND].tv_sec, tts[IPC_SEND].tv_nsec,
		tts[IPC_RECEIVE].tv_sec, tts[IPC_RECEIVE].tv_nsec,
		tts[IPC_BH].tv_sec, tts[IPC_BH].tv_nsec,
		tts[IPC_COMPLETE].tv_sec, tts[IPC_COMPLETE].tv_nsec,
		tts[IPC_COMPLETE].tv_sec - tts[IPC_SEND].tv_sec,
		tts[IPC_COMPLETE].tv_nsec - tts[IPC_SEND].tv_nsec,
		tts[IPC_COMPLETE].tv_sec - tts[IPC_START].tv_sec,
		tts[IPC_COMPLETE].tv_nsec - tts[IPC_START].tv_nsec);

	return;
}
#endif

void hisi_mbox_task_free(struct hisi_mbox_task **tx_task)
{
	struct hisi_mbox_task *task = NULL;

	if (!tx_task) {
		MBOX_PR_ERR("null pointer\n");
		return;
	}

	task = *tx_task;
	if (task) {
		kfree(task->rp_name);
		kfree(task);
		task = NULL;
	}

	*tx_task = task;
	return;
}
EXPORT_SYMBOL(hisi_mbox_task_free);

struct hisi_mbox_task *hisi_mbox_task_alloc(struct hisi_mbox *mbox,
					const char *rp_name,
					mbox_msg_t *tx_buffer,
					mbox_msg_len_t tx_buffer_len,
					int need_auto_ack,
					mbox_complete_t complete_fn,
					void *context)
{
	struct hisi_mbox_task *tx_task = NULL;
	char *_rp_name = NULL;
	int rp_name_len = 0;

	if (!mbox) {
		MBOX_PR_ERR("null pointer mbox\n");
		goto out;
	}

	if (!mbox->tx) {
		MBOX_PR_ERR("mbox %s no tx ability\n", mbox->name);
		goto out;
	}

	/* remote processor must be certain and accesilbe for mailbox */
	if (mbox->tx->ops->ability(mbox->tx, TX_MAIL, rp_name) !=
							RPACCESSIBLE) {
		MBOX_PR_ERR("invalid remote processor \"%s\" for %s\n",
					rp_name, mbox->tx->name);
		goto out;
	}

	if (!tx_buffer) {
		MBOX_PR_ERR("mbox %s no tx msg\n", mbox->name);
		goto out;
	}

	if (!complete_fn) {
		MBOX_PR_ERR("mbox %s no complete fn\n", mbox->name);
		goto out;
	}

	tx_task = kmalloc(sizeof(*tx_task), GFP_ATOMIC);
	if (!tx_task) {
		MBOX_PR_ERR("tx task no mem\n");
		goto out;
	}

	rp_name_len = strlen(rp_name);
	_rp_name = kmalloc(sizeof(char) * (rp_name_len + 1), GFP_ATOMIC);
	if (!_rp_name) {
		MBOX_PR_ERR("rp name no mem\n");
		goto free_mem;
	}
	strncpy(_rp_name, rp_name, rp_name_len);
	_rp_name[rp_name_len] = '\0';

	tx_task->rp_name = (const char *)_rp_name;
	tx_task->tx_buffer = tx_buffer;
	tx_task->tx_buffer_len = tx_buffer_len;
	tx_task->need_auto_ack = need_auto_ack;
	tx_task->complete_fn = complete_fn;
	tx_task->context = context;

	if (MBOX_IS_DEBUG_ON(mbox))
		TASK_DEBUG_ON(tx_task);
	else
		TASK_DEBUG_OFF(tx_task);

	return tx_task;
free_mem:
	kfree((void *)tx_task);
	tx_task = NULL;
out:
	return tx_task;
}
EXPORT_SYMBOL(hisi_mbox_task_alloc);

static inline int
set_status(struct hisi_mbox_device *mdev, int status)
{
	int ret = 0;

	spin_lock(&mdev->status_lock);
	if ((MDEV_DEACTIVATED & mdev->status)) {
		spin_unlock(&mdev->status_lock);
		MBOX_PR_INFO("an unexpected ipc caused by %s\n",
			mdev->name);
		/* WARN_ON(1); */
		ret = -ENODEV;
		goto out;
	} else if ((MDEV_DEACTIVATED & status)) {
		mdev->status |= status;

		while ((MDEV_SYNC_SENDING & mdev->status) ||
				(MDEV_ASYNC_ENQUEUE & mdev->status)) {
			spin_unlock(&mdev->status_lock);
			msleep(5);
			spin_lock(&mdev->status_lock);
		}
	} else {
		mdev->status |= status;
	}

	spin_unlock(&mdev->status_lock);
out:
	return ret;
}

static inline void
clr_status(struct hisi_mbox_device *mdev, int status)
{
	spin_lock(&mdev->status_lock);
	mdev->status &= ~status;
	spin_unlock(&mdev->status_lock);
	return;
}

static int
hisi_mbox_task_send_nolock(struct hisi_mbox_device *mdev,
				struct hisi_mbox_task *tx_task)
{
	unsigned long tx_timeout = 0;
	long timeout;
	int ret = 0;
	mbox_msg_t *rx_buffer = NULL;
	mbox_msg_len_t rx_len = 0;
	int wait = 0;
	int need_irq_enable = 0;
	int receipted = 0;
	unsigned long flags;

	SEND_TTS(tx_task);

	INIT_COMPLETION(mdev->complete);
	mdev->completed = NOCOMPLETION;
	mdev->tx_task = tx_task;

	ret = mdev->ops->send(mdev,
			tx_task->rp_name,
			tx_task->tx_buffer,
			tx_task->tx_buffer_len,
			tx_task->need_auto_ack);
	if (ret) {
		mdev->tx_task = NULL;
		MBOX_PR_ERR("mdev %s can not be sent\n", mdev->name);
		goto out;
	} else {
		mdev->ops->track(mdev, SEND_MSG);
	}
	if (NO_ACK == tx_task->need_auto_ack) {
		goto out;
	} else if (AUTO_ACK == tx_task->need_auto_ack) {
		tx_timeout = MAILBOX_AUTOACK_TIMEOUT;
	} else if (MANUAL_ACK == tx_task->need_auto_ack) {
		tx_timeout = MAILBOX_MANUACK_TIMEOUT;
	} else {
		MBOX_PR_ERR("%s invalid ack mode.\n", mdev->name);
		goto refresh;
	}

	timeout = wait_for_completion_timeout(&mdev->complete, tx_timeout);
	if (unlikely(0 == timeout)) {
		MBOX_PR_INFO("\n %s ipc timeout...\n"
			"<MAILBOX INFO> MSG[0] : 0x%08x\n"
			"<MAILBOX INFO> MSG[1] : 0x%08x\n"
			"<MAILBOX INFO> fifo   : %d\n",
			mdev->name,
			tx_task->tx_buffer[0],
			tx_task->tx_buffer[1],
			(int)(kfifo_len(&mdev->fifo) / sizeof(*tx_task)));

		if (mdev->ops->status)
			mdev->ops->status(mdev);

		/* Synchronization for isr. */
		spin_lock_irqsave(&mdev->complete_lock, flags);

		switch (mdev->completed) {
		case NOCOMPLETION:
			MBOX_PR_INFO("IPC timeout : NOCOMPLETION.\n");
			mdev->completed = COMPLETED;
			break;

		case COMPLETING:
			MBOX_PR_INFO("IPC timeout : COMPLETING.\n");
			/*
			 * Wait for ACK reception in behind half in 50ms.
			 * Both ACK reception and irq restore will be handled
			 * here instead of in behind half, in the case of
			 * tasklet jam in irq-affinity core.
			 */
			wait = 10;
			do {
				spin_unlock_irqrestore(&mdev->complete_lock,
									flags);
				msleep(5);
				spin_lock_irqsave(&mdev->complete_lock, flags);
			} while (mdev->completed != COMPLETED && wait--);

			/* Tasklet jam */
			if (mdev->completed != COMPLETED) {
				mdev->completed = COMPLETED;
				need_irq_enable = 1;
				break;
			}

		case COMPLETED:
			MBOX_PR_INFO("IPC timeout : COMPLETED.\n");
			receipted = 1;

		default:
			goto unlock;
		}

		/* Handle ack & irq. */
		if (mdev->ops->is_ack(mdev) || need_irq_enable) {
			rx_len = mdev->ops->recv(mdev, &rx_buffer);
			tx_task->ack_buffer = rx_buffer;
			tx_task->ack_buffer_len = rx_len;
			receipted = 1;

			if (need_irq_enable)
				mdev->ops->enable_irq(mdev);
		} else {
			/* ACK lost */
			ret = -ETIMEOUT;
		}

unlock:
		spin_unlock_irqrestore(&mdev->complete_lock, flags);

		if (receipted && need_irq_enable)
			MBOX_PR_INFO("IPC timeout reason: TASKLET jam.\n");
		else if (receipted && !need_irq_enable)
			MBOX_PR_INFO("IPC timeout reason: ISR jam.\n");
		else if (!receipted)
			MBOX_PR_INFO("IPC timeout reason: ACK lost.\n");
	}

refresh:
	mdev->ops->refresh(mdev);
	mdev->ops->track(mdev, FREE_CHAN);
out:
	/* completion */
	MBOX_PR_DEBUG("mdev %s completion\n", mdev->name);
	mdev->tx_task = NULL;
	COMPLETE_TTS(tx_task);
	return ret;
}

/*
 * callback for synchronized sending function
 */
static void hisi_mbox_dummy_complete(struct hisi_mbox_task *task)
{
	return;
}

int hisi_mbox_msg_send_sync(struct hisi_mbox *mbox,
				const char *rp_name,
				mbox_msg_t *tx_buffer,
				mbox_msg_len_t tx_buffer_len,
				int need_auto_ack,
				mbox_msg_t *ack_buffer,
				mbox_msg_len_t ack_buffer_len)
{
	struct hisi_mbox_device *mdev;
	struct hisi_mbox_task *tx_task = NULL;
	int ret = 0;

	tx_task = hisi_mbox_task_alloc(mbox,
				rp_name,
				tx_buffer,
				tx_buffer_len,
				need_auto_ack,
				hisi_mbox_dummy_complete,
				NULL);
	if (!tx_task) {
		ret = -EINVAL;
		goto out;
	}

	mdev = mbox->tx;

	START_TTS(tx_task);

	/* SYNC_SENDING start */
	ret = set_status(mdev, MDEV_SYNC_SENDING);
	if (ret) {
		MBOX_PR_ERR("MSG{0x%08x, 0x%08x}\n",
			tx_task->tx_buffer[0], tx_task->tx_buffer[1]);
		goto free_task;
	}

	/* send */
	mutex_lock(&mdev->dev_lock);
	ret = hisi_mbox_task_send_nolock(mdev, tx_task);
	if (!ret && ack_buffer && (NO_ACK != need_auto_ack)) {
		memcpy(ack_buffer, tx_task->ack_buffer,
			sizeof(mbox_msg_t) / sizeof(u8) * ack_buffer_len);
	}

	PRINT_TTS(tx_task);
	mutex_unlock(&mdev->dev_lock);

	/* SYNC_SENDING end */
	clr_status(mdev, MDEV_SYNC_SENDING);

free_task:
	hisi_mbox_task_free(&tx_task);
out:
	return ret;
}
EXPORT_SYMBOL(hisi_mbox_msg_send_sync);

int
hisi_mbox_msg_send_async(struct hisi_mbox *mbox, struct hisi_mbox_task *tx_task)
{
	struct hisi_mbox_device *mdev = NULL;
	int ret = 0;

	if (!tx_task || !mbox || !mbox->tx) {
		MBOX_PR_ERR("invalid parameters\n");
		ret = -EINVAL;
		goto out;
	}

	mdev = mbox->tx;

	START_TTS(tx_task);

	/* ASYNC_ENQUEUE start */
	ret = set_status(mdev, MDEV_ASYNC_ENQUEUE);
	if (ret) {
		MBOX_PR_ERR("MSG{0x%08x, 0x%08x}\n",
			tx_task->tx_buffer[0], tx_task->tx_buffer[1]);
		goto out;
	}

	/* enqueue */
	spin_lock(&mdev->fifo_lock);
	if (kfifo_avail(&mdev->fifo) < sizeof(struct hisi_mbox_task *)) {
		MBOX_PR_ERR("mdev %s fifo full\n", mdev->name);
		ret = -ENOMEM;
		goto unlock;
	}

	kfifo_in(&mdev->fifo, &tx_task, sizeof(struct hisi_mbox_task *));

	if (!work_pending(&mdev->tx_work))
		schedule_work(&mdev->tx_work);

unlock:
	spin_unlock(&mdev->fifo_lock);

	/* ASYNC_ENQUEUE end */
	clr_status(mdev, MDEV_ASYNC_ENQUEUE);
out:
	return ret;
}
EXPORT_SYMBOL(hisi_mbox_msg_send_async);

static struct hisi_mbox_task *
hisi_mbox_dequeue_task(struct hisi_mbox_device *mdev)
{
	struct hisi_mbox_task *tx_task = NULL;

	spin_lock(&mdev->fifo_lock);
	if (kfifo_len(&mdev->fifo) >= sizeof(struct hisi_mbox_task *)) {
		if (!kfifo_out(&mdev->fifo,
			&tx_task, sizeof(struct hisi_mbox_task *)))
			tx_task = NULL;
	}

	spin_unlock(&mdev->fifo_lock);
	return tx_task;
}

static void hisi_mbox_tx_work(struct work_struct *work)
{
	struct hisi_mbox_device *mdev =
		container_of(work, struct hisi_mbox_device, tx_work);
	struct hisi_mbox_task *tx_task = NULL;
	int ret = 0;

	mutex_lock(&mdev->dev_lock);
	while ((tx_task = hisi_mbox_dequeue_task(mdev))) {
		ret = hisi_mbox_task_send_nolock(mdev, tx_task);
		PRINT_TTS(tx_task);

		tx_task->tx_error = ret;
		tx_task->complete_fn(tx_task);

		/* current task unlinked */
		mdev->tx_task = NULL;
	}

	mutex_unlock(&mdev->dev_lock);
	return;
}

static void hisi_mbox_rx_bh(unsigned long context)
{
	struct hisi_mbox_device *mdev = (struct hisi_mbox_device *)context;
	mbox_msg_t *rx_buffer = NULL;
	mbox_msg_len_t rx_len = 0;
	unsigned long flags;

	MBOX_PR_DEBUG("mdev %s rx enter\n", mdev->name);

	/*
	 * check msg type
	 * - if ack interrupt occur,
	 *   an entire ipc have completed, and a completion should be excuted;
	 * - if msg interrupt occur,
	 *   we need broadcast msgs to useres only after submit an ack.
	 */
	switch (mdev->cur_task) {
	case TX_TASK:
		mdev->ops->track(mdev, ACK_SCHE);
		rx_len = mdev->ops->recv(mdev, &rx_buffer);
		spin_lock_irqsave(&mdev->complete_lock, flags);
		if (unlikely(mdev->completed != COMPLETING)) {
			spin_unlock_irqrestore(&mdev->complete_lock, flags);
			MBOX_PR_ERR("%s: %s has been handled"
				"caused of current IPC timeout(bh).\n",
				MODULE_NAME, mdev->name);
			goto out;
		}

		BH_TTS(mdev->tx_task);
		mdev->tx_task->ack_buffer = rx_buffer;
		mdev->tx_task->ack_buffer_len = rx_len;
		mdev->completed = COMPLETED;
		complete(&mdev->complete);
		spin_unlock_irqrestore(&mdev->complete_lock, flags);
		break;

	case RX_TASK:
		mdev->ops->track(mdev, MSG_SCHE);
		rx_len = mdev->ops->recv(mdev, &rx_buffer);
		mdev->ops->track(mdev, DEAL_START);
		atomic_notifier_call_chain(&mdev->notifier,
					rx_len, (void *)rx_buffer);
		mdev->ops->track(mdev, DEAL_END);
		mdev->ops->ack(mdev, NULL, 0);
		mdev->ops->track(mdev, SEND_ACK);
		break;

	default:
		break;
	}

	mdev->ops->enable_irq(mdev);
	MBOX_PR_DEBUG("mdev %s rx leave\n", mdev->name);
out:
	return;
}

static int hisi_mbox_interrupt(int irq, void *p)
{
	struct hisi_mbox_device *mdev = (struct hisi_mbox_device *)p;

	MBOX_PR_DEBUG("mdev %s interrupt enter, irq %d\n",
				mdev->name, irq);

	mdev = mdev->ops->irq_to_mdev(mdev, mdevices, irq);
	if (!mdev) {
		MBOX_PR_ERR("an unexpected inttrupt %d occured\n", irq);
		return IRQ_NONE;
	}

	if (!mdev->configured) {
		MBOX_PR_ERR("mdev %s has not startup yet\n", mdev->name);
		return IRQ_NONE;
	}

	/* ipc */
	if (mdev->ops->is_ipc(mdev)) {
		MBOX_PR_DEBUG("mdev %s ipc\n", mdev->name);
		mdev->cur_task = RX_TASK;
		mdev->cur_irq = irq;
		mdev->ops->disable_irq(mdev);
		tasklet_schedule(&mdev->rx_bh);
		return IRQ_HANDLED;
	}

	/* ack */
	spin_lock(&mdev->complete_lock);
	if (mdev->tx_task && mdev->ops->is_ack(mdev)) {
		RECEIVE_TTS(mdev->tx_task);

		if (unlikely(COMPLETED == mdev->completed)) {
			spin_unlock(&mdev->complete_lock);
			MBOX_PR_ERR("%s(%d) has been handled"
				"caused of current IPC timeout(ISR).\n",
				mdev->name, irq);
			return IRQ_HANDLED;
		} else {
			MBOX_PR_DEBUG("mdev %s ack\n", mdev->name);
			mdev->completed = COMPLETING;
			mdev->cur_task = TX_TASK;
			mdev->cur_irq = irq;
			mdev->ops->disable_irq(mdev);
			tasklet_schedule(&mdev->rx_bh);
		}
	}
	spin_unlock(&mdev->complete_lock);

	MBOX_PR_DEBUG("mdev %s interrupt leave, irq %d\n",
				mdev->name, irq);
	return IRQ_HANDLED;
}

static void
hisi_mbox_shutdown(struct hisi_mbox_device *mdev, mbox_mail_type_t mail_type)
{
	mutex_lock(&mdev->dev_lock);
	if (!--mdev->configured) {
		MBOX_PR_DEBUG("%s, %s shutdown.\n", MODULE_NAME, mdev->name);

		mdev->ops->free_irq(mdev, (void *)mdev);
		mdev->ops->shutdown(mdev);

		switch (mail_type) {
		case TX_MAIL:
			flush_work(&mdev->tx_work);
			kfifo_free(&mdev->fifo);
		case RX_MAIL:
			tasklet_kill(&mdev->rx_bh);
			break;
		default:
			break;
		}
	}

	mutex_unlock(&mdev->dev_lock);
	return;
}

static void hisi_mbox_free(struct hisi_mbox **mbox)
{
	struct hisi_mbox *_mbox = *mbox;

	kfree(_mbox->name);
	kfree(_mbox);
	_mbox = NULL;

	*mbox = _mbox;
	return;
}

void hisi_mbox_put(struct hisi_mbox **mbox)
{
	struct hisi_mbox *_mbox = NULL;
	struct hisi_mbox_device *mdev[MAIL_TYPE_MAX] = {NULL};
	int i;

	if (!mbox) {
		MBOX_PR_ERR("null pointer\n");
		return;
	}

	_mbox = *mbox;
	if (!_mbox) {
		MBOX_PR_ERR("null pointer\n");
		return;
	}

	/* tx & rx mailbox devices deinit */
	mdev[TX_MAIL] = _mbox->tx;
	mdev[RX_MAIL] = _mbox->rx;
	for (i = TX_MAIL; i < MAIL_TYPE_MAX; i++) {
		if (mdev[i])
			hisi_mbox_shutdown(mdev[i], i);
	}

	if (mdev[RX_MAIL] && _mbox->nb) {
		atomic_notifier_chain_unregister(&mdev[RX_MAIL]->notifier,
								_mbox->nb);
	}

	hisi_mbox_free(mbox);
	return;
}
EXPORT_SYMBOL(hisi_mbox_put);

static int
hisi_mbox_startup(struct hisi_mbox_device *mdev, mbox_mail_type_t mail_type)
{
	int ret = 0;

	mutex_lock(&mdev->dev_lock);
	if (!mdev->configured++) {
		switch (mail_type) {
		case TX_MAIL:
			if (kfifo_alloc(&mdev->fifo,
				MAILBOX_MAX_TX_BUFFER, GFP_KERNEL)) {
				MBOX_PR_ERR("tx mdev %s alloc kfifo failed\n", mdev->name);
				ret = -ENOMEM;
				goto deconfig;
			}

			INIT_WORK(&mdev->tx_work, hisi_mbox_tx_work);

		/* tx mdev owns rx tasklet as well, for ipc ack msg. */
		case RX_MAIL:
			tasklet_init(&mdev->rx_bh, hisi_mbox_rx_bh,
						(unsigned long)mdev);
			break;
		default:
			ret = -EINVAL;
			goto deconfig;
		}

		ret = mdev->ops->startup(mdev);
		if (ret) {
			MBOX_PR_ERR("mdev %s startup failed\n", mdev->name);
			ret = -ENODEV;
			goto deinit_work;
		}

		ret = mdev->ops->request_irq(mdev,
				hisi_mbox_interrupt, (void *)mdev);
		if (ret) {
			MBOX_PR_ERR("mdev %s request irq failed\n", mdev->name);
			ret = -ENODEV;
			goto shutdown;
		}
	}

	mutex_unlock(&mdev->dev_lock);
	return ret;

shutdown:
	mdev->ops->shutdown(mdev);
deinit_work:
	switch (mail_type) {
	case TX_MAIL:
		flush_work(&mdev->tx_work);
		kfifo_free(&mdev->fifo);
	case RX_MAIL:
		tasklet_kill(&mdev->rx_bh);
		break;
	default:
		break;
	}
deconfig:
	mdev->configured--;
	mutex_unlock(&mdev->dev_lock);
	return ret;
}

static struct hisi_mbox *
hisi_mbox_alloc(struct hisi_mbox_device *tx_mdev,
		struct hisi_mbox_device *rx_mdev, const char *rp_name)
{
	struct hisi_mbox *mbox = NULL;
	char *mbox_name = NULL;
	int len = strlen("->") + strlen(rp_name);

	mbox_name = kmalloc(sizeof(char) * (len + 1), GFP_KERNEL);
	if (!mbox_name) {
		MBOX_PR_ERR("no memory for mbox name <->%s>\n", rp_name);
		goto out;
	}
	snprintf(mbox_name, len + 1, "->%s", rp_name);

	mbox = kmalloc(sizeof(*mbox), GFP_KERNEL);
	if (!mbox) {
		MBOX_PR_ERR("no memory for mbox <%s>\n", mbox_name);
		kfree(mbox_name);
		goto out;
	}

	mbox->name = (const char *)mbox_name;
	mbox->tx = tx_mdev;
	mbox->rx = rx_mdev;
	mbox->nb = NULL;

out:
	return mbox;
}

/*
 * search a certain mdev,
 * which could access the remote proccessor, "rp_name", in the list.
 */
static struct hisi_mbox_device *
hisi_mbox_device_get(struct hisi_mbox_device **list,
			mbox_mail_type_t mtype, const char *rp_name)
{
	struct hisi_mbox_device *mdev = NULL;
	struct hisi_mbox_device *_mdev = NULL;
	int i;

	for (i = 0; (_mdev = list[i]); i++) {
		/*
		 * though remote processor of mailboxes could be uncertain,
		 * when mailboxes prepare for use, it won't be an uncertain one
		 * or an unaccessible one, when a tx task of mailbox is alloced.
		 *
		 * the regulation is compatible for some mailboxes, whose remote
		 * processor could not be assigned, until mailboxes is used
		 * in an ipc.
		 */
		if (_mdev->ops->ability(_mdev, mtype, rp_name) !=
							RPUNACCESSIBLE) {
			mdev = _mdev;
			break;
		}
	}

	return mdev;
}

struct hisi_mbox *hisi_mbox_get(const char *rp_name, struct notifier_block *nb)
{
	struct hisi_mbox *mbox = NULL;
	struct hisi_mbox_device **list = mdevices;
	struct hisi_mbox_device *mdev[MAIL_TYPE_MAX] = {NULL};
	int i;

	if (!list) {
		MBOX_PR_ERR("mailboxes not ready\n");
		goto out;
	}

	if (!rp_name) {
		MBOX_PR_ERR("null pointer\n");
		goto out;
	}

	mdev[TX_MAIL] = hisi_mbox_device_get(list, TX_MAIL, rp_name);
	mdev[RX_MAIL] = hisi_mbox_device_get(list, RX_MAIL, rp_name);
	if ((!mdev[TX_MAIL]) && (!mdev[RX_MAIL])) {
		MBOX_PR_ERR("neither tx nor rx mboxes were gotten\n");
		goto out;
	}

	for (i = TX_MAIL; i < MAIL_TYPE_MAX; i++) {
		if ((RX_MAIL == i) && nb)
			atomic_notifier_chain_register(&mdev[i]->notifier, nb);

		if (mdev[i] && hisi_mbox_startup(mdev[i], i)) {
			MBOX_PR_ERR("%s mdev %s startup failed\n",
				((i == TX_MAIL) ? "tx" : "rx"),
				mdev[i]->name);
			goto shutdown;
		}
	}

	mbox = hisi_mbox_alloc(mdev[TX_MAIL], mdev[RX_MAIL], rp_name);
	if (!mbox) {
		MBOX_PR_ERR("failed to alloc mbox\n");
		goto shutdown;
	}
	mbox->nb = nb;
	MBOX_DEBUG_OFF(mbox);

	return mbox;

shutdown:
	if ((RX_MAIL == i) && nb)
		atomic_notifier_chain_unregister(&mdev[i]->notifier, nb);
	while (i--) {
		if (mdev[i])
			hisi_mbox_shutdown(mdev[i], i);
	}
out:
	return mbox;
}
EXPORT_SYMBOL(hisi_mbox_get);

void hisi_mbox_device_deactivate(struct hisi_mbox_device **list)
{
	struct hisi_mbox_device *mdev = NULL;
	struct hisi_mbox_task *tx_task = NULL;
	int i, ret;

	for (i = 0; (mdev = list[i]); i++) {
		(void)set_status(mdev, MDEV_DEACTIVATED);

		mutex_lock(&mdev->dev_lock);
		if (!mdev->configured) {
			mutex_unlock(&mdev->dev_lock);
			continue;
		}
		mutex_unlock(&mdev->dev_lock);

		/* flush tx work & tx task list synchronously */
		flush_work(&mdev->tx_work);

		mutex_lock(&mdev->dev_lock);
		while ((tx_task = hisi_mbox_dequeue_task(mdev))) {
			ret = hisi_mbox_task_send_nolock(mdev, tx_task);
			tx_task->tx_error = ret;
			tx_task->complete_fn(tx_task);

			/* current task unlinked */
			mdev->tx_task = NULL;
		}
		mutex_unlock(&mdev->dev_lock);
	}

	return;
}
EXPORT_SYMBOL(hisi_mbox_device_deactivate);

void hisi_mbox_device_activate(struct hisi_mbox_device **list)
{
	struct hisi_mbox_device *mdev = NULL;
	int i;

	for (i = 0; (mdev = list[i]); i++)
		clr_status(mdev, MDEV_DEACTIVATED);

	return;
}
EXPORT_SYMBOL(hisi_mbox_device_activate);

static struct class *hisi_mbox_class;

int hisi_mbox_device_unregister(void)
{
	struct hisi_mbox_device **list = mdevices;
	struct hisi_mbox_device *mdev = NULL;
	int i;

	if (!list) {
		MBOX_PR_ERR("no mboxes registered\n");
		return -EINVAL;
	}

	for (i = 0; (mdev = list[i]); i++) {
		mutex_destroy(&mdev->dev_lock);
		device_destroy(hisi_mbox_class, (dev_t)i);
	}

	list = NULL;
	mdevices = list;

	mbox_debugfs_unregister();
	return 0;
}
EXPORT_SYMBOL(hisi_mbox_device_unregister);

static int hisi_mbox_device_is_valid(struct hisi_mbox_device *mdev)
{
	if (WARN_ON(!mdev->ops->startup || !mdev->ops->shutdown ||
		!mdev->ops->ability || !mdev->ops->recv ||
		!mdev->ops->send || !mdev->ops->refresh ||
		!mdev->ops->request_irq || !mdev->ops->free_irq ||
		!mdev->ops->irq_to_mdev || !mdev->ops->is_ack ||
		!mdev->ops->is_ipc))
		return 0;

	return 1;
}

int
hisi_mbox_device_register(struct device *parent, struct hisi_mbox_device **list)
{
	struct hisi_mbox_device *mdev = NULL;
	int ret, i;

	if (!list) {
		MBOX_PR_ERR("null pointer\n");
		return -EINVAL;
	}

	for (i = 0; (mdev = list[i]); i++) {
		if (!hisi_mbox_device_is_valid(mdev)) {
			MBOX_PR_ERR("invalid mdev\n");
			ret = -EINVAL;
			goto err_out;
		}

		mdev->dev = device_create(hisi_mbox_class, parent,
					(dev_t)i, mdev, "%s", mdev->name);
		if (IS_ERR(mdev->dev)) {
			MBOX_PR_ERR("mdev %s can not create device\n",
						mdev->name);
			ret = PTR_ERR(mdev->dev);
			goto err_out;
		}

		spin_lock_init(&mdev->fifo_lock);
		mdev->status = 0;
		spin_lock_init(&mdev->status_lock);
		spin_lock_init(&mdev->complete_lock);
		mutex_init(&mdev->dev_lock);

		init_completion(&mdev->complete);

		ATOMIC_INIT_NOTIFIER_HEAD(&mdev->notifier);
	}

	mdevices = list;

	mbox_debugfs_register(mdevices);
	return 0;

err_out:
	while (i--) {
		mdev = list[i];
		mutex_destroy(&mdev->dev_lock);
		device_destroy(hisi_mbox_class, (dev_t)i);
	}

	return ret;
}
EXPORT_SYMBOL(hisi_mbox_device_register);

static int __init hisi_mbox_init(void)
{
	pr_debug("%s: init\n", MODULE_NAME);

	hisi_mbox_class = class_create(THIS_MODULE, "hisi-mailbox");
	if (IS_ERR(hisi_mbox_class))
		return PTR_ERR(hisi_mbox_class);

	return 0;
}
postcore_initcall(hisi_mbox_init);

static void __exit hisi_mbox_exit(void)
{
	if (hisi_mbox_class)
		class_destroy(hisi_mbox_class);

	return;
}
module_exit(hisi_mbox_exit);

MODULE_DESCRIPTION("HS mailbox interface");
MODULE_LICENSE("GPL V2");
