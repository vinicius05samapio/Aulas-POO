//exemplo 03: player hpp

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "lib/raylib.h"

//definição da classe Player
class Player {

    public:
        //Construtor: carrega a textura e define a posição inicial do player
        Player();

        //destrutor: descarrega a textura do player
        ~Player();

        //Método para desenhar o player na tela
        void Draw() const;

        //método para atualizar o player
        void Update(float deltaTime);

        //Método que verifica se o player colidiu com as bordas da tela
        void CheckScreenLimits();

    private:

        Texture2D texture;

};
