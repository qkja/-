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