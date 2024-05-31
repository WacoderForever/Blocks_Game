
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