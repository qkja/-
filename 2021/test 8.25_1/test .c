#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int a = 2.9;
//	int b = -2.9;
//	printf("%d %d\n", a, b);   //不是四舍五入  
//	return 0;                  //0向取整
//}

//int main()
//{
//	int a = 2.9;
//	int b = -2.9;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", (int)trunc(2.9));
//	printf("%d\n", (int)trunc(-2.9));
//
//	return 0;
//}

//另一种取整
//向负无穷取整  -  地板取整
//int main()
//{
//	/*int a = 2.9;
//	int b = -2.9;*/
//	printf("%1f\n", floor(-2.9));    
//	printf("%1f\n", floor(-2.1));
//	printf("%lf\n", floor(2.9));
//	printf("%lf\n", floor(2.1));
//
//	return 0;
//}
//int main()
//{
//	   /* printf("%1f\n", ceil(-2.9));
//		printf("%1f\n", ceil(-2.1));
//		printf("%lf\n", ceil(2.9)); 
//		printf("%lf\n", ceil(2.1));*/
//	/*printf("%1f\n", round(-2.9));
//	printf("%1f\n", round(-2.1));
//	printf("%lf\n", round(2.9));
//	printf("%lf\n", round(2.1));*/
//	return 0;
//}


//取模问题
//int main()
//{
//	int a = 10;
//	int b = a % 11;
//	printf("%d\n", b);
//	b = a % 1;
//	printf("%d\n", b);
//	 b = a % 6;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = -10;
//	int b = 3;
//	printf("%d\n", a % b);
//	return 0;
//}




//取余和取模一样吗？
//取余  尽可能让商向0取整
//取模  尽可能让商向负无穷取整
//int main()
//{
//	int a = 2;
//	int b = -2;
//	printf("%d\n", a / b);
//	return 0;
//}
//不同符号

//int main()
//{
//	printf("%d\n",  -10 / 3);   //-3.3333   -3         
//	printf("%d\n",  -10 % 3);   //          -1
//	printf("%d\n",  10 / -3);   //-3.3333   -3
//	printf("%d\n",  10 % -3);   //           1
//	return 0;
//}

//int fun(int x, int y)
//{
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i <= x; i++)
//	{
//		int t = y;
//		int m = i;
//		int n = i;
//		while (--t)
//		{
//			n = n * m;
//		}
//		sum = sum + n;
//	}
//	return sum;
//
//}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int ret = fun(a, b);
	printf("%d\n", ret);
	return 0;
}