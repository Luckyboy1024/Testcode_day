#define _CRT_SECURE_NO_WARNINGS 1

#if 0
//29�߳� 7 �̶�̽��
#include <stdio.h>

int main()
{
	int c, d, j, k, s, t, u, a[9], b[37];
	printf(" 7 �̶ȷ�29�߳�Ϊ8�Σ��γ�����Ϊ��\n");
	s = 29;
	a[0] = 0;
	a[1] = 1;
	a[8] = s;
	c = 0;
	for (a[2] = 2; a[2] <= s - 6; a[2]++)
	{
		for (a[3] = a[2] + 1; a[3] <= s - 5; a[3]++)
		{
			for (a[4] = a[3] + 1; a[4] <= s - 4; a[4]++)
			{
				for (a[5] = a[4] + 1; a[5] <= s - 3; a[5]++)
				{
					for (a[6] = a[5] + 1; a[6] <= s - 2; a[6]++)
					{
						for (a[7] = a[6] + 1; a[7] <= s - 1; a[7]++)
						{
							for (t = 0, k = 0; k <= 7; k++)
							{
								for (j = k + 1; j <= 8; j++)
								{
									t++;
									b[t] = a[j] - a[k];		//���в��ֺ͸�ֵ��b����
								}
							}
							for (u = 0, d = 1; d <= s; d++)
							{
								for (k = 1; k <= 36; k++)
								{
									if (d == b[k])
									{
										u += 1;
										k = 36;			//���� b ����ȡ 1~s �ж��ٸ�
									}
								}
							}
							if (u == s)		//b������� 1~s ��������
							{
								if ((a[7] != s - 1) || (a[7] == s - 1) && (a[2] <= s - a[6]))
								{
									c++;
									printf("  NO%d :>_ ", c);		//�����Ķγ�����
									for (k = 1; k <= 7; k++)
									{
										printf("%2d, ", a[k] - a[k - 1]);
									}
									printf("%2d \n", s - a[7]);
								}
							}
						}
					}
				}
			}
		}
	}
	if (c > 0)
	{
		printf("��������%d���⡣\n", c);		//�����ĸ���
	}
	return 0;
}

#endif

#if 0
// Ѱ��߳� s,n ���̶ȷֲ�����̽��
#include <stdio.h>

int main()
{
	int d, i, j, k, t, u, s, m, n, a[30], b[300];
	printf("  �߳� s��Ѱ�� n ���̶ȷֲ�����ȷ�� s,n :>_ ");
	scanf("%d%d", &s, &n);
	a[0] = 0;
	a[1] = 1;
	a[n + 1] = s;
	m = (n + 2)*(n + 1) / 2;
	i = 2;
	a[i] = 2;
	while (1)
	{
		if (i < n)
		{
			i++;
			a[i] = a[i - 1] + 1;
			continue;
		}
		else
		{
			for (t = 0, k = 0; k <= n; k++)
			{
				for (j = k + 1; j <= n + 1; j++)
				{
					t++;
					b[t] = a[j] - a[k];		//���в��ֺ͸�ֵ�� b ����
				}
			}
			for (u = 0, d = 1; d <= s; d++)
			{
				for (k = 1; k <= m; k++)
				{
					if (b[k] == d)
					{
						u += 1;
						k = m;		// ���� b ����ȡ 1~s �ж��ٸ�
					}
				}
			}
			if (u == s)				// b ����ֵ���� 1~s ��������
			{
				if ((a[n] != s - 1) || (a[n] == s - 1) && (a[2] <= s - a[n - 1]))
				{
					printf("��");
					for (k = 1; k <= s - 1; k++)
					{
						printf("��");
					}
					printf("-��\n");
					printf("�� ");
					for (k = 1; k <= n + 1; k++)		//����ߵ����ֱ�ע
					{
						for (j = 1; j <= a[k] - a[k - 1] - 1; j++)
						{
							printf("  ");
						}
						if (k < n + 1)
						{
							printf("%2d", a[k]);
						}
						else
						{
							printf("��\n");
						}
					}
					printf("��");			//����ߵ��±ߺͿ̶�
					for (k = 1; k <= n + 1; k++)
					{
						for (j = 1; j <= a[k] - a[k - 1]-1 ; j++)
						{
							printf("��");
						}
						if (k < n + 1)
						{
							printf("-��");
						}
						else
						{
							printf("-��\n");
						}
					}
					printf("  ֱ��%d�εĶγ�����Ϊ :>_ ", n + 1);		// ����γ�����
					for (k = 1; k <= n; k++)
					{
						printf("%2d, ", a[k] - a[k - 1]);
					}
					printf("%2d\n", s - a[n]);
				}
			}
		}
		while (a[i] == s - (n + 1) + i && i > 1)
		{
			i--;			//���������
		}
		if (i > 1)
		{
			a[i]++;
		}
		else
		{
			break;
		}
	}
	return 0;
}

#endif


