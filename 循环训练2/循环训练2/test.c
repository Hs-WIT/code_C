#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

int Seq(int x, int y, int z)
{

	if (x > y)
	{
		if (x > z)
		{
			if (y > z)
			{
				printf("%d %d %d", x, y, z);
			}
			else
			{
				printf("%d %d %d", x, z, y);
			}

		}
		else
		{
			printf("%d %d %d", z, x, y);
		}
	}
	else
	{
		if (y > z)
		{
			if (x > z)
			{
				printf("%d %d %d", y, x, z);
			}
			else
			{
				printf("%d %d %d", y, z, x);
			}
		}
		else
		{
			printf("%d %d %d", z, y, x);
		}
	}
}

int Seq1(int x, int y, int z)
{
	int tmp = 0;
	if (x < y)
	{
		tmp = x;
		x = y;
		y = tmp;
	}
	if (x < z)
	{
		tmp = x;
		x = z;
		z = tmp;
	}
	if (y < z)
	{
		tmp = y;
		y = z;
		z = tmp;

	}
	return x, y, z;
}

int main()
{

	//�������������Ӵ�С
	if (0)
	{
		int x = 0;
		int y = 0;
		int z = 0;
		scanf("%d%d%d", &x, &y, &z);
		int tmp = 0;
		if (x < y)
		{
			tmp = x;
			x = y;
			y = tmp;
		}
		if (x < z)
		{
			tmp = x;
			x = z;
			z = tmp;
		}
		if (y < z)
		{
			tmp = y;
			y = z;
			z = tmp;
		}
		printf("%d %d %d\n", x, y, z);
	}


	//��ӡ1-100֮������3�ı���
	if (0)
	{
		int k = 0;
		for (int i = 1; i <= 100; i++)
		{
			if (i % 3 == 0)
			{
				printf("%d ", i);
				k++;
			}
		}
		printf("sum=%d\n", k);
	}


	//���Լ��
	if (0)
	{
		int a = 0;
		int b = 0;
		scanf("%d%d", &a, &b);

		int m = 0;
		int n = 0;
		if (a > b)
		{
			n = b;
			m = a;

		}
		else
		{
			n = a;
			m = b;
		}
		int k = n;
		for (int i = 1; i <= n; i++)
		{
			if (m % k == 0)
			{
				printf("���Լ���ǣ�%d", k);
				break;
			}
			k--;
		}
	}

	//շת�����
	if (0)
	{
		int x = 0;
		int y = 0;
		scanf("%d%d", &x, &y);
		int tmp = 0;
		while (x % y)
		{
			tmp = x % y;
			x = y;
			y = tmp;
		}
		printf("���Լ����%d\n", y);
	}

	//��С������=m*n/���Լ��


	//1000��2000��֮�������
	// ��4���������ܱ�һ������
	//��400����
	if (0)
	{
		int k = 0;
		for (int i = 1000; i <= 2000; i++)
		{
			if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			{
				printf("%d ", i);
				k++;
			}
		}
		printf("\n1000-2000����%d������", k);
	}



	//��ӡ100-200֮�������
	if (1)
	{
		int i = 0;
		int count = 0;
		for (i = 100; i <= 200; i+=2)
		//for (i = 100; i <= 200; i++)
		{
			int flag = 1;
			int j = 0;
			for (j = 2; j <= sqrt(i); j++)
				//for ( j = 2; j <i ; j++)
			{
				if (i % j == 0)
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
			{
				count++;
				printf("%d ", i);
			}
		}
		printf("\ncount=%d", count);
	}









	return 0;
}