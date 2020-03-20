#include <iostream>
using namespace std;
int main(){
	int x; cin>>x;
	int aux,rpta;
	//Primera parte
	aux=x/5;
	rpta=aux;
	x=x-aux*5;
	//Segunda parte
	aux=x/4;
	rpta=rpta+aux;
	x=x-aux*4;
	//Tercera parte
	aux=x/3;
    	rpta=rpta+aux;
    	x=x-aux*3;
	//Cuarta parte
	aux=x/2;
    	rpta=rpta+aux;
    	x=x-aux*2;
	//Quinta parte
	aux=x/1;
	rpta=rpta+aux;
	x=x-aux*1;
	cout<<rpta;
}
