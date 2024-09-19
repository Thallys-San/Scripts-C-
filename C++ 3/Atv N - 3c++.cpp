#include <iostream>
#include <string>

using namespace std;

int main() {
    int idade;
    string possuiCarteira;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Você possui carteira de motorista? (sim/não): ";
    cin.ignore(); 
    getline(cin, possuiCarteira);

    if (idade > 18 && (possuiCarteira == "sim" || possuiCarteira == "SIM")) {
        cout << "Você pode dirigir.";
    } else {
        cout << "Você não pode dirigir.";
    }

    return 0;
}

