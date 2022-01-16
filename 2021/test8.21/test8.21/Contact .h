#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<string.h>
#define MAX 100
#define Max_name 20
#define Max_sex 10
#define Max_tele 12
#define Max_addr 20
enum S
{
	Exit,
	Add,
	Del,
	Search,
	Modify,
	Show,
	Sort
};
//定义一个人的基本信息
struct PeoInf
{
	char name[Max_name];
	int age;
	char sex[Max_sex];
	char tele[Max_tele];
	char addr[Max_addr];
};
//定义一个通讯录
typedef struct PeoInfContact
{
	struct PeoInf data[MAX];
	int size;
}PICon;

//初始化通讯录
extern void My_Initializing(PICon*);

extern void ModifyContact(PICon* ps);
extern void AddContact(PICon* ps);
extern void ShowContact(const PICon* ps);
extern void DelContact(PICon* ps);
extern void SearchContact(PICon* ps)
