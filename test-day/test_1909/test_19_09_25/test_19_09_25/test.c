#define _CRT_SECURE_NO_WARNINGS 1

#if 0

//
#include <stdio.h>
int main()
{
	return 0;
}
#endif


//
#include <stdio.h>
int main()
{
	return 0;
}

#if 0
//ö����ָ��mλ��������
#include <stdio.h>
#include <math.h>

int p(long k)					//���������⺯��
{
	int j, h, z = 0;
	if (2 == k)
	{
		z = 1;
	}
	if (k >= 3 && k % 2 == 1)
	{
		for (h = 0, j = 3; j <= sqrt(k); j += 2)
		{
			if (k%j == 0)
			{
				h = 1;
				break;
			}
		}
		if (h == 0)		//kΪ��������1�����򷵻�0
		{
			z = 1;
		}

	}
	return z;
}

int main()
{
	int i, m;
	long c, d, e, f, k, s, t;
	int p(long f);
	printf("��ȷ�� m (m>1) :>_ ");
	scanf("%d", &m);
	for (c = 1, i = 1; i <= m - 1; i++)		//ȷ����С��mλ��c
	{
		c = c * 10;
	}
	s = 0;
	for (f = c + 1; f <= 10 * c - 1; f = f + 2) //����ö��ѭ����fΪmλ����
	{
		if (!(f % 10 == 3 || f % 10 == 7) || p(f) == 0)
			continue;
		for (t = 1, d = f / 10, i = 1; i <= m - 2; i++)
		{
			if (d % 10 == 0)			//�������0���֣���� t=0
			{
				t = 0;
				break;
			}
			d = d / 10;
		}
		if (0 == t)
			continue;
		for (k = 10, i = 1; i <= m - 2; i++)	//ö��m-2��ȥλ����
		{
			k = k * 10;
			if (p(f%k) == 0)			//��������һ�������������˳�ѭ��
				break;
		}
		if (i > m - 2)			//ͳ�Ʋ���ֵ
		{
			s++;
			e = f;
		}
	}
	printf("��%ld��%dλ��������\n", s, m);
	printf("���������Ϊ%ld\n", e);
	return 0;
}



//̽��nλ�Գ������Ľ�
#include <stdio.h>
#include <math.h >
int main()
{
	int g, i, j, k, n, p[7], q[7];
	long s;
	double e, f, m, max;
	printf("����������n (n1��11) :>_ ");
	scanf("%d", &n);
	k = (n + 1) / 2;
	for (i = 1; i <= k; i++)
	{
		q[i] = 9;
	}
	for (i = k + 1; i <= 6; i++)
	{
		q[i] = 0;
	}
	s = 0;
	max = 0;
	for (p[6] = 0; p[6] <= q[6]; p[6]++)
	{
		for (p[5] = 0; p[5] <= q[5]; p[5]++)
		{
			for (p[4] = 0; p[4] <= q[4]; p[4]++)
			{
				for (p[3] = 0; p[3] <= q[3]; p[3]++)
				{
					for (p[2] = 0; p[2] <= q[2]; p[2]++)
					{
						for (p[1] = 0; p[1] <= q[1]; p[1]+=2)
						{
							if (5 == p[1])
								continue;		//��λ�����޶���Ϊ5������
							e = 0;
							m = 0;
							f = 10;
							for (j = 1; j <= k - 1; j++)
							{
								e = e * 10 + p[j];
								f = f * 10;
								m = m * 10 + p[k + 1 - j];
							}
							m = m * 10 + p[1];
							e = e*f + m;		//eΪnλ�Գ�����
							for (g = 0, i = 3; i <= sqrt(e); i = i + 2)
							{
								if (0 == fmod(e, i))
								{
									g = 1;
									break;
								}
							}
							if (0 == g)		//g=0 ʱ e Ϊ�Գ�����, s ͳ��
							{
								s++;
								if (max < e)
									max = e;	//�Ƚ����Գ�����
							}
						}
					}
				}
			}
		}
	}
	printf("\n%dλ�Գ���������%ld��\n", n, s);
	if (s>0)
	{
		printf("�������ĶԳ�����Ϊ: %.0f\n", max);
	}
	return 0;
}

