#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>

//��������
int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("c = %d\n", c);
	return 0;
}
//��������
int Add(int x, int y)
{
	return (x + y);
}

#if 0

int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	//�����ɶ��
	return 0;
}

int main()
{
	char arr[20] = "hello";
	int ret = 0;
	ret = strlen(arr);
	printf("%d\n", ret);
	ret = strlen(strcat(arr, "boy"));//�������һ��strlen���� 
	printf("%d\n", ret);
	return 0;
}

void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	int i = 0;
	for(i=0; i<3; i++)
	{
		new_line();
	}
}
int main()
{
	three_line();
	return 0;
}



void Add(int* p)
{
	(*p)++;
}

int main()
{
	int num = 0;
	Add(&num);		//ע�⣺&num���β���ʵ�ε�����
	Add(&num); 
	Add(&num); 
	Add(&num); 
	printf("num = %d\n", num);
	return 0;
}



int binary_search(int* arr, int k, int sz)		//�Ҳ�������-1�������Ƿ���0������0�±�Ԫ�أ����ҵ������±꣬
{
	//�ҳ��м�Ԫ���±�
	int left = 0;
	int right = sz - 1;
	while (left <= right)		//ѭ������������left > right
	{
		int mid = left + (right - left) / 2;
		if (k < arr[mid])
		{
			right = mid - 1;
			printf("");
		}
		else if (k > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);
	if (-1 == ret)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ����±�Ϊ %d ��Ԫ��", ret);
	}
	return 0;
}

void test()
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", i);
		if (5 == i)
		{
			return;		//return (void);
		}
	}
	printf("test:hehe\n");
}
int main()
{
	test();
	return 0;
}


int main()
{
	FILE* pf = fopen("", "r");
	assert(pf);

	return 0;
}


�������ƣ�
�����ĸ���Ŀ��
����汾�ţ�
���򿪷�С�����
�����㷨�ṩ�ˣ�
��������ͼ�ṩ�ˣ�
��������д�ˣ�
�������Ա��
��Ŀ�����ˣ�

#endif