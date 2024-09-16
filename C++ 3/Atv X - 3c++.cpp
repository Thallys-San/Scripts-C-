#include <iostream>
#include <string>
using namespace std;

int main() {
    string resposta;
    cout << "Você é um robô? (responda com 'sim' ou 'não'): ";
    cin >> resposta;
    
    if (resposta == "não" || resposta == "nao") {
        cout << "Por favor, prove que você não é um robô";
    }
    
    return 0;
}
