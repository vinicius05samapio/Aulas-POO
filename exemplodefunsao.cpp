#include <iostream>
using namespace std;

//definição da função
int soma(int a, int b = 0) {
    return a + b;

}

//funsao principal
int main() {
    int resultado = soma(5, 3); //chamada da função
    cout << "A soma e: " << resultado << endl;
    return 0;
}
