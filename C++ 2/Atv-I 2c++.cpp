#include <iostream>
using namespace std;
int main() {
    double num1, num2, resultado;
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    resultado = num1 * num2;
    cout << "O resultado da multiplicação de " << num1 << " por " << num2 << " é " << resultado << "." << endl;
    return 0;
}
