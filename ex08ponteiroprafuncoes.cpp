//ex08 ponteiros para funções

#include <iostream>

using namespace std;

//prototipo das funções

int soma(int a, int b);
int subtrai(int a, int b);

//função principal

int main() {

    cout << "\n";
    cout << "Ponteiros para Funcoes\n\n";

    //Declara um ponteiro para funcao
    int (*operacao)(int, int);

    //atribui a funsao soma() ao ponteiro
    operacao = soma;

    //chamando a funçao soma() atravel do ponteiro
    cout << "Soma: " << operacao(10, 5) << endl;

    //atribuindo a funcao subtrai() ao ponteiro
    operacao = subtrai;

    //chamando a funcao subtrai() atraves do ponteiro
    cout << "Subtracao: " << operacao(10, 5) << endl;

    cout << "\n";

    return 0;

}

//definição das funções

//função que realiza uma soma
int soma(int a, int b) {
    return a + b;
}

//--------------------------------------------------

//função que realiza uma subtração
int subtrai(int a, int b) {
    return a - b;
}
