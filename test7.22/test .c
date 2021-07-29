#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while ((scanf("%d", &n) != EOF))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (j < n - 1 - i)
//                    printf(" ");
//                else
//                    printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while ((scanf("%d", &n)) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (j < i)
//                    printf(" ");
//                else
//                    printf("* ");
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr1[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    int sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr1[i][j]);   
//        }
//       // printf("\n");
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            {
//                if (i > j)
//                sum += arr1[i][j];
//            }
//        }
//    }
//    if (0 == sum)
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//}
#include<stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    int arr[10][10] = { 0 };
    scanf("%d %d", &n, &m);
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < m; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
