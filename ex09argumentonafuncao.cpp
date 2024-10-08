//exemplo 09 programa que demonstra o uso de argumentos na fução principal
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

//função principal
int main(int argc, char* argv[]) {

    cout << "\n";
    cout << "Exemplo de Argumentos da Funcao Principal\n\n";

    //se o usuário não forneceu o núemro correto de argumentos
    if (argc != 4) {
        //exibe uma mensagem de erro
        cerr << "Uso: " << argv[0] << " somar/subtrair num1 num2" << "\n\n";
        //encerra o programa
        return 1;
    }

    //recupera o valor de cada argumento
    const char *operacao = argv[1];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    //realiza a soma dos valores
    if (!strcmp(operacao, "somar")) {
        cout << "Soma: " << num1 + num2 << endl;
    }
    else if (!strcmp(operacao, "subtrair")) {
        cout << "Subtracao: " << num1 - num2 << endl;
    }
    else {
        cout << "Operacao invalida!" << endl;
    }

    cout << endl;

    //fim do programa
    return 0;

}
