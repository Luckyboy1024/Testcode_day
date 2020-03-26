#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void bubble_sort(int arr[], int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 1;		//����
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 0;
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (1 == flag)
		{
			break;
		}
	}
}
void print_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 9, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	bubble_sort(arr, sz);		//ð������
	print_arr(arr, sz);
	return 0;
}




#if 0 

int main()
{
	int arr[10] = {1,2,3,4,5};
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);
	//������
	return 0;
}
void bubble_sort(int arr[])
{
	int sz = sizeof(arr) / sizeof(arr[0]);//��������
	int i = 0;
	for (i = 0; i<sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j<sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	bubble_sort(arr);//�Ƿ������������
	for (int i = 0; i<sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

void bubble_sort(int arr[], int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void print_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	bubble_sort(arr, sz);		//ð������
	print_arr(arr, sz);
	return 0;
}


int main()
{
	int arr[3][4] = { 0 };
	//sizeof(arr)----������������Ĵ�С��ռ�����ֽڵ��ڴ棩
	//sizeof(arr[0])-----��������ÿһ�еĴ�С��ռ�����ֽڵ��ڴ棩
	//sizeof(arr[0][0])------��������ÿ��Ԫ�صĴ�С��ռ�����ֽڵ��ڴ棩
	//sizeof(arr) / sizeof(arr[0])------������������
	//sizeof(arr[0]) / sizeof(arr[0][0])-------������������
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		//			printf("%p", arr[i]);		//��ӡÿ���׵�ַ
		//			printf("%d", arr[i]);		//��ӡÿ��Ԫ��
		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
		{
			printf("%d ", arr[i][j]);		//���δ�ӡ����Ԫ��
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	int arr[3][4] = { 0 };
	int* p = &arr[0][0];
	for (int i = 0; i < 12; i++)
	{
		*(p + i) = i;;
	}
	for (int i = 0; i < 12; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}
int main()
{
	int arr[][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	return 0;
}


int main()
{
	int arr[3][4] = { 0 };		//��������
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}
	return 0;
}
int main()
{
	int arr[][4] = { { 1, 2 }, { 3 }, { 4, 5 } };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}


int main()
{
	int arr1[2][3] = { 1, 2, 3, 4 };		//
	int arr2[2][3] = { (1,2),(3,4), 5};
	int arr3[3][3] = { { 1, 2 }, { 3, 4 }, 5 };
	
//	int arr4[3][3] = { { 1, 2 }, 3, { 4, 5 } };
	//���ֳ�ʼ���Ƿ�: ��ʼֵ̫��
	
//	int arr5[][] = { 1, 2, 3, 4, 5 };
	//���ֳ�ʼ���Ƿ�: ȱ���±�
	return 0;
}
//*(p + i) == *(arr + i) == arr[i] == *(i + arr) == i[arr] == p[i]

int main()
{
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(i + arr));
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", i[arr]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);
	}
	return 0;
}
int main()
{
	int arr[10] = { 0 };		//�������飬���������ʼ����ÿ������Ԫ�س�ʼ��Ϊ0
	int *p = arr;			//�������ַ����Ԫ�صĵ�ַ������ָ�����P

	for (int i = 0; i < 10; i++)
	{
		printf("&arr[%d] = %p   <======>    %p\n", i, &arr[i], p + i);		//���δ�ӡ�������Ԫ�صĵ�ַ
	}

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