#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um n�mero inteiro: ";
    cin >> numero;

    if (numero % 2 != 0) {
        cout << "O n�mero � �mpar.\n";
    } else {
        cout << "O n�mero � par.\n";
    }

    return 0;
}

