#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (numero < 0) {
        cout << "O número é negativo.\n";
    } else {
        cout << "O número não é negativo.\n";
    }

    return 0;
}

