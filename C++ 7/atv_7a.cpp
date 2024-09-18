#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Insira um numero inteiro positivo: ";
    cin >> x;
    if (x < 0) {
    cout << "Por favor, insira um numero positivo.";
    return 1; 
    }
    cout << "Numeros pares entre 0 e " << x << ":\n";
    for (int i = 0; i <= x; i += 2) { 
        cout << i << endl; 
    }
    return 0;
}

