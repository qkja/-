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
//����һ���ṹ�壬����һ���˵���Ϣ
typedef struct Personal_Information
{
	char name[Max_name];  //����
	int age;              //����
	char sex[Max_sex];    //�Ա�
	char Tele[Max_tele];  //�绰
	char addr[Max_addr];  //סַ

} PerIn;
#endif