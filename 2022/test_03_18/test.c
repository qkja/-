#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// 请计算一下Func1中++count语句总共执行了多少次？
//void Func1(int N)
//{
//	int count = 0;
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			++count;
//		}
//	}
//	for (int k = 0; k < 2 * N; ++k)
//	{
//		++count;
//	}
//	int M = 10;
//	while (M--)
//	{
//		++count;
//	}
//}
//
////int val = 0;
////
////int Fib(int n)
////{
////	val++;
////	if (n < 3)
////	{
////		return 1;
////	}
////	return Fib(n - 1) + Fib(n - 2);
////}
////
////int main()
////{
////	int n = 40;
////	Fib(n);
////	printf("递归执行的次数 : %d\n", val);
////	return 0;
////}
//
//void Func2(int N, int M)
//{
//	int count = 0;
//	for (int k = 0; k < M; ++k)
//	{
//		++count;
//	}
//	for (int k = 0; k < N; ++k)
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}
//// 计算Func3的时间复杂度？
//void Func3(int N)
//{
//	int count = 0;
//	for (int k = 0; k < 100; ++k)
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}
//
//int BinarySearch(int* a, int n, int x)
//{
//	assert(a);
//	int begin = 0;
//	int end = n - 1;
//	while (begin < end)
//	{
//		int mid = begin + ((end - begin) >> 1);
//		if (a[mid] < x)
//			begin = mid + 1;
//		else if (a[mid] > x)
//			end = mid;
//		else
//			return mid;
//	}
//	return -1;
//}
//
//void BubbleSort(int* a, int n)
//{
//	assert(a);
//	for (size_t end = n; end > 0; --end)
//	{
//		int exchange = 0;
//		for (size_t i = 1; i < end; ++i)
//		{
//			if (a[i - 1] > a[i])
//			{
//				Swap(&a[i - 1], &a[i]);
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//			break;
//	}
//}
//
//// 计算Fibonacci的空间复杂度？
//// 返回斐波那契数列的前n项
//long long* Fibonacci(size_t n)
//{
//	if (n == 0)
//		return NULL;
//	long long* fibArray = (long long*)malloc((n + 1) * sizeof(long long));
//	fibArray[0] = 0;
//	fibArray[1] = 1;
//	for (int i = 2; i <= n; ++i)
//	{
//		fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
//	}
//	return fibArray;
//}


int* singleNumbers(int* nums, int numsSize, int* returnSize)
{
	int* p = (int*)malloc(sizeof(int) * 2);
	if (p == NULL)
	{
		return NULL;
	}
	int ret = 0;
	for (int i = 0; i < numsSize; i++)
	{
		ret ^= nums[i];
	}
	//得到 最右边的 1
	int j = 0;
	for (j = 0; j < 32; j++)
	{
		if (((ret >> j) & 1) == 1)
		{
			break;
		}
	}

	int* arr1 = (int*)malloc(sizeof(int) * (numsSize));
	int* arr2 = (int*)malloc(sizeof(int) * (numsSize));

	int m = 0;
	int n = 0;
	for (int i = 0; i < numsSize; i++)
	{
		if ((1 & (nums[i] >> j)) == 0)
		{
			arr1[m++] = nums[i];
		}
		else
		{
			arr2[n++] = nums[i];
		}
	}
	ret = 0;
	for (int i = 0; i < m; i++)
	{
		ret ^= arr1[i];
	}
	p[0] = ret;
	ret = 0;
	for (int i = 0; i < n; i++)
	{
		ret ^= arr2[i];
	}
	p[1] = ret;

	*returnSize = 2;
	free(arr1);
	free(arr2);
	return p;
}

//int main()
//{
//	int arr[] = { 4,1,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	int* p = singleNumbers(arr, sz, &ret);
//	for (int i = 0; i < 2; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}

void test()
{
	int* p1 = (int*)malloc(40);
	printf("%p\n", p1);
	p1 = (int*)realloc(p1, 100000);
	printf("%p\n", p1);
	free(p1);
}
int main()
{
	test();
	return 0;
}