//exemplo 03: programa03.cpp

//g++ -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL lib/libraylib.a *.cpp -o programa03 -std=c++11

#include "raylib.h"
#include "player.hpp"


//-----------------------
//variáveis globias
//-----------------------

//diretório da aplicação
const char *appDir = GetApplicationDirectory();

//---------------------------------
//função principal
int main() {

    //define a janela da aplicação
    InitWindow(800, 600, "Programan 03");

    //Delta time
    float deltaTime;

    //Framerate
    SetTargetFPS(60);

    //intancimaneto do player
    Player player;

    //------------------------------

    //game loop
    while (!WindowShouldClose()) {

        //retorna o tempo em segundos que o último frame levou para ser processado
        deltaTime = GetFrameTime();

        //Atualiza o player
        player.Update(deltaTime);

        //Início da renderização dos objetos do jogo
        BeginDrawing();

        //define a cor de fundo
        ClearBackground(BLACK);

        //renderiza o player
        player.Draw();

        //fim da renderização dos objetos do jogo
        EndDrawing();
    }

    //---------------------------

    //fecha a janela e limpa recursos do Raylib
    CloseWindow();

    return 0;
}
