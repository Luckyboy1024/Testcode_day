#define _CRT_SECURE_NO_WARNINGS 1

#if 0
#include <stdio.h>

int main()
{
	int d, g, i, j, k, m, n, r, a[3000][30], b[3000][30];
	printf("��������λ��������λ�� n :");
	scanf("%d", &n);
	g = 9;			//���ƻ�����1λʱ����ֵ
	for (j = 1; j <= g; j++)
	{
		a[j][1] = j;
	}
	for (k = 2; k <= n; k++)	//����λ��k��2��ʼ����
	{
		m = 0;
		for (i = 1; i <= g; i++)		//ö��g��k-1λ��λ������
		{
			for (j = 0; j <= 9; j++)		//kλ���ĸ�λ����Ϊj
			{
				a[i][k] = j;
				for (r = 0, d = 1; d <= k; d++)		//���kλ����k������r
				{
					r = r * 10 + a[i][d];
					r = r%k;
				}
				if (0 == r)
				{
					m++;
					for (d = 1; d <= k; d++)
					{
						b[m][d] = a[i][d];		//����������kλ����ֵ��b����
					}
				}
			}
		}
		g = m;		//���Ƶ�g��kλ��λ������
		for (i = 1; i <= g; i++)
		{
			for (d = 1; d <= k; d++)
			{
				a[i][d] = b[i][d];		//g��b������a���鸳ֵ��׼���²�����
			}
		}
	}
	if (g>0)		//���nλ�ĸ�����ÿһ����
	{
		printf("%dλ��λ��������%4d��: \n", n, g);
		for (i = 1; i <= g; i++)
		{
			printf(" %d:", i);
			for (d = 1; d <= n; d++)
			{
				printf("%d", a[i][d]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("�޽�\n");
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int i, j, n, r, t, s, a[100];
	printf("��λ������ n λ����ȷ�� n :>_ ");
	scanf("%d", &n);
	printf("����%dλ��λ������:>_\n", n);
	for (j = 1; j <= 100; j++)
	{
		a[j] = 0;
	}
	t = 0;
	s = 0;
	i = 1;
	a[1] = 1;
	while (a[1] <= 9)
	{
		if (t == 0 && i < n)
			i++;
		for (r = 0, j = 1; j <= i; j++)		//���iʱ�Ƿ�����i
		{
			r = r * 10 + a[j];
			r = r%i;
		}
		if (r != 0)
		{
			a[i] = a[i] + 1;
			t = 1;		//����r != 0ʱ��a[i]��1��t=1
			while (a[i]>9 && i>1)
			{
				a[i] = 0;
				i--;		//����
				a[i] = a[i] + 1;
			}
		}
		else t = 0;		//���� r=0 ʱ��t=0
		if (t == 0 && i == n)
		{
			s++;
			printf("%d :", s);
			for (j = 1; j <= n; j++)
			{
				printf("%d", a[j]);
			}
			printf("\n");
			a[i] = a[i] + 1;
		}
	}
	if (s == 0)
		printf("û���ҵ���\n");
	else 
		printf("������%d����\n", s);
	return 0;
}

#include <stdio.h>

for (r = 0, j = 1; j <= i; j++)
{
	r = r * 10 + a[j];
	r = r%i;
}

if (v == 0 && a[k] != 0)   //���kλ���������
{
	printf("%d��β��%2dλ��������", a[1], k);
	for (j = k; j >= 1; j--)
	{
		printf("%d", a[j]);
	}
	printf("\n");
}

int main()
{
	int n, d, k, j, i, t, m, w, z, u, v, a[500], b[500], c[500];
	printf("����������n :>_ ");
	scanf("%d", &n);
	for (d = 1; d <= 9; d++)
	{
		for (k = 1; k <= 499; k++)
		{
			a[k] = 0;
			b[k] = 0;
			c[k] = 0;
		}
		a[1] = d;				//����������λ����ֵ
		for (k = 2; k <= n; k++)
		{
			for (j = 0; j <= 9; j++)
			{
				a[k] = j;
				v = 0;			//̽���������ĵ�kλa(k)ѡ���� j
				for (i = 1; i <= k; i++)
				{
					c[i] = 0;
				}
				for (i = 1; i <= k; i++)
				{
					for (z = 0, t = 1; t <= k; t++)
					{
						u = a[i] * a[t] + z;
						z = u / 10;
						b[i + t - 1] = u % 10;		//�����м�������b����
					}
					for (w = 0, m = i; m <= k; m++)
					{
						u = c[m] + b[m] + w;	//����ƽ������c����
						w = u / 10;
						c[m] = u % 10;
					}
				}
				for (i = 1; i <= k; i++)
				{
					if (a[i] != c[i])
						v = 1;				//���ֲ�ͬ����ʱ������a[k]ѡ��һ������
				}
				if (0 == v)
					break;
			}
		}
		if(0 == v && a[n] != 0)
		{
			printf("%d��β��%dλ������ : ", a[1], n);
			for (k = n; k >= 1; k--)
			{
				printf("%d ", a[k]);
			}
			printf("\n");
		}
	}
	return 0;
}
int main()
{
	long a, b, c, k, m, s, x, y;
	printf("�������������������� x,y :>_ ");
	scanf("%ld%ld", &x, &y);
	m = 0;
	for (a = x; a <= y; a++)
	{
		s = a*a;		//���� a ��ƽ���� s
		b = 1;
		k = a;
		while (k > 0){
			b = b * 10;
			k = k / 10;
		}
		c = s%b;		//cΪa��ƽ����s��β��
		if (a == c)
		{
			++m;
			printf("%ld^2 = %ld\n", a, s);
		}
	}
	printf("����[%ld,%ld]�У�������%ld��������\n", x, y, m);
	return 0;
}
#endif