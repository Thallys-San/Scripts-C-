#include <iostream>
#include <limits> 

using namespace std;

int main() {
    int n; // N�mero de elementos que o usu�rio deseja inserir
    cout << "Quantos numeros voce deseja inserir? ";
    cin >> n;

    if (n <= 0) {
        cout << "Numero de elementos deve ser maior que 0." << endl;
        return 1; // C�digo de erro
    }

    int* numbers = new int[n]; // Aloca mem�ria para os n�meros inseridos

    cout << "Digite " << n << " numeros inteiros:" << endl;

    // Recebe os n�meros do usu�rio
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    // Inicializa o maior n�mero com o menor valor poss�vel
    int maxNumber = numeric_limits<int>::min();

    // Encontra o maior n�mero
    for (int i = 0; i < n; ++i) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    // Exibe o maior n�mero
    cout << "O maior numero inserido e: " << maxNumber << endl;

    delete[] numbers; // Libera a mem�ria alocada
    return 0;
}
