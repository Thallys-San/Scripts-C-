#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um n�mero inteiro: ";
    cin >> numero;

    if (numero < 0) {
        cout << "O n�mero � negativo.\n";
    } else {
        cout << "O n�mero n�o � negativo.\n";
    }

    return 0;
}

