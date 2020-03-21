#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		long long s,a,b,c,x,y; cin>>s>>a>>b>>c;
		x=s/c;
		y=(s/(c*a))*b;
		cout<<x+y<<endl;
	}
}
