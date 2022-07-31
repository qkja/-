#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int isPrime(int n)
//{
//	if (n == 1)
//	{
//		return 0;
//	}
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int isLeap(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	for (size_t i = 1000; i < 2000; i++)
//	{
//		if (isLeap(i))
//			printf("%d ", i);
//	}
//	return 0;
//}