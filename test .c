#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//结构体
//定义一个结构体
struct Stu
{
	char name[20];
	int age;
};
//匿名结构体类型
struct
{
	int age;
	char c;
}sa;//用一次
struct
{
	int age;
	char c;
}*psa;
int main()
{
	psa = &sa;//是两个不一样的类型
	return 0;
}