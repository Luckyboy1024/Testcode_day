#define _CRT_SECURE_NO_WARNINGS 1




#if 0

#include <stdio.h>
#include <math.h>

int main()
{
	int k, m, n, i, x, b[10];
	long t, t1, t2, y, d, f;
	printf("�� 1,2,����,9 ��9������ѡm��\n");
	printf("��ϳ�û���ظ����ֵ�ƽ����\n");
	printf("������ƽ������λ�� m :>_ ");
	scanf("%d", &m);
	n = 0;
	t = 1;
	for (y = 1; y < m - 1; y++)
	{
		t = t * 10;
	}
	t1 = (long)sqrt(t);
	t2 = (long)sqrt(10 * t);
	for (y = t1 + 1; y < t2; y++)
	{
		f = y*y;				//�� f Ϊ m λƽ����
		d = f;
		for (x = 0, i = 1; i <= m; i++)
		{
			k = f % 10;
			f = f / 10;
			if (0 == k || (++b[k]>1))
			{
				x = 1;
				break;			//������ 0 �����ظ�������� x=1
			}
		}
		if (0 == x)
		{
			n++;
			printf("%ld = %d^2", d, y);
			if (n % 3 == 0)
				printf("\n");
		}
	}
	printf("\n��%d��\n", n);
	return 0;
}


#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, w, m, x, y;
	long c, d;
	int k, n, s = 0;
	printf("������������ n (3<n<16):>_ ");
	scanf("%d", &n);
	for (m = 1, k = 2; k <= n; k++)
	{
		m *= 10;
	}
	c = (long)pow(m, 0.5);
	d = (long)pow(10 * m - 1, 0.5);
	for (b = c + 1; b <= d; b++)
	{
		a = b*b;
		w = 1;									//aΪ n λƽ����
		for (k = 1; k <= n - 1; k++)
		{
			w *= 10;
			x = floor(a / w);
			y = fmod(a, w);						//nλƽ���� a ��Ϊǰ������ x,y
			if (b == x + y && y > 0)			//�ֶκ���������
			{
				s++;
				printf("%.0f = (%.0f+%.0f)^2\n", a, x, y);
			}
		}
	}
	if (s > 0)
	{
		printf("��%d��%dλ2�κ�ƽ����\n", s, n);
	}
	else
	{
		printf("û��%dλ2�κ�ƽ����\n", n);
	}
	return 0;
}



#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, m, w, x, y;
	int k, n;
	long c, d;
	printf("������ż�� n (n��14):>_ ");
	scanf("%d", &n);
	if (n % 2 > 0)
	{
		printf("������ż��");
		return 0;
	}
	printf("%dλ�����׿�����:>_ ", n);
	for (w = 1, k = 2; k <= n; k++)
		m *= 10;
	for (w = 1, k = 1; k <= n / 2; k++)
		w *= 10;
	c = (long)pow(m, 0.5);
	d = (long)pow(10 * m - 1, 0.5);	//���ö�� b ѭ���������յ�
	for (b = c + 1; b <= d; b++)
	{
		a = b*b;
		x = floor(a / w);
		y = fmod(a, w);				//n λƽ���� a ��Ϊǰ���� x,y
		if(b = x+y && y>=w/10)		//�ֶκ���������
			printf("%.0f=(%.0f+%.0f)^2\n", a, x, y);
	}
	return 0;
}


#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c, x, y;
	printf("4 λ�����׿�����:>_ ");
	c = (int)sqrt(1000);
	for (b = c + 1; b < 99; b++)	//ö�� 2 λ�� b
	{
		a = b*b;
		x = a / 100;
		y = a % 100;				// a ��Ϊǰ������ 2 λ��
		if (y >= 10 && x + y == b)		//�ֶκ���������
			printf("%d ", a);
	}
	printf("\n");
	return 0;
}




//�� n �������������Լ������С������
#include <stdio.h>

int main()
{
	int k, n;
	long a, b, c, m[100];
	printf("�������������� n :>_ ");
	scanf("%d", &n);
	printf("���������� %d ��������:>_ ", n);
	for (k = 0; k < n; k++)
	{
		printf("\n������� %d ��������", k + 1);
		scanf("%d", &m[k]);		//����ԭʼ����
	}
	b = m[0];
	for (k = 1; k < n; k++)		//ѭ������ n-1 ��
	{
		a = m[k];
		if(a < b)
		{
			c = a;
			a = b;
			b = c;				//���� a,b ȷ�� a>b		
		}
		for (c = b; c >= 1; c--)
		{
			if (0 == a%c && 0 == b%c)	//�������Լ��
				break;
		}
		if (1 == c)		//���������Լ��Ϊ 1,�˳�ѭ��
			break;
		b = c;
	}
	//������Լ�����
	printf("(%ld", m[0]);
	for (k = 1; k < n; k++)
	{
		printf(",%ld", m[k]);
	}
	printf(") = %ld\n", c);
	b = m[0];
	for(k= 1; k < n; k++)	//ѭ������ n-1 ��
	{
		a = m[k];
		if (a < b)
		{
			c = a;
			a = b;
			b = c;
		}
		for (c = a; c <= a*b; c = c + a)
		{
			if (0 == c%b)
				break;					//�����������С������ c
		}
		b = c;
	}
	//�����С���������
	printf("(%ld", m[0]);
	for (k = 1; k < n; k++)
	{
		printf(",%ld", m[k]);
	}
	printf(") = %ld\n", c);
	return 0;
}
//��a,b�����Լ������С�������������
#include <stdio.h>

int main()
{
	long a, b, c;
	printf("������������ a,b :>_ ");
	scanf("%ld%ld", &a, &b);
	if (a < b)
	{
		c = a;
		a = b;
		b = c;			//���� a,b ȷ�� a>b 
	}
	for (c = b; c >= 1; c--)
	{
		if (a%c == 0 && b%c == 0)
			break;
	}
	printf("(%ld, %ld) = %ld\n", a, b, c);
	printf("(%ld, %ld) = %ld\n", a, b, a*b / c);
	return 0;
}

//��a,b�����Լ������С�������������
#include <stdio.h>

int main()
{
	long a, b, c, r, a1, b1;
	printf("������������ a,b :>_ ");
	scanf("%ld%ld", &a, &b);
	if (a < b)
	{
		c = a;
		a = b;
		b = c;			//���� a,b ȷ�� a>b 
	}
	a1 = a;
	b1 = b;
	r = a%b;
	while (0 != r)		//շת���
	{
		a = b;
		b = r;
		r = a%b;
	}
	printf("(%ld, %ld) = %ld\n", a1, b1, b);			//��������
	printf("(%ld, %ld) = %ld\n", a1, b1, a1*b1 / b);
	return 0;
}

#endif