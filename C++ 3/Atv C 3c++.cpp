#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    
    cout << "Digite o primeiro n�mero: ";
    cin >> num1;

    cout << "Digite o segundo n�mero: ";
    cin >> num2;
    
    if (num1 == num2) {
        cout << "Os n�meros s�o iguais." << endl;
    } else {
        cout << "Os n�meros s�o diferentes." << endl;
    }

    return 0;
}

