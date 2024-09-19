#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double raio,raio2, altura, volume;
    cout << "Digite o raio da base do cilindro: ";
    cin >> raio;
    raio2 = pow(raio, 2);
    cout << "Digite a altura do cilindro: ";
    cin >> altura;
    volume = raio2 * altura;
    cout << "O volume do cilindro é " << volume << "." << endl;
    return 0;
}
