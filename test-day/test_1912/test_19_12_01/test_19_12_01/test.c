#define _CRT_SECURE_NO_WARNINGS 1

#if 0
//��������ʽ ax^2 + bxy + cy^2 (a>0) �ֽ���ʽ
#include <stdio.h>
#include <math.h>
int main()
{
	long a, b, c, e, p, u, v, fa[100], fc[100];
	int i, j, k, t;
	char g, h;
	printf("���������� a,b,c (a>0) :>_ ");
	scanf("%ld%ld%ld", &a, &b, &c);
	g = h = '+';
	p = 1;
	if (b < 0)
		g = '-';
	if (c < 0)
		h = '-';
	printf("%ldx^2 %c %ldxy %c %ldy^2 ", a, g, abs(b), h, abs(c));
	v = abs(b);
	if (a < v)
		v = a;
	if (abs(c) < v)		//�� a, |b|, |c| ����Сֵ v
		v = abs(c);
	for (u = v; u >= 2; u--)
	{
		if (0 == a%u && 0 == b%u && 0 == c%u)
		{
			a = a / u;
			b = b / u;
			c = c / u;
			p = u;				//�б���ȡ a��b��c �Ĺ�����u
		}
	}
	k = u = 0;
	e = (long)sqrt(a);
	while (u <= e)
	{
		u++;
		if (0 == a%u)
		{
			fa[++k] = u;
			fa[++k] = a / u;
		}
	}		//�ֽ� k��a������
	if (a == e*e)
	{
		k--;
	}
	j = u = 0;
	e = (long)sqrt(abs(c));
	while (u <= e)
	{
		u++;
		if (0 == abs(c) % u)
		{
			fc[++j] = u;
			fc[++j] = abs(c) / u;
		}
	}		//�ֽ�j��c������
	if (abs(c) == e*e)
	{
		j--;
	}
	if (c > 0)
	{
		for (i = 1; i <= k; i++)
		{
			for (t = 1; t <= j; t++)
			{
				if (fa[i] * (c / fc[t]) + (a / fa[i])*fc[t] == abs(b))
				{
					printf("= ");			//����ֽ������һ��ʽ
					if (p > 1)
						printf("%ld ", p);
					printf("(%ld %c %ldy)", fa[i], g, fc[t]);
					if (fa[i] * fa[i] == a && fc[t] * fc[t] == c)
						printf("^2\n");
					else
						printf("(%ld %c %ldy)\n", a / fa[i], g, c / fc[t]);
					return;
				}
			}
		}
	}
	if (c < 0)
	{
		for (i = 1; i <= k; i++)
		{
			for (t = 1; t <= j; t++)
			{
				if (fa[i] * (c / fc[t]) + (a / fa[i])*fc[t] == b)
				{
					printf("= ");			//����ֽ������һ��ʽ
					if (p > 1)
						printf("%ld ", p);
					printf("(%ld + %ldy)", fa[i], fc[t]);
					printf("(%ld - %ldy)\n", a / fa[i], -c / fc[t]);
					return;
				}
			}
		}
	}
	printf("��������Χ�ڲ��ֽܷ���ʽ\n");
	return 0;
}

#endif


