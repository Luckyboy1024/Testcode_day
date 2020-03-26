#define _CRT_SECURE_NO_WARNINGS 1

#ifndef __SEQLIST_H__
#define __SEQLIST_H__

#include <stdio.h>
#include <assert.h>
#include <malloc.h>


typedef int DataType;

/*
#define N 100	//˳�����ʼ��С����̬����
typedef struct SeqList{ DataType _array[N]; }SeqList;
*/

typedef struct SeqList
{
	DataType* _array;
	size_t _size;			//ʵ�ʴ�ŵ�Ԫ�ظ���
	size_t _capacity;		//���ٿռ�Ĵ�С
}SeqList;

void SeqListInit(SeqList* sl);			//��ʼ��
void SeqListDestory(SeqList* sl);		//���� �ͷſռ�
void SeqListCheckCapacity(SeqList* sl);	//�������

//���� ����
void SeqListPushBack(SeqList* sl, DataType x);		//β��
void SeqListPushFront(SeqList* sl, DataType x);		//ͷ��
void SeqListInsert(SeqList* sl, size_t pos, DataType x);		//����λ�ã�posǰ�棩����

//ɾ��
void SeqListPopBack(SeqList* sl);					//βɾ
void SeqListPopFront(SeqList* sl);					//ͷɾ
void SeqListErase(SeqList* sl, size_t pos);			//ɾ����ǰ (pos) λ������

//����
size_t SeqListFind(SeqList* sl, DataType x);		

//����
size_t SeqListModify(SeqList* sl, size_t pos, DataType x);

//��ӡ
void SeqListPrint(SeqList* sl);

//����Ԫ�ظ���
size_t SeqListSize(SeqList* sl);

//���ص�ǰλ�õ�ֵ
DataType SeqListAt(SeqList* sl, size_t pos);

#endif  //__SEQLIST_H__