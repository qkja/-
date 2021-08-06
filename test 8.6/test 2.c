#define _CRT_SECURE_NO_WARNINGS 1
//关键字  auto 修饰局部变量
//关键字   register  将变量尽量放入寄存器中
// 使用   建议不要大量使用，因为寄存器是有限的
//局部的
//不会被写入
//高频读取
//#include<stdio.h>
//int main()
//{
//	int val = 100;
//	printf("%d\n", val);
//	register int pass = 100;//不可以对pass取地址，因为他已经在寄存器中
//	printf("%d\n", pass);
//	pass = 200;             // 可以写入
//	//int *p=&pass;
//	printf("%d\n", pass);
//	return 0;
//}

