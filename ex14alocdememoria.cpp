//exemplo 14 exemplo de uso de alocação dinâmica de memória

#include <iostream>

using namespace std;

//função principal
int main() {

    cout << "\n";
    cout << "Exemplo de Alocacao Dinamica de Memoria\n\n";

    //Aloca espaço para um array de 5 inteiros
    int *numeros = new int[5];

    //inicializa os valores do array
    for (int i = 0; i < 5; i++) {
        numeros[i] = i * 2;
    }

    //exibe os valores do array
    cout << "* Numeros: [";

    for (int i = 0; i < 5; i++) {
        if (i < 4)
            cout << numeros[i] << ", ";
        else
            cout << numeros[i] << "]\n";
    }

    //libera a memória que foi alocada
    delete[] numeros;
    cout << endl;

    return 0;

}
