#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	int leap = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			leap++;
//		}
//	}
//	if (0 == leap)
//		return 1;
//	else
//		return 0;
//}
//int is_prime_1(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int leap = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			leap++;
//		}
//		/*if (is_prime_1(i) == 1)
//		{
//			printf("%d ", i);
//			leap++;
//			
//		}*/
//	}
//	printf("\n%d", leap);
//	return 0;
//}
//int main()
//{
//	int n = 120;
//	printf("%d ", printf("%d"));
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 543)));
//	return 0;
//}
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 400 != 0)|| (n % 400 == 0) )
//		return 1;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if(is_leap_year(year)==1)
//			printf("%d ",year);
//	}
//	return 0;
//}
//int binary_search(int arr[], int k, int sz)
//{
//	//算法的实现
//	int left = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//数组传参不能用这中方法
//	//传递的是首元素的地址
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找
//	//找到返回下标，找不到返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int ret=binary_search(arr, k, sz);
//	if (-1 == ret)
//	{
//		printf("找不到指定数字");
//	}
//	else
//		printf("找到了，下标是：%d\n", ret);
//	return 0;
//}
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d", num);
//	Add(&num);
//	printf("%d", num);
//	Add(&num);
//	printf("%d", num);
//	Add(&num);
//	printf("%d", num);
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//int Add(int a, int b);
//#include"add.h"
//int main()
//{
//	int x = 10;
//	int y = 19;
//	int ret = Add(x, y);
//	printf("%d", ret);
//	return 0;
//}
//int Add(int a, int b)
//{
//	return a + b;
//}
