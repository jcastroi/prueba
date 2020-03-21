#include <bits/stdc++.h>

using namespace std;

#define all(A) A.begin(),A.end()
#define rall(A) A.rbegin(),A.rend()

void some_function(vector< int > v) { // Never do it unless you?re sure what you do!
// ?
}

void some_function(const vector< int >& v) { // OK
// ?
}

void modify_vector(vector< int >& v) { // Correct
v[0]++;
}

int main(){
	vector <int> arr;
	// Agregar un elemento al final - O(1)
	arr.push_back(123);
	arr.push_back(987);
	arr.push_back(343);
	arr.push_back(134);
	arr.push_back(345);

	// Quitar un elemento del final - O(1)
	arr.pop_back();

	// Agregar un elemento en la posición `i` - O(n)
	int i = 2;
	arr.insert(begin(arr) + i, 234);

	// Eliminar un elemento de la posición `i` - O(n)
	i = 1;
	arr.erase(begin(arr) + i);

	// Copiar el vector
	vector< int > v(10);
	vector< int > v2=v;
	vector< int > v3(v);

	// Para iterar el arr podemos hacerlo así:
	for (int arr_i: arr) ;

	// O también asi
	// arr.size() nos retorna la cantidad de elementos
	for (int i = 0; i < arr.size(); i++) ;
	
	// Si queremos eliminar todos los elementos
	arr.clear();

	
	int a=v.size();
	bool m= v.empty();
	cout<<"V size "<<a<<"\nV is empty? "<<m<<'\n';
	v.push_back(1);
	cout<<"V[10]= "<<v[10]<<'\n';
	a=v.size();
	cout<<"V size:"<<a<<endl;
	vector< string > names(20, "Unknown"); //Vector de 20 espacios tipo cadena y con valor "Unknown"

	//Podemos crear un vector de vectores, en otras palabras una Matriz
	int N,M;
	vector< vector< int > > Matrix(N, vector< int >(M, -1));

	//Podemos ordenar el vector de la siguiente forma
	vector< int > X;
	int arr[]={1,20,7,9,30,4};
	for(int i=0;i<6;i++)
		X.push_back(arr[i]);
	sort(all(X));
	cout<<"Ordenamos el vector de forma ascendente ";
	for(int i=0;i<X.size();i++)
		cout<<X[i]<<' ';

}