#if 0
// �����������ֽ�
#include <stdio.h>
#include <math.h>
int main()
{
	int a, c, d, h, k, n, s;
	double t;
	printf("�� n �ֽ�Ϊ���ɸ�������ͬ��������֮�ͣ�ʹ������\n");
	printf("������������ n (n>3) :>_");
	scanf("%d", &n);
	s = 0;
	h = 1;
	a = 1;
	while (s <= n)		//��� s = 2+3+...+a ��s>nΪֹ
	{
		a++;
		s = s + a;
	}
	if (s - n == a)		//n�ֽ�Ϊ2��a-1����������
	{
		c = 2;
		d = a - 1;
	}
	else if (s - n == 2)	//n�ֽ�Ϊ3��a����������
	{
		c = 3;
		d = a;
	}
	else if (s - n == 1)	//n�ֽ�Ϊ3��a+1(����a)����������
	{
		c = 3;
		d = a + 1;
		h = a;
	}
	else					//n�ֽ�Ϊ2��a(����s-n)����������
	{
		c = 2;
		d = a;
		h = s - n;
	}
	printf("	%d �ֽ�Ϊ :>_ %d -- %d", n, c, d);
	if (h > 0)
		printf("(���������е��� %d)��\n", h);
	printf("������Ϊ :>_ ");
	t = 1;
	for (k = c; k <= d; k++)
	{
		t = t*k;				//��c��d���
	}
	t = t / h;					//�ӻ��г�ȥ���� h
	printf("%.3e\n", t);
	return 0;
}


#endif

#if 0
//  ����������
#include <stdio.h>

int main()
{
	long c, i, j, n, s;
	printf("���������� n :>_ ");
	scanf("%ld", &n);
	c = 0;
	for (i = 1; i <= (n - 1) / 2; i++)		//����ѭ�� i ö�������ʼ��
	{
		s = 0;			
		for (j = 1; j <= (n + 1) / 2; j++)	//����ѭ�� j ö������ۼ���
		{
			s = s + j;
			if (s >= n)
			{
				if (s == n)
				{
					c++;
					printf(" %d: %d+...+%d\n", c, i, j);		//ͳ�Ʋ����һ����
				}
				break;
			}
		}
	}
	printf("�������� %d ���⡣\n", c);
	return 0;
}

#endif

#if 0
// Ӧ����͹�ʽ�Ż����
#include <stdio.h>
#include <math.h>

int main()
{
	long c, k, m, n, t;
	printf(" ���������� n :>_ ");
	scanf("%ld", &n);
	t = (long)sqrt(2 * n);
	c = 0;
	for (k = 2; k <= t; k++)
	{
		if ((2 * n) % k > 0 || (2 * n / k + 1 - k) % 2 > 0)
		{
			continue;		//��� m �Ƿ����
		}
		m = (2 * n / k + 1 - k) / 2;
		c++;					//ͳ�Ʋ����һ����
		if (2 == k)
		{
			printf(" %d: %d+%d\n", c, m, m + 1);
		}
		else
		{
			printf(" %d: %d+...+%d\n", c, m, m + k - 1);
		}
	}
	printf("  �������� %d ���⡣\n", c);			//�����ĸ���c
	return 0;
}

#endif

#if 0

//�Ѻ����ֽ�Ϊ���ɸ�ָ�������ĺ�
#include <stdio.h>
#define MAXN 100
int a[MAXN], b[1000];
int t, n = 0;

void comb(int m, int k, int s)		//�����ݹ麯�� comb(m,k,s)
{
	int i, j;
	for (i = m; i >= k; i--)
	{
		a[k] = i;
		if (k > 1)
		{
			comb(i - 1, k - 1, s);
		}
		else
		{
			for (t = 0, j = a[0]; j > 0; j--)
			{
				t = t + b[a[j]];
			}
			if (t == s)
			{
				n++;
				printf("%d=", s);		//��������ʱ���
				for (j = a[0]; j > 1; j--)
				{
					printf("%2d+", b[a[j]]);
				}
				printf("%2d\n", b[a[1]]);
			}
		}
	}
}

int main()
{
	int m, ss, i, h, k, wmin, wmax;
	printf("���������ĸ���: ");
	scanf("%d", &m);
	printf("������С������������ :>_ \n");
	for (i = 1; i <= m; i++)
	{
		printf(" b[%d]=", i);
		scanf("%d", &b[i]);
	}
	printf("�������Ϊ :>_ ");
	scanf("%d", &ss);
	for (h = 0, i = 1; i <= m; i++)
	{
		h = h + b[i];
		if (h > ss)
		{
			wmax = i - 1;
			break;
		}
	}
	if (i > m)		//�����������̫С�����򷵻�
	{
		printf("������������̫С\n");
		return;
	}
	for (h = 0, i = 1; i <= m; i++)
	{
		h = h + b[m - i + 1];
		if (h > ss)
		{
			wmin = i - 1;
			break;
		}
	}
	for (k = wmin; k <= wmax; k++)
	{
		a[0] = k;
		comb(m, k, ss);
	}
	printf("������ %d �����ʽ\n", n);
	return 0;
}
#endif

