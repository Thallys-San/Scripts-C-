#include <iostream>

using namespace std;

int main() {
    int ano;

   
    cout << "Digite um ano: ";
    cin >> ano;

    
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        cout << ano << " � um ano bissexto." ;
    } else {
        cout << ano << " n�o � um ano bissexto." ;
    }

    return 0;
}

