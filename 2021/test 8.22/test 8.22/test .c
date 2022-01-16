#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//#define MAX 100
//int main()
//{
//	/*printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);*/
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d data:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	printf("%d\n", __STDC__);//VS 不支持STCDC
//	return 0;
//}
//#define MAX 100
//#define STR "hehe"
//#define reg register
//int main()
//{
//	/*printf("%d\n", MAX);
//	printf("%s\n", STR);
//	printf(STR);
//	reg int a = 10;*/
//	/*int i = 0;
//	for (i = 0; i < 3; i++)
//		printf("%d ", i);*/
//
//	return 0;
//}
//#define 后面要有 ； 吗
//C      数据结构        C++        用C++学习高级数据结构      LINC     数据库
//#define max 100;   //尽量不加
//
//int main()
//{
//	int a = max;
//	printf("%d\n", a);
//	return 0;
//}
//#define 定义宏
//
//#define SQUARE(X) (X)*(X)   //SQUARE 就是宏
//int main()
//{
//	/*int a = SQUARE(5);
//	printf("%d\n", a);*/
//	int ret = SQUARE(5 + 1);//不是传参 而是替换 X*X  5+1*5+1
//	printf("%d\n", ret);
//	return 0;
//}
//写宏的时候 看看表达式的优先级  避免出错  尽量加括号
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//寻找最大的偶数
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", );
//	}
//
//	return 0;
//}
//void Print(int a)
//{
//	printf("the value of a is %d\n", a);
//}
//#define  PRINT(X)  printf("the value of is %d\n",X)
//#define  PRINT(X)  printf("the value of " #X " is %d\n",X)
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello"" world\n");
//	//printf("he""llo world\n");
//	int a = 10;
//	int b = 20;
//	//PRINT(a);
//	//PRINT(b);//怎么办
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}
int search_max_even(int arr[] , int n)
{
	int max = 1;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if ((arr[i] % 2 == 0) && (arr[i]>max))
		{
			max = arr[i];
		}
	}
	return max;

	/*do
	{
		if ((arr[i] % 2 == 0) && arr[i]>max)
		{
			max = arr[i];
		}

	} while (i);*/
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[100] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//寻找最大的偶数
	//找到返回
	//找不到返回1
	int ret = search_max_even(arr,n);
	if (ret == 1)
	{
		printf("这些数据没有偶数\n");
	}
	else
	{
		printf("%d\n", ret);

	}
	
	
	return 0;
}
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("hhe\n%d", i--);;
//		//i--;
//	} while (i);
//	return 0;
//}
