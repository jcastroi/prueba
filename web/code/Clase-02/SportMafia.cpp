/*
Tarea: Resolver el problema usando solución
de una ecuación cuadrática.
*/

#include <iostream>
using namespace std;
int main(){
	int n,k;
	cout<<"Ingrese n: ";cin>>n;
	cout<<"Ingrese k: ";cin>>k;
	//Solución iterativa
	//Solución Fuerza Bruta
	for(int i=1;i<=n;i++){ //Recorremos cada posible solución
		int aux=i*(i+1)/2;
		if(aux+i-n==k){//Comprobamos si nuestra solución cumple
			cout<<n-i;
			//Si cumple dejamos de buscar, entonces rompemos
			break;
		}
	}
}
