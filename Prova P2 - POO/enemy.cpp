#include "enemy.hpp"

extern char *appDir;

unsigned int Enemy::enemyCount = 0;

unsigned int Enemy::getEnemyCount(){
    return enemyCount;
}

Enemy::Enemy(){
    ++enemyCount;
    texture = LoadTexture(TextFormat("%s/assets/imagens/inimigo.png", appDir));
    position.x = GetRandomValue(0, GetScreenWidth() - texture.width);
    position.y = GetRandomValue(- texture.height, - texture.height - 200);
    speed = GetRandomValue(20, 140) * 1.0f;
    radius = 50.0f;
    movingDown = true;
}

Enemy::~Enemy(){
    --enemyCount;
    UnloadTexture(texture);
}

void Enemy::Draw() const{
    DrawTexture(texture, position.x, position.y, RAYWHITE);
}

void Enemy::Update(float deltaTime){
    position.y += speed * deltaTime;
    if (movingDown){
        position.y += speed * deltaTime;
    }
    else{
        position.y -= speed * deltaTime;
    }

    if (position.y > GetScreenHeight() + texture.height){
        movingDown = false;
        position.x = GetRandomValue(0, GetScreenWidth() - texture.width);
        speed = GetRandomValue(5, 250) * 1.0f;
    }
    else if (position.y < 0 - texture.height){
        movingDown = true;
        position.x = GetRandomValue(0, GetScreenWidth() - texture.width);
        speed = GetRandomValue(5, 250) * 1.0f;
    }
}

bool Enemy::isOffScreen() const{
    return position.y > GetScreenHeight();
}

bool Enemy::checkCollision(const Player& player) const {
    return CheckCollisionCircles(position, radius, player.getPosition(), player.getRadius());
}
