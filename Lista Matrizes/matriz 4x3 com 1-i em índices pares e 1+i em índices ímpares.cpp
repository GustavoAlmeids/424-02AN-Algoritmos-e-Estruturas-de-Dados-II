#include <iostream>
using namespace std;

int main() {
    int matriz[4][3];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if ((i + j) % 2 == 0) {
                matriz[i][j] = 1 - i;
            } else {
                matriz[i][j] = 1 + i;
            }
        }
    }

    cout << "Matriz 4x3 com 1-i em indices pares e 1+i em indices impares:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

