//ex 10 cálculo de fatorual utilizando o FOR

//programa que calcula o fatoruak de um valor fornecido pelo usuário

#include <iostream>
using namespace std;

//função principal

int main() {

    //declaração das variáveis
    int i, valor;
    long int fatorial = 1;

    //entrada dos dados
    cout << "\n";
    cout << "Cálculo do fatorial utilizando o laso WHILE\n\n";
    cout << "* Informe o valor desejado: "; cin >> valor;

    //laço para calcular o faotural
    for (i = 1; i <= valor; i++) {
        //calcula o fatorial
        fatorial *= i;
    }

    //exibe o resultado
    cout << "\n=>Fatorial de " << valor << ": " << fatorial << "\n\n";

    //fim do
    return 0;
}
