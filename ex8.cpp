//EX 8 c�lculo de fatorial utilizando o  while
// program que calcula o faotural de um valor fornecido pelo usu�rio

#include <iostream>
using namespace std;

//fun�ao principal

int main() {

    //declara��o das vari�veis
    int i, valor;
    long int fatorial = 1;

    //entrada dos dados
    cout << "\n";
    cout << "C�lculo do fatorial utilizando o laso WHILE\n\n";
    cout << "* Informe o valor desejado: "; cin >> valor;

    //inicializa o contador
    i = 1;

    //la�o para calcular o fatorial
    while (i <= valor) {

        //calcula o fatorial
        fatorial *= i;

        //incrementa o contador
        i++;
    }
    //exibe o resultado
    cout << "\n=>Fatorial de " << valor << ": " << fatorial << "\n\n";

    //fim do pograma
    return 0;


}
