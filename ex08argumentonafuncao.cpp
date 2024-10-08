//exempli 08: programa que demosntra o suo de argumentos na função principal

#include <iostream>

using namespace std;

//função principal
int main(int argc, char* argv[]) {

    cout << "\n";
    cout << "Exemplo de Argumentos da Funcao Principal\n\n";

    //Exibe o número de argumentos passados para a função
    cout << "Numero de argumentos: " << argc << "\n\n";

    //Loop para exibir os argumentos passados para a função
    for (int i = 0; i < argc; i++) {
        cout << "Argumento " << i << ": " << argv[i] << "\n";
    }

    cout << endl;

    //fim do programa

    return 0;

}
