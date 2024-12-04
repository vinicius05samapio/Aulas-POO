#include "player.hpp"

extern char *appDir;

Player::Player(){
    texture = LoadTexture(TextFormat("%s/assets/imagens/jogador.png", appDir));
    position.x = (GetScreenWidth() - texture.width) / 2.0f;
    position.y = GetScreenHeight() - texture.height - 10.0f;
    speed = 150.0f;
    radius = 52.0f;
    health = 100;
}

Player::~Player(){
    UnloadTexture(texture);
}

void Player::Draw() const{
    DrawTexture(texture, position.x, position.y, RAYWHITE);
}

void Player::Update(float deltaTime){
    if (IsKeyDown(KEY_RIGHT))
        position.x += speed * deltaTime;
    if (IsKeyDown(KEY_LEFT))
        position.x -= speed * deltaTime;
    if (IsKeyDown(KEY_UP))
        position.y -= speed * deltaTime;
    if (IsKeyDown(KEY_DOWN))
        position.y += speed * deltaTime;
    CheckScreenLimits();
}

void Player::CheckScreenLimits(){
    if (position.x <= 0)
        position.x = 0;
    if (position.x + texture.width >= GetScreenWidth())
        position.x = GetScreenWidth() - texture.width;
    if (position.y <= 0)
        position.y = 0;
    if (position.y + texture.height >= GetScreenHeight())
        position.y = GetScreenHeight() - texture.height;
}

Vector2 Player::getPosition() const{
    return position;
}

float Player::getRadius() const {
    return radius;
}

void Player::takeDamage(int damage) {
    health -= damage;
    if (health < 0)
        health = 0;
}

int Player::getHealth() const{
    return health;
}
