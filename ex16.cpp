//ex 16 exemplo de uso de namespaces

//programa que demonstra a utilização de namespaces

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

//namespace com a definição de algumas funções estatisticas

namespace estatistico {

    //Variável que armazena o valor de PI
    double PI = 3.141516;

    //cálcula de média
    double medi (const vector<double>& dados) {

        //variável para armazenar a soma dos valores do vetor
        double soma = 0;

        //calcula a soma dos valores do vetor
        for (auto valor : dados) {
            soma += valor;
        }

        //retorna o valor da média
        return soma / dados.size();

    }

        //cálculo da mediana
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

    //calculo da variância
    double variancia(const vector<double>& dados) {

        //calcula a média dos valores do vetor
        double m = mediana(dados);

        //variável para armazenar a soma dos valores do vetor
        double soma = 0;

        //calcula a soma dos quadrados da diferença entre o valor e sua média
        for (auto valor : dados) {

            soma += (valor - m) * (valor - m);
        }

        //retorna a variância dos dados
        return soma / dados.size();

    }
    //-----------------------

    //cálculo do desvio padrão
    double desvioPadrao(const vector<double>& dados) {

        //retorna o desvio padrão dos dados
        return sqrt(variancia(dados));

    }

}


//função principal
int main() {

    //define o vetor com os dados
    vector<double> dados = {2, 3, 3, 4, 5, 6, 7, 8, 9, 10};

    //cabeçalho
    cout << "\n";
    cout << "Exemplo de utilizacao de namespaces\n\n";

    //formatação
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);

    //utiliza o namespace para calcular o resultado
    cout << "Valor de PI..: " << estatistico::PI << endl;
    cout << "Media........: " << estatistico::medi(dados) << endl;
    cout << "Mediana......: " << estatistico::mediana(dados) << endl;
    cout << "Variancia....: " << estatistico::variancia(dados) << endl;
    cout << "Desvio Padrão: " << estatistico::desvioPadrao(dados) << endl;
    cout << "\n";

    //fim do pograma
    return 0;
}
