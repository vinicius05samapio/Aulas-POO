#include <iostream>
using namespace std;

void incrementarPorReferencia(int &num) {
    num++;
    cout << "Dentro da funsao: " << num << endl;
}

int main() {
    int a = 20;
    incrementarPorReferencia(a);
    cout << "Fora da funsao: " << a << endl;
    return 0;
}

