//EXEMPLO 4

//programa que permite a leitura de duas notas de um aluno e calcula a m�dia
//se o valor da m�dia for menor que 4, informe que o aluno foi reprovado.
//se o valor de m�dia estuver entre 4 e 6, informa que o aluno dever realizar a prova de recupera��o IFA) se o valor de m�dia for maior ou igual ao valor 6,
//informa qye o aluno foi aprovado. O programa deve exibir a situa��o do aluino, justamete com a m�dia que ele obteve. Considere a aprensenta��o dos valores utilizando duas casas decimais

#include <iostream>
#include <iomanip>

using namespace std;

//fun��o principal

int main() {

    // declara��o das vari�veis
    float n1, n2, media{0};

    // formata��o do resultado
    cout << setprecision(3);
    cout << setiosflags(ios::showpoint);

    cin >> n1 >> n2;

    media = (n1+n2)/2;



    //verifica a situa��o do aluno
    if (media < 4) {
        cout << "* O aluno foi reprovado com media final " << media << "!";
    }
    else if (media >= 4 && media <= 6) {
        cout << "* O aluno obteve a media final " << media << " Ele deve realizar o IFA. ";
    }
    else {
        cout << "* O aluno foi aprovado com m�dia final " << media << "!";
    }
    cout << "\n\n";

    //fim
    return 0;
}
