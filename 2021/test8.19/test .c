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

	//����һ��ͨѶ¼
	struct Contact con;//con����ͨѶ¼��������� ��1000��Ԫ�غ�size
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);   //����
			break;
		case DEL:
			DelContact(&con);   //ɾ��
			break;
		case SEARCH:
			searchContact(&con);//����
			break;
		case MODIFY:
			modifyContact(&con);//�޸�
			break;
		case SHOW:
			ShowContact(&con);  // չʾ    ����ѡ�񲻴���ַ�����������ܸ�
			break;
		case SORT:
			sortContact();      //����
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}