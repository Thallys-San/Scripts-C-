#include <iostream>
#include <cmath>

using namespace std;

int main() { 
int num1, soma = 0;

cout << "enquanto o numero for maior que 0 vai continuar somando\n";
cout << "Digite os numeros que deseja somar: ";
cin >> num1;

while(num1 > 0){
	soma = num1 + soma;
	cout << "Digite outro numero: ";
	cin >> num1;
}
cout << "O total da soma e: "<< soma;
return 0;
}
