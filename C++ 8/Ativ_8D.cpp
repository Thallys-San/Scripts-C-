#include <iostream>
using namespace std;

int main() {
    int menor;
    int vetor[5] = {10, 20, 30, 40, 50};
    menor = vetor[0];
    cout << "Os valores são: ";
    for (int i = 0; i < 5; i++) {
    cout << vetor[i] << " ";
        
    if (vetor[i] < menor) {
    menor = vetor[i];
    }
    }
    cout << "O menor valor é: " << menor;

    return 0;
}

