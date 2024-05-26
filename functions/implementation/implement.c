
void ImplementGamePlay(){

    switch(screen){

        case(LOGO): {

            framescount += 1;

            if(framescount>180) screen=TITLE;
        }break;

        case(TITLE): {

            framescount += 1;
            if(IsKeyPressed(KEY_ENTER)){

                screen=GAMEPLAY;
            }
        }break;

        case(GAMEPLAY): {

            if(IsKeyPressed(KEY_ENTER)){

                screen=ENDING;
            }
        }break;

        case(ENDING): {

            if(IsKeyPressed(KEY_ENTER)){

                screen=LOGO;
            }

        }break;

        default: break;

    }
}