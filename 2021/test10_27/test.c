#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<windows.h>



int main()
{


	/*int n = -11;
	while (n != 0)
	{
		
	}*/
	//printf("%d", ' ');
	//i/*nt n = 0;
	/*int dev = 0;
	scanf("%d", &n);
	while (n != 0)
	{
		int dig = n % 10;
		n /= 10;
		dev = dev * 10 + dig;
	}
	printf("%d\n", dev);*/
	return 0;
}
//int main()
//{
//	/*int n = 0;
//	scanf("%d", &n);
//	int arr[10] = { 0 };
//	int i = 0;
//	while(n > 0)
//	{
//		arr[i] = n % 10;
//		n /= 10;
//		i++;
//	}
//	if (i == 0)
//	{
//		printf("%d ", arr[i]);
//	}
//	for(int j=0;j<i;j++)
//
//	printf("%d ", arr[j]);
//	return 0;*/
//}
//int main()
//{
//	char arr[] = { '\\','/','|','-' };
//	int ret = 0;
//	//printf("%c", arr[0]);
//	for (int i = 0; i < 1000; i++)
//	{
//		ret = i % 4;
//		printf("[%c]\r", arr[ret]);
//		Sleep(100);
//		
//		//printf("\r");
//	}
//	return 0;
//}
//int fun(int x)
//{
//	//8
//	while (x > 0)
//	{
//		if (x % 10 == 9)
//			return 1;
//		else
//		{
//			x /= 10;
//		}
//	}
//
//
//}
//int main()
//{
//	int ret = 0;
//	int sum = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		ret = i;
//		while (ret > 0)
//		{
//			if (ret % 10 == 9)
//				break;
//			else
//			{
//				ret /= 10;
//			}
//		}
//		if (ret != 0)
//		{
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//9 19 29 89   9
// //90      99  10
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//
//
//
//
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int k = 5;
//	//int left = 0;
//	//int right = sizeof(arr) / sizeof(arr[1]) - 1;
//	//int mid = 0;
//	//while (left <= right)
//	//{
//	//	mid = (left + right) / 2;
//	//	if (arr[mid] < k)
//	//	{
//	//		left = mid + 1;
//	//	}
//	//	else if (arr[mid] > k)
//	//	{
//	//		right = mid - 1;
//	//	}
//	//	else
//	//	{
//	//		printf("找到了，下标是 :%d\n", mid);
//	//		break;
//	//	}
//	//}
//	//if (left > right)
//	//{
//	//	printf("没找到了\n");
//	//}
//	/*for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d ", i * j);
//		}
//
//		printf("\n");
//	}*/
//
//	//int arr[10] = {0};
//
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	scanf("%d", &arr[i]);
//	//}
//	//int max = arr[0];
//	//for (int i = 1; i < 10; i++)
//	//{
//	//	if (arr[i] > max)
//	//	{
//	//		max = arr[i];
//	//	}
//	//}
//	//printf("%d\n", max);
//
//
//
//
//
//
//
//
//	/*float sum = 0.0;
//	float ret = 0.0;
//
//	for (int i = 0; i <100; i++)
//	{
//		ret = 1.0f / (i+1);
//		
//		if (i % 2 == 1)
//			ret = -ret;
//
//		sum += ret;
//	}
//	printf("%f\n", sum);*/
//	return 0;
//}