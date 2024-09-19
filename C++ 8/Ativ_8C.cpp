#include <iostream>
using namespace std;

int main() {
    int maior, Num = 0;
    
    cout << "Digite quantos numeros ira digitar: ";
    cin >> Num;
    
    int vet[Num];
    
    for (int i = 0; i < Num; i++) {
        cout << "Digite os numeros: ";
        cin >> vet[i];  
    }
    
    for (int i = 0; i < Num; i++) {
    if (i == 0) {
        maior = vet[i];
    }
    if (vet[i] > maior) {
        maior = vet[i];
    	}
	}
	
    cout << "Os numeros do array digitado sao: ";
    for (int i = 0; i < Num; i++) {
        cout << vet[i] << " ";  
    }
    
    cout << "\nO maior numero e: "<< maior;
    cout << endl; 
    return 0;
}

