//ex 9  c�lculo de MDC utilizando o DO WHILE
// Considere o seguinte cen�rio: "Em um jogo para duas ou mais pessoas, existem X pe�as quadradas e Y pe�as triangulares. Sabendo que, para jogar esse jogo,
// as pe�as precisam ser igualmente distribu�das e n�o pode sobrar nenhuma delas qual � o m�ximo de participantes poss�veis no jogo?

//Esceva um programa para resolver este problema;

//ESTAMOS UTILIZANDO O ALGORISMO DE EUCL�DES

#include <iostream>

using namespace std;

//fun��o principal
int main() {

    //declara��o das vari�veis
    int quadradas, triangulares, a, b, r;

    //entrada dos dados
    cout << "\n";
    cout << "Calculo do numero maximo de participantes de um jogo\n\n";
    cout << "* Informe o total de pe�as quadradas: "; cin >> quadradas;
    cout << "* Informe o total de pe�as triangulares: "; cin >> triangulares;

    //calcula o MDC utilizando o algor�tmo de EUCLIDES
    a = quadradas;
    b = triangulares;

    do {

        r = a % b;
        a = b;
        b = r;
    } while (b != 0);

    //exibe o resultado
    cout << "\n=> Considerando " << quadradas << " pesas quadradas e ";
    cout << triangulares << " pesas triangulares, devemos ter no m�ximo ";
    cout << a << " participantes. \n\n";

    //fim do pograma
    return 0;


}
