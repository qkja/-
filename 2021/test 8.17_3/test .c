#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//# define Max 10
//typedef unsigned int u_int;
//int main()
//{
//	u_int a = 10;
//	printf("%d\n", a);
//	u_int b = Max;
//	printf("%d\n", b);
//	return 0;
//}
//typedef auto int a_int;
//int main()
//{
//	int a = 10;
//	int b = 2;
//	int *p=&b;
//	a=a/ *p;
//	b=a/ (*p);
//	printf("%d %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	if (a == 1 && b == 2 && c == 3)
//		printf("hello world\n");
//	if (a == 1 &&\
//		b == 2 &&\
//		c == 3)
//		printf("hehe\n");
//	if (a == 1\
//		&& b == 2\
//		&& c == 3)
//		printf("haha\n");
//	return 0;
//}
// '\'的经典用法
//int main()
//{
//	printf("\nhehe");
//	printf("\n\"");
//	printf("hello n bit\n");
//	printf("hello \n bit");
//	return 0;
//}
//'\'的作用有两种
//续航  后面不要空格
//转义  字面转字符  特殊转字面
//回车和换行
//区别
//回车 光标回到当前行的最开始   \r
//换行 光标移到下一行           \n
//旋转光标
#include<windows.h>
//int main()
//{
//	int index = 0;
//	const char* lable = "|/-\\";
//	while (1)
//	{
//	    index %= 4;
//		printf("[%c]\n", lable[index]);
//		index++;
//		Sleep(1000);
//	}
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(1));    //4
//	printf("%d\n", sizeof("1"));  //2
//	printf("%d\n", sizeof('1'));  //4 看做成整型
//	char c = '1';                 //4->1->截断
//	//C99规定 ，‘a’  叫做整形字符常量 看作int 型
//	printf("%d\n", sizeof(c));    //1
//	//printf("%d\n", sizeof('1'));
//	//pzintf("%d\n", sizeof('1'));
//	//"" 保存字符串
//	//'' 保存字符
//	"abcd"; //字符串
//	"a";    //字符串
//	"";
//	'abcd';//这是什么
//	'a';
//	//以上都是字面值
//	//char a = 'abcd';//不推荐
//	//printf("%c\n", a);
//	return 0;
//}
//int main()
//{
//	char a = 'abc';
//	printf("%c\n", a);
//	//printf("%s\n", a);
//	return 0;
//}
//int main()
//{
//	int i=0;
//	char* p = "abcd";
//	while (1)
//	{
//		i %= 4;
//		printf("[%c]\n", p[i]);
//		i++;
//		Sleep(100);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	if (++i > 0 && ++j > 0)
//	{
//		printf("you will see:\n");
//	}
//	printf("             %d %d \n", i, j);
//	i = 0; 
//	j = 0;
//	if (++i > 0 || j > 0)
//	{
//		printf("you will see:\n");
//	}
//	printf("             %d %d \n", i, j);
//	i = 0;
//	j = 0;
//	if (i > 0 || ++j > 0)
//	{
//		printf("you will see:\n");
//	}
//	printf("             %d %d \n", i, j);
//	return 0;
//}
//int show(void)
//{
//	printf("hehehe\n");
//	return 1;
//}
//int main()
//{
//    int flag = 0;
//	printf("you will see:\n");
//	scanf("%d", &flag);
//		flag&& show();
//	return 0;
//}
//int main()
//{
//	printf("%d\n", 2 | 3);
//	printf("%d\n", 2 & 3);
//	printf("%d\n", 2 ^ 3);
//	printf("%d\n", ~0);
//	return 0;
//}
//int main()
//{
//    printf("hehehe\n");
//	printf("hehehe\n");
//	printf("hehehe\n");
//	printf("hehehe\n");
//	printf("hehehe\n");
//	printf("hehehe\n");
//	printf("hehehe\n");
//	printf("hehehe\n");
//	printf("hehehe\n");
//	return 0;
//}
//int main()
//{
//	int a = 0x7fffffff;
//	printf("%d\n",~a);
//	return 0;
//}
