#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
extern Aglobal;
int a = 100;
#define MAX 20
//int main()
//{
//	int a = 10;
//	printf("%d\n", a+ Aglobal);
//	printf("%d\n", a + a);
//	printf("hehe\n");
//
//	
//	//1.���泣��
//	//3.14;
//	//10;
//	//'a';
//	//"adb";
//
//	//2.const���ε� ������
//	//const int num = 10;//num�ǳ�����- ���г����ԣ���Ȼ�Ǳ���
//	//
//	//int arr[10] = { 0 };//ʮ��Ԫ��
//	//int arr2[num] = { 0 };//num �Ǳ���������
//
//	//3.#define ����ı�ʶ������
//	//int n = MAX;
//	int arr3[MAX] = { 0 };
//	printf("%d", arr3[1]);
//
//	return 0;
//}

enum Sex
{
	//����ö�����͵ı�����δ������ȡֵ
	//ö�ٳ�������һ������Ĭ��ֵ��ֵΪ0
	//male,
	male=3,//����ֵ
	female,
	secret
};

int main()
{
	//4.ö�ٳ���
		//����һһ�оٵĳ���
	enum Sex s= male;
	printf("%d\n",male);
	printf("%d\n", female);
	printf("%d\n", secret);


	return 0;
}