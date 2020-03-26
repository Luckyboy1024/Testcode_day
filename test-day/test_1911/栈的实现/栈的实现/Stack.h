#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


typedef struct node{
	int data;//�˴��������Ҵ洢int�͵�����
	struct node *pNext;//����ָ����һ�����
}NODE, *PNODE;

typedef struct stack{
	PNODE Top;//ָ��ջ����ָ��
	PNODE Bottom;//ָ��ջ�׵�ָ��
}STACK, *PSTACK;


void initStack(PSTACK pS);
void pushStack(PSTACK pS);
void popStack(PSTACK pS);
void traversalStack(PSTACK pS);


