#include <iostream>
#include <string>

using namespace std;

int main() {
    string desejaComprar;
    string temDinheiro;

    cout << "Voc� deseja comprar um carro novo? (sim/n�o): ";
    cin >> desejaComprar;

    cout << "Voc� tem dinheiro suficiente para isso? (sim/n�o): ";
    cin >> temDinheiro;

    if ((desejaComprar == "sim" || desejaComprar == "SIM") && 
        (temDinheiro == "sim" || temDinheiro == "SIM")) {
        cout << "Parab�ns, voc� pode comprar um carro novo!" << endl;
    } else {
        cout << "Voc� n�o pode comprar um carro novo." << endl;
    }

    return 0;
}

