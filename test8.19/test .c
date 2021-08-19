#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void menu()
{
	printf("***********************************\n");
	printf("*****  1.add         2.del    *****\n");
	printf("*****  3.search      4.modify *****\n");
	printf("*****  5.show        6.sort   *****\n");
	printf("********      0.exit       ********\n");
	printf("***********************************\n");
}
int main()
{
	int input = 0;
	/*int size = 0;
	struct PeoInfo con[Max];*/

	//创建一个通讯录
	struct Contact con;//con就是通讯录，里面包含 ：1000个元素和size
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);   //增加
			break;
		case DEL:
			DelContact(&con);   //删除
			break;
		case SEARCH:
			searchContact(&con);//查找
			break;
		case MODIFY:
			modifyContact(&con);//修改
			break;
		case SHOW:
			ShowContact(&con);  // 展示    可已选择不传地址，若传，性能高
			break;
		case SORT:
			sortContact();      //排序
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}