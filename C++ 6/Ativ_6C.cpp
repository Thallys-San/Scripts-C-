#include <iostream>
using namespace std;

int main(){
    int num1, soma = 0;

    cout << "Digite os numeros acima de 0 para a continuacao da soma\n";
    cout << "Digite os numeros que deseja somar: ";
    cin >> num1;

    while (num1 > 0){
        soma = num1 + soma;
        cout << "Digite outro numero: ";
        cin >> num1;
    }
    
    cout << "O resultado da soma e: " << soma;
    return 0;
}