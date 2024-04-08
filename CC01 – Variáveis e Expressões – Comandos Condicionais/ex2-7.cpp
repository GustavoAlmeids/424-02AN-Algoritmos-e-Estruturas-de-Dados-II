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
    } else if (num1 < num2) {
        cout << "O maior numero: " << num2 << endl;
    } else {
        cout << "Numeros iguais." << endl;
    }
    
    return 0;
}
