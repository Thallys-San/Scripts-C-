#include <iostream>
#include <string>

using namespace std;

int main() {
    string assinante;
    string assistiuSerie;

    cout << "Voc� � assinante de um servi�o de streaming? (sim/n�o): ";
    cin >> assinante;

    cout << "Voc� j� assistiu � s�rie espec�fica? (sim/n�o): ";
    cin >> assistiuSerie;

    if ((assinante == "sim" || assinante == "SIM") && 
        (assistiuSerie == "sim" || assistiuSerie == "SIM")) {
        cout << "�timo, agora voc� pode assistir � nova temporada!" ;
    } else {
        cout << "Voc� n�o pode assistir � nova temporada ainda." ;
    }

    return 0;
}

