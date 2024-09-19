#include <iostream>
using namespace std;

int main()
{
    int opcao;

    cout << "1.Saque \n";
    cout << "2.Deposito \n" ;
    cout << "3.Consulta de saldo \n" ;
    cin >> opcao;
    
      switch(opcao)
    {
        case 1:
            cout << "Voce esta no saque";
            break;

        case 2:
            cout << "Voce esta no deposito";
            break;

       case 3:
            cout << "Voce esta na consulta de saldo";
            break;
            
             default:
            cout << "Opcao invalida";

    }
    return 0;
}
