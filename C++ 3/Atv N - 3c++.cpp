#include <iostream>
#include <string>

using namespace std;

int main() {
    int idade;
    string possuiCarteira;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Voc� possui carteira de motorista? (sim/n�o): ";
    cin.ignore(); 
    getline(cin, possuiCarteira);

    if (idade > 18 && (possuiCarteira == "sim" || possuiCarteira == "SIM")) {
        cout << "Voc� pode dirigir.";
    } else {
        cout << "Voc� n�o pode dirigir.";
    }

    return 0;
}

