#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int get_max(int x, int y)
{
	int z = 0;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}
//������������Ϊvoid����ʾ��������������κ�ֵ��Ҳ����Ҫ����
//�β�ʵ��������ʵ�ε���ʱ���������ܸı�ʵ��
void swap(int x, int y)//��ֵ����
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = x;
}

void swapchange(int* pa, int* pb)//��ַ����
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max=%d\n", max);

	//�������
	//printf("����ǰ��a=%d,b=%d\n", a, b);
	//swap(a, b);
	//printf("����ǰ��a=%d,b=%d\n", a, b);

	//int* pa = &a;
	//*pa = 20;
	//printf("%d", a);

	printf("����ǰ��a=%d,b=%d\n", a, b);
	swapchange(&a, &b);
	printf("������a=%d,b=%d\n", a, b);

	

	return 0;
}