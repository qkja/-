#define _CRT_SECURE_NO_WARNINGS 1

#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

// ģ��ʵ�� ջ
// ջ��һ���Ƚ���������ݽṹ
//������ ˳��� �� �������ַ�ʽģ��

//˳���

typedef int DataType;

struct MyStack
{
	DataType* elem;
	size_t capacity;
	size_t usedSize;
};

typedef struct MyStack MyStack;

//��ʼ��
extern void InitStack(MyStack* ps);

//�ǲ��� ����
extern bool IsFull(MyStack* ps);

//�ǲ��� ��ջ
extern bool IsEmpty(MyStack* ps);

//��ջ
extern void push(MyStack* ps, DataType val);

// ��ѯջ��Ԫ��
extern DataType peek(MyStack* ps);

//��ջ
extern void pop(MyStack* ps);


struct StackNode
{
	DataType val;
	struct SLNode* next;
};

typedef struct StackNode StackNode;

struct SlStack
{
	StackNode* head;
	StackNode* tail;
};
typedef struct SlStack SlStack;

//��ʼ��
extern void InitSlStack(SlStack* ps);

//��ջ
extern void slPush(SlStack* ps, DataType val);



