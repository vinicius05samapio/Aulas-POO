//EXEMPLO 01: PROGRAMA QUE DEMONSTRA COMO DECLARAR UMA ESTRUTUR

#include <iostream>

using namespace std;

//-------------------------------------------------------------------

//defini��o da estrutura Ponto
//ela � utilizada para armazenar pontos de uma coordenada
struct Ponto {
    int x;
    int y;

};

//fun��o principal
int main() {

    cout << "\n";
    cout << "Declaracao de Estruturas\n\n";

    //declara��o de duas vari�veios do tipo Ponto
    Ponto p1;
    Ponto p2;

    //Atribui��o de valores aos membros da primeira estrutura
    p1.x = 10;
    p1.y = 20;

    //atribui��o de valores aos membros da segunda estrutura
    p2.x = 0;
    p2.y = 100;

    //Acesso aos membros das estruturas
    cout << "Coordenadas do ponto P1: (" << p1.x << ", " << p1.y << ")\n";
    cout << "Coordenadas do ponto P2: (" << p2.x << ", " << p2.y << ")\n\n";

    //fim do pograma
    return 0;

}
