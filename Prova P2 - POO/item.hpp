#ifndef ITEM_HPP
#define ITEM_HPP

#include <raylib.h>
#include "player.hpp"
#include <iostream>

using namespace std;

// Classe que representa os itens colecionáveis do jogador
class Item {
    public:
        Item();                          // Construtor para inicializar o item
        ~Item();                         // Destrutor para liberar memória
        void Draw() const;               // Renderiza o item na tela
        bool checkCollision(const Player& player) const; // Verifica colisão com o jogador
        int getScoreValue() const;       // Retorna o valor de pontuação do item

    private:
        Texture2D texture;               // Textura do item
        Vector2 position;                // Posição do item na tela
        float radius;                    // Raio para cálculo de colisão
        int scoreValue;                  // Valor de pontuação ao coletar o item
};

#endif
