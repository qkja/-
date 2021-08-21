#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact .h"
static int FindbyName(const PICon* ps, char name[Max_name])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			//break;
			return i;
		}
	}
	/*if (i == ps->size)
	{
	return -1;
	}
	else
	return i;*/
	return -1;
}
void ModifyContact(PICon* ps)
{
	char name[Max_name];
	printf("请输入要修改的名字:>");
	scanf("%s", name);
	int pos = FindbyName(ps, name);
	if (-1 == pos)
	{
		printf("要修改人的信息不存在\n");
	}
	else
	{
		//不放重录一遍
		printf("请输入名字：>");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄：>");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别：>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话：>");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址：>");
		scanf("%s", ps->data[pos].addr);
		printf("修改完成\n");
	}
}
void My_Initializing(PICon* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//设置通讯录最初只有0个元素
}
void AddContact(PICon* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满，无法增加");
	}
	else
	{
		printf("请输入名字：>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄：>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别：>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话：>");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址：>");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}
void ShowContact(const PICon* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
void DelContact(PICon* ps)
{
	char name[Max_name];
	printf("请输入要删除人的名字：>");
	scanf("%s", name);
	int pos = FindbyName(ps, name);
	//找到了返回下标
	//找不到返回-1
	if (-1 == pos)
	{
		printf("要找的人不存在\n");
	}
	else
	{
		//2.删除
		int j = 0;
		for (j = pos; j <ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");

	}


	//scanf("%s", name);
	//1.查找要删除的人的位置
	//int i = 0;
	//for (i = 0; i < ps->size; i++)
	//{
	//	if (0 == strcmp(ps->data[i].name, name))
	//	{
	//		break;
	//    }
	//   }
	//if (i == ps->size)
	//{
	//	printf("要删除的人不存在\n");
	//}
	//else
	//{
	//	//2.删除
	//	int j = 0;
	//	for (j = i; j <ps->size-1 ; j++)
	//	{
	//		ps->data[j] = ps->data[j + 1];
	//	}
	//	ps->size--;
	//	printf("删除成功\n");
	//}
	//
}
void SearchContact(const PICon* ps)
{
	char name[Max_name];
	printf("请输入查找人的信息:>");
	scanf("%s", name);
	int pos = FindbyName(ps, name);
	//找到了返回下标
	//找不到返回-1
	if (-1 == pos)
	{
		printf("要差找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "名字", "年龄", "性别", "电话", "地址");

		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);

	}

	/*int i = 0;
	for (i = 0; i < ps->size; i++)
	{
	if (0 == strcmp(ps->data[i].name, name))
	{
	break;
	}
	}
	if (i == ps->size)
	{
	printf("要查找的人不存在\n");
	}
	else
	printf("")*/  //代码冗余
}