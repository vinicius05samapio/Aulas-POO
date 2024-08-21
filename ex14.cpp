//exemplo14 exemplo de escopo estático
//programa que demonstra a utilização de static

#include <iostream>
using namespace std;

//protótipo de função

void incremento();

//função principal
int main() {

    cout << "\n";

    //loop para demonstrar a utilização de static
    for (int i = 0; i < 5; i++) {
        cout << "i: " << i << " -- valor: ";
        incremento();
    }

    cout << "\n";

    //fim do pograma
    return 0;
}

//definição das fuinções

//função que retorna o incremento de um valor
void incremento() {

    //definição da variável estática
    static int valor = 0;

    //exibe seu valor
    cout << valor << "\n";

    //incrementa o valor da variável
    valor += 5;
}

