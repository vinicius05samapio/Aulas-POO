//exemplo 07 programa para demonstrar o uso de enumera��es com escopo
#include <iostream>

using namespace std;

//enumera��o para controlar o estado de um jogo
enum class EstadoJogo {
    MenuPrincipal,
    Jogando,
    Pausado,
    GameOver
};

//prot�tipo das fun��es

void mostrarEstado(EstadoJogo estado);

//fun��o principal
int main() {

    cout << endl;
    cout << "* Exemplo de Enumeracoes\n\n";

    //Declara o enumerador, indicando que o jogo est� no menu principal
    EstadoJogo estadoAtual = EstadoJogo::MenuPrincipal;

    //Mostra o estado inicial do jogo
    mostrarEstado(estadoAtual);

    //Simula o in�cio do jogo
    estadoAtual = EstadoJogo::Jogando;

    mostrarEstado(estadoAtual);

    //------------------------------------------------------

    cout << endl;

    //fim do pograma
    return 0;

}

//defini��o das fu��es

//fun��o para exibir o estado do jogo
void mostrarEstado(EstadoJogo estado) {

    switch (estado) {
    case EstadoJogo::MenuPrincipal:
        cout << ">> Voce esta no Menu Principal." << endl;
        break;
    case EstadoJogo::Jogando:
        cout << ">> O jogo esta em andamento..." << endl;
        break;
    case EstadoJogo::Pausado:
        cout << ">> O jogo esta pausado." << endl;
        break;
    case EstadoJogo::GameOver:
        cout << ">> Game Over!" << endl;
        break;
    default:
        cout << " >> Estado desconhecido." << endl;
        }

    }
























