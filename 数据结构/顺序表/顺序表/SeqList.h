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

//初始化顺序表
void InitSeqList(SeqList *s, size_t x);

//销毁顺序表

//清空顺序表

//增删改查

//头插
//尾插
//插入

//头删
//尾删
//删除





#endif  /__SEQLIST_H__


