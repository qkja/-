#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>

#define Max 10
#define NAME_Max 20
#define SEX_Max 10
#define ADDR_Max 30
#define TELE_Max 12
#define CAP 2
struct PeoInfo
{
	char name[NAME_Max];
	int age;
	char sex[SEX_Max];
	char addr[ADDR_Max];
	char tele[TELE_Max];
};
typedef struct PeoInfo PeoInfo;

typedef struct Contact
{
	PeoInfo* data;//1000容量
	int capacity;
	int sz;//有效数据
}Contact;

//初始化
extern void InitContact(Contact* pc);
//增加一个信息
extern void AddContact(Contact* pc);
//打印
extern void ShowContact(const Contact* pc);
extern void DelContact(Contact* pc);
extern void SearchContact(Contact* pc); 
extern void ModifyContact(Contact* pc);
extern void SortContact(Contact* pc);
extern void DestoryContact(Contact* pc);
