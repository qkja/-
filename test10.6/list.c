#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

ListNode* BuyListNode(LTDataType x)
{
    ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));

    newnode->data = x;
    newnode->next = NULL;
    newnode->prev = NULL;

    return newnode;
}
void ListInit(ListNode* phead)
{
    LTDataType x = 0;
    phead = BuyListNode(x);


}

void ListDestory(ListNode* plist)
{


}

void ListPushBack(ListNode* plist)
{

}