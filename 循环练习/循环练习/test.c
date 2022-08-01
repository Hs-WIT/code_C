#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>



void menu()
{
	printf("***********************\n");
	printf("******  1.play  *******\n");
	printf("******  0.exit  *******\n");
	printf("***********************\n");
}


//1.生成随机数1-100
//2.猜数字
//rand函数返回了一个0-36767之间的数字
//调用 srand(unsigned int seed);
//时间-时间戳
//time_t time();
void game()
{
	//1.生成随机数
	//srand((unsigned int)time(NULL));//设置起点随机数，只需调用一次，不应该放在void game函数里面
	int ret = rand()%100+1;//%100的余数是0-99，然后+1，范围就是1-100
	//printf("%d", ret);

	//2.猜数字
	int guess = 0;
		
	while (1)
	{
		printf("请猜数字:->");
		scanf("%d", &guess);
		if (guess<ret)
		{
			printf("猜小了\n");
		}
		else if (guess>ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}

}




int main()
{
	if (0)//n的阶乘
	{
		int num = 0;
		int sum = 1;
		scanf("d", &num);
		for (int i = 1; i <= num; i++)
		{
			sum = sum * i;
		}
		printf("sum = %d\n", sum);
	}


	if (0)//1!+2+3+.....+10!

	{
		int sum = 0;
		int n = 1;
		for (int j = 1; j <= 10; j++)
		{
			n *= j;
			sum += n;
		}
		printf("sum = %d\n", sum);

	}

	if (0)//有序数组，查找某个具体数字n
	{
		int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
		int k = 7;//要查找的数字
		int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数

		int left = 0;
		int right = sz - 1;

		while (left <= right)
		{
			int mid = (left + right) / 2;
			if (arr[mid] < k)
			{
				left = mid + 1;
			}
			else if (arr[mid] > k)
			{
				right = mid - 1;
			}
			else
			{
				printf("找到了,下标是:%d\n", mid);
				break;
			}
		}
		if (left > right)
		{
			printf("NOT Found!");
		}
	}


	if (0)//多个字符从两端向中间汇聚
	{
		char arr1[] = "welcome to bit!!!!!!";
		char arr2[] = "####################";
		int left = 0;
		int right = strlen(arr1) - 1;

		while (left <= right)
		{
			arr2[left] = arr1[left];;
			arr2[right] = arr1[right];
			printf("%s\n", arr2);
			Sleep(1000);//休眠一秒
			system("cls");//清屏
			left++;
			right--;
		}
		printf("%s\n", arr1);
	}




	if (0)//密码输入三次均错误，退出程序
	{
		int i = 0;
		char password[20] = { 0 };
		for (int i = 0; i < 3; i++)
		{
			printf("请输入密码：");
			scanf("%s", password);
			if (strcmp(password, "123456") == 0)
			{
				printf("登录成功");
				break;
			}
			else
			{
				if (i == 2)
				{
					printf("三次密码错误，退出程序");
				}
				else
					printf("密码错误，请重新输入");
			}
		}
	}




		//写一个猜数字游戏
		//1.自动产生- -个1-100之间的随机数
		//2.猜数字
			//a.猜对了，就恭喜你，游戏结束
			//b.你猜错了，会告诉猜大了，还是猜小了，继续猜，直到猜对
		//3.游戏一个一直玩，除非退出游戏



	if (1)
	{
		int input = 0;
		srand((unsigned int)time(NULL));//设置随机数起点
		do
		{
			menu();//打印菜单
/*
			printf("***********************");
			printf("******  1.play  *******");
			printf("******  0.exit  *******");
			printf("***********************");
*/
			printf("请选择：>");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				printf("猜数字\n");
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，重新选择");
				break;
			}
		} while (input);//






			
	










	}


	









	return 0;
}