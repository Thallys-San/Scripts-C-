#include <iostream>
#include <string>

using namespace std;

int main() {
    string assinante;
    string assistiuSerie;

    cout << "Você é assinante de um serviço de streaming? (sim/não): ";
    cin >> assinante;

    cout << "Você já assistiu à série específica? (sim/não): ";
    cin >> assistiuSerie;

    if ((assinante == "sim" || assinante == "SIM") && 
        (assistiuSerie == "sim" || assistiuSerie == "SIM")) {
        cout << "Ótimo, agora você pode assistir à nova temporada!" ;
    } else {
        cout << "Você não pode assistir à nova temporada ainda." ;
    }

    return 0;
}

