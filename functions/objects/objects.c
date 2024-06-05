
Brick ***InitBricks(){

    Brick ***bricks=(Brick***)malloc(sizeof(Brick**)*BRICK_ROWS);

    for(int i=0 ; i< BRICK_ROWS; i++){

        bricks[i]=(Brick**)malloc(sizeof(Brick*)*BRICKS_PER_ROW);

        for(int j=0 ; j < BRICKS_PER_ROW ; j++){

            bricks[i][j] = (Brick*)malloc(sizeof(Brick));
            
            bricks[i][j]->size = (Vector2*)malloc(sizeof(Vector2));
            bricks[i][j]->size->x = screenWidth / BRICKS_PER_ROW;
            bricks[i][j]->size->y = 20;


            bricks[i][j]->position = (Vector2*) malloc(sizeof(Vector2));
            bricks[i][j]->position->x = j * bricks[i][j]->size->x;
            bricks[i][j]->position->y = BRICK_Y_POS + i * bricks[i][j]->size->y;

            bricks[i][j]->bound =(Rectangle*)malloc(sizeof(Rectangle));
            bricks[i][j]->bound->x = bricks[i][j]->position->x;
            bricks[i][j]->bound->y = bricks[i][j]->position->y;
            bricks[i][j]->bound->width = bricks[i][j]->size->x;
            bricks[i][j]->bound->height = bricks[i][j]->size->y;

            bricks[i][j]->active=true;

        }
    }

    return bricks;
}

Player *InitPlayer(){

    Player *player=(Player*) malloc(sizeof(Player));

    player->size=(Vector2*)malloc(sizeof(Vector2));
    player->size->x=100;
    player->size->y=24;

    player->position=(Vector2*)malloc(sizeof(Vector2));
    player->position->x=screenWidth/2 - 50;
    player->position->y=screenHeight*7/8;

    player->speed=(Vector2*)malloc(sizeof(Vector2));
    player->speed->x=15.0f;
    player->speed->y=0.0f;

    player->bound=(Rectangle*)malloc(sizeof(Rectangle));
    player->bound->x=player->position->x;
    player->bound->y=player->position->y;
    player->bound->width=player->size->x;
    player->bound->height=player->size->y;

    player->lives=PLAYER_LIVES;

    return player;
}

Ball *InitBall(Player *player){

    Ball *ball= (Ball*)malloc(sizeof(Ball));

    ball->radius=10.0f;

    ball->position=(Vector2*)malloc(sizeof(Vector2));
    ball->position->x = player->position->x + player->size->x/2 - 10;
    ball->position->y = player->position->y - ball->radius*3;

    ball->speed=(Vector2*)malloc(sizeof(Vector2));
    ball->speed->x=0.0f;
    ball->speed->y=-10.0f;

    ball->active=false;

    return ball;
}