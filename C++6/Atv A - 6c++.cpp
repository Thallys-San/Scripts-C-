#include <iostream>
using namespace std;

int main(){
	int numero;
	cout << "Digite o numero inteiro que deseja";
	cin >> numero;
	
	cout << "Os n�meros pares at� o n�mero " << numero << " s�o: ";
    for (int i = 2; i <= numero; i += 2) {
        cout << i << " ";
    }
    cout << endl;
		
	return 0;
}
