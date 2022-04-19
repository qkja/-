#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//int main()
//{
//	SListNode* pHead = NULL;
//
//	//SListPrint(pHead);
//	/*SListPushFront(&pHead, 3);
//	SListPushFront(&pHead, 2);
//	SListPushFront(&pHead, 1);*/
//	SListPushBack(&pHead, 1);
//	SListPushBack(&pHead, 2);
//	SListPushBack(&pHead, 3);
//	SListPopFront(&pHead);
//	SListPopFront(&pHead);
//	SListPopFront(&pHead);
//	SListPrint(pHead);
//	SListPopFront(&pHead);
//
//
//	//SListPrint(pHead);
//	/*SListNode* ret = SListFind(pHead, 2);
//	if (ret != NULL)
//	{
//		printf("%d", ret->val);
//	}*/
//	SListDestory(&pHead);
//	return 0;
//}
//
//int main()
//{
//	
//
//	SListNode* pHead = NULL;
//	
//	SListPushBack(&pHead, 1);
//	SListPushBack(&pHead, 2);
//	SListPushBack(&pHead, 3);
//	
//	SListPrint(pHead);
//	SListNode* ret = SListFind(pHead, 2);
//	
//	SListInsertAfter(ret, 0);
//	SListPrint(pHead);
//	SListEraseAfter(ret);
//	SListPrint(pHead);
//
//	SListDestory(&pHead);
//	return 0;
//}


int main()
{


	SListNode* pHead = NULL;

	SListPushBack(&pHead, 1);
	SListPushBack(&pHead, 2);
	SListPushBack(&pHead, 3);

	SListPrint(pHead);
	SListNode* ret = SListFind(pHead, 1);
	SListEraseAfter(ret);
	SListPrint(pHead);
	SListDestory(&pHead);
	return 0;
}

