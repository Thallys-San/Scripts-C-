#include <iostream>
using namespace std;

int main() {
    double lado1, lado2, lado3;
    cout << "Digite o comprimento do primeiro lado: ";
    cin >> lado1;
    cout << "Digite o comprimento do segundo lado: ";
    cin >> lado2;
    cout << "Digite o comprimento do terceiro lado: ";
    cin >> lado3;
    
    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        cout << "Os lados do triângulo devem ser positivos.";
    } else if (lado1 == lado2 && lado2 == lado3) {
        cout << "O triângulo é equilátero.";
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
        cout << "O triângulo é isósceles.";
    } else {
        cout << "O triângulo é escaleno.";
    }
    
    return 0;
}
