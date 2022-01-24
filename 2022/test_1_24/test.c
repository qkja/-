#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void menu()
{
	printf("*************************\n");
	printf("**  1.add     2.del    **\n");
	printf("**  3.search  4.modify **\n");
	printf("**  5.sort    6.show   **\n");
	printf("**       0.exit        **\n");
	printf("*************************\n");
}

int main()
{
	int input = 0;
	//PeoInfo data[1000];//1000容量
	//int sz = 0;//有效数据
	Contact con;
	//初始化
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			ModifyContact(&con);
			break;
		case 5:
			SortContact(&con);
			break; 
		case 6:
			ShowContact(&con);
			break;
		case 0:
			DestoryContact(&con);
			printf("已退出\n");
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
//	int* p = (int*)malloc(40);
//	if (p != NULL)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			p[i] = i + 1;
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	/*int* p = (int*)malloc(1000000000000000000);
//	if (p == NULL)
//	{
//		printf("开辟的空间太大，无法开辟\n");
//	}*/
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(40);
//	printf("%p\n", p);
//	free(p);
//	printf("%p\n", p);
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		p[i] = i + 1;
//	}
//	int* tmp = (int*)realloc(p, 8000);
//	if (tmp != NULL)
//	{
//		if (tmp == p)
//		{
//			printf("为重新开辟\n");
//		}
//		else
//		{
//			printf("重新开辟了了一块新内存\n");
//			for (int i = 0; i < 10; i++)
//			{
//				printf("%d ", tmp[i]);
//			}
//		}
//		p = tmp;
//	}
//	
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	
//	int* p = (int*)realloc(NULL, 80);
//	free(p);
//	p = NULL;
//	return 0;
//}