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
		printf("ͨѶ¼����\n");
	}
	else
	{
     printf("���������֣�>");
	 scanf("%s", ps->data[ps->size].name);
	 printf("���������䣺>");
	 scanf("%d", &ps->data[ps->size].age);
	 printf("�������Ա�>");
	 scanf("%s", ps->data[ps->size].sex);
	 printf("������绰��>");
	 scanf("%s", ps->data[ps->size].tele);
	 printf("�������ַ��>");
	 scanf("%s", ps->data[ps->size].addr);
	 printf("�������\n");

	 ps->size++;
	}
	
}

void ShowContact(const SCon* ps)
{
	int i = 0;

	printf(" %-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");

	for (i = 0; i < ps->size;i++)
	{
	//printf(" %-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������ҪѰ���˵�������>");
	scanf("%s", name);

	int pos = FindName(ps, name);

	//�Ҳ�������-1
	if (pos == -1)
	{
		printf("ͨѶ¼û�������\n");
	}
		//�ҵ������±�
	else
	{
			printf(" %-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫɾ��������:>");
	scanf("%s", name);

	int pos = FindName(ps, name);

	//�Ҳ�������-1
	//�ҵ������±�
	if (pos == -1)
	{
		printf("ͨѶ¼û�������\n");
	}
	else
	{
		//2.ɾ��
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}

		ps->size--;

		printf("ɾ���ɹ�\n");
	}
	
}

void AlterContact(SCon* ps)
{
	char name[Max_name] = { 0 };
	printf("������Ҫ�޸��˵����֣�>");
	scanf("%s", name);

	int pos = FindName(ps, name);

	//�Ҳ�������-1
	//�ҵ������±�
	if (pos == -1)
	{
		printf("ͨѶ¼û�������\n");
	}
	else
	{
		printf("���������֣�>");
		scanf("%s", ps->data[pos].name);
		printf("���������䣺>");
		scanf("%d", &ps->data[pos].age);
		printf("�������Ա�>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰��>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ��>");
		scanf("%s", ps->data[pos].addr);
		printf("�޸����\n");
		
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
    printf(" %-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");

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


