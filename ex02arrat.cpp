// exemplo 02 array bidimensional
//progrma aq demosntra como utilizar uma matrix para a aentrada de notas

#include <iostream>
#include <iomanip>

using namespace std;

//total de linhas e colunas
#define LINHAS 10
#define COLUNAS 4

using namespace std;

int main() {

    cout << "\n";
    cout << "Exemplo de Arrau Bidimensional\n\n";

    //declara as variáveis para controle dos laços
    int i, j;

    //delcara a matriz para entrada das notas
    //e da média do aluno
    float notas[LINHAS][COLUNAS +1];

    //declara as variáveis para cálculo da media do aluno
    float soma;
    float media;

//---------------------------------------------------------

//entrada das notas

    cout << "* Informe as " << COLUNAS << " notas dos " << LINHAS << " alunos:\n\n";

    //loop para percorrer cada linha da matriz
    for (i = 0; i < LINHAS; i++) {

        cout << "Informe as notas do aluno " << i+1 << ": ";

        //loop para a entrada das notas
        for (j = 0; j < COLUNAS; j++) {
            //armazena a nota
            cin >> notas[i][j];
        }
    }

    //calculo da media

    //loop para percorrer cada linha da matriz
    for (i = 0; i < LINHAS; i++) {

        //inicializa o somatório das notas do aluno
        soma = 0;

        //loop para percorrer cada nota
        for (j = 0; j < COLUNAS; j++) {

        //atualiza o somatório das notas
        soma += notas[i][j];
        }

        //calcula e armazena a média do aluno
        notas[i][COLUNAS] = soma / COLUNAS;
    }

    //apresentação do resultado
    //formatação do resultado
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);

    cout << "\n* Resultado final: \n\n";

    //cabeçalho
    cout << setw(6) << "Aluno";

    for (j = 0; j < COLUNAS; j++) {
        cout << setw(9) << "Nota " << j+1;
    }

    cout << setw(10) << "Media";
    cout << "\n\n";

    //Loop para percorrer cada linha da matriz
    for (i = 0; i < LINHAS; i++){

        //número do aluno
        cout << setw(6) << i+1;

        //loop para exibir as notas
        for (j = 0; j < COLUNAS; j++) {

            //notas do aluno
            cout << setw(10) << notas[i][j];
        }

        //média do aluno
        cout << setw(9) << notas[i][COLUNAS];

        //passo para a proximas linha da tabela
        cout <<"\n";
    }

//--------------------------------------------------------------

cout << "\n";

    //fim do pograma
     return 0;
}
