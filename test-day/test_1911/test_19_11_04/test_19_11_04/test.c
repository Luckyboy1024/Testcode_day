#define _CRT_SECURE_NO_WARNINGS 1

#if 0
//�� n �Ľ׳� n!
#include <stdio.h>

int main()
{
	int k, n;
	long t;
	printf("������ n (n<13) :>_ ");
	scanf("%d", &n);
	t = 1;
	for (k = 1; k <= n; k++)
	{
		t = t * k;		//ѭ������ k �۳˵� t,���ֽ׳��������
	}
	printf("%d! = %ld\n", n, t);	// ! --> �׳˷���
	return 0;
}
#endif 

#if 0

#include <stdio.h>


long fac(int n)
{
	long f = 0;
	if (1 == n)		//��ʼ����
	{
		f = 1;
	}
	else
	{				//�ݹ��ϵ
		f = n * fac(n - 1);
	}
	return f;
}

int main()
{
	int n;
	long y;
	printf("������ n (n<13) :>_ ");
	scanf("%d", &n);
	if (n > 12)
	{
		printf("����� n �������� 12������������\n");
		return 0;
	}
	y = fac(n);
	printf("%d! = %ld\n", n, y);
	return 0;
}

#endif

#if 0

#include <stdio.h>

long jc(int x)		// ����׳˺��� jc(x)=x!
{
	int i;
	long p = 1;
	for (i = 1; i <= x; i++)
	{
		p *= i;
	}
	return p;
}

int main()
{
	int a, b, c, m, n;
	printf("��λ�׳˺����� :>_ ");
	for (a = 1; a <= 9; a++)			// a,b,c �ֱ�Ϊ��λ��ʮλ����λ����
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				m = a * 100 + b * 10 + c;
				n = jc(a) + jc(b) + jc(c);		//�׳˺������б�
				if (m == n)
				{
					printf("%d\n", m);
				}
			}
		}
	}
		return 0;
}

#endif

#if 0

#include <stdio.h>

long jc(int x)		// ����׳˺��� jc(x)=x!
{
	int i;
	long p = 1;
	for (i = 1; i <= x; i++)
	{
		p *= i;
	}
	return p;
}

int main()
{
	int a, b, c, d, e, f, g;
	long m1, m2, m3, m4, m5, m6, n1, n2, n3, n4, n5, n6;
	printf("���н׳˺����� :>_ ");
	for (a = 1; a <= 9; a++)
	{
		if (a == jc(a))					// 1 λ�� a ������������� 
		{
			printf("%d ", a);
		}
		for (b = 0; b <= 9; b++)
		{
			m1 = 10 * a + b;
			n1 = jc(a) + jc(b);
			if (m1 == n1)				// �б� 2 λ�� m1
			{
				printf("%ld ", m1);
			}
			for (c = 0; c <= 9; c++)
			{
				m2 = 10 * m1 + c;
				n2 = n1 + jc(c);
				if (m2 == n2)			// �б� 3 λ�� m2
				{
					printf("%ld ", m2);
				}
				for (d = 0; d <= 9; d++)
				{
					m3 = 10 * m2 + d;
					n3 = n2 + jc(d);
					if (m3 == n3)		// �б� 4 λ�� m3
					{
						printf("%ld ", m3);
					}
					for (e = 0; e <= 9; e++)
					{
						m4 = 10 * m3 + e;
						n4 = n3 + jc(e);
						if (m4 == n4)	// �б� 5 λ�� m4
						{
							printf("%ld ", m4);
						}
						for (f = 0; f <= 9; f++)
						{
							m5 = 10 * m4 + f;
							n5 = n4 + jc(f);
							if (m5 == n5)// �б� 6 λ�� m5
							{
								printf("%ld ", m5);
							}
							for (g = 0; g <= 9; g++)
							{
								m6 = 10 * m5 + g;
								n6 = n5 + jc(g);
								if (m6 == n6)// �б� 7 λ�� m6
								{
									printf("%ld ", m6);
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
#endif

#if 0
// ���ݵ�Ѽ���
#include <stdio.h>

int main()
{	
	double x, y;
	printf("���������õ������ȣ�:>_ ");
	scanf("%lf", &x);
	if (x <= 240)	// ������������
	{
		y = x*0.49;
	}
	else if (x <= 400)
	{
		y = 240 * 0.49 + (x - 240)*0.54;
	}
	else
	{
		y = 240 * 0.49 + (400 - 240) * 0.54 + (x - 400) * 0.79;
	}
	printf("Ӧ���ɵ�� (Ԫ) :>_ %9.2f\n", y);
	return 0;
}

#endif

#if 0
// ���ݵ�Ѽ��㺯��
#include <stdio.h>

double f(double x)
{
	double y;
	if (x <= 240)	// ���� x Ϊ���õ���
	{
		y = x*0.49;
	}
	else if (x <= 400)
	{
		y = 240 * 0.49 + (x - 240)*0.54;
	}
	else
	{
		y = 240 * 0.49 + (400 - 240) * 0.54 + (x - 400) * 0.79;
	}
	return y;
}

int main()
{
	double x;
	printf("���������õ������ȣ�:>_ ");
	scanf("%lf", &x);
	printf("Ӧ���ɵ�� (Ԫ) :>_ %9.2f\n", f(x));
	return 0;
}
#endif


#if 0
// ��������˰����
#include <stdio.h>

double s(double x)
{
	double y, c, d = 0.0;
	d = 0.0;		// ���Ӽ���˰�� d ���㣬��Ҫʱ���޸�
	c = 3500.0 + d;	// ������Ϊ 3500
	if (x <= c)		// ���� x Ϊ������ֵ
	{
		y = 0;
	}
	else if (x - c <= 1500)	// ����� 1 ��
	{
		y = (x - c)*0.03;
	}
	else if (x - c <= 4500)	// ����� 2 ��
	{
		y = s(c + 1500) + (x - c - 1500)*0.10;	// ���������� s()
	}
	else if (x - c <= 9000)	// ����� 3 ��
	{
		y = s(c + 4500) + (x - c - 4500)*0.20;
	}
	else if (x - c <= 35000)	// ����� 4 ��
	{
		y = s(c + 9000) + (x - c - 9000)*0.25;
	}
	else if (x - c <= 55000)	// ����� 5 ��
	{
		y = s(c + 35000) + (x - c - 35000)*0.30;
	}
	else if (x - c <= 80000)	// ����� 6 ��
	{
		y = s(c + 55000) + (x - c - 55000)*0.35;
	}
	else						// ����� 7 ��
	{
		y = s(c + 80000) + (x - c - 80000)*0.45;
	}
	return y;		// ��������˰ֵ�� y
}

int main()
{
	double x;
	printf("�������������� :>_ ");
	scanf("%lf", &x);
	printf("Ӧ�ɸ�������˰ :>_ %9.2f\n", s(x));
	return 0;
}

#endif
