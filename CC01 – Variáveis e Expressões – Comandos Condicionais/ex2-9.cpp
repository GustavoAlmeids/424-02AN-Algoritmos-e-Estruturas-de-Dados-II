#include <iostream>

using namespace std;

int main()
{
    float salario, prestacao; 

    cout << "Digite o valor do salario: ";
    cin >> salario;  

    cout << "Digite o valor da prestacao: ";
    cin >> prestacao;  

    if (prestacao > salario*0.2) {
        cout << "Desculpe. Emprestimo nao concedido." << endl;
    } else {
        cout << "Parabens. Emprestimo concedido." << endl;
    }
    
    return 0;
}
