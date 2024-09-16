#include <iostream>
#include <cmath> 

using namespace std;


double raizq(double numero) {
    return sqrt(numero);
}

int main() {
    double numero;

    cout << "Digite um n�mero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "N�o � poss�vel calcular a raiz quadrada de um n�mero negativo.\n";
    } else {
        double resultado = raizq(numero);
        cout << "A raiz quadrada de " << numero << " � " << resultado << ".\n";
    }

    return 0;
}

