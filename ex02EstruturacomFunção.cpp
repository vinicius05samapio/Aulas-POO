//EXEMPLO 02: PROGRAMA QUE DEMONSTRA COMO DECLARAR UMA estrutura com fun��o

#include <iostream>

using namespace std;

//-------------------------------------------------------------------

//defini��o da estrutura Ponto

struct Ponto {

    //cooredenadas do ponto
    int x;
    int y;

    //-------------------------------------------------------------------

    //fun��o para definiar as coordenadas do ponto
    void defineCoordenadas(int px, int py) {
        x = px;
        y = py;
    }

    //fun��o para exibir as coordenadas do ponto
    //o modificador cons indica que ela n�o modifica os membro da estrutura
    void exibeCoordenadas(string P) const {
        cout << "Coordenadas do ponto " << P << ": (" << x << ", " << y << ")\n";
        }
};

//fun��o principal
int main() {

    cout << "\n";
    cout << "Declaracao de Estruturas com Atributos e Fun��es\n\n";

    //declara��o de duas vari�veios do tipo Ponto
    Ponto p1;

    //executa a fun��o que define as cooredenadas do ponto
    p1.defineCoordenadas(10, 20);

    //executa a fun��o que exibe as cooredenadas do ponto
    p1.exibeCoordenadas("P1");

    cout << endl;

    //fim do pograma
    return 0;

}
