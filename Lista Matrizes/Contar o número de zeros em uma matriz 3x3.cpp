#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    int count = 0;

    cout << "Digite os valores da matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
            if (matriz[i][j] == 0) {
                count++;
            }
        }
    }

    cout << "O número de zeros na matriz é: " << count << endl;

    return 0;
}

