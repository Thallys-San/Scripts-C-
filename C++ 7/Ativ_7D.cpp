#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int senha,x;
	int i;
	cout<<"Insira uma nova senha: ";
	cin>>senha;
	system("cls");
	
	cout<<"Insira sua senha: ";
	cin>>x;
	
	while(i != 3){
		if(x==senha){
			cout<<"A senha esta correta!";
			break;
		}else if(i == 2){
			cout << "tentativas excedidas.";
			break;
		}else if(x != senha){
			cout<<"Tente novamente: ";
			cin >> x;
		}
		i++;
	}
	return 0;
}
