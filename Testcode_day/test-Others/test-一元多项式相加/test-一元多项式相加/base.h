#define _CRT_SECURE_NO_WARNINGS 1

#ifndef __BASE_H__
#define __BASE_H__
//base.h

//----���õ�ͷ�ļ�--------
#include "main.h"

//-----���õĳ���������----------
#define   OK                    1
#define   ERROR                 0
#define   OVERFLOW             -2
#define   TRUE                  1
#define   FALSE                 0

typedef   int   Status;

//---------һԪ����ʽ�洢�ṹ��ʾ----------
typedef struct{//��ı�ʾ������ʽ������ΪLinkList������Ԫ��
	float coef;//ϵ��
	int expn;//ָ��
}term, ElemType;//�������ͣ�term���ڱ�ADT��ElemTypeΪLinkList�����ݶ�����


#endif	//__BASE_H__