#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu(void)
{
	printf("********************\n");
	printf("****   1.play   ****\n");
	printf("****   0.exit   ****\n");
	printf("********************\n");
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			My_game();
			printf("ɨ��\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}


	} while (input);

	return 0;
}