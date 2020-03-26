#define _CRT_SECURE_NO_WARNINGS 1

#ifndef __LIST_H__			//��ֹ.h�ļ�����
#define __LIST_H__

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
}Node, *plist;

//��ʼ��
void InitList(plist plist);
//ͷ��
void InsertHead(plist plist, int val);
//β��
void InsertTail(plist plist, int val);
//��ӡ
void Show(plist plist);

//������λ�ò���
//ɾ��
void Delete(plist plist, int val);

//����

//�ҵ������� k ��ָ��  �����ڵ�ָ�룬p���� q����
Node *Last_K_Node(plist plist, int k);
void LastNodeValue(plist plist, int k);

//ͷ�巨 ����
void ReverseLink(plist plist);



#endif  //__LIST_H__
