#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//
//int test1(int x)
//{
//	if (x == 0)
//	{
//		return 1;
//	}
//	int ret = 1;
//	while (x>1)
//	{
//		ret *= x;
//		x--;
//	}
//	return ret;
//}
//
//int test2(int x,int y)
//{
//	return test1(x) / (test1(y) * test1(x - y));
//}









int main()
{

	/*printf("%d\n", test1(15));
	printf("%d\n", test1(16));
	printf("%d\n", test1(17));*/
	//int sum = 0;
	//int n = 0;
	//scanf("%d", &n);
	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j <= i; j++)
	//	{

	//		{
	//			printf("%5d", test2(i, j));
	//		}
	//		// printf("%5d",sum);
	//	}
	//	printf("\n");
	//}
	/*printf("%d\n", test2(5, 0));
	printf("%d\n", test2(5, 1));
	printf("%d\n", test2(5, 2));
	printf("%d\n", test2(5, 3));
	printf("%d\n", test2(5, 4));
	printf("%d\n", test2(5, 5));*/
	/*int sum = 0;
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				sum = 1;
			}
			else
			{
				sum = test1(i) / test1(j);
			}
			printf("%5d", sum);
		}
		printf("\n");
	}*/

	/*int ret = test(10);
	printf("%d\n", test(0));
	printf("%d\n", test(1));
	printf("%d\n", test(2));
	printf("%d\n", test(3));
	printf("%d\n", test(4));
	printf("%d\n", test(5));*/

	/*int a = 1;
	int b = 2;
	printf("%5d %5d", a, b);*/
	return 0;
}

//