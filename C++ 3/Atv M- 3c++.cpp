#include <iostream>
using namespace std;
int main() {
    int mes;

    cout << "Escolha um m�s do ano (1 a 12):" ;
    cout << "1 - Janeiro" ;
    cout << "2 - Fevereiro" ;
    cout << "3 - Mar�o" ;
    cout << "4 - Abril" ;
    cout << "5 - Maio" ;
    cout << "6 - Junho";
    cout << "7 - Julho" ;
    cout << "8 - Agosto" ;
    cout << "9 - Setembro" ;
    cout << "10 - Outubro" ;
    cout << "11 - Novembro" ;
    cout << "12 - Dezembro" ;
    cout << "Digite o n�mero do m�s: ";
    cin >> mes;

    switch (mes) {
        case 1:  
        case 3:  
        case 5:  
        case 7: 
        case 8:  
        case 10: 
        case 12:
            cout << "O m�s escolhido tem 31 dias." ;
            break;
        case 4:  
        case 6:  
        case 9:  
        case 11: 
           cout << "O m�s escolhido tem 30 dias." ;
            break;
        case 2:  
            cout << "O m�s escolhido tem 28 ou 29 dias (dependendo do ano bissexto)." ;
            break;
        default:
            cout << "Op��o inv�lida. Por favor, digite um n�mero de 1 a 12." ;
            break;
    }

    return 0;
}

