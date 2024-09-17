#include <iostream>
using namespace std;

bool isPrime(int numero) {
   
    if (numero <= 1) return false;
    
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) return false;
    }
    
    return true;
}
int main() {
    int num;
    
    cout << "Digite um numero inteiro: ";
    cin >> num;
    
    if (isPrime(num)) {
        cout << num << " e um numero primo." ;
    } else {
        cout << num << " nao e um numero primo." ;
    }
    return 0;
}
