#define _CRT_SECURE_NO_WARNINGS 1

#if 0
//���Ҷ���������
#include <stdio.h>
int main()
{
	int p, i, j, n, m, k;
	static int x[12];
	static long int a[12][1001];
	long b, s;
	printf("����������ֵ (��λ��) :>_ ");		//�����������
	scanf("%d", &n);
	printf("������������� :>_ ");
	scanf("%d", &m);
	printf("(��С������������ÿ�����ֵ)\n");
	for (i = 1; i <= m; i++)
	{
		printf(" �� %d �����ֵ (��λ��) :>_ ", i);
		scanf("%d", &x[i]);
	}
	for (i = 0; i <= n; i++)		//ȷ����ʼ����
	{
		if (0 == i%x[1])
		{
			a[1][i] = 1;
		}
		else
		{
			a[1][i] = 0;
		}
	}
	for (s = a[1][n], j = 2; j <= m; j++)		//���Ƽ��� a(2,n), a(3,n),... 
	{
		for (i = x[j]; i <= n; i++)
		{
			p = i - x[j];
			b = 0;
			for (k = 1; k <= j; k++)
			{
				b += a[k][p];
			}
			a[j][i] = b;
		}
		s += a[j][n];			//�ۼ�a(1,n), a(2,n),...
	}
	printf("���Ҷ�������Ϊ :>_ %ld\n", s);		//�����������
	return 0;
}
#endif

#if 0
// 12��ͬѧ�κӷ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int j, k, m, a[7], b[13];
	long t, s1, s = 0;
	t = time(0) % 1000;
	srand(t);			//�������������ʼ��
	printf("��֪ 12 ��ͬѧ�����طֱ�Ϊ :>_\n");
	for (s = 0, k = 1; k <= 12; k++)		//����12������
	{
		scanf("%d", &b[k]);
		s += b[k];
		//s += b[k] = rand() % 25 + 35;
		//printf(" %d", b[k]);
	}
	if (0 == s % 2)
	{
		printf("\n ����12�������ܺ�Ϊ %d\n", s);
		s1 = s / 2;
	}
	else
	{
		printf("��Ϊ�������޷�ƽ��!\n");
	}
	a[1] = 1;
	m = 0;
	for (a[2] = 2; a[2] <= 8; a[2]++)
	{
		for (a[3] = a[2]+1; a[3] <= 9; a[3]++)
		{
			for (a[4] = a[3]+1; a[4] <= 10; a[4]++)
			{
				for (a[5] = a[4]+1; a[5] <= 11; a[5]++)
				{
					for (a[6] = a[5] + 1; a[6] <= 12; a[6]++)
					{
						for (s = 0, k = 1; k <= 6; k++)
						{
							s = s + b[a[k]];
						}
						if (s == s1)				//�����������ʱ���
						{
							m++;
							printf(" NO%d :>_ ", m);
							for (j = 1; j <= 6; j++)
							{
								printf("%d ", b[a[j]]);
							}
							printf("\n");
						}
					}
				}
			}
		}
	}
	if (m > 0)
	{
		printf(" �������� %d �ַַ���\n", m);
	}
	else
	{
		printf(" �޷�ʵ�ֶ��Ѿ��֡�\n");
	}
	return 0;
}

#endif

