#include <iostream>
using namespace std;

void incrementarPorReferencia(int &num) {
    num++;
    cout << "Dentro da funsao: " << num << endl;
}

int main() {
    int a = 5;
    incrementarPorReferencia(a);
    cout << "Fora da funsao: " << a << endl;
    return 0;
}

