#define _CRT_SECURE_NO_WARNINGS 1

#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "test.h"

typedef Process* Data_Q;

typedef struct QueueNode{
	Data_Q _data;
	struct QueueNode* _next;
}QueueNode, *QNode;

typedef struct Queue{
	QNode _head;		// ��ͷָ��
	QNode _tail;		// ��βָ��
}Queue;

void QueueInit(Queue* q);
void QueuePush(Queue* q, Data_Q x);
void QueuePop(Queue* q);
int QueueSize(Queue* q);
int QueueEmpty(Queue* q);


#endif //__QUEUE_H__