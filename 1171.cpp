#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int x, contador;
    cin>>x;
    int a[x];

    for(int i=0;i<x;i++){
        cin>>a[i];
    }

    sort(a, a+x);

    contador=1;
    for(int i=0;i<x;i++){

        if(a[i]==a[i+1]){
            contador++;
        }
        else{
           cout<<a[i]<<" aparece "<<contador<<" vez(es)"<<endl;
           contador=1;
        }
    }
}
