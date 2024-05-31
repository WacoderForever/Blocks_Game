typedef struct{

    Vector2 *position;
    Vector2 *size;
    Rectangle *bound;
    int resistance;
    bool active;

}Brick;

typedef struct{

    Vector2 *position;
    Vector2 *size;
    Vector2 *speed;
    Rectangle  *bound;
    int lives;


}Player;

typedef struct{

    Vector2 *position;
    Vector2 *speed;
    float radius;
    bool active;


}Ball;

Brick ***InitBricks();
Player *InitPlayer();
Ball *InitBall(Player *player);
