#define _CRT_SECURE_NO_WARNINGS 1
//�����߼�
#include"game.h"
//enum S
//{
//	exit,
//	game
//};
void menu(void)
{
	printf("************************\n");
	printf("*****    1.play   ******\n");
	printf("*****    0.exit   ******\n");
	printf("************************\n");

}

int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1 :
			printf("��������Ϸ\n");
			My_game();
			break;
		case 0 :
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);
}