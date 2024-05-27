#include <iostream>
using namespace std;

int main() {
    int matriz[3][2] = {{0, 0}, {0, 0}, {0, 0}};

    cout << "Matriz 3x2 preenchida com 0:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

