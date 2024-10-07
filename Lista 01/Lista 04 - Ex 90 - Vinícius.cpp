#include <iostream>
#include <iomanip>

using namespace std;

// Função valorPagamento  para calcular o valor a ser pago
double valorPagamento(double valorPrestacao, int diasAtraso) {
    double valorFinal = valorPrestacao;
    if (diasAtraso > 0) {

        double multa = valorPrestacao * 0.03;
        double juros = valorPrestacao * (diasAtraso * 0.001);
        valorFinal = valorFinal + multa + juros;
    }

    return valorFinal;
}

//função principal
int main() {
    double prestacao;
    int atraso;

    while (true) {

        cout << "Valor da prestacao: ";
        cin >> prestacao;

        // valor para encerrar o programa
        if (prestacao == 0) {
            break;
        }

        cout << "Dias de atraso: ";
        cin >> atraso;

        double valorPagar = valorPagamento(prestacao, atraso);

        cout << fixed << setprecision(2);
        cout << "Prestacao original: R$ " << prestacao << endl;
        cout << "Dias em atraso: " << atraso << endl;
        cout << "Valor a pagar: R$ " << valorPagar << endl << endl;
    }

    return 0;
}
