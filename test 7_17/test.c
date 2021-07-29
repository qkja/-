#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	/*
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = 0;
//	sum = num1 + num2;
//	printf("%d\n", sum);*/
//	//printf("hehe\n");
//	
//	/*int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//        else
//			printf("haha\n");*/
//	//else和最近的未匹配的if匹配
//	// 	   在if(a==1)就不进去
//    
//	//int a = 0;
//	return 0;
//}
//int main()
//{
//	int num = 4;
//	if (num = 5)//和num==5不一样一个等号是赋值
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int num = 4;
//	if (5 == num)//好的代码风格
//		printf("hehe\n");
//
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	/*while (num < 100)
//	{
//		printf("%d ", num);
//		num+=2;
//	}*/
//	/*for (num = 0; num < 100; num++)
//	{
//		if (1 == num % 2)
//			printf("%d ", num);
//	}*/
//	return 0; 
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 100; j++)
//		{
//			if (1 == j % 2)
//				printf("%d ", j);
//		}
//	
//	}
//	return 0;
//}
//int main()
//{
//	int n= 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//	case 0:
//		printf("hehe");
//		break;
//	case 1:
//		printf("dede\n");
//		break;
//	case 2:
//		printf("deide\n");
//		break;
//	case 3:
//		printf("dedei\n");
//		break;
//	case 4:
//		printf("dedie\n");
//		break;
//	default:
//			printf("输入错误\n");
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//	default:
//		printf("输入错误\n");
//
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++, n++;
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("%d %d", n, m);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	if (n)
//		printf("hehe");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i<=10)
//	{
//
//		
//		printf("%d ", i);
//		i++;
//		if (5 == i)
//			//break;
//			continue;
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	//putchar(ch);
//	//printf("%c", ch);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	//int n = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	int k = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] < arr[k])
//			k = i;
//	}
//	printf("%d ", k);
//	/*int min = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//			printf("%d", i+1);
//		}
//	}*/
//	
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int s = 1;
//
//	scanf("%d ", &n);
//	if (n >= 10)
//	{
//		int i = 0;
//		//int j = 0;
//		while (n)
//		{
//			i = n % 10;
//			n = n / 10;
//			s *= i;
//		}
//		printf("%d", s);
//
//	}
//	return 0;
//}