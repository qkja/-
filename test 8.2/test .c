#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���κ͸����͵Ĵ洢��һ��
//int main()
//{
//	int n = 9;
//	//00000000000000000000000000001001 ԭ��
//	float* pfloat = (float*)&n;
//	//0 00000000 00000000000000000001001
//	//��-1��^0 * 0.00000000000000000001001 * 2^-126
//	printf("n��ֵ��%d\n", n);
//	printf("*pfloat��ֵ��%f\n", *pfloat);
//	*pfloat = 9.0;
//	//1001.0
//	//s=0
//	//E=3
//	//M=1.001
//	//01000001000100000000000000000000
//	//
//	printf("num��ֵ��%d\n", n);//1,091,567,616
//	printf("*pfloat��ֵ��%f\n", *pfloat);
//	return 0;
//}
// �����Ƕ����ƵĲ���
// ������
//9.0
//1001.0
//(-1)^0*1.001*2^3
//s-0
//M-1.001
//E-3
//��-1��^s * M * 2^E
//����32λ�ĸ����������λ�Ƿ���λs������8λ��E��ʣ�µ�23λΪ��Ч����M
//����64λ�ĸ����������λ�Ƿ���λs������11λ��E��ʣ�µ�52λΪ��Ч����M
//����M��E
// ����M  1<=M<2;  1.xxxx�����ǿ��Խ�1ʡȥ����ȡʱ�ټ��� �ȼ��ڿ��Ա���24λ��Ч����
//E ��Ӧ�����޷�����  8-0--255
//                    11-0--2047
//0.5
//0.1
//��-1��^0 * 1.0*2^(-1)
//E�и�ֵ�����Թ涨�洢ʱE����ʵֵ�������һ���м���
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
//ȡ���� 
//��һ��  E�Ĵ洢ֵ��Ϊȫ0��Ҳ��Ϊȫ1  
//E�Ĵ洢ֵ��127 = E����ʵֵ 
//Mǰ�油��1
//�ڶ���  E�Ĵ洢ֵΪȫ0
//M���ڲ�1
//0.xx * 2*-126
//������EΪȫ1
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
//ȥ������
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
//ȥ��
//����ȥ��
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
//�������
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
//    //����
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
//    //ȥ��-�Ƚ�n-1��
//    int j = 0;
//    for (i = 0; i < n - 1; i++)
//    {
//        //��i+1��ߵ�Ԫ����ǰ�ƶ�
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
//    //��ӡ
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//���ֲ���
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
//   //����1 �ҵ���
//    if (len != 0)
//        printf("�ҵ��ˣ��±��ǣ�%d\n", len);
//        //����0��û�ҵ�
//    else
//        printf("û�ҵ�\n");
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


      