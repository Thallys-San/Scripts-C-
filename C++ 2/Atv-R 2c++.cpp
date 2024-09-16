#include <iostream>
using namespace std;

int main() {
    double nota1, nota2, nota3;
    double peso1, peso2, peso3;
    double mediaPonderada;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite o peso da primeira nota: ";
    cin >> peso1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite o peso da segunda nota: ";
    cin >> peso2;

    cout << "Digite a terceira nota: ";
    cin >> nota3;
    cout << "Digite o peso da terceira nota: ";
    cin >> peso3;

    mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    cout << "A média ponderada das notas é " << mediaPonderada << "." ;

    return 0;
}
