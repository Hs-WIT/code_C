#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

extern int add(int x, int y);

typedef unsigned int u_int;
//typedef �����ض���

//define ��һ��Ԥ����ָ��
//1.define �������
#define	Max 10000
//2.define �����
#define  ADD(X,Y) ((X)+(Y))

void test()
{
	int a = 1;
		a++;
		printf("a=%d\n", a);
}
void test1()
{
	static int b = 1;
	b++;
	printf("b=%d\n", b);

	//b������,static���ξֲ��������ı��˾ֲ���������������
	//�������Ǹı��˱����Ĵ洢���ͣ���ջ���䵽��̬��
	//static ����ȫ�ֱ�����ʹ�����ȫ�ֱ���ֻ�����Լ���Դ�ļ���.c���ڲ�����ʹ�ã�����Դ�ļ�����ʹ�ã�
	//ȫ�ֱ�����������Դ�ļ��ڲ����Ա�ʹ�ã�����Ϊȫ�ֱ��������ⲿ��������
	//���Ǳ�static���κ󣬱�����ڲ��������ԣ�����Դ�ļ��Ͳ������ӵ������̬��ȫ�ֱ����ˣ�

}
int main()
{
	//unsigned int num = 100;
	//u_int num2 = 100;

	//static-��̬
	//���ξֲ�������ȫ�ֱ���������
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	int j = 0;
	while (j < 10)
	{
		test1();
		j++;
	}

	int a = 19;
	int b = 10;
	int sum = add(a, b);
	printf("sum=%d\n", sum);

	printf("%d\n", 4 * ADD(2, 3));

	
	return 0;

}