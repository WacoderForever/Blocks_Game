
    void DrawScreens(Texture  texLogo){

        switch(screen){

            case(LOGO): {

                DrawRectangle(0,0,800,450,RAYWHITE);
                DrawTexture(texLogo,(screenWidth/2 -texLogo.width/2),(screenHeight/2 - texLogo.height/2),WHITE);
               // DrawText("LOGO",20,20,40,LIGHTGRAY);
               // DrawText("Loading........",300,200,60,LIGHTGRAY);

            }break;

            case(TITLE): {

                DrawRectangle(0,0,800,450,RAYWHITE);
                DrawText("TITLE",20,20,40,GRAY);
                DrawText("Press ENTER to start game",300,200,20,GRAY);

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