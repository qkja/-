#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>

int main()
{
	register int a = 10;
	int *p = &a;
	//错误	1	error C2103: 寄存器变量上的“&”	
	return 0;
}









//auto int i = 10;

//int main()
//{
//	auto a = 10;
//	auto b = 10.0;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	system("pause");
//	return 0;
//}


















//struct Peo
//{
//	char* name;
//	int age;
//};
//typedef struct Peo per;

//int fun(void)
//{
//	return 0;
//}
//void show(char*p)
//{
//	assert(p);
//	printf("hehehehe\n");
//	//调试代码用
//}


//
//int main()
//{
//	/*printf("%d", printf("%d", printf("%d", 654)));*/
//
//	//65431
//	//int ret = printf("%s","abcd");
//	//printf("\n%d\n", ret);
//
//	/*per lisi = { "lisi", 18 };
//	per* ps = NULL;
//	lisi.name = (char*)malloc(10);
//	strcpy(lisi.name, "Tom");
//	show(lisi.name);*/
//	//printf("%s %d\n", lisi.name, lisi.age);
//    /*	char*ps = (char**/
//	/*int ret = fun()*//*;*/
//	system("pause");
//	return 0;
//}
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}
//int main()
//{
//	//char ch = 0;
//	//scanf("%c", &ch);
//	//switch (ch)
//	//{
//	//case 'a':
//	//	printf("hehehe\n");
//	//	break;
//	//case 'b':
//	//	printf("hahaha\n");
//	//	break;
//
//	//}
//	/*system("pause");*/
//	int ret = func(1);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}

//int Deprime(int x)
//{
//	
//	if (x > 2)
//	{
//		int i = 2;
//		for (i = 2; i <= sqrt(x); i++)
//		{
//			if (0 == x%i)
//				return 0;
//		}
//		return 1;
//	}
//	return 1;
//}
//
//int Isleap(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	return 0;
//}
//
//int Max_divisor(int x, int y)
//{
//
//	int t = y;
//	if (x < y)
//	{
//		t = x;
//		x = y;
//		y = t;
//	}
//	while (x%y != 0)
//	{
//		t = x%y;
//		x = y;
//		y = t;
//	}
//	return t;
//}
//int main()
//{
//
//
//	/*auto f = 1.1f;
//	printf("%d", f);*/
//
//
//
//
//
//	/*int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", Max_divisor(a, b));
//	
//      */
//
//    /*for (int i = 1000; i <= 2000; i++)
//	{
//		if (1 == Isleap(i))
//		{
//            printf("%d ", i);
//		}
//	  
//	}*/
//
//
//
//  /*  int i = 0;
//	while (i < 100)
//	{
//		i += 3;
//		if (i < 100)
//		{
//            printf("%d ", i);
//		}
//		
//	}*/
//
//	/*for (int i = 1; i <= 100; i++)
//	{
//
//	}*/
//
//	/*int a = 0;
//	int b = 0;
//	int c = 0;
//	int t = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d\n", a, b, c);*/
//	//
//	//b a
//
//	/*int max1 = a>b?a:b;
//	int max2 = ma*/
//	/*for (int i = 1000; i <= 2000; i++)
//	{
//		if (1 == Isleap(i))
//			printf("%d ", i);
//	}
//
//
//
//
//*/
//	/*for (int i = 100; i < 200; i++)
//	{
//		if (1 == Deprime(i))
//		{
//			printf("%d ", i);
//		}
//	}*/
//	system("pause");
//	return 0;
//}


//int main()
//{
//
//
//		for (int i = 100; i < 200; i++)
//		{
//			if (1 == Deprime(i))
//				printf("%d ", i);
//		}
//	
//		printf("\n");
//
//	//int count = 0;
//	for (int i = 100; i < 200; i++)
//	{
//		int count = 0;
//		for (int j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				count++;
//			}
//		}
//		if (0 == count)
//		{
//			printf("%d ", i);
//			//count = 0;
//		}
//	}
//	//int count = 0;
//	//for (int j = 5; j < 200; j++)
//	//{
//	//	for (int i = 2; i < j; i++)
//	//	{
//	//		if (j%i == 0)
//	//		{
//	//			count++;
//	//		}
//	//	}
//	//	if (0 == count)
//	//		printf("%d ", j);
//	//}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	/*for (int i = 100; i < 200; i++)
//	{
//		if (1 == Deprime(i))
//			printf("%d ", i);
//	}*/
//
//	//printf("\n");
//
//	int count = 0;
//	for (int j = 100; j < 200; j++)
//	{
//		for (int i = 2; i < j; i++)
//		{
//			if (j%i == 0)
//			{
//				count++;
//			}
//		}
//		if (0 == count)
//			printf("%d ", j);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//
//	int ret = Deprime(9);
//	printf("%d", ret);
//	/*int num = 100;
//	while (num < 200)
//	{
//		
//	}*/
//	system("pause");
//	return 0;
//}