#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

int Area(int x, int y)
{
	COORD area = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), area);
}


int screenIndex;
HANDLE screen[2];

void Initialize()
{
	CONSOLE_CURSOR_INFO cursor;

	//화면 버터를 2개 생성합니다.
	screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		0,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		0,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	cursor.dwSize = 1;
	cursor.bVisible = FALSE;

	SetConsoleCursorInfo(screen[0], &cursor);
	SetConsoleCursorInfo(screen[1], &cursor);

}
int Block[7][4][4][4] = {
	{// I 자블럭
	{0,0,1,0},
	{0,0,1,0},
	{0,0,1,0},
	{0,0,1,0}
},
{
	{0,0,0,0},
	{0,0,0,0},
	{1,1,1,1},
	{0,0,0,0}
},
{
	{0,0,1,0},
	{0,0,1,0},
	{0,0,1,0},
	{0,0,1,0}
},
{
	{0,0,0,0},
	{0,0,0,0},
	{1,1,1,1},
	{0,0,0,0}
},
{ // L자 블럭
	{0,0,0,0},
	{1,1,1,0},
	{1,0,0,0},
	{0,0,0,0}
},
{
	{0,0,0,0},
	{0,1,1,0},
	{0,0,1,0},
	{0,0,1,0}
},
{
	{0,0,0,0},
	{0,0,1,0},
	{1,1,1,0},
	{0,0,0,0}
},
{
	{0,0,0,0},
	{0,1,0,0},
	{0,1,0,0},
	{0,1,1,0}
},



{ // T 블럭모양
	{0,0,0,0},
	{0,0,1,0},
	{0,1,1,0},
	{0,0,1,0}
},
{ 
	{0,0,0,0},
	{0,0,1,0},
	{0,1,1,1},
	{0,0,0,0}
},
{
	{0,0,0,0},
	{0,0,1,0},
	{0,0,1,1},
	{0,0,1,0}
},
{
	{0,0,0,0},
	{0,0,0,0},
	{0,1,1,1},
	{0,0,1,0}
	},
	{ //
		{}




int main()
{
	char key = 0;

	int x = 0;
	int y = 0;
	
	while (1)
	{
		Area(x, y);
		
		key = _getch();

		if (key == -32)
		{
			key = _getch();
		}

		switch (key)
		{
		case UP: y--;
			break;
		case LEFT: x -= 2;
			break;
		case RIGHT: x += 2;
			break;
		case DOWN: y++;
			break;
		}
		if(key == spasebar)


	}

return 0;
}
