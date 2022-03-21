#include<iostream>
using namespace std;

int main(){
    int n,casos=0;

    while(cin>>n){
        int contador=1;
        casos++;

        for(int i=0;i<=n;i++){
            contador += i;
        }

        if(contador == 1){
            cout<<"Caso "<<casos<<": "<<contador<<" numero"<<endl;
        }
        else{
            cout<<"Caso "<<casos<<": "<<contador<<" numeros"<<endl;
        }

        for(int i=0;i<=n;i++){
            if(i==0 && n==0) cout<<i<<endl;
            if(i==0 && n!=0) cout<<i<<" ";
            for(int j=0;j<i;j++){
                if(i==n && j==i-1) cout<<i<<endl;
                else cout<<i<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}