#include <iostream>

using namespace std;

int main() {
    double num1, num2;

    cout << "Digite o primeiro n�mero real: ";
    cin >> num1;

    cout << "Digite o segundo n�mero real: ";
    cin >> num2;

    if (num1 <= num2) {
        cout << "O primeiro n�mero � menor ou igual ao segundo n�mero.\n";
    } else {
        cout << "O primeiro n�mero � maior que o segundo n�mero.\n";
    }

    return 0;
}

