#define _CRT_SECURE_NO_WARNINGS 1
#if 1

#include <stdio.h>

int main()
{
	FILE* fp;
	char fname[50];		//�ļ��������ڴ�Լ��������50��������չ��
	int i, j, x, y, k, s, w, t, a[12][12];
	printf("\n input file name :>_ ");
	gets(fname);
	if (NULL == (fp = fopen(fname, "r")))
	{
		printf("The file was not opened\n");
		return;
	}
	x = 11;
	y = 11;
	for (i = 0; i <= y; ++i)
	{
		printf("\n    ");
		for (j = 0; j <= x; ++j)
		{
			fscanf(fp, "%d", &a[i][j]);		//���ļ������ݵ���άa����
			printf("%d ", a[i][j]);
		}
	}
	for (i = 0; i <= x; ++i)
	{
		if (0 == a[0][i])
			a[0][i] = 2;	//�ѱ��ϵ�0ת��Ϊ2
		if (0 == a[y][i])
			a[y][i] = 2;
	}
	for (i = 1; i < y; i++)
	{
		if (0 == a[i][0])
			a[i][0] = 2;
		if (0 == a[i][x])
			a[i][x] = 2;
	}
	t = x * y;
	for (k = 1; k < t; k++)
	{
		w = 0;
		for (i = 1; i < y; i++)
		{
			for (j = 1; j < x; j++)
			{
				if (((2 == a[i][j - 1]) || (2 == a[i][j + 1]) || (2 == a[i - 1][j]) || (2 == a[i + 1][j])) && (0 == a[i][j]))
				{
					a[i][j] = 2;
					w = 1;			//��0����������֮һΪ2����0ת��Ϊ2
				}
			}
		}
		if (0 == w) break;
	}
	s = 0;
	printf("\n");
	for (i = 0; i <= y; i++)
	{
		printf("\n");
		for (j = 0; j <= x; j++)
		{
			if (0 == a[i][j])
			{
				s += 1;			//ͳ�������ڡ�0������
			}
			printf("%d ", a[i][j]);		//��������ĵ�ͼ
		}
	}
	printf("\ns = %d\n", s);
	fclose(fp);
	return 0;
}

#endif

