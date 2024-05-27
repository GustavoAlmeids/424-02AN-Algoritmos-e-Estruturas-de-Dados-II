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

    cout << "Elementos da diagonal principal:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << matriz[i][i] << " ";
    }
    cout << endl;

    return 0;
}

