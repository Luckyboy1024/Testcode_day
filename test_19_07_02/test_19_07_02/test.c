#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{

}




#if 0

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("****************************\n");
	printf("***       1. play        ***\n");
	printf("***       0. exit        ***\n");
	printf("****************************\n");
}

void game()
{
	printf("������\n");
	/*****  ��������� *****/
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	//printf("ret = %d\n", ret);			//���Թ����в鿴�����
	/******* ��ʼ�� *******/
	while (1)
	{
		printf("�������:>_");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>_");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();		//����Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>_");
		scanf("%s", password);
		if (0 == strcmp(password, "abcd"))	//�ַ����ıȽ��õ���string compare---strcmp()����
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (3 == i)
	{
		printf("����������������˳�����\n");
	}
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <Windows.h>

int main()
{
	char arr1[] = "Hello world!!!";
	char arr2[] = "##############";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 1;		//����Ӧ����-2����Ϊ�ַ�����β��\0
	int right = strlen(arr1) - 1;		//strlen������ַ�������
	printf("%s\n", arr2);
	//whileѭ��ʵ��
	while (left <= right)
	{
		Sleep(1000);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}
	////forѭ��ʵ��
	//for (left = 0, right = strlen(arr1) - 1;
	//	left <= right;
	//	left++, right--)
	//{
	//	Sleep(1000);
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//}
	//
	return 0;
}

#endif
