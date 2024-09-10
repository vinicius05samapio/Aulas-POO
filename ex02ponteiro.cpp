//exemplo 01 programa que demosntra como declarar uma variavel ponteiro

#include <iostream>
using namespace std;

//função principalndereco da variavel
int main() {

    int idade = 25;
    int *idadePtr = &idade;

    //exibe os valores da variavel <idade>, antes da alteração
    cout << "1. Valor da variavel <idade>: " << idade << "\n";
    cout << "1. Endereco da variavel <idade>: " << &idade << "\n\n";

    //altera o valor da variavel <idade>, utilizando o ponteiro <idadePtr>
    *idadePtr = 30;


    //EXIbe os valores da variavel <idade>, apos a alteração
    cout << "2. Valor da variavel <idadeP>: " << idade << "\n";
    cout << "2. Endereco da variavel <*idade>: " << &idade << "\n\n";

    //fim do pograma
    return 0;
}
