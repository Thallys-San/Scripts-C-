#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int NUM_NUMEROS = 100;
    vector<double> numeros(NUM_NUMEROS);
    double soma = 0.0;

    cout << "Digite 100 n�meros reais: " << endl;
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

    cout << "Quantidade de n�meros iguais a 30: " << contador_iguais_a_30 << endl;
    cout << "Quantidade de n�meros maiores que a m�dia: " << contador_maiores_que_media << endl;
    cout << "Quantidade de n�meros iguais � m�dia: " << contador_iguais_a_media << endl;

    return 0;
}

