#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int a =10;
	
	printf("%p\n", &a);//%pר��������ӡ��ַ
	int* pa = &a;//pa������ŵ�ַ����c�����г�Ϊָ�����
				//*˵��pa��ָ�����
				//int˵��paָ��Ķ�����int���͵�

	*pa = 20;//*pa�����ò�����  *pa����ͨ��pa�ĵ�ַ���ҵ�a


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