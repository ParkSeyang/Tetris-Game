#pragma once
#ifndef controller
#define controller

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <stdbool.h>
#include<mmsystem.h>

#pragma comment(lib, "winmm.lib")

#define BGM "C:\\Users\\ghlwk_sc7hq61\\OneDrive\\Desktop\\Tetris-Game\\Tetris Game(C)\\Tobu-Melomania.wav"

enum boardProperty {
	BoardWidth = 14,
	BoardHeight = 22,
	BoardX = 38,
	BoardY = 8
};

enum Keys {
	LEFT = 75,
	RIGHT = 77,
	UP = 72,
	DOWN = 80,
	ARROW = 224,
	SPACEBAR = 32
};

typedef enum gameSpeed {
	Easy = 350,
	Normal = 280,
	Hard = 180
}SPEED;


enum blockProperty {
	BlockSIZE = 4,
	BlockRotate = 4,
	BlockType = 7,
	BlockStartX = 48,
	BlockStartY = 8
};

int nkey;

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

short gameLevel;

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

#endif // !controller