//ex 6 switch
//programa que recebe um n�mero equivalente a um determinado m�s e informa a quantidade de dias que ele possui.
//O programa deve exibir uma mensagem para os valores que n�o correspondem a um m�s v�lido.

#include <iostream>

using namespace std;

//fun~��o principal
int main() {{

    // declara��o das vari�veis
    int mes;

    //entrada dos dadaos
    cout << "\n";
    cout << "Estrutura de controle com m�ltipla escolha\n\n";
    cout << "* informe o n�mero equivalente ao m�s desejado: "; cin >> mes;

    //verifica a quantidade de dias do m�s
    switch (mes) {

        //meses com 31 dias
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "\n=> O m�s " << mes << " possui 31 dias. ";
            break;
        // meses com 30 dias
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "\n=> O m�s " << mes << " possui 30 dias. ";
            break;
        // m�s com 28 dias
        case 2:
            cout << "\n=> o m�s " << mes << " possui 28 dias. ";
            break;
        // valores que nao correspondem a um mes
        default:
            cout << "\n=> o m�s " << mes << "n�o existe!";
    }
    cout << "\n\n";
//fim
return 0;
}
}
