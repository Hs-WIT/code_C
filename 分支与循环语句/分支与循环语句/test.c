#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

int main()
{
	if (0)
	{
		int c = 0;
		int d = 2;
		if (c == 1)
	
		if (d == 2)

			printf("hehe\n");
		
		else
			printf("haha\n");//else�������if���
	}



	if (0) 
	{
		int num;
		scanf("%d", &num);
		int a = num % 2;
		if (a)
		{
			printf("Ϊ����\n");
		}
		else
		{
			printf("Ϊż��\n");
		}

		for (int i = 1; i <= 100; i++)
		{
			if (1 == i % 2)
				printf("%d", i);
			else
			{
				printf(" ");
			}
		}
	}

	if (0)
	{
		int day = 0;
		scanf("%d", &day);
		switch (day)
		{
		case 1:
			printf("����һ");
			break;
		case 2:
			printf("���ڶ�");
			break;
		case 3:
			printf("������");
			break;
		case 4:
			printf("������");
			break;
		case 5:
			printf("������");
			break;
		case 6:
			printf("������");
			break;
		case 7:
			printf("������");
			break;

		default:
			printf("error");
			break;

		}
	}

	if (0)
	{
		int k = 1;
		int l = 1;
		//��whileѭ���У�break����������ֹѭ��
		while (k <= 10)
		{
			if (k == 5)
			{
				break;
			}
			printf("%d ", k);
			k++;
		}

		//continue��������ѭ��continue����Ĵ��룬ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
		while (l <= 10)
		{
			if (l == 5)
			{
				continue;
			}
			printf("%d", l);
			l++;
		}
	}

	if (0)
	{
		int i = 3;
		for (int i = 1; i < 10; i++)
		{
			/*if (i == 5)
				break;*/
			if (i == 5)
				continue;

			printf("%d\n", i);
		}

	}
	



	if (0)
	{
		//getchar

			//EOF -end of file �ļ�������־
			//EOF;

		int ch = 0;
		//ch = getchar();
		//printf("%c\n", ch);
		//putchar(ch);


		while ((ch = getchar()) != EOF)
		{
			putchar(ch);
			return 0;
		}
	}
	
	if (0)
	{
		char password[20] = { 0 };
		printf("����������->");
		scanf("%s", password);
		//printf("%s", password);
		printf("��ȷ������(Y/N):");
		//��������
		//getchar();//����'\n'


		//������������еĶ���ַ�
		int tmp = 0;
		while ((tmp = getchar()) != '\n')
		{
			;
		}

		int ch = getchar();
		if (ch == 'Y')
		{
			printf("ȷ�ϳɹ�\n");
		}
		else
		{
			printf("ȷ��ʧ��\n");
		}
	}

	if (0)
	{
		int ch = 0;
		while ((ch = getchar()) != EOF)
		{
			if (ch < '0' || ch>'9')
			{
				continue;
			}
			else
			{
				putchar(ch);
			}
		}
	}

	if (0)
	{
		int p = 0;
		int j = 0;
		for (; p < 3; p++)
		{
			for (; j < 3; j++)
			{
				printf("hehe\n");
			}
		}
	}
	
	return 0;
} 