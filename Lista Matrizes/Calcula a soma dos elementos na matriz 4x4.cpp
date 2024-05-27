#include <iostream>
using namespace std;

int main() {
    int matriz[4][4];
    int linha;

    cout << "Digite os valores da matriz 4x4:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "Digite o indice da linha (0-3) para calcular a soma: ";
    cin >> linha;

    int soma = 0;
    for (int j = 0; j < 4; j++) {
        soma += matriz[linha][j];
    }

    cout << "Soma dos elementos da linha " << linha << " e: " << soma << endl;

    return 0;
}

