#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    double area;
    int cobertura = 3;
    int capacidadeLata = 18;
    double precoLata = 80.00;
    double litrosNecessarios;
    int latasNecessarias;
    double precoTotal;


    cout << "Informe o tamanho da area a ser pintada em metros quadrados: ";
    cin >> area;


    litrosNecessarios = area / cobertura;
    latasNecessarias = ceil(litrosNecessarios / capacidadeLata);
    precoTotal = latasNecessarias * precoLata;


    cout << "Quantidade de latas de tinta a serem compradas: " << latasNecessarias << endl;
    cout << "Preco total: R$ " << fixed << setprecision(2) << precoTotal << endl;


    return 0;
}
