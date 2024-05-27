#include <iostream>
using namespace std;

int main() {
    int vetor[12];

    cout << "Digite 12 números inteiros:" << endl;
    for (int i = 0; i < 12; i++) {
        cin >> vetor[i];
    }

    for (int i = 0; i < 12; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    cout << "Os elementos do vetor após substituição são:" << endl;
    for (int i = 0; i < 12; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}

