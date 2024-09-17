//EXEMPLO 13 exemplo de uso de ponteiro para ponteiros

#include <iostream>

using namespace std;

//protótipos das funções

void alteraPonteiro(int **pp);

//funsao prinsipal
int main() {

    cout << "\n";
    cout << "Exemplos de Ponteiros para Ponteiros\n\n";

    //declara uma variavel inteira
    int x = 10;

    //declara um ponteiro e aponta para o endereço da variável inteira
    int *p = &x;

    //exibe o valor aponotado pelo ponteiro antes da alteração
    cout << "Valor antes: " << *p << endl;

    //executa a função para alternar o ponteiro
    alteraPonteiro(&p);

    //exibe o valor apontado pelo ponteiro após a alteração
    cout << "Valor apos: " << *p << endl;

    cout << endl;

    return 0;

}

//definição das funções
//---------------------------------------------

//funçãi que altera um ponteiro
void alteraPonteiro(int **pp) {

    static int y = 100;

    //faz o ponteiro original apontar para y
    *pp = &y;

}
