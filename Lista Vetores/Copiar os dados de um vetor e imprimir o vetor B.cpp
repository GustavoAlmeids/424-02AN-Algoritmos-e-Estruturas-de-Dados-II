#include <iostream>
using namespace std;

int main() {
    int A[10], B[10];

    cout << "Digite 10 números inteiros para o vetor A:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> A[i];
        B[i] = A[i];
    }

    cout << "Os elementos do vetor B são:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}

