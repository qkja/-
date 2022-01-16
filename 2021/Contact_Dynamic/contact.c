#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
extern void DestoryContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}
static int FindbyName(const struct Contact* ps, char name[max_name])
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
void modifyContact(struct Contact* ps)
{
	char name[max_name];
	printf("������Ҫ�޸ĵ�����:>");
	scanf("%s", name);
	int pos=FindbyName(ps, name);
	if (-1 == pos)
	{
		printf("Ҫ�޸��˵���Ϣ������\n");
	}
	else
	{
		//������¼һ��
		printf("���������֣�>");
		scanf("%s", ps->data[pos].name);
		printf("���������䣺>");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰��>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ��>");
		scanf("%s", ps->data[pos].addr);
		printf("�޸����\n");
	}
}
void InitContact(struct Contact* ps)
{
	ps->data =(struct PeoInfo*) malloc(3 * sizeof(struct PeoInfo));
	if (ps->data == NULL)
		return 0;
	ps -> size = 0;
	ps->capacity = DEFAULT_SZ;

}
void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//����
		struct PeoInfo* ptr=realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			//printf("OX\n");
		}
		/*else
			printf("NO\n");*/
	}
}
void AddContact(struct Contact* ps)
{
	//��⵱ǰͨѶ¼������
	//���ˣ�����
	//δ����ɶ�²���
	CheckCapacity(ps);
	//��������
		printf("���������֣�>");
		scanf("%s", ps->data[ps->size].name);
		printf("���������䣺>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�>");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰��>");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ��>");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	//if (ps->size == Max)
	//{
	//	printf("ͨѶ¼�������޷�����");//����������
	//}
	//else
	//{
	//	printf("���������֣�>");
	//	scanf("%s", ps->data[ps->size].name);
	//	printf("���������䣺>");
	//	scanf("%d", &(ps->data[ps->size].age));
	//	printf("�������Ա�>");
	//	scanf("%s", ps->data[ps->size].sex);
	//	printf("������绰��>");
	//	scanf("%s", ps->data[ps->size].tele);
	//	printf("�������ַ��>");
	//	scanf("%s", ps->data[ps->size].addr);
	//	ps->size++;
	//	printf("��ӳɹ�\n");
	//}
}
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n",
			    ps->data[i].name,
				ps->data[i].age, 
				ps->data[i].sex, 
				ps->data[i].tele, 
				ps->data[i].addr );
		}
	}
}
void DelContact(struct Contact* ps)
{
	char name[max_name];
	printf("������Ҫɾ���˵����֣�>");
	scanf("%s", name);
	int pos = FindbyName(ps, name);
	//�ҵ��˷����±�
	//�Ҳ�������-1
	if (-1 == pos)
	{
		printf("Ҫ�ҵ��˲�����\n");
	}
	else
	{
		//2.ɾ��
		int j = 0;
		for (j = pos; j <ps->size-1 ; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	
	}


	//scanf("%s", name);
	//1.����Ҫɾ�����˵�λ��
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
	//	printf("Ҫɾ�����˲�����\n");
	//}
	//else
	//{
	//	//2.ɾ��
	//	int j = 0;
	//	for (j = i; j <ps->size-1 ; j++)
	//	{
	//		ps->data[j] = ps->data[j + 1];
	//	}
	//	ps->size--;
	//	printf("ɾ���ɹ�\n");
	//}
	//
}
void searchContact(const struct Contact* ps)
{
	char name[max_name];
	printf("����������˵���Ϣ:>");
	scanf("%s", name);
	int pos = FindbyName(ps, name);
	//�ҵ��˷����±�
	//�Ҳ�������-1
	if (-1 == pos)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
		
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
		printf("Ҫ���ҵ��˲�����\n");
	}
	else 
		printf("")*/  //��������
}



