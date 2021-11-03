#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Print(int x)
{
	if (x > 9)
	{
		Print(x / 10);
	}
	printf("%d ", x % 10);
}

int Fac1(int x)
{
	int ret = 1;
	for (int i = 2; i <=x; i++)
	{
		ret *= i;
	}
	return ret;
}

//ตÝน้
int Fac2(int x)
{
	if (x < 2)
	{
		return 1;
	}
	return x * Fac2(x - 1);
}

int My_strlen1(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}

//ตÝน้
int My_strlen2(char* arr)
{
	if (*arr == '\0')
	{
        return 0;
	}
		
	return 1 + My_strlen2(++arr);
}

int DigitSum(int x)
{
	if (x < 10)
		return x;
	return (x % 10) + DigitSum(x / 10);
}

int Power(const int x, int y)
{
	if (1 == y)
		return x;
	
	if (0 == y)
		return 1;

	return x * Power(x, y - 1);
}

int Fib1(int x)
{
	int a = 1;
	int b = 1;
	int c = 1;
	
	while (x>2)
	{
		c = a + b;
		a = b;
		b = c;
		x--;
	}
	return c;

}

//ตÝน้
int Fib2(int x)
{
	if (x < 3)
		return 1;
	return Fib2(x - 1) + Fib2(x - 2);
}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret1 = Fib1(n);
//	int ret2 = Fib2(n);
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//
//	int ret = Power(n, k);
//	printf("%d \n", ret);
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = DigitSum(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

int My_strlen(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}

void reverse_string(char* string)
{
	int len = My_strlen(string);
	int left = 0;
	int right = len - 1;

	char ret = string[left];
	string[left] = string[right];
	string[right] = '\0';

	if (My_strlen(string + 1) >= 2)
		reverse_string(string + 1);
	string[right] = ret;
}

int main()
{
	char arr[] = "abcdef";

	reverse_string(arr);

	printf("%s\n", arr);
	return 0;
}

//int main()
//{
//	char arr[] = "abcdef";
//
//	int ret1 = My_strlen1(arr);
//	int ret2 = My_strlen2(arr);
//
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	
//	printf("%d\n", Fac1(n));
//	printf("%d\n", Fac2(n));
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//int ret = fac(n);
//	printf("%d ", ret);
//	//Print(n);
//	return 0;
//}