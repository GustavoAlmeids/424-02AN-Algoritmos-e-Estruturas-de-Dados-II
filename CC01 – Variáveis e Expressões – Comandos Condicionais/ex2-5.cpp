#include <iostream>

using namespace std;

int main()
{
    int numero; 

    cout << "Digite um numero inteiro: ";
    cin >> numero;  

    if (numero % 2 == 0) {
        cout << "Numero par." << endl;
    } else {
        cout << "Numero impar. " << endl;
    }
    
    return 0;
}
