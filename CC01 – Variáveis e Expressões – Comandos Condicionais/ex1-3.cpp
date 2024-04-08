#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, soma;

    cout << "Digite o primeiro numero inteiro: ";
    cin >> num1;  
    
    cout << "Digite o segundo numero inteiro: ";
    cin >> num2;

    cout << "Digite o terceiro numero inteiro: ";
    cin >> num3;

    soma = num1+num2+num3;

    cout << "Soma dos numeros: " << soma << endl;

    return 0;
}
