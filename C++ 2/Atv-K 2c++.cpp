#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;
    int divisor = 2;
    int resultado = numero / divisor;
    cout << "O resultado da divisão inteira de " << numero << " por " << divisor << " é " << resultado << "." << endl;
    return 0;
}
