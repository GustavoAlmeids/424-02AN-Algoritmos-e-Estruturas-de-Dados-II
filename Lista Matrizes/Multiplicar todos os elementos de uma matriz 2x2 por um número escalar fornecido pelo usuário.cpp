#include <iostream>
using namespace std;

int main() {
    int matriz[2][2];
    int escalar;

    cout << "Digite os valores da matriz 2x2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "Digite o valor escalar: ";
    cin >> escalar;

    cout << "Matriz resultante após multiplicação pelo escalar:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matriz[i][j] *= escalar;
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

