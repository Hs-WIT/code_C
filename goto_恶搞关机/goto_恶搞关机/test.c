#define _CRT_SECURE_NO_WARNINGS 1

//shutdown -s -t 60 ���� ʱ�� 60s
//shutdown -a       ȡ���ػ�
//goto ����ֻ����һ��������Χ����ת�����ܿ纯��



#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");

	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ����������:�����������Ծ�ȡ���ػ�\n");
	scanf("%s,input");
//again:
//	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������룺�������������Ծ�ȡ���ػ�\n");
//	scanf("%s,input");
//
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}

	while (1)
	{
		printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������룺�������������Ծ�ȡ���ػ�\n");
		scanf("%s,input");
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}




	return 0;
}
