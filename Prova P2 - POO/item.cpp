#include "item.hpp"
#include <cstdlib>

using namespace std;

// Diretório global da aplicação
extern char *appDir;

// Inicializa os dados de um novo item
Item::Item() {
    texture = LoadTexture(TextFormat("%s/assets/images/item.png", appDir));
    position.x = GetRandomValue(0, GetScreenWidth() - texture.width);
    position.y = GetRandomValue(50, GetScreenHeight() - texture.height);
    radius = 30.0f;
    scoreValue = GetRandomValue(10, 50);
}

// Libera a textura do item
Item::~Item() {
    UnloadTexture(texture);
}

// Renderiza o item na tela
void Item::Draw() const {
    DrawTexture(texture, position.x, position.y, RAYWHITE);
}

// Verifica se o item colidiu com o jogador
bool Item::checkCollision(const Player& player) const {
    return CheckCollisionCircles(
        {position.x + texture.width / 2.0f, position.y + texture.height / 2.0f},
        radius,
        player.getPosition(),
        player.getRadius()
    );
}

// Retorna a pontuação do item
int Item::getScoreValue() const {
    return scoreValue;
}
