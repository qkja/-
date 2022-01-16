#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//动态内存管理
//活性的
//malloc  不初始化
//free
//calioc  初始化
//realloc
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//使用空间
//	//假设不够用
//	int* p2 = realloc(p, 80);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}
//	int* p3 = (int*)realloc(NULL, 80);
//	return 0;
//}
//int main()
//{
	//int* p = (int*)malloc(40);
	//malloc 开辟空间失败 - 对NULL执行解引用
	//*p = 10;
	//对动态开辟内存的越界访问
	//int* p2 = (int*)malloc(40);
	//if (p2 == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 11; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p2);
	//p2 = NULL;
	//对非动态开辟内存使用free释放
	//int a = 10;
	//int* p3= &a;
	//free(p3);
	//p3 = NULL;
    //使用free释放动态开辟内存的一部分
	//int* p4 = (int*)malloc(40);
	//if (p4 == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*p4++ = i;  //p先使用，再++
	//}
	//free(p4);  //不行，指向的是开辟后之后的的空间
	//p4 == NULL;
	// 
	//return 0;
//}
//int main()
//{
//	//对同一块动态内存多次释放
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	free(p);
//	p = NULL;
//	free(p);
//	return 0;
//}
#include<windows.h>
#include<string.h>
//int main()
//{
//	//对动态开辟的内存忘记释放
//
//	/*while (1)
//	{
//		malloc(1);
//		Sleep(1000);
//	}*/
//	return 0;
//}
//void test(void)
//{
//	printf("hrhrhr\n");
//}
//int main()
//{
//	test();
//	return 0;
//}
//动态内存未开辟
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//int main()
//{
//	char str[100] = { 0 };
//	strcpy(str, "hello world");
//	printf(str);
//	return 0;
//}
//void test(int* a)
//{
//	a = (int*)malloc(40);
//}
//int main()
//{
//	int* p = NULL;
//	test(p);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		//*(p + i) = i;
//		printf("%d ",*(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	printf("%s\n", p);
//	printf(p);
//	return 0;
//}
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//	//free(p);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");  
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//void GetMemory1(char* p)
//{
//	p = (char*)malloc(100);
//	free(p);
//}
//void Test1(void)
//{
//	char* str = NULL;
//	GetMemory1(str);
//	strcpy(str, "hello world");//程序崩溃 str 是 NULL
//	                          //内存泄漏
//	                          //str 以值的形式传递给p p是GetMemory1的形参 只能在函数内部有效 等GetMemory1函数
//	                          //返会后，动态内存开辟未释放，且无法找到
//	printf(str);
//}
//int main()
//{
//	Test1();
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int temp = 0;
//	temp = a;
//	a = b;
//	b = temp;
//	return 0;
//}
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//	//free(p);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");  
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//char * GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	char* str1 = NULL;
//	str1=GetMemory(str);
//	strcpy(str1, "hello world");  
//	printf(str1);
//	free(str1);
//	str1 = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	//char* str1 = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//int main()
//{
//	int a, b = 10;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//#define singned int  a
//int main()
//{
//	a b = 10;
//
//	return 0;
//}
//关于浮点型在内存中的存储方式
//int main()
//{
//	int ten = 10;
//	int tow = 2;
//	printf("doing is right:");
//	printf("%d-%d=%d", ten, 2, ten - tow);
//	printf("\n");
//	printf("doing is wrong:");
//	printf("%d-%d=%d", ten);//另外两个为随机值
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);    //十进制
//	printf("%x\n", a+1);  //十六进制
//	printf("%o\n", a+6);  //八进制
//	 
//	printf("%#o\n", a+6); 
//	printf("%#o\n", a+6); 
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%#o\n", a+6); 
//    printf("%#x\n", a+6); 
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(short int));
//	printf("%d\n", sizeof(long int));
//	return 0;
//}
//char* GetMemory(void)
//{
//	char p[] = "hello world";//返回栈空间的地址问题  非法访问内存
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//
//}
//int * test()
//{
//	int a = 10;
//	int* p = &a;
//	return p;
//}
//int* test1()
//{
//	static int a = 10; //静态区 可以，static 使生命周期变长
//	int* p = &a;
//	return p;
//}
//int main()
//{
//	int * p1=test();
//	int * p2=test1();
//	*p1 = 20;
//	*p2 = 20;
//	return 0;
//}
//int*  test()
//{
//	int* ptr =(int*) malloc(100);//堆区
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//	free(p);
//	p = NULL;
//	return 0;
//}
//野指针 int* p;
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);//若没有，内存泄露
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//记住  不是打印好就是代码可以，看看有没有内存泄漏
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	/*free(str);*/
//	if (str != NULL)   //可能是野指针  
//		               //非法访问
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//	free(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	if (p == NULL)
//	{
//		//printf("%d\n", 0);
//		printf("0");
//	}
//	else
//		printf("1");
//	return 0;
//}
//柔性数组
//struct S
//{
//	int n;
//	int arr[];  //柔性数组成员   -   数组的大小是可以调整的
//	//int arr1[0]; 也可以
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(struct S));  //4
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	if (ps == NULL)
//	{
//		return 0;
//	}
//	//else
//    ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr =realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(ps.(arr[i])));
//	
//	}*/
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//		return 0;
//	ps->arr = (int*)malloc(5 * sizeof(int));
//	if (ps->arr == NULL)
//		return 0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps -> arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//		printf("%d ", ps->arr[i]);
//	//调整大小
//	int * ptr=(int *)realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i]=i;
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	printf("%d ", ps->arr[i]);
//	//释放空间
//	//先释放小的
//	free(ps->arr);
//	ps->arr = NULL;
//	//后释放大的
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
