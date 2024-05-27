#include <iostream>
using namespace std;

int main() {
    int matriz1[2][2], matriz2[2][2];
    bool iguais = true;

    cout << "Digite os valores da primeira matriz 2x2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matriz1[i][j];
        }
    }

    cout << "Digite os valores da segunda matriz 2x2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (matriz1[i][j] != matriz2[i][j]) {
                iguais = false;
                break;
            }
        }
    }

    if (iguais) {
        cout << "As matrizes são iguais." << endl;
    } else {
        cout << "As matrizes são diferentes." << endl;
    }

    return 0;
}

