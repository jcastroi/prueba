#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,r,n;cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b>>c>>r;
		int M,m,aux1=min(a,b),aux2=max(a,b);
		m=min(aux2,max(c-r,aux1));
		M=max(aux1,min(c+r,aux2));
		int x=abs(aux2-aux1)-abs(M-m);
		cout<<x<<endl;
	}
}
