#include <iostream>

using namespace std;

int main()
{
    double venda, valorDesconto, parcela, comissaoVista, comissaoParcelado; 

    cout << "Digite o valor da venda: ";
    cin >> venda;  

    valorDesconto = venda * 0.9;
    parcela = venda / 3;
    comissaoVista = valorDesconto * 0.05;
    comissaoParcelado = venda * 0.05;

    cout << "1.91 " << "O valor com desconto R$:" << valorDesconto << endl;
    cout << "1.92 " << "O valor da parcela R$:" << parcela << "3x sem juros" << endl;
    cout << "1.93 " << "O valor da comissao a vista R$:" << comissaoVista << endl;
    cout << "1.94 " << "O valor da comissao venda parcelada R$:" << comissaoParcelado << endl;

    return 0;
}
