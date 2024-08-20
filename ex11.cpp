 //exemplo 11 exemplo de fun��o
 //programa que utiliza fun��es para implementar uma calculadora simples

 #include <iostream>
 #include <iomanip>
 #include <cctype>

 using namespace std;

 //variaveis globais

 float resultado, N1, N2;

 //prototipos de fun��i

 void entrada();
 void saida(string operacao);
 void pausa();
 void adicao();
 void subtracao();
 void multiplicacao();
 void divisao();

 //fun��o proiciapl
 int main() {

    //declara��o das vari�veis
    int opcao = 0;

    //la�o para escolha da opera��o desejada
    while (opcao != 5) {

        //formata��o
        cout << setprecision(2);
        cout << setiosflags(ios::right);
        cout << setiosflags(ios::fixed);

        //cabe�alho
        cout << "\n";
        cout << "----------------------" << endl;
        cout << " Programa Calculadora " << endl;
        cout << "    Menu Principal    " << endl;
        cout << "----------------------" << endl;
        cout << "\n";

        //op��es do menu
        cout << "[1] - Adicao" << endl;
        cout << "[2] - Subtracao" << endl;
        cout << "[3] - Multiplicacao" << endl;
        cout << "[4] - Divisao" << endl;
        cout << "[5] - Encerrar o Programa" << endl;
        cout << "\n";

        //entrada do usu�rio
        cout << "=> Escolha uma op��o: "; cin >> opcao;

        //se o usu�rio nao deseja encerrar o programa
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

 //defini��o das fun��es

 //realiza a entrada dos n�meros que ser�o utilizados para realizar a opera��o
 void entrada() {

    cout << "\n";
    cout << "* Informe o primeiro numero: "; cin >> N1;
    cout << "* Informe o segundo n�mero: "; cin >> N2;

 }

 //exibe o resultado da opera��o
 void saida(string operacao) {

    cout << "\n";
    cout << "=> O resultado da " << operacao;
    cout << " entre " << N1 << " e " << N2;
    cout << " � " << resultado << "!\n";

    //simula uma pausa no programa
    pausa();

 }

 void pausa() {

    char letra;

    cout << "\n";
    cout << "Tecle <C> + <Enter> para voltar ao menu: ";

    //la�o para receber a entrada d usu�rio
    do {

        //obt�m a entrada do usu�rio
        letra = cin.get();

        //converte para letras maiusculas
        letra = toupper(letra);

    } while (letra != 'C');

 }

 //----------

 //realiza a opera��o de adi��o
 void adicao() {

    //cabe�alho
    cout << "\n";
    cout << " Rotina de Adicao " << endl;
    cout << "------------------" << endl;

    //executa a fun��o para obter os dados
    entrada();

    //calcula a adi��o
    resultado = N1 + N2;

    //executa a fun��o para exibir o resultado
    saida("adicao");

 }
  //----------

 //realiza a opera��o de subtracao
 void subtracao() {

    //cabe�alho
    cout << "\n";
    cout << " Rotina de subtracao " << endl;
    cout << "------------------" << endl;

    //executa a fun��o para obter os dados
    entrada();

    //calcula a subtracao
    resultado = N1 - N2;

    //executa a fun��o para exibir o resultado
    saida("subtracao");

 }

   //----------

 //realiza a opera��o de multiplicacao
 void multiplicacao() {

    //cabe�alho
    cout << "\n";
    cout << " Rotina de multiplicacao " << endl;
    cout << "------------------" << endl;

    //executa a fun��o para obter os dados
    entrada();

    //calcula a multiplicacao
    resultado = N1 * N2;

    //executa a fun��o para exibir o resultado
    saida("multiplicacao");

 }

    //----------

 //realiza a opera��o de divisao
 void divisao() {

    //cabe�alho
    cout << "\n";
    cout << " Rotina de divisao " << endl;
    cout << "------------------" << endl;

    //executa a fun��o para obter os dados
    entrada();

    //verifica se n�o est� ocorrendo uma divis�o por zero
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

    //executa a fun��o para exibir o resultado
    saida("divisao");

    }
 }






















