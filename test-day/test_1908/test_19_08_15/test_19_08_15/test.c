#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


void GetMemory(char *p, int num)
{
	p = (char *)malloc(sizeof(char)* num);
}
void Test(void)
{
	char *str = NULL;
	GetMemory(str, 100); // str ��ȻΪ NULL  
	strcpy(str, "hello"); // ���д��� 
}

void GetMemory2(char **p, int num)
{
	*p = (char *)malloc(sizeof(char)* num);
}

void Test2(void)
{
	char *str = NULL;
	GetMemory2(&str, 100);	//ע������� &str,������str
	strcpy(str, "hello");
	cout << str << endl;
	free(str);
}


char *GetMemory3(int num)
{
	char *p = (char *)malloc(sizeof(char)* num);
	return p;
}

void Test3(void)
{
	char *str = NULL;
	str = GetMemory3(100);
	strcpy(str, "hello");
	cout << str << endl;
	free(str);
}

char *GetString(void)
{

	char p[] = "hello world";

	return p; // 
}

char *GetString(void)
{
	char p[] = "hello world";
	return p; // ��������������� 
}


{
	char *str = NULL;
	str = GetString(); // str 
}
void Test4(void)
{
	char *str = NULL;
	str = GetString(); // str ������������ 
	cout << str << endl;
}

char *GetString2(void)
{
	char *p = "hello world";
	return p;
}

void Test5(void)
{
	char *str = NULL;
	str = GetString2();
	cout << str << endl;
}

strcpy(p,

	char *p = (char *)malloc(100);

strcpy(p, ��hello��);

free(p);
// p
);

free(p);
// p ��ָ���ڴ汻�ͷţ�����p��ָ�ĵ�ַ��Ȼ���� 



��

if (p != NULL) // 


if (p != NULL) // û���𵽷������� 

{

	strcpy(p,


	{

		strcpy(p, ��world��); // ����  
	}
}

char *p = (char *)malloc(100);
strcpy(p, ��hello��);
free(p);     // p ��ָ���ڴ汻�ͷţ�����p��ָ�ĵ�ַ��Ȼ���� 
��
if (p != NULL) // û���𵽷������� 
{
	strcpy(p, ��world��); // ����  
}
lass A
{

public:

	void Func(void){
		cout <<

	}
	| }
}

#include <iostream>
using namespace std;

class A
{
public:
	void Func(void){ cout << ��Func of class A�� << endl; }
};
void Test(void)
{
	A *p;
	{
		A a;
		p = &a; // ע��  a �������� 
	}

	p->Func();	// p�ǡ�Ұָ�롱 
}

class Obj
{
public:
	Obj(void){ cout << ��Initialization�� << endl; }
	~Obj(void){ cout << ��Destroy�� << endl; }
	void	Initialize(void){ cout << ��Initialization�� << endl; }
	void    Destroy(void){ cout << ��Destroy�� << endl; }
};

void UseMallocFree(void)
{

	Obj  *a = (obj *)malloc(sizeof(obj)); // ���붯̬�ڴ� 
	a->Initialize();	// ��ʼ�� 
	//�� 
	a->Destroy();		// ������� 
	free(a);			// �ͷ��ڴ� 
}



{

	Obj  *a = new Obj; // 
	

}
void UseNewDelete(void)
{

	Obj  *a = new Obj;	// ���붯̬�ڴ沢�ҳ�ʼ�� 
	//�� 
	delete a;			// ��������ͷ��ڴ� 
}

{
	A  *a = new A;
	if (a == NULL)
	{

		return;

	}
}
void Func(void)
{
	A  *a = new A;
	if (a == NULL)
	{
		return;

	}
	��
}