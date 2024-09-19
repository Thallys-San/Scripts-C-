#include <iostream>
using namespace std;

int main() {
    const int NUM_MESAS = 30;
    const int LUGARES_POR_MESA = 5;
    const int TOTAL_LUGARES = NUM_MESAS * LUGARES_POR_MESA;

    int reservas[NUM_MESAS] = {0};
    int lugares_ocupados = 0;

    while (true) {
        int codigo_mesa;
        int quantidade_desejada;

        cout << "Digite o código da mesa (100 a 129) ou 0 para sair: ";
        cin >> codigo_mesa;

        if (codigo_mesa == 0) {
            break;
        }

        if (codigo_mesa < 100 || codigo_mesa > 129) {
            cout << "Código de mesa inválido! Tente novamente." << endl;
            continue;
        }

        int indice_mesa = codigo_mesa - 100;

        cout << "Digite a quantidade de lugares desejados: ";
        cin >> quantidade_desejada;

        if (quantidade_desejada <= 0 || quantidade_desejada > LUGARES_POR_MESA) {
            cout << "Quantidade de lugares inválida! Deve ser entre 1 e " << LUGARES_POR_MESA << "." << endl;
            continue;
        }

        if (reservas[indice_mesa] + quantidade_desejada <= LUGARES_POR_MESA && lugares_ocupados + quantidade_desejada <= TOTAL_LUGARES) {
            reservas[indice_mesa] += quantidade_desejada;
            lugares_ocupados += quantidade_desejada;
            cout << "Reserva realizada com sucesso!" << endl;
        } else {
            cout << "Não foi possível realizar a reserva. Verifique se há lugares disponíveis." << endl;
        }

        if (lugares_ocupados >= TOTAL_LUGARES) {
            cout << "Todos os lugares estão ocupados!" << endl;
            break;
        }
    }

    cout << "Sistema encerrado. Obrigado!" << endl;
    return 0;
}

