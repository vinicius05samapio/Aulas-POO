//ex 15  exemplo de register
// programa que demonstra a utiliza��o de register

#include <iostream>
using namespace std;

//fun��o principal

int main() {

    //declara a vari�vel utilizando register
    register int i;

    cout << "\n";

    //loop para demonstrar a utiliza��o de register
    for (i = 0; i < 5; i++) {
        cout << "Valor do contador: " << i << "\n";
    }

    cout << "\n";

    //fim do pograma
    return 0;
}
