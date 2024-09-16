#include <iostream>
using namespace std;

int main()
{
    int opcao;

    cout << "1.P \n";
    cout << "2.M \n" ;
    cout << "3.G \n" ;
    cout << "Escolha uma opcao de tamanho: ";
    cin >> opcao;
    
      switch(opcao)
    {
        case 1:
            cout << "O preco e r$50,00";
            break;

        case 2:
            cout << "O preco e r$55,00";
            break;

       case 3:
            cout << "O preco e r$60,00";
            break;
            
             default:
            cout << "Opcao invalida";

    }
    return 0;
}
