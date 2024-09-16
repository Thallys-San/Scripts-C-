#include <iostream>
using namespace std;

int main()
{
    int opcao;

    cout << "1.Cachorro \n";
    cout << "2.Gato \n" ;
    cout << "3.Passaro \n" ;
    cout << "Digite sua opcao: ";
    cin >> opcao;
    
      switch(opcao)
    {
        case 1:
            cout << "Cachorro e amigavel e amigo do homem";
            break;

        case 2:
            cout << "Gato e gato";
            break;

       case 3:
            cout << "passaros voam";
            break;
            
             default:
            cout << "Opcao invalida";

    }
    return 0;
}
