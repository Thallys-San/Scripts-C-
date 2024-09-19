#include <iostream>

using namespace std;

int main() {
    int ano;

   
    cout << "Digite um ano: ";
    cin >> ano;

    
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        cout << ano << " é um ano bissexto." ;
    } else {
        cout << ano << " não é um ano bissexto." ;
    }

    return 0;
}

