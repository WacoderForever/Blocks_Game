

    void DrawScreens(){

        switch(screen){

            case(LOGO): {

                DrawRectangle(0,0,800,450,RAYWHITE);
                DrawText("LOGO",20,20,40,LIGHTGRAY);
                DrawText("Loading........",400,200,20,LIGHTGRAY);

            }break;

            case(TITLE): {

                DrawRectangle(0,0,800,450,BLACK);
                DrawText("TITLE",20,20,40,RAYWHITE);
                DrawText("Press ENTER to start game",400,200,20,RAYWHITE);

            }break;

            case(GAMEPLAY): {

                DrawRectangle(0,0,800,450,RAYWHITE);
                DrawText("GAMEPLAY",20,20,40,LIGHTGRAY);
                DrawText("Press ENTER to end game.",400,200,20,LIGHTGRAY);
            }break;

            case(ENDING): {

                DrawRectangle(0,0,800,450,RAYWHITE);
                DrawText("ENDING",20,20,40,LIGHTGRAY);
                DrawText("Press ENTER to start over.",400,200,20,LIGHTGRAY);

            }break;

            default: break;

        }
    }