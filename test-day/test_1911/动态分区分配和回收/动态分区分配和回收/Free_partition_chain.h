#define _CRT_SECURE_NO_WARNINGS 1

// ���з�����
// ��ÿһ����������ʼ�����������ڿ��Ʒ�������Ϣ����ǰָ�룬�ڷ���β������һ�����ָ�룬�γ�˫������

typedef struct FPC{
	struct FPC* _front;		// ��ǰָ��
	int data_size;			// �ռ��С
	struct FPC* _back;		// ���ָ��
}FPC;