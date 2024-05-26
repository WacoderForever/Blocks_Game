#include "raylib.h"

#define screenWidth 800
#define screenHeight 450
#define PLAYER_LIVES 5

typedef enum{LOGO,TITLE,GAMEPLAY,ENDING}GameScreen;

GameScreen screen=LOGO;
int framescount=0;


#include "functions/functions.h"


int main(){

    InitWindow(screenWidth,screenHeight,"BLOCKS GAME");

    Texture texLogo=LoadTexture("resources/logo.xml");

    SetTargetFPS(60);
    while(!WindowShouldClose()){

        ImplementGamePlay();
        BeginDrawing();
         ClearBackground(RAYWHITE);
            DrawScreens();
        EndDrawing();
    }

    CloseWindow();
}