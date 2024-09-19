#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "O número é par." ;
    } else {
        cout << "O número é ímpar." ;
    }

    return 0;
}

