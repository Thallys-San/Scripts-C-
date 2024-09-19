#include <iostream>
#include <string>
using namespace std;

int main() {
    string resposta;
    cout << "Você não é um membro inativo do clube? (responda com 'sim' ou 'não'): ";
    cin >> resposta;
    
    if (resposta == "não" || resposta == "nao") {
        cout << "Por favor, atualize sua inscrição para continuar usufruindo dos benefícios do clube";
    }
    
    return 0;
}
