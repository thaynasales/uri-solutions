#include <iostream>

using namespace std;

int main(){

    int n,menor,posi;
    cin>>n;
    int x[n];

    cin>>x[0];
    menor = x[0];
    posi = 0;


    for(int i=1;i<n;i++){
        cin>>x[i];

        if(x[i]<menor){
            menor = x[i];
            posi = i;
        }
    }

    cout<<"Menor valor: "<<menor<<endl;
    cout<<"Posicao: "<<posi<<endl;

}
