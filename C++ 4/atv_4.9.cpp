#include<iostream>
using namespace std;
int main(){
	int mes;
	cout<<"Escolha um numero correspondente a um mes:\n1-Janeiro\n2-Fevereiro\n3-Marco\n4-Abril\n5-Maio\n6-Junho\n7-Julho\n8-Agosto\n9-Setembro\n10-Outubro\n11-Novembro\n12-Dezembro\n";
	cin>>mes;
	switch (mes){
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 12:
			cout<<"Esse mes tem 31 dias";
			break;
			case 2:
				cout<<"Esse mes tem 29 dias";
				break;
				case 4:
				case 7:
				case 9:
				case 11:
					cout<<"Esse mes tem 30 dias";
					break;
					case <12:
						cout<<"Esse mes nao existe"
	}
	return 0;
}

