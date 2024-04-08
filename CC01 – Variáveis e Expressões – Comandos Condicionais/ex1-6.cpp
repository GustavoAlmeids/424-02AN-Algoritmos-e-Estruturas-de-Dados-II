#include <iostream>

using namespace std;

int main()
{
    double real, dolar, valor;

    cout << "Digite o valor em reais: ";
    cin >> real;  

    cout << "Digite a cotacao do dolar: ";
    cin >> dolar;

    valor = real * dolar;

    cout << "O valor de R$:" << real << " equivale a US$: " << valor << endl;

    return 0;
}
