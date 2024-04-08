#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double numero; 

    cout << "Digite um numero real: ";
    cin >> numero;  


    if (numero > 0) {
        cout << "A raiz quadrada: " << sqrt(numero) << endl;
    } else {
        cout << "O quadrado do numero: " << pow(numero, 2) << endl;
    }
    
    return 0;
}
