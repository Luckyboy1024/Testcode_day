#define _CRT_SECURE_NO_WARNINGS 1




#include <stdio.h>

int fun(int x, int a[][4])
{
	int count = 0;
	while (x)
	{
		count++;
		x = x & (x - 1);
	}
	return count;
}

//111 1110 0011
//111 1110 


int main()
{
	printf("%x\n", 2048-2019);
	return 0;
}
#if 0

int main()
{
	int a, b, c, g, i, j, n, s, h[10];
	long m, max, d, t;
	printf("������λ�� n (n>1): ");
	scanf("%d", &n);
	s = 0;
	t = 1;
	a = n / 2;
	for ()
	return 0;
}

class A
{��
	A(int x);  // A�Ĺ��캯��
};
class B : public A
{��
	B(int x, int y);// B�Ĺ��캯��
};
B::B(int x, int y)
	: A(x)		// �ڳ�ʼ���������A�Ĺ��캯��
{
	��
}

B::B(const A &a)
{
	m_a = a;
	��
}

class F 
{ 
public: 
	F(int x, int y);		// ���캯�� 
private: 
	int m_x, m_y; 
	int m_i, m_j; 
}

F::F(int x, int y) 
{  
	m_x = x; 
	m_y = y; 
	m_i = 0;  
	m_j = 0; 
}
F::F(int x, int y) 
{  
	m_x = x; 
	m_y = y; 
	m_i = 0;  
	m_j = 0; 
} 

F::F(int x, int y) 
: m_x(x), m_y(y)  
{  
	m_i = 0;  
	m_j = 0; 
}

class A 
{
	�� 
	A(void);			// �޲������캯�� 
	A(const A &other);	// �������캯�� 
	A & operate = (const A &other); // ��ֵ���� 
}��
class B
{
public:
	B(const A &a); // B�Ĺ��캯�� 
private:
	A  m_a;// ��Ա���� 
};

class String

{
public:
	String(const char *str = NULL); // ��ͨ���캯�� 
	String(const String &other);	// �������캯�� 
	~String(void);					// �������� 
	String & operate = (const String &other); // ��ֵ���� 
private:
	char *m_data;					// ���ڱ����ַ��� 
};

#endif