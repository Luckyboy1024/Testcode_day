#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#if 0
union Un1
{
	char c[5];
	int i;
};
union Un2
{
	short c[7];
	int i;
};

int main()
{
	//��������Ľ����ʲô��
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));
	return 0;
}
union Un
{
	int i;
	char c;
};

int main()
{
	union Un un;
	//��������Ľ����ʲô��
	un.i = 0x11223344;
	un.c = 0x55;
	printf("%x\n", un.i);
	return 0;
}
//#define offsetof(s,m) (size_t)&(((s*)0)->m)
#include <stdio.h>
#include <stddef.h>
struct Stu
{
	int i;
	short ch;
};

int main()
{
	printf("%d\n", (size_t)&(((struct Stu*)0)->ch));
	printf("%d\n", offsetof(struct Stu, ch));
 	return 0;
}

#pragma pack(4)//����Ĭ�϶�����Ϊ4
//��ϰ3
struct S3
{
	double d;        //8  8  8  0~7
	char c;          //1  8  1   8
	int i;           //4  8  4  12~15
	char ch[6];      //1  8  1  ��������6��Ԫ�أ�ƫ����16~21
};                 //0~21��22���ֽڣ���������8
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��

struct S4
{
	char c1;        //1  8  1   1
	struct S3 s3;   //24 8  8   8~31 ��ΪS3����������8
	double d;       //8  8  8   32~39
};            //0~39��40���ֽڣ���������24
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��

int main()
{
	printf("%d\n", sizeof(struct S4));    //48
	return 0;
}

typedef struct Student
{
	char name[20];//����
	int age;//����
	char sex[5];//�Ա�
	char id[20];//ѧ��
}STU;

STU stu1 = {};


#endif

