#define _CRT_SECURE_NO_WARNINGS 1










#include <stdio.h>
#include <math.h>

int main()



{
	printf("%d", -5 % (2));

	//int a = -10;
	//int d = 3;
	////printf("%d\n", a/d); //C语言中是-3，很好理解
	//printf("%d\n", a % d);
	
	return 0;
}

//int main()
//{
//	//本质是四舍五入
//	printf("%.1f\n", round(2.1));
//	printf("%.1f\n", round(2.9));
//	printf("%.1f\n", round(-2.1));
//	printf("%.1f\n", round(-2.9));
//
//	return 0;
//}











//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	//本质是向+∞取整，注意输出格式要不然看不到结果
//	printf("%.1f\n", ceil(-2.9)); //-2
//	printf("%.1f\n", ceil(-2.1)); //-2
//	printf("%.1f\n", ceil(2.9)); //3
//	printf("%.1f\n", ceil(2.1)); //3
//
//	return 0;
//}






//#include <stdio.h>
//#include <math.h> //因为使用了floor函数，需要添加该头文件
//
//int main()
//{
//	//本质是向-∞取整，注意输出格式要不然看不到结果
//	printf("%.1f\n", floor(-2.9)); //-3
//	printf("%.1f\n", floor(-2.1)); //-3
//	printf("%.1f\n", floor(2.9)); //2
//	printf("%.1f\n", floor(2.1)); //2
//
//	return 0;
//}









//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	printf("%d\n", (int)trunc(2.9));
//	printf("%d\n", (int)trunc(-2.9));
//	return 0;
//}












//int main()
//{
//	int a = 2.9;
//	int b = -2.9;
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	/*int a = 5;
//	int b = -5;
//	printf("%d\n", a / 2);
//	printf("%d\n", b / 2);*/
//	return 0;
//}