//EXEMPLO 4

//programa que permite a leitura de duas notas de um aluno e calcula a média
//se o valor da média for menor que 4, informe que o aluno foi reprovado.
//se o valor de média estuver entre 4 e 6, informa que o aluno dever realizar a prova de recuperação IFA) se o valor de média for maior ou igual ao valor 6,
//informa qye o aluno foi aprovado. O programa deve exibir a situação do aluino, justamete com a média que ele obteve. Considere a aprensentação dos valores utilizando duas casas decimais

#include <iostream>
#include <iomanip>

using namespace std;

//função principal

int main() {

    // declaração das variáveis
    float n1, n2, media{0};

    // formatação do resultado
    cout << setprecision(3);
    cout << setiosflags(ios::showpoint);

    cin >> n1 >> n2;

    media = (n1+n2)/2;



    //verifica a situação do aluno
    if (media < 4) {
        cout << "* O aluno foi reprovado com media final " << media << "!";
    }
    else if (media >= 4 && media <= 6) {
        cout << "* O aluno obteve a media final " << media << " Ele deve realizar o IFA. ";
    }
    else {
        cout << "* O aluno foi aprovado com média final " << media << "!";
    }
    cout << "\n\n";

    //fim
    return 0;
}
