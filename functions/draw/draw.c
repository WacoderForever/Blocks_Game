
extern Brick ***bricks;
extern Player *player;
extern Ball *ball;

void DrawBricks(Brick ***bricks){

    Texture2D texBrick=LoadTexture("resources/brick.png");

    for(int i=0 ; i < BRICK_ROWS ;i++){

        for(int j=0 ; j< BRICKS_PER_ROW ; j++){

            if((j+i)%2==0) DrawTextureEx(texBrick,*(bricks[i][j]->position),0.0f,1.0f,GRAY);
            else DrawTextureEx(texBrick,*(bricks[i][j]->position),0.0f,1.0f,LIGHTGRAY);
        }
    }
}

void DrawPlayer(Player *player){

    Texture2D texPlayer=LoadTexture("resources/paddle.png");
    DrawTextureEx(texPlayer,*(player->position),0.0f,1.0f,WHITE);

} 

void DrawBall(Ball *ball){

    Texture2D texBall=LoadTexture("resources/ball.png");

    DrawTextureEx(texBall,*(ball->position),0.0f,1.0f,WHITE);

}

void DrawLives(Player *player){

    for(int i=0; i < player->lives; i++){

        DrawRectangle(i*40+30,screenHeight*7/8 + 40,30,20,LIGHTGRAY);
    }
}

void DrawScreens(){

    Texture2D texLogo=LoadTexture("resources/baki.png");
    Font font=LoadFont("resources/campus-personal-use.regular.ttf");

    switch(screen){

        case(LOGO): {

            DrawRectangle(0,0,screenWidth,screenHeight,BLACK);
            DrawTexture(texLogo,(screenWidth/2 -texLogo.width/2),(screenHeight/2 - texLogo.height/2),GRAY);

            if((framescount/30)%2 == 0){

                DrawTextEx(font,"Loading..........",(Vector2){300,400},60,5,WHITE);
            }

        }break;

        case(TITLE): {

            DrawRectangle(0,0,screenWidth,screenHeight,BLACK);
            DrawTextEx(font,"BLOCKS GAME",(Vector2){110,100},80,7,BROWN);

            if((framescount/30)%2 == 0){

                DrawTextEx(font,"Press ENTER to start game!!!",(Vector2){100,250},40,4,BROWN);
            }

        }break;

        case(GAMEPLAY): {

            DrawRectangle(0,0,screenWidth,screenHeight,BLACK);
            DrawBricks(bricks);
            DrawPlayer(player);
            DrawBall(ball);
            DrawLives(player);

        }break;

        case(ENDING): {

            DrawRectangle(0,0,800,450,RAYWHITE);
            DrawText("ENDING",20,20,40,LIGHTGRAY);
            DrawText("Press ENTER to start over.",300,200,20,LIGHTGRAY);

        }break;

        default: break;

        }
    }