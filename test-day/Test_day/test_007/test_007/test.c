#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "abc d";	//�ַ���������ָ�������
	printf("%d\n", strlen(str));
	return 0;
}
//��������5


#if 0
int main()
{
	char *str1 = "hello";
	char *str2 = "boy";
	if (strlen(str2) > strlen(str1) )
	{
		printf("str1 < str2\n");
	}
	else
	{
		printf("str1 > str2\n");
	}
	return 0;
}

int main()
{
	char *c[] = {"ENTER","NEW","POINT","FIRST"};
	char**cp[] = {c+3,c+2,c+1,c};
	char***cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp+3);
	printf("%s\n", *cpp[-2]+3);
	printf("%s\n", cpp[-1][-1]+1);
	return 0;
}

int main()
{
	char *a[] = {"work","at","alibaba"};
	char**pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}

int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr1 = (int *)(&aa + 1);
	int *ptr2 = (int *)(*(aa + 1));
	printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}
int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;        //������ܻᱨ���ϸ�����Ӧ���� p = (int(*)[4])a;
	printf( "%p,%d\n", &p[4][2] -  &a[4][2], &p[4][2] - &a[4][2]);
	return 0; 
}

int main(int argc, char * argv[])        //main()�����в�������һ��ʡ�Բ�д
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5)  };  //С���ţ����ű��ʽ
	int *p;
	p = a[0];
	printf("%d", p[0]);
	return 0;
}


int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	printf( "%x,%x", ptr1[-1], *ptr2);
	return 0;
}

int main()
{
	char *c[] = {"ENTER","NEW","POINT","FIRST"};
	char**cp[] = {c+3,c+2,c+1,c};
	char***cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp+3);
	printf("%s\n", *cpp[-2]+3);
	printf("%s\n", cpp[-1][-1]+1);
	return 0;
}

int main(){char *c[] = {"ENTER","NEW","POINT","FIRST"};char**cp[] = {c+3,c+2,c+1,c};char***cpp = cp;printf("%s\n", **++cpp);printf("%s\n", *--*++cpp+3);printf("%s\n", *cpp[-2]+3);printf("%s\n", cpp[-1][-1]+1);return 0;}

#include <stdio.h>
int main()
{
	char *a[] = {"work","at","alibaba"};
	char**pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}

int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr1 = (int *)(&aa + 1);
	int *ptr2 = (int *)(*(aa + 1));
	printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}

int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf( "%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}

struct Test
{
	int Num;
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;

int main()
{
	p = (struct Test*)0x100000;
	//%p�ı�ʾ  0x00000000 �ĸ��ֽ�
	printf("%p\n", p + 0x1);  //0x0010 0014  -- p+20  --���ڽṹ��Ĵ�С��20���ֽ�
	printf("%p\n", (unsigned long)p +  0x1);  //0010 0001  -- p+1
	printf("%p\n", (unsigned int)p + 0x1); //0010 0004  -- p+4
	printf("%p\n", (unsigned char*)p +  0x1);  //0010 0001  -- p+1
	printf("%p\n", (unsigned char**)p +  0x1);  //0010 000  -- p+4
	printf("%p\n", (unsigned short)p +  0x1);  //0010 0001  -- +1
	printf("%p\n", (unsigned short*)p +  0x1);  //0010 0002  -- +2
	printf("%p\n", (unsigned int*)p +  0x1);  //0010 0004  -- +4
	return 0;
}

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int *)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));
	return 0;
}

#endif