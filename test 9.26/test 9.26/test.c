#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void menu(void)
{
	printf("******************************\n");
	printf("*****  1.β��    2.ͷ��  *****\n");
	printf("*****  3.��ӡ    4.βɾ  *****\n");
	printf("*****  5.ͷɾ    6.����  *****\n");
	printf("*****  7.����    0.�˳� *****\n");
	printf("******************************\n");
}

void TestSList1(SLTNode **plist)
{
	//SLTNode *plist = NULL;
	SListPushBack(&(*plist), 1);
	//printf("\n%p\n", plist);
	SListPushBack(&(*plist), 2);
	//printf("\n%p\n", plist);
	SListPushBack(&(*plist), 3);
	//printf("\n%p\n", plist);
	SListPushBack(&(*plist), 4);
	//printf("\n%p\n", plist);
	/*SListPushFront(&plist, -1);
	SListPushFront(&plist, 0);*/
	//SListPrint(plist);

}

void TestSList3(SLTNode **plist)
{
	SListPrint(*plist);
}

void TestSList4(SLTNode **plist)
{
	SListPopBack(&(*plist));
}

void TestSList5(SLTNode **plist)
{
	ListPopFront(&(*plist));
}

void TestSList6(SLTNode **plist)
{

}

void TestSList7(SLTNode **plist)
{

}


void TestSList2(SLTNode **plist)
{
	SListPushFront(&(*plist), 0);
	SListPushFront(&(*plist), -1);
	//SListPrint(plist);
}

int main()
{
	SLTNode *plist = NULL;
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			TestSList1(&plist);
			break;
		case 2:
			TestSList2(&plist);
			break;
		case 3:
			TestSList3(&plist);
			//SListPrint(plist);
			break;
		case 4:
			TestSList4(&plist);
			break;
		case 5:
			TestSList5(&plist);
			break;
		case 6:
			TestSList6(&plist);
			break;
		case 7:
			TestSList7(&plist);
			break;
		case 0:
			printf("���Ƴ�\n");
			break;
		default:
			printf("ѡ�����������ѡ��:>");
			break;

		}
	} while (input);
	//TestSList1();
	/*int a = 10;
	if (a - 10)
	{
		printf("hehehe\n");
	}
	a - 3;
	a - 10;
	a - 11;
	printf("%d", a);*/
	system("pause");
	return 0;
}
