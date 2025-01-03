#include "Tetris_Screen(PSY).h"
#include "Tetris_ConsoleCursor(PSY).h"

int Next[6][6] = {
	1,1,1,1,1,1,
	1,0,0,0,0,1,
	1,0,0,0,0,1,
	1,0,0,0,0,1,
	1,0,0,0,0,1,
	1,1,1,1,1,1,
};

void textcolor(int color_number)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
}

void GameTitle()
{
	int TETRIS_X = 30;
	int TETRIS_Y = 5;
	char introduce[34] = { "Made by Park Seyang" };


	GotoXY(5, 5);
	Sleep(30);
	printf("¡á");
	int tetris[8][28] = {
		1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
		1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
		1,0,2,2,2,2,2,0,1,1,1,1,1,0,3,3,3,3,0,4,0,0,5,5,5,5,0,1,
		1,0,0,0,2,0,0,0,1,0,0,0,0,0,3,0,0,3,0,4,0,5,0,0,0,0,0,1,
		1,0,0,0,2,0,0,0,1,1,1,1,1,0,3,3,3,3,0,4,0,0,5,5,5,0,0,1,
		1,0,0,0,2,0,0,0,1,0,0,0,0,0,3,0,3,0,0,4,0,0,0,0,0,5,0,1,
		1,0,0,0,2,0,0,0,1,1,1,1,1,0,3,0,0,3,0,4,0,5,5,5,5,0,0,1,
		1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1

	};
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 24; x++)
		{
			if (tetris[y][x] == 0)
			{
				GotoXY(TETRIS_X + x * 2, TETRIS_Y + y);
				printf("  ");
				Sleep(3);
			}
			else if (tetris[y][x] == 1)
			{
				textcolor(YELLOW);
				GotoXY(TETRIS_X + x * 2, TETRIS_Y + 2);
				printf("¡á");
				textcolor(15);
				Sleep(350);
			}
			else if (tetris[y][x] == 2)
			{
				GotoXY(TETRIS_X + x * 2, TETRIS_Y + y);
				textcolor(BLUE);
				printf("¡á");
				textcolor(15);
				Sleep(25);
			}
			else if (tetris[y][x] == 3)
			{
				GotoXY(TETRIS_X + x * 2, TETRIS_Y + y);
				textcolor(GREEN);
				printf("¡á");
				textcolor(15);
				Sleep(5);
			}
			else if (tetris[y][x] == 4)
			{
				GotoXY(TETRIS_X + x * 2, TETRIS_Y + y);
				textcolor(SKYBLUE);
				printf("¡á");
				textcolor(15);
				Sleep(5);
			}
			else if (tetris[y][x] == 5)
			{
				GotoXY(TETRIS_X + x * 2, TETRIS_Y + y);
				textcolor(RED);
				printf("¡á");
				textcolor(15);
			}

		}
	}

	for (int i = 0; i < 34; i++)
	{
		GotoXY(1 + i, 1);
		putchar(introduce[i]);
		Sleep(50);
	}
	Sleep(500);
	GotoXY(TETRIS_X, TETRIS_Y + 10);
	printf("Game Level");
	GotoXY(TETRIS_X + 21, TETRIS_Y + 10);
	textcolor(YELLOW);
	printf("(Easy = 1, Nomal = 2, Hard = 3)\n");
	textcolor(WHITE);
	CursorView(true);
	GotoXY(TETRIS_X, TETRIS_Y + 12);
	scanf_s("%d", &level);
	CursorView(false);

	switch (level)
	{
	case 1:
		GameLevel = Easy;
		system("cls");
		break;

	case 2:
		GameLevel = Normal;
		system("cls");
		break;
	case 3:
		GameLevel = Hard;
		system("cls");
		break;
	}

}

void InGameFrame()
{
	int picture_X = 36;
	int picture_Y = 0;
	int TetrisPicture[8][28] = {
		1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
		1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
		1,0,2,2,2,2,2,0,1,1,1,1,1,0,3,3,3,3,0,4,0,0,5,5,5,5,0,1,
		1,0,0,0,2,0,0,0,1,0,0,0,0,0,3,0,0,3,0,4,0,5,0,0,0,0,0,1,
		1,0,0,0,2,0,0,0,1,1,1,1,1,0,3,3,3,3,0,4,0,0,5,5,5,0,0,1,
		1,0,0,0,2,0,0,0,1,0,0,0,0,0,3,0,3,0,0,4,0,0,0,0,0,5,0,1,
		1,0,0,0,2,0,0,0,1,1,1,1,1,0,3,0,0,3,0,4,0,5,5,5,5,0,0,1,
		1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
	};

	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 14; x++)
		{
			GotoXY(picture_X + x * 2, picture_Y + y);
			if (TetrisPicture[y][x] == 0)
			{
				textcolor(SKYBLUE);
				printf("¡á");
			}
			else if (TetrisPicture[y][x] == 1)
			{
				printf("¡á");
			}
			else if (TetrisPicture[y][x] == 2)
			{
				Sleep(5);
				textcolor(YELLOW);
				printf("¡á");
			}
			else if (TetrisPicture[y][x] == 3)
			{
				textcolor(BLUE);
				printf("¡á");
			}
			else if (TetrisPicture[y][x] == 4)
			{
				Sleep(8);
				textcolor(1);
				printf("¡á");
			}
			else if (TetrisPicture[y][x] == 5)
			{
				printf("¢Ã");
				textcolor(WHITE);
			}
		}

	}

}



