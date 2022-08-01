#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a = 0;
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[0]));
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);

	printf("%d\n,~a");//-1 
	/*整数a=0
	~ 按二进制 位取反  
	二进制：
		00000000 00000000 00000000 00000000
		11111111 11111111 11111111 11111111
	整数在内存中存储的是补码
	正整数：原码、补码、反码相同
	一个整数的二进制表示有三种：
	原码、反码、补码
	-1：
	10000000 00000000 00000000 00000001 （原码）
	11111111 11111111 11111111 11111110 （反码）
	11111111 11111111 11111111 11111111 （补码）反码+1
	~0:
	11111111 11111111 11111111 11111111 （补码）

	*/

	int z = 10;
	int d = 10;
	int k = 0;
	int b = ++k;//前置++，先++后使用
	int c = d++;//后置++，先使用后++
	printf("%d\n", b);
	printf("%d\n", z);
	printf("%d\n", c);


	int f = (int)3.145;
	printf("%d\n", f);
	
	printf("%d\n", a && k);
	printf("%d\n", a || k);

	/*
	
	条件操作符（三目操作符）exp1？exp2：exp3

	exp1成立，exp2计算，整个表达式的结构是：exp2的结果
	exp1不成立，exp3计算，整个表达式的结构是:exp3的结果

	*/

	/*
	
	逗号表达式，是从左到右依次计算的
	整个表达式的结果是最后一个表达式的结果

	*/

	int q = 0, w = 3, e = 5;
	int r = (q = w + 2, e = q - 4, w = e + 3);
	printf("%d\n", r);


	return 0;
}