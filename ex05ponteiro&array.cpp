//exemplo 05 exemplo de uso de array nativo e ponteiro

#include <iostream>
using namespace std;


//prot�tipos das fun��es

void soma(int *resultado, const int *arrayPtr, const size_t tamanho);

//fun��o principal
int main() {

    cout << "\m";
    cout << "Exemplo de Array Nativo e Ponteiro\n\n";

    //declara e inicializa um array de numeros inteiros
    int numeros[] = {1, 5, 2, 9, 6, 7, 1, 4, 2, 0};

    //obt�m o total de elementos do array
    size_t totalElementos = sizeof(numeros) / sizeof(numeros[0]);

    //declara um ponteiro para tipos inteiros
    int *numerosPtr = nullptr;

    //declara a vari�vel que armazena a soma dos elementos do array
    int resultado = 0;

    //-----------------------------------------------------------------
    //exibe o total de elementos do array
    cout << "O array possui " << totalElementos << " elementos!\n\n";

    //exibe os elementos do arrays
    cout << ">> Numeros: [";

    for (int i = 0; i < totalElementos; i++) {
        if (i < totalElementos - 1)
            cout << numeros[i] << ", ";
        else
            cout << numeros[i] << "]";
    }

    //-----------------------------------------------------------------

    //aponta o ponteiro para o endere�o do primeiro elemento do array
    numerosPtr = &numeros[0];

    //executa a fun��o que calcula a soma dos elementos do array
    soma(&resultado, numerosPtr, totalElementos);

    //exibe o resultado da soma dos elementos do array
    cout << "\n\n";
    cout << ">> Soma: " << resultado << "\n\n";

    //fim do programa
    return 0;

}

//---------------------------------------------------------------------
//defini��o das fun��es

//calcula a soma dos elementos do array
void soma(int *resultado, const int *arrayPtr, const size_t tamanho) {

    //loop para calcular a soma dos valores
    for (int i = 0; i < tamanho; i++) {
        *resultado += *arrayPtr++;
    }
}

