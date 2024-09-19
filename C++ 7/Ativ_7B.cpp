#include <iostream>
using namespace std;

int main(){
  int numero,i;
  cout << "Insira o numero que deseja identificar a tabuada: ";
  cin >> numero;
  do {
  	cout <<numero<<"*" <<i<<"="<<(numero*i)<<"\n";
  	i++;
  }while(i<=10);
  return 0;
}
