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
//ͨѶ¼����
struct Contact
{
	struct PeoInfo* data;//���һ����Ϣ
	int size;                //��¼��ǰ����Ԫ�صĸ���
	int capacity;//��ǰͨѶ¼���������
};
//��������
extern void InitContact(struct Contact* ps);
//����yһ����Ϣ
extern void AddContact(struct Contact * ps);
//��ʾ��Ϣ
extern void ShowContact(const struct Contact* ps);
//ɾ��ָ������ϵ��
extern  void DelContact(struct Contact* ps);
//����
extern void searchContact(struct Contact* ps);
//�޸�
extern void modifyContact(struct Contact* ps);
//����
extern void sortContact(struct Contact* ps);//������ ������    
extern void DestoryContact(struct Contact* ps);