#define _CRT_SECURE_NO_WARNINGS 1

#define _NUM 100

#include <stdio.h>

// ƽ����Ȩ��תʱ�䣺AQTT
// ƽ����תʱ�䣺  ATT    Average turnover time


typedef struct Database
{
	int _FT;			// ���ʱ�� finish time
	int _TT;			// ��תʱ�� turnover time
	int _QTT;			// ��Ȩ��תʱ��
}Database;

typedef struct Process 		// ����
{
	int num;
	char name[10];			// ��������
	int time_reach;			// ����ʱ��
	int time_serve;			// ����ʱ��
	Database data;
}Process;