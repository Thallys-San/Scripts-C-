#include <iostream>

using namespace std;

int main() {
    double num1, num2;

    cout << "Digite o primeiro número real: ";
    cin >> num1;

    cout << "Digite o segundo número real: ";
    cin >> num2;

    if (num1 <= num2) {
        cout << "O primeiro número é menor ou igual ao segundo número.\n";
    } else {
        cout << "O primeiro número é maior que o segundo número.\n";
    }

    return 0;
}

