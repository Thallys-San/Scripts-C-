#include <iostream>
using namespace std;
int main() {
    double preco, desconto, precoFinal;
    cout << "Digite o preço do produto: ";
    cin >> preco;
    cout << "Digite o desconto em porcentagem: ";
    cin >> desconto;
    precoFinal = preco * (1 - desconto / 100);
    cout << "O preço final com o desconto é " << precoFinal << "." << endl;
    return 0;
}
