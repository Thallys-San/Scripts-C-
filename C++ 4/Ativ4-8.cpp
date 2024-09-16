#include <iostream>
using namespace std;

int main()
{
    int opcao;

    cout << "1.Portugues \n";
    cout << "2.Ingles \n" ;
    cout << "Escolha uma opcao de idioma: ";
    cin >> opcao;
    
      switch(opcao)
    {
        case 1:
            cout << "Bem vindo!";
            break;

        case 2:
            cout << "Welcome!";
            break;
      
             default:
            cout << "Opcao invalida";

    }
    return 0;
}
