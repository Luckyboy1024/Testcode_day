#define _CRT_SECURE_NO_WARNINGS 1

#include "Polynomial.h"

Status Remove_Polyn(LinkList *L, Link q){
	//�������ָ��Ϊ0��ɾ�������е���
	Link  h;
	h = L->head;
	while (h->next != q)
	{
		h = h->next;
	}
	//�ҵ���
	if (q == L->tail)
	{//ɾ��������Ǳ�β���ı��β
		L->tail = h;
	}
	h->next = q->next;
	free(q);
	L->len--;
	return OK;
}//Remove_Polyn

int cmp(term a, term b){// CreatPolyn()��ʵ��
	// ��a��ָ��ֵ<��=��>b��ָ��ֵ���ֱ𷵻�-1��0��+1
	if (a.expn == b.expn)
		return 0;
	else if (a.expn > b.expn)
		return 1;
	else
		return -1;
}//cmp

void CreatPolyn(polynomial &p, int m){
	//����m���ϵ����ָ����������ʾһԪ����ʽ����������P
	InitList(&p);//��ʼ��-����ʽ����
	Link h = GetHead(p);//����ͷ��������Ԫ��
	ElemType e;//ͷ�������
	Position q, s;
	e.coef = 0.0; e.expn = -1; SetCurElem(h, e);//����ͷ����Ԫ��
	for (int i = 1; i <= m; ++i)//��������m��������
	{
		cout << "��" << i << "���ϵ��:";
		cin >> e.coef;
		cout << "��" << i << "���ָ��:";
		cin >> e.expn;
		if (!LocateElemP(p, e, &q, cmp))//��ǰ�����в����ڸ�ָ����
		{
			if (e.coef != 0)//�����ڲŲ���
			if (MakeNode(&s, e))
				InsFirst(&p, q, s);//���ɽ�㲢��������
		}
		else//��ǰ�����д��ڸ�ָ����,������ϵ��
		{
			q->data.coef = q->data.coef + e.coef;
			//�������������0����ɾ����
			if (q->data.coef == 0)
				Remove_Polyn(&p, q);//ɾ������ǰ�ڵ�
		}
	}
}//CreatPolyn

void DestroyPolyn(polynomial &p){
	//����һԪ����ʽ
	Link h, s;
	h = p.head;
	while (h){
		s = h;
		h = h->next;
		FreeNode(&s);
	}
	p.head = p.tail = NULL;
}//DestroyPolyn


int PolynLength(polynomial p){
	//����һԪ����ʽ�ĳ���
	return p.len;
}//PolynLength

void PrintPolyn(polynomial p){
	//��ӡ��һԪ����ʽ
	ListTraverse(p, visit);
}
void AddPolyn(polynomial &Pa, polynomial &Pb){
	//����ʽ�ӷ�:Pa = Pa+Pb,������������ʽ�Ľ�㹹�ɡ��Ͷ���ʽ��
	Position ha, hb, qa, qb;
	term a, b;
	ha = GetHead(Pa); hb = GetHead(Pb);//ha��hb�ֱ�ָ��Pa��Pb��ͷ���
	qa = NextPos(ha); qb = NextPos(hb);//qa��qb�ֱ�ָ��Pa��Pb�еĵ�ǰ���
	//��ʱqa��qb����ָ�����ʽ��һ��
	while (qa && qb)//qa��qb�ǿ�
	{
		a = GetCurElem(qa);
		b = GetCurElem(qb); // a��bΪ�����е�ǰ�Ƚ�Ԫ��
		float sum;
		switch (cmp(a, b))//�Ƚ����ߵ�ָ��ֵ
		{
		case -1://����ʽ��PA�еĽ���ָ��С
			ha = qa;
			qa = NextPos(ha);
			break;
		case 0://����ָ��ֵ���
			sum = a.coef + b.coef;
			if (sum != 0)
			{
				//�޸�paָ��ĸý���ϵ��ֵ
				qa->data.coef = sum;
				//��һ��
				ha = qa;
			}
			else
			{
				//ɾ�����
				DelFirst(&Pa, ha, &qa);
				FreeNode(&qa);
			}
			DelFirst(&Pb, hb, &qb);//Ҳɾ����qb�Ľ��
			FreeNode(&qb);//�ͷ�qb�Ŀռ�
			//�������ƶ�һλ
			qb = NextPos(hb);
			qa = NextPos(ha);
			break;
		case 1://����ʽPB�еĵ�ǰ���ָ��ֵС
			DelFirst(&Pb, hb, &qb);//�ѵ�ǰ����PB��ɾ��������qbָ��ǰ������Բ���
			InsFirst(&Pa, ha, qb);//������haǰ
			qb = NextPos(hb);
			qa = NextPos(ha);
			break;
		}//switch
	}//while
	if (!ListEmpty(Pb))
		Append(&Pa, qb);//����Pb��ʣ����
	FreeNode(&hb);//�ͷ�Pb��ͷ���
}//AddPolyn
