
void ImplementGamePlay(){

    switch(screen){

        case(LOGO): {

            if(framescount>300){

                screen=TITLE;
                framescount += 1;
            }
            
            framescount++;

        }break;

        case(TITLE): {

            framescount += 1;
            if(IsKeyPressed(KEY_ENTER)){

                screen=GAMEPLAY;
                framescount++;
            }
        }break;

        case(GAMEPLAY): {

            if(IsKeyPressed(KEY_ENTER)){

                screen=ENDING;
                framescount +=1;
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