//ex 09 exemplo de um array de ponteiros para funções

#include <iostream>
using namespace std;

//protótipo das funções

void cantar(int);
void dancar(int);
void enrolar(int);

//função principal
int main() {

    cout << "\n";
    cout << "Array de Ponteiros para Funcoes\n\n";

    //declara e inicializa um array de 3 ponteiros para funções, que aceitam um argumento inteiro e não retornam nenhum valor
    void (*funcoes[3])(int) = {
        cantar,
        dancar,
        enrolar,
    };

    //controla a opção do usuário
    int opcao;

    //recebe a entrada do usuário
    cout << ">> Informe a opcao desejada (0, 1 ou 2): ";
    cin >> opcao;
    cout << endl;

    //loop para processar a escolha do usuario
    while ((opcao >= 0) && (opcao < 3)) {

        //executa a função de acordo com a opção escolhida, passando o valor da opção como argumento
        (*funcoes[opcao])(opcao);

        //recebe a entrada do usuário novamente
        cout << ">> Informe a opcao desejada (0, 1, 2 ou 3 para sair): ";
        cin >> opcao;
        cout << endl;
    }

    return 0;
}

//definição das funções

//função cantar()
void cantar(int opcao) {
    cout << "* Voce escolheu a opcao " << opcao << ". Vamos cantar!\n\n";
}

//------------------------------------------------------------------------------

//função dancar()
void dancar(int opcao) {
    cout << "* Voce escolheu a opcao " << opcao << ". Vamos dancar!\n\n";
}

//------------------------------------------------------------------------------

//função enrolar()
void enrolar(int opcao) {
    cout << "* Voce escolheu a opcao " << opcao << ". Vamos enrolar!\n\n";
}

//------------------------------------------------------------------------------
