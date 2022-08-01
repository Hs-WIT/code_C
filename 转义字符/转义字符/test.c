#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	
	printf("ab\ncd");
	printf("c:\test\test.c");
	printf("are you ok\?\?\?\n");
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	printf("c:\\t\\test.c\n");
	printf("\a");
	printf("%c\n", '\130');//8进制的130是十进制的88
	//X-ASCII的码值是88
	printf("%d\n", '\x11');
	printf("%d\n", strlen("c:\test\328\test.c"));
}