#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    
    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;
    
    if (num1 == num2) {
        cout << "Os números são iguais." << endl;
    } else {
        cout << "Os números são diferentes." << endl;
    }

    return 0;
}

