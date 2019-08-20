#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char a = 0xA5;
	char b = ~a >> 5;
	printf("%d\n", b);
	return 0;
}

#if 0

void Foo(int x, int y);
inline void Foo(int x, int y) // inline与函数定义体放在一起 
{
	⋯
}

void Foo(int x, int y)
{
	⋯
}


class A
{
public:
	void Foo(int x, int y) { ⋯ }		// 自动地成为内联函数 
}

// 


// 头文件 
class A
{
public:
	void Foo(int x, int y)；
}

// 定义文件 
inline void A::Foo(int x, int y)
{
	⋯
}



#endif