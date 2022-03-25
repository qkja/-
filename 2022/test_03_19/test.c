#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

struct ListNode 
{
    int val;
    struct ListNode *next;
};
 

int isTrue(struct ListNode* head, struct ListNode* tail,int val)
{
    if (head == NULL)
    {
        return 1;
    }
    struct ListNode* cur = head;
    tail->next = NULL;
    while (cur != NULL)
    {
        if (cur->val == val)
        {
            return 0;
        }
        cur = cur->next;
    }
    return 1;
}

void func(struct ListNode* head)
{
   
    struct ListNode* cur = head;
    while (cur != NULL)
    {
        printf("%d->", cur->val);
        cur = cur->next;
    }

}

//struct ListNode* removeDuplicateNodes(struct ListNode* head) {
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    struct ListNode* newHead = NULL;
//    struct ListNode* tail = NULL;
//    struct ListNode* cur = head;
//    while (cur != NULL)
//    {
//        if (newHead == NULL)
//        {
//            newHead = cur;
//            tail = newHead;
//        }
//        else
//        {
//            if (isTrue(newHead, tail,cur->val) == 1)
//            {
//                tail->next = cur;
//                tail = cur;
//            }
//        }
//        cur = cur->next;
//    }
//    tail->next = NULL;
//    return newHead;
//}

struct ListNode* removeDuplicateNodes(struct ListNode* head) {
    if (head == NULL)
    {
        return NULL;
    }
    struct ListNode* newHead = NULL;
    struct ListNode* tail = NULL;
    struct ListNode* cur = head;
    while (cur != NULL)
    {
        if (isTrue(newHead, tail, cur->val) == 1)
        {
            if (newHead == NULL)
            {
                newHead = cur;
                tail = cur;
            }
            else
            {
                tail->next = cur;
                tail = cur;
            }
        }
        cur = cur->next;
    }
    tail->next = NULL;
    return newHead;
}

int main()
{
    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n6 = (struct ListNode*)malloc(sizeof(struct ListNode));

    n1->val = 1;
    n1->next = n2;

    n2->val = 2;
    n2->next = n3;

    n3->val = 3;
    n3->next = n4;

    n4->val = 3;
    n4->next = n5;

    n5->val = 2;
    n5->next = n6;

    n6->val = 1;
    n6->next = NULL;

    func(removeDuplicateNodes(n1));
    return 0;
}