//ex 16 exemplo de uso de namespaces

//programa que demonstra a utiliza��o de namespaces

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

//namespace com a defini��o de algumas fun��es estatisticas

namespace estatistico {

    //Vari�vel que armazena o valor de PI
    double PI = 3.141516;

    //c�lcula de m�dia
    double medi (const vector<double>& dados) {

        //vari�vel para armazenar a soma dos valores do vetor
        double soma = 0;

        //calcula a soma dos valores do vetor
        for (auto valor : dados) {
            soma += valor;
        }

        //retorna o valor da m�dia
        return soma / dados.size();

    }

        //c�lculo da mediana
        double mediana(vector<double> dados) {

        //ordena os valores do vetor
        sort(dados.begin(), dados.end());

        //calcula o tamnaho dovertor
        size_t size = dados.size();

        //retorna o valor da mediana
        if (size % 2 == 0) {
            return (dados[size / 2 - 1] + dados[size / 2])/ 2;

       } else {
            return dados[size / 2];
        }


    }

    //calculo da vari�ncia
    double variancia(const vector<double>& dados) {

        //calcula a m�dia dos valores do vetor
        double m = mediana(dados);

        //vari�vel para armazenar a soma dos valores do vetor
        double soma = 0;

        //calcula a soma dos quadrados da diferen�a entre o valor e sua m�dia
        for (auto valor : dados) {

            soma += (valor - m) * (valor - m);
        }

        //retorna a vari�ncia dos dados
        return soma / dados.size();

    }
    //-----------------------

    //c�lculo do desvio padr�o
    double desvioPadrao(const vector<double>& dados) {

        //retorna o desvio padr�o dos dados
        return sqrt(variancia(dados));

    }

}


//fun��o principal
int main() {

    //define o vetor com os dados
    vector<double> dados = {2, 3, 3, 4, 5, 6, 7, 8, 9, 10};

    //cabe�alho
    cout << "\n";
    cout << "Exemplo de utilizacao de namespaces\n\n";

    //formata��o
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);

    //utiliza o namespace para calcular o resultado
    cout << "Valor de PI..: " << estatistico::PI << endl;
    cout << "Media........: " << estatistico::medi(dados) << endl;
    cout << "Mediana......: " << estatistico::mediana(dados) << endl;
    cout << "Variancia....: " << estatistico::variancia(dados) << endl;
    cout << "Desvio Padr�o: " << estatistico::desvioPadrao(dados) << endl;
    cout << "\n";

    //fim do pograma
    return 0;
}
