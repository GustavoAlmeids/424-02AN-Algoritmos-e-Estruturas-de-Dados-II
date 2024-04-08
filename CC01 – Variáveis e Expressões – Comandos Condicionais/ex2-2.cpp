#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double numero; 

    cout << "Digite um numero: ";
    cin >> numero;  


    if (numero >= 0) {
        cout << "A raiz quadrada: " << sqrt(numero) << endl;
    } else {
        cout << "Esse numero nao possui raiz real" << endl;
    }

    return 0;
}
