#define _CRT_SECURE_NO_WARNINGS 1

#if 0
#include <stdio.h>

int main()
{
	long i, m;
	double n, s, s1;
	printf("���������� n (n>3) :>_ ");
	scanf("%lf", &n);
	m = 0;
	while (1)
	{
		m++;
		s = 0;
		for (i = m; i <= 2 * m; i++)
		{
			s = s + sqrt(i);		//��ÿһ�� m ����� s
		}
		if (s >= n)
			break;
		else
		{
			s1 = s;		//Ϊ����ע���ṩ����
		}
	}
	printf("����ʽ�Ľ�Ϊ :>_ m >= %ld\n", m);
	printf("ע���� m = %ld ʱ��s = %.2f;�� m = %ld ʱ��s = %.2f\n", m - 1, s1, m, s);
	return 0;
}
#endif

#if 0
//�����ƽ��������ʽ
#include <stdio.h>
#include <math.h>
int main()
{
	long m;
	double n, s, s1;
	printf("���������� n (n>3) :>_ ");
	scanf("%lf", &n);			//������������
	m = 1;
	s = 1.0 +sqrt(2);			//s(1)����ֵ
	do{
		m++;
		s1 = s;			//�� s1 ��¼ s(m-1)
		s = s - sqrt(m - 1) + sqrt(2 * m - 1) + sqrt(2 * m);	//���Ƽ���� s
	} while (s < n);
	printf("����ʽ�Ľ�Ϊ�� m >= %ld\n", m);
	printf("ע���� m = %ld ʱ��s = %.2f;�� m = %ld ʱ��s = %.2f\n", m - 1, s1, m, s);
	return 0;
}
#endif

#if 0
//�����ͼ�������ʽ
#include <stdio.h>

int main()
{
	long c, d, m;
	double x, y, s;
	printf("���������� x,y (2<x<y) :>_ ");
	scanf("%lf%lf", &x, &y);
	m = 0;
	s = 0;
	while (s <= x){				//ѭ�����̽�� m ����ȷ�� c
		s = s + 1.0/(++m);
	}
	c = m;
	do{
		s = s + 1.0 / (++m);
	} while (s < y);		//ѭ�����̽�� m ����ȷ�� d
	d = m - 1;
	printf("���㲻��ʽ�Ľ�Ϊ :>_ %ld<=m<=%ld\n", c, d);
	return 0;
}

#endif


#if 0
//�ⲻ��ʽ��d < 1+1/2-1/3+1/4+1/5-1/6+...��/n
#include <stdio.h>

int main()
{
	long n, k;
	double d, s;
	printf("���������� d :>_ ");
	scanf("%lf", &d);
	printf("%lf < 1+1/2-1/3+1/4+1/5-1/6+...��/n �Ľ�Ϊ :>_ \n", d);
	n = 1;
	s = 0;
	while (1)
	{
		s = s + 1.0/n+1.0/(n+1)-1.0/(n+2);	//ÿ����һ�����
		if (s > d) break;
		n = n + 3;
	}
	printf("n >= %ld\n", n + 1);		//�� n һ�������
	for (s = 0, k = 1; k <= n; k++)
	{
		if (k % 3 > 0)
		{
			s = s + 1.0 / k;			//��ͷһ�������
		}
		else
		{
			s = s - 1.0 / k;
		}
		if (s > d)
		{
			printf("n = %ld\n", k);
		}
	}
	return 0;
}

#endif


#if 0

//�ⲻ��ʽ��d < 1+1/2-1/3+1/4+1/5-1/6+...��/n
#include <stdio.h>

int main()
{
	long n, k;
	double d, s;
	printf("���������� d :>_ ");
	scanf("%lf", &d);
	printf("%lf < 1+1/2-1/3+1/4+1/5-1/6+...��/n �Ľ�Ϊ :>_ \n", d);
	n = 3;
	s = 3.0 / 2;
	while (1){
		s = s - 1.0 / n + 1.0 / (n + 1) + 1.0 / (n + 2);
		if (s > d)
			break;
		n = n + 3;
	}
	printf("n = %ld\n", n + 2);			//��ӡ��һ����ɢ�� n+2
	k = n + 2;
	while (1)
	{
		if ((s = s - 1.0 / (++k)) > d)	break;
		if ((s = s + 1.0 / (++k)) > d)	break;
		s = s + 1.0 / (++k);
		printf("n = %ld\n", k);		//��ӡ��ɢ�� k
	}
	printf("n >= %ld\n", k);		//��ӡ�����
	return 0;
}

