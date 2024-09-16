#include <iostream>
using namespace std;
int main() {
    double num1, num2, num3, media;
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Digite o terceiro número: ";
    cin >> num3;
    media = (num1 + num2 + num3) / 3;                                                                                                                                                                                               
    cout << "A média aritmética de " << num1 << ", " << num2 << " e " << num3 << " é " << media << "." << endl;
    return 0;
}
