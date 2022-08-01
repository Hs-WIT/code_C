#define _CRT_SECURE_NO_WARNINGS 1
/*

	#
   ### 
  #####
   ###
    #

*/
#include<stdio.h>
int main()
{
	char ch;
	scanf("%c", &ch);
	int n=3;
	for (int  i = 1; i <= n; i++)//打印从第一行到第三行
	{
		for (int j = 1; j <= n-i ; j++)//第n行有n-i个空格
		{
			printf(" ");
		}
		for (int k = 1; k <= 2*i-1; k++)//第n行有2n-1个字符
		{
			printf("%c", ch);
		}	
		printf("\n");
	}

	for (int i = 1; i <= n-1; i++)
	{
		for (int j = 1; j <= i; j++)//第n行有n个空格
		{
			printf(" ");
		}
		for (int k = 1; k <= 2*(n-i)-1; k++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	return 0;
}