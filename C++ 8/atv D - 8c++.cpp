#include <iostream>
using namespace std;

int main() {
    int menor;
    int vetor[5] = {10, 20, 30, 40, 50};
    menor = vetor[0];
    cout << "Os valores s�o: ";
    for (int i = 0; i < 5; i++) {
    cout << vetor[i] << " ";
        
    if (vetor[i] < menor) {
    menor = vetor[i];
    }
    }
    cout << "O menor valor �: " << menor;

    return 0;
}

