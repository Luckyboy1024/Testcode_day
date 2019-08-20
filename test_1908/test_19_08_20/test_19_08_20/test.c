#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#if 0 
int main()
{
	unsigned char a = 0xA5;
	unsigned char b = ~a >> 5;
	printf("%d\n", b);
	return 0;
}
//测试结果：250
#endif

#if 0
int main()
{
	char a = 0xA5;				//a 取消无符号类型
	unsigned char b = ~a >> 5;
	printf("%d\n", b);
	return 0;
}
//测试结果：2

#endif

#if 0
int main()
{
	unsigned char a = 0xA5;
	char b = ~a >> 5;			//b 取消无符号类型
	printf("%d\n", b);
	return 0;
}
//测试结果：-6

#endif

#if 0

int main()
{
	unsigned char a = 0xA5;
	unsigned char b = ~(a >> 5);		//改变运算顺序
	printf("%d\n", b);
	return 0;
}
//测试结果：250
//1010 0101  ~~  0xA5
//0000 0000 0000 0000 0000 0000 1010 0101	~~ 整型提升
//1111 1111 1111 1111 1111 1111 0101 1010	~~ 按位取反

#endif

#if 1

int main()
{
	char a = 0;
	printf("%d\n", sizeof(!a));
	printf("%d\n", a);
	return 0;
}

#endif

