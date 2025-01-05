#include "Tetris_Screen(PSY).h"
#include "Tetris_consoleCursor(PSY).h"
int NextBlock[6][7] = {
		1,1,1,1,1,1,1,
		1,0,0,0,0,0,1,
		1,0,0,0,0,0,1,
		1,0,0,0,0,0,1,
		1,0,0,0,0,0,1,
		1,1,1,1,1,1,1
};
void textcolor(int color_number) 
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
}
void GameTitle()
{
	int TETRISTitle_X = 23;
	int TETRISTitle_Y = 5;
	char introduce[34] = { "Made by Park Se Yang" };
	Sleep(30);
	int TetrisTitle[9][34] = {
		6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
		6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,
		6,0,5,5,5,5,5,0,1,1,1,1,0,0,5,5,5,5,5,0,3,3,3,3,0,2,0,0,4,4,4,4,0,6,
		6,0,0,0,5,0,0,0,1,0,0,0,0,0,0,0,5,0,0,0,3,0,0,3,0,2,0,4,0,0,0,0,0,6,
		6,0,0,0,5,0,0,0,1,1,1,1,0,0,0,0,5,0,0,0,3,3,3,3,0,2,0,0,4,4,4,0,0,6,
		6,0,0,0,5,0,0,0,1,0,0,0,0,0,0,0,5,0,0,0,3,0,3,0,0,2,0,0,0,0,0,4,0,6,
		6,0,0,0,5,0,0,0,1,1,1,1,0,0,0,0,5,0,0,0,3,0,0,3,0,2,0,4,4,4,4,0,0,6,
		6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,
		6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6
	};

	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 34; x++) 
		{
			if (TetrisTitle[y][x] == 0) 
			{
				GotoXY(TETRISTitle_X + x * 2, TETRISTitle_Y + y);
				printf("  "); Sleep(3);
			}
			else if (TetrisTitle[y][x] == 1)
			{
				textcolor(YELLOW);
				GotoXY(TETRISTitle_X + x * 2, TETRISTitle_Y + y);
				printf("■");
				textcolor(15); Sleep(35);
			}
			else if (TetrisTitle[y][x] == 2) 
			{
				GotoXY(TETRISTitle_X + x * 2, TETRISTitle_Y + y);
				textcolor(BLUE);
				printf("■");
				textcolor(15); Sleep(25);
			}
			else if (TetrisTitle[y][x] == 3) 
			{
				GotoXY(TETRISTitle_X + x * 2, TETRISTitle_Y + y);
				textcolor(GREEN);
				printf("■");
				textcolor(15); Sleep(5);
			}
			else if (TetrisTitle[y][x] == 4) 
			{
				GotoXY(TETRISTitle_X + x * 2, TETRISTitle_Y + y);
				textcolor(AQUA);
				printf("■");
				textcolor(15); Sleep(7);
			}
			else if (TetrisTitle[y][x] == 5) 
			{
				GotoXY(TETRISTitle_X + x * 2, TETRISTitle_Y + y);
				textcolor(RED);
				printf("■");
				textcolor(15);
			}
			else if (TetrisTitle[y][x] == 6)
			{
				GotoXY(TETRISTitle_X + x * 2, TETRISTitle_Y + y);
				textcolor(GRAY);
				printf("■");
				textcolor(15);
			}

		}
	}
	for (int i = 0; i < 34; i++)
	{
		GotoXY(i + 25, 3);
		putchar(introduce[i]); Sleep(50);
	}
		Sleep(500);
		GotoXY(TETRISTitle_X + 28, TETRISTitle_Y + 10);
		printf("게임 난이도");

		GotoXY(TETRISTitle_X + 16, TETRISTitle_Y + 12);
		textcolor(YELLOW);
		printf("( Easy = 1, Normal = 2, Hard = 3 )\n");

		textcolor(WHITE);
		CursorView(true);

		GotoXY(TETRISTitle_X + 12, TETRISTitle_Y + 14);
		printf("원하시는 게임 난이도를 입력해주세요. : ");

		GotoXY(TETRISTitle_X + 52, TETRISTitle_Y + 14);
		scanf_s("%d", &level);

		CursorView(false);
		switch (level)
		{
		case 1:
			gameLevel = Easy;
			system("cls");
			break;
		case 2:
			gameLevel = Normal;
			system("cls");
			break;
		case 3:
			gameLevel = Hard;
			system("cls");
			break;
		}
	
}
void InGameFrame() 
{
	int picture_X = 32;
	int picture_Y = 0;
	int picture[5][26] = {
	1,1,1,1,1,2,2,2,2,3,3,3,3,3,4,4,4,4,0,5,0,0,6,6,6,6,
	0,0,1,0,0,2,0,0,0,0,0,3,0,0,4,0,0,4,0,5,0,6,0,0,0,0,
	0,0,1,0,0,2,2,2,2,0,0,3,0,0,4,4,4,4,0,5,0,0,6,6,6,0,
	0,0,1,0,0,2,0,0,0,0,0,3,0,0,4,0,4,0,0,5,0,0,0,0,0,6,
	0,0,1,0,0,2,2,2,2,0,0,3,0,0,4,0,0,4,0,5,0,6,6,6,6,0
	};
	
	 int SecPictureL[9][15] = {
	 	0,3,3,3,0,3,3,4,3,3,0,3,3,3,0,
	 	3,3,0,3,3,1,2,2,2,1,3,3,3,0,3,
	 	3,3,3,3,1,2,6,2,2,2,1,0,3,3,3,
	 	3,0,3,1,2,2,2,2,2,4,2,1,3,3,0,
	 	3,3,1,2,6,2,8,2,2,2,2,2,1,3,3,
	 	3,1,2,2,2,2,2,2,2,7,2,2,2,1,3,
	 	3,2,2,2,2,2,2,2,2,2,2,2,2,2,3,
	 	1,1,1,1,1,7,5,5,7,1,1,1,1,1,1,
		1,1,1,1,7,8,5,5,8,7,1,1,1,1,1
	 };
	 int SecPictureR[5][6] = {
		 0,1,0,0,1,0,
		 1,1,1,1,1,1,
		 1,1,1,1,1,1,
		 0,1,1,1,1,0,
		 0,0,1,1,0,0
	 };

	for (int y = 0; y < 5; y++) 
	{
		for (int x = 0; x < 26; x++) 
		{
			GotoXY(picture_X + x * 2, picture_Y + y);
			if (picture[y][x] == 0) 
			{
				textcolor(WHITE);
				printf("■");
			}
			else if (picture[y][x] == 1)
			{
				textcolor(RED);
				printf("■");
			}
			else if (picture[y][x] == 2) 
			{
				Sleep(5);
				textcolor(YELLOW);
				printf("■");
			}
			else if (picture[y][x] == 3) 
			{
				textcolor(GREEN);
				printf("■");
			}
			else if (picture[y][x] == 4) 
			{
				Sleep(8);
				textcolor(AQUA);
				printf("■");
			}
			else if (picture[y][x] == 5)
			{
				textcolor(BLUE);
				printf("■");
			}
			else if (picture[y][x] == 6)
			{
				Sleep(8);
				textcolor(PURPLE);
				printf("■");
				
			}
		}
	}
	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 15; x++)
		{
			GotoXY(1 + x * 2, y);
			if (SecPictureL[y][x] == 0) 
			{
				Sleep(10);
				textcolor(WHITE);
				printf("●");
			}
			else if (SecPictureL[y][x] == 1)
			{
				Sleep(5);
				textcolor(WHITE);
				printf("■");
			}
			else if (SecPictureL[y][x] == 2)
			{
				Sleep(5);
				textcolor(GREEN);
				printf("■");
			}
			else if (SecPictureL[y][x] == 3)
			{
				Sleep(10);
				textcolor(AQUA);
				printf("■");
			}
			else if (SecPictureL[y][x] == 4)
			{
				Sleep(10);
				textcolor(YELLOW);
				printf("★");
			}
			else if (SecPictureL[y][x] == 5)
			{
				textcolor(DARKYELLOW);
				printf("■");
			}
			else if (SecPictureL[y][x] == 6)
			{
				textcolor(RED);
				printf("♪");
			}
			else if (SecPictureL[y][x] == 7)
			{
				Sleep(10);
				textcolor(BLUE);
				printf("▣");
			}
			else if (SecPictureL[y][x] == 8)
			{
				textcolor(PURPLE);
				printf("▣");
			}
		}
	}
	for (int y = 0; y < 6 ; y++)
	{
		for (int x = 0; x < 6; x++) 
		{
			GotoXY(84 + x * 2, y);
			if (SecPictureR[y][x] == 0)
			{
				printf("  ");
			}
			else if(SecPictureR[y][x] == 1)
			{
				Sleep(8);
				textcolor(RED);
				printf("■");
				
			}
		}
		textcolor(WHITE);
	}

	GotoXY(BoardX + BoardWidth * 2 + 4, BoardY + 10);
	switch (level) 
	{
	case 1:
		printf("⊙ GameLevel : Easy");
		break;
	case 2:
		printf("⊙ GameLevel : Normal");
		break;
	case 3:
		printf("⊙ GameLevel : Hard");
		break;
	}

	GotoXY(BoardX + BoardWidth * 2 + 4, BoardY + 12);
	printf("※ Game KEY ※");

	printScore();

	GotoXY(BoardX + BoardWidth * 2 + 4, BoardY + 14);
	printf("  ▲         : 블록 회전");

	GotoXY(BoardX + BoardWidth * 2 + 4, BoardY + 16);
	printf("◀  ▶       : 왼쪽 이동 /  오른쪽 이동");

	GotoXY(BoardX + BoardWidth * 2 + 4, BoardY + 18);
	printf("  ▼         : 밑으로 이동");

	GotoXY(BoardX + BoardWidth * 2 + 4, BoardY + 20);
	printf("■■■■     : Space BAR (수직 하강)");

	for (int i = 0; i < 3; i++) 
	{
		GotoXY(BoardX + BoardWidth * 2 + 4, BoardY + 12);
		printf("※ Game KEY ※");
		Sleep(350);
		GotoXY(BoardX + BoardWidth * 2 + 4, BoardY + 12);
		printf("                ");
		Sleep(250);
	}
	GotoXY(BoardX + BoardWidth * 2 + 4, BoardY + 12);
	printf("                ");
	GotoXY(BoardX + BoardWidth * 2 + 4, BoardY + 12);
	printf("※ Game KEY ※");
}
void ShowNextBlock() 
{
	int nextBlockX = BoardX + BoardWidth * 2 + 4; 
	int nextBlockY = BoardY + 2; 

	GotoXY(nextBlockX + 2, nextBlockY - 1);
	textcolor(WHITE);
	printf("NEXT BLOCK");
	textcolor(WHITE);
	for (int y = 0; y < 6; y++) 
	{
		for (int x = 0; x < 7; x++) 
		{
			GotoXY(nextBlockX + x * 2, nextBlockY + y);
			if (NextBlock[y][x] == 1) 
			{
				textcolor(3); 
				printf("▒");
				textcolor(WHITE);
			}
			if (y > 0 && y < 5) 
			{
				if (x > 0 && x < 5) 
				{
					if (Blocks[nextShape][0][y - 1][x - 1] == 2) {
						NextBlock[y][x] = Blocks[nextShape][0][y - 1][x - 1];
						GotoXY(nextBlockX + x * 2 + 2, nextBlockY + y);
						printf("■");
					}
				}
			}
		}
	}
}

