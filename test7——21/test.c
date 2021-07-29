#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//   double arr1 = 0;
//   double arr2 = 0;
//    char ch = 0;
//    while ((scanf("%lf%c%lf", &arr1, &ch, &arr2)) != EOF)
//    {
//        if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
//         {
//            if (ch == '+')
//            {
//                double sum = arr1 + arr2;
//                printf("%0.4lf+%0.4lf=%0.4lf\n", arr1, arr2, sum);
//            }
//            else if (ch == '-')
//            {
//                double sub = arr1 - arr2;
//                printf("%0.4lf-%0.4lf=%0.4lf\n", arr1, arr2, sub);
//            }
//            else if (ch == '*')
//            {
//                double mul = arr1 * arr2;
//                printf("%0.4lf*%0.4lf=%0.4lf\n", arr1, arr2, mul);
//            }
//            else if (ch == '/')
//            {
//
//                if (arr2 == 0.0)
//                    printf("Wrong!Division by zero!\n");
//                else
//                {
//                    double div = arr1 / arr2;
//                    printf("%0.4lf/%0.4lf=%0.4lf\n", arr1, arr2, div);
//                }
//            }
//          
//            
//        }  
//        else
//        {
//            printf("Invalid operation!\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//	float n1 = 0;
//	float n2 = 0;
//	char op = 0;
//	while ((scanf("%f%c%f", &n1, &op, &n2) != EOF))
//	{
//		switch (op)
//		{
//		case'+':
//			printf("%.4f+%.4f=%.4f\n", n1, n1, n1 + n2);
//			break;
//		case'-':
//			printf("%.4f-%.4f=%.4f\n", n1, n1, n1 - n2);
//			break;
//		case'*':
//			printf("%.4f*%.4f=%.4f\n", n1, n1, n1 * n2);
//			break;
//		case'/':
//			if (n2 == 0.0)
//				printf("Wrong!Division by zero!\n");
//			else
//				printf("%.4f/%.4f=%.4f\n", n1, n1, n1 / n2);
//			break;
//		default :
//			printf("Invalid operation!\n");
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//    int n = 0;
//    while ((scanf("%d", &n) != EOF))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    while ((scanf("%d", &n) != EOF))
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}