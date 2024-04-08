#include <iostream>

using namespace std;

int main()
{
    float n1, n2, media; 

    cout << "Digite a primeira nota: ";
    cin >> n1;  

    cout << "Digite a segunda nota: ";
    cin >> n2;  

    if (n1 >= 0.0 && n1 <= 10.0 && n2 >= 0.0 && n2 <= 10.0) {
        media = (n1 + n2) / 2;
        cout << "A media das notas: " << media << endl;
    } else {
        cout << "Nao foi possivel calcular com esses valores, ensira notas de 0 a 10." << endl;
    }
    
    return 0;
}
