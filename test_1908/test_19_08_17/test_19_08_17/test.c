#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int fun(int x, int a[][4])
{
	int count = 0;
	while (x)
	{
		count++;
		x = x & (x - 1);
	}
	return count;
}

//111 1110 0011
//111 1110 


int main()
{
	printf("%x\n", 2048-2019);
	return 0;
}
#if 0

int main()
{
	int a, b, c, g, i, j, n, s, h[10];
	long m, max, d, t;
	printf("ÇëÊäÈëÎ»Êý n (n>1): ");
	scanf("%d", &n);
	s = 0;
	t = 1;
	a = n / 2;
	for ()
	return 0;
}

#endif