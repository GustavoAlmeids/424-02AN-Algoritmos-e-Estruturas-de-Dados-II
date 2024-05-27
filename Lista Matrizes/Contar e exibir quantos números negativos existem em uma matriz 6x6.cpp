#include <iostream>
using namespace std;

int main() {
    int matriz[6][6];
    int negativos = 0;

    cout << "Digite os valores da matriz 6x6:" << endl;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> matriz[i][j];
            if (matriz[i][j] < 0) {
                negativos++;
            }
        }
    }

    cout << "O número de valores negativos na matriz é: " << negativos << endl;

    return 0;
}