#if 0
//���Ҷ���ö�����
#include <stdio.h>

int main()
{
	int p1, p2, p3, p4, p5, p6, n;
	long m = 0;
	printf("������������ n :>_ ");
	scanf("%d", &n);
	printf("   1�� 2�� 5�� 1�� 2�� 5��\n");
	for (p1 = 0;p1<=n;p1++)
	{
		for (p2 = 0;p2<=n/2;p2++)
		{
			for (p3 = 0;p3<=n/5;p3++)
			{
				for (p4 = 0;p4<=n/10;p4++)
				{
					for (p5 = 0;p5<=n/20;p5++)
					{
						for (p6 = 0;p6<=n/50;p6++)
						{
							if (n == p1 + 2 * p2 + 5 * p3 + 10 * p4 + 20 * p5 + 50 * p6)	//������������
							{
								m++;
								printf(" %4d%4d%4d", p1, p2, p3);
								printf("%4d%4d%4d\n", p4, p5, p6);
							}
						}
					}
				}
			}
		}
	}
	printf("   %d(1,2,5,10,20,50) = %ld\n", n, m);
	return 0;
}
#endif

#if 0
//����ѭ�����
#include <stdio.h>
int main()
{
	int p1, p2, p3, p4, p5, p6, n;
	long m = 0;
	printf("������������ n :>_ ");
	scanf("%d", &n);
	for (p2 = 0; p2 <= n / 2; p2++)		//��ʡ���� p1 ѭ��
	{
		for (p3 = 0; p3 <= n / 5; p3++)
		{
			for (p4 = 0; p4 <= n / 10; p4++)
			{
				for (p5 = 0; p5 <= n / 20; p5++)
				{
					for (p6 = 0; p6 <= n / 50; p6++)
					{
						p1 = n - (2 * p2 + 5 * p3 + 10 * p4 + 20 * p5 + 50 * p6);	//p1Ϊһ�ֱҵĸ���
						if (p1 >= 0)
						{
							m++;			//�� m ͳ�ƶһ�����
						}
					}
				}
			}
		}
	}
	printf("   %d(1,2,5,10,20,50) = %ld\n", n, m);
	return 0;
}
#endif

#if 0
//��һ���Ż�ö�����
#include <stdio.h>
int main()
{
	int p1, p2, p3, p4, p5, p6, n;
	long m = 0;
	printf("������������ n :>_ ");
	scanf("%d", &n);
	for (p2 = 0; p2 <= n / 2; p2++)		//��ʡ���� p1 ѭ��
	{
		for (p3 = 0; p3 <= (n - (2 * p2)) / 5; p3++)
		{
			for (p4 = 0; p4 <= (n - (2 * p2 + 5 * p3)) / 10; p4++)
			{
				for (p5 = 0; p5 <= (n - (2 * p2 + 5 * p3+10*p4)) / 20; p5++)
				{
					for (p6 = 0; p6 <= (n - (2 * p2 + 5 * p3 + 10 * p4+20*p5)) / 50; p6++)
					{
						p1 = n - (2 * p2 + 5 * p3 + 10 * p4 + 20 * p5 + 50 * p6);	//p1Ϊһ�ֱҵĸ���
						if (p1 >= 0)
						{
							m++;			//�� m ͳ�ƶһ�����
						}
					}
				}
			}
		}
	}
	printf("   %d(1,2,5,10,20,50) = %ld\n", n, m);
	return 0;
}

#endif
