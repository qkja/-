#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	float f = 10.0;
//	return 0;
//}
//void test(void)
//{
//	printf("hehe");
//}
//int main()
//{
//	test();
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = -20;
//
//	return 0;
//int main()
//{
//	int a = 1;
//	a = ~a;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int a = -10;
//	//10000000000000000000000000001010  原码
//	//11111111111111111111111111110101  反码
//	//1111 1111 1111 1111 1111 1111 1111 0110  补码 
//	//f   f     f     f    f    f    f   6
//	return 0;
//}
//在计算机系统中，整数数值一律用补码处理
//CPU中只有加法器
//用补码加法和减法可以统一处理
//1-1      ==    1+（-1）
//00000000000000000000000000000001   1的原码
//10000000000000000000000000000001   -1的原码
//00000000000000000000000000000001   1的补码
//11111111111111111111111111111110   -1的反码
//00000000000000000000000000000001   1的补码
//11111111111111111111111111111111   -1的补码
//00000000000000000000000000000000   1-1  
//int main()
//{
//	char a = 126;
//	char b = 1;
//
//	return 0;
//}
//整数   有符号数  无符号数
//有符号数  正数  负数
//正数  原反补相同
//负数  原码补码反码不同
//int main()
//{
//	int a = 20;
//	//0x00 00 00 14
//
//	return 0;
//}
//倒着存储
//大端小端
//大端模式  高位放在低地址中
//小端模式  低位保存在低地址中
//int main()
//{
//	int a = 0x11223344;
//	return 0;
//}
//int main()
//{
//	//写一段代码告诉我们当前的字节序是什么
//	int a = 0;
//	scanf("%d", &a);
//	char* pa = (char*)&a;
//	if (*pa != 0)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}
//int check_sys(void)
//{
//	int a = 1;
//	char* pa=(char*)&a;
//	/*if (*pa == 1)
//		return 1;
//	else if (*pa == 0)
//		return 0;*/
//	return *pa;
//}
//#include" check_sys.h"
//int main()
//{
//	//返回1，小端
//	//返回0，大端
//	int len =check_sys();
//	if (len == 1)
//		printf("小端\n");
//	else if (len == 0)
//		printf("大端\n");
//	return 0;
//}
//int check_sys(void)
//{
//	int a = 1;
//	return *((char*)&a);
//}
//int main()
//{
//	int a = 1;
//	printf("%d\n", *((char*)&a));
//	a = -1;
//	//100000000000000000000001
//	//111111111111111111111110
//	//111111111111111111111111
//	//11111111
//	//11111110
//	//10000001
//	printf("%d\n", *((char*)&a));
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	printf("%d\n", a);
//	/*int *pa=&a;
//	*pa = 0;
//	printf("%d\n", *pa);
//	printf("%d\n", a);*/
//	char* pb =(char*) &a;
//	*pb = 0;
//	printf("%d\n", *pb);
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c =-1;
//	//11111111111111111111111111111111
//	//11111111 -1的补码
//  整型提升
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
//int main()
//{
//    short int a = -1;
//	signed short int b = -1;
//	unsigned short  int c = -1;
//	//11111111111111111111111111111111
//	//1111111111111111
//	// 	整型提升
//	// 	有符号位
//	//11111111111111111111111111111111
//	//11111111111111111111111111111111
//	//00000000000000001111111111111111
//	printf("a=%d b=%d c=%d", a, b, c);
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000  原码
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//10000000
//	//整型提升  有符号位
//	//11111111111111111111111110000000  补码
//	//11111111111111111111111101111111  反码
//	//10000000000000000000000010000000  原码
//	printf("%u\n", a);//%u打印十进制无符号数子
//	printf("%d\n", a);//%d打印十进制有符号数子
//	return 0;
//}
//int main()
//{
//	//char            256个二进制数列
//	//signed char     -128——>0——>127
//	//unsigned char   0 ——>255
//	//11111111
//	//11111110
//	//10000001
//	//10000001
//	//10000000
//	//11111111
//	//10000000  直接翻译成-128
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    int positive = 0;
//    int negative = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d ", &arr[i]);
//        if (arr[i] > 0)
//        {
//            positive++;
//        }
//        else if (arr[i] < 0)
//        {
//            negative++;
//        }
//    }
//    printf("positive:%d\nnegative:%d\n", positive, negative);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    scanf("%d ", &n);
//    int sum = 0;
//    int arr[100] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//        sum += arr[i];
//    }
//    printf("%d ", sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d ", &n);
//    int arr[10000] = { 0 };
//    int i = 0;
//    int min = 101;
//    int max = -1;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//        if (arr[i] > max)
//            max = arr[i];  //疑问  当第一个if不满足时程序还会执行第二个if吗
//        if (arr[i] < min)
//            min = arr[i];
//    }
//    printf("%d\n", max - min);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d ", &n);
//    int arr[100] = { 0 };
//    int i = 0;
//    int j = 0;
//    int count = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    //printf("%d", i);
//    if (arr[0] < arr[n-1])
//    {
//
//        for (j = 0; j < n - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//                count = 1;
//        }
//    }
//    else if (arr[0] == arr[n-1])
//    {
//        for (j = 0; j < n - 1; j++)
//        {
//            if (arr[j] != arr[0])
//                count = 1;
//        }
//    }
//    else if (arr[0] > arr[n-1])
//    {
//
//        for (j = 0; j < n - 1; j++)
//        {
//            if (arr[j] < arr[j + 1])
//                count = 1;
//        }
//    }
//    if (1 == count)
//        printf("unsorted\n");
//    else
//        printf("sorted\n");
//    return 0;
//}