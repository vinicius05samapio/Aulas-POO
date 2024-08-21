//exemplo14 exemplo de escopo est�tico
//programa que demonstra a utiliza��o de static

#include <iostream>
using namespace std;

//prot�tipo de fun��o

void incremento();

//fun��o principal
int main() {

    cout << "\n";

    //loop para demonstrar a utiliza��o de static
    for (int i = 0; i < 5; i++) {
        cout << "i: " << i << " -- valor: ";
        incremento();
    }

    cout << "\n";

    //fim do pograma
    return 0;
}

//defini��o das fuin��es

//fun��o que retorna o incremento de um valor
void incremento() {

    //defini��o da vari�vel est�tica
    static int valor = 0;

    //exibe seu valor
    cout << valor << "\n";

    //incrementa o valor da vari�vel
    valor += 5;
}

