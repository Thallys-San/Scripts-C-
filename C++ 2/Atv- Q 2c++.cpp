#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double raio, altura, volume;
    cout << "Digite o raio da base do cilindro: ";
    cin >> raio;
    cout << "Digite a altura do cilindro: ";
    cin >> altura;
    volume = M_PI * raio * raio * altura;
    cout << "O volume do cilindro é " << volume << "." << endl;
    return 0;
}
