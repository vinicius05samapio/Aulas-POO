//exemplo 01 arrays: programa que demonstra como declarar v�rios tipos de arrays

#include <iostream>
#include <string>

using namespace std;

//fun��o principal

int main(){

    cout << "\n";
    cout << "Exemplos de Arrays Unidimensionais\n\n";

    //declara os arrays
    int arrayInt[5] = {1, 2, 3, 4, 5};
    float arrayFloat[5] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    double arrayDouble[5] = {1.11, 2.22, 3.33, 4.44, 5.55};
    char arrayChar[5] = {'a', 'e', 'i', 'o', 'u'};
    string arrayStrings[5] = {"Cris", "Renata", "Joao", "Miranda", "Romao"};

    //exibe o primeiro elemento de cada array
    cout << "arrayInt[0]:  " << arrayInt[0] << endl;
    cout << "arrayFloat[0]: " << arrayFloat[0] << endl;
    cout << "arrayDouble[0]: " << arrayDouble[0] << endl;
    cout << "arrayChar[0]: " << arrayChar[0] << endl;

    cout << "arrayStrings[0]: " << arrayStrings[0] << endl;
    cout << "\n";

    //fim do pograma
    return 0;



}
