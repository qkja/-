#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<windows.h>

//void 占位符 让我们的用户明确我不需要
//告知编译器这个返回值无法接受
// void 用作形参列表  告知编译器or程序员 不能传递参数
//test()  //可以通过  
//{
//	printf("hello test\n");
//	return 2;
//}
//int main()
//{
//
//	/*int a = 10;
//	int* p = &a;
//	int* paa = &a;
//	if (p == paa)
//	{
//		printf("hehehe");
//	}*/
//	//int a = 10;
//	//int* p = &a;
//	//printf("%d\n", (int)p);
//	//printf("%d\n", *p);
//
//	/*char ch[10] = "abcdefghi";
//	printf("%s", ch);*/
//	/*int a = (int)test();
//	printf("%d", a);*/
//	//int flag = true;
//
//	//void a = 10;//不能定义变量
//	//why
//
//	//类型大小不确定
//	//但sizeof(void） =  0
//	//在Linux 是  1   所以不是原因
//
//	//根本原因  编译器强制指认为 空类型  所以不能
//	/*void* p = NULL;
//	printf("%p\n", p);
//	printf("%d\n", sizeof(void*));*/
//	//printf("%d", sizeof(void));
//	/*printf("11111111111\n");
//	beafar:
//	printf("hello 1\n");
//	printf("hello 2\n");
//	printf("hello 3\n");
//	printf("hello 5\n");
//	Sleep(3000);
//	goto beafar;
//	printf("hello 6\n");
//	printf("hello 7\n");
//	printf("hello 8\n");
//	printf("hello 9\n");*/
//
//	/*register int a = 10;
//	int* p = &a;*/
//	/*printf("%d", a);*/
//	//while (1)
//	//{
//	//	int c = getchar();
//	//	
//	//	if ('#' == c)
//	//	{
//	//		/*break;*/
//	//		continue;
//	//	}
//	//	//getchar();
//	//	putchar(c);
//	//}//endwhile
//
//	return 0;
//}

#include"List.h"

void TestList1()
{
	ListNode* plist = NULL;
	ListInit(plist);



	ListDestory(plist);
}
int main()
{
	TestList1();
	return 0;
}