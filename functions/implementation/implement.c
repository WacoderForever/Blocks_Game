
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

                    ball->active= !ball->active;
                }

                if(ball->active){

                    ball->position->x += ball->speed->x;
                    ball->position->y += ball->speed->y;

                    if((ball->position->y <= 0) || (ball->position->y >= screenHeight)) ball->speed->y *= -1;
                    if((ball->position->x <= 0) || (ball->position->x >= screenWidth)) ball->speed->x *= -1;

                    if(CheckCollisionCircleRec(*(ball->position),ball->radius,*(player->bound))){

                        ball->speed->y *= -1;
                        ball->speed->x  = ((ball->position->x + 10) - (player->position->x + player->size->x/2)) / player->size->x * 10.0f;
                    }

                    for(int i=0;i<BRICK_ROWS;i++){

                        for(int j=0; j<BRICKS_PER_ROW; j++){

                            if(bricks[i][j]->active){

                                if(CheckCollisionCircleRec(*(ball->position),ball->radius,*(bricks[i][j]->bound))){
                                    
                                    bricks[i][j]->active = !bricks[i][j]->active;
                                    ball->speed->y *= -1;

                                }
                            }
                        }
                    }
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