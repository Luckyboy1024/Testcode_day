#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <Windows.h>

void test()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{

	}
}

int main()
{
	return 0;
}


#if 0


int main()
{
	printf("Hello World!\n");   //��ʱ�������Ĭ�����Ե�����
	HANDLE hdl =  GetStdHandle(STD_OUTPUT_HANDLE);   //��ȡ����̨���

	SetConsoleTextAttribute(hdl,  FOREGROUND_GREEN);   //�����������ԣ���ɫ
	printf("Hello World!\n");   //��ʱ���������ɫ������

	SetConsoleTextAttribute(hdl,  FOREGROUND_RED);  //�����������ԣ���ɫ
	printf("Hello World!\n");   //��ʱ������Ǻ�ɫ������

	SetConsoleTextAttribute(hdl,  FOREGROUND_BLUE); //�����������ԣ���ɫ
	printf("Hello World!\n");   //��ʱ���������ɫ������

	SetConsoleTextAttribute(hdl,  FOREGROUND_INTENSITY);   //�����������ԣ�����
	printf("Hello World!\n");   //��ʱ������Ǹ���������

	SetConsoleTextAttribute(hdl,  FOREGROUND_BLUE | FOREGROUND_INTENSITY); 
	//�����������ԣ���ɫ������
	printf("Hello World!\n");   //��ʱ���������ɫ������������

	SetConsoleTextAttribute(hdl,  FOREGROUND_BLUE | FOREGROUND_GREEN |  FOREGROUND_RED);  //�����������ԣ���ɫ
	printf("Hello World!\n");   //��ʱ������ǰ�ɫ������   Ҳ����˵��������ɫ���Կ��Ե���

	SetConsoleTextAttribute(hdl,  FOREGROUND_BLUE | FOREGROUND_GREEN |  FOREGROUND_RED | FOREGROUND_INTENSITY);   //�����������ԣ���ɫ������
	printf("Hello World!\n");   //��ʱ������ǰ�ɫ������������

	CloseHandle(hdl); //Ҫ�ǵùر�Handle���ͷ� Handle ��Դ
	return 0;
}
int main()
{
	FILE *pf = fopen("C:\\Users\\ASUS\\Desktop\\������ϰ.txt", "r");
	assert(pf) ;
	system("Color f0");
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c", ch);
	}
	Sleep(4000);
	system("cls");
	printf("hehe");
	system("pause");


	fclose(pf);
	pf = NULL; 
	return 0;
}


#include <stdio.h>

//�ж��Ƿ�Ϊ����,�ǣ���Ϊ1������Ϊ0
int is_leap_year(int y)			//��y������year
{
	//return (((0 == y % 4) && (0 != y % 100)) || (0 == y % 400))		//��д��������ֱ��һ��������
	if (((0 == y % 4) && (0 != y % 100)) || (0 == y % 400))
	{
		return 1;	
	}
	else
	{
		return 0;
	}
}

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (1 == is_leap_year(year))
		{
			printf("%d ", year);
		}
	}
	return 0;
}

#include <stdio.h>
#include <math.h>	//sqre()������ƽ�����ĺ���

//����1�������������򣬲�������
int is_prime(int n)	//����ֵ������int���ͣ�����n
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (0 == n%j)
		{
			return 0;
		}
	}
	return 1;
}


int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (1 == is_prime(i))		//is_prime()�����ж� i �Ƿ�Ϊ����
		{
			printf("%d ", i);
		}
	}
	return 0;
}

#endif