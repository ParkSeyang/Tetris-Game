#include "Tetris_Blocks(PSY).h"
#include "Tetris_Controller(PSY).h"

#pragma once

#ifndef Frame
#define Frame

typedef enum Color {
	DARKGRAY = 8,
	BLUE = 9,
	GREEN = 10,
	SKYBLUE = 11,
	RED = 12,
	PURPLE = 13,
	YELLOW = 14,
	WHITE = 15
} COLOR;

int static level;

void InGameFrame();

void ShowNextBlock();

void DeleteNextBlock();

int NextBlock[6][6];
int static Rotation = 0;

void EndGameFrame();
void GameTitle();

void addBlock(int shape, int rotate);
void deleteBlock();

void createBoards();
int board[BoardHeight][BoardWidth];
void printfBoards();

void textcolor(int color_number);

#endif 

