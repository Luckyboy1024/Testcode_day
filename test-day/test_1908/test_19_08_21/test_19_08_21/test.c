#define _CRT_SECURE_NO_WARNINGS 1

// String����ͨ���캯�� 
String::String(const char *str)
{
	if (str == NULL)
	{
		m_data = new char[1];
		*m_data = '\0';
	}
	else
	{
		int length = strlen(str);
		m_data = new char[length + 1];
		strcpy(m_data, str);
	}
}

// String���������� 

String::~String(void)
{
	delete[] m_data;
	// ����m_data���ڲ��������ͣ�Ҳ����д��  delete m_data; 
}

String  a(��hello��);
String  b(��world��);
String  c = a;		// �����˿������캯�������д�� c(a); 
	c = b;			// �����˸�ֵ����  

	�����е��������ķ��ϲ�˸�д��String c(a) �������ڵ��ĸ���䡣
}


// �������캯��
String::String(const String &other)
{
	// �������other��˽�г�Աm_data
	int length = strlen(other.m_data);
	m_data = new char[length + 1];
	strcpy(m_data, other.m_data);
}

// ��ֵ����
String & String::operate = (const String &other)
{
	// (1) ����Ը�ֵ 
	if (this == &other)
		return *this;
	// (2) �ͷ�ԭ�е��ڴ���Դ 
	delete[] m_data;

	// ��3�������µ��ڴ���Դ������������ 
	int length = strlen(other.m_data);
	m_data = new char[length + 1];
	strcpy(m_data, other.m_data);
	// ��4�����ر���������� 
	return *this;
}

class A
{
	��
private:
	A(const A &a);	// ˽�еĿ������캯��
	A & operate = (const A &a); // ˽�еĸ�ֵ����
};

���������ͼ��д���³���

A b(a);		// ������˽�еĿ������캯��
b = a;		// ������˽�еĸ�ֵ����  

}


{
public:

	virtual ~Base() { cout << "~Base" << endl; }
};

class Derived : public Base
{
public:

	virtual ~Derived() { cout << "~Derived" << endl; }
};

#include <iostream.h> 
class Base
{
public:
	virtual ~Base() { cout << "~Base" << endl; }
};
class Derived : public Base
{
public:
	virtual ~Derived() { cout << "~Derived" << endl; }
};
void main(void)
{
	Base * pB = new Derived;  // upcast 
	delete pB;
}


class Base
{
public:
	��
	Base & operate = (const Base &other); // ��Base�ĸ�ֵ���� 
private:
	int  m_i, m_j, m_k;
};

class Derived : public Base
{
public:
	��
	Derived & operate = (const Derived &other);// ��Derived�ĸ�ֵ���� 
private:
	int  m_x, m_y, m_z;
};


Derived & Derived::operate = (const Derived &other)
{
	//��1������Ը�ֵ
	if (this == &other)
		return *this;

	//��2���Ի�������ݳ�Ա���¸�ֵ 
	Base::operate = (other);	// ��Ϊ����ֱ�Ӳ���˽�����ݳ�Ա 

	//��3��������������ݳ�Ա��ֵ 
	m_x = other.m_x;
	m_y = other.m_y;
	m_z = other.m_z;

	//��4�����ر���������� 
return *this;

}
