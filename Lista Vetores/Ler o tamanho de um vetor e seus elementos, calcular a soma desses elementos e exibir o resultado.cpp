#include <iostream>
using namespace std;

int main() {
    int tamanho;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    int *vetor = new int[tamanho];
    int soma = 0;

    cout << "Digite os elementos do vetor:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cin >> vetor[i];
        soma += vetor[i];
    }

    cout << "A soma dos elementos do vetor é: " << soma << endl;

    delete[] vetor;
    return 0;
}