//���� n λ�Գ�����
#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, g, i, j, n, s, h[10];
	long m, max, d, t;
	printf("������λ�� n (n>1) :>_ ");
	scanf("%d", &n);
	s = 0;
	t = 1;
	a = n / 2;
	for (j = 1; j <= n - 1; j++)
	{
		t = t * 10;		//������С�� n λ���� t
	}
	for (m = t + 1; m <= (10 * t - 1); m = m + 2)	//ö�����е�nλ����
	{
		if (0 == m % 5)
			continue;
		d = m;
		b = 0;
		for (j = 0; j <= 9; j++)
		{
			h[j] = 0;
		}
		for (j = 1; j <= n; j++)
		{
			c = d % 10;
			h[j] = c;
			d = d / 10;
		}
		for (j = 1; j <= a; j++)
		{
			if (h[j] != h[n - j + 1])
			{
				b = 1;
				break;
			}
		}
		if (0 == b)		//b=0 ʱ��mΪ�Գ���
		{
			for (g = 0, i = 2; i <= sqrt(m); i++)
			{
				if (0 == m%i)
				{
					g = 1;
					break;
				}
			}
			if (0 == g)	// g=0ʱ mΪ�Գ�������sͳ��
			{
				s++;
				max = m;
			}
		}
	}
	printf("%dλ�Գ���������%d��\n", n, s);
	if (s > 0)
	{
		printf("�������ĶԳ�����Ϊ��%ld\n", max);
	}
	return 0;
}

//��÷ɭ������2^n-1 �ε�����
#include <stdio.h>
#include <math.h>
int main()
{
	double t, m;
	int j, x, s, n;
	s = 0; 
	t = 2;
	for (n = 2; n <= 50; n++)
	{
		t = t * 2;
		m = t - 1;
		x = 0;							//�۳���tΪ2^n
		for (j = 3; j < sqrt(m) + 1; j += 2)	//���̷��б�m�Ƿ�Ϊ����
		{
			if (0 == fmod(m, j))
			{
				x = 1;
				break;
			}
		}
		if (0 == x)			//�������õ�����
		{
			s = s + 1;
			printf("2^%d - 1 = %.0f\n", n, m);
		}
	}
	printf("ָ��n��[2,50]��÷ɭ��������%d��\n", s);
	return 0;
}

//ɸ����ָ�������ϵ�����
#include <stdio.h>
int main()
{
	long int c, d, e, g, i, j, k, n;
	static long int a[80000];
	printf("������ [c,d] �ϵ�����\n");
	printf("������ c,d (c>2) :>_ ");
	scanf("%ld%ld", &c, &d);
	if (0 == c % 2)
	{
		c++;
	}
	e = (d - c) / 2;
	i = 1;
	while (i <= sqrt(d))	//�� [c,d] ��ɸѡ����
	{
		i = i + 2;
		g = 2 * (c / (2 * i)) + 1;
		if (g*i > d)
			continue;
		if (1 == g)
			g = 3;
		j = i*g;
		while (j <= d)
		{
			if (j >= c)
			{
				a[(j - c) / 2] = -1;		//ɸȥ���-1
			}
			j = j + 2 * i;
		}
	}
	for (n = 0, k = 0; k <= e; k++)
	{
		if (a[k] != -1)			//�����������
		{
			n++;
			printf("%d ", c + 2 * k);
			if (0 == n % 5)
			{
				printf("\n");
			}
		}
	}
	printf("\n��%ld������\n", n);
	return 0;
}

//���̷���ָ�������ϵ�����
#include <stdio.h>
#include <math.h>

int main()
{
	long c, d, i, j, n, t;
	printf("������ [c,d] �ϵ�����\n");
	printf("������ c,d (c>2) :>_ ");
	scanf("%ld%ld", &c, &d);
	if (0 == c % 2)
	{
		c = c + 1;
	}
	n = 0;
	for (i = c; i <= d; i += 2)
	{
		for (t = 0, j = 3; j < sqrt(i); j += 2)
		{
			if (i%j == 0)		//ʵʩ����
			{
				t = 1;
				break;
			}
		}
		if (0 == t)
		{
			printf("%ld ", i);
			n++;				//ͳ�������ĸ���
			if (0 == n % 10)
			{
				printf("\n");
			}
		}
	}
	printf("\n��%ld������\n", n);
	return 0;
}
#endif
