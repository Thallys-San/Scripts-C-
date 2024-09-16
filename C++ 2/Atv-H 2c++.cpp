#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double numero;
    cout << "Digite um número: ";
    cin >> numero;
    double valorAbsoluto = abs(numero);
    cout << "O valor absoluto de " << numero << " é " << valorAbsoluto << "." << endl;
    return 0;
}
