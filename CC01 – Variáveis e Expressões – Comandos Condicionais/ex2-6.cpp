#include <iostream>

using namespace std;

int main()
{
    int num1, num2; 

    cout << "Digite o primeiro numero: ";
    cin >> num1;  

    cout << "Digite o segundo numero: ";
    cin >> num2;  

    if (num1 > num2) {
        cout << "O maior numero: " << num1 << endl;
        cout << "A diferenca: " << num1 - num2 << endl;

    } else if (num1 < num2) {
        cout << "O maior numero: " << num2 << endl;
        cout << "A diferenca: " << num2 - num1 << endl;

    } else {
        cout << "O dois numeros sao iguais." << endl;
    }
    
    
    return 0;
}
