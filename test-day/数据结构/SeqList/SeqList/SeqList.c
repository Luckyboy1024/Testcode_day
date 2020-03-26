#include "SeqList.h"



//��ʼ��
void SeqListInit(SeqList* sl)
{
	assert(sl);
	sl->_array = NULL;
	sl->_capacity = sl->_size = 0;
}

//���� �ͷſռ�
void SeqListDestory(SeqList* sl)
{
	if (sl->_array)
	{
		free(sl->_array);
		sl->_array = NULL;
		sl->_capacity = sl->_size = 0;
	}
}

//�������
void SeqListCheckCapacity(SeqList* sl)
{
	assert(sl);
	if (sl->_capacity == sl->_size)
	{
		size_t newCapacity = (0 == sl->_capacity ? 5 : 2 * sl->_capacity);
		//sl->_array = (DataType*)malloc(sl->_array);
		sl->_array = (DataType*)realloc(sl->_array, newCapacity*sizeof(DataType));
		assert(sl->_array);				//���ԣ�����ʧ�ܣ�ϵͳ����
		sl->_capacity = newCapacity;	//��������
	}
}


//β��
void SeqListPushBack(SeqList* sl, DataType x)
{
	assert(sl);
	SeqListCheckCapacity(sl);
	sl->_array[sl->_size] = x;
	++sl->_size;
}

//ͷ��
void SeqListPushFront(SeqList* sl, DataType x)
{

}

//����λ�ò���
void SeqListInsert(SeqList* sl, size_t pos, DataType x)
{

}

//βɾ
void SeqListPopBack(SeqList* sl)
{
	assert(sl);
	if (sl->_size > 0)
	{
		--sl->_size;
	}
}

//ͷɾ
void SeqListPopFront(SeqList* sl)
{

}

//ɾ����ǰ (pos) λ������
void SeqListErase(SeqList* sl, size_t pos)
{

}


//����
size_t SeqListFind(SeqList* sl, DataType x);

//����
size_t SeqListModify(SeqList* sl, size_t pos, DataType x);


//��ӡ
void SeqListPrint(SeqList* sl)
{
	assert(sl);
	for (size_t i = 0; i < sl->_size; ++i)
	{
		printf("%d ", sl->_array[i]);
	}
}

//����Ԫ�ظ���
size_t SeqListSize(SeqList* sl)
{

}


//���ص�ǰλ�õ�ֵ
DataType SeqListAt(SeqList* sl, size_t pos)
{

}




