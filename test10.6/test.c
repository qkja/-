#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<windows.h>

//void ռλ�� �����ǵ��û���ȷ�Ҳ���Ҫ
//��֪�������������ֵ�޷�����
// void �����β��б�  ��֪������or����Ա ���ܴ��ݲ���
//test()  //����ͨ��  
//{
//	printf("hello test\n");
//	return 2;
//}
//int main()
//{
//
//	/*int a = 10;
//	int* p = &a;
//	int* paa = &a;
//	if (p == paa)
//	{
//		printf("hehehe");
//	}*/
//	//int a = 10;
//	//int* p = &a;
//	//printf("%d\n", (int)p);
//	//printf("%d\n", *p);
//
//	/*char ch[10] = "abcdefghi";
//	printf("%s", ch);*/
//	/*int a = (int)test();
//	printf("%d", a);*/
//	//int flag = true;
//
//	//void a = 10;//���ܶ������
//	//why
//
//	//���ʹ�С��ȷ��
//	//��sizeof(void�� =  0
//	//��Linux ��  1   ���Բ���ԭ��
//
//	//����ԭ��  ������ǿ��ָ��Ϊ ������  ���Բ���
//	/*void* p = NULL;
//	printf("%p\n", p);
//	printf("%d\n", sizeof(void*));*/
//	//printf("%d", sizeof(void));
//	/*printf("11111111111\n");
//	beafar:
//	printf("hello 1\n");
//	printf("hello 2\n");
//	printf("hello 3\n");
//	printf("hello 5\n");
//	Sleep(3000);
//	goto beafar;
//	printf("hello 6\n");
//	printf("hello 7\n");
//	printf("hello 8\n");
//	printf("hello 9\n");*/
//
//	/*register int a = 10;
//	int* p = &a;*/
//	/*printf("%d", a);*/
//	//while (1)
//	//{
//	//	int c = getchar();
//	//	
//	//	if ('#' == c)
//	//	{
//	//		/*break;*/
//	//		continue;
//	//	}
//	//	//getchar();
//	//	putchar(c);
//	//}//endwhile
//
//	return 0;
//}

#include"List.h"

void TestList1()
{
	ListNode* plist = NULL;
	ListInit(plist);



	ListDestory(plist);
}
int main()
{
	TestList1();
	return 0;
}