#define _CRT_SECURE_NO_WARNINGS 1
#ifndef GRAPHISC_H
#define GRAPHICS_H
#include<stdio.h>
#include<string.h>
#define Max 100
#define Max_name 20
#define Max_tele 12
#define Max_sex  5
#define Max_addr 20
//定义一个结构体，包含一个人的信息
typedef struct Personal_Information
{
	char name[Max_name];  //名字
	int age;              //年龄
	char sex[Max_sex];    //性别
	char Tele[Max_tele];  //电话
	char addr[Max_addr];  //住址

} PerIn;
#endif