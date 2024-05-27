#include <iostream>
using namespace std;

int main() {
    int matriz[2][2] = {{1, 1}, {1, 1}};

    cout << "Matriz 2x2 preenchida com 1:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

