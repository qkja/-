#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	//0111 1111 1111 1111 1111 1111 1111 1111 
//
//	//1000 0000 0000 0000 0000 0000 0000 0000         -原码   
//	//1000 0000 0000 0000 0000 0000 0000 0001         -反码
//	//1111 1111 1111 1111 1111 1111 1111 1110         -补码
//	return 0;
//}
//int main()
//{
//	int a = 10000000000000;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	/*int a = 10;
//	printf("%o\n", a);
//	printf("%0x\n", a);
//	printf("%x\n", a);
//	int b = 012;
//	printf("%d\n", b);
//	return 0;*/
//}
//int main()
//{
//	int a = 10;
//	long b = 20;
//	printf("%d %d\n", a, b);
//	/*printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));*/
//	return 0;
//}
//int main()
//{
//
//
//
//	/*short a = 65537;
//	printf("%hd %hd", a, a);*/
//
//	/*int a = 10;
//	short b = 20;
//	printf("%d %hd", a, b);
//*/
//	//int a = 0x11;
//	////0001 0001
//	////21
//	////17
//	//printf("%ld\n", a);    //17
//	//printf("%llx\n", a);   //11
//	//printf("%llo\n", a);   //21
//
//
//	//int a = 0x11;
//	////0001 0001
//	////21
//	////17
//	//printf("%d\n", a);    //17
//	//printf("%lx\n", a);   //11
//	//printf("%lo\n", a);   //21
//
//
//
//
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}
#include<string.h>
//int main()
//{
//	/*char arr[] = "abc def\0hajk";
//	printf("%s\n", arr);
//	printf("%d\n", strlen(arr));
//	printf("%d\n", sizeof(arr));
//*/
//	/*char arr[] = "abcdef\0hajk";
//	printf("%s\n", arr);
//	printf("%d\n", strlen(arr));
//	printf("%d\n", sizeof(arr));*/
//	return 0;
//}
//#include <string.h>
//#include <stdio.h>
//#include <conio.h>
//#include <dos.h>
//
//void main(void)
//{
//	char buffer[61] = "How long am I?";
//	int  len=0;
//	len = strlen(buffer);
//	printf("'%s' is %d characters long\n", buffer, len);
//}
//int main()
//{
//
//	/*char ch[] = "a";
//	printf("%d\n", sizeof(ch));*/
//	//char ch[10]= { 0 };
//	////scanf("%s", ch);
//	//gets(ch);
//	//printf("%s\n", ch);
//	/*char ch = 'abcd';
//	char ch1 = 'abc';
//
//	printf("%c\n", ch);
//	printf("%c\n", ch1);
//	printf("%d\n", ch);
//	printf("%d\n", ch1);*/
//	return 0;
//}

//int Search(int arr[10])
//{
//	int max = -1;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int ret = Search(arr);
//	printf("%d\n", ret);
//	return 0;
//}
//int Search(int x,int y)
//{
//	int m = x;
//	//int ret = 0;
//	while (--y)
//	{
//		//y--;
//		x *= m;
//		
//	}
//	return x;
//
//
//
//	//int ret = 0;
//	//while (y)
//	//{
//	//	/*x *= x;*/
//	//   /*	x = x*x;*/
//	//	/*ret = x*x;*/
//	//	ret = x;
//	//	ret *= x;
//	//	//4+4+4
//	//	y--;
//	//}
//	//return ret;
//}

//int Search(int x, int y)
//{
//	int d = 1;
//	int i = 0;
//	for (i = 0; i < y; i++)
//	{
//		d = x*d;
//	}
//	return d;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = Search(a,b);
//	printf("%d\n", ret);
//	return 0;
//}


//#define Max 100  //是宏定义吗   是的 
//#define SUM(x) (x)+(x)
//int main()
//{
//	printf("%d\n", SUM(10));
//	printf("SUM(20)\n");
//	printf("%d\n", SUM(1 * 2));
//	return 0;
//}

//#define FUN(x) printf("the value of "#x" is %d\n",x)
//int main()
//{
//	int a = 10;
//	FUN(a);
//	return 0;
//}

//#define INIT_VAL(a,b) { a = 0; b = 0; }  //不能解决问题
//#define INIT_VAL(a,b) do{ a = 0; b = 0; }while(0)   //可以解决
////什么时候会出问题
//int main()
//{
//	/*int a = 10;
//	int b = 20;
//	printf("%d\n", a + b);*/
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	printf("%d %d\n", a, b);
//	scanf("%d", &ret);
//	if (ret)
//
//		INIT_VAL(a, b); //本质上是两条语句   带上花括号你
//	
//	else
//	{
//		a = 100;
//		b = 200;
//	}
//	printf("%d %d\n", a, b);
//	/*printf("%d %d\n", a, b);
//	INIT_VAL(a, b);
//	printf("%d %d\n", a, b);*/
//	return 0;
//}
//#define INIT_VAL(a , b) do{\
//	printf("before: a=%d b=%d\n", a , b);\
//	a = 0;\
//	b = 0;\
//	printf("after: a=%d b=%d\n", a , b);\
//	}while (0)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	scanf("%d", &ret);
//	if (ret)
//	INIT_VAL(a, b);
//	
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}


//int main()
//{
//	printf("%d %d %d %d", \
//		100, \
//		200, \
//		300,\
//		400);
//	return 0;
//}

//宏是不是可以定义在函数中  可以


//void show(void)
//{
////#define M 10   //宏定义与是否在函数内还是外都没有关系
//	           //结论：在源文件的任何地方宏都可以定义，与是否在函数体内外无关
//	printf("%d\n", M);
//}
//int main()
//{
//#define M 10 
//	show();    //宏的作用范围在定义以下都可以
//
////	printf("%d\n", M);   
////#define M 10     //使用在定义的下方  知道文件结束
////	printf("%d\n", M);
//	return 0;
//}
//#define M 10
//int main()
//{
//#define M 10
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//#undef M
//#define M 100
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	/*printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);*/
//}
//int main()
//{
//#define X 3
//#define Y X*2
//#undef  X
//#define X 2
//	int z = Y;
//	printf("%d\n", z);
//	return 0;
//}
//int main()
//{
//#define M 10
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//#undef M
//#define M 100
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	/*printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);
//	printf("hehehe %d\n", M);*/
//}
//宏替换是在函数之前的

//#define M 10
//void show(void)
//{
//	printf("%d\n", M);
//}
//int main()
//{
////#define M 10
//#undef M
//	show();
//	return 0;
//}
//条件编译

//int main()
//{
////#define DEBUG
////#define DEBUG1   1
////#define DEBUG    0
///*#ifdef  DEBUG*/ //判定的是宏是否被定义
////#ifndef //判定的是宏是否被定义
//	//宏是否被定义 VS 宏是否为真or假  #define DEBUG  0
//#define DEBUG 0
//#define  REALEASE
//#ifdef  DEBUG
//	printf("hello debug!\n");
////#elif REALEASE
////	printf("hello realease!\n");
//#else
//	printf("unknow\n");
//#endif
//	return 0;
//}





//int fun(int x)
//{
//	int ret = x % 10;
//	ret *= ret;
//	if (ret == x)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = fun(a);
//	if (ret == 1)
//	{
//		printf("a=%d是同构数\n",a);
//	}
//	else
//	{
//		printf("a=%d不是同构数\n",a);
//	}
//	return 0;
//}
//

//int fun(int arr[][3])
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 3; i++)
//	{
//		sum += arr[i][i]*arr[i][i];
//	}
//	return sum;
//}
//int main()
//{
//	int arr[3][3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int ret = fun(arr);
//	printf("%d\n", ret);
//}
