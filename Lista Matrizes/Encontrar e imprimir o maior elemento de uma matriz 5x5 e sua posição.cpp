#include <iostream>
using namespace std;

int main() {
    int matriz[5][5];
    int maior = INT_MIN;
    int linha = 0, coluna = 0;

    cout << "Digite os valores da matriz 5x5:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matriz[i][j];
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    cout << "O maior elemento é " << maior << " na posição (" << linha << ", " << coluna << ")" << endl;

    return 0;
}

