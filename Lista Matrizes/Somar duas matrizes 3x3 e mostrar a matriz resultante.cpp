#include <iostream>
using namespace std;

int main() {
    int matriz1[3][3], matriz2[3][3], resultado[3][3];

    cout << "Digite os valores da primeira matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz1[i][j];
        }
    }

    cout << "Digite os valores da segunda matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    cout << "Matriz resultante da soma:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

