#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <assert.h>

extern void test();
int main()
{
	test();
	return 0;
}



#if 0
extern int g_val;

int main()
{
	printf("g_val = %d\n", g_val);
 	return 0;
}



void test()
{
	static int i = 0;
	i++;
	printf("%d", i);
}

int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	return 0;
}



typedef struct Node
{
	int data;
	struct Node* next;
}Node;



int main()
{

	return 0;
}



void test()
{
	printf("hehe");
}

int main()
{
	int arr[10] = { 0 };
	arr[6] = 6;	//�±����ò�������ͨ�����ҵ������ӦԪ��
	test();	//�������ò����������ú���test
	return 0;
}

int main()
{
	int a = 3;
	int b = 4;
	int c = 10;
	int d = 20;
	d = (a = d - 5, b = a + 3, c = 3 + d);
	printf("%d", d);
	return 0;
}


int main()
{
	int a = 3;
	int b = 5;
	int max = 0;
	max = (a > b) ? a : b;
	printf("%d", max);
	return 0;
}


int main()
{
	int a = 3;
	int b = 5;
	int max = 0;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	printf("%d\n", b);
	return 0;
}


int main()
{
	int a = 0;		//��a��ֵ��Ϊ0���߼��ϴ����
	int b = 4;		//bΪ4�����㣬�߼����壺��
	int c = a||b;	//�߼���
	printf("%d",c);
	return 0;
}

int main()
{
	int a = (int )3.14;
	return 0;
}


int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("ret = %d\n", ret);
	return 0;
}


int main()
{
	int a = 10;
	int b = --a;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
}


int main()
{
	int a = 10;
	printf("a = %d\n", a++);
	printf("a = %d\n", a);
	return 0;
}

#endif
