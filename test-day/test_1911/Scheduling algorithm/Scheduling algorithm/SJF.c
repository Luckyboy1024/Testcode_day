#define _CRT_SECURE_NO_WARNINGS 1

#include "test.h"

void _SJF(int** arr, double** data, int n)
{
	data[0][0] = (double)arr[0][1];
	data[0][1] = fabs(data[0][0] - (double)arr[0][0]);
	data[0][2] = data[0][1] / (double)arr[0][1];
	int T[_NUM] = { 0 };		//���÷��ʱ�־λ
	int num = n;
	int s = 0;		//��ǰ���̽��̺�
	while (--num)
	{
		int p = 0;		//����ʱ����̽��̵Ľ��̺�
		int tag = 0;		//�Ƿ���ڱ�־
		double tmp = data[s][0];	//��ǰ���̵����ʱ��
		int min_ST = INT_MAX;			//��̷���ʱ��
		for (int i = 1; i < n; i++)
		{
			// ������һ�����ڵ�ǰ�������ǰ����
			// �ҳ����з���ʱ����̵Ľ���
			if ((tmp >= (double)arr[i][0])
				&& (arr[i][1] < min_ST)
				&& T[i] != 1)
			{
				min_ST = arr[i][1];
				p = i;
				tag = 1;
			}
		}
		if (0 == tag)
		{
			// �����ڣ�
			int i = n;
			while ((T[n - i] == 1) && (--i));
			if (0 == i) continue;//return 0;
			data[i][0] = (double)arr[i][0] + (double)arr[i][1];
			data[i][1] = fabs(data[i][0] - (double)arr[i][0]);
			data[i][2] = data[i][1] / (double)arr[i][1];
		}
		else if (1 == tag)
		{
			T[p] = 1;
			data[p][0] = (double)data[s][0] + (double)arr[p][1];
			data[p][1] = fabs(data[p][0] - (double)arr[p][0]);
			data[p][2] = data[p][1] / (double)arr[p][1];
			s = p;
		}
	}
}