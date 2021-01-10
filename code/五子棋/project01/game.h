#define ROW 5
#define COL 5

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void Initboard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
int Is_Full(char board[ROW][COL], int row, int col);
char Is_Win(char board[ROW][COL], int row, int col);