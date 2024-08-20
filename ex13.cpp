//exemplo 13 sobrecarga de funções
//programa que demonstra a utilização de sobrecarga de funções

#include <iostream>
using namespace std;

//protótipo de função

void imprime();
void imprime(int valor);
void imprime(float valor);
void imprime(int N1, float  N2);

//FUNÇÃO PRINCIPAL
int main() {

    cout << "\n";

    //utiliza as funções sobrecarregadas
    imprime();
    imprime(10);
    imprime(10.99f);
    imprime(1, 0.99f);

    cout << "\n";

    //fim do programa
    return 0;
}

//definição das funções

//função sobrecarregada sem parametros
void imprime() {
        cout << "Funcao sem argumentos." << endl;

}

//função sobrecarregada com um parametro inteiro
void imprime(int valor) {
        cout << "Funcao sem argumento inteiro: " << valor << endl;

}

//função sobrecarregada com um parametro real
void imprime(float valor) {
        cout << "Funcao sem argumento real: " << valor << endl;

}

//função sobrecarregada com dois parametros
void imprime(int N1, float N2) {
        cout << "Primeiro valor: " << N1 << endl;
        cout << "Segundo valor: " << N2 << endl;

}
