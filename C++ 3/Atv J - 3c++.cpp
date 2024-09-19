#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (numero > 0) {
        cout << "O número é positivo.\n";
    } else {
        cout << "O número não é positivo.\n";
    }

    return 0;
}

