#pragma once

#ifndef consoleCursor
#define consoleCursor

#include <windows.h>

COORD getCursor(void);
void GotoXY(int x, int y);
void CursorView(boolean show);

#endif // !ConsoleCursor
