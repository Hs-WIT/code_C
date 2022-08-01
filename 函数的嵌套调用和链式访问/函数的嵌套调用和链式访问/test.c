#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include "Add.h"

//函数能嵌套调用，不能嵌套定
//链式访问：把一个函数的返回值作为另外一个函数的参数

int add(int* p)
{
	(*p)++;
}


int main()
{
	if (0)
	{
		int num = 0;
		add(&num);
		printf("%d\n", num);

		add(&num);
		printf("%d\n", num);

		add(&num);
		printf("%d\n", num);
	}

	if (0)
	{
		int len = strlen("abc");
		printf("%d\n", len);

		//链式访问
		printf("%d\n", strlen("abc"));
	}

	if (0)
	{
		printf("%d", printf("%d", printf("%d", 43)));
	}
	int n = Add(10, 20);
	printf("%d", n);
	return 0;
}