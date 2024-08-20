 //exemplo 11 exemplo de função
 //programa que utiliza funções para implementar uma calculadora simples

 #include <iostream>
 #include <iomanip>
 #include <cctype>

 using namespace std;

 //variaveis globais

 float resultado, N1, N2;

 //prototipos de funçãi

 void entrada();
 void saida(string operacao);
 void pausa();
 void adicao();
 void subtracao();
 void multiplicacao();
 void divisao();

 //função proiciapl
 int main() {

    //declaração das variáveis
    int opcao = 0;

    //laço para escolha da operação desejada
    while (opcao != 5) {

        //formatação
        cout << setprecision(2);
        cout << setiosflags(ios::right);
        cout << setiosflags(ios::fixed);

        //cabeçalho
        cout << "\n";
        cout << "----------------------" << endl;
        cout << " Programa Calculadora " << endl;
        cout << "    Menu Principal    " << endl;
        cout << "----------------------" << endl;
        cout << "\n";

        //opções do menu
        cout << "[1] - Adicao" << endl;
        cout << "[2] - Subtracao" << endl;
        cout << "[3] - Multiplicacao" << endl;
        cout << "[4] - Divisao" << endl;
        cout << "[5] - Encerrar o Programa" << endl;
        cout << "\n";

        //entrada do usuário
        cout << "=> Escolha uma opção: "; cin >> opcao;

        //se o usuário nao deseja encerrar o programa
        if (opcao != 5) {

            //verifica a opcao escolhida pelo usuario
            switch (opcao) {

                //adicao
            case 1:
                adicao();
                break;

            case 2:
                subtracao();
                break;

            case 3:
                multiplicacao();
                break;

            case 4:
                divisao();
                break;

            }

        }
        // encerra o programa
        else {
            cout << "\nPrograma encerrado com sucesso!\n\n";
        }

    }
    // fim do pograma
    return 0;
 }

 //definição das funções

 //realiza a entrada dos números que serão utilizados para realizar a operação
 void entrada() {

    cout << "\n";
    cout << "* Informe o primeiro numero: "; cin >> N1;
    cout << "* Informe o segundo número: "; cin >> N2;

 }

 //exibe o resultado da operação
 void saida(string operacao) {

    cout << "\n";
    cout << "=> O resultado da " << operacao;
    cout << " entre " << N1 << " e " << N2;
    cout << " é " << resultado << "!\n";

    //simula uma pausa no programa
    pausa();

 }

 void pausa() {

    char letra;

    cout << "\n";
    cout << "Tecle <C> + <Enter> para voltar ao menu: ";

    //laço para receber a entrada d usuário
    do {

        //obtém a entrada do usuário
        letra = cin.get();

        //converte para letras maiusculas
        letra = toupper(letra);

    } while (letra != 'C');

 }

 //----------

 //realiza a operação de adição
 void adicao() {

    //cabeçalho
    cout << "\n";
    cout << " Rotina de Adicao " << endl;
    cout << "------------------" << endl;

    //executa a função para obter os dados
    entrada();

    //calcula a adição
    resultado = N1 + N2;

    //executa a função para exibir o resultado
    saida("adicao");

 }
  //----------

 //realiza a operação de subtracao
 void subtracao() {

    //cabeçalho
    cout << "\n";
    cout << " Rotina de subtracao " << endl;
    cout << "------------------" << endl;

    //executa a função para obter os dados
    entrada();

    //calcula a subtracao
    resultado = N1 - N2;

    //executa a função para exibir o resultado
    saida("subtracao");

 }

   //----------

 //realiza a operação de multiplicacao
 void multiplicacao() {

    //cabeçalho
    cout << "\n";
    cout << " Rotina de multiplicacao " << endl;
    cout << "------------------" << endl;

    //executa a função para obter os dados
    entrada();

    //calcula a multiplicacao
    resultado = N1 * N2;

    //executa a função para exibir o resultado
    saida("multiplicacao");

 }

    //----------

 //realiza a operação de divisao
 void divisao() {

    //cabeçalho
    cout << "\n";
    cout << " Rotina de divisao " << endl;
    cout << "------------------" << endl;

    //executa a função para obter os dados
    entrada();

    //verifica se não está ocorrendo uma divisão por zero
    if (N2 == 0) {

        cout << "\n";
        cout << "Erro de divisao\n";

        // simula uma pausa no programa
        pausa();
    }

    //caso contrario
    else {
    //calcula a divisao
    resultado = N1 / N2;

    //executa a função para exibir o resultado
    saida("divisao");

    }
 }






















