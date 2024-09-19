#include <iostream>
#include <limits> 

using namespace std;

int main() {
    int n; // Número de elementos que o usuário deseja inserir
    cout << "Quantos numeros voce deseja inserir? ";
    cin >> n;

    if (n <= 0) {
        cout << "Numero de elementos deve ser maior que 0." << endl;
        return 1; // Código de erro
    }

    int* numbers = new int[n]; // Aloca memória para os números inseridos

    cout << "Digite " << n << " numeros inteiros:" << endl;

    // Recebe os números do usuário
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    // Inicializa o maior número com o menor valor possível
    int maxNumber = numeric_limits<int>::min();

    // Encontra o maior número
    for (int i = 0; i < n; ++i) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    // Exibe o maior número
    cout << "O maior numero inserido e: " << maxNumber << endl;

    delete[] numbers; // Libera a memória alocada
    return 0;
}
