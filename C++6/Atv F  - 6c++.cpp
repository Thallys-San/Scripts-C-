#include <iostream>
using namespace std;

int main(){
	int numero;
	cout << "Insira o numero inteiro : ";
	cin >> numero;
	
	if(numero %2 == 0){
		cout << "O numero � par ";
	}else{
		cout << "O numero informado � impar";
		}
	return 0;
}
