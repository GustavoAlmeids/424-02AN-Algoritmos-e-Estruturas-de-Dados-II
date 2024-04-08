#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double numero;
    double quadrado;

    cout << "Digite um numero real: ";
    cin >> numero;  

    quadrado = pow(numero, 2);

    cout << "O quadrado do numero " << numero << ": " << quadrado << endl;

    return 0;
}
