#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"insira um numero: ";
	cin>>x;
	for(int i=0;i<=x;i++){
		if(i%2==0){
			cout<<i<<"\n";
		}
	}
	return 0;
}
