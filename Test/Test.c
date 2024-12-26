#include <stdio.h>
#include <windows.h>

void GotoXY(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int main(void)
{
	GotoXY(20, 13);

	printf("출력위치 전송!\n");

	return 0;
}