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
//һ���˰�������Ϣ

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
	int capacity;//��ǰͨѶ¼���������
	PerInf* data;
	
} SCon;
//��ʼ��
extern void Initialise(SCon* ps);

//����һ���˵���Ϣ
extern void AddContact(SCon* ps);

//��ӡͨѶ¼����Ϣ
extern void ShowContact(const SCon* ps);

//Ѱ��һ���˵���Ϣ
extern void SearchContact(const SCon* ps);

//ɾ��ĳһ���˵���Ϣ
extern void DeleContact(SCon* ps);

//����һ���˵���Ϣ
extern void AlterContact(SCon* ps);

//���� - ����
extern void SortContact(SCon* ps);

//�ͷſռ�
extern void DestoroyContact(SCon* ps);
//��������
extern void SaveContact(SCon* ps);
extern void LoadContact(SCon* ps);
extern void SwapS(struct S*, struct S*);