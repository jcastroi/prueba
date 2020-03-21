#include <bits/stdc++.h>
using namespace std;
int main(){
	int b,g,n,contador=0; cin>>b>>g>>n;
	for (int i=0; i<=n ; i++){
		if( i<=b && n-i<=g ){ contador++;	}
	}
	cout<<contador;
}
