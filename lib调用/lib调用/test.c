#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include"Add.h"
#pragma comment(lib,"Add����.lib")


int main()
{
	int a = 10; 
	int b = 20;
	int n = Add(a, b);
	printf("n=%d\n", n);

	return 0;
}