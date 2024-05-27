#include <iostream>
using namespace std;

int main() {
    int tamanho;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    int *vetor = new int[tamanho];

    cout << "Digite os elementos do vetor:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cin >> vetor[i];
    }

    int maior = vetor[0];
    int menor = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;

    delete[] vetor;
    return 0;
}

