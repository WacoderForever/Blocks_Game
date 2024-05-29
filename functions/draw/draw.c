

void DrawScreens(){

    switch(screen){

        case(LOGO): {

            Texture2D texLogo=LoadTexture("resources/baki.png");
            DrawRectangle(0,0,screenWidth,screenHeight,BLACK);
            DrawTexture(texLogo,(screenWidth/2 -texLogo.width/2),(screenHeight/2 - texLogo.height/2),GRAY);
            // DrawText("LOGO",20,20,40,LIGHTGRAY);
            // DrawText("Loading........",300,200,60,LIGHTGRAY);

        }break;

        case(TITLE): {

            Font font=LoadFont("resources/mickey-mouse.png");
            DrawRectangle(0,0,800,450,BLACK);
            DrawTextEx(font,"BLOCKS GAME",(Vector2){100,100},80,8,BROWN);
            DrawText("Press ENTER to start game!!!",180,250,30,BROWN);

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