#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
	//二进制转换为十进制
	//int n = 0;
	//scanf("%", &n);
	/*char  arr[] = { 0 };
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		scanf("%c ", &arr[i]);
	}
	int sz = strlen(arr);
	printf("%d", sz);*/

	/*int n = 0;
	int num = 0;
	int d = 0;
	int i = 0;
	scanf("%d", &n);
	while (n)
	{
		n = n / 10;
		num++;
	}*/
	//printf("%d", num);
	//1 0 1
	/*while (n)
	{
		int m = 0;
		m = n % 10;
		for (i = 0; i < num; i++)
		{
			m=m*2
		}
		n = n / 10;
	}*/
	//return 0;
//}
//int main()
//{
//	char arr[17] = {0};
//	gets(arr);
//	int len = strlen(arr);
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int m = 0;
//	if (len <= 16)
//	{
//		for (i = 0; i < len; i++)
//		{
//			m = 1;
//			if (arr[i] == '1')
//			{
//				for (j = 1; j <= len - i - 1; j++)				
//					m *= 2;
//					sum += m;
//				
//			}
//		}
//		printf("%d", sum);
//	}
//	//printf("%d", len);
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int a=m++;
//	int b=++n;
//	printf("%d %d\n", m, n);
//	printf("%d %d", a, b);
//	return 0;
//}
//冒泡排序
//int main()
//{
//	int arr[100] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	
//	int i = 0;
//	int temp = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i< n-1 ; i++)
//	{
//		int j = 0;
//		for (j = 0; j <n-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j]=arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//冒泡排序
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
//	int j = 0;
//	for (j = 0; j < n-1; j++)
//	{
//		for (i = 0; i < n - 1 - j; i++)
//		{
//			int temp = 0;
//			if(arr[i]>arr[i+1])
//				{
//				temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//				}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//操作符
//除法和取模
#include<stdio.h>
//int main()
//{
//	int a = 5;
//	//a = a / 2;
//	//a = a % 2;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	double a = 5.0% 2;//取模时两个数必须是整数
//	printf("%lf", a);
//	return 0;
//}
//
//int main()
//{
//	double a = 5.0 / 2.0;
//	printf("%lf", a);
//	return 0;
//}
//int main()
//{
//	//int a = -1;
//	int a = 16;
//	int b=a >> 1;
//	printf("%d", b);
//	return 0;
//}
//1001
//int main()
//{
//	int a = 9;
//	int b = a >> 1;
//	printf("%d", b);
//	return 0;
//}
//int main()
//{
//	int a = 11;
//	int b = a >> 1;
//	//00000000000000000000000000001010
//	printf("%d\n", b);
//	b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	//00000000000000000000000000000 011
//	//00000000000000000000000000000 101
//	//00000000000000000000000000000 001
//	printf("%d\n", c);
//	int d = a | b;
//	//00000000000000000000000000000 011
//	//00000000000000000000000000000 101
//	//00000000000000000000000000000 111
//	
//	printf("%d\n", d);
//	int e = a ^ b;
//	//00000000000000000000000000000 011
//	//00000000000000000000000000000 101
//	//00000000000000000000000000000 110
//	printf("%d", e);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后：a=%d b=%d", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	 a = a ^ b;
//	 b = a ^ b;
//	 a = a ^ b;
//	 printf("%d %d ", a, b);
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num /= 2;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int count=0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//    {
//		if(((num>>i)&1)==1)
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a = !a;
//	printf("%d", a);
//	return 0;
//}