#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int get_max(int x, int  y)		//����Զ��庯��Ҫ����һ��int���͵�ֵ--�β�x,y�еĽϴ�ֵ 
{
	//return x > y ? x : y;			//��Ŀ������
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = get_max(a, b);
	printf("max = %d", max);
	max = get_max(10, b);
	printf("max = %d", max);
	max = get_max(5 + 5, b);
	printf("max = %d", max);
	max = get_max(get_max(3, 10), b);
	printf("max = %d", max);
	return 0;
}


#if 0

void Swap(int* x, int* y)		//x,yָ��a,b�ĵ�ַ
{
	int tmp = 0;
	tmp = *x;		//*x,*y����x,y�����ã����õ���a,b������
	*x = *y;
	*y = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d, b = %d\n", a, b);
	Swap(&a, &b);			//���ݵ��ǵ�ַ��&��ȡַ��
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
void Swap(int x, int y)		//��������Ҫ���أ�������void�գ��޷��أ��������ڲ���Ҫreturn,
{
	//�������ڲ���Ҫreturn 0;
	//����returnֱ���������������ʱ������ֱ�ӣ�return;����
	return;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d, b = %d\n", a, b);		//�ȿ�һ��a, b��ֵ
	Swap(a, b);		//����a,b
	printf("a = %d, b = %d\n", a, b);		//�ٿ�һ��a, b��ֵ����֤�Ƿ�ʵ��a,b����
	return 0;
}

int get_max(int x, int  y)		//����Զ��庯��Ҫ����һ��int���͵�ֵ--�β�x,y�еĽϴ�ֵ 
{
	//return x > y ? x : y;			//��Ŀ������
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = get_max(a, b);
	printf("max = %d\n", max);
	return 0;
}

int main()
{
	int a = 10;
	int b = 20;
	int max = 0;				//����һ������������a,b���ߵĽϴ�ֵ
	max = get_max(a, b);		//���������������������ǵ��Զ��庯��
	printf("max = %d\n", max);
	return 0;
}


int main()
{
	char arr[] = "hello boy";
	memset(arr, 'x', 5);
	printf("%s", arr);
	return 0;
}

int main()
{
	char dest[] = "hello";
	char src[] = "boy";		//src�д����ĸ��ַ���b,o,y,\0
	strcpy(dest, src);
	printf("%s\n", dest);
	return 0;
}

int main()
{
	char arr1[20] = { 0 };
	char arr2[20] = "abcdefg";
	//��arr2�����ݿ�����arr1��ȥ
	strcpy(arr1, arr2);
	printf("%s\n", arr1);		//�������ʵ�֣�֤��strcpy()�����𵽿����ַ�����ʹ��
	return 0;
}

#endif