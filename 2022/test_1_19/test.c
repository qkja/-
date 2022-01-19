#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a[5] = { 5, 4, 3, 2, 1 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}

//void menu()
//{
//	printf("**********************************\n");
//	printf("*****  1. add     2. sub     *****\n");
//	printf("*****  3. mul     4. div     *****\n");
//	printf("*****  0. exit               *****\n");
//	printf("**********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("输入2个操作数:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("ret = %d\n", ret);
//}

//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		menu();
//		printf("请选择:> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数: ");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("sum = %d\n", ret);
//			break;
//
//		case 2:
//			printf("请输入两个操作数: ");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("Sub = %d\n", ret);
//			break;
//
//		case 3:
//			printf("请输入两个操作数: ");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("Mul = %d\n", ret);
//			break;
//
//		case 4:
//			printf("请输入两个操作数: ");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("Div = %d\n", ret);
//			break;
//
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//
//		}
//	} while (input);
//
//	return 0;
//}

//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("输入2个操作数:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("ret = %d\n", ret);
//}
//
////int main()
////{
////	int input = 0;
////
////	do
////	{
////		menu();
////		printf("请选择:>");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			calc(Add);
////			break;
////		case 2:
////			calc(Sub);
////			break;
////		case 3:
////			calc(Mul);
////			break;
////		case 4:
////			calc(Div);
////			break;
////		case 0:
////			printf("退出计算器\n");
////			break;
////		default:
////			printf("选择错误\n");
////			break;
////		}
////	} while (input);
////
////	return 0;
////}
#include<stdlib.h>
#include<string.h>


#define ESP 0.0000000001

void bubble_sort(int arr[], int sz)
{
	//趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟冒泡排序的过程
		//确定的一趟排序中比较的对数
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void Swap(void* e1,void*e2,int width)
{
	for (int i = 0; i < width; i++)
	{
		char temp = *((char*)e1 + i);
		*((char*)e1 + i) = *((char*)e2 + i);
		*((char*)e2 + i) = temp;
	}
	
}


void My_qsort(void* base, int num, int width, int(*com)(const void* e1, const void* e2))
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			if (com(((char*)base+j* width), ((char*)base + (j + 1) * width)) > 0)
			{
				Swap(((char*)base + j * width), ((char*)base + (j + 1) * width),width);
			}
		}
	}
}

int com_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int com_double(const void* e1, const void* e2)
{

	if (*(double*)e1 - *(double*)e2 > -ESP && *(double*)e1 - *(double*)e2 < ESP)
	{
		return 0;
	}
	else if (*(double*)e1 - *(double*)e2 >= ESP)
	{
		return 1;
	}
	else
	{
		return -1;
	}
	//return (int*)e1 - (int*)e2;
}

int com_float(const void* e1, const void* e2)
{

	if (*(float*)e1 - *(float*)e2 > -ESP && *(float*)e1 - *(float*)e2 < ESP)
	{
		return 0;
	}
	else if (*(float*)e1 - *(float*)e2 >= ESP)
	{
		return 1;
	}
	else
	{
		return -1;
	}
	//return (int*)e1 - (int*)e2;
}
void print_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void print_double(double arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%.2f ", arr[i]);
	}
	printf("\n");
}

int main()
{
	double arr[10] = { 9.4,8.2,7.0,6.6,5.5,4.2,4.8,3.0,2.9,1.99 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), com_double);
	print_double(arr, 10);
	return 0;
}

struct Stu
{
	char name[20];
	int age;
	float score;
};


int com_stu_by_score(const void* e1, const void* e2)
{
	((struct Stu*)e1)->score;
	((struct Stu*)e2)->score;

	if (((struct Stu*)e1)->score < ((struct Stu*)e2)->score)
	{
		return -1;
	}
	else if (((struct Stu*)e1)->score > ((struct Stu*)e2)->score)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

int com_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int com_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void print_stu(struct Stu arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s %d %f\n", arr[i].name, arr[i].age, arr[i].score);
	}
	printf("\n");
}


//int main()
//{
//	
//	struct Stu arr[] = { {"zhangsan",20,87.5f},{"lisi",22,99.0f},{"wangwu", 10, 68.5f} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), com_stu_by_score);
//	print_stu(arr, sz);
//	My_qsort(arr, sz, sizeof(arr[0]), com_stu_by_score);
//	print_stu(arr, sz);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,4,3,2,1 };
//	//print_arr(arr, 10);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	My_qsort(arr, sz, sizeof(arr[0]), com_int);
//	print_arr(arr, 10);
//	return 0;
//}

