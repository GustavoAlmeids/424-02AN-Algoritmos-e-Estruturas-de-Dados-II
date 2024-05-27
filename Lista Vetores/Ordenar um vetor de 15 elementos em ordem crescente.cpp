#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vetor[15];

    cout << "Digite 15 números inteiros:" << endl;
    for (int i = 0; i < 15; i++) {
        cin >> vetor[i];
    }

    bubbleSort(vetor, 15);

    cout << "Os elementos do vetor em ordem crescente são:" << endl;
    for (int i = 0; i < 15; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}

