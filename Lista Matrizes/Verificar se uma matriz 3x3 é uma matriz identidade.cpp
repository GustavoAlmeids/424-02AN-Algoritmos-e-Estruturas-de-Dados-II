#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    bool identidade = true;

    cout << "Digite os valores da matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
            if ((i == j && matriz[i][j] != 1) || (i != j && matriz[i][j] != 0)) {
                identidade = false;
            }
        }
    }

    if (identidade) {
        cout << "A matriz é uma matriz identidade." << endl;
    } else {
        cout << "A matriz não é uma matriz identidade." << endl;
    }

    return 0;
}

