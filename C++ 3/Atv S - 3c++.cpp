#include <iostream>
#include <string>

using namespace std;

int main() {
    string adicionarAcucar;
    string adicionarLeite;

    cout << "Deseja adicionar açúcar ao seu café? (sim/não): ";
    cin >> adicionarAcucar;

    cout << "Deseja adicionar leite ao seu café? (sim/não): ";
    cin >> adicionarLeite;

    if ((adicionarAcucar == "sim" || adicionarAcucar == "SIM") || 
        (adicionarLeite == "sim" || adicionarLeite == "SIM")) {
        cout << "Café com adicional preparado!" << endl;
    } else {
        cout << "Café sem adicionais preparado!" << endl;
    }

    return 0;
}

