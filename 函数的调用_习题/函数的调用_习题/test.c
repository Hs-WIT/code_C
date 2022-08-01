#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>


int is_prime(int n)
{
	//2->n-1 之间的数字
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}


int is_leap_year(int n)
{
	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}


int main()
{
	//打印100-200之间的素数
	if (0)
	{
		int i = 0;
		int count = 0;
		for (i = 101; i <= 200; i += 2)
		{
			if (is_prime(i) == 1)
			{
				printf("%d ", i);
				count++;
			}
		}
		printf("\ncount=%d\n", count);


	}

	//打印1000-2000之间的闰年
	//能被4整除但是不能被100整除
	//能被400整除
	if (0)
	{
		int year = 0;
		int count = 0;
		for (year = 1000; year <= 2000; year += 2)
		{
			if (is_leap_year(year) == 1)
			{
				printf("%d ", year);
				count++;
			}
		}
		printf("\ncount=%d\n", count);

	}

	//整形有序数组的二分查找
	if (0)
	{
		int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
		int key = 7;
		int sz = sizeof(arr) / sizeof(arr[0]);
		//找到了返回找到的位置的下标
		//找不到返回-1
		int ret = binary_search(arr, key, sz);
		if (-1 == ret)
		{
			printf("no found\n");
		}
		else
		{
			printf("found it:%d\n", ret);
		}
	}



	return 0;
}