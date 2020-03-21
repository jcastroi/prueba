#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Digite n:"; cin>>n;
    cout<<"Digite m: "; cin>>m;
    if(m%n==0){
        int aux=m/n;
        int i=0,j=0; //Contadores
        //Hallamos los exponentes del i y del j
        while(aux%2==0){
            aux/=2;
            i++;
        }
        while(aux%3==0){
            aux/=3;
            j++;
        }
         //Comprobamos que solo tenga factores 2 y 3
        if(aux==1){
            cout<<i+j;
        }else{
            cout<<"-1";
        }
    }else{
        cout<<"-1";
    }
}
