#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,x,y,z;
	const long long a=1234567,b=123456,c=1234;
	cin>>n;
	for(x=(n/a);x>=0;x--){
		for(y=0;y<=(n/b);y++){
			z=abs((n-(a*x+b*y))/c);
            if((a*x+b*y+c*z)==n){
				cout<<"YES";
				break;
			}
		}
		if((a*x+b*y+c*z)==n){
				break;
		}
	}
	if((a*x+b*y+c*z)!=n){
		cout<<"NO";
	}
	return 0;
}
