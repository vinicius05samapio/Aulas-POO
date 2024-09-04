//exemplo 01 programa que demosntra como declarar uma variavel ponteiro

#include <iostream>
using namespace std;

//função principal
int main() {

    cout << "\n";
    cout << "Declaração de Variavel Ponteiro\n\n";

    //declara e inicializa um variavel inteira
    int idade = 25;

    //declara um ponteiro que aponta para a variavel <idade>
    int *idadePtr = &idade;

    //exibe os valores
    cout << "1. Valor da variavel <idade>: " << idade << "\n";
    cout << "1. Endereco da variavel <idade>: " << &idade << "\n\n";
    cout << "2. Valor da variavel <idadePtr>: " << idadePtr << "\n";
    cout << "2. Valor apontado pela variavel <*idadePtr>: " << *idadePtr << "\n\n";

    //fim do pograma
    return 0;
}
