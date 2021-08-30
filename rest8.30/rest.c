#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void My_AveValue(double arr[5][3])
//{
//	int i = 0;
//	double ave[3] = { 0.0 };
//	//double sum = 0.0;
//	//int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			if (j == 0)
//			{
//				ave[0] += arr[i][j];
//			}
//			else if (j == 1)
//			{
//				ave[1] += arr[i][j];
//			}
//			else if (j == 2)
//			{
//				ave[2] += arr[i][j];
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%lf\n", ave[i] / 5.0);
//	}
//}
//
//void AveValue(double arr[5][3])
//{
//	int i = 0;
//	double ave[3] = { 0.0 };
//	int j = 0;
//	for (j = 0; j < 3; j++)
//	{
//		for (i = 0; i < 5; i++)
//		{
//			ave[i] += arr[i][j];
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%lf\n", ave[i] / 5.0);
//	}
//}
//int main()
//{
//	double score[5][3] = { 0.0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%lf", &score[i][j]);
//		}
//	}
//	My_AveValue(score);
//	return 0;
//}


//int My_SeaMaEv(int arr[],int x)
//{
//	int i = 0;
//	int max = 0;
//	for (i = 0;i < x; i++)
//	{
//		if ((arr[i] % 2 == 0) && (arr[i] > max))
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//
//int SeaMaEv(int* p, int x)
//{
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < x; i++)
//	{
//		if ((*(p + i) % 2 == 0) && (*(p + i) > max))
//		{
//			max = *(p + i);
//		}
//	}
//	return max;
//}
//int main()
//{
//	int n = 0;
//	int arr[10] = { 0 };
//	int i = 0;
//	scanf("%d", &n);
//	for ( i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int ret = My_SeaMaEv(arr,n);
//	int ret_1 = SeaMaEv(arr,n);
//	printf("最大的偶数是：%d\n", ret);
//	printf("最大的偶数是：%d\n", ret_1);
//	return 0;
//}