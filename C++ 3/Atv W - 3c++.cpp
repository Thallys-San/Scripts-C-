#include <iostream>
using namespace std;

int main() {
    int numero;
    cin >> numero;
    if (numero > 10 || numero < 0) {
        cout << "Número inválido!";
    }
    return 0;
}
