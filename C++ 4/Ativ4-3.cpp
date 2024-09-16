#include <iostream>
using namespace std;

int main()
{
    int opcao;

    cout << "1.Segunda \n";
    cout << "2.Terca \n" ;
    cout << "3.Quarta \n" ;
    cout << "4.Quinta \n" ;
    cout << "5.Sexta \n";
    cout << "6.Sabado \n";
    cout << "7.Domingo \n";
    cout << "Digite sua opcao: ";
    cin >> opcao;
    
      switch(opcao)
    {
        case 1:
            cout << "Segunda e um dia util";
            break;

        case 2:
            cout << "Terca e um dia util";
            break;

       case 3:
            cout << "Quarta e um dia util";
            break;

        case 4:
            cout << "Quinta e um dia util";
            break;
            
        case 5:
            cout << "Sexta e um dia util";
            break;
            
        case 6:
            cout << "Sabado e um final de semana";
            break;
            
        case 7:
            cout << "Domingo e um final de semana";
            break;
            
             default:
            cout << "Opcao invalida";

    }
    return 0;
}
