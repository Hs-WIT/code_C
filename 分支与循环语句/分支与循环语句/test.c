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
			printf("haha\n");//else与最近的if组合
	}



	if (0) 
	{
		int num;
		scanf("%d", &num);
		int a = num % 2;
		if (a)
		{
			printf("为奇数\n");
		}
		else
		{
			printf("为偶数\n");
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
			printf("星期一");
			break;
		case 2:
			printf("星期二");
			break;
		case 3:
			printf("星期三");
			break;
		case 4:
			printf("星期四");
			break;
		case 5:
			printf("星期五");
			break;
		case 6:
			printf("星期六");
			break;
		case 7:
			printf("星期日");
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
		//在while循环中，break用于永久终止循环
		while (k <= 10)
		{
			if (k == 5)
			{
				break;
			}
			printf("%d ", k);
			k++;
		}

		//continue跳过本次循环continue后面的代码，直接去判断部分，看是否进行下一次循环
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

			//EOF -end of file 文件结束标志
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
		printf("请输入密码->");
		scanf("%s", password);
		//printf("%s", password);
		printf("请确认密码(Y/N):");
		//清理缓存区
		//getchar();//处理'\n'


		//清除缓存区的中的多个字符
		int tmp = 0;
		while ((tmp = getchar()) != '\n')
		{
			;
		}

		int ch = getchar();
		if (ch == 'Y')
		{
			printf("确认成功\n");
		}
		else
		{
			printf("确认失败\n");
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