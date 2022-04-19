#define _CRT_SECURE_NO_WARNINGS 1

#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


typedef int SLDataType;

typedef struct SListNode
{
	SLDataType val;
	struct SListNode* next;  //��¼��һ���ڵ�ĵ�ַ
}SListNode;

// ��̬����һ���ڵ�
SListNode* BuySListNode(SLDataType x);
// �������ӡ
void SListPrint(SListNode* pHead);
// ������β��
void SListPushBack(SListNode** ppHead, SLDataType x);
// �������ͷ��
void SListPushFront(SListNode** ppHead, SLDataType x);
// �������βɾ
void SListPopBack(SListNode** ppHead);
// ������ͷɾ
void SListPopFront(SListNode** ppHead);
// ���������
SListNode* SListFind(SListNode* pHead, SLDataType x);
// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SListNode* pos, SLDataType x);

// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SListNode* pos);
// �����������
void SListDestory(SListNode** ppHead);