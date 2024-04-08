#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double numero; 

    cout << "Digite um numero real: ";
    cin >> numero;  


    if (numero > 0) {
        cout << "2.41 " << "O quadrado do numero: " << pow(numero, 2) << endl;
        cout << "2.42 " << "A raiz quadrada: " << sqrt(numero) << endl;
    } else {
        cout << "Numero invalido." << endl;
    }
    
    return 0;
}
