#include <iostream>
using namespace std;

int main() {
    const int NUM_MERCADORIAS = 100;
    int contador_lucro_menor_10 = 0;
    int contador_lucro_entre_10_e_20 = 0;
    int contador_lucro_maior_20 = 0;

    for (int i = 1; i <= NUM_MERCADORIAS; i++) {
        double preco_compra, preco_venda;
        
        cout << "Digite o preço de compra da mercadoria " << i << ": ";
        cin >> preco_compra;
        
        cout << "Digite o preço de venda da mercadoria " << i << ": ";
        cin >> preco_venda;

        if (preco_venda > preco_compra) {
            double lucro = (preco_venda - preco_compra) / preco_compra * 100;

            if (lucro < 10) {
                contador_lucro_menor_10++;
            } else if (lucro <= 20) {
                contador_lucro_entre_10_e_20++;
            } else {
                contador_lucro_maior_20++;
            }
        }
    }

    cout << "Quantidade de mercadorias com lucro < 10%: " << contador_lucro_menor_10 << endl;
    cout << "Quantidade de mercadorias com 10% <= lucro <= 20%: " << contador_lucro_entre_10_e_20 << endl;
    cout << "Quantidade de mercadorias com lucro > 20%: " << contador_lucro_maior_20 << endl;

    return 0;
}

