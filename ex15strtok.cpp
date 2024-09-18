//exemplo 15 exemplo de uso de strtok e de alocação dinâmica

#include <iostream>
#include <cstring>

using namespace std;

//função principal
int main() {

    cout << "\n";
    cout << "Exemplo de uso de strtok() e de Alocacao Dinamica\n\n";

    //Array com o texto desejado
    char texto[] = "Minha-Frase-de-token";

    //Caractere de veriticação
    char separador[] = "-";

    //tamanho inicial do array de tokens
    int capacidade = 2;

    //Array de ponteiros, utilizado para armazear os tokens
    char **tokens = nullptr;

    //Incialmente, aloca espaço para 2 tokens
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

    //loop para obter os tokens até que o ponteiro <tokenPtr> seja NULL
    while (tokenPtr != NULL) {

        //Se chegou no limite do array que armazena os tokens
        if (total >= capacidade) {

            //duplica o tamanho do array de tokens
            capacidade *= 2;

            //criar e aloca a memória para um array temporário
            char **temp = new char*[capacidade];

            //copia os ponteiros antigos para o array temporário
            for (i = 0; i < total; i++) {
                temp[i] = tokens[i];
            }

            //libera a memória antiga
            delete[] tokens;

            //aponta o array de tokens para o array temporário
            tokens = temp;
        }

        //armazena o tokens no array de tokens
        tokens[total] = tokenPtr;

        //incrementa o contador do array de tokens
        total++;

        //obtém o próximo token
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
