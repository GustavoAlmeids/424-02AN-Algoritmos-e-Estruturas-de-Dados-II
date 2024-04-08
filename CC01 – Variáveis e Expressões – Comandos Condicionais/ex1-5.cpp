#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3, n4, media;

    cout << "Digite a primeira nota: ";
    cin >> n1;  

    cout << "Digite a segunda nota: ";
    cin >> n2;

    cout << "Digite a terceira nota: ";
    cin >> n3;

    cout << "Digite a quarta nota: ";
    cin >> n4;

    media = (n1+n2+n3+n4) / 4;
    cout << "A media equivalente: " << media << endl;

    return 0;
}
