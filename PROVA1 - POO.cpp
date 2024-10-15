#include <iostream>

using namespace std;

int main() {
    int dados[100], n = 0, valor;

    cout << "Informe valores inteiros:\n";
    while (true) {
        if (cin.peek() == '\n') break;
        cin >> valor;
        dados[n++] = valor;
    }

    int valor_maximo = 0;
    for (int i = 0; i < n; ++i) {
        if (dados[i] > valor_maximo) valor_maximo = dados[i];
    }

    for (int i = 1; i <= valor_maximo; ++i) {
        cout << i << " ";
        for (int j = 0; j < n; ++j) {
            if (dados[j] >= i) cout << "* ";
        }
        cout << "\n";
    }

    cout << "0 ";
    for (int i = 1; i <= valor_maximo; ++i) cout << i << " ";
    cout << "\n";

    return 0;
}
