#define _CRT_SECURE_NO_WARNINGS 1
#include"test .h"
void Print(void)
{
	printf("***********************************\n");
	printf("****   1.Add          2.Dele   ****\n");
	printf("****   3.Search       4 Alter  ****\n");
	printf("****   5.Show         6.Sort   ****\n");
	printf("****          0.Exit           ****\n");
	printf("***********************************\n");
}
int main()
{
	int input = 0;
	SCon con; //包含100个人的信息 和size
	//初始化
	Initialise(&con);
	do
	{
		Print();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			AddContact(&con);
			break;
		case Dele:
			DeleContact(&con);
			break;
		case Search:
			SearchContact(&con);
			break;
		case Alter:
			AlterContact(&con);
			break;
		case Show:
			ShowContact(&con);
			break;
		case Sort:
			SortContact(&con);
			break;
		case Exit:
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
//int main()
//{
//	printf(" %-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "name", "age", "sex", "tele", "addr");
//	printf(" %-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n", "zansan", 15, "nan", "12345", "xiad");
//	return 0;
//}









//typedef int* ty_int;
//int main()
//{
//	/*char ch = 'abcd';
//	printf("%c\n", ch);*/
//	//int a = 10;
//	//char a = '\0x41';
//	////0100 0001  -  65
//	//printf("%d\n", a);
//	//printf("%o\n", a);
//	//printf("%x\n", a);
//	//printf("%#o\n", a);
//	//printf("%#x\n", a);
//	//int *x, y;//x是指针 y是int
//	//          //以后定义指针时*最好跟着变量名
//	//int* a, b;//但是VS自动跟着int了，在其他编译器中记住就行
//	//int* x, y;
//	//ty_int a, b; //ty_int 是一种新类型 
//	/*int deep = '\007';
//	printf("%d\n", deep);
//
//	deep = '\016';
//	printf("%d\n", deep);
//
//	deep = '\100';
//	printf("%d\n", deep);
//
//	deep = '\x15';
//	printf("%d\n", deep);
//
//	deep = '\xa';
//	printf("%d\n", deep);
//	*/
//	/*char ch = '\xff';
//	printf("%d\n", ch);
//
//	ch = '\x7f';
//	printf("%d\n", ch);
//
//	ch = '\x111';
//	printf("%d\n", ch);*/
//	return 0;
//}
//int main()
//{
//	int ch=fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}
//文件 
//数据文件
//程序文件
//文件名
//文件类型 - 文本文件 - 二进制文件
//文件缓冲区 输入缓冲区 输出缓冲区
//FLIE* pf = foropen();
//#include<errno.h>
//#include<string.h>
//int main()
//{
//	FILE* pf = forpen();
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	写文件
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	//FILE* pf = forpen();
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	char ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	//fgetc 可以读取下一行吗
//	ch = fgetc(pf);  //读取‘\n’
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	读文件
//	fgets(buf, 1024, pf);
//	puts(buf);
//	fgets(buf, 1024, pf);
//	puts(buf);  //puts天生会换行
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写文件
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char ch[1024] = { 0 };
//	gets(ch);
//	puts(ch);
//	return 0;
//}
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 0 };
//	/*FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}*/
//	//格式化的形式读文件
//	fscanf(stdin,"%d %f %s",&(s.n),&(s.score),s.arr);
//	fprintf(stdout,"%d %f %s\n", s.n, s.score, s.arr);
//	//关闭文件
//	/*fclose(pf);
//	pf = NULL;*/
//	return 0;
//}
//int main()
//{
//	struct S s = { 100,3.14,"bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf,"%d %f %s",s.n,s.score,s.arr);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	return 0;
//}
//sscanf & sprintf
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100,3.14,"abcdef" };
//	struct S temp = { 0 };
//	char buf[1024] = { 0 };
//    sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//  
//	//printf("%s\n", buf); 
//	sscanf(buf, "%d %f %s",&(temp.n), &(temp.score), temp.arr);
//    printf (buf, "%d %f %s",temp.n, temp.score, temp.arr);
//	return 0;
//}

