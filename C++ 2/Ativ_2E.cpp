#include <iostream>
#include <cmath> 
using namespace std;

double raizq(double numero) {
    return sqrt(numero);
}

int main() {
    double numero;

    cout << "Digite um número: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Não é possível calcular a raiz quadrada de um número negativo.\n";
    } else {
        double resultado = raizq(numero);
        cout << "A raiz quadrada de " << numero << " é " << resultado << ".\n";
    }

    return 0;
}

