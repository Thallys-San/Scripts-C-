#include <iostream>
#include <string>

using namespace std;

int main() {
    string adicionarAcucar;
    string adicionarLeite;

    cout << "Deseja adicionar a��car ao seu caf�? (sim/n�o): ";
    cin >> adicionarAcucar;

    cout << "Deseja adicionar leite ao seu caf�? (sim/n�o): ";
    cin >> adicionarLeite;

    if ((adicionarAcucar == "sim" || adicionarAcucar == "SIM") || 
        (adicionarLeite == "sim" || adicionarLeite == "SIM")) {
        cout << "Caf� com adicional preparado!" << endl;
    } else {
        cout << "Caf� sem adicionais preparado!" << endl;
    }

    return 0;
}