void ShowNextBlock() {
	GotoXY(36 + 9, 0 + 11);
	textcolor(PURPLE);
	printf("NEXT BLOCK");
	textcolor(WHITE);
	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 6; x++) {
			GotoXY(36 + 8 + x * 2, 12 + y);
			if (NextBlock[y][x] == 1) {
				textcolor(3);//6
				printf("¢Ì");
				textcolor(WHITE);
			}
			if (y > 0 && y < 5) {
				if (x > 0 && x < 5)
				{
					if (Blocks[nextShape][0][y - 1][x - 1] == 2)
					{
						NextBlock[y][x] = Blocks[nextShape][0][y - 1][x - 1];
						GotoXY(36 + 8 + x * 2, 12 + y);
						printf("¡á");
					}
				}
			}
		}

	}
}
void DeleteNextBlock() {
	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 6; x++) {
			if (y > 0 && y < 5) {
				if (x > 0 && x < 5) {
					if (NextBlock[y][x] == 2) {
						GotoXY(36 + 8 + x * 2, 12 + y);
						printf("  ");
					}
				}
			}
		}
	}
}
void createBoards() {
	for (int i = 0; i < BoardHeight; i++) {
		board[i][0] = 1;
		board[i][BoardWidth - 1] = 1;
		for (int j = 0; j < BoardWidth; j++) {
			if (i == 0)
				board[i][j] = 0;
			board[BoardHeight - 1][j] = 1;
			if (i > 0 && i < BoardHeight - 1)
				if (j > 0 && j < BoardWidth - 1)
					board[i][j] = 0;
		}
	}
}
void printfBoards() {
	for (int x = 1; x < 13; x++) {
		GotoXY(BoardX + x * 2, BoardY + 1);
		printf("£ß");
	}

	for (int y = 0; y < BoardHeight; y++) {
		GotoXY(BoardX, BoardY + y);
		if (board[y][0] == 1) {
			textcolor(3);	printf("¢Ì");
		}
		if (board[y][BoardWidth - 1] == 1) {
			GotoXY(BoardX + BoardWidth * 2 - 2, BoardY + y);
			textcolor(3);
			printf("¢Ì");
		}
		textcolor(WHITE);
	}
	for (int x = 0; x < BoardWidth; x++) {
		GotoXY(BoardX + x * 2, BoardY + BoardHeight - 1);
		if (board[BoardHeight - 1][x] == 1) {
			textcolor(3);	printf("¢Ì");
		}
		textcolor(WHITE);
	}

}
void addBlock(int shape, int rotate)
{
	COORD Pos = Cursor = getCursor();
	BlockROW = Pos.X / 2 - BoardX / 2;
	BlockCOL = Pos.Y - BoardY;
	for (int y = 0; y < BlockSIZE; y++)
	{
		for (int x = 0; x < BlockSIZE; x++)
		{
			if (Blocks[shape][rotate][y][x] == 2)
			{
				board[BlockCOL + y][BlockROW + x] = 2;
				GotoXY(Pos.X + x * 2, Pos.Y + y);
				addCurrentBlockColor();
			}
		}
	}
}

void deleteBlock()
{
	COORD Pos = Cursor = getCursor();
	BlockROW = Pos.X / 2 - BoardX / 2;
	BlockCOL = Pos.Y - BoardY;
	for (int y = 0; y < BlockSIZE; y++)
	{
		for (int x = 0; x < BlockSIZE; x++)
		{
			if (board[BlockCOL + y][BlockROW + x] == 2)
			{
				GotoXY(Pos.X + x * 2, Pos.Y + y);
				printf("  ");
			}
		}
	}
	GotoXY(Cursor.X, Cursor.Y);
}

void EndGameFrame()
{
	for (int y = 1; y < BoardHeight - 1; y++)
	{
		for (int x = 1; x < BoardWidth - 1; x++)
		{
			if (board[y][x] >= 3)
			{
				GotoXY(BoardX + x * 2, BoardY + y);
				printf("¢Ã");
			}
		}
		Sleep(150 - y * 5);
	}
	GotoXY(BlockStartX, BlockStartY + 1);
	printf("¡ØGame Over¡Ø");
	Sleep(3000);
	exit(0);
}

