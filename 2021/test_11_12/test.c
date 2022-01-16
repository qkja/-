#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int BinaryNum(int x)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		int ret = (x >> i) & 1;
		if (1 == ret)
			count++;
	}
	return count;
}

void fun(int x)
{
	int i = 32;
	short num[32] = { 0 };
	if (x < 0)
	{
		num[0] = 1;
		x = -x;
	}

	while (x)
	{
		i--;
		num[i] = x % 2;
		x /= 2;
	}

	printf("偶数：");
	for (i = 0; i < 32; i+=2)
	{
		printf("%d ", num[i]);
	}

	printf("\n奇数：");
	for (i = 1; i < 32; i += 2)
	{
		printf("%d ", num[i]);
	}
	//0 2 4



}

int main()
{
	fun(-2147483647);
	return 0;
}

//int main()
//{
//
//
//
//	/*int a = 0xffffffff;
//	printf("%d", a);*/
//	fun(-2147483647);
//
//	//int a = 1;
//	//int i = 31;
//	//short num[32] = { 0 };
//	//while (i>=0)
//	//{
//	//    int ret = a % 2;
//	//	/*if (ret < 0)
//	//	{
//	//		ret = -ret;
//	//	}*/
//	//	num[i] = ret;
//	//	//-1 
//	//	a /= 2;
//	//	i--;
//	//}
//	//for (i = 0; i < 32; i++)
//	//{
//	//	printf("%d ", num[i]);
//	//}
//	return 0;
//}

//int main()
//{
//	/*int a = 0;*/
//	//0110 1110
//	//0 1  1 1
//	// 1 0  1 0
//	//将一个数改为 二进制
//	//放到一个short数组内
//	//打印
//
//	//123%10
//	//	123/10
//	//int i = 0;
//	//short num[32] = { 0 };
//	//while (a == 0)
//	//{
//	//    int ret = a % 2;
//	//	if (ret < 0)
//	//	{
//	//		ret = -ret;
//	//	}
//	//	num[i] = ret;
//	//	//-1 
//	//	a /= 2;
//	//	i++;
//	//}
//	//-/*1 = 2*/
//
//	/*printf("%d", -1 / 2);*/
//
//	return 0;
//}

//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int c = a ^ b;
//	printf("%d\n", BinaryNum(c));
//	return 0;
//}

//int main()
//{
//	
//	int count = BinaryNum(15);
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("交换前 a = %d b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后 a = %d b = %d\n", a, b);
//	return 0;
//}



//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//11111111 11111111 11111111 11111111