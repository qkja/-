#define _CRT_SECURE_NO_WARNINGS 1
#include"test .h"
int FindName(const SCon* ps, const char name[Max_name])
{
	int i = 0;

	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)
			return i;
	}
	return -1;
}

void Initialise(SCon* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}

void AddContact(SCon* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
     printf("请输入名字：>");
	 scanf("%s", ps->data[ps->size].name);
	 printf("请输入年龄：>");
	 scanf("%d", &ps->data[ps->size].age);
	 printf("请输入性别：>");
	 scanf("%s", ps->data[ps->size].sex);
	 printf("请输入电话：>");
	 scanf("%s", ps->data[ps->size].tele);
	 printf("请输入地址：>");
	 scanf("%s", ps->data[ps->size].addr);
	 printf("输入完成\n");

	 ps->size++;
	}
	
}

void ShowContact(const SCon* ps)
{
	int i = 0;

	printf(" %-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "名字", "年龄", "性别", "电话", "地址");

	for (i = 0; i < ps->size;i++)
	{
	//printf(" %-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "名字", "年龄", "性别", "电话", "地址");
	printf(" %-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n",
		ps->data[i].name,
		ps->data[i].age,
	    ps->data[i].sex,
		ps->data[i].tele,
		ps->data[i].addr);

	}
}

void SearchContact(const SCon* ps)
{
	char name[Max_name] = { 0 };
	printf("请输入要寻找人的姓名：>");
	scanf("%s", name);

	int pos = FindName(ps, name);

	//找不到返回-1
	if (pos == -1)
	{
		printf("通讯录没有这个人\n");
	}
		//找到返回下标
	else
	{
			printf(" %-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "名字", "年龄", "性别", "电话", "地址");
			printf(" %-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
	}

}

void DeleContact(SCon* ps)
{
	char name[Max_name] = { 0 };
	printf("请输入要删除的人名:>");
	scanf("%s", name);

	int pos = FindName(ps, name);

	//找不到返回-1
	//找到返回下标
	if (pos == -1)
	{
		printf("通讯录没有这个人\n");
	}
	else
	{
		//2.删除
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}

		ps->size--;

		printf("删除成功\n");
	}
	
}

void AlterContact(SCon* ps)
{
	char name[Max_name] = { 0 };
	printf("请输入要修改人的名字：>");
	scanf("%s", name);

	int pos = FindName(ps, name);

	//找不到返回-1
	//找到返回下标
	if (pos == -1)
	{
		printf("通讯录没有这个人\n");
	}
	else
	{
		printf("请输入名字：>");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄：>");
		scanf("%d", &ps->data[pos].age);
		printf("请输入性别：>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话：>");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址：>");
		scanf("%s", ps->data[pos].addr);
		printf("修改完成\n");
		
	}
}

void SortContact(SCon* ps)
{
	int i = 0;
	int arr[MAX] = { 0 };
	for (i = 0; i < ps->size - 1; i++)
	{
		int j = 0;
		for (j = 0; j < ps->size - 1 - i; j++)
		{
			int temp = 0;
			if (ps->data[j].age > ps->data[j + 1].age)
			{
				temp = ps->data[j].age;
				ps->data[j].age = ps->data[j + 1].age;
				ps->data[j + 1].age = temp;
			}

		}
	}
    printf(" %-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "名字", "年龄", "性别", "电话", "地址");

	for (i = 0; i < ps->size; i++)
	{
		
		printf(" %-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n",
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].tele,
			ps->data[i].addr);
		//printf("\n");

	}
}
//4 3 2 1
//3 4 2 1
//3 2 4 1
//3 2 1 4
//0 1 2 3 4 5


