#include "Tetris_AddBlockColor(PSY).h"
#include "Tetris_Screen(PSY).h"

void colorRetention(int colorType) 
{
    switch (colorType) 
    {
    case 0:
        textcolor(AQUA);
        printf("��");
        textcolor(WHITE);
        break;
    case 1:
        textcolor(BLUE);
        printf("��");
        textcolor(WHITE);
        break;
    case 2:
        textcolor(DARKYELLOW);
        printf("��");
        textcolor(WHITE);
        break;
    case 3:
        textcolor(YELLOW);
        printf("��");
        textcolor(WHITE);
        break;
    case 4:
        textcolor(GREEN);
        printf("��");
        textcolor(WHITE);
        break;
    case 5:
        textcolor(RED);
        printf("��");
        textcolor(WHITE);
        break;
    case 6:
        textcolor(PURPLE);
        printf("��");
        textcolor(WHITE);
        break;

    }
}
void addCurrentBlockColor() 
{
    switch (curShape) 
    {
    case 0:
        textcolor(AQUA);
        printf("��");
        textcolor(WHITE);
        break;
    case 1:
        textcolor(BLUE);
        printf("��");
        textcolor(WHITE);
        break;
    case 2:
        textcolor(DARKYELLOW);
        printf("��");
        textcolor(WHITE);
        break;
    case 3:
        textcolor(YELLOW);
        printf("��");
        textcolor(WHITE);
        break;
    case 4:
        textcolor(GREEN);
        printf("��");
        textcolor(WHITE);
        break;
    case 5:
        textcolor(RED);
        printf("��");
        textcolor(WHITE);
        break;
    case 6:
        textcolor(PURPLE);
        printf("��");
        textcolor(WHITE);
        break;

    }
}
void prevAddBlockColor() 
{
    switch (curShape) 
    {
    case 0:
        textcolor(AQUA);
        printf("��");
        textcolor(WHITE);
        break;
    case 1:
        textcolor(BLUE);
        printf("��");
        textcolor(WHITE);
        break;
    case 2:
        textcolor(DARKYELLOW);
        printf("��");
        textcolor(WHITE);
        break;
    case 3:
        textcolor(YELLOW);
        printf("��");
        textcolor(WHITE);
        break;
    case 4:
        textcolor(GREEN);
        printf("��");
        textcolor(WHITE);
        break;
    case 5:
        textcolor(RED);
        printf("��");
        textcolor(WHITE);
        break;
    case 6:
        textcolor(PURPLE);
        printf("��");
        textcolor(WHITE);
        break;

    }
}