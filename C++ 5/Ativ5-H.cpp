#include <iostream>
using namespace std;

int main ()
{
	int numero, i, resto;
	cout << "Digite um numero: ";
	cin >> numero;
	cout << "Os divisores sao: ";
	for (i=1; i<=numero ; i=i+1)
	{
		resto = numero%i;
		if (resto==0)
		{
			cout << i << " ";
		}	
	}
	cout << endl;
	return 0;
	
}
