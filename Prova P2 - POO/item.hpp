#ifndef ITEM_HPP
#define ITEM_HPP

#include <raylib.h>
#include "player.hpp"
#include <iostream>

using namespace std;

class Item {
    public:
        Item();
        ~Item();
        void Draw() const;
        bool checkCollision(const Player& player) const;
        int getScoreValue() const;

    private:
        Texture2D texture;
        Vector2 position;
        float radius;
        int scoreValue;
};

#endif
