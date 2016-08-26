#ifndef __MDRV_SYSCTRL_COMMON_H__
#define __MDRV_SYSCTRL_COMMON_H__

#ifdef __cplusplus
extern "C"
{
#endif
	/*****************************************************************************
	 *  �� �� ��  : mdrv_sysctrl_set_regval
	 *  ��������  : sysctrlд�ӿڹ�GU�������á�
	 *  �������  : regAddr:SC�Ĵ���ƫ�Ƶ�ַ; setData:SC�Ĵ���ֵ��
	 *  �������  : �ޡ�
	 *  �� �� ֵ  : 0:  �����ɹ���
	 *             -1������ʧ�ܡ�
	 ******************************************************************************/
	int mdrv_sysctrl_set_regval(unsigned int regAddr, unsigned int data);

	/*****************************************************************************
	 *  �� �� ��  : mdrv_sysctrl_get_regval
	 *  ��������  : sysctrl���ӿڹ�GU�������á�
	 *  �������  : regAddr:SC�Ĵ���ƫ�Ƶ�ַ; getData:���ص�SC�Ĵ���ֵ��
	 *  �������  : �ޡ�
	 *  �� �� ֵ  : 0:  �����ɹ���
	 *             -1�� ����ʧ�ܡ�
	 ******************************************************************************/
	int mdrv_sysctrl_get_regval(unsigned int regAddr, unsigned int *data);

#ifdef __cplusplus
}
#endif
#endif
