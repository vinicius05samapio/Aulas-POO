//exemplo 13 sobrecarga de fun��es
//programa que demonstra a utiliza��o de sobrecarga de fun��es

#include <iostream>
using namespace std;

//prot�tipo de fun��o

void imprime();
void imprime(int valor);
void imprime(float valor);
void imprime(int N1, float  N2);

//FUN��O PRINCIPAL
int main() {

    cout << "\n";

    //utiliza as fun��es sobrecarregadas
    imprime();
    imprime(10);
    imprime(10.99f);
    imprime(1, 0.99f);

    cout << "\n";

    //fim do programa
    return 0;
}

//defini��o das fun��es

//fun��o sobrecarregada sem parametros
void imprime() {
        cout << "Funcao sem argumentos." << endl;

}

//fun��o sobrecarregada com um parametro inteiro
void imprime(int valor) {
        cout << "Funcao sem argumento inteiro: " << valor << endl;

}

//fun��o sobrecarregada com um parametro real
void imprime(float valor) {
        cout << "Funcao sem argumento real: " << valor << endl;

}

//fun��o sobrecarregada com dois parametros
void imprime(int N1, float N2) {
        cout << "Primeiro valor: " << N1 << endl;
        cout << "Segundo valor: " << N2 << endl;

}
