#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//"abcdefg";
	char arr[] = "hello";
	
	//���ַ�������
	int len = strlen("abc");
	printf("%d\n", len);// \0����strlen�м���
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0' };// "\0"���ַ��������ı�־
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	return 0;
 }