#include <iostream>
using namespace std;

int main() {
    int num, soma = 0;
    while (true) {
        cout << "Insira um número inteiro (negativo para sair): ";
        cin >> num;
        if (num < 0) break;
        soma += num;
    }
    cout << "A soma dos números inseridos é: " << soma << endl;
    return 0;
}
