#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Digite o primeiro n�mero inteiro: ";
    cin >> num1;

    cout << "Digite o segundo n�mero inteiro: ";
    cin >> num2;

    int diferen�a = abs(num1 - num2);

    if (diferen�a <= 10) {
        cout << "A diferen�a entre os n�meros � menor ou igual a 10.\n";
    } else {
        cout << "A diferen�a entre os n�meros � maior que 10.\n";
    }

    return 0;
}

