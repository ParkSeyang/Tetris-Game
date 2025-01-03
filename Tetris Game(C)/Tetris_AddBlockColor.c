#include "Tetris_AddBlockColor(PSY).h"
#include "Tetris_Screen(PSY).h"

void colorRetention(int colorType) {
    switch (colorType) {
    case 0:
        textcolor(BLUE);
        printf("бс");
        textcolor(WHITE);
        break;
    case 1:
        textcolor(GREEN);
        printf("бс");
        textcolor(WHITE);
        break;
    case 2:
        textcolor(SKYBLUE);
        printf("бс");
        textcolor(WHITE);
        break;
    case 3:
        textcolor(RED);
        printf("бс");
        textcolor(WHITE);
        break;
    case 4:
        textcolor(PURPLE);
        printf("бс");
        textcolor(WHITE);
        break;
    case 5:
        textcolor(YELLOW);
        printf("бс");
        textcolor(WHITE);
        break;
    case 6:
        textcolor(DARKGRAY);
        printf("бс");
        textcolor(WHITE);
        break;

    }
}
void addCurrentBlockColor() {
    switch (curShape) {
    case 0:
        textcolor(BLUE);
        printf("бс");
        textcolor(WHITE);
        break;
    case 1:
        textcolor(GREEN);
        printf("бс");
        textcolor(WHITE);
        break;
    case 2:
        textcolor(SKYBLUE);
        printf("бс");
        textcolor(WHITE);
        break;
    case 3:
        textcolor(RED);
        printf("бс");
        textcolor(WHITE);
        break;
    case 4:
        textcolor(PURPLE);
        printf("бс");
        textcolor(WHITE);
        break;
    case 5:
        textcolor(YELLOW);
        printf("бс");
        textcolor(WHITE);
        break;
    case 6:
        textcolor(DARKGRAY);
        printf("бс");
        textcolor(WHITE);
        break;

    }
}
void prevAddBlockColor() {
    switch (curShape) {
    case 0:
        textcolor(BLUE);
        printf("бр");
        textcolor(WHITE);
        break;
    case 1:
        textcolor(GREEN);
        printf("бр");
        textcolor(WHITE);
        break;
    case 2:
        textcolor(SKYBLUE);
        printf("бр");
        textcolor(WHITE);
        break;
    case 3:
        textcolor(RED);
        printf("бр");
        textcolor(WHITE);
        break;
    case 4:
        textcolor(PURPLE);
        printf("бр");
        textcolor(WHITE);
        break;
    case 5:
        textcolor(YELLOW);
        printf("бр");
        textcolor(WHITE);
        break;
    case 6:
        textcolor(DARKGRAY);
        printf("бр");
        textcolor(WHITE);
        break;

    }
}