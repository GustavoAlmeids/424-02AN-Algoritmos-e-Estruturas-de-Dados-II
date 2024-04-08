#include <iostream>

using namespace std;

int main()
{
    double salario, bonus; 

    cout << "Digite o salario do funcionario: ";
    cin >> salario;  

    bonus = salario * 1.05;

    cout << "O salario com bonus R$:" << bonus << endl;

    return 0;
}
