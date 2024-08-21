//ex 15  exemplo de register
// programa que demonstra a utilização de register

#include <iostream>
using namespace std;

//função principal

int main() {

    //declara a variável utilizando register
    register int i;

    cout << "\n";

    //loop para demonstrar a utilização de register
    for (i = 0; i < 5; i++) {
        cout << "Valor do contador: " << i << "\n";
    }

    cout << "\n";

    //fim do pograma
    return 0;
}
