#define _CRT_SECURE_NO_WARNINGS 1

#include <assert.h>

#include <stdio.h>

int *f1(void)
{
	int x = 10;
	return (&x);
}

int *f2(void)
{
	int *ptr;
	*ptr = 10;
	return ptr;
}
int main()
{
	int a = 0;
	return 0;
}


#if 0
int main()
{
	int i = 0;
	int sum = 0;//�������ս��
	int n = 0;
	int ret = 1;//����n�Ľ׳�
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}

int main()
{
	int *p = NULL;

	//debug����¶���ʧ�ܣ�������򽫲��ᱻִ��
	assert(p != NULL);
	//release�汾�£����Ի�ʧЧ����������if()�ж�
	//һ������£����ǻ���ʹ��assert()��if()��ʹ����release���Ҳ���ֶ�����
	if (p == NULL)
	{
		//printf("p == NULL\n");
		return;
	}
	return 0;
}

#endif