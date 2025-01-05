#include "Tetris_AddBlockColor(PSY).h"
#include "Tetris_Screen(PSY).h"

void colorRetention(int colorType) 
{
    switch (colorType) 
    {
    case 0:
        textcolor(AQUA);
        printf("бс");
        textcolor(WHITE);
        break;
    case 1:
        textcolor(BLUE);
        printf("бс");
        textcolor(WHITE);
        break;
    case 2:
        textcolor(DARKYELLOW);
        printf("бс");
        textcolor(WHITE);
        break;
    case 3:
        textcolor(YELLOW);
        printf("бс");
        textcolor(WHITE);
        break;
    case 4:
        textcolor(GREEN);
        printf("бс");
        textcolor(WHITE);
        break;
    case 5:
        textcolor(RED);
        printf("бс");
        textcolor(WHITE);
        break;
    case 6:
        textcolor(PURPLE);
        printf("бс");
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
        printf("бс");
        textcolor(WHITE);
        break;
    case 1:
        textcolor(BLUE);
        printf("бс");
        textcolor(WHITE);
        break;
    case 2:
        textcolor(DARKYELLOW);
        printf("бс");
        textcolor(WHITE);
        break;
    case 3:
        textcolor(YELLOW);
        printf("бс");
        textcolor(WHITE);
        break;
    case 4:
        textcolor(GREEN);
        printf("бс");
        textcolor(WHITE);
        break;
    case 5:
        textcolor(RED);
        printf("бс");
        textcolor(WHITE);
        break;
    case 6:
        textcolor(PURPLE);
        printf("бс");
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
        printf("бр");
        textcolor(WHITE);
        break;
    case 1:
        textcolor(BLUE);
        printf("бр");
        textcolor(WHITE);
        break;
    case 2:
        textcolor(DARKYELLOW);
        printf("бр");
        textcolor(WHITE);
        break;
    case 3:
        textcolor(YELLOW);
        printf("бр");
        textcolor(WHITE);
        break;
    case 4:
        textcolor(GREEN);
        printf("бр");
        textcolor(WHITE);
        break;
    case 5:
        textcolor(RED);
        printf("бр");
        textcolor(WHITE);
        break;
    case 6:
        textcolor(PURPLE);
        printf("бр");
        textcolor(WHITE);
        break;

    }
}