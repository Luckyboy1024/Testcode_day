#define _CRT_SECURE_NO_WARNINGS 1

#if 0

#include <stdio.h>
void practice(int, int, int);    //���ú�������
int i, n, probo(int, int, int);

void practice(int a, int bv, int cv) //ģ��ʵʩ����
{
	int b = 0, c = 0;
	printf("ƽ�־Ƶķַ� :>_ \n");
	printf("��ƿ%d �ձ�%d �ձ�%d\n", a, bv, cv);
	printf("%5d%5d%5d\n", a, b, c);
	while (!(a == i || b == i || c == i))
	{
		if (!(b))
		{
			a -= bv;
			b = bv;
		}
		else if (c == cv)
		{
			a += cv;
			c = 0;
		}
		else if (b > cv - c)
		{
			b -= (cv - c);
			c = cv;
		}
		else
		{
			c += b;
			b = 0;
		}
		printf("%5d%5d%5d\n", a, b, c);
	}
	printf(" ƽ�־ƹ��ֵ�%d�Ρ�\n", n);
}

int probo(int a, int bv, int cv)		// ���麯��
{
	int n = 0, b = 0, c = 0;
	while (!(a == i || b == i || c == i))
	{
		if (!b)
		{
			if (a < bv)
			{
				n = -1;
				break;
			}
			else
			{
				a -= bv;
				b = bv;
			}
		}
		else if (c == cv)
		{
			a += cv;
			c = 0;
		}
		else if (b > cv - c)
		{
			b -= (cv - c);
			c = cv;
		}
		else
		{
			c += b;
			b = 0;
		}
		n++;
	}
	return n;
}

int main()
{
	int a, bv, cv, m1, m2;
	printf(" �������������ż����:>_ ");
	scanf("%d", &a);
	printf(" ���ձ����� bv,cv �ֱ�Ϊ :>_  ");
	scanf("%d%d", &bv, &cv);
	i = a / 2;
	if (bv + cv < i)
	{
		printf(" �ձ�����̫С���޷�ƽ��!\n");
		return 0;
	}
	m1 = probo(a, bv, cv);
	m2 = probo(a, cv, bv);
	if (m1 < 0 && m2 < 0)
	{
		printf(" �޷�ƽ��!\n");
		return 0;
	}
	if (m1 > 0 && (m2 < 0 || m1 <= m2))
	{
		n = m1;
		practice(a, bv, cv);
	}
	else
	{
		n = m2;
		practice(a, cv, bv);
	}
	return 0;
}


#endif


#if 0
// ̽�� 4 λ���ڵ���������
#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, m, s, t, s1;
	m = 0;
	for (i = 1; i <= 9999; i++)
	{
		s = 1;
		t = (int)sqrt(i);
		for (j = 2; j <= t; j++)
		{
			if (0 == i%j)
			{
				s = s + j + i / j;
			}
		}
		if (i == t*t)
		{
			s -= t;		// �� i ��������֮�� s
		}
		if (i < s)		// �涨 i<s,�����ظ�
		{
			s1 = 1;
			t = (int)sqrt(s);
			for (j = 2; j <= t; j++)
			{
				if (0 == s%j)
				{
					s1 = s1 + j + s / j;
				}
			}
			if (s == t*t)
			{
				s1 -= t;			// �� s ��������֮�� s1
			}
			if (s1 == i)			// �����б�
			{
				m++;
				printf(" �������� %d :>_ %d,%d\n", m, i, s);
			}
		}
	}
	printf(" 4 λ���ڵ��������Թ����� %d �顣\n", m);
	return 0;
}

#endif

#if 0
// ���� n ����������
#include <stdio.h>
#include <math.h>
int main()
{
	int c, k, n;
	long i, j, t, s[100];
	printf(" ���� n ������������������ n :>_ ");
	scanf("%d", &n);
	i = 10;
	while (1)
	{
		i++;
		s[0] = i;
		s[n] = i + 1;		//��ʼ�� s[0] != s[n]
		for (c = 0, k = 1; k <= n; k++)
		{
			s[k] = 1;
			t = (int)sqrt(s[k - 1]);
			for (j = 2; j <= t; j++)		// �� s[k-1]������֮��
			{
				if (0 == s[k - 1] % j)
				{
					s[k] = s[k] + j + s[k - 1] / j;
				}
			}
			if (s[k - 1] == t*t)
			{
				s[k] -= t;
			}
			for (j = 0; j <= k - 1; j++)
			{
				if (s[k] == s[j])
				{
					c = 1;
					break;
				}
			}
			if (1 == c)
			{
				break;
			}
		}
		if (s[0] == s[n])			//���� n ����β��ȣ������
		{
			printf(" ������ %d ���������� :>_ ", n);
			for (k = 0; k <= n - 1; k++)
			{
				printf(" %ld", s[k]);
			}
			printf("\n");
			return 0;
		}
		if (i > 1000000000)
		{
			printf(" ��δ������ %d ������������\n");
			return 0;
		}
	}
	return 0;
}
#endif

