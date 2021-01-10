#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()//��ӡ�˵�
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
	Initboard(board, ROW, COL);//��ʼ������
	DisplayBoard(board, ROW, COL);//��ӡ����
	while (1)
	{
		PlayerMove(board, ROW, COL);//�����
		DisplayBoard(board, ROW, COL);
		ch = Is_Win(board, ROW, COL);
		if (ch != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//������
		DisplayBoard(board, ROW, COL);
		ch = Is_Win(board, ROW, COL);
		if (ch != 'C')
		{
			break;
		}//����ֵΪ��Q��Ϊƽ�֣�����ֵΪ��C��Ϊ������Ϸ������ֵΪ��*����һ�ʤ������ֵΪ��#�����Ի�ʤ
	}
	if (ch == '*')
		printf("��һ�ʤ\n");
	else if (ch == '#')
		printf("���Ի�ʤ\n");
	else
		printf("ƽ��\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}

int main()
{
	test ();
	return 0;
}