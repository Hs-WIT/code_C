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
	for (int  i = 1; i <= n; i++)//��ӡ�ӵ�һ�е�������
	{
		for (int j = 1; j <= n-i ; j++)//��n����n-i���ո�
		{
			printf(" ");
		}
		for (int k = 1; k <= 2*i-1; k++)//��n����2n-1���ַ�
		{
			printf("%c", ch);
		}	
		printf("\n");
	}

	for (int i = 1; i <= n-1; i++)
	{
		for (int j = 1; j <= i; j++)//��n����n���ո�
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