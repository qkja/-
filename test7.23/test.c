#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &m, &n);
//    int i = 0;
//    int j = 0;
//    int arr1[100][100];
//    int arr2[100][100];
//    int leap = 0;
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//                leap++;
//        }
//    }
//    double ret = 100.0 * leap / (n * m);
//    printf("%.2lf\n", ret);
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char name[20] = { 0 };
//    char password[20] = { 0 };
//    while (scanf("%s %s", name, password) != EOF)
//    {
//        if (strcmp(name, "admin") == 0 && strcmp(password, "admin") == 0)//字符串不能用等号比交，strcmp
//        {
//            printf("Login Success!\n");
//        }
//        else
//        {
//            printf("Login Fail!\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("I will learn C++ well!");
//    return 0;
//}
#include<stdio.h>
int main()
{
    int i = 0;
    int leap = 0;
    // scanf("%d",&n);
    for (i = 1; i < 2020; i++)
    {
        while (i)
        {
            int ret = i % 10;
            if (9 == ret)
            {
                leap++;
                break;
            }
            else
                i = i / 10;
        }

    } 
    printf("%d", leap);
    return 0;
}