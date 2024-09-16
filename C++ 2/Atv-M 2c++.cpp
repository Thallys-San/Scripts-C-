#include <iostream>
using namespace std;
int main() {
    double peso, altura, imc;
    cout << "Digite seu peso em kg: ";
    cin >> peso;
    cout << "Digite sua altura em metros: ";
    cin >> altura;
    imc = peso / (altura * altura);
    cout << "Seu Índice de Massa Corporal (IMC) é " << imc << "." << endl;
    return 0;
}
