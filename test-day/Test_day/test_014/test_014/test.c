#define _CRT_SECURE_NO_WARNINGS 1


// ���������Ϸ
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, j, k, m, n, r, s, u, v, tim;
	int b[30], p[30], q1[30], q2[30], t[30], min, max;
	tim = time(0) % 1000;
	srand(tim);
	printf("������Ϸ�� 4 �أ�1 �򵥣�2 ���ף�3 ���ѣ�4 �ѡ�\n");
	v = 0;
	for (m = 1; m <= 4; m++)
	{
		printf("����%d��", m);
		r = 3 * m - 1; 
		n = r + 3 + m / 3;
		min = 10000;
		max = 0;
		printf("��������%d��������ɵ������в���%d�� + �ţ�\n", n, r);
		for (k = 1; k <= n; k++)
		{
			b[k] = rand() % 9 + 1;
			printf("%d", b[k]);
		}
		printf("����Ϸ�߼�������������С��֮������뼫�");
		i = 1;
		t[1] = 1;
		t[0] = 0;
		t[r + 1] = n;
		while (1)
		{
			if (i == r)
			{
				s = 0;
				for (k = 1; k <= r + 1; k++)
				{
					p[k] = 0;
					for (j = t[k - 1] + 1; j <= t[k]; j++)
					{
						p[k] = p[k] * 10 + b[j];
					}
					s = s + p[k];
				}
				if (s > max)
				{
					max = s;
					for (k = 1; k <= r + 1; k++)
					{
						q1[k] = p[k];
					}
				}
				if (s < min)
				{
					min = s;
					for (k = 1; k <= r + 1; k++)
					{
						q2[k] = p[k];
					}
				}
			}
			else
			{
				i++;
				t[i] = t[i - 1] + 1;
				continue;
			}
			while (n - r + i - 1 == t[i])
			{
				i--;
			}
			if (i > 0)
			{
				t[i]++;
			}
			else break;
		}
		scanf("%d", &u);
		if (max - min == u)
		{
			v++;
			printf("������ȷ�����أ�");
		}
		else
		{
			printf("������ʽΪ��");
			for (k = 1; k <= r; k++)
			{
				printf("%d+", q1[k]);
			}
			printf("%d=%d\n", q1[r + 1], max);
			printf("��С��ʽΪ��");
			for (k = 1; k <= r; k++)
			{
				printf("%d+", q2[k]);
			}
			printf("%d=%d\n", q2[r + 1], min);
			printf("���� 4 ����ͨ��%d��, �˳�������\n", v);
			return 0;
		}
	}
	printf("��ϲ�㣬4����ȫ��ͨ����");
	return 0;
}

#if 0


// �Ӽ��� 1 �ľ���ѭ�����
#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, d, t, x, y;
	printf("���������� a,b :>_ ");
	scanf("%lf%lf", &a, &b);
	c = (a > b ? b : a);
	for (t = 2; t <= c; t++)
	{
		if (0 == fmod(a, t) && 0 == fmod(b, t))	// a,b���ڴ���1�Ĺ�����t
		{
			printf("�����ܵõ� 1��\n");
			return 0;
		}
	}
	x = 0;
	while (x < 10000000)
	{
		x++;
		d = x*a;
		if (0 == fmod((d - 1), b))
		{
			y = floor((d - 1) / b); 
			t = 1; 
			break;
		}
		if (0 == fmod((d + 1), b))
		{
			y = floor((d + 1) / b); 
			t = 2; 
			break;
		}
	}
	if (x >= 10000000)
	{
		printf("δ�ҵ���1���㣡\n");
		return 0;
	}
	if (1 == t)
	{
		printf("%.0f��%.0f��Ϊ+, %.0f��%.0fǰΪ-,\n", x, a, y, b);
		printf("����%.0f�������1��\n", x + y - 1);
	}
	if (2 == t)
	{
		printf("%.0f��%.0f��Ϊ+, %.0f��%.0fǰΪ-,\n", y, b, x, a);
		printf("����%.0f�������1��\n", x + y - 1);
	}
	return 0;
}


// �Ӽ��� 1 �Ļ������
#include <stdio.h>

int main()
{
	long a, b, c, d, n, t, x, y;
	printf("���������� a,b :>_ ");
	scanf("%ld%ld", &a, &b);
	c = (a > b ? b : a);
	for (t = 2; t <= c; t++)
	{
		if (a%t == 0 && b%t == 0)		//a��b���ڴ��� 1 �Ĺ����� t
		{
			printf("�����ܵõ� 1\n");
			return 0;
		}
	}
	n = 0;
	while (n < 10000000)
	{
		n++;
		for (x = 1; x <= n; x++)
		{
			y = n + 1 - x;
			d = x*a - y*b;
			if (1 == d || -1 == d)
			{
				if (1 == d)
				{
					printf("%ld��%ld��Ϊ+��%ld��%ldǰΪ-��", x, a, y, b);
					printf("����%ld������� 1��\n", n);
				}
				if (-1 == d)
				{
					printf("%ld��%ld��Ϊ+��%ld��%ldǰΪ-��", y, b, x, a);
					printf("����%ld������� 1��\n", n);
				}
				return 0;
			}
		}
	}
	if (n >= 10000000)
	{
		printf("δ�ҵ��� 1 ���㣡\n");
	}
	return 0;
}


//����ħ��
#include <stdio.h>

int main()
{
	int a, b, c, m, n, t;
	printf("�����һ����λ�� n = abc, ֻҪ���\n");
	printf("�� 5 ����λ����abc��bac��bca��cab��cba ֮�� m\n");
	printf("��������� n��\n\n");
	printf("�����������֮�� m :>_ ");
	scanf("%d", &m);
	t = 0;
	for (a = 1; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				n = 122 * a + 212 * b + 221 * c;	//�� a��b��c ���� n
				if (m == n)
				{
					printf("�Ҳ���������ǣ�%d\n", a * 100 + b * 10 + c);
					t = 1;
				}
			}
		}
	}
	if (t == 0)
	{
		printf("������ĺ�����ˣ�\n");
	}
	return 0;
}





#include <stdio.h>

int main()
{
	long x, y, m, t;
	printf("���������� m :>_ ");
	scanf("%ld", &m);
	x = m / 20;
	t = m - 20 * m;
	y = t / 3;
	t = m - 20 * x - 3 * y;
	printf("�� %ld ƿ��ˮ��������Ҫ %.2f Ԫ��\n", m, (13 * x + 2 * y)*1.40 + t);
	return 0;
}
#endif