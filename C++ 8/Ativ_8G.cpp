#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
int main() {
    const int SIZE = 5;
    string nomes[SIZE];

    // Leitura dos nomes
    cout << "Digite 5 nomes:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Nome " << (i + 1) << ": ";
        getline(cin, nomes[i]);
    }

    // Ordenar os nomes
    sort(nomes, nomes + SIZE);

    // Imprimir a listagem
    cout << "\nNomes ordenados:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << nomes[i] << endl;
    }

    return 0;
}
