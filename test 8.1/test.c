#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*if ((a = b) != 0)
//		printf("hehe");*/
//	if (a == b)
//		printf("hehe");
//	return 0;
//}
//int sceach_min(int arr[], int x)
//{
//	/*int i = 0;
//	int min = arr[0];
//	for(i=0;i<x;i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//		
//	}
//	return i;*/
//	int i = 0;
//	int k = 0;
//	for (i = 1; i < x; i++)
//	{
//		if (arr[i] < arr[k])
//			k = i;
//	}
//	return k;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	int min=sceach_min(arr, n);
//	printf("%d", min);
//	return 0;
//}
//int test(int x)
//{
//	int num = 1;
//	while (x)
//	{
//		num *= (x % 10);
//		x /= 10;
//	}
//	return num;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int len = test(n);
//	printf("%d", len);
//	return 0;
//}
//int test_1(int n)
//{
//	int aa[100] = { 0 };
//	int i = 0;
//	int m = 0;	
//		for (i = 2; i <=n; i++)
//		{   
//			int count = 0;
//			int j = 0;
//			for (j = 2; j < i; j++)
//			{
//				if (i % j == 0)
//					count++;
//			}
//			if (count == 0)
//			{
//				aa[m] = i;
//				m++;
//			}
//		}
//		return m;
//}
//int test_2(int n)
//{
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	int aa[100] = { 0 };
//	for (i = 2; i <= n; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//	    }
//		if (i == j)
//			aa[m++] = i;
//	}
//	return m;
//}
//int main()
//{
//	int lim = 0;
//	scanf("%d", &lim);
//	//int aa[100] = { 0 };
//	int len1 = test_1(lim);
//	int len2 = test_2(lim);
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//	return 0;
//}
//int max(int arr[],int x)
//{
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		if (arr[i] > max)
//		{
//			if (arr[i] % 2 == 0)
//				max = arr[i]; 
//		}
//	}
//	return max;
//}
//int fun(int aa[], int x)
//{
//	int i = 0;
//	int amax = -1;
//	for (i = 0; i < x; i++)
//	{
//		if (aa[i]% 2 == 0)
//		{
//			if (aa[i] > amax)
//			{
//				amax = aa[i];
//			}
//		}
//	}
//	return amax;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[100] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	int max_even=max(arr,n);
//	int max_even_1=fun(arr,n);
//	printf("%d\n", max_even);
//	printf("%d\n", max_even_1);
//	return 0;
//}
