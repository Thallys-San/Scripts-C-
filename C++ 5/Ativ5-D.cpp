#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;
    
    if (numero <= 0) {
        cout << "O número deve ser um inteiro positivo.";
        return 1; 
    }

    int soma = 0;
    for (int i = 1; i <= numero; ++i) {
        soma += i;
    }

    cout << "A soma dos numeros entre 1 e " << numero << " e: " << soma;
    return 0; 
}
