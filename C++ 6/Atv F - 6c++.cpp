#include <iostream>
#include <cmath>

using namespace std;

int main() { 
    int w = 0, x, y = 0, z = 0; 
    
    cout << "Digite 3 numeros inteiros positivos (0 para sair):" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Digite aqui: ";
        cin >> x; 

        if (x == 0) {
            break; // Permite sair se o usuário digitar 0
        }

        if (x % 2 == 0) { 
            w++; // Contador de números pares
            y += x; // Soma dos números pares
        } 
    }

    if (w > 0) {
        z = y / w; // Média dos números pares
        cout << "Numeros pares digitados: " << w << endl;
        cout << "Soma dos numeros pares: " << y << endl;
        cout << "Media dos números pares: " << z << endl;
    } else {
        cout << "Nenhum numero par foi digitado." << endl;
    }

    return 0;
}

