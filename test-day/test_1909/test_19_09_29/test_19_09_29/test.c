#define _CRT_SECURE_NO_WARNINGS 1

#include "test.h"


/* fseek example */
#include <stdio.h>
int main()
{
	FILE * pFile;
	pFile = fopen("example.txt", "wb");
	fputs("This is an apple.", pFile);
	fseek(pFile, 9, SEEK_SET);
	fputs(" sam", pFile);
	fclose(pFile);
	return 0;
}

/* fopen fclose example */
#include <stdio.h>
int main ()
{
	FILE * pFile;
	pFile = fopen ("myfile.txt","w");
	if (pFile!=NULL)
	{
		fputs ("fopen example",pFile);
		fclose (pFile);
	}
	return 0;
}

#if 0
int IsPrime(int a)		//a������
{
	for (int i = 1; i < sqrt(a); i++)
	{
		if (i%a == 0)
		{
			return 0;
		}
	}
	return 1;
}
int* NumIsPrime(int n)		//0~n������
{
	int* p = (int *)malloc(sizeof(int)*n);
	assert(p != NULL);
	//�±�����жϵ�����
	//Ԫ��ֵ��0������������1����������
	for (int i = 0; i < n; i++)
	{
		p[i] = IsPrime(i);
	}
}

void test()
{
	IsPrime(100);
}

//����2
typedef struct st_type
{
	int i;
	int *p_a;
}type_a;
type_a *p = malloc(sizeof(type_a));
p->i = 100;
p->p_a = (int *)malloc(p->i*sizeof(int));
//ҵ����
for (i = 0; i<100; i++)
{
	p->p_a[i] = i;
}

//�ͷſռ�
free(p->p_a);
p->p_a = NULL;
free(p);
p = NULL;
//����1
int i = 0;
type_a *p = (type_a*)malloc(sizeof(type_a)+100*sizeof(int));
//ҵ����
p->i = 100;
for(i=0; i<100; i++)
{
	p->a[i] = i;
}
free(p);

void Test(void)
{
	char *str = (char *)malloc(100);
	strcpy(str, "hello");
	free(str);
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
#endif
#if 0
void GetMemory(char **p, int num)
{
	*p = (char *)malloc(num);
}
void Test(void)
{
	char *str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
}
#endif
#if 0
char *GetMemory(void)
{
	char p[] = "hello world";
	return p;
}
void Test(void)
{
	char *str = NULL;
	str = GetMemory();
	printf(str);
}
#endif
#if 0
void GetMemory(char **p)		//p�ö���ָ�����
{
	p = (char *)malloc(100);
}
void Test(void)
{
	char *str = NULL;
	GetMemory(&str);		//����ַ
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;		//��ӡ���ͷţ������ڴ�й©
}

#endif

int main()
{
	test();
	return 0;
}