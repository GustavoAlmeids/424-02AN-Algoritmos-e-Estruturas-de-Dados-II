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

    for (int j = 0; j < 3; j++) {
        int temp = matriz[0][j];
        matriz[0][j] = matriz[1][j];
        matriz[1][j] = temp;
    }

    cout << "Matriz apos troca das linhas 1 e 2:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

