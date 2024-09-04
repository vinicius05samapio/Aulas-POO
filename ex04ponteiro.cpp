//exemplo 04 exemplo de passagem por referencia com argumento ponteiro

#include <iostream>

using namespace std;

//prototipos das fun��es

void elevaCubo(int *nPtr);

//fun��o principal
int main() {

    cout << "\n";
    cout << "Exemplo de Passagem por Referencia com Ponteiro\n\n";

    //declara e inicializa a variavel
    int numero = 5;

    //exibe seu valor original
    cout << "* Valor original: " << numero << "\n";

    //chamma a fun��o que eleva ao cubo, passando o argumento por referencia
    elevaCubo(&numero);

    //exibe seu valor modificado
    cout << "* Valor modificado: " << numero << "\n\n";

    //fim do pograma
    return 0;

}

//DEFINI��O DAS FIN��ES

//calcula e retorna o cubo de um argumento inteiro
void elevaCubo(int *nPtr) {

    *nPtr = *nPtr * *nPtr * *nPtr;

}
