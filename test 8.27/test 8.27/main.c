#define _CRT_SECURE_NO_WARNINGS 1
#include"test .h"
//extern int g_val;      //变量的声明  声明不开辟空间 不能赋值和初始化
//int main()
//{
//	show();
//	printf("%d\n", g_val);
//	system("pause");
//	return 0;
//}
static int g_val = 100;      //static 修饰全局变量代表该变量只能在本文件内访问
static void show(int num)
{
	/*printf("hehehe\n");*/

	printf("hello show()! %d\n", num);
	printf("hello show()! %d\n", g_val);
}
void show_helper(int x)
{
	show(x);
}