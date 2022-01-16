#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    char* str3 = "hello bit.";
//    char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}

//ABCD左旋一个字符得到BCDA  ADCB BCDA
//
//ABCD左旋两个字符得到CDAB  BADC  CDAB

#include <stdio.h>
#include<string.h>

void My_reserve(char arr[], int sz)
{
	char* left = arr;
	char* right = arr + sz - 1;
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}


//int main()
//{
//	char arr[10] = { 0 };
//	gets(arr);
//	int k = 0;
//	scanf("%d", &k);
//	int sz = strlen(arr);
//	My_reserve(arr, k);
//	My_reserve(arr+k,sz-k);
//	My_reserve(arr, sz);
//	//字符串逆置
//	//My_reserve(arr, sz);
//	//arr= (char*)getchar(arr);
//	printf("%s", arr);
//	return 0;	
//}

//int main()
//{
//	int a[3][3] = { 0 };
//	int* p = a[0];
//	printf("%d", *p);
//	printf("%d", *(p+1));
//	return 0;
//}
#define ROW 4
#define COL 4

int searchData(int arr[ROW][COL], int val)
{
	int i = 0;
	int j = COL - 1;
	int tmp = arr[i][j];
	while (1)
	{
		if (tmp == val)
		{
			return 1;
		}
		else if (tmp < val && j >= 0)
		{
			tmp = arr[++i][j];
		}
		else if (tmp > val && j >= 0)
		{
			tmp = arr[i][--j];
		}
		else
		{
			return 0;
		}
	}

}

//int main()
//{
//	int arr[ROW][COL] = { 1,2,3,4,2,3,4,5,3, 4,5,6,5 ,6 ,7 ,8};
//	int ret = searchData(arr, 8); 
//	if (ret)
//	{
//		printf("存在这个数\n");
//	}
//	else
//	{
//		printf("不存在这个数\n");
//	}
//	//printf("%d", ret);
//	return 0;
//}

#include<stdio.h>
//int main()
//{
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	return 0;
//}

#define N 2
#define M N + 1
#define NUM (M + 1) * M / 2

int f(int n)
{
	static int i = 1;
	if (n >= 5)
		return n;
	n = n + i;
	i++;
	return f(n);
}
//int main()
//{
//	printf("%d", f(1));
//	//printf("%d\n", NUM);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = n * (1 + n) - 1;
//	int arr[50] = { 0 };
//	for (int i = n-1; i >=0; i--)
//	{
//		arr[i] = ret;
//		ret -= 2;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (i == n - 1)
//		{
//			printf("%d\n", arr[i]);
//			return 0;
//		}
//		printf("%d+", arr[i]);
//	}
//}

//int main()
//{
//	int n = 0;
//	int sum = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		sum = n * 2 + n * (n - 1) / 2 * 3;
//		printf("%d", sum);
//	}
//	return 0;
//}

#include <stdlib.h>
#include <stdio.h>

int main()
{
	int num;
	while (scanf("%d", &num) != EOF)
	{
		int tri = num * num * num;
		for (int i = 1; i < 65000; i += 2)
		{
			int sum = (i + (i + (num - 1) * 2)) * num / 2;
			if (sum == tri)
			{
				for (int j = 0; j < num - 1; j++)
				{
					printf("%d+", i);
					i += 2;
				}
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}





















