#define _CRT_SECURE_NO_WARNINGS 1

//�󳤷�������
#include <stdio.h>
#include <math.h>
int main()
{
	long a, b, d, k, x, y, z, w;
	printf("����������[a,b]�������� a,b :>_ ");
	scanf("%ld%ld", &a, &b);
	k = 0;
	for (x = a; x <= sqrt(b*b / 3); x++)			//����ö������ѭ��
	{
		for (y = x; y <= sqrt((b*b - x*x) / 2); y++)
		{
			for (z = y; z <= sqrt(b*b - x*x - y*y); z++)
			{
				d = x*x + y*y + z*z;
				w = (int)sqrt(d);		//w Ϊ x,y,z ��ƽ���Ϳ�ƽ��
				if (w > b)
					break;
				if (d == w*w)		//��������ʱ�Ƚ���ֵ
				{
					k++;
					printf("%3d: %ld,%ld,%ld,%ld\n", k, x, y, z, w);	//�����ֵ
				}
			}
		}
	}
	if(k>0)
		printf("��ָ������[%ld,%ld]�й�������%ld�鳤������\n", a, b, k);
	else
		printf("��ָ����Χ��û�г�������\n");
	return 0;
}

#if 0
//��ָ�������ڵĵ�����������
#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, n;
	long x, y, z;
	printf("����������[a,b]�������� a,b :>_ ");
	scanf("%d%d", &a, &b);
	printf("����[%d,%d]�еĵ������������У�\n", a, b);
	n = 0;
	for (z = a; z <= b - 2; z++)	//����z,y,xѭ��ö��
	{
		for (y = z + 1; y <= b - 1; y++)
		{
			for (x = y + 1; x <= b; x++)
			{
				if (z*z*(x*x + y*y) == x*x*y*y)			//���㵹����������ʱ���
				{
					n++;
					printf("1/%ld^2+1/%ld^2 = 1/%ld^2\n", x, y, z);
				}
			}
		}
	}
	printf("��%d�鵹��������", n);
	return 0;
}

//��ָ�������ڵĹ�������
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, n;
	long x, y, z, d;
	printf("����������[a,b]�������� a,b :>_ ");
	scanf("%d%d", &a, &b);
	printf("����[%d,%d]�еĹ��������У�\n", a, b);
	n = 0;
	for (x = a; x <= b - 2; x++)
	{
		for (y = x + 1; y <= b - 1; y++)
		{
			d = x*x + y*y;	
			z = sqrt(d);		//zΪx,y��ƽ���Ϳ�ƽ��
			if (z > d)
				break;
			if (d == z*z)		//���㹴��������ʱ���
			{
				n++;
				printf("%ld^2+%ld^2 = %ld^2\n", x, y, z);
			}
		}
	}
	printf("��%d�鹴����", n);
	return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
	int k, m, n, t, f[10];
	long a, b, c, d, w;
	printf("����2,3,5,6,7,8,9��ȫ�����е�ƽ����:\n");
	n = 0;
	b = (long)sqrt(2356789);
	c = (long)sqrt(9876532);
	for (a = b; a <= c; a++)
	{
		d = a*a;
		w = d;			//ȷ�� d Ϊƽ����
		for (k = 0; k <= 9; k++)
		{
			f[k] = 0;
		}
		while (w > 0)
		{
			m = w % 10;
			f[m]++;
			w = w / 10;
		}
		for (t = 0, k = 1; k <= 9; k++)
		{
			if (f[k] > 1)		//��������ƽ�����Ƿ����ظ�����
				t = 1;
		}
		if (0 == t && 0 == f[0] + f[1] + f[4])			//����ƽ������û������0��1��4
		{
			n++;
			printf("%2d: ", n);
			printf("%ld = %ld^2\n", d, a);
		}
	}
	printf("�����������%d��\n", n);
	return 0;
}
#endif