#define _CRT_SECURE_NO_WARNINGS 1

#include "Stack.h"


void initStack(PSTACK pS)
{
	PNODE pN;
	pS->Top = (PNODE)malloc(sizeof(NODE));
	pS->Bottom = pS->Top;
	pN = pS->Top;
	pN->pNext = NULL;
}


void pushStack(PSTACK pS){
	PNODE pN;//���ڽ���PSTACK(pS->Top)��ָ��
	int val;
	pN = (PNODE)malloc(sizeof(NODE));//�����ɵĽ��
	pN->pNext = pS->Top;
	pS->Top = pN;
	printf("please enter the data:");
	scanf("%d", &val);
	pS->Top->data = val;//Ҳ������pN->data=val;
}

void popStack(PSTACK pS){
	PNODE pN;
	int val;
	val = pS->Top->data;
	printf("The data coming out of the stack is %d", val);
	pN = pS->Top;
	pS->Top = pS->Top->pNext;
	free(pN);
}

void traversalStack(PSTACK pS){
	PNODE pN;
	pN = pS->Top;//�������ָ�����ڴ洢Topָ��
	while (pN->pNext){
		printf("%d\n", pN->data);
		pN->pNext = pN->pNext->pNext;
	}
}



