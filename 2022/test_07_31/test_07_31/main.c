#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//int greatestCommonDivisor(int x, int y)
//{
//	// 辗转相除 法
//	// 假设   x > y
//	int ret = x%y;
//	// 20 40   40
//	while (ret)
//	{
//		x = y;
//		y = ret;
//		ret = x%y;
//	}
//	return y;
//}
//
//int main()
//{
//	
//	int ret = greatestCommonDivisor(20,40);
//	printf("%d", ret);
//	return 0;
//}

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


#include<stdlib.h>
#include<time.h>
#include <stdio.h>

void menu()
{
	printf("***************\n");
	printf("***************\n");
	printf("** 开始 猜数字 **\n");
	printf("***************\n");
	printf("***************\n");

}
int main()
{
	menu();
	srand((unsigned)time(NULL));
	int ret = rand() % 10;
	printf("请输入 你猜的数字 : ");
	int cout = 0;
	scanf("%d", &cout);
	while (1)
	{
		if (cout > ret)
		{
			printf("大了，请重新输入 : ");
			scanf("%d", &cout);
		}
		else if (cout < ret)
		{
			printf("小了，请重新输入 : ");
			scanf("%d", &cout);
		}
		else
		{
			printf("你猜对了\n");
			break;
		}
	}
	return 0;
}