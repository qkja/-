#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//当前我们知道的内存使用方式
//创建一个变量
//创建一个数组
int a = 20;             //全局便量 - 静态区
int arr1[20] = { 0 };   // 静态区
struct S
{
	char name[20];
	int age;
};
//#include<stdio.h>
//int main()
//{
//  int b = 10;          //局部变量  -  栈区
//  int arr2[20] = { 0 };// 栈区
//  struct S arr3[50];
//  //假如只有30个学生，浪费 
//  //100 不够
//  return 0;
//}
////C语言是可以创建变常数组  -C99支持
////什么是变常数组
////int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n] = { 0 };//变常数组
//	return 0;
//}

//动态内存分配  放在 堆上
//设计的4个函数
//malloc
//free
//calloc
//realloc
// 一个一个来学
//malloc
#include<stdlib.h>
#include<string.h>
#include<errno.h>
int main()
{
	//向内存申请10个整型的空间
	int *p=(int *)malloc(10* sizeof(int));
	//int *p=malloc(10* sizeof(int));
	if (p == NULL)//开辟失败
	{
		//打印错误的一种形式
		printf("%s\n", strerror(errno));
	}
	else
	{
		//正常使用空间
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	//但申请的动态空间不再使用的时候
	//free
	free(p);//依然有能力找到之前的空间
	p = NULL;
	/**p = 0;
	printf("%d", *p);*/
	return 0;
}
































