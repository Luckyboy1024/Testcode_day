#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <queue>
#include <cstdint>
using namespace std;

#define _G 2;		//���� G

typedef struct ListNode{

}LN;


void input()
{
	uint64_t input_menu = 0;
	uint64_t input_choose = 0;
	cout << "*****************************" << endl;
	cout << "**  ��̬�����ڴ��������� **" << endl;
	cout << "*****************************" << endl;
	do{
		cout << " 1. �ڴ����" << endl;
		cout << " 2. �ڴ����" << endl;
		cout << " 0. �˳�����" << endl;
		cout << "input :>_ ";
		cin >> input_menu;
		if (0 == input_menu)
		{
			// �˳�;
		}
		else if (1 == input_menu)
		{
			do{
				cout << " 1. �״���Ӧ�㷨" << endl;
				cout << " 2. ѭ���״���Ӧ" << endl;
				cout << " 3. �����Ӧ�㷨" << endl;
				cout << " 4. ���Ӧ�㷨" << endl;
				cout << " 5. �鿴��̬����" << endl;
				cout << " 0. ������һ�˵�" << endl;
				cout << "input :>_ ";
				cin >> input_choose;
				if (0 == input_choose)
				{
					// ������һ�˵�;
				}
				else if (1 == input_choose)
				{

				}
				else if (2 == input_choose)
				{

				}
				else if (3 == input_choose)
				{

				}
				else if (4 == input_choose)
				{

				}
				else if (5 == input_choose)
				{
					Print();
				}
			} while (input_choose);
		}
		else if (2 == input_menu)
		{

		}
	} while (input_menu);

}

void start()
{
	input();
}

int main()
{
	start();
	return 0;
}
