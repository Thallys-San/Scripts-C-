#include <iostream>

int main() {
    int numero;
    
    std::cout << "Digite um n�mero inteiro positivo: ";
    std::cin >> numero;

    
    if (numero < 0) {
        std::cout << "O numero digitado nao e positivo!" << std::endl;
        return 1; 
    }

    std::cout << "N�meros pares entre 0 e " << numero << ":";
    for (int i = 0; i <= numero; i += 2) {
        std::cout << i << std::endl;
    }

    return 0;
}
