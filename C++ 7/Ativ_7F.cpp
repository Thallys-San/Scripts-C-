#include <iostream>
using namespace std;

int main() {
    int x,i;
    cout << "Insira um numero inteiro positivo: ";
    cin >> x;
    if (x < 0) {
    cout << "Por favor, insira um numero positivo.";
    }
    while (i<=x){
    	if(i%2!=0){
    		cout<<i<<"\n";
		}
    	i++;
	}
    return 0;
}

