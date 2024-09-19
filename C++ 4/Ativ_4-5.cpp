#include <iostream>
using namespace std;

int main()
{ int opcao;  
cout << "Escola sua velocidade"; 
cout << "1Baixa \n";
cout << "2Media \n";
cout << "3Alta \n";
cout << "Escolha uma opcao";
cin >> opcao; 
switch (opcao) 
{ 
case 1: 
cout << "A velocidade habilitada foi a baixa, limite de 30km/h";
break;

case 2: 
cout << "A velocidade habilitada foi a media, limite de 70km/h";
break;

case 3: 
cout << "A velocidade habilitada foi a alta, limite de *ILIMITADA*";
break;

return 0; 
	}	
}