#endif

#if 1

//�����ֳ�ͳ�ִ������
#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, n, m, u, sh[40], ph[20];
	double a, b, c, max, min, uf, sf[40], pf[20], z[40], f[40][20];
	printf("������ѡ�ָ��� (1<n<40) :>_ ");
	scanf("%d", &n);
	printf("��������ί���� (2<m<20) :>_ ");
	scanf("%d", &m);
	for (j = 1; j <= m; j++)
	{
		ph[j] = j;
	}
	for (i = 1; i <= n; i++)		//�ֳ�Ϊѡ�����֣�ͳ��
	{
		printf("\n�� %d ���ϳ�ѡ�ֱ��Ϊ :>_ ", i);
		scanf("%d", &sh[i]);		//����� i ���ϳ�ѡ�ֵı��
		sf[i] = 0;
		max = 0;
		min = 100;
		for (j = 1; j <= m; j++)
		{
			printf("�� %d ����ί����Ϊ :>_ ", j);
			scanf("%lf", &f[i][j]);	//����� j ����ίΪ�� i ��ѡ�ֵ�����
			sf[i] += f[i][j];
			if (max < f[i][j])
			{
				max = f[i][j];		//ͳ����߷ֺ���ͷ�
			}
			if (min > f[i][j])
			{
				min = f[i][j];		//ͳ����߷ֺ���ͷ�
			}
		}
		printf("\nȥ��һ����߷� :>_ %.3f", max);
		printf("\nȥ��һ����ͷ� :>_ %.3f", min);
		sf[i] = (sf[i] - max - min) / (m - 2);	//�� i ��ѡ�ֵ����յ÷�
		a = max - sf[i];
		b = sf[i] - min;
		z[i] = (a > b )? a : b;
		printf("\n���Ϊ %d ��ѡ��", sh[i]);
		printf("  ���÷�Ϊ :>_ %.3f", sf[i]);		//������ i ��ѡ�ֵĵ÷�
	}
	for (c = 0, i = 1; i <= n; i++)
	{
		c += z[i] * z[i];
	}
	c = sqrt(c / n);
	for (j = 1; j <= m; j++)		//����ί����
	{
		pf[j] = 0;
		for (i = 1; i <= n; i++)
		{
			pf[j] += (f[i][j] - sf[i])*(f[i][j] - sf[i]);
		}
		pf[j] = 10.0 - sqrt(pf[j] / n) / c * 5;
		printf("\n�� %d ����ί�÷�Ϊ :>_ %.3f", j, pf[j]);
	}
	for (i = 1; i <= n-1; i++)		//ѡ�ֵ÷ִӸߵ�������
	{
		for (j = i + 1; j <= n; j++)
		{
			if (sf[i] < sf[j])
			{
				uf = sf[i];
				sf[i] = sf[j];
				sf[j] = uf;
				u = sh[i];
				sh[i] = sh[j];
				sh[j] = u;
			}
		}
	}
	printf("\n����ѡ�ֵ÷����α�");
	printf("\nѡ�ֱ��    �÷�   ����");
	for (i = 1; i <= n; i++)
	{
		printf("\n %d  %.3f  %d", sh[i], sf[i], i);
	}
	printf("\n");
	for (j = 1; j <= m - 1; j++)
	{
		for (i = j + 1; i <= m; i++)
		{
			if (pf[j] < pf[i])
			{
				uf = pf[j];
				pf[j] = pf[i];
				pf[i] = uf;
				u = ph[j];
				ph[j] = ph[i];
				ph[i] = u;
			}
		}
	}
	printf("\n  ��ί�÷����α�");
	printf("\n��ί���  �÷�  ����");
	for (j = 1; j <= m; j++)
	{
		printf("\n %d  %.3f  %d", ph[j], pf[j], j);
	}
	printf("\n\n�����ֳ�ͳ�ֽ�����лл��\n");
	return 0;
}

#endif