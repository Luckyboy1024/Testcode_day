#define _CRT_SECURE_NO_WARNINGS 1

#ifndef __LINKLIST_H__
#define __LINKLIST_H__

#include "base.h"
//LinkList.h
//��ʽ��Ļ�������ʵ��

//----------����Ĵ洢�ṹ��ʾ------------
typedef struct LNode{//�ڵ�����
	ElemType  data;//�����ʾ��ÿһ���ָ����ϵ��
	struct LNode *next;
}*Link, *Position;
typedef struct{//��������
	Link head, tail;//�ֱ�ָ�����������е�ͷ�������һ�����
	int len;//ָʾ��������������Ԫ�صĸ���
}LinkList;//ÿһ�����һ���б�


Status InitList(LinkList *L);
Status MakeNode(Link *p, ElemType e);
void FreeNode(Link *p);
Status InsFirst(LinkList *L, Link h, Link s);
Position GetHead(LinkList L);
Status SetCurElem(Link p, ElemType e);
Status LocateElemP(LinkList L, ElemType e, Position *q, int(*compare)(ElemType, ElemType));
Position NextPos(Link p);
ElemType GetCurElem(Link p);
Status DelFirst(LinkList *L, Link h, Link *q);
Status ListEmpty(LinkList L);
Status Append(LinkList *L, Link s);
Status ListTraverse(LinkList L, void(*visit)(ElemType));

void visit(ElemType e);

#endif	//__LINKLIST_H__
