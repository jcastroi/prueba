#include <iostream>
using namespace std;
int main(){
	int n,a,b;cin>>n>>a>>b;
	int m=max(a+1,n-b);
	cout<<n-m+1;
}
