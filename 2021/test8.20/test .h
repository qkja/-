#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<string.h>
#define MAX 100
#define Max_name 20
#define Max_sex 5
#define Max_addr 20
#define Max_tele 12
enum TYPE
{ 
	Exit,
	Add,   
	Dele,
    Search,   
	Alter,
	Show,
	Sort
};
//一个人包含的信息

typedef struct PersonalInformation
{
	char name[Max_name];
	int age;
	char sex[Max_sex];
	char tele[Max_tele];
	char addr[Max_addr];

} PerInf;
typedef struct Contact
{
	PerInf data[MAX];
	int size;
} SCon;
//初始化
extern void Initialise(SCon* ps);

//增加一个人的信息
extern void AddContact(SCon* ps);

//打印通讯录的信息
extern void ShowContact(const SCon* ps);

//寻找一个人的信息
extern void SearchContact(const SCon* ps);

//删除某一个人的信息
extern void DeleContact(SCon* ps);

//更改一个人的信息
extern void AlterContact(SCon* ps);
//排序 - 年龄
extern void SortContact(SCon* ps);