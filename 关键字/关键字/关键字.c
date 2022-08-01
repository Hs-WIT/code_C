#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

extern int add(int x, int y);

typedef unsigned int u_int;
//typedef 类型重定义

//define 是一个预处理指令
//1.define 定义符号
#define	Max 10000
//2.define 定义宏
#define  ADD(X,Y) ((X)+(Y))

void test()
{
	int a = 1;
		a++;
		printf("a=%d\n", a);
}
void test1()
{
	static int b = 1;
	b++;
	printf("b=%d\n", b);

	//b不销毁,static修饰局部变量，改变了局部变量的生命周期
	//本质上是改变了变量的存储类型，由栈区变到静态区
	//static 修饰全局变量，使得这个全局变量只能在自己的源文件（.c）内部可以使用，其他源文件不能使用！
	//全局变量，在其他源文件内部可以被使用，是因为全局变量具有外部链接属性
	//但是被static修饰后，变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了！

}
int main()
{
	//unsigned int num = 100;
	//u_int num2 = 100;

	//static-静态
	//修饰局部变量、全局变量、函数
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	int j = 0;
	while (j < 10)
	{
		test1();
		j++;
	}

	int a = 19;
	int b = 10;
	int sum = add(a, b);
	printf("sum=%d\n", sum);

	printf("%d\n", 4 * ADD(2, 3));

	
	return 0;

}