#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int  main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2 , 3));
//	printf("%d\n", (*pa)(2 , 3));
//	printf("%d\n", (**pa)(2 , 3));
//	printf("%d\n", (***pa)(2 , 3));
//	return 0;
//}
//����ָ������
//int (*pa)(int ,int )=Add;
//int main()
//{
//	//int* arr[5];
//	//��Ҫһ�����飬���Դ��4�������ĵ�ַ
//	int (*ppa)(int, int) = Add;
//	int (*pa[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", pa[i](2, 3));
//	}
//	return 0;
//}
//char* my_stycpy(char* dest,const char*src)
//дһ������ָ��ָ��my_strcpy  pf
//char* (*pf)(char*, const char* )= my_strcpy;
//дһ������ָ�����飬���4��  pfArr
//char* (*pfArr[4])(char*, const char*) = {my_strcpy};
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("**************************\n");
//	printf("**  1. add       2.sub  **\n");
//	printf("**  3 .mul       4.div  **\n");
//	printf("**        0. exit       **\n");
//	printf("**************************\n");
//}
//int main()
//{
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		/*printf("������������������>");
//		scanf("%d %d", &a, &b);*/
//		switch (input)
//		{
//		case 1:
//			printf("������������������>");
//			scanf("%d %d", &a, &b);
//			printf("%d\n", Add(a, b));
//			break;
//		case 2:
//			printf("������������������>");
//			scanf("%d %d", &a, &b);
//			printf("%d\n", Sub(a, b));
//			break;
//		case 3:
//			printf("������������������>");
//			scanf("%d %d", &a, &b);
//			printf("%d\n", Mul(a, b));
//			break;
//		case 4:
//            printf("������������������>");
//			scanf("%d %d", &a, &b);
//			printf("%d\n", Div(a, b));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} 
//	while (input);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	do
//	{
//		printf("hehe");
//		break;
//	} 	
//	while (a);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//void menu()
//{
//	printf("**************************\n");
//	printf("**  1. add       2.sub  **\n");
//	printf("**  3 .mul       4.div  **\n");
//	printf("**         5.xor        **\n");
//	printf("**        0. exit       **\n");
//	printf("**************************\n");
//}
//int main()
//{
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	int (*pfArr[6])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		/*printf("������������������>");
//		scanf("%d %d", &a, &b);*/
//		if (input >= 1 && input <= 5)
//		{
//			printf("������������������>");
//			scanf("%d%d ", &a, &b);
//			int ret = pfArr[input](a, b);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} 	while (input);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	do
//	{
//		int (*p[6])(int) = { 0,Add,Sub,Mul,Div,Xor };
//		printf("%d\n", p[5](2, 3));
//	} while (a);
//	return 0;
//}
//�ص����� ͨ������ָ����õĺ���  �����������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//void menu()
//{
//	printf("**************************\n");
//	printf("**  1. add       2.sub  **\n");
//	printf("**  3 .mul       4.div  **\n");
//	printf("**        0. exit       **\n");
//	printf("**************************\n");
//}
//void test()
//{
//	printf("������������������>");
//	scanf("%d %d", &a, &b);
//}
//Calc(int (*p)(int, int))
//{
//	int a = 0;
//	int b = 0;
//	printf("������������������>");
//	scanf("%d %d", &a, &b);
//	printf("%d\n", p(a, b));
//}
//int main()
//{
//	int input = 0;
//	/*int a = 0;
//	int b = 0;*/
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		/*printf("������������������>");
//		scanf("%d %d", &a, &b);*/
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} 
//	while (input);
//	return 0;
//}
//ָ����ָ�������ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10]=&arr;//ȥ������ĵ�ַ
//	int(*pfArr[4])(int, int) = {0, Add };  //����ָ������
//	int(*(*ppfArr)[4])(int, int) =&pfArr;  //ppfArr��һ������ָ��
//	                                       //ָ��ָ���������4��Ԫ�أ�
//										   // ָ�������ÿ��Ԫ����һ������
//	                                       // ָ����ָ�������ָ��
//	return 0;
//}

