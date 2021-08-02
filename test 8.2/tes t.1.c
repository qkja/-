#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    int arr[10][10] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d ", &arr[i][j]);
//        }
//    }
//    int x = 0;
//    int y = 0;
//    scanf("%d %d", &x, &y);
//    printf("%d", arr[x - 1][y - 1]);
//    return 0;
//}
//#include<stdio.h>
//int  main()
//{
//    int n = 0;
//    int m = 0;
//    int i = 0;
//    int arr[100] = { 0 };
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n * m; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    for (i = 0; i < n * m; i++)
//    {
//
//        printf("%d ", arr[i]);
//        i++;
//        if (i % m == 0)
//            printf("\n");
//        i--;
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    int arr[10][10] = { 0 };
//    int max = 0;
//    int x = 0;
//    int y = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d ", &arr[i][j]);
//            if (arr[i][j] > max)
//            {
//                max = arr[i][j];
//                x = i;
//                y = j;
//            }
//        }
//    }
//    printf("%d %d", x + 1, y + 1);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr1[10][10] = { 0 };
//    int arr2[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    int count = 0;
//   scanf("%d %d ", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d ", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d ", &arr2[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (arr1[i][j] != arr2[i][j])
//                count++;
//        }
//    }
//    if (count == 0)
//        printf("Yes\n");
//    else
//        printf("No\n");
//    return 0;
//}
//时间复杂度O(N)
//#include<stdio.h>
//int main()
//{
//	int arr[100] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	int de = (n * (1 + n)) / 2;
//	for (i = 0; i <= n; i++)
//	{
//		scanf("%d ", &arr[i]);
//		//arr[m] = m;
//		//0 1 2 3 4 6  7
//		/*i++;
//		if (arr[m] == 0)
//			printf("%d",arr[])*/
//		sum += arr[i];
//	}
//	printf("%d\n", de - sum);
//	return 0;
//}
 //#include<stdio.h>
//int main()
//{
//	int arr[100] = { 0 };
//	arr[0] = -1;
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int m = 0;
//	//int sum = 0;
//	//int de = (n * (1 + n)) / 2;
//	for (i = 0; i <= n; i++)
//	{
//		scanf("%d ", &m);
//		arr[m] = m;
//		//0 1 2 3 4 6  7
//		/*i++;
//		if (arr[m] == 0)
//			printf("%d",arr[])*/
//		//sum += arr[i];
//	}
//	if (arr[0] != 0)
//		{
//			printf("0");
//		}
//	else
//	   {
//		for (i = 1; i <= n; i++)
//		{
//			if (arr[i] == 0)
//				printf("%d", i);
//		 }
//	   }
//	
//	//printf("%d\n", de - sum);
//	return 0;
//}
//异或
//2^3
//00000010
//00000011
//00000001   1
//int main()
//{
//	int a = 1;
//	int b = 2;
//	a = a ^ b;
//	//00000000000000000000000000000001   1
//	//00000000000000000000000000000010   2
//	//00000000000000000000000000000011   a
//	//00000000000000000000000000000010   
//	//00000000000000000000000000000001   b
//	//00000000000000000000000000000011   a
//	//00000000000000000000000000000010   a
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}
//相同的数异或就没了
//int main()
//{
//	int x = 0;
//	int i = 0;
//	int j = 0;
//	int arr[100] = { 0 };
//	int n = 0;
//	scanf("%d ", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr[i]);
//		x ^= arr[i];
//	}
//	for (j = 0; j <= n; j++)
//	{
//		x ^= j;
//	}
//	printf("%d ", x);
//	return 0;
//}
//0 1  3
//0
//0^0   0
//0^1   1
//1^3  
//00000000000000000000000000000001
//00000000000000000000000000000011
//00000000000000000000000000000010
//     2
//0 1 2 3
//2^0   2
//2^1
//00000000000000000000000000000010
//00000000000000000000000000000001
//00000000000000000000000000000011
//00000000000000000000000000000010
//00000000000000000000000000000001
//00000000000000000000000000000011
//00000000000000000000000000000010
// 2
