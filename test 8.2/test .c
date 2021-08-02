#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//整形和浮点型的存储不一样
//int main()
//{
//	int n = 9;
//	//00000000000000000000000000001001 原码
//	float* pfloat = (float*)&n;
//	//0 00000000 00000000000000000001001
//	//（-1）^0 * 0.00000000000000000001001 * 2^-126
//	printf("n的值：%d\n", n);
//	printf("*pfloat的值：%f\n", *pfloat);
//	*pfloat = 9.0;
//	//1001.0
//	//s=0
//	//E=3
//	//M=1.001
//	//01000001000100000000000000000000
//	//
//	printf("num的值：%d\n", n);//1,091,567,616
//	printf("*pfloat的值：%f\n", *pfloat);
//	return 0;
//}
// 整型是二机制的补码
// 浮点型
//9.0
//1001.0
//(-1)^0*1.001*2^3
//s-0
//M-1.001
//E-3
//（-1）^s * M * 2^E
//对于32位的浮点数，最高位是符号位s，接着8位是E，剩下的23位为有效数字M
//对于64位的浮点数，最高位是符号位s，接着11位是E，剩下的52位为有效数字M
//对于M和E
// 对于M  1<=M<2;  1.xxxx，总是可以将1省去，读取时再加上 等价于可以保存24位有效数字
//E 对应的是无符号数  8-0--255
//                    11-0--2047
//0.5
//0.1
//（-1）^0 * 1.0*2^(-1)
//E有负值，所以规定存储时E的真实值必须加上一个中间数
//                                          8  127
//                                          11 1023


//#include<string.h>
//int main()
//{
//	char a[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}
//int main()
//{
//	float a = 5.5;
////101.1
////s=0
////M=1.011
////E=2
////E+127=129
////0100 0000  1011 0000 0000 0000 0000 0000
//// 0x40b00000
//	return 0;
//}
//取出来 
//第一种  E的存储值不为全0，也不为全1  
//E的存储值—127 = E的真实值 
//M前面补上1
//第二种  E的存储值为全0
//M不在补1
//0.xx * 2*-126
//第三种E为全1
//1.xxx*2^128
//#include<stdio.h>
//void test(int arr[], int x,int y)
//{
//    int i = 0;
//    for (i = 1; i <= x; i++)
//    {
//        if (arr[i] < y)
//        {
//            arr[i - 1] = arr[i];
//        }
//        else
//            break;
//    }
//    arr[i - 1] = y;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d ", &n);
//    int arr[51] = { 0 };
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    int num = 0;
//    scanf("%d ", &num);
//    test(arr, n ,num);
//    for (i = 0; i <= n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    scanf("%d ", &n);
//    int arr[50] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    int k = 0;
//    scanf("%d ", &k);
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != k)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}
//去重排序
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d ", &n);
//    int i = 0;
//    int m = 0;
//    int arr[5001] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &m);
//        arr[m] = m;
//    }
//    for (i = 1; i < 5001; i++)
//    {
//        if (arr[i] != 0)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}
//去重
//暴力去重
//#include<stdio.h>
//void test(int arr[], int x)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < x-1; i++)
//    {
//        for (j = i+1; j < x; j++)
//        {
//            if (arr[i] == arr[j])
//                arr[j] = 0;
//        }
//    }
//}
//void test_1(int arr[], int x)
//{
//    int i = 0;
//    for (i = 0; i < x - 1; i++)
//    {
//        if (arr[i] == arr[i + 1])
//        {
//            int k = 0;
//            for (k = i; k < x - 1; k++)
//            {
//                arr[k] = arr[k + 1];
//            }
//            x--;
//            i--;
//        }
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d ", &n);
//    int arr[5001] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    test_1(arr, n);
//    for (i = 0; i < n; i++)
//    {
//       // if (arr[i] != 0)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}
//巧妙求解
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[100];
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //排序
//    for (i = 0; i < n - 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    //去重-比较n-1对
//    int j = 0;
//    for (i = 0; i < n - 1; i++)
//    {
//        //把i+1后边的元素往前移动
//        if (arr[i] == arr[i + 1])
//        {
//            int k = 0;
//            for (k = i; k < n - 1; k++)
//            {
//                arr[k] = arr[k + 1];
//            }
//            n--;
//            i--;
//        }
//    }
//    //打印
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//二分查找
//#include<stdio.h>
//#include<string.h>
//int binary_search(int arr[], int a, int num)
//{
//    int left = 0;
//    int right = a;
//    int mid = 0;
//    while (left <= right)
//    {
//        mid = (left + right) / 2;
//        if (arr[mid] < num)
//            left = mid + 1;
//        else if (arr[mid] > num)
//            right = mid;
//        else
//            return mid;
//     }
//    return 0;
//     // 0 1 2 3 4 5 
//     //     
//}
//int main()
//{
//    int a = 0;
//    int num = 0;
//    scanf("%d", &a);
//    int arr[100] = { 0 };
//    int i = 0;
//    for (i = 0; i < a; i++)
//        scanf("%d ", &arr[i]);
//    scanf("%d ", &num);
//    int len = binary_search(arr, a, num);
//   //返回1 找到了
//    if (len != 0)
//        printf("找到了，下标是：%d\n", len);
//        //返回0，没找到
//    else
//        printf("没找到\n");
//    /*int sz = sizeof(arr) / sizeof(arr[0]);
//    printf("%d ", sz);
//    sz = strlen(arr);
//    printf("%d ", sz);*/
//    return 0;
//}
//int test(int x)
//{
//    return x < 2 ? x : test(x - 1) * x;
//}
//int main()
//{
//    int n = 4;
//    int len = test(n);
//    printf("%d ", len);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 5;
//    int i = 0;
//    int j = 0;
//    float sum[5] = { 0.0 };
//    float arr[5][5] = { 0.0 };
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%f ", &arr[i][j]);
//            sum[i] += arr[i][j];
//        }
//    }
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 0; j < 5; j++)
//        {
//            printf("%.1f ", arr[i][j]);
//            if (j == 4)
//                printf("%.1f\n", sum[i]);
//        }
//    }
//    return 0;
//}


      