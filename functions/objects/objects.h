typedef struct{

    Vector2 *position;
    Vector2 *size;
    Rectangle *bound;
    int resistance;
    bool active;

}Brick;

Brick ***InitBricks();
