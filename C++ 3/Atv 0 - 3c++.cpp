#include <iostream>
#include <string>

using namespace std;

int main() {
    string desejaComprar;
    string temDinheiro;

    cout << "Você deseja comprar um carro novo? (sim/não): ";
    cin >> desejaComprar;

    cout << "Você tem dinheiro suficiente para isso? (sim/não): ";
    cin >> temDinheiro;

    if ((desejaComprar == "sim" || desejaComprar == "SIM") && 
        (temDinheiro == "sim" || temDinheiro == "SIM")) {
        cout << "Parabéns, você pode comprar um carro novo!" << endl;
    } else {
        cout << "Você não pode comprar um carro novo." << endl;
    }

    return 0;
}

