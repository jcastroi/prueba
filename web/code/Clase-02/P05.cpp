#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	long long x,y;
	for(int i=1;i<=n;i++){
		cin>>x>>y;
		long long a=x-y;
		if(a>1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
