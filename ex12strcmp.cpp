//exemplo 12 exemplo de uso de strcmp
#include <iostream>
#include <cstring>

using namespace std;

//fun��o princiap
int main() {

    cout << "\n";
    cout << "Exemplo de uso de strcmp()\n\n";

    //declara um array de caracteres usando ponteiros
    const char *nomes[] = {
        "Paulo",
        "Ana Cristina",
        "Renata",
        "Joao",
        "Miranda",
        "SATORU GOJO",
        "SUGURU GETO"
    };

    //obt�m o total de nomes armazenados do array
    size_t total = sizeof(nomes) / sizeof(nomes[0]);

    //vari�vel tempor�ria
    const char *temp;

    //contadores
    int i, j;

    //-------------------------------------------------

    cout << ">> Total de nomes: " << total << "\n\n";

    //exibe os nomes antes de ordenas
    cout << "* Antes da ordenacao: " << "\n\n";

    for (i = 0; i < total; i++) {
        cout << i+1 << ". " << nomes[i] << endl;
    }

    //---------------------------------------------

    //realiza a ordena��o (A-Z) dos nomes usando strcmp()
    for (i = 0; i < total - 1; i++) {
        for (j = i + 1; j < total; j++) {
            if (strcmp(nomes[i], nomes[j]) > 0) {
                temp = nomes[i];
                nomes[i] = nomes[j];
                nomes[j] = temp;
            }
        }
    }

    cout << "\n";

    //exibe os nomes depois de ordenar
    cout << "* Depois da ordenacao: " << "\n\n";

    for (int i = 0; i < total; i++) {
        cout << i+1 << ". " << nomes[i] << endl;
    }

    //--------------------------------------------------

    cout << endl;

    return 0;

}
