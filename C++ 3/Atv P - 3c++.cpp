#include <iostream>
#include <string>

using namespace std;

int main() {
    string possuiDiploma;
    int idade;

    cout << "Voc� possui um diploma de ensino superior? (sim/n�o): ";
    cin >> possuiDiploma;

    cout << "Quantos anos voc� tem? ";
    cin >> idade;

    if ((possuiDiploma == "sim" || possuiDiploma == "SIM") && idade > 21) {
        cout << "Parab�ns, voc� est� qualificado para a vaga!" << endl;
    } else {
        cout << "Voc� n�o est� qualificado para a vaga." << endl;
    }

    return 0;
}

