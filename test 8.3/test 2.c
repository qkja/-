#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//什么是变量
//在内存中开辟一段空间
//int main()
//{
//	int a = 10;
//	//定义与声明
//	//定义  开辟空间  永远只能定义一次
//	//声明  告知       可以多次
//
//	return 0;
//}
//auto关键字
//局部变量  在代码块外
// 代码块   用‘{}’括起来了  
//全局变量  在代码块外
//int g_val = 100;//全局变量
//int main()
//{
//	int a = 10;//局部变量  都在对应函数的栈帧结构上
//	printf("%d", a);
//	printf("%d", g_val);
//	return 0;
//}
//void test_1(void)
//{
//	printf("%d\n", g_val);
//}
//void test_2(void)
//{
//	printf("%d\n", g_val);
//}
//int main()
//{
//	int g_val = 200;//局部优先
//	printf("%d\n", g_val);
//	test_1();
//	test_2();
//	return 0;
//}
//作用域  与生命周期 简单
//全局变量  一直存在
//作用域  该变量有效区域
//生命周期  时间概念 什么时候开辟，什么时候释放

//开辟
/*

  生命周期

*/
//释放
int main()
{
	for (int i = 0; i < 10; i++)
	{
		//printf("%d ", i);
	}
	printf("%d ", i); 
	return 0;
}