#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//指针数组
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int d = 1;
//	int* pa[4] = { &a,&b,&c,&d };
//	return 0;
//}
//数组指针
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10]=arr;
//	//int arr
//	return 0;
//}
//int  main()
//{
//	int arr[5];        //arr是一个有5个元素的整型数组，
//	int* parr1[10];    //parr1是一个有10个指针数组，每个元素是一个指针  '[] '的优先级比 '*' 高
//	int(*parr2)[10];   //prr2 是一个指针，该指针指向了一个数组，该数组有每个元素的 
//	int(*parr3[10])[5];//parr3  是一个数组，该数组有10元素，每个元素是一个数组指针，
//	                   //该数组指针指向的数组有5个元素，每个元素是int 
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* p1 = &ch;
//	char* pa = &ch;
//	printf("%c", *p1);
//	printf("%c", *pa);
//	const char* p2 = "abcdef";//常量字符串
//	//指针数组
//	//本质上是一个数组，存放指针的
//	int* pa1[10];
//	char** p0[10];
//	//数组指针
//	int* p3;
//	int(*p4)[10];
//
//
//	return 0;
//}
//void print1(int(*p)[5],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *p[i][j]);
//			//printf("%d ", *(*(p+i)+j));
//			//printf("%d ", *(p[i]+j));
//			printf("%d ", p[i][j]);
//
//		}
//		printf("\n");
//	}
//}
//
//	int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	return 0;
//}
//数组传参
//一维数组传参
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int * arr)
//{}
//上面都正确
//void test2(int *arr2[20])
//{}
//void test2(int *arr2[])
//{}
//void test2(int **arr2)//正确
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}
//void test(int arr[3][5])//中规中矩
//{}
//void test(int arr[][5])//行可以省略
//{}
//void test(int arr[3][])//猎捕可以省略
//{}
//void test(int *arr)    //错误
//{}
//void test(int**p)      //错误
//{}
//void test(int (*p)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//二维数组传参
//	return 0;
//}
//#include<stdio.h>
//int search_max(int a, int b)
//{
//    return a > b ? a : b;
//}
//int  main()
//{
//    int math = 0;
//    int tap = 0;
//    int eng = 0;
//    scanf("%d %d %d ", &tap, &math, &eng);
//    int max = search_max(search_max(math, tap), eng);
//    printf("%d\n", max);
//    return 0;
//}
//一级指针传参
//void print(int* pa, int x)
//{
//	int i = 0;
//	for(i=0;i<x;i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p,sz);
//	return 0;
//}
//深入思考
//test(int* p)
//{}
//test2(char*  p)
//{}
//int main()
//{
//	int a = 0;
//	test(&a);
//	int * p=&a;
//	test(p);
//
//	return 0;
//}
//二级指针传参
//void test (int ** p)
//{
//
//}
//int main()
//{
//	int* arr[10] = { 0 };
//	test(arr);//可以
//	return 0;
//}
//#include<stdio.h>
//float sum(float a, float b)
//{
//    return a + b;
//}
//float div(float sum)
//{
//    return sum / 3.0;
//}
//int main()
//{
//    float  a = 0;
//    float  b = 0;
//    float  c = 0;
//    scanf("%f %f %f", &a, &b, &c);
//    float p = sum(sum(a, b), c);
//    float pa = div(p);
//    printf("%.2f %.2f", p, pa);
//    return 0;
//}