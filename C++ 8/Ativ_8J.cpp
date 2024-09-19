#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int NUM_NUMEROS = 100;
    vector<double> numeros(NUM_NUMEROS);
    double soma = 0.0;

    cout << "Digite 100 números reais: " << endl;
    for (int i = 0; i < NUM_NUMEROS; i++) {
        cin >> numeros[i];
        soma += numeros[i];
    }

    double media = soma / NUM_NUMEROS;

    int contador_iguais_a_30 = 0;
    int contador_maiores_que_media = 0;
    int contador_iguais_a_media = 0;

    for (int i = 0; i < NUM_NUMEROS; i++) {
        if (numeros[i] == 30) {
            contador_iguais_a_30++;
        }
        if (numeros[i] > media) {
            contador_maiores_que_media++;
        }
        if (numeros[i] == media) {
            contador_iguais_a_media++;
        }
    }

    cout << "Quantidade de números iguais a 30: " << contador_iguais_a_30 << endl;
    cout << "Quantidade de números maiores que a média: " << contador_maiores_que_media << endl;
    cout << "Quantidade de números iguais à média: " << contador_iguais_a_media << endl;

    return 0;
}

