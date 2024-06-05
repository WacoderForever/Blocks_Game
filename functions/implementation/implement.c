
extern Brick ***bricks;
extern Player *player;
extern Ball *ball;

void ImplementGamePlay(){

    switch(screen){

        case(LOGO): {

            if(framescount>180){

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

            if(IsKeyPressed(KEY_P)) gamepaused = !gamepaused;

            if(!gamepaused){

                if(IsKeyDown(KEY_RIGHT)) player->position->x += player->speed->x;
                if(IsKeyDown(KEY_LEFT)) player->position->x -= player->speed->x;

                if((player->position->x + player->size->x) > screenWidth) player->position->x = screenWidth - player->size->x;
                if(player->position->x < 0) player->position->x = 0;

                player->bound->x=player->position->x;
                player->bound->y=player->position->y;
                player->bound->width=player->size->x;
                player->bound->height=player->size->y;


                if(IsKeyPressed(KEY_SPACE)){

                    ball->active=true;
                }

                if(ball->active){

                    ball->position->x += ball->speed->x;
                    ball->position->y += ball->speed->y;

                    if((ball->position->y <= 0) || (ball->position->y >= screenHeight)) ball->speed->y *= -1;
                }
                

            }

            if(player->lives == 0 || IsKeyPressed(KEY_ENTER)){

                screen=ENDING;
            }


        }break;

        case(ENDING): {

            if(IsKeyPressed(KEY_ENTER)){

                screen=GAMEPLAY;
            }

            framescount++;

        }break;

        default: break;

    }
}