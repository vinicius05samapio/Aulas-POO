#include <iostream>
using namespace std;

void incrementarPorPonteiro(int *num) {
    (*num)++;
    cout << "Dentro da funsao: " << *num << endl;
}

int main() {
    int a = 5;
    incrementarPorPonteiro(&a);
    cout << "Fora da funsao: " << a << endl;
    return 0;
}

