#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ṹ��
//����һ���ṹ��
struct Stu
{
	char name[20];
	int age;
};
//�����ṹ������
struct
{
	int age;
	char c;
}sa;//��һ��
struct
{
	int age;
	char c;
}*psa;
int main()
{
	psa = &sa;//��������һ��������
	return 0;
}