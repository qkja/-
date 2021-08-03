#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void swap(int* a, int* b)
//{
//    int temp = 0;
//    temp = *a;
//    *a = *b;
//    *b = temp;
//}
//void twst_2(int arr[][], int x, int y, int p, int q)//二维数组传参 怎么传
//{
//    //int i = 0;
//    int j = 0;
//    int m = 0;
//    int n = 0;
//    for (j = 0; j < q; j++)
//    {
//        m=arr[x-1][j];
//        n=arr[y - 1][j];
//        swap(&m, &n);
//        //swap( (arr[x - 1][j]), &arr[y-1][j]);
//    }
//}
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d ", &n, &m);
//    int i = 0;
//    int arr[10][10] = { 0 };
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d ", &arr[i]);
//        }
//    }
//    char ch = 0;
//    int a = 0;
//    int b = 0;
//    scanf("%c %d %d", &ch, &a, &b);
//    if (ch == 'r')
//    {
//        twst_1(arr, a, b, n, m);
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < m; j++)
//            {
//                printf("%d ", arr[i][j]);
//            }
//        }
//    }
//    else if (ch == 'c')
//    {
//        twst_2(arr, a, b, n, m);
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < m; j++)
//            {
//                printf("%d ", arr[i][j]);
//            }
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    swap(&a, &b);
//    printf("a=%d b=%d", a, b);
//    return 0;
//}
//#include<stdio.h>
//int test(int n)
//{
//    return n < 2 ? n : test(n - 1) * n;
//}
//void yang(int x)
//{
//    if (0 == x)
//        printf("%5d", 1);
//    else if (x > 0)
//    {
//        int j = 0;
//        for (j = 0; j <= x; j++)
//        {
//            if (j == 0 || j == x)
//                printf("%5d", 1);
//            else
//                printf("%5d", test(x) / (test(j) * test(x - j)));
//        }
//    }
//}
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        printf("%d\n", test(n) / (test(n - 1)));
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d ", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        yang(i);
//        printf("\n");
//    }
//    return 0;
//}//有错误，当n太大时，会出现越栈
//int main()
//{
//	printf("%5d", 1);
//	return 0;
//}
//int main()
//{
//	int n = 5;
//	int i = 0;
//	int m[5][5] = {0};
//	int j = 0;
//	//int d = 0;
//	int sum[5] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &m[i][j]);
//			sum[i] += m[i][j];
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", m[i][j]);
//		}
//		printf("%d\n",sum[i]);
//	}
//	return 0;
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
//            /*if (j == 4)
//                printf("%.1f", sum[i]);*/
//        }
//        printf("%.1f\n", sum[i]);
//    }
//    return 0;
//}
//int main()
//{
//	printf("hehe");
//	return 0;
//}