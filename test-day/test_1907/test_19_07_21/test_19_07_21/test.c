#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>


void menu()
{
	printf("\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t��******************************��\n");
	printf("\t\t\t\t\t��****                      ****��\n");
	printf("\t\t\t\t\t��****      1.  Play        ****��\n");
	printf("\t\t\t\t\t��****      0.  Exit        ****��\n");
	printf("\t\t\t\t\t��****                      ****��\n");
	printf("\t\t\t\t\t��******************************��\n");
	printf("\n");
	printf("\t\t\t\t\t��ѡ��:>_ ");
}
void game()
{
	//���������
	//ʱ���
	int ret = 0;
	int guess = 0;
	srand((unsigned int)time(NULL));
	ret = rand() % 100 + 1;
	//printf("ret = %d\n", ret);
	//������
	while (1)                //����ѭ����ֱ���¶�Ϊֹ
	{
		printf("�������:>_ ");
		scanf("%d", &guess);
		while ('\n' != getchar());        //��������
		if (guess > ret)
		{
			printf("�´���\n\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n\n");
		}
		else
		{
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t��ϲ�㣬�¶���\n");
			Sleep(1000);
			system("cls");
			break;
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("<�������   ����������>\n\n");
			//getchar(input);
		}
	} while (input);
	system("pause");
	return 0;
}


#if 0
#include <stdio.h>
#include <stdlib.h>

int main()
{
	return 0;
}

#endif