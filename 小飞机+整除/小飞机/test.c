#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

char Div(int x)
{
	int num = 0;
	num = x % 5;
	if (num != 0)
	{
		return 0;
	}
	else
		return 1;
}

int main()
{
	printf("     **\n");
	printf("     **\n");
	printf("************\n");
	printf("************\n");
	printf("    *  *    \n");
	printf("    *  *    \n");
	
	printf("     **\n     **\n************\n************\n    *  *\n    *  *\n");
	printf("please input a integer:");
	int a = 0;
	scanf("%d", &a);
	Div(a);
	int Model = Div(a);
	if (Model)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}