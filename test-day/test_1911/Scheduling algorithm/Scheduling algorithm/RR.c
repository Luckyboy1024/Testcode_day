
// ����ʵ�֣�ʱ��Ƭ��ת
// ʱ��Ƭ��ת�㷨

#include "test.h"

void pop_head(int *arr, int len)
{
	for (int i = 0; i < len-1; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[len - 1] = 0;
}


void updata(int *arr, int len)
{
	int tmp = arr[0];
	for (int i = 1; i < len; i++)
	{
		arr[i - 1] = arr[i];
	}
	arr[len-1] = tmp;
}

void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort(int* AT, int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (AT[j - 1]>AT[j])
			{
				Swap(&AT[j - 1], &AT[j]);
				Swap(&a[j - 1], &a[j]);
			}
		}
	}
}

void _RR(int** arr, double** data, int n)
{
	int now = 0;
	int slot;			// �������ʱ��Ƭ
	int AT[_NUM];		// ����ʱ��
	int at[_NUM];		// 
	int ST[_NUM];		// ����ʱ��
	int st[_NUM];		// ʣ�����ʱ��
	int TT[_NUM];		// ��תʱ��
	int FT[_NUM];		// ���ʱ��
	int a[_NUM] = { 0 };		// ����ʱ�䣺�������У����̺ţ�
	int arri = 0;		// ����������ߵ��ڼ�������
	int b[_NUM] = { -1 };		// �ȴ����У����̺ţ�
	int tail = 0;		// �ȴ����ж�β�±�


	printf("����ʱ��Ƭ :>_ ");
	scanf("%d", &slot);
	
	for (int i = 0; i < n; i++)
	{
		at[i] = AT[i] = arr[i][0];
		ST[i] = st[i] = arr[i][1];
		a[i] = i;
	}
	sort(at, a, n);
	
	// ��������е�һ�����̽���ȴ�����
	b[0] = a[0];		//b[0]  =  a[arri];
	now = AT[b[0]];
	//�´δ� a[1] ��ʼ
	
	while ((tail > -1)&&(arri <= n))		//while(arri = n)
	{
		// �ȴ������е�һ�����̷�һ��ʱ��Ƭ
		/*st[b[0]] -= slot;
		now += slot;
	*/
		// ����ʱ�Ƿ��н��̼�������
		while(AT[a[arri+1]] > now || (arri == n))	//û��
		{
			if (!((st[b[0]] - slot) > 0))
			{
				now += st[b[0]];
				st[b[0]] = 0;
				data[b[0]][0] = (double)now;
				data[b[0]][1] = (double)fabs(now - ST[b[0]]);
				data[b[0]][2] = (double)(data[b[0]][1]) / (double)(ST[b[0]]);
				pop_head(b, tail+1);
				tail--;		
			}
			else
			{
				st[b[0]] -= slot;
				now += slot;
			}
			if (arri == n)
			{
				return 0;
			}
		}
		if (arri <= n)
		{
			b[++tail] = a[++arri];		//�����β
		}
		else
		{
			return 0;
		}
		if (-1 == tail)
		{
			return 0;
		}

		// ʱ��Ƭ�������ȴ����и���
		updata(b, tail+1);
	}



	printf("hehe");
	
//	data[i][1] = fabs(data[i][0] - (double)arr[i][0]);		// (FT,AT) ==>>  ��תʱ��
//	data[i][2] = data[i][1] / (double)arr[i][1];			// (TT,ST) ==>>  ��Ȩ��תʱ��
}





#if 0

typedef struct ProcessNode{		//���̽ڵ�
	double _AT;	//����ʱ�� AT
	double _ST; //����ʱ�� ST
	double _st; //ʣ�����ʱ��
	double _TT; //��תʱ�� TT
	double _FT; //���ʱ�� FT
}Process, *PNode;


typedef struct R_queue{
	struct R_queue *front;
	int** data;
	struct R_queue *next;
}RQ;

void push(RQ* head, int** data)
{

}

void pop()
{

}

RQ* _head()
{
	RQ head;
	head.data = 0;
	head.front = NULL;
	head.next = NULL;
	return &head;
}












#endif