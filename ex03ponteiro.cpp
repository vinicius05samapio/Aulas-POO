//exemplo 03 exemplo de passagem por valor

#include <iostream>
using namespace std;

//prototipos das fun��es

int elevaCubo(int n);

//fun��o principal
int main() {

    cout << "\n";
    cout << "Exemplo de Passagem por Valor\n\n";

    //declara e inicializa a variavel
    int numero = 5;

    //exibe seu valor original
    cout << "* Valor original: " << numero << "\n";

    //chamma a fun��o que eleva ao cubo, passando o argumento por valor
    numero = elevaCubo(numero);

    //exibe seu valor modificado
    cout << "* Valor modificado: " << numero << "\n\n";

    //fim do pograma
    return 0;

}

//DEFINI��O DAS FIN��ES

//calcula e retorna o cubo de um argumento inteiro
int elevaCubo(int n) {

    return n * n * n;

}
