#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(float));
//  return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int *pa=&a;
//	int *pb=&b;
//	printf("%p\n", pa);
//	printf("%p\n", pb);
//	return 0;
//}
// 指针解引用
//int main()
//{
//	int a = 0x11223344;
//	/*int *pa=&a;
//	*pa = 0;*/
//	char* pc = &a;
//	*pc = 0;//指针类型决定了指针进行解引用能够访问空间的大小
//			//int*     --4
//			//char*    --1
//			//double*  --8
//			
//	printf("%d", a);
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	return 0;
//}
//指针加减整数
//int main()
//{
//	int a = 0x11223344;
//	int *pa=&a;
//	char *pc=&a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	//指针类型决定指针加减1走多远
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//int *pa=&arr;
//     char* pc = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pc + i) = 1;
//	}
//	return 0;
//}
//int main()
//{
//	printf("hehe");
//	return 0;
//}
//野指针
//未初始化
//越界访问
//指针指向的内存空间释放了

//int main()
//{
//	//int a=0;
//	//int* p=&a;//局部变量未初始化，默认为随机值
//	//printf("%d", a);
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p + i;
//	}
//	return 0;
//}
//指针指向的内存空间释放了
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int *p=test();
//	*p = 20;
//	return 0;
//}
//int main()
//{
//	/*int* p;
//	*p = 10;*/
//	int a = 10;
//	int b = 30;
//	a = a + b;
//	printf("%d", b);
//	b = a + b;
//	printf("%d", b);
//	return 0;
//}
//int main()
//{
//	printf("hehe");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int sum = 0;
//    int arr[10][10] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d ", &arr[i][j]);
//            if (arr[i][j] > 0)
//            sum += arr[i][j];
//        }
//        
//    }
//    printf("%d", sum);
//    return 0;
//}
