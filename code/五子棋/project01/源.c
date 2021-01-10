#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()//打印菜单
{
	printf("***************************\n");
	printf("*****1.play     0.exit*****\n");
	printf("***************************\n");
}

void game()
{
	int ret;
	char ch;
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board, ROW, COL);//打印棋盘
	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家下
		DisplayBoard(board, ROW, COL);
		ch = Is_Win(board, ROW, COL);
		if (ch != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑下
		DisplayBoard(board, ROW, COL);
		ch = Is_Win(board, ROW, COL);
		if (ch != 'C')
		{
			break;
		}//返回值为‘Q’为平局，返回值为‘C’为继续游戏；返回值为‘*’玩家获胜；返回值为‘#’电脑获胜
	}
	if (ch == '*')
		printf("玩家获胜\n");
	else if (ch == '#')
		printf("电脑获胜\n");
	else
		printf("平局\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{
	test ();
	return 0;
}