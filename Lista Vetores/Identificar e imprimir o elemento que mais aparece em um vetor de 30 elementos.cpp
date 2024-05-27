#include <iostream>
using namespace std;

int main() {
    int vetor[30];
    int maxCount = 0, mostFrequent = 0;

    cout << "Digite 30 números inteiros:" << endl;
    for (int i = 0; i < 30; i++) {
        cin >> vetor[i];
    }

    for (int i = 0; i < 30; i++) {
        int count = 0;
        for (int j = 0; j < 30; j++) {
            if (vetor[j] == vetor[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = vetor[i];
        }
    }

    cout << "O elemento que mais aparece é: " << mostFrequent << " (aparece " << maxCount << " vezes)" << endl;

    return 0;
}

