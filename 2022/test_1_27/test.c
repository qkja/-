#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int fun(unsigned int x)
{
	int n = 0;
	while (x + 1)
	{
		n++;
		x = x | (x + 1);
	} 
	return n;
}

//int main()
//{
//	unsigned int x = 2014;
//	printf("%d\n", fun(x));
//	return 0;
//}
//int Fib(int n)
//{
//	if (n < 3)
//	{
//		return 0;
//    }
//	if (n == 3 || n == 4)
//	{
//		return n - 2;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}
//int Fib_fun(int n)
//{
//	return Fib(n) + 1;
//}

int Fib(int n)
{
	if (n < 3)
	{
		return 1;
	}
	return Fib(n - 1) + Fib(n - 2);
}

//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != -1)
//	{
//		int count = Fib(n);
//		printf("%d\n", count);
//	}
//	return 0;
//}
//#include<math.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	double sum = 0.0;
//	scanf("%d %d", &n, &m);
//	sum = n;
//	double n2 = n;
//	for (int i = 1; i < m; i++)
//	{
//		sum += sqrt(n2);
//		n2 = sqrt(n2);
//	}
//	printf("%.2lf\n", sum);
//	return 0;
//}

#include<math.h>

int main()
{
	int n = 0;
	int m = 0;
	double sum = 0.0;
	while ((scanf("%d %d", &n, &m)) != -1)
	{
		sum = n;
		double n2 = n;
		for (int i = 1; i < m; i++)
		{
			sum += sqrt(n2);
			n2 = sqrt(n2);
		}
		printf("%.2lf\n", sum);
	}
	return 0;
}