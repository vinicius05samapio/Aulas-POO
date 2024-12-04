#include <raylib.h>
#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player {
    public:
        Player();
        ~Player();
        void Draw() const;
        void Update(float deltaTime);
        void CheckScreenLimits();
        Vector2 getPosition() const;
        float getRadius() const;
        void takeDamage(int damage);
        int getHealth() const;

    private:
        Texture2D texture;
        Vector2 position;
        float speed;
        float radius;
        int health;
};

#endif
