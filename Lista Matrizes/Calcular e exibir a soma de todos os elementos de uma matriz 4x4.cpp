#include <iostream>
using namespace std;

int main() {
    int matriz[4][4];
    int soma = 0;

    cout << "Digite os valores da matriz 4x4:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matriz[i][j];
            soma += matriz[i][j];
        }
    }

    cout << "A soma de todos os elementos da matriz é: " << soma << endl;

    return 0;
}

