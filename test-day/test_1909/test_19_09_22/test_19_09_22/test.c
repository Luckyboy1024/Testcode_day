#define _CRT_SECURE_NO_WARNINGS 1


#if 0
//���� n λ���¶���
#include <stdio.h>
#include <math.h>
int main()
{
	int m, n, i;
	double f, k, s, t, y;
	printf("������λ�� n (2<n<10):>_ ");
	scanf("%d", &n);
	m = 0;
	t = 1;
	for (i = 1; i <= n - 1; i++)
	{
		t = t * 10;
	}
	for (y = t + 1; y <= t * 10 - 1; y++)		//ö�� n λ����
	{
		f = y;
		for (s = 0, i = 1; i <= n; i++)	//ѭ������ y �� n ������ k
		{
			k = fmod(f, 10);
			s += pow(k, n);
			f = floor(f / 10);				//�� y ��n�����ֵ�n����֮��s
		}
		if (y == s)				//����Ƿ���������
		{
			m++;
			printf(" %.0f", y);		//���̽�����
		}
	}
	printf("\n %d λ���¶����� %d ��\n", n, m);
	return 0;
}

//������ϵ���ˮ�ɻ�������
#include <stdio.h>
int main()
{
	int m, a, b, c;
	for (a = 1; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				m = a * 100 + b * 10 + c;
				if (m == a*a*a + b*b*b + c*c*c)
					printf(" %d", m);
			}
		}
	}
	return 0;
}

//���ڷֽ����ˮ�ɻ�������
#include <stdio.h>
int main()
{
	int m, a, b, c;
	for (m = 100; m <= 999; m++)
	{
		a = m / 100;		//�� m �ֽ�Ϊ��������
		b = (m / 10) % 10;
		c = m % 10;
		if (m == a*a*a + b*b*b + c*c*c)		//�����Ƿ���������
		{
			printf(" %d", m);
		}
	}
	return 0;
}

//̽����ȫ����p-��ȫ��
#include <stdio.h>
#include <math.h>
int main()
{
	double a, a1, s, b, c, d, d1, k, t, t1, x, y, p[10], q[10], min;
	int j, m = 0;
	min = 1.0;
	printf("���������� x,y :>_ ");
	scanf("%lf%lf", &x, &y);
	for (a = x; a <= y; a++)			//ö�������ڵ���������a
	{
		s = 1;
		b = floor(sqrt(a));
		for (k = 2; k <= b; k++)		//����Ѱ��a������k
		{
			if (0 == fmod(a, k))
			{
				s = s + k + a / k;		//k��a/k��a�����������
			}
		}
		if (a == b*b)			//���a=b^2,ȥ���ظ�����b
			s = s - b;
		t = s / a;
		d = floor(t);
		c = t - d;
		if(0==c)
		{
			m++;
			p[m] = a;
			q[m] = t;
		}
		else if (c > 0.5)
		{					//c Ϊ������ t ��ӽ�������d�Ĳ�ֵ
			c = 1 - c;
			d = d + 1;
		}
		if (t > 0.5 && c < min)
		{					//�Ƚ�����������ӽ�����
			min = c;
			a1 = a;
			t1 = t;
			d1 = d;
		}
	}
	if (m>0)		//��һ��� p-��ȫ��
	{
		for (j = 1; j <= m; j++)
		{
			printf("p(%.0f) = %.0f", p[j], q[j]);
		}
	}
	else
	{
		printf("%.0f��������%.4f��ӽ�������%.0f\n", a1, t1, d1);
	}
	return 0;
}

//�Ľ���ָ�������ڵ���ȫ��
#include <stdio.h>
#include <math.h>

int main()
{
	int k;
	long a, b, s, x, y;
	printf("������[x,y]�е���ȫ��");
	printf("���������� x,y: ");
	scanf("%ld,%ld", &x, &y);
	printf("[%ld,%ld]�е���ȫ����:\n", x, y);
	for (a = x; a <= y; a++)
	{
		s = 1;
		b = sqrt(a);
		for (k = 2; k <= b; k++)
		{
			if (a%k == 0)
				s = s + k + a / k;
		}
		if (a == b*b)
			s = s - b;
		if (a == s)
		{
			printf("%ld = 1", a);
			for (k = 2; k <= a / 2; k++)
			{
				if (a%k == 0)
					printf("+%d", k);
			}
			if (a % 2 == 1)
				printf("����ȫ��");
			printf("\n");
		}
	}
	return 0;
}

//��ָ�������ڵ���ȫ��
#include <stdio.h>
int main()
{
	int k;
	long a, s, x, y;
	printf("���������� x,y: ");
	scanf("%ld,%ld", &x, &y);
	printf("[%ld,%ld]�е���ȫ����: \n", x, y);
	for (a = x; a <= y; a++)
	{
		s = 1;
		for (k = 2; k <= a / 2; k++)	//����Ѱ�� a ������ k
		{
			if (a%k == 0)	
				s = s + k;		//k �� a ����������ֵ���
		}
		if (a == s)				//��С�����ӡ������ʽ
		{
			printf("%ld =1",a);
			for (k = 2; k <= a / 2; k++)
			{
				if (a%k == 0)
					printf("+%d", k);
			}
			if (a % 2 == 1)
				printf("�ҵ�����ȫ��");
			printf("\n");
		}
	}
	return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
	long a, b, x, y, z, e1, e2, e3, d1, d2, d3, n = 0;
	printf("����������[a,b]�������� a,b :>_ ");
	scanf("%ld%ld", &a, &b);
	for (x = a; x < sqrt(b*b / 2); x++)
	{
		for (y = x + 1; y <= sqrt(b*b - x*x); y++)
		{
			d1 = x*x + y*y;
			e1 = (long)sqrt(d1);
			if (d1 == e1*e1 && e1<b)
			{
				for (z = y + 1; z <= sqrt(b*b - x*x); z++)
				{
					d2 = x*x + z*z;
					e2 = (long)sqrt(d2);
					d3 = y*y + z*z;
					e3 = (long)sqrt(d3);
					if (d2 == e2*e2 && d3 == e3*e3 && e2 < b && e3 <= b)
					{
						n++;
						printf("NO.%ld:", n);			//������������ⳤ
						printf("%ld,%ld,%ld\n", x, y, z);
						printf("����Խ��߳�: ");
						printf("L(%ld,%ld) = %ld ", x, y, e1);		//ע������Խ��߳�
						printf("L(%ld,%ld) = %ld ", x, z, e2);
						printf("L(%ld,%ld) = %ld\n", y, z, e3);
						break;
					}
				}
			}
		}
	}
	return 0;
}
#endif