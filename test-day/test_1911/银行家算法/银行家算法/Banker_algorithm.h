#define _CRT_SECURE_NO_WARNINGS 1

// ���м��㷨
	
#include "test.h"

typedef int TypeData;

typedef struct BANKER{
	TypeData **Available;	// ��������Դ����
	TypeData **Max;	// ����������
	TypeData **Allocation; // �������
	TypeData **Need;	//�������
	//_Bool Finish;
}Banker;

// ������֮��Ĺ�ϵ��Need[i, j] = Max[i, j] - Allocation[i, j]



