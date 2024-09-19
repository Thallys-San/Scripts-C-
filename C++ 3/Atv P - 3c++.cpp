#include <iostream>
#include <string>

using namespace std;

int main() {
    string possuiDiploma;
    int idade;

    cout << "Você possui um diploma de ensino superior? (sim/não): ";
    cin >> possuiDiploma;

    cout << "Quantos anos você tem? ";
    cin >> idade;

    if ((possuiDiploma == "sim" || possuiDiploma == "SIM") && idade > 21) {
        cout << "Parabéns, você está qualificado para a vaga!" << endl;
    } else {
        cout << "Você não está qualificado para a vaga." << endl;
    }

    return 0;
}

