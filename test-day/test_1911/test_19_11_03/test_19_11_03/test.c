#define _CRT_SECURE_NO_WARNINGS 1
#if 0
// ��������������
#include <stdio.h>

int main()
{
	int d, m, n;
	long s;
	printf("���������� n :>_ ");
	scanf("%d", &n);
	s = 0;			// �� s ����
	for (m = 1; m <= n; m++)
	{
		if (m % 2 > 0)				//���� m �ۼӵ� s
		{
			s = s + m;
		}
		else
		{
			d = m;
			while (0 == d % 2)		// ȥ��ż�� m ��ż����
			{
				d = d / 2;
			}
			s = s - d;
		}
	}
	printf("s(%d) = %ld\n", n, s);		//����� s
	return 0;
}

#include <stdio.h>

int main()
{
	int a, b, d, j, n;
	double t, s;
	printf("���������� d,n :>_ ");
	scanf("%d%d", &d, &n);
	a = d;
	b = 1;
	while (a > 0)
	{				//���� d ���� b,Ϊ���� t ��׼��
		b = b * 10;
		a = a / 10;
	}
	t = s = 0;		// t,s ����
	for (j = 1; j <= n; j++)
	{
		t = t / b + (double)d / b;		// t Ϊ�� j ��С��
		s += t;							// ��� s
	}
	printf("s(%d,%d) = %.8f\n", d, n, s);		// ����� s
	return 0;
}

#include <stdio.h>

int main()
{
	int d, n;
	double s;
	printf("���������� d,n :>_ ");
	scanf("%d%d", &d, &n);
	s = (n - 0.111111111)*d / 9;		// ��� s
	printf("s(%d,%d) = %.8f\n", d, n, s);	//����� s
	return 0;
}

#include <stdio.h>

int main()
{
	int d, j, n;
	double t, s;
	printf("���������� d,n :>_ ");
	scanf("%d%d", &d, &n);
	t = s = 0;		// t,s ����
	for (j = 1; j <= n; j++)
	{
		t = t / 10 + (double)d / 10;	// t Ϊ�� j ��С��
		s += t;							// ��� s
	}
	printf("s(%d,%d) = %.8f\n", d, n, s);	//����� s
	return 0;

}
#endif


#include <stdio.h>

int main()
{
	double t, s, v, p;
	int i, n;
	printf("��������� n :>_ ");
	scanf("%d", &n);		//������� n
	t = s = 1;
	for (i = 2; i <= n; i++)
	{
		t = t * 2;		// t Ϊ�� i ���������
		s = s + t;		// s �����и��������
	}
	v = s / 2.4e7;		// 1 ��С��ԼΪ 2.4e7 �� 
	p = v / 2.48e9;		// ������ʳ���ܲ���ԼΪ 2.48e9 ��
	if (n <= 40)
	{
		printf("��������Ϊ :>_ %.0f\n", s);
	}
	else
	{
		printf("��������ԼΪ :>_ %.3e\n", s);
	}
	printf("С������ԼΪ :>_ %.0f ��\n", v);
	printf("Լ�൱��������ʳ���ܲ����� %.0f ��\n", p);
	return 0;
}

