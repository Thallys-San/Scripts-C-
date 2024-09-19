#include<iostream>
using namespace std;
int main(){
	int x,i;
	cout<<"insira um numero: ";
	cin>>x;
	while(i<=10){
		cout<<x<<"*"<<i<<"="<<(x*i)<<"\n";
		i++;
	}
	return 0;
}
