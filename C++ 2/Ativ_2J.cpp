#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;
    int resto = numero % 2;
    cout << "O resto da divisão de " << numero << " por 2 é " << resto << "." << endl;
    return 0;
}
