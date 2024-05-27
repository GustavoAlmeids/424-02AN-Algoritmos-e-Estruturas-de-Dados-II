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

    cout << "Os elementos do vetor na ordem inversa são:" << endl;
    for (int i = tamanho - 1; i >= 0; i--) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    delete[] vetor;
    return 0;
}

