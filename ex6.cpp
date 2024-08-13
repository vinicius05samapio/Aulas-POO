//ex 6 switch
//programa que recebe um número equivalente a um determinado mês e informa a quantidade de dias que ele possui.
//O programa deve exibir uma mensagem para os valores que não correspondem a um mês válido.

#include <iostream>

using namespace std;

//fun~ção principal
int main() {{

    // declaração das variáveis
    int mes;

    //entrada dos dadaos
    cout << "\n";
    cout << "Estrutura de controle com múltipla escolha\n\n";
    cout << "* informe o número equivalente ao mês desejado: "; cin >> mes;

    //verifica a quantidade de dias do mês
    switch (mes) {

        //meses com 31 dias
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "\n=> O mês " << mes << " possui 31 dias. ";
            break;
        // meses com 30 dias
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "\n=> O mês " << mes << " possui 30 dias. ";
            break;
        // mês com 28 dias
        case 2:
            cout << "\n=> o mês " << mes << " possui 28 dias. ";
            break;
        // valores que nao correspondem a um mes
        default:
            cout << "\n=> o mês " << mes << "não existe!";
    }
    cout << "\n\n";
//fim
return 0;
}
}
