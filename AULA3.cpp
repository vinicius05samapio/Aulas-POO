#include <iostream>
#include <iomanip>

using namespace std;

//fun��o principal

int main() {

    //declara��o das vari�veis
    float n1, n2, media{0};

    //entrada dos dados
    cout << "\n";
    cout << "Desvio condicional simples\n\n";
    cout << "* informe as duas notas do aluno: ";

    cin >> n1 >> n2;

    // calcula a m�dia do aluno
    media = (n1 + n2) / 2;

    //formata��o do resultado
    cout << setprecision(3);
    cout << setiosflags(ios::showpoint);

    //verifica se ele foi aprovado
    if (media >= 6) {
        cout << "* O aluno foi aprovado com m�dia final " << media << "!\n";
    }

    cout << "\n";

    //fim do programa
    return 0;
}
