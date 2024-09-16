#include <iostream>
#include <string>
using namespace std;

int main() {
    string resposta;
    cout << "Você não deseja cancelar a operação? (responda com 'sim' ou 'não'): ";
    cin >> resposta;
    
    if (resposta == "não" || resposta == "nao") {
        cout << "Por favor, confirme o cancelamento da operação";
    }
    
    return 0;
}
