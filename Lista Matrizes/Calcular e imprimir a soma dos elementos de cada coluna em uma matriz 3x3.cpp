#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];

    cout << "Digite os valores da matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "A soma dos elementos de cada coluna é:" << endl;
    for (int j = 0; j < 3; j++) {
        int soma = 0;
        for (int i = 0; i < 3; i++) {
            soma += matriz[i][j];
        }
        cout << "Coluna " << j + 1 << ": " << soma << endl;
    }

    return 0;
}

