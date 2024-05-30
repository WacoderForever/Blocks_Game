

void DrawScreens(){

    Texture2D texLogo=LoadTexture("resources/baki.png");
    Font font=LoadFont("resources/dimitri-inverse.ttf");

    switch(screen){

        case(LOGO): {

            DrawRectangle(0,0,screenWidth,screenHeight,BLACK);
            DrawTexture(texLogo,(screenWidth/2 -texLogo.width/2),(screenHeight/2 - texLogo.height/2),GRAY);

            if((framescount/30)%2 == 0){

                DrawTextEx(font,"Loading..........",(Vector2){300,400},65,5,WHITE);
            }

        }break;

        case(TITLE): {

            DrawRectangle(0,0,800,450,BLACK);
            DrawTextEx(font,"BLOCKS GAME",(Vector2){110,100},100,8,BROWN);
            DrawText("Press ENTER to start game!!!",150,250,30,BROWN);

        }break;

        case(GAMEPLAY): {

            DrawRectangle(0,0,800,450,RAYWHITE);
            DrawText("GAMEPLAY",20,20,40,LIGHTGRAY);
            DrawText("Press ENTER to end game.",300,200,20,LIGHTGRAY);

        }break;

        case(ENDING): {

            DrawRectangle(0,0,800,450,RAYWHITE);
            DrawText("ENDING",20,20,40,LIGHTGRAY);
            DrawText("Press ENTER to start over.",300,200,20,LIGHTGRAY);

        }break;

        default: break;

        }
    }