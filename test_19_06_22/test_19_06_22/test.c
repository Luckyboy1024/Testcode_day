#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>




#if 0

struct Stu
{
	char name[20];		//����
	int age;			//����
	char sex[5];		//�Ա�		//����������Ǻ��֣�����Ҫ����Ϊ����[]
	char id[15];		//ѧ��
};


int main()
{
	struct Stu s = { "����", 20, "��" };		//ע�⣺���ﺺ���á����������ᱨ��
	printf("name: %s age: %d sex: %s\n", s.name, s.age, s.sex);
	//����һ���ṹ�����͵�ָ��
	struct Stu* ps = &s;		//ps�Ǹ�ָ�������psָ��s����s�ĵ�ַ������ps����
	printf("name: %s age: %d sex: %s\n", (*ps).name, (*ps).age, (*ps).sex);
	printf("name: %s age: %d sex: %s\n", ps->name, ps->age, ps->sex);	//ps
	return 0;
}

int main()
{
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));

	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	return 0;
}


int main()
{
	printf("���з�\\n");
	return 0;
}

int main()
{
	//����һ��char���͵�ָ�����
	
	char ch = "w";		//����һ��char�͵ı���
	char* pc = &ch;		//pcָ��ch��pcΪchar���͵�ָ�����
	*pc = 'a';			//��ch��ֵ��Ϊa
	printf("%c\n", ch);
	return 0;
}


int main()
{
	int a = 10;
	int* p = &a;
	printf("%d\n", a);
	*p = 20;	//��20��ֵ��*p,	
	printf("%d\n", a);	//��� a ��ֵ��Ϊ20����ô֤��*p����a
	return 0;
}


#define SQUARE(X) X*X
int main()
{
	printf("%d\n", SQUARE(9));		//��ͬ��printf("%d\n", 3*3); �滻��ʮ�ֳ���
	return 0;
}


#define M 100		//ע�⣬���ӷֺ�

int main()
{
	int a = M;
	printf("%d\n", a);
	return 0;
}


#endif