#if 0
// ˫�� 3 Ԫ 2 ��̽��
#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, d, e, f, x, n;
	printf("���������� n :>_ ");
	scanf("%d", &n);
	x = 0;
	for (a = 1; a <= (n - 3) / 3; a++)		// ����ö��ѭ��
	{
		for (b = a + 1; b <= (n - a - 1) / 2; b++)
		{
			for (d = a + 1; d <= (n - 3) / 3; d++)
			{
				for (e = d + 1; e <= (n - d - 1) / 2; e++)
				{
					c = n - a - b;
					f = n - d - e;		// ȷ������͵��� n
					if (a*b*c*(e*f + f*d + d*e) != d*e*f*(b*c + c*a + a*b))
					{
						continue;			//�ų������Ͳ����
					}
					x++;					//ͳ�Ʋ����˫�� 3 Ԫ 2 ��
					printf(" %d :>_ (%3d,%3d,%3d), ", x, a, b, c);
					printf(" (%3d,%3d,%3d); \n", d, e, f);
				}
			}
		}
	}
	if (x > 0)
		printf(" ������ %d ��⣡\n", x);
	else
		printf(" �޽⣡\n");
	return 0;
}

#endif

#if 0
// �ͻ� 3 Ԫ 3 ��̽��
#include <stdio.h>

int main()
{
	int a, b, c, d, e, f, g, h, i, j, x, n;
	long t;
	printf(" ���������� n :>_ ");
	scanf("%d", &n);
	x = 0;
	for (a = 1; a <= (n - 3) / 3; a++)		// ����ö��ѭ��
	{
		for (b = a + 1; b <= (n - a - 1) / 2; b++)
		{
			for (d = a + 1; d <= (n - 3) / 3; d++)
			{
				for (e = d + 1; e <= (n - d - 1) / 2; e++)
				{
					for (g = d + 1; g <= (n - 3) / 3; g++)
					{
						for (h = g + 1; h < (n - g - 1) / 2; h++)
						{
							c = n - a - b;
							f = n - d - e;
							i = n - g - h;				// ȷ��3��͵��� n
							t = a*b*c;
							if (d*e*f == t && g * h* i == t)		//�ų��������
							{
								x++;								//ͳ�Ʋ������
								printf(" %d :>_ (%3d,%3d,%3d), ", x, a, b, c);
								printf(" (%3d,%3d,%3d); \n", d, e, f);
								printf(" %3d,%3d,%3d: (%ld)\n", g, h, i, t);
							}
						}
					}
				}
			}
		}
	}
	if (x > 0)
	{
		printf(" ������ %d ��⣡\n", x);
	}
	else
	{
		printf(" �޽⣡\n");
	}
	return 0;
}

#endif

#if 0
// ��Ϊ s �ĵ��ݺ� 3 Ԫ��
#include <stdio.h>
#include <math.h>
int main()
{
	int n, s, s2, b[7];
	printf(" ������������ s :>_ ");
	scanf("%d", &s);
	n = 0;
	for (b[1] = 1; b[1] <= (s - 3) / 3; b[1]++)		//����ö��ѭ��
	{
		for (b[2] = b[1] + 1; b[2] <= (s - b[1] - 1) / 2; b[2]++)
		{
			for (b[4] = b[1] + 1; b[4] <= (s - 3) / 3; b[4]++)
			{
				for (b[5] = b[4] + 1; b[5] <= (s - b[4] - 1) / 2; b[5]++)
				{
					b[3] = s - b[1] - b[2];
					b[6] = s - b[4] - b[5];		// ȷ���͵��� s
					s2 = b[1] * b[1] + b[2] * b[2] + b[3] * b[3];
					if (b[4] * b[4] + b[5] * b[5] + b[6] * b[6] != s2)
					{
						continue;		// �ų�ƽ���Ͳ����
					}
					n++;
					printf("%3d :>_ (%2d,%2d,%2d) ", n, b[1], b[2], b[3]);
					printf("(%2d,%2d,%2d) s2 = %ld\n", b[4], b[5], b[6], s2);
				}
			}
		}
	}
	if (0 == n)
	{
		printf(" �޽⣡\n");
	}
	return 0;
}


#endif

#if 1
//̽�����ݺ� n (n<=6) Ԫ��
#include <stdio.h>
int main()
{
	int a1, b1, b2, n, k, m1, m, i, j, t, x, z;
	int a[20], b[20], c[20], d[20], fa[20], fb[20];
	long s1, s2, tt1[20], tt2[20], s[20];
	printf(" ���ÿ�����ĸ��� n (2<n<7) :>_ ");
	scanf("%d", &n);
	return 0;
}

#endif