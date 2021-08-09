#define _CRT_SECURE_NO_WARNINGS 1
#include"test .h"
//int main()
//{
//	//int a[3][4] = { 0 };
//	//二维数组
//	int a[3][4] = { 0 };
//	//printf("%d\n", sizeof(a));        //48
//	printf("%p\n",a);
//	printf("%p\n", &a[0][0]);
//	printf("%p\n",&a[0][1]);
//	printf("%p\n",&a[0][2]);
//	printf("%p\n",&a[0][3]);
//	printf("%p\n", a[1]);
//	printf("%p\n", a+1);
//	printf("%p\n", a[0]+1);
//	printf("%d\n", *(a[0] + 1));
//	printf("%p\n", &a[1][0]);
//	//printf("%d\n", sizeof(a[0][0]));  //	printf("%d\n", sizeof(a[0]));     //第一行的地址  16
//	//printf("%d\n", sizeof(a[0] + 1));//第二行的地址 16
//	//printf("%d\n", sizeof(*(a[0] + 1))); //第二行第一个元素  4
//	//printf("%d\n", sizeof(a + 1));     //第二行的地址 16
//	//printf("%d\n", sizeof(*(a + 1)));   //第二行第一个元素  4
//	//printf("%d\n", sizeof(&a[0] + 1));  // 4  第二行的地址
//	//printf("%d\n", sizeof(*(&a[0] + 1)));//
//	//printf("%d\n", sizeof(*a));          // 16
//	//printf("%d\n", sizeof(a[3]));          // 没有错误  ，16 
//
//	return 0;
//}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));//2  5
//	return 0;
//}
//int main()
//{
//	printf("%lf", (double)(10 / 4 * 2));
//	return 0;
//}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));//2  5
//	//int* ptd = (int*)(a + 1);
//	//printf("%d,%d\n", *(a + 1), *(ptd - 1));//2  5
//	return 0;
//}
//int main()
//{
//	printf("HEHE\\N");
//	return 0;
//}
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知结构体类型的变量test的大小有20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);                  //+20
//	printf("%p\n", (unsigned long)p + 0x1);   //+4 or 错误
//	printf("%d\n", (unsigned long)p + 0x1);   //+1 or 错误  +1,强制类型转换
//	printf("%p\n", (unsigned int*)p + 0x1);   //+4
//	return 0;
//}
//int main()
//{
//	printf("%d\n", Add(3, Mul(2, 3)));
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
//int main()
//{
//	printf("heh");
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	//printf("%x,%p\n", ptr1[-1], a);  //4            
//	printf("%x,%x", ptr1[-1], *ptr2);  //4          
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
//10000000 00000000 00000000 00000100
//11111111 11111111 11111111 11111011
//11111111 11111111 11111111 11111100
//0xfffffffc
//int main()
//{
//	char ch[] = "abcdefgh";
//	memset(ch, '-',1);
//	printf("%s", ch);
//	return 0;
//}
//sizeof不是函数，因为不会压栈
//int main()
//{
//	/*int a = 1;
//	int b=a >> 1;*/
//	//00000000 00000000 00000000 00000001
//	//00000000 00000000 00000000 00000000
//	int a = -1;
//	int b = a >> 1;
//	//10000000 00000000 00000000 00000001
//	//11111111 11111111 11111111 11111110
//	//11111111 11111111 11111111 11111111
//	//11111111 11111111 11111111 11111111
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = a << 1;
//	//00000000000000000000000000000001
//	//00000000000000000000000000000010
//	printf("%d\n", a);
//	printf("%d\n", b);
//	a = -1;
//	b =a << 1;
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//11111111111111111111111111111101
//	//10000000000000000000000000000010
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	printf("%d\n", p[0]);
//	printf("%d\n", arr[0]);
//	return 0;
//}
//int a = 10;
//int main()
//{
//	a = 100;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int* p = NULL;
//	p = &a;
//	if (p != NULL)
//		printf("hehe\n");
//	else
//		printf("haha");
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	printf("%8d", a);//域宽 8
//	return 0;
//}
#define Max 100
//int main()
//{
//	printf("%d\n", Max);
//	return 0;
//}
//int main()
//{
//	int arr[Max] = { 0 };
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//	test(a,b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	printf("交换前：a=%d b=%d\n", a, b);
//	test1(&a, &b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}
//enum sex
//{
//	MALE,
//    FEMALE,
//	A,
//    D
//};
//int main()
//{
//	printf("%d\n", MALE);
//	return 0;
//}