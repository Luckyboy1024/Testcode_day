#define _CRT_SECURE_NO_WARNINGS 1

// ��ȫ�Լ���㷨

#include "test.h"

typedef int TypeData;
#define true (!0)
#define fause (0)

typedef struct Security{
	TypeData **Available;	// ��������Դ����
	TypeData **Max;	// ����������
	TypeData **Allocation; // �������
	TypeData **Need;	//�������
	int Finish;
}Security;




