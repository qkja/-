#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[10][10] = { 0 };
//	int i = 0;
//	scanf("%d %d ", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d ", &arr[i][j]);
//		}
//	}
//	int x = 0;
//	int y = 0;
//	scanf("%d %d ", &x, &y);
//	printf("%d ", arr[x - 1][y - 1]);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d ", &n,&m);
//	int arr[100] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n * m; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	//1 1 1 1 1 1
//	//    3     6
//	
//	i = 0;
//	for (j = 1; j < m*n; j++)
//	{
//		printf("%d ", arr[i]);
//	    i++;
//		if(j%m==0)
//		{
//		  printf("\n");
//	    }
//	}
//	
//	return 0;
//}
//指针进阶
//字符指针
//数组指针
//int main()
//{
//	printf("%d", sizeof(int*));
//	return 0;
//}
//test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pa=&ch;
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char *pc=arr;
//	printf("%s\n", pc);
//	printf("%s\n", arr);
//	return 0;
//}
//int  main()
//{
//	char* p = "abcdef";
//	// "abcdef"常量字符串，其实是把a的地址给p
//	printf("%s", p);
//	int n = 10;
//	int* pa = &n;
//	printf("%d", *pa);
//	return 0;
//}
////printf打印时遇到'\0'就停止了
//int main()
//{
//	char arr[] = "abcdef\0hehgg";
//	printf("%s", arr);
//	return 0;
//}
//问题代码
//segmentfault .com 段错误

//int main()
//{
//	const char* p = "abcdef";//不能再修改了，最好加上const
//	//*p = 'w';
//	printf("%s", p);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char *p1= "abcdef";
//	char *p2= "abcdef";
//	//if (arr1 == arr2)
//	if (p1 == p2)
//		printf("hehe");
//	else
//		printf("haha");
//	return 0;
//}
//int main()
//{
//	const int a = 10;
//	const int b = 10;
//	if (a == b)
//		printf("hrhr");
//	return 0;
//}

//指针数组

//int main()
//{
//	int arr[10] = { 0 };// 整型数组
//	char ch[10] = { 0 };//字符数组
//	int* ch[10];//存放整型指针的数组
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 10;
//	int c = 10;
//	int d = 10;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}
//不是这么用的
//下面才是
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int arr4[] = { 4,5,6,7,8 };
//	int* parr[] = { arr1,arr2,arr3,arr4 };
//	 printf("%d", *parr[0]);
//	/*int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//		
//	}*/
//	return 0;
//}
//数组指针 -指针
//int main()
//{
//	//int* p = NULL;    //p是整型指针，指向整型的指针
//	//char* pa = NULL;  //pa是字符指针，指向字符的指针
//	//                  //pc时数组指针，指向数组的指针
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	printf("%p\n", p);
//	printf("%p\n", &arr);
//	printf("%p\n", arr);
//	printf("%d\n", *arr);
//	printf("%d\n", **p);
//	return  0;
//}
//int main()
//{
//	char* arr[5];
//	char*(*pa)[5] = &arr;
//	return 0;
//}
//int main()
//{
//
//}
//数组名 &数组名
//数组指针的用法
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//	/*int(*pa)[10] = &arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));
//	}*/
//	/*for(i = 0; i < 10; i++)
//	{
//		int len = (*pa)[i];
//		printf("%d ", len);
//	}*/
//	return 0;
//}
//int main()
//{
//	printf("hehe");
//	return 0;
//}
//数组指针至少要用到二维数组中，才好用
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*pa)[5],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(pa + i) + j));
//		}
//		printf("\n");
//	}
//}
//int  main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr,3,5);
//	printf("\n");
//	print2(arr,3,5);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	static int a = 0;
//	a = 1;
//	a = 4;
//	printf("%d",a);
//	return 0;
//}
