#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
	return 0;
}

#if 0

// ָ�롭
int len = strlen(a);
char *p = (char *)malloc(sizeof(char)*(len+1));
strcpy(p, a);		//��Ҫ�� p = a;
if(0 == strcmp(p, a))	//��Ҫ�� if (p == a)
��

// ���顭
char a[] = "hello";
char b[10];
strcpy(b, a);		//������  b = a;
if(0 == strcpy(b, a))	//������ if(b == a)
��

// ���顭 
char a[] = "hello"; 
char b[10]; 
strcpy(b, a);  // ������ b = a; 
if(strcmp(b, a) == 0) // ������    if (b == a) 
��

int main()
{
	long int money = 0;
	scanf("%d", &money);
	printf("ƽ��ÿ�²�����Ϣ %lf \n", (money * 10000 * 0.03) / 12);
	printf("ƽ��ÿ�������Ϣ %lf \n", (money * 10000 * 0.03) / 365);
	return 0;
}

char a[] = ��hello��; 
a[0] = ��X��; 
cout << a << endl; 
char *p = ��world��;     // ע��pָ�����ַ��� 
p[0] = ��X��;            // ���������ܷ��ָô��� 
cout << p << endl;

//���� n λ���¶���
#include <stdio.h>
#include <math.h>

int main()
{
	int m, n, i;
	double f, k, s, t, y;
	printf(" ������λ�� n (2<n<10) :>_ ");
	scanf("%d", &n);
	m = 0;
	t = 1;
	for (i = 1; i <= n - 1; i++)
	{
		t = t * 10;
	}
	for (y = t; y <= t * 10 - 1; y++)		//ö�� n λ����
	{
		f = y;
		for (s = 0, i = 1; i <= n; i++)		//ѭ������ y �� n ������ k 
		{
			k = fmod(f, 10);
			s += pow(k, n);
			f = floor(f / 10);		//�� y �� n �����ֵ� n ����֮�� s
		}
		if (y == s)					//����Ƿ���������
		{
			m++;
			printf(" %.0f ", y);		//���̽�����
		}
	}
	printf("\n %d λ���¶����� %d ��\n", n, m);
	return 0;
}

int main()
{
	int i = 0;
	if (i == 0)
	{
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
#define M 13361
FILE *fp;
int main()
{
	char cy[M][10];
	char a[8];
	//char b[2];
	char c[2];
	int i, j;
	int find;
	int flag = 0;
	if ((fp = fopen("idom.txt", "r")) == NULL)
	{
		printf("cannot open file\n");
		return 0;
	}

	for (i = 0; i<M; i++)
	{
		fscanf(fp, "%s", cy[i]);
	}
	while (1)
	{

		printf("�����뿪ͷ�ĳ���������롰�˳��������˳���Ϸ��\n");
		scanf("%s", &a);
		find = 0;
		if (strcmp(a, "�˳�") == 0)
			break;
		for (i = 0; i<M; i++)
		{
			if (strncmp(a, cy[i], strlen(a)) == 0)
			{
				find = 1;
				break;
			}
		}
		if (find == 0)
			printf("����Ĳ��ǳ��������������˳�\n");
		else
		{
			//b[0]=a[6];
			//	b[1]=a[7];
			for (i = 0; i<M; i++)
			{
				if (cy[i][0] == a[6] && cy[i][1] == a[7])

				{
					flag = 1;
					printf("%s\n", cy[i]);
					//c[0]=cy[i][6];
					//c[1]=cy[i][7];
					break;
				}
				if (flag == 0 && i == (M - 1))
				{
					printf("��Ӯ�ˣ������\n");
					break;
				}
				//	continue;

			}
		}
	}
	return 0;
}

#endif