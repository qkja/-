#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void InitContact(Contact* pc)
{
	assert(pc);
	PeoInfo* temp = (PeoInfo*)malloc(CAP * sizeof(PeoInfo));
	if (temp != NULL)
	{
		pc->data = temp;
	}
	else
	{
		printf("InitContact()::%s\n", strerror(errno));
		return;
	}

	pc->sz = 0;
	pc->capacity = CAP;
}
int ComByName(const void* e1, const void* e2)
{
	return strcmp(((const PeoInfo*)e1)->name, ((const PeoInfo*)e2)->name);
}

void SortContact(Contact* pc)
{
	//����ĸ����
	assert(pc);
	if (pc -> sz == 0)
	{
		printf("��ͨѶ¼\n");
		return;
	}
	//void qsort( void *base, size_t num, size_t width, 
	//int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
	
	qsort(pc->data, pc->sz, sizeof(PeoInfo),ComByName);
}

int FindByName(Contact* pc,char *name)
{
	for (int i = 0; i < pc->sz; i++)
	{
		if(strcmp(pc->data[i].name, name)== 0)
		{
			return i;
		}
	}
	return -1;
}

void ModifyContact(Contact* pc)
{
	assert(pc);
	printf("������Ҫ�޸ĵ����֣�>");
	char name[NAME_Max] = { 0 };
	scanf("%s", name);
	if (-1 == FindByName(pc, name))
	{
		printf("û������ˣ��Ҳ���\n");
		return;
	}
	int i = FindByName(pc, name);
	printf("�ҵ��ˣ�����˵���Ϣ��\n");
	printf("%-10s\t%-5s\t%-5s\t%-13s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-10s\t%-5d\t%-5s\t%-13s\t%-20s\n",
		pc->data[i].name,
		pc->data[i].age,
		pc->data[i].sex,
		pc->data[i].tele,
		pc->data[i].addr);
	printf("����������:>");
	scanf("%s", pc->data[i].name);
	printf("����������:>");
	scanf("%d", &pc->data[i].age);
	printf("�������Ա�:>");
	scanf("%s", pc->data[i].sex);
	printf("������绰:>");
	scanf("%s", pc->data[i].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[i].addr);
	printf("�޸ĳɹ�\n");
}
void DestoryContact(Contact* pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;

}

void ByADD(Contact* pc)
{
	assert(pc);
	if (pc->sz == pc->capacity)
	{
		PeoInfo* temp = (PeoInfo*)realloc(pc->data, sizeof(PeoInfo)*(pc->capacity + 2));
		if (temp != NULL)
		{
			pc->data = temp;
			pc->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("check_capacity()::%s\n", strerror(errno));
		}
	}
}

void AddContact(Contact* pc)
{
	assert(pc);
	ByADD(pc);
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("���ӳɹ�\n");
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-10s\t%-5s\t%-5s\t%-13s\t%-20s\n", "����", "����", "�Ա�", "�绰","��ַ");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-10s\t%-5d\t%-5s\t%-13s\t%-20s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}
void DelContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("��ͨѶ¼");
		return;
	}
	printf("������Ҫɾ�������֣�>");
	char name[NAME_Max] = { 0 };
	scanf("%s", name);
	if (-1 == FindByName(pc, name))
	{
		printf("û������ˣ��Ҳ���\n");
		return;
	}
	else
	{
		int j = 0;
		for (j = FindByName(pc, name); j < pc->sz -1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		printf("ɾ���ɹ�\n");
		pc->sz--;
	}

}

void SearchContact(Contact* pc)
{
	assert(pc);
	printf("������Ҫ���ҵ����֣�>");
	char name[NAME_Max] = { 0 };
	scanf("%s", name);
	if (-1 == FindByName(pc, name))
	{
		printf("û������ˣ��Ҳ���\n");
		return;
	}
	int i = FindByName(pc, name);
	printf("%-10s\t%-5s\t%-5s\t%-13s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-10s\t%-5d\t%-5s\t%-13s\t%-20s\n",
		pc->data[i].name,
		pc->data[i].age,
		pc->data[i].sex,
		pc->data[i].tele,
		pc->data[i].addr);
}
