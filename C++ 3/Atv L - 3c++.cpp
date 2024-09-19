#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;

    cout << "Digite o segundo número inteiro: ";
    cin >> num2;

    int diferença = abs(num1 - num2);

    if (diferença <= 10) {
        cout << "A diferença entre os números é menor ou igual a 10.\n";
    } else {
        cout << "A diferença entre os números é maior que 10.\n";
    }

    return 0;
}

