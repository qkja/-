#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
#define Max_name 20
#define Max_sex 5
#define Max_addr 20
#define Max_tele 12
#define DEFAULT_SZ 3
enum TYPE
{ 
	Exit,
	Add,   
	Dele,
    Search,   
	Alter,
	Show,
	Sort,
	Save
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
	int size;
	int capacity;//当前通讯录的最大容量
	PerInf* data;
	
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

//释放空间
extern void DestoroyContact(SCon* ps);
//保存数据
extern void SaveContact(SCon* ps);
extern void LoadContact(SCon* ps);
extern void SwapS(struct S*, struct S*);