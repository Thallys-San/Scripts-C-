#include <iostream>
#include <string>

using namespace std;

int main() {
    string resposta;

    cout << "Você deseja comprar um produto? (sim/s): ";
    cin >> resposta;

    if (resposta == "sim" || resposta == "s") {
        cout << "Obrigado pela compra!\n";
    } else {
        cout << "Obrigado pela sua visita!\n";
    }

    return 0;
}

