#include <iostream>
using namespace std;

void incrementarPorValor(int num) {
    num++;
    cout << "Dentro da funsao: " << num << endl;
}

int main() {
    int a = 5;
    incrementarPorValor(a);
    cout << "Fora da funsao: " << a << endl;
    return 0;
}
