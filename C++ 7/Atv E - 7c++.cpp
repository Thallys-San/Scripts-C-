#include <iostream>
using namespace std;
int main() {
    int numero, soma = 0;

    while (true) {
        cout << "Insira um n�mero inteiro (negativo para sair): ";
        cin >> numero;
        if (numero < 0) {
            break;
        }
        soma += numero;
    }

    cout << "A soma dos n�meros inseridos �: " << soma;

    return 0;
}

