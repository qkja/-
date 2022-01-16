#define _CRT_SECURE_NO_WARNINGS 1
//测试逻辑
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
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1 :
			printf("三子棋游戏\n");
			My_game();
			break;
		case 0 :
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}

	} while (input);
}