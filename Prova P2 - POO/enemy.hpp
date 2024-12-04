#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <raylib.h>
#include "player.hpp"

class Enemy {
    public:
        Enemy();
        ~Enemy();
        void Draw() const;
        void Update(float deltaTime);
        bool isOffScreen() const;
        bool checkCollision(const Player& player) const;
        static unsigned int getEnemyCount();

    private:
        Texture2D texture;
        Vector2 position;
        float speed;
        float radius;
        bool movingDown;
        static unsigned int enemyCount;
};

#endif
