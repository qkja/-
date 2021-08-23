#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int My_Search(int x)
//{
//	int sum = 0;
//	while (x)
//	{
//		sum += x % 10;
//		x /= 10;
//	}
//	if (sum % 7 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		int ret = My_Search(i);
//		if (1 == ret)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//int My_search(int x, int arr[])
//{
//	int temp = 1;
//	int i = 0;
//	if (x == 2)
//	{
//		arr[i] = x;
//		return temp;
//	}
//	else if (x>=3)
//	{
//		for (i = 3; i <= x; i++)
//		{
//			arr[0] = 2;
//			int leap = 0;
//			int j = 0;
//			for (j = 2 ; j < i; j++)
//			{
//				if (i%j == 0)
//				{
//					leap++;
//				}
//
//			}
//			if (leap == 0)
//			{
//				arr[temp] = i;
//				temp =temp+1;
//			}
//		}
//	}
//	return temp;
//}

//int My_search2(int x, int arr[])
//{
//	int temp = 1;
//	int i = 0;
//	arr[i] = 2;
//	/*if (x == 2)
//	{
//		arr[i] = x;
//		return temp;
//	}*/
//	if (x >= 3)
//	{
//		for (i = 3; i <= x; i++)
//		{
//			arr[0] = 2;
//			int leap = 0;
//			int j = 0;
//			for (j = 2; j < i; j++)
//			{
//				if (i%j == 0)
//				{
//					leap++;
//				}
//
//			}
//			if (leap == 0)
//			{
//				arr[temp] = i;
//				temp = temp + 1;
//			}
//		}
//	}
//	return temp;
//}

//int My_search3(int x, int arr[])
//{
//	int temp = 1;
//	int i = 0;
//	arr[i] = 2;
//	/*if (x == 2)
//	{
//	arr[i] = x;
//	return temp;
//	}*/
//	
//	
//		for (i = 3; i <= x; i++)
//		{
//			
//			int leap = 0;
//			int j = 0;
//			for (j = 2; j < i; j++)
//			{
//				if (i%j == 0)
//				{
//					leap++;
//				}
//
//			}
//			if (leap == 0)
//			{
//				arr[temp] = i;
//				temp = temp + 1;
//			}
//		}
//	
//	return temp;
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int lim = 0;
//	while ((scanf("%d", &lim)) != EOF)
//	{
//     int ret = My_search3(lim, arr);
//	 printf("%d\n", ret);
//	}
//	
//	
//	return 0;
//}
//double fun(int i)
//{
//	return 1.0 / (i + 5);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double sum = 0.0;
//	int i = 0;
//	for (i = 0; i <= n; i++)
//	{
//		sum += fun(i);
//	}
//	printf("%lf", sum);
//	return 0;
//}
//double fun1(int x)
//{
//	int i = 0;
//	double y = 0.0;
//	for (i = 0; i <= x; i++)
//	{
//		y += 1.0 / (i + 5);
//	}
//	return y;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%lf\n", fun1(n));
//	return 0;
//}
//void my_stract(char ch1[40], char ch2[20], int weight, int t)
//{
//	int n = weight - 1;
//	for (int i = 0; i < t; i++)
//	{
//		ch1[n] = ch2[i];
//		n++;
//	}
//}
//void my_stract(char )
//int main()
//{
//	char ch1[40] = "adcdef";
//	char ch2[20] = "ghijk";
//	/*my_stract(ch1, ch2, sizeof(ch1) / sizeof(ch1[0]), sizeof(ch2) / sizeof(ch2[0]));
//*/
//
//	my_stract(ch1, ch2, sizeof(ch1) / sizeof(ch1[0]));
//	printf("%s\n", ch1);
//	return 0;
//}