#define _CRT_SECURE_NO_WARNINGS 1


#include "List.h"

//��ʼ��
void InitList(plist plist)
{
	assert(plist);
	plist->data = -1;
	plist->next = NULL;
}


//�õ�һ���ڵ�
static Node *GetNode(int val)
{
	Node *pGet = (Node *)malloc(sizeof(Node));
	pGet->data = val;
	pGet->next = NULL;
	return pGet;
}

//ͷ��  plist ͷ���ĵ�ַ
void InsertHead(plist plist, int val)
{
	assert(plist);
	Node *pGet = GetNode(val);
	pGet->next = plist->next;
	plist->next = pGet;
}

//β��  
void InsertTail(plist plist, int val)
{
	assert(plist);
	Node *p = plist;		//�ȴ�ͷ��㿪ʼ
	Node *pGet = GetNode(val);
	while (NULL != p->next)
	{
		p = p->next;
	} 
	p->next = pGet;
}


//ɾ��  ������ k ���ڵ�ɾ��
void Delete(plist plist, int k)
{
	assert(plist);
	  
}


//��ӡ
void Show(plist plist)
{
	assert(plist);
	Node* p = plist->next;
	while (NULL != p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
}

//�ҵ������� k ��ָ��  �����ڵ�ָ�룬p���� q����
Node *LastKNode(plist plist, int k)
{
	assert(plist);
	if (k < 0)
	{
		return NULL;
	}
	Node* p = plist;
	Node* q = plist;
	while (0 < k-1)
	{
		if (NULL != p->next)
		{
			p = p->next;
			k--;
		}
		else
		{
			return NULL;
		}
	}
	q->next = p->next;
	while (NULL != p->next)
	{
		p = p->next;
		q = q->next;
	}
	if (NULL == p->next)
	{
		return q;
	}
}

void LastNodeValue(plist plist, int k)
{
	Node *p;
	p = LastKNode(plist, k);
	printf("%d", p->data);
}


//ͷ�巨 ����
void ReverseLink(plist plist)
{
	Node *pN = NULL;
	Node *p = plist->next;
	plist->next = NULL;
	while (NULL != p)
	{
		pN = p->next;			//�Ȱ���һ���ڵ�ĵ�ַ
		p->next = plist->next;	//
		plist->next = p;		//�ı�ͷ���->next
	}
}

//��ָ��  ����
Node *ReverseLink_3p(plist plist)
{
	//prev  ǰ����  pCur�� pCurN ���
	//rever_plist  ��ͷ���
	Node *rever_plist = NULL;
	Node *prev = plist;
	Node *pCur = plist->next;
	Node *pCurN = pCur->next;
	plist->next = NULL;
	while (NULL != pCur)
	{
		pCurN = pCur->next;
		if (NULL == pCurN)
		{
			rever_plist = pCur;
		}
		pCur->next = prev;
		pCur = plist->next;

		plist->next = ;
		pCur->next = plist;
		plist = pCur;
		//����  �ƶ�
		pCurN = pCurN->next;
		pCur = pCur->next;
		prev = prev->next;
	}

}





