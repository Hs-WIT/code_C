#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int get_max(int x, int y)
{
	int z = 0;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}
//函数返回类型为void，表示这个函数不返回任何值，也不需要返回
//形参实例化后，是实参的临时拷贝，不能改变实参
void swap(int x, int y)//传值调用
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = x;
}

void swapchange(int* pa, int* pb)//传址调用
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max=%d\n", max);

	//错误代码
	//printf("交换前：a=%d,b=%d\n", a, b);
	//swap(a, b);
	//printf("交换前：a=%d,b=%d\n", a, b);

	//int* pa = &a;
	//*pa = 20;
	//printf("%d", a);

	printf("交换前：a=%d,b=%d\n", a, b);
	swapchange(&a, &b);
	printf("交换后：a=%d,b=%d\n", a, b);

	

	return 0;
}