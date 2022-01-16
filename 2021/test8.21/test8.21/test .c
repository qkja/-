#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>

//fseek可以随机读取文件 
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
//基本的理财知识
//struct S
//{
//	int age;
//	int score;
//};
//void SwapS(int * p1, int* p2)
//{
//	int temp = 0;
//	temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//
//}
//int main()
//{
//	struct S s[2] = { { 20, 15 }, { 60, 58 } };
//	printf("%d %d\n", s[0].age, s[1].age);
//	SwapS(&(s[0].age), &(s[1].age));
//	printf("%d %d\n", s[0].age, s[1].age);
//	return 0;
//}
#include"Contact .h"
void Print(void)
{
	printf("*******************************\n");
	printf("****   1.Add      2.Del    ****\n");
	printf("****   3.Search   4.Modify ****\n");
	printf("****   5.Show     6.Sort   ****\n");
	printf("****         0.Exit        ****\n");
	printf("*******************************\n");
}
int main()
{
	int input = 0;
	PICon con;
	//初始化通讯录
	My_Initializing(&con);
	do
	{
		Print();
		printf("请选择要执行的类型：>");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			AddContact(&con);
			break;
		case Del:
			DelContact(&con);
			break;
		case Search:
			SearchContact(&con);
			break;
		case Modify:
			ModifyContact(&con);
			break;
		case Show:
			ShowContact(&con);
			break;
		case Sort:
			break;
		case Exit:
			break;
		default:
			printf("选择错误\n");
			break;
			
		}

	} while (input);
	return 0;
}