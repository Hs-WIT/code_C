#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//"abcdefg";
	char arr[] = "hello";
	
	//求字符串长度
	int len = strlen("abc");
	printf("%d\n", len);// \0不在strlen中计算
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0' };// "\0"是字符串结束的标志
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	return 0;
 }