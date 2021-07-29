#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 5;
//	//00000000000000000000000000000101
//	//00000000000000000000000000000010
//	//00000000000000000000000000000111   7
//	//11111111111111111111111111111101
//	//printf("%d", !a);
//	int b=(1 << 1) | a;
//	printf("%d\n", b);
//	b = b&(~(1 << 1));
//	printf("%d\n", b);
//	return 0;
//}
//void test_1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test_2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test_1(arr);
//	test_2(ch);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int i = 0;
//	//i = a++ && b++ && d++;
//	i = ++a || b++ || d++;
//	printf("%d %d %d %d ", a, b, c, d);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	short b = 0;
//	printf("%d\n", sizeof(b = a + 10));
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d", c);
//	return 0;
//}
//#include <stdio.h>
//void test1()
//{
//	printf("hehe\n");
//}
//void test2(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1();            //实用（）作为函数调用操作符。
//	test2("hello bit.");//实用（）作为函数调用操作符。
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	int id[20];
//
//};
//int main()
//{
//	int a = 0;
//	struct Stu s1 = { "张三",18,"06028588" };
//	struct Stu *p=&s1;
//	//printf("%s", (*p).name);
//	//printf("%s", s1.name);
//	printf("%s", p->name);
//	return 0;
//}