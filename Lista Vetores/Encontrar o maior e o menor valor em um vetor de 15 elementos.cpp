#include <iostream>
using namespace std;

int main() {
    int vetor[15];
    int maior, menor;

    cout << "Digite 15 números inteiros:" << endl;
    for (int i = 0; i < 15; i++) {
        cin >> vetor[i];
    }

    maior = menor = vetor[0];
    for (int i = 1; i < 15; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;

    return 0;
}

