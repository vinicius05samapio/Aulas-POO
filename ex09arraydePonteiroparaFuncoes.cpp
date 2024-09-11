//ex 09 exemplo de um array de ponteiros para fun��es

#include <iostream>
using namespace std;

//prot�tipo das fun��es

void cantar(int);
void dancar(int);
void enrolar(int);

//fun��o principal
int main() {

    cout << "\n";
    cout << "Array de Ponteiros para Funcoes\n\n";

    //declara e inicializa um array de 3 ponteiros para fun��es, que aceitam um argumento inteiro e n�o retornam nenhum valor
    void (*funcoes[3])(int) = {
        cantar,
        dancar,
        enrolar,
    };

    //controla a op��o do usu�rio
    int opcao;

    //recebe a entrada do usu�rio
    cout << ">> Informe a opcao desejada (0, 1 ou 2): ";
    cin >> opcao;
    cout << endl;

    //loop para processar a escolha do usuario
    while ((opcao >= 0) && (opcao < 3)) {

        //executa a fun��o de acordo com a op��o escolhida, passando o valor da op��o como argumento
        (*funcoes[opcao])(opcao);

        //recebe a entrada do usu�rio novamente
        cout << ">> Informe a opcao desejada (0, 1, 2 ou 3 para sair): ";
        cin >> opcao;
        cout << endl;
    }

    return 0;
}

//defini��o das fun��es

//fun��o cantar()
void cantar(int opcao) {
    cout << "* Voce escolheu a opcao " << opcao << ". Vamos cantar!\n\n";
}

//------------------------------------------------------------------------------

//fun��o dancar()
void dancar(int opcao) {
    cout << "* Voce escolheu a opcao " << opcao << ". Vamos dancar!\n\n";
}

//------------------------------------------------------------------------------

//fun��o enrolar()
void enrolar(int opcao) {
    cout << "* Voce escolheu a opcao " << opcao << ". Vamos enrolar!\n\n";
}

//------------------------------------------------------------------------------
