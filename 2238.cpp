#include<iostream>
using namespace std;

int main(){
    int d,nd,m,nm,resp=-1,inicio,fim;
    cin>>d>>nd>>m>>nm;

    if(d!=nd && m!=nm){
        inicio = d;
        fim = m;

        while(inicio<=fim){
            if(inicio%d==0 && inicio%nd!=0 && m%inicio==0 && nm%inicio!=0){
                resp = inicio;
                break;
            }
            inicio += d;
        }

    }

    cout<<resp<<endl;

    return 0;
}