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
//	//1.字面常量
//	//3.14;
//	//10;
//	//'a';
//	//"adb";
//
//	//2.const修饰的 常变量
//	//const int num = 10;//num是常变量- 具有常属性，仍然是变量
//	//
//	//int arr[10] = { 0 };//十个元素
//	//int arr2[num] = { 0 };//num 是变量，错误
//
//	//3.#define 定义的标识符常量
//	//int n = MAX;
//	int arr3[MAX] = { 0 };
//	printf("%d", arr3[1]);
//
//	return 0;
//}

enum Sex
{
	//这种枚举类型的变量的未来可能取值
	//枚举常量，第一个常量默认值初值为0
	//male,
	male=3,//赋初值
	female,
	secret
};

int main()
{
	//4.枚举常量
		//可以一一列举的常量
	enum Sex s= male;
	printf("%d\n",male);
	printf("%d\n", female);
	printf("%d\n", secret);


	return 0;
}