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


//1.���������1-100
//2.������
//rand����������һ��0-36767֮�������
//���� srand(unsigned int seed);
//ʱ��-ʱ���
//time_t time();
void game()
{
	//1.���������
	//srand((unsigned int)time(NULL));//��������������ֻ�����һ�Σ���Ӧ�÷���void game��������
	int ret = rand()%100+1;//%100��������0-99��Ȼ��+1����Χ����1-100
	//printf("%d", ret);

	//2.������
	int guess = 0;
		
	while (1)
	{
		printf("�������:->");
		scanf("%d", &guess);
		if (guess<ret)
		{
			printf("��С��\n");
		}
		else if (guess>ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}

}




int main()
{
	if (0)//n�Ľ׳�
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

	if (0)//�������飬����ĳ����������n
	{
		int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
		int k = 7;//Ҫ���ҵ�����
		int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���

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
				printf("�ҵ���,�±���:%d\n", mid);
				break;
			}
		}
		if (left > right)
		{
			printf("NOT Found!");
		}
	}


	if (0)//����ַ����������м���
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
			Sleep(1000);//����һ��
			system("cls");//����
			left++;
			right--;
		}
		printf("%s\n", arr1);
	}




	if (0)//�����������ξ������˳�����
	{
		int i = 0;
		char password[20] = { 0 };
		for (int i = 0; i < 3; i++)
		{
			printf("���������룺");
			scanf("%s", password);
			if (strcmp(password, "123456") == 0)
			{
				printf("��¼�ɹ�");
				break;
			}
			else
			{
				if (i == 2)
				{
					printf("������������˳�����");
				}
				else
					printf("�����������������");
			}
		}
	}




		//дһ����������Ϸ
		//1.�Զ�����- -��1-100֮��������
		//2.������
			//a.�¶��ˣ��͹�ϲ�㣬��Ϸ����
			//b.��´��ˣ�����߲´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
		//3.��Ϸһ��һֱ�棬�����˳���Ϸ



	if (1)
	{
		int input = 0;
		srand((unsigned int)time(NULL));//������������
		do
		{
			menu();//��ӡ�˵�
/*
			printf("***********************");
			printf("******  1.play  *******");
			printf("******  0.exit  *******");
			printf("***********************");
*/
			printf("��ѡ��>");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				printf("������\n");
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ���������ѡ��");
				break;
			}
		} while (input);//






			
	










	}


	









	return 0;
}