#if 0
//2n ��ͬѧ�κӷ���
#define N 50
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
	int n, m, a[N], c[N], b[2 * N], i, j, k, t;
	long s2, s3, s = 0;
	double d, s1, min = 1000;
	t = time(0) % 1000;
	srand(t);			//�������������ʼ��
	printf("������ n :>_ ");
	scanf("%d", &n);
	printf("��֪ %d ��ͬѧ�����طֱ�Ϊ :>_\n", 2*n);
	for (s = 0, i = 1; i <= 2 * n; i++)		//���� 2n ���������
	{
		s += b[i] = rand() % 25 + 30;		//s Ϊ 2n �������ĺ�
		printf(" %d", b[i]);
	}
	printf("\n ���� %d �������ܺ�Ϊ %d\n", 2 * n, s);
	s1 = (double)s / 2;			// s1 Ϊ s ��һ�룬���ܷ�����
	i = 1;
	a[1] = 1;
	m = 0;
	while (0 == s % 2)
	{
		if (i == n)
		{
			for (s2 = 0, j = 1; j <= n; j++)		//s2Ϊ̽��������n������֮��
			{
				s2 += b[a[j]];
			}
			if (s1 == (double)s2)		//�����������ʱ���
			{
				m++;
				if (m <= 3)
				{
					printf(" NO%d :>_ ", m);
					for (j = 1; j <= n; j++)
					{
						printf("%d ", b[a[j]]);
					}
					printf("\n");
				}
			}
		}
		else
		{
			i++;
			a[i] = a[i - 1] + 1;
			continue;
		}
		while (a[i] == n + i)
		{
			i--;
		}
		if (i > 1)
		{
			a[i]++;
		}
		else
			break;
	}
	if (m > 0)
	{
		printf("\n �������� %d �ַַ���\n", m);
		return 0;
	}
	else
	{
		printf(" �޷�ʵ�ֶ�����������!\n");

		i = 1;
		a[1] = 1;
		m = 0;
		while (1)
		{
			if (i == n)
			{
				for (s2 = 0, j = 1; j <= n; j++)
				{
					s2 += b[a[j]];
				}
				d = fabs((double)s2 - s1);
				if (d < min)		//d��min�Ƚ���ȡ��Сֵ
				{
					min = d;
					s3 = s2;
					for (k = 1; k <= n; k++)
					{
						c[k] = a[k];
					}
				}
			}
			else
			{
				i++;
				a[i] = a[i - 1] + 1;
				continue;
			}
			while (a[i] == n + i)		//���������
			{
				i--;
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
		printf(" �����·����ʹ���������������СΪ %.0f :>_\n", 2 * min);
		for (j = 1; j <= n; j++)
		{
			printf(" %d", b[c[j]]);
		}
		printf("\n ��������Ϊ %ld; ����Ϊ��2�飬����Ϊ %ld��\n", s3, s - s3);
	}
	return 0;
}


while (!(a == i || b == i || c == i))
{
	if (!b)			//��Aƿ����B��
	{
		a -= bv;
		b = bv;
	}
	else if (c == cv)
	{
		a += cv;
		c = 0;		//��C������Aƿ
	}
	else if (b > cv - c)
	{
		b -= (cv - c);
		c = cv;		//��B����C��
	}
	else
	{
		c += b;
		b = 0;
	}
	printf("%5d%5d%5d\n", a, b, c);
}
#endif

#if 0
// ���ɷ־�ģ�����
#include <stdio.h>
void practice(int, int, int);		//���ú�������
int i, n, probo(int, int, int);

void practice(int a, int bv, int cv)	//ģ��ʵʩ����
{
	int b = 0, c = 0;
	printf("ƽ�־Ƶķַ� :>_ \n");
	printf("��ƿ%d �ձ�%d �ձ�%d\n", a, bv, cv);
	printf("%5d%5d%5d", a, b, c);
}

int main()
{
	int a, bv, cv, m1, m2;
	printf(" �������������ż����:>_ ");
	scanf("%d", &a);
	printf(" ���ձ����� bv,cv �ֱ�Ϊ :>_ ");
	scanf("%d%d", &bv, &cv);
	i = a / 2;
	if (bv + cv < i)
	{
		printf(" �ձ�����̫С���޷�ƽ��!\n");
		return 0;
	}
	m1 = probo(a, bv, cv);
	m2 = probo(a, cv, bv);
	if (m1 < 0 && m2 < 0)
	{
		printf(" �޷�ƽ��!\n");
		return 0;
	}
	if (m1 > 0 && (m2 < 0 || m1 <= m2))
	{
		n = m1;
		practice(a, bv, cv);
	}
	else
	{
		practice(a, cv, bv);
	}
	return 0;
}


#endif