#define _CRT_SECURE_NO_WARNINGS 1


#if 1

//̽�����ݺ� n (n<=6) Ԫ��
#include <stdio.h>
int main()
{
	int a1, b1, b2, n, k, m1, m, i, j, t, x, z;
	int a[20], b[20], c[20], d[20], fa[20], fb[20];
	long s1, s2, tt1[20], tt2[20], s[20];
	printf(" ���ÿ�����ĸ��� n (2<n<7)  :>_ ");
	scanf("%d", &n);
	for (a1 = 1; a1 <= 19; a1++)
	{
		c[1] = a1;
		a[1] = a1;
		for (b1 = a1 + 1; b1 <= 22; b1++)
		{
			d[1] = b1;
			b[1] = b1;
			for (b2 = b1 + 1; b2 <= 25; b2++)		//ȡ��ֵ a(1)+a(2)=b(1)+b(2)
			{
				d[2] = b2;
				b[2] = b2;
				c[2] = d[1] + d[2] - c[1];
				a[2] = c[2];
				for (k = 2; k <= n - 1; k++)
				{
					m1 = a[k] + 1;
					if (b[k] > a[k])
					{
						m1 = b[k] + 1;
					}
					for (m = m1; m <= 3 * m1; m++)			//m ��Լ����ѭ����ȡֵ
					{
						for (i = 1; i <= k; i++)
						{
							a[i] = c[i];
							b[i] = d[i];
						}
						if (0 == k % 2)		// k Ϊż����ʽ(2)��ֵ
						{
							for (i = 1; i <= k; i++)
							{
								a[k + i] = m - b[i];
								b[k + i] = m - a[i];
							}
						}
						else		//kΪ������ʽ(1)��ֵ
						{
							for (i = 1; i <= k; i++)
							{
								a[k + i] = m - a[i];
								b[k + i] = m - b[i];
							}
						}
						t = 0;
						for (i = 1; i <= 2*k; i++)
						{
							for (j = 1; j <= 2 * k; j++)
							{
								if (a[i] == b[i] && a[i] > 0)	//�Ƚ������飬��ͬ�ķ����0
								{
									a[i] = 0;
									b[j] = 0;
									t = t + 1;
									break;
								}
							}
						}
						if (t != k - 1)
							continue;
						for ()
					}
				}
			}
		}
	}
	return 0;
}

#endif

