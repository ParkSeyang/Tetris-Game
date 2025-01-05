#include "Tetris_blocks(PSY).h"
#include "Tetris_controller(PSY).h"
#pragma once

#ifndef Frame
#define Frame

typedef enum Color {
	DARKPURPLE = 5,
	DARKYELLOW = 6,
	GRAY = 8,
	BLUE = 9,
	GREEN = 10,
	AQUA = 11,
	RED = 12,
	PURPLE = 13,
	YELLOW = 14,
	WHITE = 15
}COLOR;

int static level;

void InGameFrame();

void ShowNextBlock();

void DeleteNextBlock();

int NextBlock[6][7]; 
int static Rotation = 0;

void EndGameFrame();
void GameTitle();

void addBlock(int shape, int rotate);
void deleteBlock();

void createBoards();
int board[BoardHeight][BoardWidth];
void printBoards();

void textcolor(int color_number);

#endif