#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j=0;j<col;j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j=0;j<col;j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < row; j++)
			{
				printf("---");
				if (j < row - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

int Is_Full(char board[ROW][COL], int row, int col)
{
	int i;
	for (i=0;i<row;i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}


char Is_Win(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == board[i][3] && board[i][3] == board[i][4] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] == board[3][j] && board[3][j]  == board[4][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == board[3][3] && board[3][3] == board[4][4] && board[2][2] != ' ')
		return board[2][2];
	if(board[0][4] == board[1][3] && board[1][3] == board[2][2] && board[2][2] == board[3][1] && board[3][1] == board[4][0] && board[2][2] != ' ')
		return board[2][2];
	if (1 == Is_Full(board, ROW, COL))
		return 'Q';
	return 'C';
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("玩家走:> \n");
	while (1)
	{
		printf("请输入落棋位置:> ");
		scanf("%d %d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("已有棋子，请重新输入！\n");
		}
		else
			printf("输入的落棋位置不在棋盘上，请重新输入！\n");
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("电脑走:> \n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}