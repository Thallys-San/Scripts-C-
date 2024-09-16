#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double numero;
    cout << "Digite um número: ";
    cin >> numero;
    if (numero < 0) {
        cout << "Erro: raiz quadrada de número negativo não é definida." << endl;
    } else {
        double raizQuadrada = sqrt(numero);
        cout << "A raiz quadrada de " << numero << " é " << raizQuadrada << "." << endl;
    }
    return 0;
}
