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
            break; // Permite sair se o usu�rio digitar 0
        }

        if (x % 2 == 0) { 
            w++; // Contador de n�meros pares
            y += x; // Soma dos n�meros pares
        } 
    }

    if (w > 0) {
        z = y / w; // M�dia dos n�meros pares
        cout << "Numeros pares digitados: " << w << endl;
        cout << "Soma dos numeros pares: " << y << endl;
        cout << "Media dos n�meros pares: " << z << endl;
    } else {
        cout << "Nenhum numero par foi digitado." << endl;
    }

    return 0;
}

