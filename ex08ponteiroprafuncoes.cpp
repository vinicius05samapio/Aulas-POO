//ex08 ponteiros para fun��es

#include <iostream>

using namespace std;

//prototipo das fun��es

int soma(int a, int b);
int subtrai(int a, int b);

//fun��o principal

int main() {

    cout << "\n";
    cout << "Ponteiros para Funcoes\n\n";

    //Declara um ponteiro para funcao
    int (*operacao)(int, int);

    //atribui a funsao soma() ao ponteiro
    operacao = soma;

    //chamando a fun�ao soma() atravel do ponteiro
    cout << "Soma: " << operacao(10, 5) << endl;

    //atribuindo a funcao subtrai() ao ponteiro
    operacao = subtrai;

    //chamando a funcao subtrai() atraves do ponteiro
    cout << "Subtracao: " << operacao(10, 5) << endl;

    cout << "\n";

    return 0;

}

//defini��o das fun��es

//fun��o que realiza uma soma
int soma(int a, int b) {
    return a + b;
}

//--------------------------------------------------

//fun��o que realiza uma subtra��o
int subtrai(int a, int b) {
    return a - b;
}
