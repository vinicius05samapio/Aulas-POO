//ex 10 c�lculo de fatorual utilizando o FOR

//programa que calcula o fatoruak de um valor fornecido pelo usu�rio

#include <iostream>
using namespace std;

//fun��o principal

int main() {

    //declara��o das vari�veis
    int i, valor;
    long int fatorial = 1;

    //entrada dos dados
    cout << "\n";
    cout << "C�lculo do fatorial utilizando o laso WHILE\n\n";
    cout << "* Informe o valor desejado: "; cin >> valor;

    //la�o para calcular o faotural
    for (i = 1; i <= valor; i++) {
        //calcula o fatorial
        fatorial *= i;
    }

    //exibe o resultado
    cout << "\n=>Fatorial de " << valor << ": " << fatorial << "\n\n";

    //fim do
    return 0;
}
