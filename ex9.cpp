//ex 9  cálculo de MDC utilizando o DO WHILE
// Considere o seguinte cenário: "Em um jogo para duas ou mais pessoas, existem X peças quadradas e Y peças triangulares. Sabendo que, para jogar esse jogo,
// as peças precisam ser igualmente distribuídas e não pode sobrar nenhuma delas qual é o máximo de participantes possíveis no jogo?

//Esceva um programa para resolver este problema;

//ESTAMOS UTILIZANDO O ALGORISMO DE EUCLÍDES

#include <iostream>

using namespace std;

//função principal
int main() {

    //declaração das variáveis
    int quadradas, triangulares, a, b, r;

    //entrada dos dados
    cout << "\n";
    cout << "Calculo do numero maximo de participantes de um jogo\n\n";
    cout << "* Informe o total de peças quadradas: "; cin >> quadradas;
    cout << "* Informe o total de peças triangulares: "; cin >> triangulares;

    //calcula o MDC utilizando o algorítmo de EUCLIDES
    a = quadradas;
    b = triangulares;

    do {

        r = a % b;
        a = b;
        b = r;
    } while (b != 0);

    //exibe o resultado
    cout << "\n=> Considerando " << quadradas << " pesas quadradas e ";
    cout << triangulares << " pesas triangulares, devemos ter no máximo ";
    cout << a << " participantes. \n\n";

    //fim do pograma
    return 0;


}
