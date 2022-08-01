#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int a =10;
	
	printf("%p\n", &a);//%p专门用来打印地址
	int* pa = &a;//pa用来存放地址，在c语言中称为指针变量
				//*说明pa是指针变量
				//int说明pa指向的对象是int类型的

	*pa = 20;//*pa解引用操作符  *pa就是通过pa的地址，找到a


	char ch = 'w';
	char* pc = &ch;
	
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	

	return 0;


}