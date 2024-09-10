//ex 07 relacionamento entre array e ponteiro

#include <iostream>
#include <string>

using namespace std;

//prot�tipo das fun��es

void imprime1(int numeros[], size_t tamanho, string nome);
void imprime2(int *numeros, size_t tamanho, string nome);

//funsao principal
int main() {

    cout << "\n";
    cout << "Relacionamento entre Array e ponteiros\n\n";

    //declara��o e inicializa��o de tres arrays
    int numeros1[] = {1, 2, 3, 4, 5};
    int numeros2[] = {6, 7, 8, 9, 10};
    int numeros3[] = {11, 12, 13, 14, 15};

    //obt�m o total de elemtnos de cada array
    size_t tamanho1 = sizeof(numeros1) / sizeof(numeros1[0]);
    size_t tamanho2 = sizeof(numeros2) / sizeof(numeros2[0]);
    size_t tamanho3 = sizeof(numeros3) / sizeof(numeros3[0]);

    //----------------------------------------------------------

    //executa a fun��io que exibe o conte�do do primeiro array,
    //utilizando a nota��o de subscrito de array
    imprime1(numeros1, tamanho1, "<numeros1>");

    //---------------------------------------------------------

    //exevuta a funsao que exibe o conteudo do primeiro array, utilizando aritmetica de ponteiros
    imprime2(numeros2, tamanho2, "<numeros2>");

    //---------------------------------------------------------

    //declara um ponteiro para o terceiro array
    int *ptr3 = numeros3;

    //exibe o conteudo do terceiro array, utilizando <ptr3> e a nota��o de subscrito de array

    cout << "3. <*ptr3>...: [";

    for (int i = 0; i < tamanho3; i++) {
        if (i < tamanho3 - 1)
            cout << ptr3[i] << ", ";
        else
            cout << ptr3[i] << "]" << endl;
    }
    //-------------------------------------------------------

    cout << "\n";

    //fim do pograma
    return 0;
}

//defini��o das fun��es


//fun��o que imprime o conte�do do array (vers�o com array)
void imprime1(int numeros[], size_t tamanho, string nome) {

    cout << "1. " << nome << ": [";

    for (int i = 0; i < tamanho; i++) {
        if (i < tamanho - 1)
            cout << numeros[i] << ", ";
        else
            cout << numeros[i] << "]" << endl;
    }
}

void imprime2(int *numeros, size_t tamanho, string nome) {

    cout << "2. " << nome << ": [";

    for (int i = 0; i < tamanho; i++) {
        if (i < tamanho - 1)
            cout << *(numeros+i) << ", ";
        else
            cout << *(numeros+i) << "]" << endl;
    }
}










