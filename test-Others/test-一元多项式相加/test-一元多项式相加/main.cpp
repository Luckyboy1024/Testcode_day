#define _CRT_SECURE_NO_WARNINGS 1

#include "base.h"
#include "LinkList.h"
#include "Polynomial.h"
#include "main.h"

#if 0

int main()
{
	polynomial A, B;
	cout << "�������һ������ʽ������Ϊ��";
	int length; //һԪ����ʽ����
	cin >> length;
	CreatPolyn(A, length);
	//��ʾA����
	cout << "PA(x) = ";
	PrintPolyn(A);//��ӡһԪ����ʽ
	cout << endl;
	//����B
	cout << "������ڶ�������ʽ������Ϊ��";
	cin >> length;
	CreatPolyn(B, length);
	//���B
	cout << "PB(x) = ";
	PrintPolyn(B);
	cout << endl;
	//������������ɹ�
	//�������
	AddPolyn(A, B);//һԪ����ʽ���
	//��ʱ��A�Ǻϲ���Ľ��
	cout << "PA(x)+PB(x) = ";
	PrintPolyn(A);
	cout << endl;
	cout << "һԪ����ʽ�ĳ��ȣ�" << PolynLength(A) << endl;
	DestroyPolyn(A);
	return 0;
}

#endif