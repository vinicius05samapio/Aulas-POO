//EXEMPLO 13 exemplo de uso de ponteiro para ponteiros

#include <iostream>

using namespace std;

//prot�tipos das fun��es

void alteraPonteiro(int **pp);

//funsao prinsipal
int main() {

    cout << "\n";
    cout << "Exemplos de Ponteiros para Ponteiros\n\n";

    //declara uma variavel inteira
    int x = 10;

    //declara um ponteiro e aponta para o endere�o da vari�vel inteira
    int *p = &x;

    //exibe o valor aponotado pelo ponteiro antes da altera��o
    cout << "Valor antes: " << *p << endl;

    //executa a fun��o para alternar o ponteiro
    alteraPonteiro(&p);

    //exibe o valor apontado pelo ponteiro ap�s a altera��o
    cout << "Valor apos: " << *p << endl;

    cout << endl;

    return 0;

}

//defini��o das fun��es
//---------------------------------------------

//fun��i que altera um ponteiro
void alteraPonteiro(int **pp) {

    static int y = 100;

    //faz o ponteiro original apontar para y
    *pp = &y;

}
