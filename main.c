#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dependencies/raylib.h"
#include "dependencies/raymath.h"
#include "dependencies/rlgl.h"

#define screenWidth 800
#define screenHeight 450
#define PLAYER_LIVES 5
#define BRICKS_PER_ROW 20
#define BRICK_ROWS 5
#define BRICK_Y_POS 50

typedef enum{LOGO,TITLE,GAMEPLAY,ENDING}GameScreen;

GameScreen screen=LOGO;
int framescount=0;

#include "functions/functions.h"

Brick ***bricks=NULL;
 
int main(){

    InitWindow(screenWidth,screenHeight,"BLOCKS GAME");

    SetTargetFPS(60);
    while(!WindowShouldClose()){

        bricks = InitBricks();

        ImplementGamePlay();
        BeginDrawing();
         ClearBackground(RAYWHITE);
            DrawScreens();
        EndDrawing();
    }

    CloseWindow();
}