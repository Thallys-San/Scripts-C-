#include <iostream>
using namespace std;
int main() {
    int numero, soma = 0;

    while (true) {
        cout << "Insira um número inteiro (negativo para sair): ";
        cin >> numero;
        if (numero < 0) {
            break;
        }
        soma += numero;
    }

    cout << "A soma dos números inseridos é: " << soma;

    return 0;
}

