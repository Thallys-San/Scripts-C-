#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    if (num1 < num2 && num1 > num3) {
        cout << "O primeiro número é menor que o segundo número e maior que o terceiro número.";
    } else {
        cout << "O primeiro número não atende às condições.";
    }
    return 0;
}
