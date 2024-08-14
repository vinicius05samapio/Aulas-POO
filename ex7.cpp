//exemplo 7: while

//progrma que permite a leitura de um valor inteiro e apresenta o resultado do clácula da tabuada até 10 para esse valor

#include <iostream>
#include <iomanip>

using namespace std;

//função princiapl

int main() {

    //declaração das variáveis
    int contador{0}, valor, resultado;

    //entrada dos dados
    cout << "\n";
    cout << "Laço de repetição com condição inicial\n\n";
    cout << "* informe o valor desejado: "; cin >> valor;
    cout << "\n=> tabuada do " << valor << "\n\n";

    //laço para realizar o cálculo da tabuada
    while (contador <= 9000) {

        //calcula o resutlado
        resultado = valor * contador;

        //exibe a linha da tabuada
        cout << setw(2) << valor;
        cout << " X ";
        cout << setw(2) << contador;
        cout << " = ";
        cout << setw(2) << resultado << "\n";

        //incrementa o contador
        contador++;

    }

    cout << "\n";

    //fim do pograma
    return 0;

}

