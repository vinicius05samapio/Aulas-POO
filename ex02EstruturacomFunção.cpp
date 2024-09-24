//EXEMPLO 02: PROGRAMA QUE DEMONSTRA COMO DECLARAR UMA estrutura com função

#include <iostream>

using namespace std;

//-------------------------------------------------------------------

//definição da estrutura Ponto

struct Ponto {

    //cooredenadas do ponto
    int x;
    int y;

    //-------------------------------------------------------------------

    //função para definiar as coordenadas do ponto
    void defineCoordenadas(int px, int py) {
        x = px;
        y = py;
    }

    //função para exibir as coordenadas do ponto
    //o modificador cons indica que ela não modifica os membro da estrutura
    void exibeCoordenadas(string P) const {
        cout << "Coordenadas do ponto " << P << ": (" << x << ", " << y << ")\n";
        }
};

//função principal
int main() {

    cout << "\n";
    cout << "Declaracao de Estruturas com Atributos e Funções\n\n";

    //declaração de duas variáveios do tipo Ponto
    Ponto p1;

    //executa a função que define as cooredenadas do ponto
    p1.defineCoordenadas(10, 20);

    //executa a função que exibe as cooredenadas do ponto
    p1.exibeCoordenadas("P1");

    cout << endl;

    //fim do pograma
    return 0;

}
