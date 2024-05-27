#include <iostream>
using namespace std;

int main() {
    int matriz[2][2];
    int elemento;
    bool encontrado = false;

    cout << "Digite os valores da matriz 2x2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "Digite o elemento a ser procurado: ";
    cin >> elemento;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (matriz[i][j] == elemento) {
                encontrado = true;
                break;
            }
        }
    }

    if (encontrado) {
        cout << "Elemento encontrado na matriz." << endl;
    } else {
        cout << "Elemento nao encontrado na matriz." << endl;
    }

    return 0;
}

