#define _CRT_SECURE_NO_WARNINGS 1

#ifndef __SEQLIST_H__
#define __SEQLIST_H__

#include <stdio.h>
#include <assert.h>

typedef struct SeqList
{
	size_t _arrary;
	size_t _size;
	struct SeqList *p;
}SeqList;

//��ʼ��˳���
void InitSeqList(SeqList *s, size_t x);

//����˳���

//���˳���

//��ɾ�Ĳ�

//ͷ��
//β��
//����

//ͷɾ
//βɾ
//ɾ��





#endif  /__SEQLIST_H__

#if 0

// ˳���ľ�̬�洢
#define N 100
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType array[N]; // ��������
	size_t size;        // ��Ч���ݵĸ���     
}SeqList;


// ˳���Ķ�̬�洢
typedef struct SeqList
{
	SLDataType* array;  // ָ��̬���ٵ�����
	size_t size;       // ��Ч���ݸ���
	size_t capicity;   // �����ռ�Ĵ�С
}SeqList;

// ˳���Ķ�̬�洢
typedef struct SeqList
{
	SLDataType* array;  // ָ��̬���ٵ�����
	size_t size;       // ��Ч���ݸ���
	size_t capicity;   // �����ռ�Ĵ�С
}SeqList;

// ������ɾ��Ľӿ�
void SeqListInit(SeqList* psl, size_t capacity);
void SeqListDestory(SeqList* psl);

void CheckCapacity(SeqList* psl);
void SeqListPushBack(SeqList* psl, SLDataType x);
void SeqListPopBack(SeqList* psl);
void SeqListPushFront(SeqList* psl, SLDataType x);
void SeqListPopFront(SeqList* psl);

int SeqListFind(SeqList* psl, SLDataType x);
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x);
void SeqListErase(SeqList* psl, size_t pos);
void SeqListRemove(SeqList* psl, SLDataType x);
void SeqListModify(SeqList* psl, size_t pos, SLDataType x);
void SeqListPrint(SeqList* psl);

// ��չ������ʵ��
void SeqListBubbleSort(SeqList* psl);

#endif
