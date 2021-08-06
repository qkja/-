#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int search_max(int x, int y)
//{
//    return x > y ? x : y;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    scanf("%d %d %d %d ", &a, &b, &c, &d);
//    int max = search_max(search_max(a, b), search_max(c, d));
//    printf("%d\n", max);
//    return 0;
//}
//#include<stdio.h>
//int test(int x, int y, int z)
//{
//    int sum = x + y + z;
//    sum /= 3;
//    if (sum > 60)
//        return 1;
//    else
//        return 0;
//}
//int main()
//{
//    int math = 0;
//    int chi = 0;
//    int eng = 0;
//    scanf("%d %d %d", &math, &chi, &eng);
//    int len = test(math, chi, eng);
//    //返回1，通过
//    if (1 == len)
//        printf("YES\n");
//    else if (0 == len)
//        printf("NO\n");
//    //返回0不通过
//}
//#include<stdio.h>
//void test(int x)
//{
//    if (x >= 90 && x <= 100)
//        printf("A");
//    else if (x >= 80 && x < 90)
//        printf("B");
//    else if (x >= 70 && x < 80)
//        printf("C");
//    else if (x >= 60 && x < 70)
//        printf("D");
//    else if (x < 60 && x >= 0)
//        printf("E");
//    else
//        printf("F");
//
//}
//void test1(int x)
//{
//    x = x / 10;
//    switch (x)
// {
//    case 0:
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("E");
//        break;
//    case 6:
//        printf("D");
//        break;
//    case 7:
//        printf("C");
//        break;
//    case 8:
//        printf("B");
//        break;
//    case 9:
//    case 10:
//        printf("A");
//        break;
//    default:
//        printf("F");
//        break;
//  }
//}
//int main()
//{
//    int score = 0;
//    while (scanf("%d", &score) != EOF);
//   // test(score);
//    test1(score);
//    /*int a = -2;
//    a /= 10;
//    printf("%d", a);*/
//    return 0;
//}
//函数指针      指向函数的指针
//数组指针      指向数组的指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d\n", Add(a, b));
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);       //二者一模一样，&函数名   和    函数名一样
//	//int *pa(int, int) = Add;   //不对
//	int (*pa)(int, int) = Add; //对
//	printf("%d\n", (*pa)(2, 3));
//
//	return 0;
//}
//函数指针      指向函数的指针
//void Print(char* str)
//{
//	printf("%s", str);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello bit");
//	return 0;
//}
//   (*( void(*)() )0)()    //调用0地址处的函数
//(int)a     强制类型转换   
//void (*signal(int ,void(*)(int)))(int )
//typedf  
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
//	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		/*printf("请输入两个操作数：>");
//		scanf("%d %d", &a, &b);*/
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：>");
//			scanf("%d%d ", &a, &b);
//			int ret = pfArr[input](a,b);
//			printf("%d\n", ret);//到底哪错了
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	do
//	{
//		printf("请输入两个数：>");
//		scanf("%d %d", &a,&b);
//		int ret= Add(a, b);
//		printf("%d\n", ret);
//	} while (a);
//	return 0;
//}
//int main()
//{
//	printf("hwhwhwhwhhjwhwh\n");
//	return 0;
//}
//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test (void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int j = 0;
//    int arr[100][3] = { 0 };
//    int sum[100] = { 0 };
//    int count = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%d ", &arr[i][j]);
//            sum[i] += arr[i][j];
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (sum[i] < 180)
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int max = 0;
//    int i = 0;
//
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        int m = 0;
//        scanf("%d ", &m);
//        if (m > max)
//        {
//            max = m;
//        }
//    }
//    printf("%d\n", max);
//    return 0;
//}
