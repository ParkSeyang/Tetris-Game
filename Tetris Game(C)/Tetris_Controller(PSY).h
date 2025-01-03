#pragma once
#ifndef Controller
#define Controller

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <stdbool.h>

enum TetrisBoard
{
	BoardWidth = 14,
	BoardHeight = 22,
	BoardX = 38,
	BoardY = 8,
};
enum blockProperty
{
	BlockSIZE = 4,
	BlockRotate = 4,
	BlockType = 7,
	BlockStartX = 14,
	BlockStartY = 4
};

enum Keys
{
	UP = 72,
	LEFT = 75,
	RIGHT = 77,
	DOWN = 80,
	ARROW = 224,
	SPACEBAR = 32
};

typedef enum gameSpeed
{
	Easy = 400,
	Normal = 300,
	Hard = 230,
}SPEED;

int Key;
short curShape;
void CurrentShape();

short nextShape;
void NextShape();

short BlockCOL;
short BlockROW;

short prevBlockCOL;
short prevBlockROW;

COORD Cursor;

void deletePrevBlock();

int static score;

void printScore();

short GameLevel;

void newBlock();

boolean IsNextBlock;

short turn;
void RotateBlock();

boolean IsCollision(int shape, int rotate, int curX, int curY);

void blockFixed(int shape, int rotate);

boolean IsMaxLine();
void deleteLine();
boolean IsOverHeight();

COORD previewPoint;

void previewBlock(int shape, int rotate);

void tetris_process();

#endif // !Controller
