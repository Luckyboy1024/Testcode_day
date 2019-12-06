#define _CRT_SECURE_NO_WARNINGS 1


#include "LinkList.h"


//----------�������ľ���ʵ�ִ���-----------
Status InitList(LinkList *L){
	// ����һ���յ���������
	Link p;
	p = (Link)malloc(sizeof(LNode)); // ����ͷ���
	if (p)
	{
		p->next = NULL;
		(*L).head = (*L).tail = p;
		(*L).len = 0;
		return OK;
	}
	else
		return ERROR;//�ڴ���䲻��
}//InitList

Status MakeNode(Link *p, ElemType e){
	// ������pָ���ֵΪe�Ľ�㣬������OK��������ʧ�ܡ��򷵻�ERROR
	*p = (Link)malloc(sizeof(LNode));
	if (!*p)
		return ERROR;
	(*p)->data = e;
	return OK;
}//MakeNode

void FreeNode(Link *p){
	// �ͷ�p��ָ���
	free(*p);
	*p = NULL;
}//FreeNode

Status InsFirst(LinkList *L, Link h, Link s){
	// hָ��L��һ����㣬��h����ͷ��㣬��s��ָ�������ڵ�һ�����֮ǰ
	s->next = h->next;
	h->next = s;
	if (h == (*L).tail) // hָ��β���
		(*L).tail = h->next; // �޸�βָ��
	(*L).len++;
	return OK;
}//InsFirst

Position GetHead(LinkList L){
	// ������������L��ͷ����λ��
	return L.head;
}//GetHead

Status SetCurElem(Link p, ElemType e){
	// ��֪pָ�����������е�һ����㣬��e����p��ָ���������Ԫ�ص�ֵ
	p->data = e;
	return OK;
}//SetCurElem

Status LocateElemP(LinkList L, ElemType e, Position *q, int(*compare)(ElemType, ElemType)){
	// ����������L�д�����e�����ж�����compare()ȡֵΪ0��Ԫ�أ���qָʾL��
	// ��һ��ֵΪe�Ľ���λ�ã�������TRUE������qָʾ��һ����e�����ж�����
	// compare()ȡֵ>0��Ԫ�ص�ǰ����λ�á�������FALSE��������һԪ����ʽ��
	Link p = L.head, pp;
	do
	{
		pp = p;
		p = p->next;
	} while (p && (compare(p->data, e)<0)); // û����β��p->data.expn<e.expn
	if (!p || compare(p->data, e)>0) // ����β��compare(p->data,e)>0
	{
		*q = pp;
		return FALSE;
	}
	else // �ҵ�
	{// û����β��p->data.expn=e.expn
		*q = p;
		return TRUE;
	}
}//LocateElemP

Position NextPos(Link p){
	// ��֪pָ����������L�е�һ����㣬����p��ָ����ֱ�Ӻ�̵�λ��
	//  ���޺�̣��򷵻�NULL
	return p->next;
}//NextPos

ElemType GetCurElem(Link p){
	// ��֪pָ�����������е�һ����㣬����p��ָ���������Ԫ�ص�ֵ
	return p->data;
}//GetCurElem

Status DelFirst(LinkList *L, Link h, Link *q){ // �β�����L,��Ϊ���޸�L
	// hָ��L��һ����㣬��h����ͷ��㣬ɾ�������еĵ�һ����㲢��q���ء�
	// ������Ϊ��(hָ��β���)��q=NULL������FALSE
	*q = h->next;
	if (*q) // ����ǿ�
	{
		h->next = (*q)->next;
		if (!h->next) // ɾ��β���
			(*L).tail = h; // �޸�βָ��
		(*L).len--;
		return OK;
	}
	else
		return FALSE; // �����
}//DelFirst

Status ListEmpty(LinkList L){
	// ����������LΪ�ձ��򷵻�TRUE�����򷵻�FALSE
	if (L.len)
		return FALSE;
	else
		return TRUE;
}//ListEmpty

Status Append(LinkList *L, Link s){
	// ��ָ��s(s->dataΪ��һ������Ԫ��)��ָ(�˴���ָ������,��NULL��β)��
	//  һ�������������������L�����һ�����֮��,���ı�����L��βָ��ָ����
	//  ��β���
	int i = 1;
	(*L).tail->next = s;
	while (s->next)
	{
		s = s->next;
		i++;
	}
	(*L).tail = s;
	(*L).len += i;
	return OK;
}//Append

Status ListTraverse(LinkList L, void(*visit)(ElemType)){
	// ���ζ�L��ÿ������Ԫ�ص��ú���visit()��һ��visit()ʧ�ܣ������ʧ��
	Link p = L.head->next;
	int j;
	for (j = 1; j <= L.len; j++)
	{
		visit(p->data);
		p = p->next;
	}
	cout << "\b "; //�˸�ÿ���������ʽ��ɾ������������"+"
	if (L.len == 0)
		cout << "0";
	return OK;
}//ListTraverse

void visit(ElemType e){
	if (e.coef > 0 && e.coef != 1 && e.expn != 0)
	{
		if (e.expn == 1)
			cout << e.coef << "x+";
		else if (e.expn > 0)
			cout << e.coef << "x^" << e.expn << "+";
		else
			cout << e.coef << "x^(" << e.expn << ")+";
	}
	else if (e.coef < 0 && e.expn != 0)
	{
		if (e.expn == 1)
			cout << "(" << e.coef << ")x+";
		else if (e.expn > 0)
			cout << "(" << e.coef << ")x^" << e.expn << "+";
		else
			cout << "(" << e.coef << ")x^(" << e.expn << ")+";
	}
	else if (e.coef == 1 && e.expn != 0)
	{
		if (e.expn == 1)
			cout << "x+";
		else if (e.expn > 0)
			cout << "x^" << e.expn << "+";
		else
			cout << "x^(" << e.expn << ")+";
	}
	else if (e.expn == 0 && e.coef != 0)
		cout << e.coef << "+";
	else
		cout << "";//�����û����������ϵ��Ϊ0�����
}//visit

