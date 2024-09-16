#include <iostream>
using namespace std;
int main() {
    double num1, num2, resultado;
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    resultado = num2 - num1;
    cout << "O resultado da subtração de " << num1 << " de " << num2 << " é " << resultado << "." << endl;
    return 0;
}
