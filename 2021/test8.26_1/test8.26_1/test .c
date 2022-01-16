#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//
//	//数组指针
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int(*p)[10] = &arr;  //[] 的结合性要高于*
//	
//	return 0;
//}

//void test(int arr1[10])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr1[i] = i;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void test_1(int arr[],int x,int y)
//{
//	int i = 0;
//	for (i = 0; i < x*y; i++)
//	{
//		printf("%d ", arr[i]);
//		if ((i + 1) % y == 0)
//		{
//			printf("\n");
//		}
//	}
//}
//2  3
// 1 2 3 4 5 6
// 1 2 3
// 4 5 6
//int main()
//{
//	int arr[100] = { 0 };
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n*m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	test_1(arr,n,m);
//	return 0;
//}

//void  test(int(*p)[10][10],const int arr[],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			(*p)[i][j] = arr[m];
//			m++;
//		}
//	}
//	/*for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", (*p)[i][j]);
//		}
//		printf("\n");
//	}*/
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int arr1[10][10] = { 0 };
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n*m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	test(&arr1, arr, n, m);
//	for (i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char*(*pa)[5] = &arr;
//	return 0;
//	
//}



//数组指针的用法

//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int (*pa)[10]=&arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));
//	}
//	printf("\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}

//数组指针的用法 进阶
//至少用到二维数组以上


//void Print(int arr[3][5], int x, int y)
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
//void Print(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	Print(arr,3,5);  //数组名就是首元素地址  这里的arr相当于&数组名
//	                 //1 2 3 4 5       //相当于首元素
//	                 //2 3 4 5 6
//	return 0;        //3 4 5 6 7
//}
//int main()
//{
//	
//	return 0;
//}


//
//void test(vpid)
//{
//  #define MAX 10
//}
//int main()
//{
//
//	printf("%d\n", MAX);
//	test();
//	return 0;
//}
//#define C  //只是定义了一个Print  没说真假
//int main()
//{
//#ifdef C   // 判定宏是是否被定义   //#ifndef 
//	printf("hehehehe\n");
//	printf("hehehehe\n");
//#else
//	printf("hahaha\n");
//#endif
//	return 0;
//}
//#define C 10
//int main()
//{
//#if C
//	printf("hahaah\n");
//#else 
//	printf("heheheh\n");
//#endif
//	return 0;
//}


//条件编译就是一个代码裁剪问题
//int test(const int arr[10])
//{
//	int i = 0;
//	int temp = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] >= 60)
//		{
//			temp++;
//		}
//	}
//	return temp;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d ", arr[i]);
//	}
//	int ret=test(arr);
//	printf("%d\n", ret);
//}
