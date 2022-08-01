#define _CRT_SECURE_NO_WARNINGS 1

//shutdown -s -t 60 设置 时间 60s
//shutdown -a       取消关机
//goto 函数只能在一个函数范围内跳转，不能跨函数



#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");

	printf("请注意，你的电脑将在一分钟内关机，如果输入:“我是猪”可以就取消关机\n");
	scanf("%s,input");
//again:
//	printf("请注意，你的电脑将在一分钟内关机，如果输入：“我是猪”，可以就取消关机\n");
//	scanf("%s,input");
//
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}

	while (1)
	{
		printf("请注意，你的电脑将在一分钟内关机，如果输入：“我是猪”，可以就取消关机\n");
		scanf("%s,input");
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}




	return 0;
}