void DeleteNextBlock() {
	int nextBlockX = BoardX + BoardWidth * 2 + 4;
	int nextBlockY = BoardY + 2;

	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 6; x++) {
			if (y > 0 && y < 5) {
				if (x > 0 && x < 5) {
					if (NextBlock[y][x] == 2) {
						GotoXY(nextBlockX + x * 2 + 2, nextBlockY + y);
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
void printBoards() {
	for (int x = 1; x < 13; x++) {
		GotoXY(BoardX + x * 2, BoardY + 1);
		printf("＿");
	}

	for (int y = 0; y < BoardHeight; y++) {
		GotoXY(BoardX, BoardY + y);
		if (board[y][0] == 1) 
		{
			textcolor(GRAY);	
			printf("▦");
		}
		if (board[y][BoardWidth - 1] == 1) 
		{
			GotoXY(BoardX + BoardWidth * 2 - 2, BoardY + y);
			textcolor(GRAY);
			printf("▦");
		}
		textcolor(WHITE);
	}
	for (int x = 0; x < BoardWidth; x++) 
	{
		GotoXY(BoardX + x * 2, BoardY + BoardHeight - 1);
		if (board[BoardHeight - 1][x] == 1) 
		{
			textcolor(GRAY);	printf("▦");
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
	GotoXY(Cursor.X, Cursor.Y);
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
				printf("▣");
			}
		}
		Sleep(150 - y * 5);
	}
	GotoXY(BlockStartX - 3 , BlockStartY + 1);
	printf("...GameOVER...");
	Sleep(3000);
	exit(0);
}