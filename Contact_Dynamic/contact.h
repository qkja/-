#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma once
//#define Max 1000
#define DEFAULT_SZ 3
#define max_name 20
#define max_sex 5
#define max_tele 12
#define max_addr 30
enum Option
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
struct PeoInfo
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
};
//通讯录类型
struct Contact
{
	struct PeoInfo* data;//存放一个信息
	int size;                //记录当前已有元素的个数
	int capacity;//当前通讯录的最大容量
};
//声明函数
extern void InitContact(struct Contact* ps);
//增加y一个信息
extern void AddContact(struct Contact * ps);
//显示信息
extern void ShowContact(const struct Contact* ps);
//删除指定的联系人
extern  void DelContact(struct Contact* ps);
//查找
extern void searchContact(struct Contact* ps);
//修改
extern void modifyContact(struct Contact* ps);
//排序
extern void sortContact(struct Contact* ps);//排名字 排年龄    
extern void DestoryContact(struct Contact* ps);