#include "item.hpp"
#include <cstdlib>

using namespace std;

extern char *appDir;

Item::Item() {
    texture = LoadTexture(TextFormat("%s/assets/imagens/item.png", appDir));
    position.x = GetRandomValue(0, GetScreenWidth() - texture.width);
    position.y = GetRandomValue(50, GetScreenHeight() - texture.height);
    radius = 30.0f;
    scoreValue = GetRandomValue(10, 50);
}

Item::~Item() {
    UnloadTexture(texture);
}

void Item::Draw() const {
    DrawTexture(texture, position.x, position.y, RAYWHITE);
}

bool Item::checkCollision(const Player& player) const {
    return CheckCollisionCircles(
        {position.x + texture.width / 2.0f, position.y + texture.height / 2.0f},
        radius,
        player.getPosition(),
        player.getRadius()
    );
}

int Item::getScoreValue() const {
    return scoreValue;
}
