//exemplo 15 exemplo de uso de strtok e de aloca��o din�mica

#include <iostream>
#include <cstring>

using namespace std;

//fun��o principal
int main() {

    cout << "\n";
    cout << "Exemplo de uso de strtok() e de Alocacao Dinamica\n\n";

    //Array com o texto desejado
    char texto[] = "Minha-Frase-de-token";

    //Caractere de veritica��o
    char separador[] = "-";

    //tamanho inicial do array de tokens
    int capacidade = 2;

    //Array de ponteiros, utilizado para armazear os tokens
    char **tokens = nullptr;

    //Incialmente, aloca espa�o para 2 tokens
    tokens = new char*[capacidade];

    //Ponteiro para o token
    char *tokenPtr;

    //Contadores
    int i, total;

    //---------------------------------------------------------------

    //exibe o texto inicial
    cout << "* Texto inicial: " << texto << "\n\n";

    //retirna o primeiro token
    tokenPtr = strtok(texto, separador);

    //inicializa o contador de tokens
    total = 0;

    //loop para obter os tokens at� que o ponteiro <tokenPtr> seja NULL
    while (tokenPtr != NULL) {

        //Se chegou no limite do array que armazena os tokens
        if (total >= capacidade) {

            //duplica o tamanho do array de tokens
            capacidade *= 2;

            //criar e aloca a mem�ria para um array tempor�rio
            char **temp = new char*[capacidade];

            //copia os ponteiros antigos para o array tempor�rio
            for (i = 0; i < total; i++) {
                temp[i] = tokens[i];
            }

            //libera a mem�ria antiga
            delete[] tokens;

            //aponta o array de tokens para o array tempor�rio
            tokens = temp;
        }

        //armazena o tokens no array de tokens
        tokens[total] = tokenPtr;

        //incrementa o contador do array de tokens
        total++;

        //obt�m o pr�ximo token
        tokenPtr = strtok(NULL, separador);
    }

    //----------------------------------------------------------------

    cout << "* Foram gerados " << total << " tokens: \n\n";

    //exibe os tokens que foram gerados
    for (i = 0; i < total; i++) {
        cout << i + 1 << ". -> " << tokens[i] << endl;
    }

    cout << endl;

    return 0;

}
