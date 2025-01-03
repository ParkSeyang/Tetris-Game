#include "Tetris_blocks(PSY).h"
#include "Tetris_controller(PSY).h"
#include "Tetris_Screen(PSY).h"
#include "Tetris_consoleCursor(PSY).h"

int main(void) {
	CursorView(false);
	system("mode con cols=110 lines=35 | title Tetris Game");
	Sleep(1000);
	GameTitle();
	tetris_process();

	return 0;
}

