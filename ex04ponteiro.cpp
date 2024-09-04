//exemplo 04 exemplo de passagem por referencia com argumento ponteiro

#include <iostream>

using namespace std;

//prototipos das funções

void elevaCubo(int *nPtr);

//função principal
int main() {

    cout << "\n";
    cout << "Exemplo de Passagem por Referencia com Ponteiro\n\n";

    //declara e inicializa a variavel
    int numero = 5;

    //exibe seu valor original
    cout << "* Valor original: " << numero << "\n";

    //chamma a função que eleva ao cubo, passando o argumento por referencia
    elevaCubo(&numero);

    //exibe seu valor modificado
    cout << "* Valor modificado: " << numero << "\n\n";

    //fim do pograma
    return 0;

}

//DEFINIÇÃO DAS FINÇÕES

//calcula e retorna o cubo de um argumento inteiro
void elevaCubo(int *nPtr) {

    *nPtr = *nPtr * *nPtr * *nPtr;

}
