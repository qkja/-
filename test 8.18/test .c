#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//��̬�ڴ����
//���Ե�
//malloc  ����ʼ��
//free
//calioc  ��ʼ��
//realloc
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//ʹ�ÿռ�
//	//���費����
//	int* p2 = realloc(p, 80);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}
//	int* p3 = (int*)realloc(NULL, 80);
//	return 0;
//}
//int main()
//{
	//int* p = (int*)malloc(40);
	//malloc ���ٿռ�ʧ�� - ��NULLִ�н�����
	//*p = 10;
	//�Զ�̬�����ڴ��Խ�����
	//int* p2 = (int*)malloc(40);
	//if (p2 == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 11; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p2);
	//p2 = NULL;
	//�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
	//int a = 10;
	//int* p3= &a;
	//free(p3);
	//p3 = NULL;
    //ʹ��free�ͷŶ�̬�����ڴ��һ����
	//int* p4 = (int*)malloc(40);
	//if (p4 == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*p4++ = i;  //p��ʹ�ã���++
	//}
	//free(p4);  //���У�ָ����ǿ��ٺ�֮��ĵĿռ�
	//p4 == NULL;
	// 
	//return 0;
//}
//int main()
//{
//	//��ͬһ�鶯̬�ڴ����ͷ�
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	free(p);
//	p = NULL;
//	free(p);
//	return 0;
//}
#include<windows.h>
#include<string.h>
//int main()
//{
//	//�Զ�̬���ٵ��ڴ������ͷ�
//
//	/*while (1)
//	{
//		malloc(1);
//		Sleep(1000);
//	}*/
//	return 0;
//}
//void test(void)
//{
//	printf("hrhrhr\n");
//}
//int main()
//{
//	test();
//	return 0;
//}
//��̬�ڴ�δ����
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//int main()
//{
//	char str[100] = { 0 };
//	strcpy(str, "hello world");
//	printf(str);
//	return 0;
//}
//void test(int* a)
//{
//	a = (int*)malloc(40);
//}
//int main()
//{
//	int* p = NULL;
//	test(p);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		//*(p + i) = i;
//		printf("%d ",*(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	printf("%s\n", p);
//	printf(p);
//	return 0;
//}
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//	//free(p);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");  
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//void GetMemory1(char* p)
//{
//	p = (char*)malloc(100);
//	free(p);
//}
//void Test1(void)
//{
//	char* str = NULL;
//	GetMemory1(str);
//	strcpy(str, "hello world");//������� str �� NULL
//	                          //�ڴ�й©
//	                          //str ��ֵ����ʽ���ݸ�p p��GetMemory1���β� ֻ���ں����ڲ���Ч ��GetMemory1����
//	                          //����󣬶�̬�ڴ濪��δ�ͷţ����޷��ҵ�
//	printf(str);
//}
//int main()
//{
//	Test1();
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int temp = 0;
//	temp = a;
//	a = b;
//	b = temp;
//	return 0;
//}
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//	//free(p);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");  
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//char * GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	char* str1 = NULL;
//	str1=GetMemory(str);
//	strcpy(str1, "hello world");  
//	printf(str1);
//	free(str1);
//	str1 = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	//char* str1 = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//int main()
//{
//	int a, b = 10;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//#define singned int  a
//int main()
//{
//	a b = 10;
//
//	return 0;
//}
//���ڸ��������ڴ��еĴ洢��ʽ
//int main()
//{
//	int ten = 10;
//	int tow = 2;
//	printf("doing is right:");
//	printf("%d-%d=%d", ten, 2, ten - tow);
//	printf("\n");
//	printf("doing is wrong:");
//	printf("%d-%d=%d", ten);//��������Ϊ���ֵ
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);    //ʮ����
//	printf("%x\n", a+1);  //ʮ������
//	printf("%o\n", a+6);  //�˽���
//	 
//	printf("%#o\n", a+6); 
//	printf("%#o\n", a+6); 
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%#o\n", a+6); 
//    printf("%#x\n", a+6); 
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(short int));
//	printf("%d\n", sizeof(long int));
//	return 0;
//}
//char* GetMemory(void)
//{
//	char p[] = "hello world";//����ջ�ռ�ĵ�ַ����  �Ƿ������ڴ�
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//
//}
//int * test()
//{
//	int a = 10;
//	int* p = &a;
//	return p;
//}
//int* test1()
//{
//	static int a = 10; //��̬�� ���ԣ�static ʹ�������ڱ䳤
//	int* p = &a;
//	return p;
//}
//int main()
//{
//	int * p1=test();
//	int * p2=test1();
//	*p1 = 20;
//	*p2 = 20;
//	return 0;
//}
//int*  test()
//{
//	int* ptr =(int*) malloc(100);//����
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//	free(p);
//	p = NULL;
//	return 0;
//}
//Ұָ�� int* p;
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);//��û�У��ڴ�й¶
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//��ס  ���Ǵ�ӡ�þ��Ǵ�����ԣ�������û���ڴ�й©
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	/*free(str);*/
//	if (str != NULL)   //������Ұָ��  
//		               //�Ƿ�����
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//	free(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	if (p == NULL)
//	{
//		//printf("%d\n", 0);
//		printf("0");
//	}
//	else
//		printf("1");
//	return 0;
//}
//��������
//struct S
//{
//	int n;
//	int arr[];  //���������Ա   -   ����Ĵ�С�ǿ��Ե�����
//	//int arr1[0]; Ҳ����
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(struct S));  //4
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	if (ps == NULL)
//	{
//		return 0;
//	}
//	//else
//    ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr =realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(ps.(arr[i])));
//	
//	}*/
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//		return 0;
//	ps->arr = (int*)malloc(5 * sizeof(int));
//	if (ps->arr == NULL)
//		return 0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps -> arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//		printf("%d ", ps->arr[i]);
//	//������С
//	int * ptr=(int *)realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i]=i;
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	printf("%d ", ps->arr[i]);
//	//�ͷſռ�
//	//���ͷ�С��
//	free(ps->arr);
//	ps->arr = NULL;
//	//���ͷŴ��
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
