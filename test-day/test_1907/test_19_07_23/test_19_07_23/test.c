#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>


#if 0
int main()
{
	int  n = 0;
	int num = 0;
	scanf("%d", &num);
	for (int i = 2; i < num; i++)
	{
		if ((num%i) == 0)
		{
			n++;
		}
		if (n == 0)
		{
			printf("1");
		}
		else
		{
			printf("2");
		}
	}
	return 0;
}
int main()
{ 
	double t, s, v, p;
	int i, n;
	printf("  ��������� n :>_ ");
	scanf("%d", &n);
	t = 1;
	s = 1;
	for (i = 2; i <= n; i++)
	{
		t = t * 2;
		s = s + t;
	}
	v = s / 2.4e7;
	p = v / 2.48e9;
	if (n <= 40)
	{
		printf("  ��������Ϊ��%.0f\n", s);
	}
	else
	{
		printf("  ��������ԼΪ��%.3e\n", s);
	}
	printf("  С������ԼΪ��%.0f ��\n", v);
	printf("  Լ�൱��������ʳ���ܲ�����%.0f��\n", p);
	return 0;
}
int main()
{
	long m, t, x, y;
	printf("  ���������� m :>_ ");
	scanf("%ld", &m);
	x = m / 20;
	t = m - 20 * x;
	y = t / 3;
	t = m - 20 * x - 3 * y;
	printf("  �� %ld ƿ��ˮ��������Ҫ %.2f Ԫ��\n", m, (13 * x + 2 * y)*1.40 + t);
	return 0;
}
#endif