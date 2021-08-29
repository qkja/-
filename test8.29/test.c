#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void test(void)
//{
//	
//	int i = 0;
//	for (i = 0; i <=1000; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				sum += j;
//			}
//		}
//		if (sum == i)
//
//		{
//			printf("%d ", i);
//		}
//	}
//}
//
//void test_1(void)
//{
//	int i = 0;
//	int j = 0;
//	int s = 1;
//	for (i = 2; i <= 1000; i++)
//	{
//		s = 1;
//		for (j = 2; j  < i; j++)
//		{
//			if (i % j == 0)
//			{
//				s += j;
//			}
//			
//		}
//		if (s == i)
//		{
//	 		printf("%d ", i);
//		}
//	}
//}
//int main()
//{
//	test();
//	printf("\n");
//	test_1();
//	return 0;
//}


//int search_Max(int arr[],int n)
//{
//	int max = arr[0];
//	int leap = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			leap = i;
//	    }
//	}
//	return leap;
//}
//int search_Max_1(int* p, int x)
//{
//	int max = *p;
//	int m = 0;
//	for (int i = 1; i < x; i++)
//	{
//		if (*(p + i) > max)
//		{
//			max = *(p + i);
//			m = i;
//		}
//	}
//	return m;
//
//}
//
////int search_Max_2(int(*p)[], int n)
////{
////	int m = 0;
////	for (int i = 1; i < n; i++)
////	{
////		int max = **p;
////		if (*(*p + i) > max)
////		{
////			max = *(*p + i);
////			m = i;
////		}
////	}
////	return m;
////}
//int main()
//{
//	int n = 0;
//	int arr[100] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	//找到了返回下标
//	int ret = search_Max(arr , n);
//	int ret_1 = search_Max_1(arr , n);
//	//int ret_2 = search_Max_2(&arr , n);
//	printf("%d\n", ret);
//	printf("%d\n", ret_1);
//	//printf("%d\n", ret_2);
//	return 0;
//}



//数组指针还不太会
//int fun(const int x)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 2; i <= x / 2; i++)
//	{
//		if (x % i == 0)
//		{
//			sum += i;
//		}
//	}
//	return sum;
//}
//int fun_1(const int d)
//{
//	int sum = 0;
//	for (int i = 2; i < d; i++)
//	{
//		if (d % i == 0)
//		{
//			sum += i;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//int ret = fun(n);
//	int ret_1 = fun_1(n);
//	//printf("%d\n", ret);
//	printf("%d\n", ret_1);
//	return 0;
//}
//#include<string.h>
//int fun(char ch[], int x)
//{
//	
//	int sum = 0;
//	
//	//是负数
//	if (ch[0] == '-')
//	{
//		for (int i = 1; i < x; i++)
//		{   int d = 0;
//			int j = 0;
//			for (j = 0; j < x-i-1; j++)
//			{
//				d = (int)ch[i];
//			
//			}
//			sum += d;
//		}
//	}
//   //是正数
//	/*else
//	{
//
//	}*/
//	return sum;
//}
//int main()
//{
//	char ch[] = "-1234";
//	int sz = strlen(ch);
//	int ret = fun(ch, sz);
//	printf("%d\n", ret);
//	return 0;
//}
//#define  STR(x,n)  x##e##n
//int main()
//{
//	printf("%lf", STR(3.14, 2));
//	return 0;
//}
//int main()
//{
//	/*int i = 0;
//	int j = 1;
//	for (i = 0; i < 4; i++)
//	{
//		j *= 10;
//	}*/
//
//	char ch = '2';
//	int j = ch;
//	int n = (int)ch;
//	printf("%d\n", j);
//	printf("%d\n", n);
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	//if (a + 1)  //只判断逻辑
//	//{
//	//	printf("%d\n", a);
//	//}
//	if (!a)
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}


//int main()
//{
//	printf("%lf\n", 1.0 / 1.0);
//	return 0;
//}
//int main()
//{
//	int a = 012;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	printf("%lf\n", 1.0 / 1.0);
//	return 0;
//}
//int main()
//{
//	int a；;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	float a=3.14;
//	double d = a;
//	printf("%f", 3.14);
//	return 0;
//}



//结构体内存的大小
//struct S
//{
//	int a;
//	char ch;
//	int c ;
//	double d;
//
//};
//int main()
//{
//
//	printf("%d\n", sizeof(struct S));
//	printf("%d\n", sizeof(struct S*));
//	return 0;
//}

//struct S
//{
//	//double d;
//	int a;
//	/*int b;*/
//	char ch;
//};
//struct S_1
//{
//	char ch;
//	//int a;
//	int b;
//	/*double d;*/
//
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	printf("%d\n", sizeof(struct S_1));
//	return 0;
//}